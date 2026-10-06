/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064b651c; end: 1064b6527; -[SCCaptureWorkflowTransitionCoordinator cardTransitionShouldBeginWithView:touchLocation:] */

void FUN_1064b651c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf015b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_allowSwipeToDismissInvokedByGest_11259df10,1);
  return;
}



/* Entry: 1064b6528; end: 1064b656f; -[SCCaptureWorkflowTransitionCoordinator .cxx_destruct] */

void FUN_1064b6528(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064b6570; end: 1064b6613; -[SCCaptureWorkflowUIContainerTransitionCoordinator initWithCameraViewController:presentingUIContainer:] */

undefined1 *
FUN_1064b6570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f16a0;
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



/* Entry: 1064b6614; end: 1064b661f; -[SCCaptureWorkflowUIContainerTransitionCoordinator presentViewControllerAnimationDuration:] */

void FUN_1064b6614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_attachUI__1125a0c08,*(undefined8 *)(param_1 + 8))
  ;
  return;
}



/* Entry: 1064b6620; end: 1064b6627; -[SCCaptureWorkflowUIContainerTransitionCoordinator dismissViewControllerAnimationDuration:completion:] */

void FUN_1064b6620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8);
  return;
}



/* Entry: 1064b6628; end: 1064b66f3; -[SCCaptureWorkflowUIContainerTransitionCoordinator shouldDismissWorkflowOnBackground] */

ulong FUN_1064b6628(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  if (uVar2 == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    _objc_retain(uVar5);
  }
  else {
    _objc_retain();
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar5 = uVar2;
    if ((uVar4 & 1) != 0) {
      func_0x00010c2a0180(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  uVar2 = uVar5;
  func_0x00010c231d80(uVar5);
  _objc_release(uVar5);
  return uVar2;
}



/* Entry: 1064b66f4; end: 1064b6723; -[SCCaptureWorkflowUIContainerTransitionCoordinator .cxx_destruct] */

void FUN_1064b66f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064b6724; end: 1064b6727; -[SCContextViewPerformanceLogger logSessionViewLatency:FullActionsLatency:] */

void FUN_1064b6724(void)

{
  return;
}



/* Entry: 1064b6728; end: 1064b672b; -[SCContextViewPerformanceLogger logLoadStepInteralsWithTimestampDict:isUAB:] */

void FUN_1064b6728(void)

{
  return;
}



/* Entry: 1064b672c; end: 1064b677f;  */

void FUN_1064b672c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c38b8 != -1) {
    func_0x00010002a2fc(0x1136c38b8,&PTR___NSConcreteGlobalBlock_110925140);
  }
  uVar1 = uRam00000001136c38c0;
  _objc_retain(uRam00000001136c38c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b6780; end: 1064b67ab;  */

void FUN_1064b6780(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cafb8;
  _objc_opt_new();
  uVar1 = puRam00000001136c38c0;
  puRam00000001136c38c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b67ac; end: 1064b6943; -[SCContextViewLogger initWithUserTrackedLogger:] */

undefined1 * FUN_1064b67ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f16a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release();
    FUN_1064b672c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126cafc0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)((long)puVar1 + 0x20));
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)((long)puVar1 + 0x20));
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010befa120(*(undefined8 *)((long)puVar1 + 0x20));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064b6944; end: 1064b6a47; -[SCContextViewLogger contextDidLoadWithSessionId:] */

void FUN_1064b6944(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) goto LAB_1064b69f4;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  plVar3 = (long *)(param_1 + 0x30);
  lVar2 = *plVar3;
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
LAB_1064b69dc:
    func_0x00010c1d0640(*plVar3,param_2,puVar1,param_3);
  }
  else {
    plVar3 = (long *)(param_1 + 0x38);
    lVar2 = *plVar3;
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) goto LAB_1064b69dc;
  }
  _objc_release(puVar1);
LAB_1064b69f4:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b6a48; end: 1064b6a5f; -[SCContextViewLogger contextWillLoadLocalOnlyWithSessionId:] */

void FUN_1064b6a48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bece230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trackTimeForCurrentStep_session_112591230,
             *(undefined8 *)(param_1 + 0x38),param_3,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6070,0);
  return;
}



/* Entry: 1064b6a60; end: 1064b6afb; -[SCContextViewLogger contextDidViewWithSessionId:] */

