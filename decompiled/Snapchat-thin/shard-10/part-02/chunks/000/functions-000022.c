/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a0494c; end: 107a04953; -[SCReactionsServices reactionsProvider] */

undefined8 FUN_107a0494c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a04954; end: 107a0495f; -[SCReactionsServices .cxx_destruct] */

void FUN_107a04954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a04960; end: 107a04a23; -[SCReaction initWithCoder:] */

undefined1 * FUN_107a04960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9468;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a04a24; end: 107a04b37; -[SCReaction initWithIntent:animatedBitmojiImageParams:nonAnimatedBitmojiImageParams:animatedFallbackReaction:nonAnimatedFallbackReaction:] */

undefined1 *
FUN_107a04a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9468;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a04b38; end: 107a04b5b; -[SCReaction copyWithZone:] */

undefined8 FUN_107a04b38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a04b5c; end: 107a04bcf; -[SCReaction encodeWithCoder:] */

void FUN_107a04b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e046d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ea9918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ea9938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a04bd0; end: 107a04c5f; -[SCReaction hash] */

undefined8 * FUN_107a04bd0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107a04d20:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107a04d2c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_107a04d2c;
            }
            goto LAB_107a04d20;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107a04d2c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107a04c60; end: 107a04d47; -[SCReaction isEqual:] */

long FUN_107a04c60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a04d20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a04d2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_107a04d2c;
            }
            goto LAB_107a04d20;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a04d2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a04d48; end: 107a04d4f; -[SCReaction intent] */

undefined8 FUN_107a04d48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a04d50; end: 107a04d57; -[SCReaction animatedBitmojiImageParams] */

undefined8 FUN_107a04d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a04d58; end: 107a04d5f; -[SCReaction nonAnimatedBitmojiImageParams] */

undefined8 FUN_107a04d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a04d60; end: 107a04d67; -[SCReaction animatedFallbackReaction] */

undefined8 FUN_107a04d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a04d68; end: 107a04d6f; -[SCReaction nonAnimatedFallbackReaction] */

undefined8 FUN_107a04d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a04d70; end: 107a04db7; -[SCReaction .cxx_destruct] */

void FUN_107a04d70(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a04db8; end: 107a04ea3; -[SCPayoutsPresenter initWithUserSession:payoutsPresenterScopeFactoryServices:onboardingChecklistScopeFactoryServices:viewController:sourcePageType:] */

undefined1 *
FUN_107a04db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9470;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_6);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a04ea4; end: 107a04efb; -[SCPayoutsPresenter presentCrystalsHubWithEntryType:] */

void FUN_107a04ea4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107a04efc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 107a04efc; end: 107a04fcf;  */

void FUN_107a04efc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d5da8;
  _objc_alloc();
  func_0x00010c0568e0();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf21f80(uVar4,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar4;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107a04fd0; end: 107a0508b; -[SCPayoutsPresenter presentOnboardingChecklistWithEntryType:] */

void FUN_107a04fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107a0508c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107a0508c; end: 107a0515f;  */

void FUN_107a0508c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x20) == 0)) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126d5db0;
    _objc_alloc(PTR_PTR_1126d5db0);
    func_0x00010c0567c0();
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a05160; end: 107a05197; -[SCPayoutsPresenter payoutsScopeWillDismiss:] */

