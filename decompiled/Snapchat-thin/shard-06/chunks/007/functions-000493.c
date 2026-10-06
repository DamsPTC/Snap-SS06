/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d65eb4; end: 104d65eb7; -[SCMusicCameraEntryPoint captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_104d65eb4(void)

{
  return;
}



/* Entry: 104d65eb8; end: 104d65ebb; -[SCMusicCameraEntryPoint captureWorkflowWillDismissWithDidSendSnap:] */

void FUN_104d65eb8(void)

{
  return;
}



/* Entry: 104d65ebc; end: 104d65f0f; -[SCMusicCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65ebc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271215c,0);
  _objc_destroyWeak(param_1 + _DAT_112712164);
  _objc_destroyWeak(param_1 + _DAT_112712158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712160);
  return;
}



/* Entry: 104d65f10; end: 104d65f7f; -[SCReplyQuotingCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65f10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_112712170;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010c11a2a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010be7a780(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d65f80; end: 104d660f3; -[SCReplyQuotingCameraEntryPoint _presentCaptureWorkflowWithPublicCameraFeatureCatalog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d65f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11271216c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar1 = param_1 + _DAT_112712168;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_104d660f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_104d660f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf31600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010bf23740(lVar9,param_2,param_3,lVar2,lVar4,param_1,lVar6,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112712174);
  }
  func_0x00010bf9d620(uVar8,param_2,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 104d660f4; end: 104d66117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d660f4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112712168);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d66118; end: 104d661af; -[SCReplyQuotingCameraEntryPoint didDismissCaptureFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d66118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112712174);
  }
  func_0x00010c12e1c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_104d660f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2ac40();
  _objc_retainAutoreleasedReturnValue();
  FUN_104d660f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf834c0(lVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d661b0; end: 104d66237; -[SCReplyQuotingCameraEntryPoint captureWorkflowWillSetCameraViewConfiguration:] */

void FUN_104d661b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    FUN_104d660f4(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,uVar1,1,0);
    _objc_release(param_3);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d66238; end: 104d6628b; -[SCReplyQuotingCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d66238(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712174,0);
  _objc_destroyWeak(param_1 + _DAT_112712170);
  _objc_destroyWeak(param_1 + _DAT_11271216c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712168);
  return;
}



/* Entry: 104d6628c; end: 104d663ef; -[SCDirectorModeSnapEditorEventListener initWithPreviewScope:previewScopeServices:notificationPool:circumstanceEngine:] */

undefined1 *
FUN_104d6628c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e4180;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(ulong *)((long)puVar2 + 0x10) = uVar1;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_6;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar5;
    _objc_release(uVar3);
    func_0x00010bec8160(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104d663f0; end: 104d664c3; -[SCDirectorModeSnapEditorEventListener sendActionGuard] */

void FUN_104d663f0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d664c4;
  puStack_48 = &UNK_11084dd10;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  puVar2 = PTR_PTR_1126afee8;
  func_0x00010c113ca0(PTR_PTR_1126afee8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d664c4; end: 104d66563;  */

void FUN_104d664c4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  _objc_retain(param_4);
  uVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_104d66534;
  if (*(long *)(uVar1 + 0x18) == 0) {
LAB_104d66524:
    uVar3 = 1;
  }
  else {
    func_0x00010c276460(auStack_38);
    _CMTimeGetSeconds(auStack_38);
    if ((5.0 <= param_1) || (uVar2 = uVar1, func_0x00010bdca300(), (uVar2 & 1) != 0))
    goto LAB_104d66524;
    func_0x00010be7e600(uVar1);
    uVar3 = 0;
  }
  (**(code **)(param_4 + 0x10))(param_4,uVar3);
LAB_104d66534:
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104d66564; end: 104d66573; -[SCDirectorModeSnapEditorEventListener snapEditor:didTriggerLifecycle:] */

void FUN_104d66564(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bedfa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSendingDisabledState_112595848);
    return;
  }
  return;
}



/* Entry: 104d66574; end: 104d6661f; -[SCDirectorModeSnapEditorEventListener _subscribeToPreviewConfiguration] */

void FUN_104d66574(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa300(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d66620; end: 104d6665b;  */

void FUN_104d66620(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bec8720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6665c; end: 104d666af; -[SCDirectorModeSnapEditorEventListener _subscribeToTimelineConfiguration] */

void FUN_104d6665c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c12cf80(*(long *)(param_1 + 0x18),param_2,param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 104d666b0; end: 104d6672b; -[SCDirectorModeSnapEditorEventListener _updateSendingDisabledState] */

void FUN_104d666b0(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_2 + 0x18) != 0) {
    func_0x00010c276460(auStack_38);
    _CMTimeGetSeconds(auStack_38);
    if (5.0 <= param_1) {
      func_0x00010beddd00(param_2,param_3,0);
    }
    else {
      uVar1 = param_2;
      func_0x00010bdca300();
      func_0x00010beddd00(param_2,param_3,(uint)uVar1 ^ 1);
      if ((uVar1 & 1) == 0) {
        func_0x00010be7e600(param_2);
      }
    }
  }
  return;
}



/* Entry: 104d6672c; end: 104d667d3; -[SCDirectorModeSnapEditorEventListener _updatePreviewViewWithSendButtonIsInactive:] */

void FUN_104d6672c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08f640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c1fc000(uVar4,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104d667d4; end: 104d66937; -[SCDirectorModeSnapEditorEventListener _presentSendToDisabledToast] */

void FUN_104d667d4(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar4 = *(long *)(param_1 + 0x28);
  puVar2 = param_1;
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar3);
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d5a0(0x4008000000000000,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    puVar2 = auStack_48;
    _objc_destroyWeak(puVar2);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  FUN_104d66d6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 104d66938; end: 104d669d7;  */

void FUN_104d66938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afde0;
    func_0x00010bf57f80(PTR_PTR_1126afde0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d669d8; end: 104d66a13; -[SCDirectorModeSnapEditorEventListener _allowShortDurationVideo] */

ulong FUN_104d669d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x000108f48564();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x38);
  _objc_retain();
  uVar1 = uVar2;
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110f0a8f8,0,0);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = uVar2,
     func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110f0aad8,0,0),
     (uVar1 & 1) == 0)) {
    uVar1 = uVar2;
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110f0aa18,0,0);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 104d66a14; end: 104d66a17; -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didAddSegment:] */