void FUN_1064b6a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece220(param_1,param_2,uVar2,param_3,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b6afc; end: 1064b6d23; -[SCContextViewLogger logContextSessionViewWithSessionId:contextMenuSource:contextMenuSourceSpecific:] */

void FUN_1064b6afc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  __ZNSt3__15mutex4lockEv(param_2 + 0x68);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126cafc8;
    _objc_opt_new(PTR_PTR_1126cafc8);
    func_0x00010c1833c0();
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c0e00e0(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar5 = param_1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c0e00e0(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar3 = dVar5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c0e00e0(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    dVar4 = 0.0;
    if (0.0 <= dVar5 - param_1) {
      dVar4 = dVar5 - param_1;
    }
    if (param_1 == 0.0 || dVar5 == 0.0) {
      dVar4 = -1.0;
    }
    dVar5 = 0.0;
    if (0.0 <= dVar3 - param_1) {
      dVar5 = dVar3 - param_1;
    }
    if (param_1 == 0.0 || dVar3 == 0.0) {
      dVar5 = -1.0;
    }
    func_0x00010c1ac980(dVar4,puVar1);
    func_0x00010c1a14c0(dVar5,puVar1);
    func_0x00010c1831e0(puVar1,param_3,param_5);
    func_0x00010c183200(puVar1,param_3,param_6);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    func_0x00010c0af3e0(dVar4,dVar5,*(undefined8 *)(param_2 + 0x10));
    func_0x00010be08180(param_2,param_3,param_4);
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + 0x28),param_3,param_4);
    _objc_release(puVar1);
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064b6d24; end: 1064b6e87; -[SCContextViewLogger contextDidUnloadWithSessionId:] */

void FUN_1064b6d24(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long unaff_x21;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 0x68);
  if (param_3 != (undefined1 *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x21 = *(long *)(param_1 + 0x20);
    _objc_retain(unaff_x21);
    param_4 = auStack_d8;
    param_5 = 0x10;
    lVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(unaff_x21);
          }
          func_0x00010c12d3e0(*(undefined8 *)(lStack_118 + lVar8 * 8),param_2,param_3);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        param_4 = auStack_d8;
        param_5 = 0x10;
        lVar1 = unaff_x21;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x21);
    puVar5 = (undefined1 *)puVar6;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x68);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x68);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126cafd0;
  _objc_alloc_init(PTR_PTR_1126cafd0);
  func_0x00010c1be360();
  func_0x00010c1df6e0(puVar3,param_2,param_4);
  func_0x00010c204680(puVar3,param_2,param_5);
  uVar4 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1064b6e88; end: 1064b6f9b; -[SCContextViewLogger logContextURLAttachmentTapWithURL:posterGuid:snapId:] */