void FUN_107a05160(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107a05198; end: 107a051a7; -[SCPayoutsPresenter onboardingChecklistScopeWillDismiss:] */

void FUN_107a05198(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a051a8; end: 107a051b3; -[SCPayoutsPresenter pushToValdiMarshaller:] */

undefined8 FUN_107a051a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107a2afa8(param_3,param_1);
  func_0x000107a2af94();
  func_0x000107a2af00();
  func_0x000107a2aedc();
  return param_3;
}



/* Entry: 107a051b4; end: 107a051cb; -[SCPayoutsPresenter userSession] */

void FUN_107a051b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a051cc; end: 107a051d3; -[SCPayoutsPresenter payoutsPresenterScopeFactoryServices] */

undefined8 FUN_107a051cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a051d4; end: 107a051eb; -[SCPayoutsPresenter onboardingChecklistScopeFactoryServices] */

void FUN_107a051d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a051ec; end: 107a05203; -[SCPayoutsPresenter viewController] */

void FUN_107a051ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a05204; end: 107a05263; -[SCPayoutsPresenter .cxx_destruct] */

void FUN_107a05204(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a05264; end: 107a0532f; -[SCPayoutsPresenterProvider initWithUserSession:payoutsPresenterScopeFactoryServices:onboardingChecklistScopeFactoryServices:sourcePageType:] */

undefined1 *
FUN_107a05264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9478;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a05330; end: 107a053d3; -[SCPayoutsPresenterProvider payoutsPresenterForPresentingViewController:] */

void FUN_107a05330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d5db8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c05e0e0(puVar1,param_2,lVar2,uVar4,lVar3,param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a053d4; end: 107a05453; -[SCPayoutsPresenterProvider .cxx_destruct] */

void FUN_107a053d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107a05454; end: 107a06357;  */

void FUN_107a05454(undefined8 param_1,double param_2,undefined **param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 in_x7;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  double dVar15;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *apuStack_110 [16];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar15 = param_2;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b25c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  if (param_5 != (undefined *)0x0) {
    _objc_retain(param_5);
    puVar13 = PTR_PTR_1126cc780;
    _objc_opt_new(PTR_PTR_1126cc780);
    puVar2 = PTR_PTR_1126d5dc0;
    _objc_opt_new(PTR_PTR_1126d5dc0);
    puVar3 = param_5;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = param_5;
      func_0x00010bf85d80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar2);
      _objc_release(puVar3);
    }
    puVar3 = param_5;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      func_0x000100576d08(puVar3,apuStack_110,&uStack_150);
      puVar4 = PTR_PTR_1126afad0;
      _objc_opt_new(PTR_PTR_1126afad0);
      func_0x00010c1e4140(puVar2);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c116a20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a85a0();
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c116a20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0fe0();
      _objc_release(puVar4);
    }
    puVar4 = param_5;
    func_0x00010c24a0e0();
    if ((int)puVar4 != 0) {
      func_0x00010c24a0e0(param_5);
      func_0x00010c207f60(puVar2);
    }
    func_0x00010c207f00(puVar13);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    func_0x00010c16b8e0(puVar1);
    _objc_release(puVar13);
  }
  _objc_retain(param_3);
  puVar13 = PTR_PTR_1126b25e0;
  _objc_alloc_init(PTR_PTR_1126b25e0);
  ppuVar5 = param_3;
  func_0x00010bfed740(param_3);
  func_0x00010c26f000(param_3);
  ppuVar6 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x00010853d77c(param_1,ppuVar5,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(puVar13);
  _objc_release(ppuVar5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  ppuVar5 = param_3;
  func_0x00010c27dd80();
  ppuVar6 = param_3;
  func_0x00010c0ed100(param_3);
  ppuVar7 = param_3;
  func_0x00010bf98340(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_3;
  func_0x00010bf98320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = param_3;
  func_0x00010c0c5c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f000(param_3);
  ppuVar8 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010c0efce0();
  func_0x00010853d86c(param_1,ppuVar5,ppuVar6,ppuVar7,ppuVar14,ppuVar12,0,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar12);
  _objc_release(ppuVar14);
  _objc_release(ppuVar7);
  if (ppuVar5 != (undefined **)0x0) {
    func_0x00010bf298a0(param_3);
    ppuVar6 = ppuVar5;
    func_0x00010c0c3fe0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf30ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a12c0();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    func_0x00010befa120(puVar2);
  }
  ppuVar6 = param_3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar7;
  func_0x00010bf5ccc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar14;
  func_0x000100504554();
  _objc_release(ppuVar14);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  func_0x00010befa160(puVar2);
  func_0x00010c1dd6c0(puVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  func_0x00010c1dd3e0(puVar1);
  _objc_release(puVar13);
  ppuVar5 = param_3;
  func_0x00010c27dd80(param_3);
  ppuVar6 = param_3;
  func_0x00010c141c40(param_3);
  func_0x00010853e088(ppuVar5,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207640(puVar1);
  _objc_release(ppuVar5);
  _objc_retain(param_3);
  puVar13 = PTR_PTR_1126cf388;
  _objc_alloc_init();
  ppuVar5 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010853e134();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  if (ppuVar6 != (undefined **)0x0) {
    puVar2 = puVar13;
    func_0x00010bf0d800(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar2);
  }
  ppuVar5 = param_3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_3;
  func_0x00010bf4e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar5;
  func_0x00010853e1b4(ppuVar5,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  if (ppuVar14 != (undefined **)0x0) {
    puVar2 = puVar13;
    func_0x00010bf0d800(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar2);
  }
  puVar3 = puVar13;
  func_0x00010bf0d820();
  puVar2 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar13;
  }
  _objc_retain(puVar2);
  _objc_release(ppuVar14);
  _objc_release(ppuVar6);
  _objc_release(puVar13);
  _objc_release(param_3);
  func_0x00010c16b420(puVar1);
  _objc_release(puVar2);
  _objc_retain(param_3);
  ppuVar5 = param_3;
  func_0x00010c25a0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = param_3;
    func_0x00010bf42a00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar7;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar14 = ppuVar7;
    func_0x00010c11fae0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
  else {
    ppuVar14 = (undefined **)0x0;
    ppuVar6 = ppuVar5;
  }
  ppuVar5 = ppuVar6;
  func_0x00010c08fa60();
  ppuVar7 = ppuVar6;
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar5;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar12;
    func_0x00010bf8a6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar8;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar7 = ppuVar8;
      func_0x00010c094540(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar8);
  }
  ppuVar6 = ppuVar7;
  ppuVar5 = ppuVar14;
  func_0x00010853e268(ppuVar7,ppuVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  _objc_release(ppuVar7);
  _objc_release(param_3);
  func_0x00010c1ba8a0(puVar1);
  _objc_release(ppuVar6);
  _objc_retain(param_3);
  ppuVar6 = param_3;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = param_3;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar7;
    func_0x00010c08fa60();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    if (ppuVar14 != (undefined **)0x0) goto LAB_107a05bc4;
    puVar13 = (undefined *)0x0;
  }
  else {
    _objc_release(ppuVar6);
LAB_107a05bc4:
    puVar13 = PTR_PTR_1126cc7a0;
    _objc_alloc_init(PTR_PTR_1126cc7a0);
    ppuVar6 = param_3;
    func_0x00010bf93ae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c08fa60();
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar6 = param_3;
      func_0x00010bf93ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195a40(puVar13);
      _objc_release(puVar2);
      _objc_release(ppuVar6);
    }
    ppuVar6 = param_3;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c08fa60();
    _objc_release(ppuVar6);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar6 = param_3;
      func_0x00010c281680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      puVar3 = PTR_PTR_1126c0328;
      _objc_alloc(PTR_PTR_1126c0328);
      apuStack_110[0] = (undefined *)0x0;
      func_0x00010c008360();
      func_0x00010c21bd60(puVar13);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_3);
  func_0x00010c21bd40(puVar1);
  _objc_release(puVar13);
  ppuVar6 = param_3;
  func_0x00010befe1a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166200(puVar1);
  _objc_release(ppuVar6);
  ppuVar6 = param_3;
  func_0x00010c2580a0();
  if ((ppuVar6 == (undefined **)0x1) || (ppuVar6 == (undefined **)0x3)) {
    puVar13 = PTR_PTR_1126cf390;
    _objc_alloc_init(PTR_PTR_1126cf390);
    func_0x00010c181ae0();
    func_0x00010c1b1ba0(puVar13);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  func_0x00010c185a40(puVar1);
  _objc_release(puVar13);
  func_0x00010bf59940(param_4);
  param_2 = param_2 * 1000.0;
  puVar13 = PTR_PTR_1126bcf30;
  _objc_opt_new(PTR_PTR_1126bcf30);
  func_0x00010c203d40();
  func_0x00010c1c4200(puVar13);
  func_0x00010c1bfe40(puVar13);
  func_0x00010c216040(puVar1);
  _objc_release(puVar13);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar13 = PTR_PTR_1126cc7a8;
  _objc_opt_new(PTR_PTR_1126cc7a8);
  ppuVar6 = param_3;
  func_0x00010bf29400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf05000();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar7;
  func_0x00010c08fa60();
  if (ppuVar14 == (undefined **)0x0) {
    _objc_release(ppuVar7);
LAB_107a05f90:
    if (param_4 == 0) {
      ppuVar7 = ppuVar6;
      func_0x00010c0b3ba0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar14 = param_3;
        func_0x00010c243400();
        _objc_release(ppuVar7);
        if (ppuVar14 == (undefined **)0x11) goto LAB_107a060d4;
      }
      ppuVar7 = param_3;
      func_0x00010c0c5c40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar7;
      func_0x00010bf529e0();
      _objc_release(ppuVar7);
      if (ppuVar14 != (undefined **)0x0) {
        param_2 = 0.0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        plStack_140 = (long *)0x0;
        ppuVar7 = param_3;
        func_0x00010c0c5c40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar7;
        func_0x00010bf52a60();
        if (ppuVar14 != (undefined **)0x0) {
          lVar11 = *plStack_140;
          do {
            ppuVar12 = (undefined **)0x0;
            do {
              if (*plStack_140 != lVar11) {
                _objc_enumerationMutation(ppuVar7);
              }
              lVar10 = *(long *)(lStack_148 + (long)ppuVar12 * 8);
              func_0x00010c0ed1a0();
              if (lVar10 != 1) goto LAB_107a060b8;
              ppuVar12 = (undefined **)((long)ppuVar12 + 1);
            } while (ppuVar14 != ppuVar12);
            ppuVar14 = ppuVar7;
            func_0x00010bf52a60();
          } while (ppuVar14 != (undefined **)0x0);
        }
LAB_107a060b8:
        _objc_release(ppuVar7);
      }
    }
    else {
      func_0x00010c247520();
    }
LAB_107a060d4:
    func_0x00010c1690c0(puVar13);
  }
  else {
    ppuVar14 = param_3;
    func_0x00010c243400();
    _objc_release(ppuVar7);
    if (ppuVar14 != (undefined **)0x11) goto LAB_107a05f90;
    func_0x00010c1690c0(puVar13);
    puVar2 = PTR_PTR_1126cf398;
    _objc_opt_new();
    func_0x00010c204ba0(puVar13);
    ppuVar7 = ppuVar6;
    func_0x00010bf05000(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206c80(puVar2);
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar7;
    func_0x00010c0dfa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar14;
    func_0x00010c08fa60();
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar5 = apuStack_110;
      func_0x000100576d08(ppuVar14,ppuVar5,&uStack_150);
      puVar3 = PTR_PTR_1126afad0;
      _objc_opt_new(PTR_PTR_1126afad0);
      func_0x00010c206cc0(puVar2);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c2475a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a85a0();
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c2475a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0fe0();
      _objc_release(puVar3);
    }
    _objc_release(ppuVar14);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_4);
  func_0x00010c1e5280(puVar1);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126d57a0;
  _objc_retain(param_3);
  _objc_alloc_init();
  ppuVar6 = param_3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar7 = ppuVar6;
  func_0x00010c0c60a0();
  _objc_release(ppuVar6);
  if ((long)ppuVar7 < 0x140) {
    if ((long)ppuVar7 < 0xd2) {
      if ((long)ppuVar7 < 100) {
        if ((ppuVar7 != (undefined **)0xffffffffffffd8f1) && (ppuVar7 != (undefined **)0x0))
        goto LAB_107a06290;
      }
      else if ((ppuVar7 != (undefined **)0x64) && (ppuVar7 != (undefined **)0xc8))
      goto LAB_107a06290;
    }
    else if ((long)ppuVar7 < 0xfa) {
      if ((ppuVar7 != (undefined **)0xd2) && (ppuVar7 != (undefined **)0xdc)) goto LAB_107a06290;
    }
    else if ((ppuVar7 != (undefined **)0xfa) && (ppuVar7 != (undefined **)0x12c))
    goto LAB_107a06290;
  }
  else if ((long)ppuVar7 < 500) {
    if ((long)ppuVar7 < 400) {
      if ((ppuVar7 != (undefined **)0x140) && (ppuVar7 != (undefined **)0x15e)) goto LAB_107a06290;
    }
    else if ((ppuVar7 != (undefined **)0x190) && (ppuVar7 != (undefined **)0x1c2))
    goto LAB_107a06290;
  }
  else if ((long)ppuVar7 < 700) {
    if ((ppuVar7 != (undefined **)0x1f4) && (ppuVar7 != (undefined **)0x258)) goto LAB_107a06290;
  }
  else if ((ppuVar7 != (undefined **)0x2bc) && (ppuVar7 != (undefined **)0x1388))
  goto LAB_107a06290;
  func_0x00010c1c5080(puVar13);
LAB_107a06290:
  puVar2 = PTR_PTR_1126b25d8;
  _objc_alloc_init();
  func_0x00010c221540();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  apuStack_110[0] = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(param_3);
  func_0x00010c1c5120(puVar1);
  _objc_release(puVar4);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    FUN_107a05454(param_2,dVar15,param_5,in_x7,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d5dc8;
    _objc_alloc_init(PTR_PTR_1126d5dc8);
    ppuVar6 = ppuVar5;
    func_0x000109189420(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    func_0x00010c174320(puVar1);
    _objc_release(ppuVar6);
    func_0x00010c1d6f60(puVar1);
    func_0x00010c1d7040(puVar1);
    func_0x00010c1e1b40(puVar1);
    func_0x00010c1e1da0(puVar1);
    func_0x00010c1b52a0(puVar1);
    func_0x00010c1ba600(param_5);
    _objc_release(puVar1);
    puVar1 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a06358; end: 107a06483;  */

void FUN_107a06358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  _objc_retain(param_4);
  FUN_107a05454(param_1,param_2,param_3,in_x7,in_stack_00000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d5dc8;
  _objc_alloc_init(PTR_PTR_1126d5dc8);
  uVar2 = param_4;
  func_0x000109189420(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c174320(puVar1);
  _objc_release(uVar2);
  func_0x00010c1d6f60(puVar1);
  func_0x00010c1d7040(puVar1);
  func_0x00010c1e1b40(puVar1);
  func_0x00010c1e1da0(puVar1);
  func_0x00010c1b52a0(puVar1);
  func_0x00010c1ba600(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107a06484; end: 107a06ccb;  */

void FUN_107a06484(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  undefined1 *param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  uVar1 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = param_3;
    func_0x00010bfdabc0();
    if ((int)lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c1197a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c1e5280(param_4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    lVar4 = param_4;
    func_0x00010853d178();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010853d014();
    _objc_retainAutoreleasedReturnValue();
    param_6 = auStack_f0;
    param_7 = 0x10;
    lVar2 = lVar7;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    param_5 = uVar1;
    while (lVar2 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lVar15 * 8);
        func_0x00010bf51e00();
        func_0x00010befa120(puVar6);
        _objc_release(uVar8);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      param_6 = auStack_f0;
      param_7 = 0x10;
      lVar2 = lVar7;
      param_5 = 0;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    puVar9 = puVar6;
    func_0x00010bf529e0();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = puVar6;
      func_0x00010c165a40(lVar5);
      param_5 = (uint)puVar9;
    }
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar6 = PTR_PTR_1126be758;
  _objc_retain(lVar11);
  _objc_opt_new();
  puVar9 = PTR_PTR_1126cf378;
  _objc_opt_new(PTR_PTR_1126cf378);
  func_0x00010c20d6a0(puVar6);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126cf380;
  _objc_opt_new(PTR_PTR_1126cf380);
  puVar14 = puVar6;
  func_0x00010c25a920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d500();
  _objc_release(puVar14);
  lVar2 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213f60(puVar9);
  _objc_release(lVar11);
  puVar14 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar14;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  if (puVar10 == (undefined *)0x0) {
    func_0x00010c0ac940(param_7);
  }
  func_0x00010c1bf3e0(puVar9);
  func_0x00010c17cd20(puVar9);
  lVar11 = param_3;
  func_0x00010bf30620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ac0(puVar9);
  _objc_release(lVar11);
  func_0x00010bf30620(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar11 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c2592c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1786c0(puVar9);
  _objc_release(lVar3);
  _objc_release(lVar11);
  func_0x00010c0ed100();
  func_0x00010c1d6440(puVar9);
  lVar11 = param_3;
  func_0x00010c25b180();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d5de0;
  if (lVar11 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_6);
    _objc_opt_new(puVar14);
    puVar12 = PTR_PTR_1126d5de8;
    _objc_opt_new(PTR_PTR_1126d5de8);
    func_0x00010c17cdc0(puVar14);
    func_0x00010bf3cd20(lVar11);
    func_0x00010c17cb80(puVar12);
    func_0x00010c14be40(lVar11);
    func_0x00010c1f5cc0(puVar12);
    func_0x00010c076ba0(lVar11);
    func_0x00010c1b23e0(puVar12);
    func_0x00010c13de00(lVar11);
    func_0x00010c1ed7c0(puVar12);
    lVar3 = lVar11;
    func_0x00010c2bf280(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227c60(puVar12);
    _objc_release(lVar3);
    func_0x00010bf48f60();
    _objc_release(param_6);
    func_0x00010c180f60(puVar12);
    _objc_release(puVar12);
  }
  func_0x00010c1e7400(puVar9);
  _objc_release(puVar14);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c2311e0();
  if (((param_5 & 1) != 0) || ((int)lVar11 != 0)) {
    lVar11 = param_3;
    func_0x00010c1048c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126bcf28;
      _objc_opt_new(PTR_PTR_1126bcf28);
      func_0x00010bf01f00(lVar11);
      func_0x00010c167920(puVar14);
      func_0x00010bfe4080(lVar11);
      func_0x00010c1a90c0(puVar14);
      func_0x00010bf51c80(lVar11);
      func_0x00010c1b9520(puVar14);
      func_0x00010bf51c80(lVar11);
      func_0x00010c1c0e80(param_2,puVar14);
      func_0x00010c249ca0(lVar11);
      func_0x00010c207c40(puVar14);
    }
    func_0x00010c1bf6c0(puVar9);
    _objc_release(puVar14);
    _objc_release(lVar11);
  }
  lVar11 = param_3;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0811a0();
  _objc_release(lVar3);
  _objc_release(lVar11);
  if ((int)lVar4 != 0) {
    puVar14 = PTR_PTR_1126d5dd0;
    _objc_opt_new(PTR_PTR_1126d5dd0);
    func_0x00010c1b50e0();
    func_0x00010c198b40(puVar9);
    _objc_release(puVar14);
  }
  puVar14 = PTR_PTR_1126afec0;
  func_0x00010c26f320(param_8);
  func_0x00010c155420(puVar14);
  func_0x00010c1a3d60(puVar9);
  if (param_9 != 0) {
    lVar11 = param_9;
    func_0x00010c130480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010c08fa60();
    _objc_release(lVar11);
    if (lVar3 != 0) {
      lVar11 = param_9;
      func_0x00010c130480(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213f60(puVar9);
      _objc_release(lVar11);
    }
    puVar14 = puVar9;
    func_0x00010c26ed60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_9;
    func_0x00010c23fe00(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(lVar11);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126d5dd8;
    _objc_opt_new(PTR_PTR_1126d5dd8);
    func_0x00010c214a40();
    func_0x00010c26ed80(puVar9);
    puVar12 = puVar14;
    func_0x00010c204000(puVar14);
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c72a0(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    lVar11 = param_9;
    func_0x00010bf3cf60(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar14);
    _objc_release(lVar11);
    puVar12 = puVar9;
    func_0x00010c26ef60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar12);
    _objc_release(puVar14);
  }
  puVar14 = puVar6;
  func_0x00010bf63640(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107a06ccc; end: 107a07833;  */

void FUN_107a06ccc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined *puStack_4a8;
  undefined *puStack_490;
  undefined *puStack_460;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010bf0a8c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_11);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0;
  uVar30 = 0x3032000000;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_107a08074;
  uStack_160 = 0x107a08084;
  uStack_158 = 0;
  puStack_178 = &uStack_180;
  _objc_retain(lVar2);
  puStack_108 = puVar4;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x107a080bc;
  puStack_f0 = &UNK_1109f4f18;
  _objc_retain(lVar2);
  lStack_e8 = lVar2;
  puStack_d8 = &uStack_180;
  _objc_retain(param_4);
  puStack_150 = puVar4;
  lStack_148 = 0xc2000000;
  pcStack_140 = FUN_107a08134;
  puStack_138 = &UNK_1109f4f48;
  uStack_e0 = param_4;
  _objc_retain(lVar2);
  lStack_130 = lVar2;
  puStack_120 = &uStack_180;
  _objc_retain(param_5);
  uStack_128 = param_5;
  func_0x00010c0c1340(param_7);
  uVar3 = puStack_178[5];
  _objc_retain();
  _objc_release(uStack_128);
  _objc_release(lStack_130);
  _objc_release(uStack_e0);
  _objc_release(lStack_e8);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_180,8);
  _objc_release(uStack_158);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126cf3b0;
  _objc_retain(param_2);
  _objc_alloc();
  lVar5 = param_2;
  func_0x00010c297e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bfc11c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c259b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0607c0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar8 = PTR_PTR_1126cf3b8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c26f000(param_2);
  func_0x00010bfed740(param_2);
  _objc_release(param_2);
  func_0x00010c00eac0(uVar30,param_1 + (double)param_8 * 3600.0,param_1);
  puVar9 = PTR_PTR_1126cf3c0;
  _objc_retain(param_2);
  _objc_alloc();
  lVar7 = param_2;
  func_0x00010bf98340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf98320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x0001084f2c6c();
  lVar5 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efce0();
  func_0x00010c2580a0();
  _objc_release(param_2);
  func_0x00010c01b280();
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_retain(param_2);
  func_0x00010c0ed100();
  puVar28 = PTR_PTR_1126cf3c8;
  _objc_alloc();
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c27dd80();
  if ((0x15 < lVar5 - 5U) || ((0x3f3fe3U >> (ulong)((uint)(lVar5 - 5U) & 0x1f) & 1) == 0)) {
    func_0x00010bf298a0();
  }
  _objc_release(param_2);
  lVar5 = param_2;
  func_0x00010bf93ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x0001084d28f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffafc0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_2);
  puVar25 = PTR_PTR_1126cf3d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  lVar5 = param_2;
  func_0x00010bf0d6a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff4d60();
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puStack_268 = PTR_PTR_1126cf3e0;
  if (param_10 == 0) {
    puStack_268 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc();
    lVar5 = param_10;
    func_0x00010c116a20(param_10);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_10;
    func_0x00010bf85d80(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0(param_10);
    _objc_release(param_10);
    func_0x00010c03ae60();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    puStack_270 = (undefined *)0x0;
  }
  else {
    puStack_270 = PTR_PTR_1126cf3e8;
    _objc_alloc();
    lVar6 = lVar5;
    func_0x00010bf63640(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cda0();
    _objc_release(lVar6);
  }
  lVar6 = param_2;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    puStack_278 = (undefined *)0x0;
  }
  else {
    puVar26 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bff6b20();
    puStack_278 = PTR_PTR_1126cf3f0;
    _objc_alloc();
    func_0x00010c03cda0();
    _objc_release(puVar26);
  }
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010c243400();
  if (lVar7 == 0x11) {
    lVar7 = param_2;
    func_0x00010bf29400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar10;
    func_0x00010c0dfa00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar7);
    lVar7 = lVar29;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      puStack_280 = (undefined *)0x0;
    }
    else {
      puStack_280 = PTR_PTR_1126cf3f8;
      _objc_alloc();
      func_0x00010c04a9a0();
    }
    _objc_release(lVar29);
  }
  else {
    puStack_280 = (undefined *)0x0;
  }
  _objc_release(param_2);
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x00010c243400();
  if (lVar7 == 0x11) {
    lVar7 = param_2;
    func_0x00010bf29400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010bf05000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar10;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar26 = PTR_PTR_1126cf400;
      _objc_alloc();
      func_0x00010c00d4e0();
    }
    _objc_release(lVar10);
  }
  else {
    puVar26 = (undefined *)0x0;
  }
  _objc_release(param_2);
  func_0x00010c141c40();
  lVar7 = param_2;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  lStack_148 = 0;
  puStack_150 = (undefined *)0x0;
  puStack_138 = (undefined *)0x0;
  pcStack_140 = (code *)0x0;
  _objc_retain(lVar7);
  lVar10 = lVar7;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar29 = *(long *)pcStack_140;
    do {
      lVar24 = 0;
      do {
        if (*(long *)pcStack_140 != lVar29) {
          _objc_enumerationMutation(lVar7);
        }
        lVar27 = *(long *)(lStack_148 + lVar24 * 8);
        lVar12 = lVar27;
        func_0x00010c0ed1a0();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar12 != 0) {
          func_0x00010c0ed1a0(lVar27);
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar13);
        }
        lVar24 = lVar24 + 1;
      } while (lVar10 != lVar24);
      lVar10 = lVar7;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar7);
  puVar13 = puVar11;
  func_0x00010bf51e00();
  _objc_release(puVar11);
  _objc_release(lVar7);
  dVar31 = 0.0;
  func_0x00010c044c20();
  _objc_release(puVar13);
  _objc_release(lVar7);
  _objc_release(puVar26);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(lVar6);
  _objc_release(puStack_270);
  _objc_release(lVar5);
  _objc_release(puStack_268);
  _objc_release(puVar25);
  _objc_release(puVar28);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(0);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    uVar23 = 0;
    __Block_object_dispose(&uStack_180);
    __Unwind_Resume();
    _objc_retain();
    lVar2 = param_2;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cc4e0;
    _objc_alloc();
    lVar5 = param_2;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2fc8;
    _objc_alloc(PTR_PTR_1126c2fc8);
    func_0x00010c0559e0();
    puVar8 = PTR_PTR_1126c2fd0;
    func_0x00010c293b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar10 = lVar2;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar2;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_2;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar24;
    if ((uVar23 & 1) == 0) {
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
        dVar33 = 2.2250738585072014e-308;
      }
      else {
        func_0x00010c26f320(lVar12);
        dVar33 = dVar31;
      }
    }
    else {
      func_0x00010c1058a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 == 0) {
        dVar33 = 3600.0;
      }
      else {
        func_0x00010c26f320(lVar12);
        dVar33 = dVar31 + 3600.0;
      }
    }
    _objc_release(lVar12);
    puVar4 = PTR_PTR_1126cf3b8;
    _objc_alloc();
    func_0x00010bf8b160(lVar24);
    dVar32 = dVar31;
    func_0x00010c071060(lVar24);
    lVar12 = lVar24;
    func_0x00010c1058a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      dVar32 = 2.2250738585072014e-308;
    }
    else {
      func_0x00010c26f320(lVar12);
    }
    func_0x00010c00eac0(dVar31,dVar33,dVar32);
    _objc_release(lVar12);
    lVar12 = param_2;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      puStack_490 = (undefined *)0x0;
    }
    else {
      lVar27 = lVar12;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar27 == 0) {
        puStack_460 = (undefined *)0x0;
      }
      else {
        puStack_460 = PTR_PTR_1126d5df0;
        _objc_alloc();
        lVar14 = lVar27;
        func_0x00010c08f8a0(lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar27;
        func_0x00010c0c3fe0(lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar27;
        func_0x00010c0ef4a0(lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar27;
        func_0x00010c26d760(lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar27;
        func_0x00010bfb11c0(lVar27);
        _objc_retainAutoreleasedReturnValue();
        lVar19 = lVar27;
        func_0x00010c260dc0(lVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c022620();
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(lVar14);
      }
      puStack_490 = PTR_PTR_1126cf3c0;
      _objc_alloc();
      lVar14 = lVar12;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar12;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(lVar12);
      func_0x0001084f2c6c();
      lVar19 = lVar12;
      func_0x00010bf06600(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar12;
      func_0x00010bf7f0c0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c083e00();
      lVar21 = lVar12;
      func_0x00010bf1f2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar12;
      func_0x00010bfb26c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b280();
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(puStack_460);
      _objc_release(lVar27);
    }
    lVar27 = param_2;
    func_0x00010bf4e860();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar27;
    func_0x00010c08fa60();
    if (lVar14 == 0) {
      puStack_460 = (undefined *)0x0;
    }
    else {
      puStack_460 = PTR_PTR_1126cf3e8;
      _objc_alloc();
      func_0x00010c03cda0();
    }
    lVar14 = param_2;
    func_0x00010c2815a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c08fa60();
    if (lVar15 == 0) {
      puStack_4a8 = (undefined *)0x0;
    }
    else {
      puStack_4a8 = PTR_PTR_1126cf3f0;
      _objc_alloc();
      func_0x00010c03cda0();
    }
    lVar15 = lVar2;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar9 = (undefined *)0x0;
    if (lVar17 != 0) {
      puVar9 = PTR_PTR_1126cf3f8;
      _objc_alloc();
      lVar17 = lVar16;
      func_0x00010c2475a0(lVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a9a0();
      _objc_release(lVar17);
    }
    lVar17 = param_2;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c247520();
    if (lVar18 == 1) {
      lVar18 = lVar17;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c08fa60();
      if (lVar19 == 0) {
        puVar28 = (undefined *)0x0;
      }
      else {
        puVar28 = PTR_PTR_1126cf400;
        _objc_alloc();
        func_0x00010c00d4e0();
      }
      _objc_release(lVar18);
    }
    else {
      puVar28 = (undefined *)0x0;
    }
    func_0x00010c141c40();
    lVar18 = param_2;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
    if (lVar18 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = PTR_PTR_1126c32f8;
      _objc_alloc();
      lVar19 = lVar18;
      func_0x00010bf24a40(lVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158380(lVar18);
      func_0x00010c1581e0(lVar18);
      func_0x00010bff9aa0();
      _objc_release(lVar19);
    }
    lVar19 = param_2;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2;
    func_0x00010c0c5b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044c20();
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(puVar25);
    _objc_release(lVar18);
    _objc_release(puVar28);
    _objc_release(lVar17);
    _objc_release(puVar9);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(puStack_4a8);
    _objc_release(lVar14);
    _objc_release(puStack_460);
    _objc_release(lVar27);
    _objc_release(puStack_490);
    _objc_release(lVar12);
    _objc_release(puVar4);
    _objc_release(lVar24);
    _objc_release(lVar29);
    _objc_release(lVar10);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a07834; end: 107a08073;  */

void FUN_107a07834(double param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_b0;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  lVar3 = param_2;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c2fc8;
  _objc_alloc(PTR_PTR_1126c2fc8);
  func_0x00010c0559e0();
  puVar7 = PTR_PTR_1126c2fd0;
  func_0x00010c293b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar8 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  if ((param_3 & 1) == 0) {
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      dVar26 = 2.2250738585072014e-308;
    }
    else {
      func_0x00010c26f320(lVar11);
      dVar26 = param_1;
    }
  }
  else {
    func_0x00010c1058a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      dVar26 = 3600.0;
    }
    else {
      func_0x00010c26f320(lVar11);
      dVar26 = param_1 + 3600.0;
    }
  }
  _objc_release(lVar11);
  puVar6 = PTR_PTR_1126cf3b8;
  _objc_alloc();
  func_0x00010bf8b160(lVar10);
  dVar25 = param_1;
  func_0x00010c071060(lVar10);
  lVar11 = lVar10;
  func_0x00010c1058a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    dVar25 = 2.2250738585072014e-308;
  }
  else {
    func_0x00010c26f320(lVar11);
  }
  func_0x00010c00eac0(param_1,dVar26,dVar25);
  _objc_release(lVar11);
  lVar11 = param_2;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uStack_e0 = (undefined *)0x0;
  }
  else {
    lVar12 = lVar11;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar12 == 0) {
      uStack_b0 = (undefined *)0x0;
    }
    else {
      uStack_b0 = PTR_PTR_1126d5df0;
      _objc_alloc();
      lVar13 = lVar12;
      func_0x00010c08f8a0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      func_0x00010c0c3fe0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010c0ef4a0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar12;
      func_0x00010c26d760(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar12;
      func_0x00010bfb11c0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar12;
      func_0x00010c260dc0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c022620();
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
    }
    uStack_e0 = PTR_PTR_1126cf3c0;
    _objc_alloc();
    lVar13 = lVar11;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar11;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar11;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80(lVar11);
    func_0x0001084f2c6c();
    lVar18 = lVar11;
    func_0x00010bf06600(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar11;
    func_0x00010bf7f0c0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083e00();
    lVar20 = lVar11;
    func_0x00010bf1f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar11;
    func_0x00010bfb26c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b280();
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uStack_b0);
    _objc_release(lVar12);
  }
  lVar12 = param_2;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c08fa60();
  if (lVar13 == 0) {
    uStack_b0 = (undefined *)0x0;
  }
  else {
    uStack_b0 = PTR_PTR_1126cf3e8;
    _objc_alloc();
    func_0x00010c03cda0();
  }
  lVar13 = param_2;
  func_0x00010c2815a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c08fa60();
  if (lVar14 == 0) {
    uStack_f8 = (undefined *)0x0;
  }
  else {
    uStack_f8 = PTR_PTR_1126cf3f0;
    _objc_alloc();
    func_0x00010c03cda0();
  }
  lVar14 = lVar1;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2475a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar22 = (undefined *)0x0;
  if (lVar16 != 0) {
    puVar22 = PTR_PTR_1126cf3f8;
    _objc_alloc();
    lVar16 = lVar15;
    func_0x00010c2475a0(lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a9a0();
    _objc_release(lVar16);
  }
  lVar16 = param_2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c247520();
  if (lVar17 == 1) {
    lVar17 = lVar16;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c08fa60();
    if (lVar18 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = PTR_PTR_1126cf400;
      _objc_alloc();
      func_0x00010c00d4e0();
    }
    _objc_release(lVar17);
  }
  else {
    puVar24 = (undefined *)0x0;
  }
  func_0x00010c141c40();
  lVar17 = param_2;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar17 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = PTR_PTR_1126c32f8;
    _objc_alloc();
    lVar18 = lVar17;
    func_0x00010bf24a40(lVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158380(lVar17);
    func_0x00010c1581e0(lVar17);
    func_0x00010bff9aa0();
    _objc_release(lVar18);
  }
  lVar18 = param_2;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044c20();
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(puVar23);
  _objc_release(lVar17);
  _objc_release(puVar24);
  _objc_release(lVar16);
  _objc_release(puVar22);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uStack_f8);
  _objc_release(lVar13);
  _objc_release(uStack_b0);
  _objc_release(lVar12);
  _objc_release(uStack_e0);
  _objc_release(lVar11);
  _objc_release(puVar6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a08074; end: 107a0808b;  */

void FUN_107a08074(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a0808c; end: 107a0811f;  */

void FUN_107a0808c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a08120; end: 107a08133;  */

void FUN_107a08120(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a08134; end: 107a08197;  */

void FUN_107a08134(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108ea5f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108ea5f8c(uVar2,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a08198; end: 107a081bb; -[SCStoryPostingMediaInjestor initWithEphemeralMedia:completion:showToastWhenComplete:lazyMediaDataIngestor:lazyStoriesMediaCoordinator:lazyMyStoriesDataCoordinator:storiesGrapheneMetricsEmitter:] */

void FUN_107a08198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0106f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x403e000000000000,param_1,PTR_s_initWithEphemeralMedia_mediaCoor_1125e1b88,param_3,
             param_7,param_8,param_6,param_9,param_4);
  return;
}



/* Entry: 107a081bc; end: 107a08447; -[SCStoryPostingMediaInjestor initWithEphemeralMedia:mediaCoordinator:myStoriesDataCoordinator:mediaInjestor:grapheneMetricsEmitter:completion:showToastWhenComplete:timeoutInterval:] */

undefined1 *
FUN_107a081bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f9480;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(long *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c2836a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(lVar3);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar7);
    *(undefined1 *)((long)puVar1 + 0x51) = param_10;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
    lVar3 = param_4;
    func_0x00010bf983a0(param_4);
    func_0x00010843d284();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac8e0(*(undefined8 *)((long)puVar1 + 0x18));
    lVar6 = param_4;
    func_0x00010bf983a0();
    if ((lVar6 != -8) && (lVar6 = param_4, func_0x00010bf983a0(), lVar6 != -6)) {
      func_0x00010be995c0(puVar1);
      func_0x00010bedd980(puVar1);
      lVar6 = param_4;
      func_0x00010bf983a0();
      if (lVar6 == -4) {
        func_0x00010bec06c0(puVar1);
      }
      else {
        lVar6 = param_4;
        func_0x00010bf983a0();
        if (lVar6 == -2) {
          func_0x00010bee2e00(puVar1);
        }
      }
    }
    _objc_release(lVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107a08448; end: 107a0844f; -[SCStoryPostingMediaInjestor mentionedUsernames] */

void FUN_107a08448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_notifiedUsernames_112614d68);
  return;
}



/* Entry: 107a08450; end: 107a085a3; -[SCStoryPostingMediaInjestor mentionedUserIds] */

void FUN_107a08450(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0ca760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ca5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar7 = uVar1;
  func_0x00010bf529e0(uVar1);
  func_0x00010bf0a0e0(puVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar5 = uVar3;
      func_0x00010bf529e0();
      if ((uVar5 <= uVar7) ||
         (uVar5 = uVar3, func_0x00010c296de0(uVar3,param_2,uVar7), (int)uVar5 != 3)) {
        uVar5 = uVar1;
        func_0x00010c0dfd40(uVar1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x000109189508();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      uVar7 = uVar7 + 1;
      uVar5 = uVar1;
      func_0x00010bf529e0();
    } while (uVar7 < uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a085a4; end: 107a0871b; -[SCStoryPostingMediaInjestor trayMentionedUserIds] */

void FUN_107a085a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0ca760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ca5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf529e0();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (uVar7 != 0) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      uVar4 = uVar3;
      func_0x00010c296de0(uVar3,param_2,uVar7);
      if ((int)uVar4 == 3) {
        uVar6 = uVar6 + 1;
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar4);
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if ((uVar6 != 0) &&
       (uVar7 = uVar1, func_0x00010bf529e0(), puVar5 = PTR____NSArray0__struct_11034ab48,
       uVar6 <= uVar7)) {
      uVar7 = uVar1;
      func_0x00010bf529e0();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      for (uVar7 = uVar7 - uVar6; uVar6 = uVar1, func_0x00010bf529e0(), uVar7 < uVar6;
          uVar7 = uVar7 + 1) {
        uVar6 = uVar1;
        func_0x00010c0dfd40(uVar1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        func_0x000109189508();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar6);
      }
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a0871c; end: 107a08723; -[SCStoryPostingMediaInjestor quotedUserId] */

void FUN_107a0871c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_quotedUserId_1126255b8);
  return;
}



/* Entry: 107a08724; end: 107a0872b; -[SCStoryPostingMediaInjestor quotedStickerType] */

void FUN_107a08724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_quotedStickerType_1126255a8);
  return;
}



/* Entry: 107a0872c; end: 107a08733; -[SCStoryPostingMediaInjestor repostedMentionUserId] */

void FUN_107a0872c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_repostedMentionUserId_11262ab68);
  return;
}



/* Entry: 107a08734; end: 107a0873b; -[SCStoryPostingMediaInjestor shareYoursId] */

void FUN_107a08734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_shareYoursId_112668738);
  return;
}



/* Entry: 107a0873c; end: 107a087c7; -[SCStoryPostingMediaInjestor ephemeralMediaVideoProcessingDidSucceedForMedia:] */

void FUN_107a0873c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    func_0x00010be995c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePostingState_112595008);
    return;
  }
  return;
}



/* Entry: 107a087c8; end: 107a08883; -[SCStoryPostingMediaInjestor ephemeralMediaVideoProcessingDidFailForMedia:] */

void FUN_107a087c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a08884;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_58);
    func_0x00010bedd980(param_1);
  }
  return;
}