void FUN_104d66a14(void)

{
  return;
}



/* Entry: 104d66a18; end: 104d66a1b; -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didAddSegments:] */

void FUN_104d66a18(void)

{
  return;
}



/* Entry: 104d66a1c; end: 104d66a1f; -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didDeleteSegment:atIndex:] */

void FUN_104d66a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedfa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSendingDisabledState_112595848);
  return;
}



/* Entry: 104d66a20; end: 104d66a23; -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:] */

void FUN_104d66a20(void)

{
  return;
}



/* Entry: 104d66a24; end: 104d66a27; -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidEnterReorderMode:] */

void FUN_104d66a24(void)

{
  return;
}



/* Entry: 104d66a28; end: 104d66a2b; -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidExitReorderMode:] */

void FUN_104d66a28(void)

{
  return;
}



/* Entry: 104d66a2c; end: 104d66a2f; -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidRestoreToInitialState:] */

void FUN_104d66a2c(void)

{
  return;
}



/* Entry: 104d66a30; end: 104d66a33; -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didUpdateSegmentTrim:atIndex:] */

void FUN_104d66a30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedfa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSendingDisabledState_112595848);
  return;
}



/* Entry: 104d66a34; end: 104d66a37; -[SCDirectorModeSnapEditorEventListener timelineConfigurationWillDeleteAllSegments:] */

void FUN_104d66a34(void)

{
  return;
}



/* Entry: 104d66a38; end: 104d66a3b; -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidDeleteAllSegments:] */

void FUN_104d66a38(void)

{
  return;
}



/* Entry: 104d66a3c; end: 104d66a3f; -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidUpdateThumbnails:] */

void FUN_104d66a3c(void)

{
  return;
}



/* Entry: 104d66a40; end: 104d66a43; -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didUpdateThumbnailsForSegment:] */

void FUN_104d66a40(void)

{
  return;
}



/* Entry: 104d66a44; end: 104d66aaf; -[SCDirectorModeSnapEditorEventListener .cxx_destruct] */