void FUN_1064b6e88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cafd0;
  _objc_alloc_init(PTR_PTR_1126cafd0);
  func_0x00010c1be360();
  func_0x00010c1df6e0(puVar1,param_2,param_4);
  func_0x00010c204680(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b6f9c; end: 1064b7037; -[SCContextViewLogger contextDidInitializeActionBarPresenterWithSessionId:] */

void FUN_1064b6f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece220(param_1,param_2,uVar2,param_3,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b7038; end: 1064b70d3; -[SCContextViewLogger contextDidReceiveResponseWithSessionId:] */

void FUN_1064b7038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece220(param_1,param_2,uVar2,param_3,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b70d4; end: 1064b716f; -[SCContextViewLogger contextDidShowActionBarWithSessionId:] */

void FUN_1064b70d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece220(param_1,param_2,uVar2,param_3,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b7170; end: 1064b720b; -[SCContextViewLogger contextDidRegisterActionItemPluginsWithSessionId:] */

void FUN_1064b7170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece220(param_1,param_2,uVar2,param_3,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b720c; end: 1064b72a7; -[SCContextViewLogger contextDidRegisterRendererPluginsWithSessionId:] */

void FUN_1064b720c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bece220(param_1,param_2,uVar2,param_3,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b72a8; end: 1064b7367; -[SCContextViewLogger contextSpotlightAppearedWithViewLocation:storyType:] */

void FUN_1064b72a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_1064b7888(uVar3,puVar1,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064b7368; end: 1064b742b; -[SCContextViewLogger contextSpotlightPlaceholderDuration:viewLocation:storyType:] */

void FUN_1064b7368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_1064b7658(uVar3,puVar1,puVar2,param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064b742c; end: 1064b750f; -[SCContextViewLogger _trackTimeForCurrentStep:sessionId:timeToTrack:isExclusiveToTesting:] */

void FUN_1064b742c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  ulong param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_6 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x68);
    if (param_4 != 0) {
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        func_0x00010c1d0640(param_3,param_2,param_5,param_4);
      }
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b7510; end: 1064b7513; -[SCContextViewLogger _emitPerformanceMetricsForAbsoluteLoadTimeForSessionId:] */

void FUN_1064b7510(void)

{
  return;
}



/* Entry: 1064b7514; end: 1064b75c3; -[SCContextViewLogger .cxx_destruct] */

void FUN_1064b7514(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
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



/* Entry: 1064b75c4; end: 1064b75e3; -[SCContextViewLogger .cxx_construct] */

void FUN_1064b75c4(long param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 1064b75e4; end: 1064b7657; -[SCGrapheneContextSpotlightMetric2 init] */

undefined1 * FUN_1064b75e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f16b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1064b7658; end: 1064b7887;  */

char * FUN_1064b7658(long param_1,char *param_2,char *param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  lVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x02";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar12 = auStack_78;
    lVar10 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_1064b7888;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  lVar9 = lVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_1109251b0);
    if ((int)plVar11 != 0) {
      plVar11 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x24 = auStack_118;
      func_0x00010002b838(auStack_118,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_100,pcVar2);
      acStack_138[0] = '\0';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      acStack_138[8] = '\0';
      acStack_138[9] = '\0';
      acStack_138[10] = '\0';
      acStack_138[0xb] = '\0';
      acStack_138[0xc] = '\0';
      acStack_138[0xd] = '\0';
      acStack_138[0xe] = '\0';
      acStack_138[0xf] = '\0';
      acStack_138[0x10] = '\0';
      acStack_138[0x11] = '\0';
      acStack_138[0x12] = '\0';
      acStack_138[0x13] = '\0';
      acStack_138[0x14] = '\0';
      acStack_138[0x15] = '\0';
      acStack_138[0x16] = '\0';
      acStack_138[0x17] = '\0';
      func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
      lVar9 = lVar10 * 10;
      unaff_x23 = acStack_138;
      pcVar8 = acStack_138;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109251b0);
      pcStack_120 = unaff_x23;
      func_0x00010007e5dc(&pcStack_120);
      lVar10 = 0;
      pcVar3 = (char *)auStack_118;
      do {
        if ((&cStack_e9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  ppcVar5 = &pcStack_190;
  pcStack_148 = FUN_1064b7adc;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  pcStack_170 = pcVar3;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(lVar9);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_188 = PTR_PTR_1126f16b8;
  pcStack_190 = pcVar4;
  _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    _objc_retain(pcVar8);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
    *(char **)((long)ppcVar5 + 8) = pcVar8;
    _objc_release(uVar6);
    lVar10 = lVar9;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x10);
    *(long *)((long)ppcVar5 + 0x10) = lVar10;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x18);
    *(undefined8 *)((long)ppcVar5 + 0x18) = param_5;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x20);
    *(undefined8 *)((long)ppcVar5 + 0x20) = param_6;
    _objc_release(uVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar9);
  _objc_release(pcVar8);
  return (char *)ppcVar5;
}



/* Entry: 1064b7888; end: 1064b7adb;  */

char * FUN_1064b7888(undefined8 *param_1,char *param_2,char *param_3,long param_4,undefined8 param_5
                    ,undefined8 param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  lVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = (long *)param_1[1];
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1109251b0);
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,pcVar2);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar2);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
      lVar7 = param_4 * 10;
      unaff_x23 = acStack_98;
      pcVar2 = acStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109251b0);
      pcStack_80 = unaff_x23;
      func_0x00010007e5dc(&pcStack_80);
      lVar8 = 0;
      param_1 = auStack_78;
      do {
        if ((&cStack_49)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  ppcVar5 = &pcStack_f0;
  pcStack_a8 = FUN_1064b7adc;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = param_1;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(lVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_e8 = PTR_PTR_1126f16b8;
  pcStack_f0 = pcVar4;
  _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    _objc_retain(pcVar2);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
    *(char **)((long)ppcVar5 + 8) = pcVar2;
    _objc_release(uVar6);
    lVar8 = lVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x10);
    *(long *)((long)ppcVar5 + 0x10) = lVar8;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x18);
    *(undefined8 *)((long)ppcVar5 + 0x18) = param_5;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)ppcVar5 + 0x20);
    *(undefined8 *)((long)ppcVar5 + 0x20) = param_6;
    _objc_release(uVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar7);
  _objc_release(pcVar2);
  return (char *)ppcVar5;
}



/* Entry: 1064b7adc; end: 1064b7bdb; -[SCContextTappableElementsParams initWithTappableElements:sessionParams:operaPage:logger:] */

undefined1 *
FUN_1064b7adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f16b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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



/* Entry: 1064b7bdc; end: 1064b7be3; -[SCContextTappableElementsParams tappableElements] */

undefined8 FUN_1064b7bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064b7be4; end: 1064b7beb; -[SCContextTappableElementsParams sessionParams] */

undefined8 FUN_1064b7be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064b7bec; end: 1064b7bf3; -[SCContextTappableElementsParams operaPage] */

undefined8 FUN_1064b7bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064b7bf4; end: 1064b7bfb; -[SCContextTappableElementsParams logger] */

undefined8 FUN_1064b7bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1064b7bfc; end: 1064b7c43; -[SCContextTappableElementsParams .cxx_destruct] */

void FUN_1064b7bfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064b7c44; end: 1064b7d87; -[SCContextTappableElementsScope initWithDelegate:uiContainer:params:interopProvider:actionHandlerDelegate:actionHandler:] */

undefined1 *
FUN_1064b7c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f16c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064b7d88; end: 1064b7d9f; -[SCContextTappableElementsScope delegate] */

void FUN_1064b7d88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064b7da0; end: 1064b7db7; -[SCContextTappableElementsScope actionHandlerDelegate] */

void FUN_1064b7da0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064b7db8; end: 1064b7dbf; -[SCContextTappableElementsScope actionHandler] */

undefined8 FUN_1064b7db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064b7dc0; end: 1064b7dc7; -[SCContextTappableElementsScope uiContainer] */

undefined8 FUN_1064b7dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1064b7dc8; end: 1064b7dcf; -[SCContextTappableElementsScope params] */

undefined8 FUN_1064b7dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1064b7dd0; end: 1064b7dd7; -[SCContextTappableElementsScope interopProvider] */

undefined8 FUN_1064b7dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1064b7dd8; end: 1064b7e2f; -[SCContextTappableElementsScope .cxx_destruct] */

void FUN_1064b7dd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064b7e30; end: 1064b7fa7; -[SCComposerAvatarView initWithAttributionFeature:networkingContexts:imageDownloader:snapchattersSynchronousDataFetcher:nonFriendStoriesFetcher:allowStoryReplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1064b7e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f16c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112748d58;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748d5c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748d60;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112748d64;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cafd8;
    _objc_alloc();
    func_0x00010bff5080();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748d68);
    *(undefined **)((long)puVar1 + (long)_DAT_112748d68) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064b7fa8; end: 1064b7fff; -[SCComposerAvatarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b7fa8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f16c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112748d6c));
  return;
}



/* Entry: 1064b8000; end: 1064b802f; -[SCComposerAvatarView operaBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b8000(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748d6c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b8030; end: 1064b8033; -[SCComposerAvatarView updateThumbnail] */

void FUN_1064b8030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateUI_112596448);
  return;
}