/* Entry: 107a08884; end: 107a088e3;  */

void FUN_107a08884(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0ac8c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      &PTR____CFConstantStringClassReference_110ea9958);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107a088e4; end: 107a0896f; -[SCStoryPostingMediaInjestor ephemeralMediaImageProcessingDidCompleteForMedia:] */

void FUN_107a088e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    func_0x00010be995c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePostingState_112595008);
    return;
  }
  return;
}



/* Entry: 107a08970; end: 107a08993; -[SCStoryPostingMediaInjestor ephemeralMediaUploadDidStartForMedia:] */

void FUN_107a08970(undefined8 param_1)

{
  func_0x00010bedd980();
                    /* WARNING: Could not recover jumptable at 0x00010bec06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startMonitoringUploadProgress_11258db58);
  return;
}



/* Entry: 107a08994; end: 107a089b7; -[SCStoryPostingMediaInjestor ephemeralMediaUploadDidSucceedForMedia:] */

void FUN_107a08994(undefined8 param_1)

{
  func_0x00010bedd980();
                    /* WARNING: Could not recover jumptable at 0x00010bee2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUploadProgressToUploaded_112596528);
  return;
}



/* Entry: 107a089b8; end: 107a089bb; -[SCStoryPostingMediaInjestor ephemeralMediaUploadDidFailForMedia:] */

void FUN_107a089b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePostingState_112595008);
  return;
}