void FUN_104d66a44(long param_1)

{
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



/* Entry: 104d66ab0; end: 104d66beb; -[SCDirectorModeSnapEditorEventListenerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d66ab0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_112712194;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c24bba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_1127121a8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104d66bec; end: 104d66d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d66bec(long param_1,undefined8 param_2)

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
    puVar7 = PTR_PTR_1126afef0;
    _objc_alloc(PTR_PTR_1126afef0);
    lVar1 = param_1 + _DAT_112712198;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1 + _DAT_11271219c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + _DAT_1127121a0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_1127121a4;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039ba0(puVar7,param_2,lVar1,lVar2,lVar4,lVar6);
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



/* Entry: 104d66d04; end: 104d66d6b; -[SCDirectorModeSnapEditorEventListenerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d66d04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127121a4);
  _objc_destroyWeak(param_1 + _DAT_1127121a0);
  _objc_destroyWeak(param_1 + _DAT_112712194);
  _objc_destroyWeak(param_1 + _DAT_11271219c);
  _objc_destroyWeak(param_1 + _DAT_112712198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127121a8);
  return;
}



/* Entry: 104d66d6c; end: 104d66d83;  */

void FUN_104d66d6c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1618;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db1618,
                      &PTR____CFConstantStringClassReference_110db1638,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104d66d84; end: 104d66fdb; -[SCReplyQuotingCameraUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d66d84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  lVar6 = (long)_DAT_1127121ac;
  lVar1 = param_1 + lVar6;
  puStack_68 = &uStack_70;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d66fdc;
  puStack_80 = &UNK_11084dda0;
  puStack_78 = &uStack_70;
  func_0x00010c0bcaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127121e0);
  }
  _objc_retain(uVar5);
  lVar1 = param_1 + _DAT_1127121b0;
  _objc_loadWeakRetained(lVar1);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar2 = lVar1;
  func_0x00010bf225c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_initWeak(auStack_a0,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afef8;
  _objc_alloc(PTR_PTR_1126afef8);
  func_0x00010c02ae40();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_1127121b4));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Block_object_dispose(&uStack_70,8);
  return;
}



/* Entry: 104d66fdc; end: 104d6704b;  */

void FUN_104d66fdc(long param_1,undefined8 param_2)