/* Entry: 1064b8034; end: 1064b8043; -[SCComposerAvatarView isShowingUnviewedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064b8034(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748d70);
}



/* Entry: 1064b8044; end: 1064b8497; -[SCComposerAvatarView _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b8044(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar14 = (long)_DAT_112748d74;
  uVar3 = *(ulong *)(param_1 + lVar14);
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    uVar3 = *(ulong *)(param_1 + (long)_DAT_112748d78);
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      lVar14 = (long)_DAT_112748d6c;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar14));
      uVar11 = *(undefined8 *)(param_1 + lVar14);
      *(undefined8 *)(param_1 + lVar14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar11);
      return;
    }
  }
  lVar15 = (long)_DAT_112748d6c;
  if (*(long *)(param_1 + lVar15) == 0) {
    puVar4 = PTR_PTR_1126b1a08;
    _objc_alloc_init();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar4;
    _objc_release(uVar11);
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar15));
    func_0x00010befbb60(param_1);
    uVar3 = param_1;
    func_0x00010c1cbe20();
  }
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126cafe0);
  uVar5 = uVar3;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar6;
  func_0x00010c258d00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x000107d227d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (uVar13 == 0) {
    lVar12 = (long)_DAT_112748d5c;
    if (*(long *)(param_1 + lVar12) != 0) {
      lVar8 = *(long *)(param_1 + lVar14);
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        lVar8 = (long)_DAT_112748d7c;
        iVar2 = (int)*(undefined8 *)(param_1 + lVar8);
        func_0x00010c0720c0();
        if (iVar2 != 0) {
          uVar13 = *(ulong *)(param_1 + (long)_DAT_112748d80);
          if (uVar13 != 0) {
            _objc_retain(uVar13);
            bVar1 = true;
            goto LAB_1064b82f4;
          }
          goto LAB_1064b81b0;
        }
        uVar11 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010bf51e00();
        _objc_retain();
        uVar10 = *(undefined8 *)(param_1 + lVar8);
        *(undefined8 *)(param_1 + lVar8) = uVar11;
        _objc_release(uVar10);
        _objc_initWeak(auStack_68,param_1);
        uVar10 = *(undefined8 *)(param_1 + lVar12);
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(uVar11);
        func_0x00010bfaa960(uVar10);
        _objc_release(uVar11);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(uVar11);
      }
    }
    bVar1 = false;
    uVar13 = 0;
  }
  else {
LAB_1064b81b0:
    bVar1 = false;
  }
LAB_1064b82f4:
  uVar9 = *(ulong *)(param_1 + (long)_DAT_112748d60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (uVar7 == 0) {
    uVar7 = param_1;
    func_0x00010be63f40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = uVar7;
  func_0x00010bfb8280(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc80();
  _objc_release(uVar9);
  uVar9 = uVar3;
  func_0x00010bfddf20();
  puVar4 = PTR_PTR_1126cafe8;
  _objc_alloc(PTR_PTR_1126cafe8);
  func_0x00010c051d20();
  uVar11 = *(undefined8 *)(param_1 + (long)_DAT_112748d68);
  func_0x00010c29d840(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar15));
  _objc_release(uVar11);
  if ((uVar13 == 0) || (bVar1 || (int)uVar9 != 0)) {
    *(bool *)(param_1 + (long)_DAT_112748d70) = uVar13 != 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112748d64);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + (long)_DAT_112748d70) = (char)uVar11;
    _objc_release(uVar10);
  }
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  return;
}



/* Entry: 1064b8498; end: 1064b849f;  */

