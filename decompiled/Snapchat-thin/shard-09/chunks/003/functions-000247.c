/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c73ee4; end: 106c73eef; -[SCPlusCustomPresentationTransition .cxx_destruct] */

void FUN_106c73ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c73ef0; end: 106c73ef7; -[SCPlusCustomTransition setExperimentalGestureCancelRecoveryEnabled:] */

void FUN_106c73ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c198b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setExperimentalGestureCancelReco_112643ce8);
  return;
}



/* Entry: 106c73ef8; end: 106c73eff; -[SCPlusCustomTransition experimentalGestureCancelRecoveryEnabled] */

void FUN_106c73ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_experimentalGestureCancelRecover_1125c4b20);
  return;
}



/* Entry: 106c73f00; end: 106c73fbb; -[SCPlusCustomTransition init] */

undefined1 * FUN_106c73f00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6060;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c73fbc; end: 106c74043; -[SCPlusCustomTransition installShadowOnView:] */

void FUN_106c73fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 0x10));
    func_0x00010bf20c00(param_3);
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c16d4a0(*(undefined8 *)(param_1 + 0x10),param_2,0x12);
    func_0x00010c066fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c74044; end: 106c7404b; -[SCPlusCustomTransition fractionalPresentationHeight] */

void FUN_106c74044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb67f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fractionalPresentationHeight_1125cb3a0);
  return;
}



/* Entry: 106c7404c; end: 106c74053; -[SCPlusCustomTransition setFractionalPresentationHeight:] */

void FUN_106c7404c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFractionalPresentationHeight__112645610);
  return;
}



/* Entry: 106c74054; end: 106c7405b; -[SCPlusCustomTransition cardTransitionDelegate] */

void FUN_106c74054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf31fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cardTransitionDelegate_1125aa198);
  return;
}



/* Entry: 106c7405c; end: 106c74063; -[SCPlusCustomTransition setCardTransitionDelegate:] */

void FUN_106c7405c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1797d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCardTransitionDelegate__11263c010);
  return;
}



/* Entry: 106c74064; end: 106c7406b; -[SCPlusCustomTransition installSwipeToDismissGestureRecognizerOnViews:] */

void FUN_106c74064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_installSwipeToDismissGestureReco_1125f7898);
  return;
}



/* Entry: 106c7406c; end: 106c7409b; -[SCPlusCustomTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106c7406c(void)

{
  _objc_alloc(PTR_PTR_1126d1dd8);
  func_0x00010c0458c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c7409c; end: 106c740cb; -[SCPlusCustomTransition animationControllerForDismissedController:] */

void FUN_106c7409c(void)

{
  _objc_alloc(PTR_PTR_1126d1de0);
  func_0x00010c0458c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c740cc; end: 106c740d3; -[SCPlusCustomTransition interactionControllerForDismissal:] */

void FUN_106c740cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0684b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_interactionControllerForDismissa_1125f7b38);
  return;
}



/* Entry: 106c740d4; end: 106c740db; -[SCPlusCustomTransition animationDuration] */

undefined8 FUN_106c740d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c740dc; end: 106c7410b; -[SCPlusCustomTransition setAnimationDuration:] */

void FUN_106c740dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106c7410c; end: 106c74147; -[SCPlusCustomTransition .cxx_destruct] */

void FUN_106c7410c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c74148; end: 106c7424b;  */