{
  func_0x00010c0d6ca0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 104d6704c; end: 104d6734f; -[SCReplyQuotingCameraUIEntryPoint stateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6704c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126aff00;
  _objc_alloc();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127121b8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127121c0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010c0d6960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_1127121bc;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar14;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127121c4;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar15;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127121c8;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127121cc;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127121d0;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127121d8;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar19;
  func_0x00010c14c2a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127121dc;
    _objc_loadWeakRetained();
  }
  lVar11 = param_1;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dec0(puVar1,param_2,lVar2,lVar4,lVar5,0,lVar6,0,lVar7,lVar8,lVar9,0,0,0,0,0,lVar10,
                      lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d67350; end: 104d6741f; -[SCReplyQuotingCameraUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67350(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127121b4,0);
  _objc_storeStrong(param_1 + _DAT_1127121e0,0);
  _objc_destroyWeak(param_1 + _DAT_1127121dc);
  _objc_destroyWeak(param_1 + _DAT_1127121d8);
  _objc_destroyWeak(param_1 + _DAT_1127121d4);
  _objc_destroyWeak(param_1 + _DAT_1127121d0);
  _objc_destroyWeak(param_1 + _DAT_1127121cc);
  _objc_destroyWeak(param_1 + _DAT_1127121c8);
  _objc_destroyWeak(param_1 + _DAT_1127121c4);
  _objc_destroyWeak(param_1 + _DAT_1127121c0);
  _objc_destroyWeak(param_1 + _DAT_1127121bc);
  _objc_destroyWeak(param_1 + _DAT_1127121b0);
  _objc_destroyWeak(param_1 + _DAT_1127121b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127121ac);
  return;
}



/* Entry: 104d67420; end: 104d6744b; -[SCDirectorModePreviewButtonActionHandlingImpl onPreviewButtonTapped] */

void FUN_104d67420(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e5be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d6744c; end: 104d67457; -[SCDirectorModePreviewButtonActionHandlingImpl pushToValdiMarshaller:] */

undefined8 FUN_104d6744c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8780;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x0001061a1554();
  func_0x0001061a1508();
  return param_3;
}



/* Entry: 104d67458; end: 104d6746f; -[SCDirectorModePreviewButtonActionHandlingImpl delegate] */

void FUN_104d67458(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d67470; end: 104d6747b; -[SCDirectorModePreviewButtonActionHandlingImpl setDelegate:] */

void FUN_104d67470(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104d6747c; end: 104d67483; -[SCDirectorModePreviewButtonActionHandlingImpl .cxx_destruct] */

void FUN_104d6747c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d67484; end: 104d674af; -[SCDirectorModeUndoButtonActionHandlingImpl onUndoButtonTapped] */

void FUN_104d67484(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e74c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d674b0; end: 104d674bb; -[SCDirectorModeUndoButtonActionHandlingImpl pushToValdiMarshaller:] */

undefined8 FUN_104d674b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8788;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x0001061a1554();
  func_0x0001061a1508();
  return param_3;
}



/* Entry: 104d674bc; end: 104d674d3; -[SCDirectorModeUndoButtonActionHandlingImpl delegate] */

void FUN_104d674bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d674d4; end: 104d674df; -[SCDirectorModeUndoButtonActionHandlingImpl setDelegate:] */

void FUN_104d674d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104d674e0; end: 104d674e7; -[SCDirectorModeUndoButtonActionHandlingImpl .cxx_destruct] */

void FUN_104d674e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d674e8; end: 104d675ff; -[SCFeatureDirectorModeDraftsPickerImpl initWithDirectorModeFeature:featureUpdateEventSubject:memoriesDirectorModeDraftProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d674e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e4188;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127121f4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127121f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127121fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127121fc) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712200) = 0;
    lVar4 = (long)_DAT_112712204;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    func_0x00010bec7f00(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d67600; end: 104d676cb; -[SCFeatureDirectorModeDraftsPickerImpl _presentDirectorModeDraftsPickerWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_1127121ec) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_1127121ec) = 1;
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104d676cc;
    puStack_40 = &UNK_110848708;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_release(uStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d676cc; end: 104d677af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d676cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127121f4);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c10bee0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104d677b0; end: 104d677fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d677b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_1127121ec) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d677fc; end: 104d6792f; -[SCFeatureDirectorModeDraftsPickerImpl _subscribeToObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d677fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712204);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104d67930; end: 104d6798f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf7f320();
    *(undefined8 *)(param_1 + _DAT_112712200) = uVar1;
    func_0x00010bed72a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d67990; end: 104d679f3; -[SCFeatureDirectorModeDraftsPickerImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67990(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127121f4);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d679f4; end: 104d679fb; -[SCFeatureDirectorModeDraftsPickerImpl modeEnabledStateChangedObservable] */

undefined8 FUN_104d679f4(void)

{
  return 0;
}



/* Entry: 104d679fc; end: 104d679ff; -[SCFeatureDirectorModeDraftsPickerImpl disableMode] */

void FUN_104d679fc(void)

{
  return;
}



/* Entry: 104d67a00; end: 104d67a0b; -[SCFeatureDirectorModeDraftsPickerImpl incompatibleModes] */

undefined * FUN_104d67a00(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104d67a0c; end: 104d67a13; -[SCFeatureDirectorModeDraftsPickerImpl modeType] */

undefined8 FUN_104d67a0c(void)

{
  return 0x14;
}



/* Entry: 104d67a14; end: 104d67a67; -[SCFeatureDirectorModeDraftsPickerImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67a14(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar1 == param_3) {
    *(long *)(param_1 + _DAT_1127121f0) = *(long *)(param_1 + _DAT_1127121f0) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be7b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentDirectorModeDraftsPicker_11257c5b0,0);
    return;
  }
  return;
}



/* Entry: 104d67a68; end: 104d67a6b; -[SCFeatureDirectorModeDraftsPickerImpl secondaryOnTap:] */

void FUN_104d67a68(void)

{
  return;
}



/* Entry: 104d67a6c; end: 104d67a7b; -[SCFeatureDirectorModeDraftsPickerImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d67a6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127121ec);
}



/* Entry: 104d67a7c; end: 104d67a83; -[SCFeatureDirectorModeDraftsPickerImpl secondaryButtonState] */

undefined8 FUN_104d67a7c(void)

{
  return 0;
}



/* Entry: 104d67a84; end: 104d67a87; -[SCFeatureDirectorModeDraftsPickerImpl toolbarButtonPositionDidChange:] */

void FUN_104d67a84(void)

{
  return;
}



/* Entry: 104d67a88; end: 104d67ac7; -[SCFeatureDirectorModeDraftsPickerImpl isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d67a88(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010be346a0();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + (long)_DAT_112712200) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104d67ac8; end: 104d67acb; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfiguration:didAddSegment:] */

void FUN_104d67ac8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDraftsPickerItemVisibilit_112593650);
  return;
}



/* Entry: 104d67acc; end: 104d67acf; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfiguration:didAddSegments:] */

void FUN_104d67acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDraftsPickerItemVisibilit_112593650);
  return;
}