void FUN_1064b8498(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf27550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cachedSummaryInfoProvider_1125a76f8);
  return;
}



/* Entry: 1064b84a0; end: 1064b85d7;  */

void FUN_1064b84a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1064b8560;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_3);
  uStack_40 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064b85d8; end: 1064b86d7; -[SCComposerAvatarView _setBitmojiAvatarId:bitmojiSelfieId:userId:username:isBirthday:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1064b85d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748d84);
  *(undefined8 *)(param_1 + _DAT_112748d84) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748d88);
  *(undefined8 *)(param_1 + _DAT_112748d88) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748d74);
  *(undefined8 *)(param_1 + _DAT_112748d74) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748d78);
  *(undefined8 *)(param_1 + _DAT_112748d78) = param_6;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + _DAT_112748d8c) = param_7;
  func_0x00010bee2a80(param_1);
  return 1;
}



/* Entry: 1064b86d8; end: 1064b878f; -[SCComposerAvatarView _setOnAvatarTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064b86d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112748d90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112748d94;
  lVar4 = *(long *)(param_1 + lVar3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar2;
      _objc_release(uVar1);
      func_0x00010bef9040(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
      lVar4 = *(long *)(param_1 + lVar3);
    }
    uVar1 = 1;
  }
  func_0x00010c195460(lVar4,param_2,uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1064b8790; end: 1064b882b; +[SCComposerAvatarView bindAttributes:] */

void FUN_1064b8790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee97c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5c98,param_1,
                      &PTR___NSConcreteGlobalBlock_1109252d0,&PTR___NSConcreteGlobalBlock_110925310)
  ;
  _objc_release(param_1);
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e50e58,
                      &PTR___NSConcreteGlobalBlock_110925350,&PTR___NSConcreteGlobalBlock_110925390)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b882c; end: 1064b8a87;  */

undefined8 FUN_1064b882c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 == 5) {
    uVar4 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar6 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    func_0x00010bf1f3c0(uVar5);
    _objc_release(uVar5);
    uVar6 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar7 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar6 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    uVar9 = param_2;
    func_0x00010bea23e0(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar9 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar9;
}



/* Entry: 1064b8a88; end: 1064b8ab7;  */

void FUN_1064b8a88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea23f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__setBitmojiAvatarId_bitmojiSelfi_1125862a0,0,0,0,0,0);
  return;
}