/* Entry: 107a089bc; end: 107a08b6b; -[SCStoryPostingMediaInjestor _saveMediaToCache] */

void FUN_107a089bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107a08b6c;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f7fe0(*(undefined8 *)(param_1 + 0x48),uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c3fe0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf64860(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_88);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c3fe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efce0();
  func_0x00010c28a1a0(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107a08b6c; end: 107a08bdf;  */

void FUN_107a08b6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a08be0; end: 107a08c6f; -[SCStoryPostingMediaInjestor _handleFetchedDataToUpload:] */

void FUN_107a08be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a08c70;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 107a08c70; end: 107a08f63;  */

void FUN_107a08c70(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x40);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40) = 0;
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c0ac8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                 PTR_s_logPostingMediaInjestingResult__112608c40,
                 &PTR____CFConstantStringClassReference_110ea9978);
      return;
    }
  }
  else {
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x28));
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107a08f64;
    puStack_78 = &UNK_110849200;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar2 = &puStack_90;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(uVar10);
    uVar9 = uVar10;
    func_0x00010bf3cf60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar5 = PTR_PTR_1126bfca8;
    _objc_alloc(PTR_PTR_1126bfca8);
    uVar9 = uVar10;
    func_0x00010bf98340(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf98320(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar9);
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c3390;
    _objc_alloc(PTR_PTR_1126c3390);
    func_0x00010c27dd80(uVar10);
    uVar9 = uVar10;
    func_0x00010c0c3fe0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    func_0x00010c0efce0(uVar9);
    func_0x00010bffa840(puVar8);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14b180(uVar3);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 107a08f64; end: 107a08fd3;  */

void FUN_107a08f64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0ac8c0(*(undefined8 *)(param_1 + 0x18));
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a08fd4; end: 107a09027; -[SCStoryPostingMediaInjestor _handleFetchMediaTimeout] */

void FUN_107a08fd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0ac8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_logPostingMediaInjestingResult__112608c40,
               &PTR____CFConstantStringClassReference_110ea9998);
    return;
  }
  return;
}