/* Entry: 104d67ad0; end: 104d67ad3; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfiguration:didDeleteSegment:atIndex:] */

void FUN_104d67ad0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDraftsPickerItemVisibilit_112593650);
  return;
}



/* Entry: 104d67ad4; end: 104d67ad7; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfiguration:didUpdateSegmentTrim:atIndex:] */

void FUN_104d67ad4(void)

{
  return;
}



/* Entry: 104d67ad8; end: 104d67adb; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfiguration:didUpdateThumbnailsForSegment:] */

void FUN_104d67ad8(void)

{
  return;
}



/* Entry: 104d67adc; end: 104d67adf; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfigurationDidDeleteAllSegments:] */

void FUN_104d67adc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDraftsPickerItemVisibilit_112593650);
  return;
}



/* Entry: 104d67ae0; end: 104d67ae3; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfigurationDidUpdateThumbnails:] */

void FUN_104d67ae0(void)

{
  return;
}



/* Entry: 104d67ae4; end: 104d67ae7; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfigurationWillDeleteAllSegments:] */

void FUN_104d67ae4(void)

{
  return;
}



/* Entry: 104d67ae8; end: 104d67aeb; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:] */

void FUN_104d67ae8(void)

{
  return;
}



/* Entry: 104d67aec; end: 104d67aef; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfigurationDidEnterReorderMode:] */

void FUN_104d67aec(void)

{
  return;
}



/* Entry: 104d67af0; end: 104d67af3; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfigurationDidExitReorderMode:] */

void FUN_104d67af0(void)

{
  return;
}



/* Entry: 104d67af4; end: 104d67af7; -[SCFeatureDirectorModeDraftsPickerImpl timelineConfigurationDidRestoreToInitialState:] */

void FUN_104d67af4(void)

{
  return;
}