/* Entry: 1064b8ab8; end: 1064b8b0b; +[SCComposerAvatarView _viewModelAttributeParts] */

void FUN_1064b8ab8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c38d0 != -1) {
    func_0x00010002a2fc(0x1136c38d0,&PTR___NSConcreteGlobalBlock_1109253b0);
  }
  uVar1 = uRam00000001136c38c8;
  _objc_retain(uRam00000001136c38c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b8b0c; end: 1064b8c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b8b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b4b08;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar2 = PTR_PTR_1126b4b08;
  puStack_70 = puVar1;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar3 = PTR_PTR_1126b4b08;
  puStack_68 = puVar2;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar4 = PTR_PTR_1126b4b08;
  puStack_60 = puVar3;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar5 = PTR_PTR_1126b4b08;
  puStack_58 = puVar4;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = puRam00000001136c38c8;
  puRam00000001136c38c8 = puVar6;
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1064b8ca0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_a0 = puVar4;
  puStack_98 = puVar3;
  puStack_90 = puVar2;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c0ea000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126caff0;
    _objc_alloc(PTR_PTR_1126caff0);
    puVar2 = puVar5;
    func_0x00010c0ea000(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e460(puVar1,param_2,puVar2,0);
    func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110e50e98);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5[_DAT_112748d70]);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110e50eb8);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(puVar5 + _DAT_112748d90);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar7,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  func_0x00010bff7be0();
  puVar2 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  func_0x00010c05c0e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064b8ca0; end: 1064b8e1b; -[SCComposerAvatarView _tappedAvatar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b8ca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0ea000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126caff0;
    _objc_alloc(PTR_PTR_1126caff0);
    lVar2 = param_1;
    func_0x00010c0ea000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e460(puVar3,param_2,lVar2,0);
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e50e98);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_112748d70));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e50eb8);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112748d90);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar4,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  func_0x00010bff7be0();
  puVar3 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  func_0x00010c05c0e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064b8e1c; end: 1064b8ee3; -[SCComposerAvatarView _nonFriendSnapchatterFromGivenInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b8e1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  func_0x00010bff7be0();
  puVar2 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  func_0x00010c05c0e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064b8ee4; end: 1064b8fe3; -[SCComposerAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b8ee4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748d6c,0);
  _objc_storeStrong(param_1 + _DAT_112748d94,0);
  _objc_storeStrong(param_1 + _DAT_112748d80,0);
  _objc_storeStrong(param_1 + _DAT_112748d7c,0);
  _objc_storeStrong(param_1 + _DAT_112748d90,0);
  _objc_storeStrong(param_1 + _DAT_112748d78,0);
  _objc_storeStrong(param_1 + _DAT_112748d74,0);
  _objc_storeStrong(param_1 + _DAT_112748d88,0);
  _objc_storeStrong(param_1 + _DAT_112748d84,0);
  _objc_storeStrong(param_1 + _DAT_112748d68,0);
  _objc_storeStrong(param_1 + _DAT_112748d64,0);
  _objc_storeStrong(param_1 + _DAT_112748d60,0);
  _objc_storeStrong(param_1 + _DAT_112748d5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748d58,0);
  return;
}



/* Entry: 1064b8fe4; end: 1064b8feb; -[SCComposerGroupAvatarViewProcesedViewModelAttributes groupId] */

undefined8 FUN_1064b8fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064b8fec; end: 1064b901b; -[SCComposerGroupAvatarViewProcesedViewModelAttributes setGroupId:] */

void FUN_1064b8fec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064b901c; end: 1064b9023; -[SCComposerGroupAvatarViewProcesedViewModelAttributes storyInfo] */

undefined8 FUN_1064b901c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064b9024; end: 1064b9053; -[SCComposerGroupAvatarViewProcesedViewModelAttributes setStoryInfo:] */

void FUN_1064b9024(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064b9054; end: 1064b905b; -[SCComposerGroupAvatarViewProcesedViewModelAttributes backgroundColor] */

undefined8 FUN_1064b9054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064b905c; end: 1064b908b; -[SCComposerGroupAvatarViewProcesedViewModelAttributes setBackgroundColor:] */

void FUN_1064b905c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064b908c; end: 1064b90c7; -[SCComposerGroupAvatarViewProcesedViewModelAttributes .cxx_destruct] */

void FUN_1064b908c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064b90c8; end: 1064b9273; -[SCComposerGroupAvatarView initWithGroupsDataFetcher:attributionFeature:networkingContexts:imageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1064b90c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f16d0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112748da4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cafd8;
    _objc_alloc();
    func_0x00010bff5080();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748da8);
    *(undefined **)((long)puVar1 + (long)_DAT_112748da8) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_6);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112748dac);
    *(undefined **)((long)puVar1 + (long)_DAT_112748dac) = puVar3;
    _objc_release(uVar2);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064b9274; end: 1064b92eb;  */

