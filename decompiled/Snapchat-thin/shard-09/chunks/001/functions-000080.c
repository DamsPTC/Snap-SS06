/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10697b6a0; end: 10697b7e7; -[SCAdAppInstallAttachmentPresenter storeProductViewPresenterDidLoad:storeKitLoadInfo:] */

void FUN_10697b6a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf77b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf77b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fee0(param_5);
    uVar3 = param_5;
    func_0x00010c0f1740(param_5);
    uVar4 = param_5;
    func_0x00010c0f1720(param_5);
    (**(code **)(lVar2 + 0x10))(param_1,lVar2,uVar3,uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  puVar5 = PTR_PTR_1126bdc88;
  func_0x00010bf05740(PTR_PTR_1126bdc88);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c271a00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1ea0(param_2);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10697b7e8; end: 10697b97b; -[SCAdAppInstallAttachmentPresenter storeProductViewPresenter:didCloseStoreViewWithStoreKitLoadInfo:] */

void FUN_10697b7e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf73b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf73b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fee0(param_5);
    uVar3 = param_5;
    func_0x00010c0f1740(param_5);
    uVar4 = param_5;
    func_0x00010c0f1720(param_5);
    (**(code **)(lVar2 + 0x10))(param_1,lVar2,uVar3,uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined1 *)(param_2 + 0x20) = 0;
  uVar3 = param_5;
  func_0x00010c271a00(param_5);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  puVar5 = PTR_PTR_1126bdc88;
  func_0x00010bf05740(PTR_PTR_1126bdc88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cf540;
  func_0x00010bf054e0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(param_2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10697b97c; end: 10697ba03; -[SCAdAppInstallAttachmentPresenter storeProductViewPresenterDidOpenStoreView:] */

void FUN_10697b97c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126bdc88;
  func_0x00010bf05740(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf540;
  func_0x00010bf054e0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1ec0(lVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697ba04; end: 10697bacb; -[SCAdAppInstallAttachmentPresenter storeProductViewPresenter:failedToPresentWithError:] */

void FUN_10697ba04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126bdc88;
  func_0x00010bf05740(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126cf540;
  func_0x00010bf054e0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar1,param_2,puVar2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697bacc; end: 10697bae3; -[SCAdAppInstallAttachmentPresenter delegate] */

void FUN_10697bacc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10697bae4; end: 10697baef; -[SCAdAppInstallAttachmentPresenter setDelegate:] */

void FUN_10697bae4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10697baf0; end: 10697bb33; -[SCAdAppInstallAttachmentPresenter .cxx_destruct] */

void FUN_10697baf0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10697bb34; end: 10697bbcf; -[AppInstallStoreKitLoadInfo toAttachmentLoadingMetrics] */

void FUN_10697bb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cf548;
  _objc_alloc(PTR_PTR_1126cf548);
  func_0x00010c29fee0(param_2);
  uVar2 = param_2;
  func_0x00010c0f1720(param_2);
  func_0x00010c0f1740(param_2);
  func_0x00010c062580(param_1,puVar1,param_3,uVar2,param_2);
  puVar3 = PTR_PTR_1126cf550;
  func_0x00010bf42b80(PTR_PTR_1126cf550,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10697bbd0; end: 10697bcff; -[SCAdsStoreProductViewPreloadablePresenter initWithSkAdNetworkMetricsManager:internalErrorMetricsManager:storeProductPageController:timeProvider:adCrashLogger:] */

undefined1 *
FUN_10697bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3eb0;
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
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10697bd00; end: 10697c007; -[SCAdsStoreProductViewPreloadablePresenter presentStoreProductViewWithStoreParams:appInstallParams:uiContainer:backgroundExitBehavior:skanImpressionSource:] */

void FUN_10697bd00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befdec0(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0640();
    _objc_release(uVar2);
    ppuVar5 = (undefined **)(param_1 + 0x48);
    _objc_loadWeakRetained(ppuVar5);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e66418;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257ba0(ppuVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar5);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x30) = param_7;
    _objc_initWeak(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10697c008;
    puStack_90 = &UNK_1108434b0;
    ppuVar5 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c10e5a0(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdfedc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697c008; end: 10697c033;  */

void FUN_10697c008(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfedc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697c034; end: 10697c043; -[SCAdsStoreProductViewPreloadablePresenter dismissStoreProductView] */

void FUN_10697c034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf845b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissStoreProductAnimated_comp_1125beb10,1,0);
  return;
}



/* Entry: 10697c044; end: 10697c0af; -[SCAdsStoreProductViewPreloadablePresenter _didPresentProductViewController] */

void FUN_10697c044(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697c0b0; end: 10697c1f7; -[SCAdsStoreProductViewPreloadablePresenter didLoadStoreProduct:error:perceivedLatency:preloaded:] */

void FUN_10697c0b0(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(undefined **)(param_2 + 0x38) = puVar1;
  _objc_release(uVar5);
  uVar2 = param_2;
  func_0x00010bec4080(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aea60(param_1);
  _objc_release(uVar5);
  if (param_4 != 0) {
    uVar3 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257bc0();
      _objc_release(param_2);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10697c1f8; end: 10697c1fb; -[SCAdsStoreProductViewPreloadablePresenter willDismissStoreProductViewController] */

void FUN_10697c1f8(void)

{
  return;
}



/* Entry: 10697c1fc; end: 10697c2b7; -[SCAdsStoreProductViewPreloadablePresenter didDismissStoreProductViewController] */

void FUN_10697c1fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bec4080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = lVar1;
  func_0x00010c0f1720(lVar1);
  lVar4 = lVar1;
  func_0x00010c0f1740(lVar1);
  func_0x00010c29fee0(lVar1);
  func_0x00010c0b0bc0(uVar2,param_2,uVar5,lVar3,lVar4);
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257b80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697c2b8; end: 10697c3ab; -[SCAdsStoreProductViewPreloadablePresenter didFailToPresentStoreProductViewController] */

void FUN_10697c2b8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e66438;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3,param_3,&PTR____CFConstantStringClassReference_110e663b8,2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257ba0(lVar1,param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (*(long *)(lVar1 + 0x38) == 0) {
      func_0x00010beec800(*(undefined8 *)(lVar1 + 0x18));
      dVar4 = param_1;
      func_0x00010bf885a0(*(undefined8 *)(lVar1 + 0x40));
      param_1 = param_1 - dVar4;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      func_0x00010bf885a0(*(long *)(lVar1 + 0x38));
      dVar4 = param_1;
      func_0x00010bf885a0(*(undefined8 *)(lVar1 + 0x40));
      param_1 = param_1 - dVar4;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      if (*(long *)(lVar1 + 0x40) != 0) {
        func_0x00010bf885a0(*(undefined8 *)(lVar1 + 0x38));
        func_0x00010bf885a0(*(undefined8 *)(lVar1 + 0x40));
      }
    }
    _objc_alloc(PTR_PTR_1126cf558);
    func_0x00010c033160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10697c3ac; end: 10697c46f; -[SCAdsStoreProductViewPreloadablePresenter _storeKitLoadData] */

void FUN_10697c3ac(double param_1,long param_2)

{
  double dVar1;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
    dVar1 = param_1;
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x40));
    param_1 = param_1 - dVar1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  else {
    func_0x00010bf885a0(*(long *)(param_2 + 0x38));
    dVar1 = param_1;
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x40));
    param_1 = param_1 - dVar1;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x38));
      func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x40));
    }
  }
  _objc_alloc(PTR_PTR_1126cf558);
  func_0x00010c033160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10697c470; end: 10697c487; -[SCAdsStoreProductViewPreloadablePresenter delegate] */

void FUN_10697c470(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10697c488; end: 10697c493; -[SCAdsStoreProductViewPreloadablePresenter setDelegate:] */

void FUN_10697c488(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10697c494; end: 10697c507; -[SCAdsStoreProductViewPreloadablePresenter .cxx_destruct] */

void FUN_10697c494(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 10697c508; end: 10697c65b; -[SCAdDeepLinkAttachmentPresenter initWithAttachment:deepLinkUrlHandler:fallbackAttachmentPresenter:internalErrorMetricsManager:delegate:disableInternalBrowserPresenter:adConfigProvider:] */

undefined1 *
FUN_10697c508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f3eb8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10697c65c; end: 10697c67b; -[SCAdDeepLinkAttachmentPresenter canHandleAttachment:] */

bool FUN_10697c65c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0d600(param_3);
  return param_3 == 3;
}



/* Entry: 10697c67c; end: 10697c883; -[SCAdDeepLinkAttachmentPresenter presentAttachment] */

void FUN_10697c67c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28f280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082dc0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0d900();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f0e358;
  puStack_50 = PTR____kCFBooleanTrue_11034ab68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_60,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_60);
  uStack_68 = uVar5;
  func_0x00010bfd1b80(uVar6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010be28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10697c884; end: 10697c8cf;  */

void FUN_10697c884(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697c8d0; end: 10697c9a7; -[SCAdDeepLinkAttachmentPresenter dismissAttachment] */

void FUN_10697c8d0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126bdc88;
  func_0x00010bf683a0(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf540;
  func_0x00010bf683c0(PTR_PTR_1126cf540,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c07ab40();
  if ((uVar4 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c07ab40();
    if (iVar1 != 0) {
      func_0x00010bf83200(*(undefined8 *)(param_1 + 0x10));
      goto LAB_10697c98c;
    }
  }
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar5);
  puVar6 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar5,param_2,puVar2,puVar6,puVar3);
  _objc_release(puVar6);
  _objc_release(lVar5);
LAB_10697c98c:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10697c9a8; end: 10697c9af; -[SCAdDeepLinkAttachmentPresenter isPresenting] */

void FUN_10697c9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isPresenting_1125fc4e0);
  return;
}



/* Entry: 10697c9b0; end: 10697ccbf; -[SCAdDeepLinkAttachmentPresenter _handleDeepLinkWithSuccess:isExternal:] */

void FUN_10697c9b0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c068fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c068fc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126cf540;
  func_0x00010bf683c0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010bfa03e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((puVar3 != (undefined *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
      lVar4 = *(long *)(param_1 + 8);
      func_0x00010bf286c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        lVar1 = *(long *)(param_1 + 8);
        func_0x00010bf286c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010bfa05a0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))();
        _objc_release(lVar4);
        _objc_release(lVar1);
      }
      func_0x00010be29500(param_1);
      goto LAB_10697cc98;
    }
    func_0x00010c0da6c0(PTR_PTR_1126cf538);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    puVar5 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar5);
    puVar7 = PTR_PTR_1126bdc88;
    func_0x00010bf683a0(PTR_PTR_1126bdc88);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    puVar6 = PTR_PTR_1126bdc88;
    func_0x00010bf683a0(PTR_PTR_1126bdc88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1ec0(lVar4);
    _objc_release(puVar6);
    _objc_release(lVar4);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained(puVar6);
    puVar5 = PTR_PTR_1126bdc88;
    func_0x00010bf683a0(PTR_PTR_1126bdc88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_10697cc98:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10697ccc0; end: 10697ce3b; -[SCAdDeepLinkAttachmentPresenter _handleFallback] */

void FUN_10697ccc0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa03e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1700();
  _objc_release(uVar1);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    func_0x00010c10b280(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    puVar3 = PTR_PTR_1126bdc88;
    func_0x00010bf683a0(PTR_PTR_1126bdc88);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cf540;
    func_0x00010bf683c0(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 10697ce3c; end: 10697ce7f;  */

void FUN_10697ce3c(long param_1,long param_2)

{
  func_0x00010bf0d1e0();
  if ((param_2 == 0) && (*(char *)(*(long *)(param_1 + 0x20) + 0x30) == '\x01')) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 10697ce80; end: 10697ce83;  */

void FUN_10697ce80(void)

{
  return;
}



/* Entry: 10697ce84; end: 10697ce87; -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterTriggerAttempt:] */

void FUN_10697ce84(void)

{
  return;
}



/* Entry: 10697ce88; end: 10697ce8b; -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidLoad:metrics:] */

void FUN_10697ce88(void)

{
  return;
}



/* Entry: 10697ce8c; end: 10697ce8f; -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidTrigger:] */

void FUN_10697ce8c(void)

{
  return;
}



/* Entry: 10697ce90; end: 10697cef7; -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidPresent:attachmentMetadata:] */

void FUN_10697ce90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef1ec0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697cef8; end: 10697cf77; -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidComplete:result:attachmentMetadata:] */

void FUN_10697cef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef1e80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697cf78; end: 10697cfd3; -[SCAdDeepLinkAttachmentPresenter .cxx_destruct] */

void FUN_10697cf78(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10697cfd4; end: 10697d077; -[SCAdAttachmentPresenterLogger initWithGrapheneRegistry:userBlizzard:] */

undefined1 *
FUN_10697cfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3ec0;
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



/* Entry: 10697d078; end: 10697d177; -[SCAdAttachmentPresenterLogger logAttachmentPresentRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c27e4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be50a60(param_1,param_2,4,uVar2,uVar3,param_3,param_4,param_6,0);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10697d178; end: 10697d277; -[SCAdAttachmentPresenterLogger logAttachmentDidPresentWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c27e3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be50a60(param_1,param_2,5,uVar2,uVar3,param_3,param_4,param_6,0);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10697d278; end: 10697d3db; -[SCAdAttachmentPresenterLogger logAttachmentPresentFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_6);
  func_0x00010c27e480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 == 0) {
    func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  }
  else {
    lVar2 = param_5;
    func_0x00010bf3ec40(param_5);
    func_0x00010c0df780(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  uVar4 = param_6;
  func_0x00010bef2c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c15ed20(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be50a60(param_1,param_2,6,uVar4,uVar5,param_3,param_4,param_7,param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697d3dc; end: 10697d4db; -[SCAdAttachmentPresenterLogger logAttachmentPreloadRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c27e460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be50a60(param_1,param_2,1,uVar2,uVar3,param_3,param_4,param_6,0);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10697d4dc; end: 10697d5db; -[SCAdAttachmentPresenterLogger logAttachmentDidPreloadWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c27e3c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be50a60(param_1,param_2,2,uVar2,uVar3,param_3,param_4,param_6,0);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10697d5dc; end: 10697d73f; -[SCAdAttachmentPresenterLogger logAttachmentPreloadFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_6);
  func_0x00010c27e440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 == 0) {
    func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  }
  else {
    lVar2 = param_5;
    func_0x00010bf3ec40(param_5);
    func_0x00010c0df780(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  uVar4 = param_6;
  func_0x00010bef2c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c15ed20(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be50a60(param_1,param_2,3,uVar4,uVar5,param_3,param_4,param_7,param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697d740; end: 10697d83f; -[SCAdAttachmentPresenterLogger logAttachmentDismissRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c27e420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be50a60(param_1,param_2,7,uVar2,uVar3,param_3,param_4,param_6,0);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10697d840; end: 10697d93f; -[SCAdAttachmentPresenterLogger logAttachmentDidDismissWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c27e3a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  _objc_release(puVar1);
  uVar2 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be50a60(param_1,param_2,8,uVar2,uVar3,param_3,param_4,param_6,0);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10697d940; end: 10697daa3; -[SCAdAttachmentPresenterLogger logAttachmentDismissFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:] */

void FUN_10697d940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_6);
  func_0x00010c27e400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 == 0) {
    func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,0);
  }
  else {
    lVar2 = param_5;
    func_0x00010bf3ec40(param_5);
    func_0x00010c0df780(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50600(param_1,param_2,puVar1,param_3,param_4,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  uVar4 = param_6;
  func_0x00010bef2c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c15ed20(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010be50a60(param_1,param_2,9,uVar4,uVar5,param_3,param_4,param_7,param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697daa4; end: 10697dbf7; -[SCAdAttachmentPresenterLogger _logAttachmentMetricWithMetric:originIdentifier:attachmentType:errorCode:] */

void FUN_10697daa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110f27338,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110f27358,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar5 = uVar3;
  if (param_6 != 0) {
    uVar4 = param_1;
    func_0x00010bdd0a00(param_1,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110db0dd8,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10697dbf8; end: 10697dc3f; -[SCAdAttachmentPresenterLogger _graphene] */

void FUN_10697dbf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10697dc40; end: 10697ddbb; -[SCAdAttachmentPresenterLogger _logBlizzardEventWithLifecycle:adId:serveItemId:originIdentifier:attachmentType:fallbackAttachmentType:error:] */

void FUN_10697dc40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126cf560;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c163720();
  _objc_release(param_4);
  func_0x00010c1fd160(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1d64e0(puVar1,param_2,param_6);
  _objc_release(param_6);
  lVar2 = param_1;
  func_0x00010bdd0b40(param_1,param_2,param_7);
  func_0x00010c21acc0(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010bdd0ae0(param_1,param_2,param_3);
  func_0x00010c1bd920(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010bdf8e00(param_1,param_2,param_8);
  func_0x00010c18a820(puVar1,param_2,lVar2);
  if (param_9 != 0) {
    lVar2 = param_9;
    func_0x00010bf3ec40(param_9);
    func_0x00010c16b0e0(puVar1,param_2,lVar2);
    lVar2 = param_9;
    func_0x00010c09e4e0(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 10697ddbc; end: 10697dddf; -[SCAdAttachmentPresenterLogger _attachmentType:] */

undefined8 FUN_10697ddbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10dde31f8 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10697dde0; end: 10697ddf3; -[SCAdAttachmentPresenterLogger _attachmentPresenterLifecycle:] */

long FUN_10697dde0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + -1;
  if (7 < param_3 - 2U) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10697ddf4; end: 10697de17; -[SCAdAttachmentPresenterLogger _deepLinkFallbackType:] */

undefined8 FUN_10697ddf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10dde3228 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10697de18; end: 10697df33; -[SCAdAttachmentPresenterLogger _attachmentErrorCodeToString:] */

void FUN_10697de18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c282760();
  puVar1 = PTR_PTR_1126cf538;
  func_0x00010c2808e0();
  if (puVar1 != (undefined *)(param_3 & 0xffffffff)) {
    puVar2 = (undefined *)(param_3 & 0xffffffff);
    puVar1 = PTR_PTR_1126cf538;
    func_0x00010bf2f8c0();
    if (puVar1 == puVar2) {
      func_0x00010bf2f8c0(PTR_PTR_1126cf568);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10697df28;
    }
    puVar1 = PTR_PTR_1126cf538;
    func_0x00010bf0cfe0();
    if (puVar1 == puVar2) {
      func_0x00010bf0cfe0(PTR_PTR_1126cf568);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10697df28;
    }
    puVar1 = PTR_PTR_1126cf538;
    func_0x00010c2a3440();
    if (puVar1 == puVar2) {
      func_0x00010c2a3440(PTR_PTR_1126cf568);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10697df28;
    }
    puVar1 = PTR_PTR_1126cf538;
    func_0x00010c0fb060();
    if (puVar1 == puVar2) {
      func_0x00010c0fb060(PTR_PTR_1126cf568);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10697df28;
    }
    puVar1 = PTR_PTR_1126cf538;
    func_0x00010c0da6c0();
    if (puVar1 == puVar2) {
      func_0x00010c0da6c0(PTR_PTR_1126cf568);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10697df28;
    }
  }
  func_0x00010c2808e0(PTR_PTR_1126cf568);
  _objc_retainAutoreleasedReturnValue();
LAB_10697df28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10697df34; end: 10697df63; -[SCAdAttachmentPresenterLogger .cxx_destruct] */

void FUN_10697df34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10697df64; end: 10697e063;  */

void FUN_10697df64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cf570;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  func_0x00010c296d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf0d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10697e064; end: 10697e06f;  */

void FUN_10697e064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_attachmentPresenterErrorWithCode_1125a0e40,0,param_3);
  return;
}



/* Entry: 10697e070; end: 10697e31f; -[SCAdAttachmentHandlerEventStreamsRepository initWithTimeProvider:trackSeqNumProvider:adAttachmentDataModel:adAttachmentContext:applicationLifecycleEvents:adConfigProviderV2:] */

undefined1 *
FUN_10697e070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f3ec8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(long *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126cf578;
    uVar2 = param_6;
    func_0x00010c0ed1e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269380();
    *(undefined **)((long)puVar1 + 0x58) = puVar6;
    _objc_release(uVar2);
    lVar3 = param_5;
    func_0x00010bf42940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef47c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
      *(undefined **)((long)puVar1 + 0x68) = puVar5;
      _objc_release(uVar2);
    }
    else {
      _objc_retain(lVar4);
      puVar6 = *(undefined **)((long)puVar1 + 0x68);
      *(long *)((long)puVar1 + 0x68) = lVar4;
    }
    _objc_release(puVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = 0;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    _objc_release(uVar2);
    func_0x00010bea8e00(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10697e320; end: 10697e347; -[SCAdAttachmentHandlerEventStreamsRepository adLifecycleEventObservableV2] */

void FUN_10697e320(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10697e348; end: 10697e34f; -[SCAdAttachmentHandlerEventStreamsRepository adLifecycleEventObservable] */

undefined8 FUN_10697e348(void)

{
  return 0;
}



/* Entry: 10697e350; end: 10697e357; -[SCAdAttachmentHandlerEventStreamsRepository adInteractionEventObservable] */

undefined8 FUN_10697e350(void)

{
  return 0;
}



/* Entry: 10697e358; end: 10697e37f; -[SCAdAttachmentHandlerEventStreamsRepository adPlayableEventObservable] */

void FUN_10697e358(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10697e380; end: 10697e387; -[SCAdAttachmentHandlerEventStreamsRepository streamsType] */

undefined8 FUN_10697e380(void)

{
  return 2;
}



/* Entry: 10697e388; end: 10697e3af; -[SCAdAttachmentHandlerEventStreamsRepository adWebviewNavigationEventObservable] */

void FUN_10697e388(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10697e3b0; end: 10697e3d7; -[SCAdAttachmentHandlerEventStreamsRepository adDeepLinkEventObservableV2] */

void FUN_10697e3b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10697e3d8; end: 10697e5a7; -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterTriggerAttempt:] */

void FUN_10697e3d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf0d600();
  if ((lVar1 == 9) && (lVar1 = param_3, func_0x00010bf0d600(), lVar1 == 2)) {
    func_0x00010be84260(param_1);
  }
  lVar1 = param_3;
  func_0x00010bf0d600();
  if ((lVar1 != 9) &&
     (*(ulong *)(param_1 + 0x58) < 0x24 &&
      (1L << (*(ulong *)(param_1 + 0x58) & 0x3f) & 0x944048c00U) != 0)) {
    lVar1 = param_1;
    func_0x00010bdc5520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b8fa8;
    _objc_alloc(PTR_PTR_1126b8fa8);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    func_0x00010b88fe98(puVar2,uVar6,3,0xffffffffffffffff,0xffffffffffffffff,0,0,0,0);
    _objc_release(uVar6);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    lVar3 = param_1;
    func_0x00010bdc5880(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b8fb8;
    _objc_alloc(PTR_PTR_1126b8fb8);
    func_0x00010c000080();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    lVar5 = param_3;
    func_0x00010bf0d600();
    if (lVar5 == 3) {
      func_0x00010be83e80(param_1);
    }
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697e5a8; end: 10697e707; -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidTrigger:] */

void FUN_10697e5a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0d600();
  if ((lVar1 != 9) &&
     (*(ulong *)(param_1 + 0x58) < 0x24 &&
      (1L << (*(ulong *)(param_1 + 0x58) & 0x3f) & 0x944048c00U) != 0)) {
    lVar1 = param_1;
    func_0x00010bdc5520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b8fa8;
    _objc_alloc(PTR_PTR_1126b8fa8);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar5);
    func_0x00010b88fe98(puVar2,uVar5,4,0xffffffffffffffff,0xffffffffffffffff,0,0,0,0);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b8fb8;
    _objc_alloc(PTR_PTR_1126b8fb8);
    func_0x00010c000080();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    lVar4 = param_3;
    func_0x00010bf0d600();
    if (lVar4 == 2) {
      func_0x00010be83d80(param_1);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697e708; end: 10697e7b7; -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidLoad:metrics:] */

void FUN_10697e708(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf0d600();
  if (lVar1 == 9) {
    func_0x00010be84260(param_1,param_2,3);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf0d600();
    if (((lVar1 == 2) && (*(ulong *)(param_1 + 0x58) < 0x24)) &&
       ((1L << (*(ulong *)(param_1 + 0x58) & 0x3f) & 0x944048c00U) != 0)) {
      func_0x00010be83d80(param_1,param_2,5,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697e7b8; end: 10697e93b; -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidPresent:attachmentMetadata:] */

void FUN_10697e7b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(ulong *)(param_1 + 0x58) < 0x24 &&
      (1L << (*(ulong *)(param_1 + 0x58) & 0x3f) & 0x944048c00U) != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010bf0d600();
    if (lVar2 != 9) {
      lVar2 = param_1;
      func_0x00010bdc5520();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b8fa8;
      _objc_alloc(PTR_PTR_1126b8fa8);
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar2 + 8);
      }
      _objc_retain(uVar1);
      func_0x00010b88fe98(puVar3,uVar1,7,0xffffffffffffffff,0xffffffffffffffff,1,0,0,0);
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126b8fb8;
      _objc_alloc(PTR_PTR_1126b8fb8);
      func_0x00010c000080();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
      lVar5 = *(long *)(param_1 + 0x18);
      func_0x00010bf0d600();
      if (lVar5 == 3) {
        func_0x00010be83ea0(param_1);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697e93c; end: 10697eb87; -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidComplete:result:attachmentMetadata:] */

void FUN_10697e93c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(ulong *)(param_1 + 0x58) < 0x24 &&
      (1L << (*(ulong *)(param_1 + 0x58) & 0x3f) & 0x944048c00U) != 0) {
    lVar2 = param_3;
    func_0x00010bf0d600();
    if (lVar2 == 9) {
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release(uVar1);
      func_0x00010be84200(param_1);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010bf0d600();
      if (lVar2 == 9) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
      }
      else {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      _objc_release(uVar3);
      lVar2 = param_1;
      func_0x00010bdc5520();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b8fa8;
      _objc_alloc(PTR_PTR_1126b8fa8);
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar2 + 8);
      }
      _objc_retain(uVar1);
      func_0x00010b88fe98(puVar4,uVar1,8,0xffffffffffffffff,0xffffffffffffffff,0,0,1,0);
      _objc_release(uVar1);
      if (lVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar2 + 8);
      }
      _objc_retain(uVar1);
      lVar5 = param_1;
      func_0x00010bdc5880(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar6 = PTR_PTR_1126b8fb8;
      _objc_alloc(PTR_PTR_1126b8fb8);
      func_0x00010c000080();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
      _objc_retain(param_5);
      func_0x00010c0c0800(param_4);
      _objc_release(param_5);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697eb88; end: 10697eb97;  */

void FUN_10697eb88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__publishAdditionalAttachmentComp_11257e8e8,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10697eb98; end: 10697ec33; -[SCAdAttachmentHandlerEventStreamsRepository _adTouchPointWithEventId:] */

void FUN_10697eb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8fb0;
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010b8937ec();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10697ec34; end: 10697ed23; -[SCAdAttachmentHandlerEventStreamsRepository _adLifecycleEventCommonWithEventType:] */

void FUN_10697ec34(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 8));
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110e66478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bdc5980(param_1 * 1000.0,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10697ed24; end: 10697ee13; -[SCAdAttachmentHandlerEventStreamsRepository _adWebviewNavigationEventCommonWithEventType:] */

void FUN_10697ed24(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 8));
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110e66498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bdc5980(param_1 * 1000.0,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10697ee14; end: 10697f023; -[SCAdAttachmentHandlerEventStreamsRepository _adTrackCommonWithCurrentTimestamp:eventId:] */

void FUN_10697ee14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(param_4);
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c278840();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c29e180();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfa41e0();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b9150;
  _objc_alloc();
  uVar13 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = uVar14;
  func_0x00010c15ed20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bef2c20(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010bf3fe80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010c2415a0();
  uVar9 = uVar14;
  func_0x00010bef60a0();
  lVar10 = param_2;
  func_0x00010bdc5480();
  func_0x00010bdc5480();
  uVar11 = uVar14;
  func_0x00010bef4240();
  puVar12 = PTR_PTR_1126b8cd8;
  func_0x00010bef4240(uVar14);
  func_0x00010c25d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b88f85c(param_1,puVar5,param_4,uVar13,uVar4,uVar6,0,uVar2,uVar1,uVar3,uVar7,uVar8,
                      uVar9,lVar10,param_2,uVar11,puVar12);
  _objc_release(param_4);
  _objc_release(puVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10697f024; end: 10697f05b; -[SCAdAttachmentHandlerEventStreamsRepository _adAttachmentType] */

undefined8 FUN_10697f024(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf0d600();
  if (lVar1 - 1U < 9) {
    uVar2 = *(undefined8 *)(&UNK_10dde3240 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10697f05c; end: 10697f1fb; -[SCAdAttachmentHandlerEventStreamsRepository _publishWebviewNavigationEvent:] */

void FUN_10697f05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdc5b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfc3e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b9060;
  _objc_alloc(PTR_PTR_1126b9060);
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar7);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c09c9c0(uVar2);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c09c960(uVar2);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c29fec0(uVar2);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b892c90(puVar3,uVar7,5,0,0,0,0,puVar4,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126b9068;
  _objc_alloc(PTR_PTR_1126b9068);
  func_0x00010c000060();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697f1fc; end: 10697f3f3; -[SCAdAttachmentHandlerEventStreamsRepository _publishAppInstallEvent:loadingMetrics:] */

void FUN_10697f1fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_5);
  func_0x00010beec800(uVar7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_2;
  func_0x00010bdc5980(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010bfc3e20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = PTR_PTR_1126b8fd0;
  _objc_alloc(PTR_PTR_1126b8fd0);
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar4 + 8);
  }
  _objc_retain(uVar8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c29fec0(uVar7);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c09c9c0(uVar7);
  uVar6 = uVar7;
  func_0x00010c09c960(uVar7);
  func_0x00010b8905b0(puVar1,uVar8,param_4,puVar2,uVar5,uVar6);
  _objc_release(puVar2);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126b8fd8;
  _objc_alloc(PTR_PTR_1126b8fd8);
  func_0x00010c000060();
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x40));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10697f3f4; end: 10697f483; -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableDidCloseEventWithResult:] */

void FUN_10697f3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  pcStack_38 = FUN_10697f484;
  puStack_30 = &UNK_11094e830;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10697f4f0;
  puStack_58 = &UNK_110849810;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_48,&puStack_70);
  func_0x00010be84260(param_1,param_2,4);
  return;
}



/* Entry: 10697f484; end: 10697f4e3;  */

void FUN_10697f484(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10697f4e8;
  puStack_20 = &UNK_11094e800;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bd060(param_2,param_2,&PTR___NSConcreteGlobalBlock_11094e7e0,&puStack_38);
  return;
}



/* Entry: 10697f4e4; end: 10697f4fb;  */

void FUN_10697f4e4(void)

{
  return;
}



/* Entry: 10697f4fc; end: 10697f59f; -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableDidCloseWithMetrics:] */

void FUN_10697f4fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4d800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x00010be84260(param_1,param_2,5);
  }
  lVar2 = param_3;
  func_0x00010bf7d340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  if ((int)lVar1 != 0) {
    func_0x00010be84260(param_1,param_2,7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697f5a0; end: 10697f6e3; -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableError:] */

void FUN_10697f5a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bdd67c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b9098;
    _objc_alloc(PTR_PTR_1126b9098);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar5);
    lVar3 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf3ec40(param_3);
    _objc_release(param_3);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b89541c(puVar2,uVar5,6,lVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    puVar4 = PTR_PTR_1126b90a0;
    _objc_alloc(PTR_PTR_1126b90a0);
    func_0x00010c000060();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10697f6e4; end: 10697f7af; -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableEvent:] */

void FUN_10697f6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bdd67c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9098;
  _objc_alloc(PTR_PTR_1126b9098);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010b89541c(puVar2,uVar4,param_3,0,0);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puVar3 = PTR_PTR_1126b90a0;
  _objc_alloc(PTR_PTR_1126b90a0);
  func_0x00010c000060();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697f7b0; end: 10697f89f; -[SCAdAttachmentHandlerEventStreamsRepository _buildPlayableCommonEvent:] */

void FUN_10697f7b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 8));
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110e664d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bdc5980(param_1 * 1000.0,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10697f8a0; end: 10697fa2b; -[SCAdAttachmentHandlerEventStreamsRepository _publishDeeplinkFallbackEvent:common:] */

void FUN_10697f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0bf0e0(param_3);
  func_0x00010be83e80(param_1);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10697fa2c; end: 10697fa93;  */

void FUN_10697fa2c(void)

{
  return;
}



/* Entry: 10697fa94; end: 10697fbc7; -[SCAdAttachmentHandlerEventStreamsRepository _publishDeeplinkEvent:common:isInternal:] */

void FUN_10697fa94(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b8fc0;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    if (param_4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_4 + 8);
    }
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf67c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8902e0(puVar1,uVar6,param_3,uVar4,0,param_5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b8fc8;
    _objc_alloc(PTR_PTR_1126b8fc8);
    func_0x00010c000060();
    _objc_release(param_4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10697fbc8; end: 10697fd43; -[SCAdAttachmentHandlerEventStreamsRepository _publishAdditionalAttachmentCompleteEvents:attachmentMetadata:] */

void FUN_10697fbc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf0d600();
  if (lVar2 == 1) {
    func_0x00010be84620(param_1,param_2,param_3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf0d600();
    if (lVar2 == 2) {
      func_0x00010be83d80(param_1,param_2,3,param_3);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010bf0d600();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar2 == 3) {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        uStack_70 = 0x10697fd48;
        puStack_68 = &UNK_110841f80;
        lStack_60 = param_1;
        _objc_retain(param_3);
        puStack_b0 = puVar1;
        uStack_a8 = 0xc2000000;
        uStack_a0 = 0x10697fd54;
        puStack_98 = &UNK_110841f80;
        lStack_90 = param_1;
        uStack_58 = param_3;
        _objc_retain(param_3);
        uStack_88 = param_3;
        func_0x00010c0bf0e0(param_4,param_2,&PTR___NSConcreteGlobalBlock_11094e940,&puStack_80,
                            &puStack_b0,&PTR___NSConcreteGlobalBlock_11094e960,
                            &PTR___NSConcreteGlobalBlock_11094e980,
                            &PTR___NSConcreteGlobalBlock_11094e9a0,
                            &PTR___NSConcreteGlobalBlock_11094e9c0,
                            &PTR___NSConcreteGlobalBlock_11094e9e0,
                            &PTR___NSConcreteGlobalBlock_11094ea00,
                            &PTR___NSConcreteGlobalBlock_11094ea20);
        _objc_release(uStack_88);
        _objc_release(uStack_58);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10697fd44; end: 10697fd7f;  */

void FUN_10697fd44(void)

{
  return;
}



/* Entry: 10697fd80; end: 10697ff4f; -[SCAdAttachmentHandlerEventStreamsRepository _setUpApplicationLifecycleEventHandling] */

void FUN_10697fd80(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec0c0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00010c2a6a00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf72840(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a6420(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10697ff50;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar5 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10697ff50; end: 10697ffa7;  */

void FUN_10697ff50(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697ffa8; end: 106980123; -[SCAdAttachmentHandlerEventStreamsRepository _appDidEnterBackground] */

void FUN_10697ffa8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 == 0) {
    return;
  }
  func_0x00010bf0d600();
  if (lVar1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010be84270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishPlayableEvent__11257ea38,8);
    return;
  }
  lVar1 = param_1;
  func_0x00010bdc5520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8fa8;
  _objc_alloc(PTR_PTR_1126b8fa8);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar5);
  func_0x00010b88fe98(puVar2,uVar5,10,0xffffffffffffffff,0xffffffffffffffff,1,0,1,0);
  _objc_release(uVar5);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar5);
  lVar3 = param_1;
  func_0x00010bdc5880(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b8fb8;
  _objc_alloc(PTR_PTR_1126b8fb8);
  func_0x00010c000080();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106980124; end: 106980233; -[SCAdAttachmentHandlerEventStreamsRepository _appDidEnterForeground] */

void FUN_106980124(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if ((lVar1 != 0) && (func_0x00010bf0d600(), lVar1 != 9)) {
    lVar1 = param_1;
    func_0x00010bdc5520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b8fa8;
    _objc_alloc(PTR_PTR_1126b8fa8);
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar4);
    func_0x00010b88fe98(puVar2,uVar4,9,0xffffffffffffffff,0xffffffffffffffff,1,0,0,0);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b8fb8;
    _objc_alloc(PTR_PTR_1126b8fb8);
    func_0x00010c000080();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106980234; end: 10698023b; -[SCAdAttachmentHandlerEventStreamsRepository adAppInstallEventObservableV2] */

undefined8 FUN_106980234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10698023c; end: 1069802ef; -[SCAdAttachmentHandlerEventStreamsRepository .cxx_destruct] */

void FUN_10698023c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1069802f0; end: 1069803bb; -[SCAdAttachmentHandlerEventTracker initWithScope:timeProvider:logger:] */

undefined1 *
FUN_1069802f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3ed0;
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



/* Entry: 1069803bc; end: 10698041b; -[SCAdAttachmentHandlerEventTracker dismissContextWithLoadingMetrics:] */

void FUN_1069803bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf580;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff4c20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10698041c; end: 10698059f; -[SCAdAttachmentHandlerEventTracker trackAttachmentTriggered] */

void FUN_10698041c(double param_1,long param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  *(undefined **)(param_2 + 0x20) = puVar1;
  _objc_release(uVar12);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4e080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0ed1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0d600();
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf67c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa03e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfa0600();
  func_0x00010c0a1320(uVar2,param_3,uVar12,uVar5,uVar7,uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069805a0; end: 1069806e7; -[SCAdAttachmentHandlerEventTracker trackAttachmentPresented] */

void FUN_1069805a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4e080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ed1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0d600();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf67c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa03e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfa0600();
  func_0x00010c0a12a0(uVar1,param_2,uVar3,uVar5,uVar7,uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