/* Entry: 104d67af8; end: 104d67b07; -[SCFeatureDirectorModeDraftsPickerImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67af8(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127121f0) = 0;
  return;
}



/* Entry: 104d67b08; end: 104d67bbb; -[SCFeatureDirectorModeDraftsPickerImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127121f0));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + _DAT_1127121f8),PTR_s_next__112614028,puVar1);
  return;
}



/* Entry: 104d67bbc; end: 104d67bcf; -[SCFeatureDirectorModeDraftsPickerImpl _updateDraftsPickerItemVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127121f8),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 104d67bd0; end: 104d67c3b; -[SCFeatureDirectorModeDraftsPickerImpl _hasSegments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d67bd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_1127121f4);
  func_0x00010bfa1820(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1581e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 104d67c3c; end: 104d67c9b; -[SCFeatureDirectorModeDraftsPickerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d67c3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712204,0);
  _objc_storeStrong(param_1 + _DAT_1127121fc,0);
  _objc_storeStrong(param_1 + _DAT_1127121f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127121f4,0);
  return;
}



/* Entry: 104d67c9c; end: 104d68903; -[SCFeatureDirectorModeImpl initWithCameraConfiguration:userSession:captureComponent:multiSnap:lensCarouselManager:speedMode:timerMode:afterCaptureActionTracker:cameraSnapModelServices:valdiRuntimeProvider:cameraHardwareResource:cameraHardwareServicesAPI:cameraRequestHandler:cameraUserBlizzardLogger:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:snapVideoFilterFactory:previewAssetVideoProviderFactory:ngsmePlayerFactory:videoImportServices:memoriesTrackingImageProcessCommandScopeExposer:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraActivePathServices:snapRecoveryServices:thumbnailGenerationServices:contentDeliveryServices:cameraTooltipsService:cameraSnapCreationLogger:temporaryFileWriter:cameraUserActionLogger:memoriesExperimentService:ngsmeSnapDocResolver:snapDocManager:snapEditorTweakServices:memoriesDirectorModeDraftScopeExposer:snapPageSource:circumstanceEngine:directorModeMediaProvider:userPreferenceTimeProviderServices:userPreferences:spotlightPostingConfiguration:templateExplorerScopeExposer:templateServices:verticalToolbar:musicExperiments:tinsel:alwaysOnMediaPickerToggleContainerManager:memoriesPickerUtilServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d67c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
             undefined8 param_49,undefined8 param_50,undefined8 param_51)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
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
  _objc_retain(param_50);
  _objc_retain(param_51);
  puStack_70 = PTR_PTR_1126e4190;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11271220c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c270180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712210);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712210) = uVar2;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_112712214;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712218;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271221c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712220;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712224;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712228;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271222c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_10;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712230;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_11;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712234,param_12);
    lVar8 = (long)_DAT_112712238;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_13;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271223c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712240;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_15;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712244,param_16);
    lVar7 = (long)_DAT_112712248;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_17;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271224c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_18;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712250;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_38;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712254;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_19;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712258;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_20;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271225c;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_21;
    _objc_release(uVar2);
    uVar2 = param_22;
    func_0x00010bfe7f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712260);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712260) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_22;
    func_0x00010c29a4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712264);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712264) = uVar2;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_112712268;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_23;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271226c;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_25;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712270;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_24;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712274);
    *(undefined **)((long)puVar1 + (long)_DAT_112712274) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712278;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_26;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271227c;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_27;
    _objc_release(uVar2);
    uVar2 = param_28;
    func_0x00010c29b6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712280);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712280) = uVar2;
    _objc_release(uVar5);
    uVar2 = param_29;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712284,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712288,param_30);
    lVar7 = (long)_DAT_11271228c;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_32;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712290,param_31);
    lVar7 = (long)_DAT_112712294;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_33;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712298;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_34;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271229c;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_35;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122a0;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_36;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122a4;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_37;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aff08;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127122a8) = 0xffffffffffffffff;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70d80();
    func_0x00010c073f00();
    *(char *)((long)puVar1 + (long)_DAT_1127122ac) = (char)puVar3;
    _objc_release(uVar2);
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127122b0) = param_39;
    lVar7 = (long)_DAT_1127122b4;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_40;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122b8;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_41;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122bc;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_42;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127122c0,param_43);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127122c4,param_44);
    lVar7 = (long)_DAT_1127122c8;
    _objc_retain(param_45);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_45;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122cc;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_46;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127122d0) = 0;
    lVar7 = (long)_DAT_1127122d4;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_47;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122d8;
    _objc_retain(param_48);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127122dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127122dc) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127122e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127122e0) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127122e4) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127122e8) = 0;
    puVar3 = PTR_PTR_1126aff10;
    func_0x00010bfea420();
    *(char *)((long)puVar1 + (long)_DAT_1127122ec) = (char)puVar3;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127122f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127122f0) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bec7f20(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar6);
    func_0x00010bea3760(puVar1);
    puVar3 = PTR_PTR_1126aff18;
    _objc_alloc();
    func_0x00010be440e0();
    func_0x00010bebef00(puVar1);
    func_0x00010c01f7a0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127122f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127122f4) = puVar3;
    _objc_release(uVar2);
    func_0x00010be37c60(puVar1);
    lVar7 = (long)_DAT_1127122f8;
    _objc_retain(param_49);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_49;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_1127122fc;
    _objc_retain(param_50);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_50;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712300;
    _objc_retain(param_51);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_51;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712304);
    *(undefined **)((long)puVar1 + (long)_DAT_112712304) = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 104d68904; end: 104d68bc7; -[SCFeatureDirectorModeImpl _subscribeToMediaObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d68904(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127122e0);
  *(undefined **)(param_1 + _DAT_1127122e0) = puVar1;
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_initWeak(auStack_78,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712308);
  func_0x00010c158520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104d68bc8;
  puStack_88 = &UNK_11084de30;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar7 = uVar3;
  func_0x00010c0b8600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  func_0x00010befa140(puVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271230c);
  func_0x00010c158520(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x104d68c30;
  puStack_b0 = &UNK_11084de30;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar7 = uVar5;
  func_0x00010c0b8600(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar5);
  func_0x00010befa140(puVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_78);
  puVar6 = puVar1;
  func_0x00010c25ff60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  return;
}



/* Entry: 104d68bc8; end: 104d68c97;  */

