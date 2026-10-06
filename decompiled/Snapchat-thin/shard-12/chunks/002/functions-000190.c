/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f4e314; end: 108f4e39b; -[SCOperaDictionaryBackedPageProperties criticalModeContext] */

void FUN_108f4e314(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b2368;
  func_0x00010c086240(PTR_PTR_1126b2368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4e39c; end: 108f4e3c3; -[SCOperaDictionaryBackedPageProperties dictRepresentation] */

void FUN_108f4e39c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4e3c4; end: 108f4e3cf; -[SCOperaDictionaryBackedPageProperties .cxx_destruct] */

void FUN_108f4e3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f4e3d0; end: 108f4e453; -[SCOperaPage _id] */

void FUN_108f4e3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2368;
  func_0x00010c086280(PTR_PTR_1126b2368);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f4e454; end: 108f4e4bb; -[SCOperaPage loadingState] */

undefined8 FUN_108f4e454(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e4bc; end: 108f4e523; -[SCOperaPage autoAdvanceEnabled] */

undefined8 FUN_108f4e4bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e524; end: 108f4e58b; -[SCOperaPage autoAdvanceTimeSec] */

double FUN_108f4e524(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (double)param_1;
}



/* Entry: 108f4e58c; end: 108f4e5f3; -[SCOperaPage skipDisabled] */

undefined8 FUN_108f4e58c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e5f4; end: 108f4e65b; -[SCOperaPage enableSwipeRightWhenSkipDisabled] */

undefined8 FUN_108f4e5f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e65c; end: 108f4e6c3; -[SCOperaPage longPressEnabled] */

undefined8 FUN_108f4e65c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e6c4; end: 108f4e72b; -[SCOperaPage disablePauseOnAudioInterrupt] */

undefined8 FUN_108f4e6c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e72c; end: 108f4e793; -[SCOperaPage pageLevelZoomEnabled] */

undefined8 FUN_108f4e72c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e794; end: 108f4e7fb; -[SCOperaPage loopToFirstPageEnabled] */

undefined8 FUN_108f4e794(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e7fc; end: 108f4e863; -[SCOperaPage advanceToNextGroupEnabled] */

undefined8 FUN_108f4e7fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e864; end: 108f4e8cb; -[SCOperaPage preloadDistance] */

undefined8 FUN_108f4e864(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4e8cc; end: 108f4e94f; -[SCOperaPage accessibilityLabel] */

void FUN_108f4e8cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2368;
  func_0x00010c086260(PTR_PTR_1126b2368);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f4e950; end: 108f4e9d3; -[SCOperaPage criticalModeContext] */

void FUN_108f4e950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2368;
  func_0x00010c086240(PTR_PTR_1126b2368);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f4e9d4; end: 108f4ea3b; -[SCOperaPage pauseWhileOpeningAttachment] */

undefined8 FUN_108f4e9d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4ea3c; end: 108f4ea8b; -[SCOperaPage imageProvider] */

void FUN_108f4ea3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4ea8c; end: 108f4eadb; -[SCOperaPage videoAssetProvider] */

void FUN_108f4ea8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4eadc; end: 108f4eb2b; -[SCOperaPage assetRepository] */

void FUN_108f4eadc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4eb2c; end: 108f4ebab; -[SCOperaPage prefersStatusBarHidden] */

void FUN_108f4eb2c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4ebac; end: 108f4ec2b; -[SCOperaPage preferredStatusBarStyle] */

void FUN_108f4ebac(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4ec2c; end: 108f4ec93; -[SCOperaPage isAd] */

undefined8 FUN_108f4ec2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4ec94; end: 108f4ecfb; -[SCOperaPage zoomingByDefaultEnabled] */

undefined8 FUN_108f4ec94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4ecfc; end: 108f4ed63; -[SCOperaPage operaBuiltInMediaResolverEnabled] */

undefined8 FUN_108f4ecfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4ed64; end: 108f4ede3; -[SCOperaPage mediaBundle] */

void FUN_108f4ed64(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b2ca0;
  _objc_opt_class(PTR_PTR_1126b2ca0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4ede4; end: 108f4ee63; -[SCOperaPage responsiveLayoutRules] */

void FUN_108f4ede4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126dca18;
  _objc_opt_class(PTR_PTR_1126dca18);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4ee64; end: 108f4eecb; -[SCOperaPage swipeToAttachmentGestureDisabled] */

undefined8 FUN_108f4ee64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4eecc; end: 108f4ef4b; -[SCOperaPage transitionConfig] */

void FUN_108f4eecc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c9be0;
  _objc_opt_class(PTR_PTR_1126c9be0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4ef4c; end: 108f4efcb; -[SCOperaPage tapToAdvanceDelaySec] */

void FUN_108f4ef4c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4efcc; end: 108f4f04b; -[SCOperaPage s2rDefaultProjectName] */

void FUN_108f4efcc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4f04c; end: 108f4f0cb; -[SCOperaPage s2rDefaultSubProjectName] */

void FUN_108f4f04c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4f0cc; end: 108f4f15f; -[SCOperaPage pageabilityOverwriteOption] */

ulong FUN_108f4f0cc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c282760(uVar1);
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 108f4f160; end: 108f4f1c7; -[SCOperaPage skipPITNTracking] */

undefined8 FUN_108f4f160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4f1c8; end: 108f4f22f; -[SCOperaPage skipPerformanceTracking] */

undefined8 FUN_108f4f1c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f4f230; end: 108f4f2a3; -[SCOperaPagePropertiesBuilder build] */

void FUN_108f4f230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9e18;
  _objc_alloc(PTR_PTR_1126c9e18);
  func_0x00010c1531a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf51e00();
  func_0x00010c00c560(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f4f2a4; end: 108f4f377; +[SCOperaPage pageWithPageProperties:] */

void FUN_108f4f2a4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c9e18;
  _objc_opt_class(PTR_PTR_1126c9e18);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126c9e40;
  _objc_opt_new(PTR_PTR_1126c9e40);
  uVar3 = uVar1;
  func_0x00010bf71e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010c2b6360(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f4f378; end: 108f4f3cb; +[SCOperaPage pageWithPropertiesBuilder:] */

void FUN_108f4f378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf21f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f23e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f4f3cc; end: 108f4f4bb; -[SCOperaPage pageByAddingPagePropertyObject:forKey:] */

void FUN_108f4f3cc(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  func_0x00010c0d3c80(puVar1);
  _objc_release(param_1);
  if (param_4 != 0) {
    func_0x00010c1d0640(puVar1,param_2,param_3,param_4);
  }
  puVar2 = PTR_PTR_1126c9e40;
  _objc_opt_new(PTR_PTR_1126c9e40);
  puVar3 = puVar2;
  func_0x00010c2b6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f4f4bc; end: 108f4f58b; -[SCOperaPage pageByRemovingPagePropertyForKey:] */

void FUN_108f4f4bc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  func_0x00010c0d3c80(puVar1);
  _objc_release(param_1);
  if (param_3 != 0) {
    func_0x00010c12d3e0(puVar1,param_2,param_3);
  }
  puVar2 = PTR_PTR_1126c9e40;
  _objc_opt_new(PTR_PTR_1126c9e40);
  puVar3 = puVar2;
  func_0x00010c2b6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f4f58c; end: 108f4f673; -[SCOperaPage pageByMergingPage:] */

void FUN_108f4f58c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  func_0x00010c0d3c80(puVar1);
  _objc_release(param_1);
  uVar2 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef7f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c9e40;
  _objc_opt_new(PTR_PTR_1126c9e40);
  puVar4 = puVar3;
  func_0x00010c2b6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f4f674; end: 108f4f73f; -[SCOperaPage pageByAddingPagePropertiesFromDictionary:] */

void FUN_108f4f674(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  func_0x00010c0d3c80(puVar1);
  _objc_release(param_1);
  func_0x00010bef7f60(puVar1,param_2,param_3);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c9e40;
  _objc_opt_new(PTR_PTR_1126c9e40);
  puVar3 = puVar2;
  func_0x00010c2b6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f4f740; end: 108f4fbd7;  */

void FUN_108f4f740(undefined *param_1,undefined8 param_2)

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
  undefined *puStack_80;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    goto LAB_108f4fba4;
  }
  puVar13 = PTR_PTR_1126d7130;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010c263f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c11dc00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c0ec880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51e00();
  _objc_retain(param_1);
  puVar6 = param_1;
  func_0x00010bfd6680();
  if ((int)puVar6 == 0) {
    puStack_80 = (undefined *)0x0;
  }
  else {
    puVar6 = param_1;
    func_0x00010bf87100();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c27dd80();
    if ((int)puVar7 == 1) {
      puVar8 = puVar6;
      func_0x00010bfb2180();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c104460();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar14 = puVar9;
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(puVar7,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar9;
      func_0x00010bf529e0();
      if (puVar14 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar15 = puVar9;
          func_0x00010c296de0(puVar9,param_2,puVar14);
          func_0x00010c0df760(puVar10,param_2,puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar7,param_2,puVar10);
          _objc_release(puVar10);
          puVar14 = puVar14 + 1;
          puVar10 = puVar9;
          func_0x00010bf529e0();
        } while (puVar14 < puVar10);
      }
      puVar14 = puVar7;
      func_0x00010bf51e00(puVar7);
      _objc_release(puVar7);
      _objc_release(puVar9);
      _objc_release(puVar8);
      puStack_80 = PTR_PTR_1126dca20;
      func_0x00010bfb2280(PTR_PTR_1126dca20,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
LAB_108f4f98c:
      _objc_release(puVar14);
    }
    else {
      puVar7 = puVar6;
      func_0x00010c27dd80();
      puStack_80 = PTR_PTR_1126dca20;
      puVar14 = puVar6;
      if ((int)puVar7 == 2) {
        func_0x00010bfb1860(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar14;
        func_0x00010bf529e0();
        func_0x00010bfb1880(puStack_80,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108f4f98c;
      }
      puVar7 = puVar6;
      func_0x00010c27dd80();
      puStack_80 = PTR_PTR_1126dca20;
      if ((int)puVar7 == 3) {
        func_0x00010c11f0e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11fdc0();
        func_0x00010c11f1c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108f4f98c;
      }
      puStack_80 = (undefined *)0x0;
    }
    _objc_release(puVar6);
  }
  _objc_release(param_1);
  puVar14 = param_1;
  func_0x00010bf9c4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = param_1;
  func_0x00010c067340(param_1);
  func_0x00010c0df760(puVar6,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c263f80();
  puVar9 = param_1;
  func_0x00010c0ec320();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf51e00();
  func_0x00010c07bb20();
  _objc_retain(param_1);
  puVar15 = param_1;
  func_0x00010c07bb20();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar11 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar15 != 0) {
    puVar15 = param_1;
    func_0x00010c0ec520(param_1);
    func_0x00010bf0a0e0(puVar7,param_2,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c0ec520();
    if (puVar15 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        puVar11 = param_1;
        func_0x00010c0ec500();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c296de0();
        _objc_release(puVar11);
        uVar1 = 2;
        if ((int)puVar12 != 2) {
          uVar1 = 0;
        }
        if ((int)puVar12 == 1) {
          uVar1 = 1;
        }
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7,param_2,puVar11);
        _objc_release(puVar11);
        puVar15 = puVar15 + 1;
        puVar11 = param_1;
        func_0x00010c0ec520();
      } while (puVar15 < puVar11);
    }
    puVar11 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
  }
  _objc_release(param_1);
  func_0x00010c04fa20(puVar13,param_2,puVar2,puVar3,puVar5,puStack_80,puVar14,puVar6,(int)puVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(puStack_80);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_108f4fba4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108f4fbd8; end: 108f4fe1b;  */

undefined *
FUN_108f4fbd8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar8 = param_1;
  func_0x00010c0d4640();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = param_1;
    func_0x00010c0d4620();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar11;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x00010c0d4620();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar11 == (undefined *)0x0) {
      dVar12 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar12 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar8);
          }
          lVar9 = *(long *)((long)puVar10 * 8);
          if (lVar9 != 0) {
            lVar2 = lVar9;
            func_0x00010bf1f9c0();
            if ((int)lVar2 == 2) {
              func_0x00010c270ac0(lVar9);
              dVar13 = (double)lVar9;
            }
            else if ((int)lVar2 == 1) {
              lVar2 = lVar9;
              func_0x00010c270ac0(lVar9);
              dVar12 = (double)lVar2;
              func_0x00010c1178c0(lVar9);
              dVar14 = (double)lVar9;
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar11 != puVar10);
        puVar11 = puVar8;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126dca28;
    _objc_alloc();
    uVar3 = param_2;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar7;
    func_0x00010c04da60(dVar12,dVar14,dVar13);
    _objc_release(uVar3);
    _objc_release(puVar7);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_4);
  puVar8 = param_1;
  func_0x00010c259580();
  puVar11 = PTR_PTR_1126c6980;
  puStack_1e8 = param_1;
  puStack_200 = param_1;
  if ((long)puVar8 < 0x80) {
    if (puVar8 < (undefined *)0x21) {
      if ((1L << ((ulong)puVar8 & 0x3f) & 0x100010004U) == 0) {
        if ((1L << ((ulong)puVar8 & 0x3f) & 0x30U) != 0) {
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126c6980;
          _objc_alloc();
          puVar8 = param_1;
          func_0x00010c259cc0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_1;
          func_0x00010c0d1120(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          func_0x00010c005fa0();
          _objc_release(puVar7);
          _objc_release(puVar8);
          puStack_1f0 = (undefined *)0x0;
          puStack_200 = (undefined *)0x0;
          goto LAB_108f5035c;
        }
        if (puVar8 == (undefined *)0x1) goto LAB_108f50108;
        goto LAB_108f50198;
      }
      _objc_alloc();
      puVar8 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c0d1120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c005fa0();
      _objc_release(puVar7);
      _objc_release(puVar8);
      puStack_1e8 = puVar11;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010c259580();
      if (puVar8 != (undefined *)0x10) {
        func_0x00010c259580();
      }
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_108f50198:
      if (puVar8 != (undefined *)0x0) goto LAB_108f5027c;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_200 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
    }
LAB_108f5029c:
    puStack_1f0 = (undefined *)0x0;
  }
  else {
    if ((long)puVar8 < 0x200) {
      if (puVar8 != (undefined *)0x80) {
        if (puVar8 != (undefined *)0x100) goto LAB_108f5027c;
        goto LAB_108f502a4;
      }
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126c6980;
      _objc_alloc();
      puVar8 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c0d1120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c005fa0();
      _objc_release(puVar7);
      _objc_release(puVar8);
    }
    else {
      if (puVar8 == (undefined *)0x200) {
LAB_108f50108:
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126c6980;
        _objc_alloc();
        puVar8 = param_1;
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010c0d1120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c005fa0();
        _objc_release(puVar7);
        _objc_release(puVar8);
        puStack_200 = (undefined *)0x0;
        goto LAB_108f5029c;
      }
      if (puVar8 == (undefined *)0x400) {
        _objc_alloc();
        puVar8 = param_1;
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010c0d1120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c005fa0();
        _objc_release(puVar7);
        _objc_release(puVar8);
        puStack_1e8 = puVar11;
        func_0x000108f51f98();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_1f0 = (undefined *)0x0;
        goto LAB_108f5035c;
      }
LAB_108f5027c:
      puVar8 = param_1;
      func_0x00010c259580();
      if (((uint)puVar8 >> 8 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        puStack_1e8 = (undefined *)0x0;
        puStack_200 = (undefined *)0x0;
        goto LAB_108f5029c;
      }
LAB_108f502a4:
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126c6980;
      _objc_alloc();
      puVar8 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c0d1120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c005fa0();
      _objc_release(puVar7);
      _objc_release(puVar8);
    }
    puStack_200 = (undefined *)0x0;
  }
LAB_108f5035c:
  puVar8 = param_1;
  func_0x00010c259d00();
  puVar7 = (undefined *)0x0;
  if ((puVar8 != (undefined *)0x0) && (puVar11 != (undefined *)0x0)) {
    puVar7 = PTR_PTR_1126dca10;
    _objc_alloc();
    func_0x00010c259d00(param_1);
    puVar8 = param_1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000c40();
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126d50c0;
  _objc_alloc();
  func_0x00010bfddf20();
  func_0x00010c2768e0();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c2444e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puStack_200);
  _objc_release(puStack_1f0);
  _objc_release(puStack_1e8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 108f4fe1c; end: 108f50587;  */

void FUN_108f4fe1c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  undefined *puStack_a0;
  undefined *puStack_98;
  
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010c259580();
  puVar6 = PTR_PTR_1126c6980;
  puStack_98 = param_1;
  puStack_b0 = param_1;
  if ((long)puVar1 < 0x80) {
    if (puVar1 < (undefined *)0x21) {
      if ((1L << ((ulong)puVar1 & 0x3f) & 0x100010004U) == 0) {
        if ((1L << ((ulong)puVar1 & 0x3f) & 0x30U) != 0) {
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126c6980;
          _objc_alloc();
          puVar1 = param_1;
          func_0x00010c259cc0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_1;
          func_0x00010c0d1120(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          func_0x00010c005fa0();
          _objc_release(puVar5);
          _objc_release(puVar1);
          puStack_a0 = (undefined *)0x0;
          puStack_b0 = (undefined *)0x0;
          goto LAB_108f5035c;
        }
        if (puVar1 == (undefined *)0x1) goto LAB_108f50108;
        goto LAB_108f50198;
      }
      _objc_alloc();
      puVar1 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c0d1120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c005fa0();
      _objc_release(puVar5);
      _objc_release(puVar1);
      puStack_98 = puVar6;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010c259580();
      if (puVar1 != (undefined *)0x10) {
        func_0x00010c259580();
      }
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_108f50198:
      if (puVar1 != (undefined *)0x0) goto LAB_108f5027c;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
    }
LAB_108f5029c:
    puStack_a0 = (undefined *)0x0;
  }
  else {
    if ((long)puVar1 < 0x200) {
      if (puVar1 != (undefined *)0x80) {
        if (puVar1 != (undefined *)0x100) goto LAB_108f5027c;
        goto LAB_108f502a4;
      }
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c6980;
      _objc_alloc();
      puVar1 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c0d1120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c005fa0();
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    else {
      if (puVar1 == (undefined *)0x200) {
LAB_108f50108:
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c6980;
        _objc_alloc();
        puVar1 = param_1;
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010c0d1120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c005fa0();
        _objc_release(puVar5);
        _objc_release(puVar1);
        puStack_b0 = (undefined *)0x0;
        goto LAB_108f5029c;
      }
      if (puVar1 == (undefined *)0x400) {
        _objc_alloc();
        puVar1 = param_1;
        func_0x00010c259cc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010c0d1120(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c005fa0();
        _objc_release(puVar5);
        _objc_release(puVar1);
        puStack_98 = puVar6;
        func_0x000108f51f98();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = (undefined *)0x0;
        goto LAB_108f5035c;
      }
LAB_108f5027c:
      puVar1 = param_1;
      func_0x00010c259580();
      if (((uint)puVar1 >> 8 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        puStack_b0 = (undefined *)0x0;
        goto LAB_108f5029c;
      }
LAB_108f502a4:
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c6980;
      _objc_alloc();
      puVar1 = param_1;
      func_0x00010c259cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x00010c0d1120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c005fa0();
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    puStack_b0 = (undefined *)0x0;
  }
LAB_108f5035c:
  puVar1 = param_1;
  func_0x00010c259d00();
  puVar5 = (undefined *)0x0;
  if ((puVar1 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
    puVar5 = PTR_PTR_1126dca10;
    _objc_alloc();
    func_0x00010c259d00(param_1);
    puVar1 = param_1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000c40();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126d50c0;
  _objc_alloc();
  func_0x00010bfddf20();
  func_0x00010c2768e0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c2444e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puStack_b0);
  _objc_release(puStack_a0);
  _objc_release(puStack_98);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f50588; end: 108f507f7;  */

void FUN_108f50588(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bfecde0();
  lVar5 = param_3;
  if (lVar1 == 0x7fffffffffffffff) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = param_2;
    FUN_108f4fe1c(param_2,lVar1,0xffffffffffffffff,param_5,0xffffffffffffffff,param_8,
                  &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0c90);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_108f507f8;
    uStack_80 = 0x108f50808;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    uVar4 = param_2;
    puStack_78 = puVar3;
    func_0x00010c07fde0();
    if ((uVar4 & 1) == 0) {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_108f50810;
      puStack_d8 = &UNK_110ace808;
      puStack_d0 = &uStack_c0;
      puStack_c8 = &uStack_a0;
      func_0x000107c31910(param_3,&puStack_f0);
      _objc_release(param_3);
    }
    puVar3 = PTR_PTR_1126c2380;
    _objc_alloc(PTR_PTR_1126c2380);
    func_0x00010c0070a0(param_1);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_c0,8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f507f8; end: 108f5080f;  */

void FUN_108f507f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f50810; end: 108f50913;  */

uint FUN_108f50810(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c07fde0();
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(puVar1);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  return param_2 ^ 1;
}



/* Entry: 108f50914; end: 108f5098b;  */

void FUN_108f50914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dca30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010b7dcf58(param_3);
  func_0x00010c2a4a60(param_3);
  _objc_release(param_3);
  func_0x00010c041a80(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f5098c; end: 108f50a8f;  */

void FUN_108f5098c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126dca38;
  puVar7 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    lVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c11b1e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c25e5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c25e5e0(param_2);
    lVar6 = param_2;
    func_0x00010bf08ca0(param_2);
    func_0x00010c270aa0(param_2);
    _objc_release(param_2);
    func_0x00010c010740(param_1,puVar1,param_3,lVar2,lVar3,lVar4,lVar5,lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108f50a90; end: 108f50b63;  */

void FUN_108f50a90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c275240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0x24) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      func_0x00010c057ea0();
    }
    _objc_release(puVar2);
  }
  else if (lVar1 == 0x10) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    lVar1 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x00010bf25f00();
    func_0x00010c057e80(puVar3,param_2,lVar1);
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



/* Entry: 108f50b64; end: 108f50c0f;  */

void FUN_108f50b64(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126d7358;
  puVar6 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar2);
    lVar3 = param_1;
    func_0x00010c27dd80();
    uVar1 = (int)lVar3 - 1;
    lVar3 = 0;
    if (uVar1 < 6) {
      lVar3 = (ulong)uVar1 + 1;
    }
    lVar4 = param_1;
    func_0x00010bfb9180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bfb7f40(param_1);
    _objc_release(param_1);
    func_0x00010c055b60(puVar2,param_2,lVar3,lVar4,(long)(int)lVar5);
    _objc_release(lVar4);
    puVar6 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f50c10; end: 108f50ec3;  */

void FUN_108f50c10(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if ((param_2 == 0) || (lVar3 = param_2, func_0x00010c087960(), lVar3 == 0)) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010c087960(param_2);
    func_0x00010bffc4a0();
    param_1 = 0.0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = param_2;
    func_0x00010c087940();
    _objc_retainAutoreleasedReturnValue();
    param_4 = &uStack_130;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar15 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar15) {
            _objc_enumerationMutation(lVar3);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar5 = uVar11;
          func_0x00010c087860();
          uVar6 = uVar11;
          func_0x00010c087860();
          if ((int)uVar6 == 2) {
            puVar13 = PTR_PTR_1126dca48;
            _objc_alloc();
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c024240();
            _objc_release(uVar6);
            puVar12 = (undefined *)0x0;
LAB_108f50da4:
            _objc_release(uVar11);
          }
          else {
            if ((int)uVar6 == 1) {
              puVar12 = PTR_PTR_1126dca40;
              _objc_alloc();
              func_0x00010c0d2940();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0d2fa0();
              func_0x00010c02cde0();
              puVar13 = (undefined *)0x0;
              goto LAB_108f50da4;
            }
            puVar12 = (undefined *)0x0;
            puVar13 = (undefined *)0x0;
          }
          if ((puVar12 != (undefined *)0x0 || puVar13 != (undefined *)0x0) && ((int)uVar5 != 0)) {
            puVar7 = PTR_PTR_1126dca50;
            _objc_alloc();
            func_0x00010c055da0();
            func_0x00010befa120(puVar14);
            _objc_release(puVar7);
          }
          _objc_release(puVar13);
          _objc_release(puVar12);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        param_4 = &uStack_130;
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    puVar8 = puVar14;
    func_0x00010bf529e0();
    if (puVar8 == (undefined8 *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR_PTR_1126dca58;
      _objc_alloc();
      param_4 = puVar14;
      func_0x00010c0215c0();
    }
    _objc_release(puVar14);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(param_4);
    if (param_2 == 0 && param_3 == (undefined8 *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar13);
      FUN_108f511a8(param_2,0);
      bVar1 = true;
      FUN_108f511a8(param_2,1);
      FUN_108f511a8(param_2,2);
      FUN_108f511a8(param_2,3);
      FUN_108f511a8(param_2,4);
      FUN_108f511a8(param_2,5);
      if (param_3 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        puVar14 = param_3;
        func_0x00010c275280();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_3;
        func_0x00010c275720();
        iVar2 = (int)puVar8;
        bVar1 = iVar2 != 1 && (iVar2 != 3 && iVar2 != 2);
      }
      puVar8 = param_3;
      FUN_108f50a90();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar12 = (undefined *)0x0;
      if ((param_3 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
        func_0x00010c275220(param_3);
        func_0x00010c0df820();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar13;
      }
      if (param_2 != 0) {
        lVar3 = param_2;
        func_0x00010c24b7a0();
        if (0 < lVar3) {
          func_0x00010c24b7a0();
        }
        lVar3 = param_2;
        func_0x00010c24b580();
        if (0 < lVar3) {
          func_0x00010c24b580();
        }
        lVar3 = param_2;
        func_0x00010c24ba40();
        if (0 < lVar3) {
          func_0x00010c24ba40();
        }
      }
      puVar9 = param_4;
      func_0x00010c08fa60();
      if ((puVar9 != (undefined8 *)0x0) && (puVar8 == (undefined8 *)0x0)) {
        puVar9 = puVar14;
        func_0x00010c08fa60();
        bVar1 = (bool)(bVar1 ^ 1);
        if (puVar9 != (undefined8 *)0x0) {
          bVar1 = true;
        }
        if (!bVar1) {
          _objc_retain(param_4);
          _objc_release(puVar14);
          puVar14 = param_4;
        }
      }
      puVar13 = PTR_PTR_1126ca6f8;
      _objc_alloc(PTR_PTR_1126ca6f8);
      func_0x00010c052aa0(param_1 * 1000.0);
      _objc_release(puVar12);
      _objc_release(puVar8);
      _objc_release(puVar14);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108f50ec4; end: 108f511a7;  */

void FUN_108f50ec4(double param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == 0 && param_3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar6);
    FUN_108f511a8(param_2,0);
    bVar1 = true;
    FUN_108f511a8(param_2,1);
    FUN_108f511a8(param_2,2);
    FUN_108f511a8(param_2,3);
    FUN_108f511a8(param_2,4);
    FUN_108f511a8(param_2,5);
    if (param_3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_3;
      func_0x00010c275280();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c275720();
      iVar2 = (int)lVar3;
      bVar1 = iVar2 != 1 && (iVar2 != 3 && iVar2 != 2);
    }
    lVar3 = param_3;
    FUN_108f50a90();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = (undefined *)0x0;
    if ((param_3 != 0) && (lVar3 != 0)) {
      func_0x00010c275220(param_3);
      func_0x00010c0df820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
    }
    if (param_2 != 0) {
      lVar4 = param_2;
      func_0x00010c24b7a0();
      if (0 < lVar4) {
        func_0x00010c24b7a0();
      }
      lVar4 = param_2;
      func_0x00010c24b580();
      if (0 < lVar4) {
        func_0x00010c24b580();
      }
      lVar4 = param_2;
      func_0x00010c24ba40();
      if (0 < lVar4) {
        func_0x00010c24ba40();
      }
    }
    lVar4 = param_4;
    func_0x00010c08fa60();
    if ((lVar4 != 0) && (lVar3 == 0)) {
      lVar4 = lVar7;
      func_0x00010c08fa60();
      bVar1 = (bool)(bVar1 ^ 1);
      if (lVar4 != 0) {
        bVar1 = true;
      }
      if (!bVar1) {
        _objc_retain(param_4);
        _objc_release(lVar7);
        lVar7 = param_4;
      }
    }
    puVar6 = PTR_PTR_1126ca6f8;
    _objc_alloc(PTR_PTR_1126ca6f8);
    func_0x00010c052aa0(param_1 * 1000.0);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f511a8; end: 108f5123b;  */

long FUN_108f511a8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = param_1;
    if (param_2 < 3) {
      if (param_2 == 0) {
        func_0x00010bf1f680();
      }
      else if (param_2 == 1) {
        func_0x00010c22a980();
      }
      else {
        func_0x00010c29c5c0();
      }
    }
    else if (param_2 == 3) {
      func_0x00010c25e440(param_1);
    }
    else if (param_2 == 4) {
      func_0x00010c129760();
    }
    else {
      func_0x00010c123100();
    }
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108f5123c; end: 108f515cf;  */

void FUN_108f5123c(long param_1,long param_2,long param_3,long param_4,long param_5)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126d6260;
  if ((((param_1 != 0) || (param_2 != 0)) || (param_3 != 0)) ||
     ((param_4 != 0 || (puVar12 = (undefined *)0x0, param_5 != 0)))) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_alloc();
    _objc_retain(param_3);
    if (param_3 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar11 = param_3;
      func_0x00010bfd9d20();
      if ((int)lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar2 = param_3;
        func_0x00010c0ed760(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar2;
        FUN_108f52130();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      puVar12 = PTR_PTR_1126d6258;
      _objc_alloc();
      lVar2 = param_3;
      func_0x00010c0ed780(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0ed7a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032520();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar11);
    }
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_retain(param_5);
    if ((param_5 == 0) || (lVar11 = param_5, func_0x00010bfdb1a0(), (int)lVar11 == 0)) {
      puVar13 = (undefined *)0x0;
    }
    else {
      lVar11 = param_5;
      func_0x00010c131980();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010bfda000();
      if ((int)lVar2 == 0) {
        uStack_68 = 0;
      }
      else {
        lVar2 = lVar11;
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = lVar2;
        FUN_108f579f0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      puVar13 = PTR_PTR_1126dca60;
      _objc_alloc();
      lVar2 = lVar11;
      func_0x00010c132180();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar11;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_108f579f0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c131f40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      FUN_108f579f0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar11;
      func_0x00010c131f00(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar11;
      func_0x00010c131f20(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c131fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03e6a0(puVar13);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uStack_68);
      _objc_release(lVar11);
    }
    _objc_release(param_5);
    _objc_release(param_5);
    func_0x00010bffaee0(puVar1);
    _objc_release(param_4);
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(puVar13);
    _objc_release(puVar12);
    puVar12 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108f515d0; end: 108f51697;  */

void FUN_108f515d0(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    if (param_2 == 0) {
      _objc_retain(param_1);
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_108f51698;
      puStack_40 = &UNK_110856a28;
      _objc_retain(param_2);
      lStack_38 = param_2;
      func_0x000107c31910(param_1,&puStack_58);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f51698; end: 108f516b7;  */

uint FUN_108f51698(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  return (uint)param_2 ^ 1;
}



/* Entry: 108f516b8; end: 108f5178b;  */

void FUN_108f516b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d66f0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c09a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bf663e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c31914();
  func_0x00010c0096c0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f5178c; end: 108f51793;  */

void FUN_108f5178c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_key_1125ff368);
  return;
}



/* Entry: 108f51794; end: 108f51953;  */

void FUN_108f51794(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c2970a0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = (undefined *)0x0;
  iVar1 = (int)puVar2;
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      func_0x00010c067ec0(param_2);
      func_0x00010c0df760(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 3) goto LAB_108f51884;
      func_0x00010bfb2c80(param_2);
      func_0x00010c0df740(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 == 5) {
        puVar4 = param_2;
        func_0x00010c25d700(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_108f51884;
    }
    func_0x00010bf885a0(param_2);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_108f51884:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f51954; end: 108f51ae3;  */

void FUN_108f51954(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf8dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = param_2, func_0x00010c27e0a0(), (int)lVar2 != 2)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bfb2c00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb2e20();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar5 = (undefined *)0x0;
    if (lVar3 != 0) {
      lVar2 = param_2;
      func_0x00010bfb2c00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2e20();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bfb2c00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb2e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      func_0x00010bf980c0(lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar5 = PTR_PTR_1126dca68;
      _objc_alloc(PTR_PTR_1126dca68);
      func_0x00010c00f500();
      _objc_release(puVar4);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f51ae4; end: 108f51b27;  */

void FUN_108f51ae4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f51b28; end: 108f51c9b;  */

void FUN_108f51b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000108f543fc(param_2);
  _objc_release(param_2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    if (lRam0000000113730338 != -1) {
      func_0x000107c27d9c(0x113730338,&PTR___NSConcreteGlobalBlock_110ace948);
    }
    puVar5 = puRam0000000113730330;
    _objc_retain(puRam0000000113730330);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f51c9c; end: 108f51cef;  */

void FUN_108f51c9c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730338 != -1) {
    func_0x000107c27d9c(0x113730338,&PTR___NSConcreteGlobalBlock_110ace948);
  }
  uVar1 = uRam0000000113730330;
  _objc_retain(uRam0000000113730330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f51cf0; end: 108f51d3f;  */

void FUN_108f51cf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0cc0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730330;
  puRam0000000113730330 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f51d40; end: 108f51e33;  */

void FUN_108f51d40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110e610f8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 3) {
    puVar6 = PTR_PTR_1126c6980;
    _objc_alloc(PTR_PTR_1126c6980);
    lVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067ec0();
    lVar3 = param_1;
    func_0x00010c0dfd40(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0dfd40(param_1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b4ca0();
    func_0x00010c005fa0(puVar6,param_2,(long)(int)lVar2,lVar3,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f51e34; end: 108f51ecf;  */

void FUN_108f51e34(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108f51d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f51e78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f51ed0; end: 108f5201b;  */

void FUN_108f51ed0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f5201c; end: 108f5204f;  */

void FUN_108f5201c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  return;
}



/* Entry: 108f52050; end: 108f520eb;  */

void FUN_108f52050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1080;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010bf52680(param_1);
  func_0x00010c1843a0(puVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  func_0x00010c220e20(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f520ec; end: 108f5212f;  */

void FUN_108f520ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108f51d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108f52050();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f52130; end: 108f521b3;  */

void FUN_108f52130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe5ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf52680(param_1);
  uVar3 = param_1;
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  uVar4 = uVar1;
  FUN_108f51ed0(uVar1,(long)(int)uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f521b4; end: 108f5224f;  */

void FUN_108f521b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c6980;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf52680(param_1);
  uVar3 = param_1;
  func_0x00010bfe5ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  func_0x00010c005fa0(puVar1,param_2,(long)(int)uVar2,uVar3,uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f52250; end: 108f5226f;  */

undefined8 FUN_108f52250(ulong param_1)

{
  if (param_1 < 8) {
    return *(undefined8 *)(&UNK_10dfb0c10 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 108f52270; end: 108f5239f;  */

void FUN_108f52270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2140;
  func_0x00010bf82100(PTR_PTR_1126c2140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b1b20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f523a0; end: 108f5250f;  */

void FUN_108f523a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_108f524e8;
  }
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_108f52430:
    puVar5 = PTR_PTR_1126dca78;
    lVar2 = param_1;
    func_0x00010c26df60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0c54a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fb00(puVar5,param_2,lVar1,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126dca70;
    func_0x00010c26e0e0(PTR_PTR_1126dca70,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    lVar2 = param_1;
    func_0x00010c26df60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar3 = param_1;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) goto LAB_108f52430;
    }
    puVar6 = PTR_PTR_1126dca70;
    func_0x00010c26e420(PTR_PTR_1126dca70,param_2,lVar1,7);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108f524e8:
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f52510; end: 108f5269f;  */

void FUN_108f52510(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d97b0;
  _objc_retain();
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c26e3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c26df60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0c54a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c26d980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c26d940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c26d920();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c052060(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f526a0; end: 108f52797;  */

void FUN_108f526a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108f52798;
  uStack_30 = 0x108f527a8;
  uStack_28 = 0;
  func_0x00010c0c0ca0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f52798; end: 108f527af;  */

void FUN_108f52798(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f527b0; end: 108f5280f;  */

void FUN_108f527b0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108f52810;
  puStack_20 = &UNK_110842b88;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c1160(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110ace988);
  return;
}



/* Entry: 108f52810; end: 108f52913;  */

void FUN_108f52810(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar4 = param_4, func_0x00010c08fa60(), lVar4 == 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar2;
  }
  else {
    puVar1 = puVar2;
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar1;
  }
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f52914; end: 108f52917;  */

void FUN_108f52914(void)

{
  return;
}



/* Entry: 108f52918; end: 108f52a83;  */

void FUN_108f52918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f52a84; end: 108f52acb;  */

void FUN_108f52a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f52acc; end: 108f52c4f;  */

undefined8 FUN_108f52acc(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf31ee0();
  iVar1 = (int)uVar2;
  if (iVar1 < 6) {
    if (iVar1 == 2) {
      uVar7 = 1;
      goto LAB_108f52c30;
    }
    if (iVar1 == 3) {
      _objc_retain(param_1);
      uVar2 = param_1;
      func_0x00010bf31ee0();
      if ((int)uVar2 == 3) {
        uVar2 = param_1;
        func_0x00010c11b540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfde4e0();
        if ((uVar3 & 1) != 0) {
          uVar3 = param_1;
          func_0x00010c11b540();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c29ba40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c29ba60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(param_1);
          uVar7 = 2;
          if (uVar6 != 0) {
            uVar7 = 0xb;
          }
          goto LAB_108f52c30;
        }
        _objc_release(uVar2);
      }
      _objc_release(param_1);
      uVar7 = 2;
      goto LAB_108f52c30;
    }
    if (iVar1 == 4) {
      uVar7 = 3;
      goto LAB_108f52c30;
    }
  }
  else if (iVar1 < 0x26) {
    if (iVar1 == 6) {
      uVar7 = 5;
      goto LAB_108f52c30;
    }
    if (iVar1 == 0x24) {
      uVar7 = 0xf;
      goto LAB_108f52c30;
    }
  }
  else {
    if (iVar1 == 0x26) {
      uVar7 = 0xd;
      goto LAB_108f52c30;
    }
    if (iVar1 == 0x30) {
      uVar7 = 0xe;
      goto LAB_108f52c30;
    }
  }
  uVar7 = 0;
LAB_108f52c30:
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 108f52c50; end: 108f53b17;  */

void FUN_108f52c50(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined *puStack_1b8;
  undefined *puStack_138;
  undefined *puStack_100;
  undefined *puStack_c8;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf429c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010beee8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  else {
    puVar6 = param_1;
    func_0x00010c085340();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010beee8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfea9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c08fa60();
  if (puVar6 == (undefined *)0x0) {
    _objc_retain(puVar3);
    puVar6 = puVar3;
  }
  else {
    puVar7 = param_1;
    func_0x00010c085340();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bfea9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c29e1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
    _objc_retain(puVar3);
    puVar7 = puVar3;
  }
  else {
    puVar20 = param_1;
    func_0x00010c085340();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar20;
    func_0x00010c29e1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_108f521b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfa4340();
  puVar2 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9cd00();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126dca10;
  _objc_alloc();
  func_0x00010c259740();
  puVar20 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2693c0();
  FUN_108f52acc();
  uVar8 = param_2;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bfe48a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar21;
  func_0x00010c297620();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c08fa60();
  if (puVar11 == (undefined *)0x0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puStack_1b8 = param_1;
    func_0x00010c085340();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puStack_1b8;
    func_0x00010c297620();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = puVar5;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar6;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120();
  puVar15 = param_1;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d780();
  puVar16 = param_1;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9cd20();
  puVar17 = param_1;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0803a0();
  puVar18 = param_1;
  func_0x00010c085340();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c26ecc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f600();
  func_0x00010c125a80();
  func_0x00010c000c40();
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  if (puVar11 != (undefined *)0x0) {
    _objc_release(puStack_138);
    _objc_release(puStack_1b8);
  }
  _objc_release(puVar10);
  _objc_release(puVar21);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar20);
  puVar20 = param_1;
  func_0x00010bfd8280();
  if ((int)puVar20 == 0) {
    puStack_c8 = (undefined *)0x0;
  }
  else {
    puVar20 = param_1;
    func_0x00010c085340();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar20;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
  }
  puVar20 = puStack_c8;
  func_0x00010c08fa60();
  if (puVar20 == (undefined *)0x0) {
    _objc_retain(param_1);
    puVar21 = param_1;
    func_0x00010bf31ee0();
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    iVar1 = (int)puVar21;
    puVar21 = param_1;
    if (iVar1 == 3) {
      func_0x00010c11b540();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar21;
      func_0x00010c11af80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
LAB_108f53300:
      _objc_release(puVar10);
      _objc_release(puVar21);
    }
    else {
      if (iVar1 == 0x30) {
        func_0x00010c14bb60();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar21;
        func_0x00010c14bc20();
        _objc_retainAutoreleasedReturnValue();
LAB_108f532a4:
        puVar20 = puVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108f53300;
      }
      if (iVar1 == 4) {
        func_0x00010c11ab00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar21;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108f532a4;
      }
      puVar20 = (undefined *)0x0;
    }
    _objc_release(param_1);
    _objc_release(puStack_c8);
    puStack_c8 = puVar20;
  }
  _objc_retain(param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  puVar20 = param_1;
  func_0x00010bf31ee0();
  puVar21 = param_1;
  if ((int)puVar20 == 0x26) {
    func_0x00010c23cdc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar21;
    func_0x00010c2456a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
  }
  else {
    puVar20 = param_1;
    func_0x00010bf31ee0();
    if ((int)puVar20 != 3) goto LAB_108f53460;
    func_0x00010c11b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar21;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar20;
    func_0x00010c2456a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(puVar10);
  }
  _objc_release(puVar20);
  _objc_release(puVar21);
LAB_108f53460:
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_1);
  puVar20 = param_1;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c27ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar21;
  func_0x00010c275280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar20);
  puVar20 = param_1;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bfd5720();
  if ((int)puVar21 == 0) {
    puStack_100 = (undefined *)0x0;
  }
  else {
    puVar21 = param_1;
    func_0x00010c23cdc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar21;
    func_0x00010bf41f80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0ed760();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar12;
    FUN_108f52130();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar21);
  }
  _objc_release(puVar20);
  puVar20 = param_1;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010bfd4fe0();
  if ((int)puVar21 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar11 = param_1;
    func_0x00010c23cdc0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar11;
    func_0x00010bf28980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
  }
  _objc_release(puVar20);
  puVar20 = puVar21;
  func_0x00010c27dd80();
  if ((int)puVar20 != 1) {
    func_0x00010c27dd80();
  }
  puVar20 = puVar21;
  func_0x00010c27dd80();
  if ((int)puVar20 == 4) {
    puVar11 = puVar21;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar11;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
  }
  else {
    puVar20 = (undefined *)0x0;
  }
  puVar12 = PTR_PTR_1126d50c0;
  _objc_alloc();
  puVar13 = puVar4;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar14 = param_1;
  func_0x00010bf31ee0();
  puVar11 = PTR_PTR_1126dca80;
  iVar1 = (int)puVar14;
  if (iVar1 < 6) {
    if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 == 4)) {
      puVar11 = param_1;
      func_0x00010c11ab00();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar11;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078f60();
      _objc_release(puVar14);
      _objc_release(puVar11);
    }
  }
  else if (iVar1 < 0x26) {
    if ((iVar1 != 6) && (iVar1 == 0x24)) {
      _objc_retain(param_1);
      _objc_opt_class(puVar11);
      puVar14 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar11);
      puVar11 = param_1;
      if (((ulong)puVar14 & 1) == 0) {
        puVar11 = (undefined *)0x0;
      }
      _objc_retain(puVar11);
      _objc_release(param_1);
      puVar14 = puVar11;
      func_0x00010bfd6120();
      if ((int)puVar14 != 0) {
        puVar14 = puVar11;
        func_0x00010bf61920();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bf626e0();
        _objc_release(puVar14);
        if ((int)puVar15 != 1) {
          puVar14 = puVar11;
          func_0x00010bf61920();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010bf626e0();
          _objc_release(puVar14);
          if ((int)puVar15 != 8) {
            puVar14 = puVar11;
            func_0x00010bf61920();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010bf626e0();
            _objc_release(puVar14);
            if ((int)puVar15 != 6) {
              puVar14 = puVar11;
              func_0x00010bf61920();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf626e0();
              _objc_release(puVar14);
            }
          }
        }
      }
      _objc_release(puVar11);
    }
  }
  else if (iVar1 == 0x26) {
    puVar11 = param_1;
    func_0x00010c23cdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd8600();
    _objc_release(puVar11);
  }
  _objc_release(param_1);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25b480();
  func_0x00010c14de00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b480();
  func_0x00010c25b480(param_1);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puStack_100);
  _objc_release(puVar10);
  _objc_release(puStack_c8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108f53b18; end: 108f53b3f;  */

undefined ** FUN_108f53b18(long param_1)

{
  if (param_1 - 1U < 0xf) {
    return (undefined **)(&PTR_PTR_110acea38)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 108f53b40; end: 108f53c6f;  */

void FUN_108f53b40(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfbec20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 108f53c70; end: 108f53f67;  */

undefined * FUN_108f53c70(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar12 = param_1;
    func_0x00010c27bb20(param_1);
    func_0x00010bffc4a0(puVar3,param_2,puVar12);
    uVar15 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar12 = param_1;
    func_0x00010c27bb00();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar12;
    func_0x00010bf52a60();
    if (puStack_150 != (undefined *)0x0) {
      lVar11 = *plStack_130;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(puVar12);
          }
          ppuVar13 = *(undefined ***)(lStack_138 + (long)puVar14 * 8);
          puVar4 = PTR_PTR_1126dca88;
          _objc_alloc();
          ppuVar5 = ppuVar13;
          func_0x00010c280360();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar5 != (undefined **)0x0) {
            ppuVar1 = ppuVar5;
          }
          ppuVar6 = ppuVar13;
          func_0x00010c27b880(ppuVar13);
          ppuVar7 = ppuVar13;
          func_0x00010c27b8c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar7 != (undefined **)0x0) {
            ppuVar2 = ppuVar7;
          }
          ppuVar8 = ppuVar13;
          func_0x00010c27b8e0(ppuVar13);
          ppuVar9 = ppuVar13;
          func_0x00010c27b900(ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar13;
          func_0x00010bf0bee0(ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0874c0(ppuVar13);
          uVar16 = uVar15;
          func_0x00010c0874e0(ppuVar13);
          func_0x00010c058fc0(uVar15,uVar16,puVar4,param_2,ppuVar1,ppuVar6,ppuVar2,ppuVar8,ppuVar9,
                              ppuVar10);
          _objc_release(ppuVar10);
          _objc_release(ppuVar9);
          _objc_release(ppuVar7);
          _objc_release(ppuVar5);
          func_0x00010befa120(puVar3,param_2,puVar4);
          _objc_release(puVar4);
          puVar14 = puVar14 + 1;
        } while (puStack_150 != puVar14);
        puStack_150 = puVar12;
        func_0x00010bf52a60(puVar12,param_2,&uStack_140,auStack_100,0x10);
      } while (puStack_150 != (undefined *)0x0);
    }
    _objc_release(puVar12);
    puVar12 = param_1;
    func_0x00010c27bb40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c08fa60();
    if (puVar14 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = param_1;
      func_0x00010c27bb40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar12);
    puVar12 = puVar3;
    func_0x00010bf529e0();
    if ((puVar12 == (undefined *)0x0) &&
       (puVar12 = puVar14, func_0x00010c08fa60(), puVar12 == (undefined *)0x0)) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126dca90;
      _objc_alloc();
      func_0x00010c0556c0();
    }
    _objc_release(puVar14);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010bf529e0();
  if (puVar12 < (undefined *)0x2) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010c0dfd40(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c067ec0();
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  return puVar12;
}



/* Entry: 108f53f68; end: 108f53fe7;  */

ulong FUN_108f53f68(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067ec0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f53fe8; end: 108f5431b;  */

void FUN_108f53fe8(uint param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_PTR_110cab530;
  if ((int)param_1 < 0xf7) {
    if ((int)param_1 < 0xef) {
      if (param_1 == 2) {
        ppuVar1 = &PTR_PTR_110cab550;
        goto LAB_108f54094;
      }
      if (param_1 == 3) goto LAB_108f54038;
    }
    else {
      if (param_1 == 0xef) {
        ppuVar1 = &PTR_PTR_110cab5a8;
        goto LAB_108f54094;
      }
      if (param_1 == 0xf0) {
        ppuVar1 = &PTR_PTR_110cab5b0;
        goto LAB_108f54094;
      }
    }
  }
  else if ((int)param_1 < 0x105) {
    if (param_1 == 0xf7) goto LAB_108f54094;
    if (param_1 == 0x102) {
      ppuVar1 = &PTR_PTR_110cab5b8;
      goto LAB_108f54094;
    }
  }
  else {
    if (param_1 == 0x105) {
LAB_108f54038:
      ppuVar1 = &PTR_PTR_110cab538;
      goto LAB_108f54094;
    }
    if (param_1 == 0x107) {
      ppuVar1 = &PTR_PTR_110cab5c0;
      goto LAB_108f54094;
    }
    if (param_1 == 0x10d) {
      ppuVar1 = &PTR_PTR_110cab5c8;
      goto LAB_108f54094;
    }
  }
  if (1 < param_1) {
    if ((int)param_1 < 0x106) {
      if (param_1 == 5) {
        ppuVar1 = &PTR_PTR_110cab560;
        goto LAB_108f54094;
      }
      if (param_1 == 0xfb) {
        ppuVar1 = &PTR_PTR_110cab5d8;
        goto LAB_108f54094;
      }
    }
    else {
      if (param_1 == 0x106) {
        ppuVar1 = &PTR_PTR_110cab5f0;
        goto LAB_108f54094;
      }
      if (param_1 == 0x10a) {
        ppuVar1 = &PTR_PTR_110cab648;
        goto LAB_108f54094;
      }
    }
  }
  ppuVar1 = &PTR_PTR_110cab598;
LAB_108f54094:
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f5431c; end: 108f5432f;  */

void FUN_108f5431c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0ec78,0,0);
  return;
}



/* Entry: 108f54330; end: 108f543e7;  */

void FUN_108f54330(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar2 = lRam0000000113730348;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108f5453c;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113730348,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam0000000113730340;
  _objc_retain(uRam0000000113730340);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f543e8; end: 108f544bb;  */

void FUN_108f543e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110f0edf8,2,0);
  return;
}



/* Entry: 108f544bc; end: 108f544e7;  */

int FUN_108f544bc(undefined4 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 3600.0;
  func_0x00010bfb2cc0(0x45610000,param_1,param_2,&PTR____CFConstantStringClassReference_110f0edb8,0)
  ;
  return (int)fVar1;
}



/* Entry: 108f544e8; end: 108f5453b;  */

void FUN_108f544e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f333333,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110f0edd8,0);
  return;
}



/* Entry: 108f5453c; end: 108f5468b;  */

void FUN_108f5453c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x20);
  puVar3 = puVar6;
  _objc_retain();
  FUN_108f5468c();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126af7d0;
    _objc_alloc_init(PTR_PTR_1126af7d0);
    puVar5 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar5 = puVar6;
    func_0x00010c1195e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110f0ee78,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126dca98;
    _objc_alloc();
    puVar3 = puVar5;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar4,param_2,puVar3,&lStack_48);
    lVar2 = lStack_48;
    _objc_release();
    if (lVar2 == 0) {
      _objc_retain(puVar4);
      puVar3 = puVar4;
    }
    else {
      FUN_108f5468c();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  uVar1 = puRam0000000113730340;
  puRam0000000113730340 = puVar3;
  _objc_release(uVar1);
  return;
}



/* Entry: 108f5468c; end: 108f5471b;  */

void FUN_108f5468c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dca98;
  _objc_opt_new(PTR_PTR_1126dca98);
  func_0x00010c1ab340();
  func_0x00010c1ab380(puVar1,param_2,0x7fffffff);
  func_0x00010c1ab300(puVar1,param_2,0);
  func_0x00010c1ab3c0(puVar1,param_2,0x15180);
  func_0x00010c1ab360(puVar1,param_2,5);
  func_0x00010c1ab3a0(puVar1,param_2,0x7fffffff);
  func_0x00010c1ab320(puVar1,param_2,0);
  func_0x00010c1ab3e0(puVar1,param_2,0x15180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