void FUN_106c74148(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  _objc_retain();
  puVar2 = (undefined *)0x0;
  if (param_2 < 3) {
    if (param_2 == 0) {
      func_0x00010b837400();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_2 == 1) {
      func_0x00010b83741c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_2 != 2) goto LAB_106c7420c;
      func_0x00010b8373e4();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_2 - 4U < 2) {
    puVar1 = PTR_PTR_1126d1db8;
    _objc_opt_new(PTR_PTR_1126d1db8);
  }
  else {
    if (param_2 != 3) goto LAB_106c7420c;
    func_0x00010b83741c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1c8b80(param_1);
  puVar2 = puVar1;
LAB_106c7420c:
  func_0x00010c1797c0(puVar2);
  func_0x00010c19efc0(0x3ff0000000000000,puVar2);
  func_0x00010c219b20(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c7424c; end: 106c742cf;  */

undefined4 FUN_106c7424c(long param_1)

{
  if (param_1 - 1U < 5) {
    return *(undefined4 *)(&UNK_10ddea068 + (param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 106c742d0; end: 106c7436b; -[SCEmailSettingsScope initWithUiContainer:delegate:] */

undefined1 *
FUN_106c742d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c7436c; end: 106c74373; -[SCEmailSettingsScope uiContainer] */

undefined8 FUN_106c7436c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c74374; end: 106c7438b; -[SCEmailSettingsScope delegate] */

void FUN_106c74374(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c7438c; end: 106c744bf; -[SCEmailSettingsScope .cxx_destruct] */

void FUN_106c7438c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c744c0; end: 106c745cf;  */

void FUN_106c744c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1de8;
  _objc_retain();
  func_0x00010c260060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc9107c(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  func_0x00010bb06fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010c102280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfec2a0(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c745d0; end: 106c748bb;  */

void FUN_106c745d0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) goto LAB_106c74894;
  puVar1 = param_2;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c071ae0();
  if ((int)puVar2 == 0) {
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_2;
    func_0x00010bf3ec40();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x2) goto LAB_106c74894;
  }
  puVar1 = PTR_PTR_1126d1de8;
  func_0x00010c257fe0(PTR_PTR_1126d1de8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf87dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar3;
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = param_2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c071ae0();
    if ((int)puVar5 != 0) {
      puVar5 = param_2;
      func_0x00010bf3ec40();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar5 != (undefined *)0x0) goto LAB_106c74860;
      puVar5 = puVar2;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010c2ac460(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
  }
LAB_106c74860:
  uVar7 = param_1;
  func_0x00010c102280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_106c74894:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c748bc; end: 106c749cb;  */

void FUN_106c748bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1de8;
  _objc_retain();
  func_0x00010bfa2480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb06fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  func_0x00010bb077b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010c102280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfec2a0(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c749cc; end: 106c749f7; +[SCGraphenePlusMetric myProfileEpShown] */

void FUN_106c749cc(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c749f8; end: 106c74a23; +[SCGraphenePlusMetric ghostTrialEpShown] */

void FUN_106c749f8(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74a24; end: 106c74a4f; +[SCGraphenePlusMetric pinBffEpShown] */

void FUN_106c74a24(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74a50; end: 106c74a7b; +[SCGraphenePlusMetric friendBadgeEpShown] */

void FUN_106c74a50(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74a7c; end: 106c74aa7; +[SCGraphenePlusMetric subscribePageEpShown] */

void FUN_106c74a7c(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74aa8; end: 106c74ad3; +[SCGraphenePlusMetric upsellPageShown] */

void FUN_106c74aa8(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74ad4; end: 106c74aff; +[SCGraphenePlusMetric upsellPageAction] */

void FUN_106c74ad4(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74b00; end: 106c74b2b; +[SCGraphenePlusMetric storekitError] */

void FUN_106c74b00(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74b2c; end: 106c74b57; +[SCGraphenePlusMetric featureInteraction] */

void FUN_106c74b2c(void)

{
  _objc_alloc(PTR_PTR_1126d1de8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c74b58; end: 106c74bf7; -[SCGraphenePlusMetric description] */

void FUN_106c74b58(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e7d318;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e7d318,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f6070;
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



/* Entry: 106c74bf8; end: 106c74d8b; -[SCGrapheneRegistry plusGraphene] */

void FUN_106c74bf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106c74c80;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6f80 != -1) {
    func_0x00010002a2fc(0x1136c6f80,&puStack_48);
  }
  uVar1 = uRam00000001136c6f78;
  _objc_retain(uRam00000001136c6f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c74d8c; end: 106c74e37; -[SCPlusMessagingCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_106c74d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6078;
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



/* Entry: 106c74e38; end: 106c74e47; -[SCPlusMessagingCallback onError:] */

void FUN_106c74e38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c74e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 106c74e48; end: 106c74e53; -[SCPlusMessagingCallback onSuccess] */

void FUN_106c74e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106c74e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 106c74e54; end: 106c74e83; -[SCPlusMessagingCallback .cxx_destruct] */

void FUN_106c74e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c74e84; end: 106c74f2f; -[SCPlusMessagingListLocalConversationsCallback initWithSucccessCallback:failureCallback:] */

undefined1 *
FUN_106c74e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6080;
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



/* Entry: 106c74f30; end: 106c74f47; -[SCPlusMessagingListLocalConversationsCallback onError:] */

void FUN_106c74f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c74f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 106c74f48; end: 106c74f5f; -[SCPlusMessagingListLocalConversationsCallback onListConversationsComplete:] */

void FUN_106c74f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c74f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 106c74f60; end: 106c74f77; -[SCPlusMessagingListLocalConversationsCallback onListLocalConversationsComplete:] */

void FUN_106c74f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c74f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 106c74f78; end: 106c74fa7; -[SCPlusMessagingListLocalConversationsCallback .cxx_destruct] */

void FUN_106c74f78(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c74fa8; end: 106c751b3;  */

void FUN_106c74fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08fa60();
  puVar9 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e7d458;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7d458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar8 = (undefined **)PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b41e0;
    _objc_alloc(PTR_PTR_1126b41e0);
    func_0x00010c004e00();
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126be918;
    _objc_alloc(PTR_PTR_1126be918);
    func_0x00010c04f4c0();
    uVar5 = param_3;
    func_0x00010c0d5c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c2665a0(uVar7);
    puVar9 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar8);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c751b4; end: 106c751bf;  */

void FUN_106c751b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106c751c0; end: 106c7521f;  */

void FUN_106c751c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107d6c230(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c7723c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c75220; end: 106c753d3;  */

void FUN_106c75220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_11096cdd0);
  lVar1 = param_1;
  func_0x00010bf529e0();
  puVar7 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126d1df0;
    _objc_alloc(PTR_PTR_1126d1df0);
    func_0x00010c04f4c0();
    uVar3 = param_3;
    func_0x00010c0d5c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf17300(uVar5);
    puVar7 = puVar6;
    func_0x00010bfbc3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c753d4; end: 106c75463;  */

void FUN_106c753d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b41e0;
    _objc_alloc(PTR_PTR_1126b41e0);
    func_0x00010c004e00();
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c75464; end: 106c754a7;  */

void FUN_106c75464(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c754a8; end: 106c75507;  */

void FUN_106c754a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107d6c230(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c7723c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c75508; end: 106c755b3; -[SCMessagingFetchConversationCallback initWithSuccessHandler:failureHandler:] */

undefined1 *
FUN_106c75508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6088;
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



/* Entry: 106c755b4; end: 106c755cb; -[SCMessagingFetchConversationCallback onFetchConversationComplete:] */

void FUN_106c755b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c755c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 106c755cc; end: 106c755e3; -[SCMessagingFetchConversationCallback onError:] */

void FUN_106c755cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c755dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 106c755e4; end: 106c75613; -[SCMessagingFetchConversationCallback .cxx_destruct] */

void FUN_106c755e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c75614; end: 106c756bf; -[SCMessagingFetchQuotedMessageCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_106c75614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6090;
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



/* Entry: 106c756c0; end: 106c756cf; -[SCMessagingFetchQuotedMessageCallback onSuccess:] */

void FUN_106c756c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c756cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 106c756d0; end: 106c756df; -[SCMessagingFetchQuotedMessageCallback onError:] */

void FUN_106c756d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c756dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 106c756e0; end: 106c7570f; -[SCMessagingFetchQuotedMessageCallback .cxx_destruct] */

void FUN_106c756e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c75710; end: 106c757bb; -[SCMessagingSyncConversationCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_106c75710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6098;
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



/* Entry: 106c757bc; end: 106c757cb; -[SCMessagingSyncConversationCallback onComplete:] */

void FUN_106c757bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c757c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 106c757cc; end: 106c757db; -[SCMessagingSyncConversationCallback onError:] */

void FUN_106c757cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c757d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 106c757dc; end: 106c7580b; -[SCMessagingSyncConversationCallback .cxx_destruct] */

void FUN_106c757dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c7580c; end: 106c758b7; -[SCMessagingUnreadMessageCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_106c7580c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f60a0;
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



/* Entry: 106c758b8; end: 106c758c7; -[SCMessagingUnreadMessageCallback onSuccess:] */

void FUN_106c758b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c758c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 106c758c8; end: 106c758d7; -[SCMessagingUnreadMessageCallback onError:] */

void FUN_106c758c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106c758d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 106c758d8; end: 106c75907; -[SCMessagingUnreadMessageCallback .cxx_destruct] */

void FUN_106c758d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c75908; end: 106c75913; -[SCFeatureSettingsService isPlusAppIconNameAvailable] */

void FUN_106c75908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7d478);
  return;
}



/* Entry: 106c75914; end: 106c7591f; -[SCFeatureSettingsService plusAppIconNameServerParam] */

undefined ** FUN_106c75914(void)

{
  return &PTR____CFConstantStringClassReference_110e7d478;
}



/* Entry: 106c75920; end: 106c7592f; -[SCFeatureSettingsService setPlusAppIconName:] */

void FUN_106c75920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e7d478,param_3);
  return;
}



/* Entry: 106c75930; end: 106c75957; -[SCFeatureSettingsService plus_custom_icon_client_value:] */

void FUN_106c75930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106c75958; end: 106c7597f; -[SCFeatureSettingsService plus_custom_icon_server_value:] */

void FUN_106c75958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106c75980; end: 106c75993; -[SCFeatureSettingsService plusAppIconName] */

void FUN_106c75980(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e7d478,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106c75994; end: 106c7599f; -[SCFeatureSettingsService isPostViewEmojiAvailable] */

void FUN_106c75994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7d498);
  return;
}



/* Entry: 106c759a0; end: 106c759ab; -[SCFeatureSettingsService postViewEmojiServerParam] */

undefined ** FUN_106c759a0(void)

{
  return &PTR____CFConstantStringClassReference_110e7d498;
}



/* Entry: 106c759ac; end: 106c759bb; -[SCFeatureSettingsService setPostViewEmoji:] */

void FUN_106c759ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e7d498,param_3);
  return;
}



/* Entry: 106c759bc; end: 106c759e3; -[SCFeatureSettingsService post_view_emoji_string_client_value:] */

void FUN_106c759bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106c759e4; end: 106c75a0b; -[SCFeatureSettingsService post_view_emoji_string_server_value:] */

void FUN_106c759e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106c75a0c; end: 106c75a1f; -[SCFeatureSettingsService postViewEmoji] */

void FUN_106c75a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e7d498,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106c75a20; end: 106c75a2b; -[SCFeatureSettingsService isPlusUnredeemedBuddyPassTimestampAvailable] */

void FUN_106c75a20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e7d4b8);
  return;
}



/* Entry: 106c75a2c; end: 106c75a37; -[SCFeatureSettingsService plusUnredeemedBuddyPassTimestampMsServerParam] */

undefined ** FUN_106c75a2c(void)

{
  return &PTR____CFConstantStringClassReference_110e7d4b8;
}



/* Entry: 106c75a38; end: 106c75a3f; -[SCFeatureSettingsService plus_unredeemed_buddy_pass_timestamp_client_value:] */

void FUN_106c75a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106c75a40; end: 106c75a47; -[SCFeatureSettingsService plus_unredeemed_buddy_pass_timestamp_server_value:] */

void FUN_106c75a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106c75a48; end: 106c75a57; -[SCFeatureSettingsService plusUnredeemedBuddyPassTimestampMs] */

void FUN_106c75a48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e7d4b8,0);
  return;
}



/* Entry: 106c75a58; end: 106c75ba7;  */

void FUN_106c75a58(double param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  uVar4 = uRam00000001136c6f88;
  if (lRam00000001136c6f90 != -1) {
    func_0x00010002a2fc(0x1136c6f90,&PTR___NSConcreteGlobalBlock_11096cdf0);
    uVar4 = uRam00000001136c6f88;
  }
  uRam00000001136c6f88 = uVar4;
  if ((param_3 & 1) == 0) {
    _objc_retain(uVar4);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0b5020();
    lVar2 = param_2;
    func_0x00010c0b5020();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    lStack_48 = lVar1;
    if (lVar2 != 0) {
      if (lVar1 <= lVar2) {
        lVar1 = lVar2;
      }
      if (lVar2 <= (long)(param_1 * 1000.0)) {
        lStack_48 = lVar1;
      }
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc0000000;
    pcStack_58 = FUN_106c76c1c;
    puStack_50 = &UNK_11096ce10;
    uVar4 = uRam00000001136c6f88;
    func_0x0001006372a4(uRam00000001136c6f88,&puStack_68);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106c75ba8; end: 106c76b07;  */

void FUN_106c75ba8(void)

{
  undefined8 uVar1;
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
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined *puVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined *puVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined *puVar81;
  undefined *puVar82;
  undefined *puVar83;
  undefined *puVar84;
  undefined **ppuVar85;
  undefined **ppuVar86;
  undefined **ppuVar87;
  undefined **ppuVar88;
  long lVar89;
  
  lVar89 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d1df8;
  _objc_alloc();
  puVar3 = puVar2;
  FUN_106c76b08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d500();
  puVar4 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar5 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar6 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar7 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar8 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar9 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar10 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar11 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar12 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar13 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar14 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar15 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar16 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar17 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar18 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar19 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar20 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar21 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar22 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar23 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar24 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar25 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar26 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar27 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar28 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar29 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar30 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar31 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar32 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar33 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar34 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar35 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar36 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar37 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar38 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar39 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar40 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar41 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar42 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar43 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar44 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar45 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar46 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar47 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar48 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar49 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar50 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar51 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar52 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar53 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar54 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar55 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar56 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar57 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar58 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar59 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar60 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar61 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar62 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar63 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar64 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar65 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar66 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar67 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar68 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar69 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar70 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar71 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar72 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar73 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar74 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar75 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar76 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar77 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar78 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar79 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar80 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar81 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar82 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar83 = PTR_PTR_1126d1df8;
  _objc_alloc();
  func_0x00010c02d500();
  puVar84 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6f88;
  puRam00000001136c6f88 = puVar84;
  _objc_release(uVar1);
  _objc_release(puVar83);
  _objc_release(puVar82);
  _objc_release(puVar81);
  _objc_release(puVar80);
  _objc_release(puVar79);
  _objc_release(puVar78);
  _objc_release(puVar77);
  _objc_release(puVar76);
  _objc_release(puVar75);
  _objc_release(puVar74);
  _objc_release(puVar73);
  _objc_release(puVar72);
  _objc_release(puVar71);
  _objc_release(puVar70);
  _objc_release(puVar69);
  _objc_release(puVar68);
  _objc_release(puVar67);
  _objc_release(puVar66);
  _objc_release(puVar65);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(puVar55);
  _objc_release(puVar54);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
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
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar89) {
    return;
  }
  ___stack_chk_fail();
  ppuVar85 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar86 = ppuVar85;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar85);
  ppuVar87 = ppuVar86;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar88 = ppuVar87;
  _objc_opt_isKindOfClass(ppuVar87,puVar2);
  ppuVar85 = ppuVar87;
  if (((ulong)ppuVar88 & 1) == 0) {
    ppuVar85 = (undefined **)0x0;
  }
  _objc_retain(ppuVar85);
  _objc_release(ppuVar87);
  ppuVar87 = ppuVar85;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar85);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar88 = ppuVar87;
  _objc_opt_isKindOfClass(ppuVar87,puVar2);
  ppuVar85 = ppuVar87;
  if (((ulong)ppuVar88 & 1) == 0) {
    ppuVar85 = (undefined **)0x0;
  }
  _objc_retain(ppuVar85);
  _objc_release(ppuVar87);
  ppuVar87 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar85 != (undefined **)0x0) {
    ppuVar87 = ppuVar85;
  }
  _objc_retain(ppuVar87);
  _objc_release(ppuVar85);
  _objc_release(ppuVar86);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar87);
  return;
}



/* Entry: 106c76b08; end: 106c76c1b;  */

void FUN_106c76b08(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar3 = ppuVar2;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  ppuVar5 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar1 = ppuVar3;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar5 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar1 = ppuVar3;
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106c76c1c; end: 106c76c67;  */

bool FUN_106c76c1c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010befce00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2827c0();
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_release(param_2);
  return uVar1 <= uVar2;
}



/* Entry: 106c76c68; end: 106c76df3;  */

ulong FUN_106c76c68(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar10 = param_1;
  FUN_106c75a58(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (uVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      uVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar10);
        }
        uVar3 = *(ulong *)(uVar12 * 8);
        func_0x00010befce00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2827c0();
        _objc_release(uVar3);
        if (uVar11 <= uVar4) {
          uVar11 = uVar4;
        }
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      uVar2 = uVar10;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar10);
  uVar2 = param_1;
  func_0x00010c0b5020();
  uVar10 = param_1;
  func_0x00010c0b5020();
  if (uVar10 <= uVar11 || uVar11 <= uVar2) {
    uVar10 = uVar2;
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = puVar6;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar5);
  puVar5 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar7);
  uVar10 = 0;
  if (puVar7 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = (ulong)(puVar5 != (undefined *)0x0);
    _objc_release();
  }
  _objc_release(puVar6);
  _objc_release(param_1);
  return uVar10;
}



/* Entry: 106c76df4; end: 106c76efb;  */

bool FUN_106c76df4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar3;
  func_0x00010c296f80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar2 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  bVar1 = false;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar2 != (undefined *)0x0;
    _objc_release();
  }
  _objc_release(puVar3);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106c76efc; end: 106c76f57;  */

void FUN_106c76efc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c2633c0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf01de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c1678e0(param_1,param_2,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c76f58; end: 106c76ffb;  */

void FUN_106c76f58(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c2633c0();
  if ((uVar1 & 1) == 0) {
    FUN_106c76b08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010bf01de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    uVar1 = 0;
    if ((uVar3 == 0) || (uVar1 = uVar2, FUN_106c76df4(), (int)uVar1 == 0)) {
      FUN_106c76b08();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar1 = uVar2;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c76ffc; end: 106c771df;  */

void FUN_106c76ffc(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010c2633c0();
  if ((int)uVar1 == 0) goto LAB_106c771b8;
  FUN_106c76b08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_1;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf01de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar3);
  if (uVar1 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar2 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_106c77118;
    }
    func_0x00010c1678e0(param_2);
  }
LAB_106c77118:
  uVar1 = param_3;
  func_0x00010c101f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar3);
  if (uVar1 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar1);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar2 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_106c771b0;
    }
    func_0x00010c1de0c0(param_3);
  }
LAB_106c771b0:
  _objc_release(uVar3);
LAB_106c771b8:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c771e0; end: 106c7723b;  */

void FUN_106c771e0(long param_1)

{
  long lVar1;
  
  func_0x00010c101f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    FUN_106c76b08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c7723c; end: 106c77257;  */

void FUN_106c7723c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110e7df58,param_1,200);
  return;
}



/* Entry: 106c77258; end: 106c7733f;  */

void FUN_106c77258(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010bf51e00(param_2);
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c77340; end: 106c773c3;  */

void FUN_106c77340(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf51e00(uVar1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106c773c4; end: 106c7758b;  */

void FUN_106c773c4(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    FUN_106c77258(0,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      _objc_retain(param_1);
      puVar5 = param_1;
    }
    else {
      puVar5 = param_1;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c0d3c80();
      _objc_release(puVar5);
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = puVar3;
        func_0x00010c0d3c80(puVar3);
      }
      func_0x00010bef7f60();
      puVar5 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar6 = param_1;
      func_0x00010bf87dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40(param_1);
      puVar7 = puVar2;
      func_0x00010bf51e00(puVar2);
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c7758c; end: 106c776af;  */

void FUN_106c7758c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b3588;
  _objc_retain();
  _objc_alloc(puVar1);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e7df98;
  }
  else {
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_1;
    func_0x00010bf3ec40(param_1);
    func_0x00010c0df780(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e264d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  func_0x00010c02b2e0(puVar1,param_2,ppuVar5);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