void FUN_104d68bc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar1 = param_2;
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d68c98; end: 104d68ce3;  */

void FUN_104d68c98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf04920(param_2,param_2,&PTR___NSConcreteGlobalBlock_11084dea0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 104d68ce4; end: 104d68d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d68ce4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127122dc));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d68d3c; end: 104d68e27; -[SCFeatureDirectorModeImpl _importMediaIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d68d3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_1127122b8);
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x104d68de0;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104d68e28; end: 104d6956b; -[SCFeatureDirectorModeImpl _assetsMovedToCameraDirectory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d68e28(long param_1,undefined8 param_2,long param_3)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_280;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lStack_280 = param_3;
  func_0x00010bf52a60();
  if (lStack_280 != 0) {
    lVar11 = *plStack_140;
    do {
      lVar12 = 0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(undefined8 *)(lStack_148 + lVar12 * 8);
        puStack_168 = &uStack_170;
        uStack_170 = 0;
        uStack_160 = 0x2020000000;
        uStack_158 = 0;
        puStack_188 = &uStack_190;
        uStack_190 = 0;
        uStack_180 = 0x2020000000;
        uStack_178 = 0;
        puStack_1b8 = &uStack_1c0;
        uStack_1c0 = 0;
        uStack_1b0 = 0x3032000000;
        pcStack_1a8 = FUN_104d6956c;
        uStack_1a0 = 0x104d6957c;
        uStack_198 = 0;
        puStack_1e8 = &uStack_1f0;
        uStack_1f0 = 0;
        uStack_1e0 = 0x3032000000;
        pcStack_1d8 = FUN_104d6956c;
        uStack_1d0 = 0x104d6957c;
        uStack_1c8 = 0;
        uVar3 = uVar13;
        func_0x00010c0c5900(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bcda0();
        _objc_release(uVar3);
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        if (*(char *)(puStack_168 + 3) == '\x01') {
          func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = *(long *)(param_1 + _DAT_112712300);
          func_0x00010bfea620();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar2;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010c29a7c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar2);
          uVar3 = puStack_1b8[5];
          func_0x00010c0f5800(uVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          func_0x00010c0f5800(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d1560(puVar4);
          _objc_retain(0);
          _objc_release(lVar5);
          _objc_release(uVar3);
          puVar8 = PTR_PTR_1126aff28;
          func_0x00010c129800(PTR_PTR_1126aff28);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar7;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          if (lVar5 == 0) {
            func_0x00010011df08();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(lVar5);
          }
          _objc_release(lVar5);
          puVar10 = PTR_PTR_1126aff30;
          puVar9 = PTR__OBJC_CLASS___AVAsset_1126aff38;
          func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29be40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = PTR_PTR_1126aff40;
          _objc_alloc(PTR_PTR_1126aff40);
          func_0x00010c27c940(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01d3c0(puVar9);
          _objc_release(uVar13);
          func_0x00010befa120(puVar1);
LAB_104d693f0:
          _objc_release(puVar9);
          _objc_release(puVar10);
          _objc_release(lVar6);
          _objc_release(puVar8);
          _objc_release(0);
          _objc_release(lVar7);
          _objc_release(puVar4);
        }
        else {
          if (*(char *)(puStack_188 + 3) == '\x01') {
            func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = *(long *)(param_1 + _DAT_112712300);
            func_0x00010bfea620();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010011df08();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar5;
            func_0x00010c29a7c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar2);
            uVar3 = puStack_1b8[5];
            func_0x00010c0f5800(uVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar7;
            func_0x00010c0f5800(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d1560(puVar4);
            _objc_retain(0);
            _objc_release(lVar5);
            _objc_release(uVar3);
            puVar8 = PTR_PTR_1126aff28;
            func_0x00010c24b6e0(PTR_PTR_1126aff28);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar7;
            func_0x00010beec820();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            if (lVar5 == 0) {
              func_0x00010011df08();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              _objc_retain(lVar5);
            }
            _objc_release(lVar5);
            puVar10 = PTR_PTR_1126aff30;
            puVar9 = PTR__OBJC_CLASS___AVAsset_1126aff38;
            func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29be40(puVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            puVar9 = PTR_PTR_1126aff40;
            _objc_alloc(PTR_PTR_1126aff40);
            func_0x00010c27c940(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01d3c0(puVar9);
            _objc_release(uVar13);
            func_0x00010befa120(puVar1);
            goto LAB_104d693f0;
          }
          func_0x00010befa120(puVar1);
        }
        __Block_object_dispose(&uStack_1f0,8);
        _objc_release(uStack_1c8);
        __Block_object_dispose(&uStack_1c0,8);
        _objc_release(uStack_198);
        __Block_object_dispose(&uStack_190,8);
        __Block_object_dispose(&uStack_170,8);
        lVar12 = lVar12 + 1;
      } while (lStack_280 != lVar12);
      lStack_280 = param_3;
      func_0x00010bf52a60();
    } while (lStack_280 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1f0,8);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_190,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 104d6956c; end: 104d69587;  */

void FUN_104d6956c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d69588; end: 104d69647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69588(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_3;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127122b8);
  func_0x00010c22ef80();
  if (iVar1 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127122d0) = 1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d69648; end: 104d69727;  */

void FUN_104d69648(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 104d69728; end: 104d6977f; -[SCFeatureDirectorModeImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69728(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bea3760(param_1,param_2,0);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112712310));
  puStack_28 = PTR_PTR_1126e4190;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104d69780; end: 104d697bf; -[SCFeatureDirectorModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d69780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712314);
  *(undefined8 *)(param_1 + _DAT_112712314) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViews_112589ee0);
  return;
}



/* Entry: 104d697c0; end: 104d6985b; -[SCFeatureDirectorModeImpl _viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d697c0(long param_1)

{
  undefined *puVar1;
  
  func_0x00010beba1a0();
  func_0x00010be955e0(param_1);
  func_0x00010beb9ce0(param_1);
  func_0x00010be7d8c0(param_1);
  puVar1 = PTR_PTR_1126aff10;
  func_0x00010bfea420();
  if (((int)puVar1 != 0) && (*(char *)(param_1 + _DAT_1127122e4) == '\x01')) {
    *(undefined1 *)(param_1 + _DAT_1127122e4) = 0;
    func_0x00010c1762e0(0,*(undefined8 *)(param_1 + _DAT_112712314));
                    /* WARNING: Could not recover jumptable at 0x00010be7d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreview_11257cf60);
    return;
  }
  return;
}



/* Entry: 104d6985c; end: 104d69a0b; -[SCFeatureDirectorModeImpl _viewWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d6985c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112712230);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07bf40();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    lVar5 = param_1 + _DAT_1127122c0;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf1f3c0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)lVar8 != 0) {
      *(undefined1 *)(param_1 + _DAT_112712318) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be7d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPreview_11257cf60);
      return;
    }
  }
  puVar9 = PTR_PTR_1126aff10;
  func_0x00010bfea420();
  if (((int)puVar9 != 0) &&
     (((*(byte *)(param_1 + _DAT_1127122e4) & 1) != 0 ||
      (*(char *)(param_1 + _DAT_1127122ec) == '\x01')))) {
    func_0x00010beb99e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1762f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_1 + _DAT_112712314),
               PTR_s_setCameraButtonHidden_backButton_11263b2d8,1,1,0);
    return;
  }
  return;
}