void FUN_1064b9274(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b1a08;
    _objc_opt_new(PTR_PTR_1126b1a08);
    func_0x00010c1aa200();
    func_0x00010c18b5e0(puVar1,param_2,param_1);
    func_0x00010c1d5da0(puVar1,param_2,3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064b92ec; end: 1064b938b; -[SCComposerGroupAvatarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b92ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f16d0;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112748dac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1064b938c; end: 1064b9543; -[SCComposerGroupAvatarView _setGroupId:storyInfo:backgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1064b938c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1064b9544;
  puStack_88 = &UNK_11086e108;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_80 = param_5;
  _objc_retain(param_4);
  ppuVar2 = &puStack_a0;
  uStack_78 = param_4;
  _objc_retainBlock();
  lVar3 = param_3;
  func_0x00010c08fa60();
  ppuVar4 = (undefined **)PTR___dispatch_main_q_11034be20;
  if (lVar3 == 0) {
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1064b96f0;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_a8 = ppuVar2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_c8);
    ppuVar4 = ppuStack_a8;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112748da4);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfc6120(uVar5);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1064b9544; end: 1064b96ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9544(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar6 = (long)_DAT_112748dac;
    uVar1 = *(ulong *)(param_1 + lVar6);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar2);
      func_0x00010c1cbe20(param_1);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar3);
    func_0x000108f22bfc();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar2 = uVar4;
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x000108ef2144(param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112748da8);
    func_0x00010c29d700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064b96f0; end: 1064b96ff;  */

void FUN_1064b96f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001064b96fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1064b9700; end: 1064b97fb; +[SCComposerGroupAvatarView bindAttributes:] */

void FUN_1064b9700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bee97c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5c98,param_1,
                      &PTR___NSConcreteGlobalBlock_110925420,&PTR___NSConcreteGlobalBlock_110925460)
  ;
  _objc_release(param_1);
  func_0x00010c126ea0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc5c98,
                      &PTR___NSConcreteGlobalBlock_110925480);
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e50fb8,
                      &PTR___NSConcreteGlobalBlock_1109254c0,&PTR___NSConcreteGlobalBlock_110925500)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e50fd8,
                      &PTR___NSConcreteGlobalBlock_110925520,&PTR___NSConcreteGlobalBlock_110925540)
  ;
  func_0x00010bf1a1a0(param_3,param_2,&PTR____CFConstantStringClassReference_110e50ff8,
                      &PTR___NSConcreteGlobalBlock_110925560,&PTR___NSConcreteGlobalBlock_110925580)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064b97fc; end: 1064b98ef;  */

undefined8 FUN_1064b97fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126caff8;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfceb20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c259da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf13d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar6 = param_2;
  func_0x00010bea43c0(param_2);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1064b98f0; end: 1064b9903;  */

void FUN_1064b98f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea43d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__setGroupId_storyInfo_background_112586a98,0,0,0);
  return;
}



/* Entry: 1064b9904; end: 1064b9baf;  */