/* Entry: 107a09028; end: 107a090c7; -[SCStoryPostingMediaInjestor _updatePostingState] */

void FUN_107a09028(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf983a0();
  if (lVar1 + 7U < 6) {
    uVar4 = *(undefined8 *)(&UNK_10dee0bb0 + (lVar1 + 7U) * 8);
  }
  else {
    uVar4 = 0xfffffffffffffffa;
  }
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288b20(lVar2,param_2,uVar4,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a090c8; end: 107a091c7; -[SCStoryPostingMediaInjestor _startMonitoringUploadProgress] */

void FUN_107a090c8(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a091c8;
  puStack_48 = &UNK_110984fa0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f500(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a091c8; end: 107a09283;  */

void FUN_107a091c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107a09284;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107a09284; end: 107a092b7;  */

void FUN_107a09284(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a092b8; end: 107a09383; -[SCStoryPostingMediaInjestor _updateUploadProgressWithProgress:] */

void FUN_107a092b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    dVar4 = 1.0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf43fa0();
    lVar2 = param_3;
    func_0x00010c276f80();
    dVar4 = (double)lVar1 / (double)lVar2;
  }
  if (*(double *)(param_1 + 0x30) < dVar4) {
    *(double *)(param_1 + 0x30) = dVar4;
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf3cf60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288ac0(dVar4,lVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a09384; end: 107a09403; -[SCStoryPostingMediaInjestor _updateUploadProgressToUploaded] */

void FUN_107a09384(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x30) = 0x3ff0000000000000;
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf3cf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288ac0(0x3ff0000000000000,lVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a09404; end: 107a0940b; -[SCStoryPostingMediaInjestor showToastWhenComplete] */

undefined1 FUN_107a09404(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 107a0940c; end: 107a09473; -[SCStoryPostingMediaInjestor .cxx_destruct] */

void FUN_107a0940c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a09474; end: 107a0947b; -[SCMapMessagingServices mapSender] */

undefined8 FUN_107a09474(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a0947c; end: 107a09487; -[SCMapMessagingServices .cxx_destruct] */

void FUN_107a0947c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a09488; end: 107a0956f; -[SCMapSnapShareDataModel initWithStoryId:mediaType:poiId:additionalText:] */

undefined1 *
FUN_107a09488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9490;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a09570; end: 107a09593; -[SCMapSnapShareDataModel copyWithZone:] */

undefined8 FUN_107a09570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a09594; end: 107a0961f; -[SCMapSnapShareDataModel hash] */

undefined8 * FUN_107a09594(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  puVar2 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_107a096c8:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a096d4;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (puVar2[2] == param_3[2])) {
      lVar4 = puVar2[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[3];
        if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = (undefined8 *)puVar2[4];
          if (puVar5 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_107a096d4;
          }
          goto LAB_107a096c8;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_107a096d4:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107a09620; end: 107a096ef; -[SCMapSnapShareDataModel isEqual:] */

long FUN_107a09620(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a096c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a096d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107a096d4;
          }
          goto LAB_107a096c8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a096d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a096f0; end: 107a096f7; -[SCMapSnapShareDataModel storyId] */

undefined8 FUN_107a096f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a096f8; end: 107a096ff; -[SCMapSnapShareDataModel mediaType] */

undefined8 FUN_107a096f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a09700; end: 107a09707; -[SCMapSnapShareDataModel poiId] */

undefined8 FUN_107a09700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a09708; end: 107a0970f; -[SCMapSnapShareDataModel additionalText] */

undefined8 FUN_107a09708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a09710; end: 107a0974b; -[SCMapSnapShareDataModel .cxx_destruct] */

void FUN_107a09710(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a0974c; end: 107a097a7; -[SCFriendLocationSnapshotMapLocation initWithLatitude:longitude:zoomLevel:] */

void FUN_107a0974c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9498;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 107a097a8; end: 107a097cb; -[SCFriendLocationSnapshotMapLocation copyWithZone:] */

undefined8 FUN_107a097a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a097cc; end: 107a09883; -[SCFriendLocationSnapshotMapLocation hash] */

ulong * FUN_107a097cc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
          dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            if (dVar7 <= 2.2250738585072014e-308) {
              dVar7 = 2.2250738585072014e-308;
            }
            puVar6 = (undefined1 *)
                     (ulong)(ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18)) <
                            dVar7);
            goto LAB_107a0997c;
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_107a0997c:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107a09884; end: 107a09997; -[SCFriendLocationSnapshotMapLocation isEqual:] */

bool FUN_107a09884(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) < dVar4;
            goto LAB_107a0997c;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_107a0997c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107a09998; end: 107a0999f; -[SCFriendLocationSnapshotMapLocation latitude] */

undefined8 FUN_107a09998(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a099a0; end: 107a099a7; -[SCFriendLocationSnapshotMapLocation longitude] */

undefined8 FUN_107a099a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a099a8; end: 107a099af; -[SCFriendLocationSnapshotMapLocation zoomLevel] */

undefined8 FUN_107a099a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a099b0; end: 107a09b1b; -[SCFriendLocationSnapshotMapViewModel initWithMapLocation:centeredLabel:bottomLabel:standingPersonImage:calloutTitle:calloutSubtitle:] */

undefined1 *
FUN_107a099b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f94a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
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



/* Entry: 107a09b1c; end: 107a09b3f; -[SCFriendLocationSnapshotMapViewModel copyWithZone:] */

undefined8 FUN_107a09b1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a09b40; end: 107a09be3; -[SCFriendLocationSnapshotMapViewModel hash] */

undefined8 * FUN_107a09b40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107a09cc4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a09cd0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_107a09cd0;
                }
                goto LAB_107a09cc4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107a09cd0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107a09be4; end: 107a09ceb; -[SCFriendLocationSnapshotMapViewModel isEqual:] */

long FUN_107a09be4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a09cc4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a09cd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_107a09cd0;
                }
                goto LAB_107a09cc4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a09cd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a09cec; end: 107a09cf3; -[SCFriendLocationSnapshotMapViewModel mapLocation] */

undefined8 FUN_107a09cec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a09cf4; end: 107a09cfb; -[SCFriendLocationSnapshotMapViewModel centeredLabel] */

undefined8 FUN_107a09cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a09cfc; end: 107a09d03; -[SCFriendLocationSnapshotMapViewModel bottomLabel] */

undefined8 FUN_107a09cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a09d04; end: 107a09d0b; -[SCFriendLocationSnapshotMapViewModel standingPersonImage] */

undefined8 FUN_107a09d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a09d0c; end: 107a09d13; -[SCFriendLocationSnapshotMapViewModel calloutTitle] */

undefined8 FUN_107a09d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a09d14; end: 107a09d1b; -[SCFriendLocationSnapshotMapViewModel calloutSubtitle] */

undefined8 FUN_107a09d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a09d1c; end: 107a09d7b; -[SCFriendLocationSnapshotMapViewModel .cxx_destruct] */

void FUN_107a09d1c(long param_1)

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



/* Entry: 107a09d7c; end: 107a09ea3; -[SCDropShareDataModel initWithDropIdentifier:creatorIdentifier:dropTitle:coordinate:shouldPersist:pinIcon:] */

undefined1 *
FUN_107a09d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f94a8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107a09ea4; end: 107a09ec7; -[SCDropShareDataModel copyWithZone:] */

undefined8 FUN_107a09ea4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