void FUN_1064b9904(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar8);
  uVar1 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  puVar8 = (undefined *)0x0;
  if (uVar2 == 5) {
    puVar8 = PTR_PTR_1126caff8;
    _objc_opt_new(PTR_PTR_1126caff8);
    uVar9 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar3);
    uVar2 = uVar9;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar9);
    func_0x00010c1a4760(puVar8);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cafe8;
    _objc_alloc(PTR_PTR_1126cafe8);
    uVar9 = uVar1;
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    FUN_1064ba38c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar2 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    func_0x00010bf1f3c0(uVar2);
    _objc_release(uVar2);
    uVar5 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar2 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    func_0x00010bf1f3c0(uVar2);
    _objc_release(uVar2);
    func_0x00010c051d20(puVar3);
    func_0x00010c20d2a0(puVar8);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar9);
    uVar9 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar3);
    uVar2 = uVar9;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar9);
    if (uVar2 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x00010c067fc0(uVar9);
      func_0x00010b988f18();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c16e440(puVar8);
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1064b9bb0; end: 1064b9be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9bb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748db0);
  *(undefined8 *)(param_2 + _DAT_112748db0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b9be8; end: 1064b9bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9be8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748db0);
  *(undefined8 *)(param_2 + _DAT_112748db0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b9bfc; end: 1064b9c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9bfc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748db4);
  *(undefined8 *)(param_2 + _DAT_112748db4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b9c34; end: 1064b9c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9c34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748db4);
  *(undefined8 *)(param_2 + _DAT_112748db4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b9c48; end: 1064b9c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9c48(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748db8);
  *(undefined8 *)(param_2 + _DAT_112748db8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b9c80; end: 1064b9c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9c80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112748db8);
  *(undefined8 *)(param_2 + _DAT_112748db8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064b9c94; end: 1064b9ce7; +[SCComposerGroupAvatarView _viewModelAttributeParts] */

void FUN_1064b9c94(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c38e0 != -1) {
    func_0x00010002a2fc(0x1136c38e0,&PTR___NSConcreteGlobalBlock_1109255a0);
  }
  uVar1 = uRam00000001136c38d8;
  _objc_retain(uRam00000001136c38d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064b9ce8; end: 1064b9e77;  */

undefined * FUN_1064b9ce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b4b08;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar3 = PTR_PTR_1126b4b08;
  puStack_70 = puVar2;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar4 = PTR_PTR_1126b4b08;
  puStack_68 = puVar3;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar5 = PTR_PTR_1126b4b08;
  puStack_60 = puVar4;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar6 = PTR_PTR_1126b4b08;
  puStack_58 = puVar5;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c38d8;
  puRam00000001136c38d8 = puVar7;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1064b9e78; end: 1064b9e7f; -[SCComposerGroupAvatarView willEnqueueIntoComposerPool] */

undefined8 FUN_1064b9e78(void)

{
  return 0;
}



/* Entry: 1064b9e80; end: 1064b9f3f; -[SCComposerGroupAvatarView handleLongPressOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112748db8);
  puVar1 = PTR_PTR_1126cb000;
  func_0x00010bdd2c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(puVar1 + _DAT_112748db0);
  puVar1 = PTR_PTR_1126cb000;
  func_0x00010bdd2c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(puVar1 + _DAT_112748db4);
  puVar1 = PTR_PTR_1126cb000;
  func_0x00010bdd2c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f95a0(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(puVar3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064b9f40; end: 1064b9fff; -[SCComposerGroupAvatarView handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064b9f40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112748db0);
  puVar1 = PTR_PTR_1126cb000;
  func_0x00010bdd2c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(puVar1 + _DAT_112748db4);
  puVar1 = PTR_PTR_1126cb000;
  func_0x00010bdd2c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f95a0(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(puVar3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064ba000; end: 1064ba0bf; -[SCComposerGroupAvatarView handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ba000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112748db4);
  puVar1 = PTR_PTR_1126cb000;
  func_0x00010bdd2c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f95a0(uVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(puVar3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064ba0c0; end: 1064ba10f; +[SCComposerGroupAvatarView _baseViewRefFromAvatarView:] */

void FUN_1064ba0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064ba110; end: 1064ba18f; -[SCComposerGroupAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ba110(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748db8,0);
  _objc_storeStrong(param_1 + _DAT_112748db4,0);
  _objc_storeStrong(param_1 + _DAT_112748db0,0);
  _objc_storeStrong(param_1 + _DAT_112748dac,0);
  _objc_storeStrong(param_1 + _DAT_112748da8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748da4,0);
  return;
}



/* Entry: 1064ba190; end: 1064ba21f; -[SCComposerAvatarStoryInfo initWithThumbnail:isStoryMuted:hasUnviewedSnaps:] */

undefined1 *
FUN_1064ba190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f16d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ba220; end: 1064ba243; -[SCComposerAvatarStoryInfo copyWithZone:] */

undefined8 FUN_1064ba220(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1064ba244; end: 1064ba2b7; -[SCComposerAvatarStoryInfo hash] */

undefined8 * FUN_1064ba244(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1064ba34c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1064ba34c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1064ba34c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_1064ba34c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1064ba2b8; end: 1064ba367; -[SCComposerAvatarStoryInfo isEqual:] */

long FUN_1064ba2b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1064ba34c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_1064ba34c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1064ba34c;
    }
  }
  lVar3 = 1;
LAB_1064ba34c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1064ba368; end: 1064ba36f; -[SCComposerAvatarStoryInfo thumbnail] */

undefined8 FUN_1064ba368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


