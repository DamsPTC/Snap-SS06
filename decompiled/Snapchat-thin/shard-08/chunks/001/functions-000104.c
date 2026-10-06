/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105da9540; end: 105da9547; -[SCPreviewFeatureSnapCropImpl overlayView] */

undefined8 FUN_105da9540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105da9548; end: 105da9577; -[SCPreviewFeatureSnapCropImpl setOverlayView:] */

void FUN_105da9548(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105da9578; end: 105da958f; -[SCPreviewFeatureSnapCropImpl delegate] */

void FUN_105da9578(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9590; end: 105da959b; -[SCPreviewFeatureSnapCropImpl setDelegate:] */

void FUN_105da9590(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105da959c; end: 105da95b3; -[SCPreviewFeatureSnapCropImpl listener] */

void FUN_105da959c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da95b4; end: 105da95bf; -[SCPreviewFeatureSnapCropImpl setListener:] */

void FUN_105da95b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105da95c0; end: 105da95d7; -[SCPreviewFeatureSnapCropImpl configuration] */

void FUN_105da95c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da95d8; end: 105da95e3; -[SCPreviewFeatureSnapCropImpl setConfiguration:] */

void FUN_105da95d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105da95e4; end: 105da95fb; -[SCPreviewFeatureSnapCropImpl previewView] */

void FUN_105da95e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da95fc; end: 105da9607; -[SCPreviewFeatureSnapCropImpl setPreviewView:] */

void FUN_105da95fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105da9608; end: 105da961f; -[SCPreviewFeatureSnapCropImpl previewScopeServices] */

void FUN_105da9608(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9620; end: 105da962b; -[SCPreviewFeatureSnapCropImpl setPreviewScopeServices:] */

void FUN_105da9620(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105da962c; end: 105da9643; -[SCPreviewFeatureSnapCropImpl previewABServices] */

void FUN_105da962c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9644; end: 105da964f; -[SCPreviewFeatureSnapCropImpl setPreviewABServices:] */

void FUN_105da9644(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105da9650; end: 105da9667; -[SCPreviewFeatureSnapCropImpl creativeToolsABServices] */

void FUN_105da9650(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9668; end: 105da9673; -[SCPreviewFeatureSnapCropImpl setCreativeToolsABServices:] */

void FUN_105da9668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105da9674; end: 105da967b; -[SCPreviewFeatureSnapCropImpl toolbarItemViewModel] */

undefined8 FUN_105da9674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105da967c; end: 105da96fb; -[SCPreviewFeatureSnapCropImpl .cxx_destruct] */

void FUN_105da967c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105da96fc; end: 105da9897; -[SCPreviewFeatureSnapCropInteractionsImpl initWithPreviewConfiguration:userInteractionStateLogger:viewportController:videoObjectTracker:previewABServices:creativeToolsABServices:previewScopeServices:simpleContentFetcher:tooltipsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105da96fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed130;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithPreviewConfiguration_pre_1125ec018,param_3,param_7,
                      param_8,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112736244),param_4);
    lVar4 = (long)_DAT_112736248;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273624c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112736250;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112736254;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c112020();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112736258) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105da9898; end: 105da990f; -[SCPreviewFeatureSnapCropInteractionsImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da9898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_configureWithView__1125af8f0;
  puStack_38 = PTR_PTR_1126ed130;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  _objc_storeWeak(param_1 + _DAT_11273625c,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105da9910; end: 105da998b; -[SCPreviewFeatureSnapCropInteractionsImpl createCropToolBarButtonItemWithTarget:selector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da9910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3e40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6a00();
  _objc_release(param_3);
  func_0x00010c201400(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105da998c; end: 105da99c7; -[SCPreviewFeatureSnapCropInteractionsImpl createInitialCroppingState:containerView:contentScaleFactor:contentAspectFitSize:] */

void FUN_105da998c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed130;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_createInitialCroppingState_conta_1125b33f8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da99c8; end: 105da9a6b; -[SCPreviewFeatureSnapCropInteractionsImpl createAndSetIdentityCroppingState:containerView:contentScaleFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da99c8(double param_1,double param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = 1.0 / param_3;
  func_0x00010bfc9ac0(dVar4,0x3ff0000000000000,PTR_PTR_1126bf720);
  puVar1 = PTR_PTR_1126c20c0;
  _objc_alloc();
  func_0x00010c040460(0,dVar4,0,0,param_1 * param_3,param_2 * param_3);
  lVar3 = (long)_DAT_112736260;
  uVar2 = *(undefined8 *)(param_4 + lVar3);
  *(undefined **)(param_4 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf52160(*(undefined8 *)(param_4 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9a6c; end: 105da9a8b; -[SCPreviewFeatureSnapCropInteractionsImpl identityCroppingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da9a6c(long param_1)

{
  func_0x00010bf52160(*(undefined8 *)(param_1 + _DAT_112736260));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9a8c; end: 105da9bef; -[SCPreviewFeatureSnapCropInteractionsImpl createOverlayViewWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da9a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_5;
  uVar8 = param_1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_5;
    func_0x00010bfe6060(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c4938;
  _objc_alloc(PTR_PTR_1126c4938);
  lVar1 = param_5;
  func_0x00010bf46560(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4080();
  uVar7 = *(undefined8 *)(param_5 + _DAT_112736250);
  func_0x00010bf5aec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c06f9e0();
  func_0x00010c013ea0(param_1,param_2,param_3,param_4,uVar8,puVar3,param_6,lVar2,uVar7,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105da9bf0; end: 105da9c93; -[SCPreviewFeatureSnapCropInteractionsImpl currentCroppingState] */

void FUN_105da9bf0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_5;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010bf60ee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c80();
    func_0x000100841590();
    bVar1 = true;
    if ((!NAN(param_1)) && (bVar1 = true, !NAN(param_2))) {
      bVar1 = false;
    }
    if (bVar1) {
      _objc_release(lVar2);
    }
    else {
      _objc_release(lVar2);
      bVar1 = true;
      if ((!NAN(param_4)) && (bVar1 = true, !NAN(param_3))) {
        bVar1 = false;
      }
      if (!bVar1) {
        func_0x00010bf60ee0(param_5);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105da9c94; end: 105da9ca3; -[SCPreviewFeatureSnapCropInteractionsImpl isCroppingActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105da9c94(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112736264);
}



/* Entry: 105da9ca4; end: 105da9d6f; -[SCPreviewFeatureSnapCropInteractionsImpl activateCropToolWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105da9ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112736244;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c293a40();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + _DAT_112736264) = 1;
  *(undefined1 *)(param_1 + _DAT_112736268) = 1;
  func_0x00010beae9a0(param_1,param_2,param_3,0);
  lVar1 = param_1;
  func_0x00010c0efe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  func_0x00010c292100();
  _objc_release(param_1);
  return 1;
}



/* Entry: 105da9d70; end: 105da9dcf; -[SCPreviewFeatureSnapCropInteractionsImpl _activateCroppingFromPreviewWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105da9d70(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112736264) = 1;
  *(undefined1 *)(param_1 + _DAT_112736268) = 0;
  func_0x00010beae9a0();
  func_0x00010c0efe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105da9dd0; end: 105daa14f; -[SCPreviewFeatureSnapCropInteractionsImpl _setupOverlayViewWithAnimated:hideOverlayComponents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_105da9dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf91760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar1 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4af80();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf576a0(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7840(param_5,param_6,uVar1);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cc20(uVar1,param_6,puVar4,0);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0efe60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ca80();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf60ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bfe6060(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c072080(uVar1,param_6,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf5aec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c06f9e0();
    if ((int)uVar7 == 0) {
      uVar7 = param_5;
      func_0x00010c0efe60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c072ea0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    if ((uVar5 & 1) == 0) {
      func_0x00010bea24a0(param_5);
    }
  }
  uVar1 = param_5;
  func_0x00010c0efe60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b80();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0efe60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_6,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release();
  if ((int)uVar3 != 0) {
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28b4c0();
    _objc_release();
    uVar1 = param_5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return uVar1;
  }
  ___stack_chk_fail();
  *(undefined1 *)(uVar1 + (long)_DAT_112736268) = 0;
  uVar2 = uVar1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b80();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0efe60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  lVar8 = uVar1 + (long)_DAT_112736244;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c292080();
  _objc_release(lVar8);
  return 1;
}



/* Entry: 105daa150; end: 105daa1f3; -[SCPreviewFeatureSnapCropInteractionsImpl deactivateCropTool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105daa150(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112736268) = 0;
  lVar1 = param_1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174b80();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0efe60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112736244;
  _objc_loadWeakRetained(param_1);
  func_0x00010c292080();
  _objc_release(param_1);
  return 1;
}



/* Entry: 105daa1f4; end: 105daa1fb; -[SCPreviewFeatureSnapCropInteractionsImpl boundsForBorderOverlayView:] */

void FUN_105daa1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_bounds_1125a5ca8);
  return;
}



/* Entry: 105daa1fc; end: 105daa27f; -[SCPreviewFeatureSnapCropInteractionsImpl cropAwareMediaOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105daa1fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c072080();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0c5ae0();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105daa280; end: 105daa28b; -[SCPreviewFeatureSnapCropInteractionsImpl preferredImageSizeForMediaSize:maxImageSize:] */

undefined1  [16]
FUN_105daa280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 105daa28c; end: 105daa7bb; -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidChangeTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daa28c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_5);
  func_0x00010bea24a0(param_3);
  puVar1 = param_3;
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf926c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  if ((int)puVar3 == 0) {
    puVar2 = param_3;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fe40();
    puVar3 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee7a0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fea0();
    puVar3 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf607e0();
    puVar3 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219bc0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_2;
    func_0x00010bf607e0();
    uVar11 = param_1;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf5c9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219be0(param_1);
  }
  else {
    puVar2 = PTR_PTR_1126c20c0;
    _objc_alloc(PTR_PTR_1126c20c0);
    puVar3 = param_3;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fe40();
    puVar8 = param_3;
    uVar11 = param_1;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fea0();
    puVar4 = param_3;
    uVar9 = uVar11;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf607e0();
    puVar5 = param_3;
    uVar10 = uVar9;
    func_0x00010c0efe60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf607e0();
    uVar13 = param_2;
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    func_0x00010c040460(param_1,uVar11,uVar9,param_2,uVar10,uVar13,puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar3);
    func_0x00010c111b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c111b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107ffcd08(puVar3,puVar7,puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar12 = (long)_DAT_112736248;
  uVar9 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    param_1 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bf27a60(&uStack_b0,puVar1);
  }
  func_0x00010c2235a0(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c0efe60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072ea0();
  func_0x00010c186160(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar9);
  func_0x00010c27ada0(param_5);
  lVar12 = (long)_DAT_11273624c;
  uVar10 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,uVar11);
  _objc_release(uVar9);
  _objc_release(uVar10);
  if (param_5 == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_e0,param_5);
  }
  uVar9 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  func_0x00010c219960();
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(param_5);
  return;
}



/* Entry: 105daa7bc; end: 105daa9a7; -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidFinishTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daa7bc(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = param_1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe6060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c072080(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    lVar7 = (long)_DAT_112736268;
    iVar1 = _DAT_11273626c;
    if ((*(byte *)(param_1 + lVar7) & 1) != 0) {
      iVar1 = _DAT_112736270;
    }
    *(undefined1 *)(param_1 + (long)iVar1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + (long)_DAT_11273626c) = 0;
    *(undefined1 *)(param_1 + (long)_DAT_112736270) = 0;
    lVar7 = (long)_DAT_112736268;
  }
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0efe60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174b80();
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c111b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf60ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73120(uVar5,param_2,uVar6,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar7 = param_1 + (long)_DAT_11273625c;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c161840();
  _objc_release(lVar7);
  func_0x00010c111b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105daa9a8; end: 105daaa27; -[SCPreviewFeatureSnapCropInteractionsImpl croppingWillDeactivate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daa9a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_11273625c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(lVar1,param_2,puVar2,1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105daaa28; end: 105daaabf; -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidDeactivate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daaa28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112736248);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105daaac0; end: 105daaafb; -[SCPreviewFeatureSnapCropInteractionsImpl croppingDidShowTeachingTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daaac0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736254);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1902e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105daaafc; end: 105daab63; -[SCPreviewFeatureSnapCropInteractionsImpl snapEditor:didTriggerLifecycle:] */

void FUN_105daaafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 2) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06eca0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__activateCroppingFromPreviewWith_11254ec88,1);
      return;
    }
  }
  return;
}



/* Entry: 105daab64; end: 105daac27; -[SCPreviewFeatureSnapCropInteractionsImpl snapEditor:updateLoggingWithBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daab64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010c2b1120(param_4,param_2,*(undefined1 *)(param_1 + _DAT_11273626c));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab6a0(param_4,param_2,*(undefined1 *)(param_1 + _DAT_112736270));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf60ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe6060(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c072080(lVar1,param_2,param_1);
  func_0x00010c2ab700(param_4,param_2,(uint)lVar2 ^ 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105daac28; end: 105daac93; -[SCPreviewFeatureSnapCropInteractionsImpl editCount] */

uint FUN_105daac28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf60ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe6060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c072080(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105daac94; end: 105daafb3; -[SCPreviewFeatureSnapCropInteractionsImpl _setBlurryBackgroundIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daac94(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((param_1[_DAT_112736240] & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = param_1;
    func_0x00010c111b60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bf926c0();
    if (((ulong)puVar1 & 1) == 0) {
      puVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126afee0;
      _objc_opt_class(PTR_PTR_1126afee0);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar1 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar3);
      _objc_retain(puVar1);
      puVar3 = puVar1;
      func_0x00010bfbbbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 == (undefined *)0x0) {
        puVar4 = puVar1;
        func_0x00010bfbbbc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = PTR_PTR_1126ae558;
        puVar5 = puVar1;
        if (puVar4 == (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x00010c29a1e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 == (undefined *)0x0) {
            puVar3 = puVar1;
            func_0x00010c29b700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar3 == (undefined *)0x0) {
              puVar5 = (undefined *)0x0;
            }
            else {
              func_0x00010c29b700(puVar1);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            func_0x00010c29a1e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar3 = PTR_PTR_1126ae558;
          func_0x00010bfe9ca0(PTR_PTR_1126ae558);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bfbbbc0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe9ca0(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar5);
      }
      else {
        puVar3 = puVar1;
        func_0x00010bfbbbe0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
      func_0x00010bea2200(param_1);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    else {
      puVar3 = puVar2;
      func_0x00010c2a1480(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(puVar2);
      puVar1 = PTR_PTR_1126ae790;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcd0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar3);
      _objc_release(puVar1);
      _objc_release(param_1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_50);
    }
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105daafb4; end: 105dab0db;  */

void FUN_105daafb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_2);
  func_0x00010c09e180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ff580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105dab0dc; end: 105dab2cb;  */

void FUN_105dab0dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_3 == 0)) && (lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0ff640();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = lVar2;
      func_0x00010c0c3fe0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = lVar2;
      func_0x00010c0c3fe0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6f80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae790;
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      _objc_opt_class(uVar7);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcd0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar8);
      _objc_release(puVar5);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar6);
      _objc_release(uVar6);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105dab2cc; end: 105dab50b;  */

void FUN_105dab2cc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long in_x5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c6c20();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (iVar1 == 3) {
    puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    _objc_alloc();
    func_0x00010bff41a0();
    func_0x00010c169b80();
    uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_70 = uVar8;
    uStack_68 = uVar9;
    uStack_60 = uVar7;
    func_0x00010c1ec3e0(puVar4);
    uStack_70 = uVar8;
    uStack_68 = uVar9;
    uStack_60 = uVar7;
    func_0x00010c1ec3c0(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _CMTimeMake(&uStack_70,0,1);
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    func_0x00010bfbf180(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar4);
  }
  else {
    if (iVar1 != 2) goto LAB_105dab4d0;
    lVar2 = param_2;
    func_0x00010c0f5800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2200(uVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_105dab4d0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (in_x5 != 0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010bffa220();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2200(uVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105dab50c; end: 105dab58b;  */

void FUN_105dab50c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_x5;
  undefined8 uVar3;
  
  if (in_x5 != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010bffa220();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2200(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dab58c; end: 105dab6b3; -[SCPreviewFeatureSnapCropInteractionsImpl _setBackgroundImageWithFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dab58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112736240) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112736240) = 1;
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    puVar1 = PTR_PTR_1126ae790;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(param_3);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105dab6b4; end: 105dab7ab;  */

void FUN_105dab6b4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = PTR_PTR_1126bfba0;
    func_0x00010bfcd920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105dab7ac;
      puStack_58 = &UNK_110841fb0;
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      _objc_retain(puVar1);
      puStack_50 = puVar1;
      func_0x000100162d98("APPSTORE",&puStack_70);
      _objc_release(puStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105dab7ac; end: 105dab883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dab7ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c4948;
    _objc_alloc(PTR_PTR_1126c4948);
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    }
    _objc_retain(uVar3);
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    _objc_retain(uVar4);
    func_0x00010c0541c0(puVar2,param_2,uVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112736248);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e660();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dab884; end: 105dab897; -[SCPreviewFeatureSnapCropInteractionsImpl didTapPreviewContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_105dab884(long param_1)

{
  return *(byte *)(param_1 + _DAT_112736268) ^ 1;
}



/* Entry: 105dab898; end: 105dab91f; -[SCPreviewFeatureSnapCropInteractionsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dab898(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736254,0);
  _objc_destroyWeak(param_1 + _DAT_11273625c);
  _objc_storeStrong(param_1 + _DAT_112736250,0);
  _objc_storeStrong(param_1 + _DAT_11273624c,0);
  _objc_storeStrong(param_1 + _DAT_112736248,0);
  _objc_destroyWeak(param_1 + _DAT_112736244);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736260,0);
  return;
}



/* Entry: 105dab920; end: 105daba97; -[SCPreviewFeatureSnapCropServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dab920(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112736274;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11273627c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar6;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126ae720;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105daba98;
  puStack_60 = &UNK_1108e8bb0;
  _objc_retain(lVar1);
  lStack_58 = lVar1;
  _objc_retain(lVar2);
  lStack_50 = lVar2;
  lStack_48 = param_1;
  func_0x00010bf11fe0(puVar3,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4960;
  _objc_alloc(PTR_PTR_1126c4960);
  func_0x00010c047380();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127362b0);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lStack_50);
  _objc_release(lStack_58);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105daba98; end: 105dabd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daba98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07e640();
  if (iVar2 == 0) {
    puVar9 = PTR_PTR_1126c4958;
    _objc_alloc(PTR_PTR_1126c4958);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    lVar12 = *(long *)(param_1 + 0x30);
    FUN_105dabd24(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + 0x30);
    func_0x000105dabd48(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + 0x30);
    func_0x000105dabd6c(lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039860(puVar9,param_2,uVar14,lVar12,lVar10,lVar13);
  }
  else {
    puVar9 = PTR_PTR_1126c4950;
    _objc_alloc();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(param_1 + 0x30) + (long)_DAT_11273628c;
      _objc_loadWeakRetained();
    }
    lVar10 = lVar12;
    func_0x00010c29f540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(param_1 + 0x30) + (long)_DAT_112736294;
      _objc_loadWeakRetained();
    }
    lVar3 = lVar13;
    func_0x00010c29a700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_105dabd24();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x000105dabd48();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x000105dabd6c();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x30) + (long)_DAT_1127362a8;
      _objc_loadWeakRetained();
    }
    lVar7 = lVar11;
    func_0x00010c23c760();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x30) + (long)_DAT_1127362ac;
      _objc_loadWeakRetained();
    }
    lVar8 = lVar15;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039980(puVar9,param_2,uVar14,uVar1,lVar10,lVar3,uVar4,uVar5,uVar6,lVar7,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar15);
    _objc_release(lVar7);
    _objc_release(lVar11);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar13);
  _objc_release(lVar10);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105dabd24; end: 105dabd8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dabd24(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736284);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dabd90; end: 105dabe83; -[SCPreviewFeatureSnapCropServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dabd90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127362b4,0);
  _objc_storeStrong(param_1 + _DAT_1127362b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127362ac);
  _objc_destroyWeak(param_1 + _DAT_1127362a8);
  _objc_destroyWeak(param_1 + _DAT_1127362a4);
  _objc_destroyWeak(param_1 + _DAT_1127362a0);
  _objc_destroyWeak(param_1 + _DAT_11273629c);
  _objc_destroyWeak(param_1 + _DAT_112736298);
  _objc_destroyWeak(param_1 + _DAT_112736294);
  _objc_destroyWeak(param_1 + _DAT_112736290);
  _objc_destroyWeak(param_1 + _DAT_11273628c);
  _objc_destroyWeak(param_1 + _DAT_112736288);
  _objc_destroyWeak(param_1 + _DAT_112736284);
  _objc_destroyWeak(param_1 + _DAT_112736280);
  _objc_destroyWeak(param_1 + _DAT_11273627c);
  _objc_destroyWeak(param_1 + _DAT_112736278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736274);
  return;
}



/* Entry: 105dabe84; end: 105dabf2f; -[SCPreviewFeatureSnapCropServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dabe84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127362b8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127362c0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c23fc40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dabf30; end: 105dabf73; -[SCPreviewFeatureSnapCropServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dabf30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127362c0);
  _objc_destroyWeak(param_1 + _DAT_1127362bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127362b8);
  return;
}



/* Entry: 105dabf74; end: 105dac01f; -[SCPreviewFeatureSnapCropToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dabf74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127362c4;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127362cc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c23fc40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dac020; end: 105dac063; -[SCPreviewFeatureSnapCropToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dac020(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127362cc);
  _objc_destroyWeak(param_1 + _DAT_1127362c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127362c4);
  return;
}



/* Entry: 105dac064; end: 105dac413; -[SCPreviewFeatureSnapKitImpl initWithSnapKitStickerHelper:creativeToolsABProvider:deeplinkUtilitiesProvider:captionFeature:webAttachmentFeature:stickerContainerFeature:configuration:graphene:circumstanceEngine:previewScopeServices:temporaryFileWriter:itemViewService:stickerInjector:] */

undefined8 *
FUN_105dac064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             ulong param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
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
  puStack_70 = PTR_PTR_1126ed138;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[2];
    puVar2[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[3];
    puVar2[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[4];
    puVar2[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[5];
    puVar2[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[6];
    puVar2[6] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[7];
    puVar2[7] = param_8;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126afee0;
    _objc_retain(param_9);
    _objc_opt_class(puVar4);
    uVar5 = param_9;
    _objc_opt_isKindOfClass(param_9,puVar4);
    uVar1 = param_9;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_9);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = uVar1;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[8];
    puVar2[8] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[9];
    puVar2[9] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[1];
    puVar2[1] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[10];
    puVar2[10] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_15;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar2);
    uVar3 = puVar2[0xd];
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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
  return puVar2;
}



/* Entry: 105dac414; end: 105dac45b;  */

void FUN_105dac414(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beacaa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dac45c; end: 105dac467; -[SCPreviewFeatureSnapKitImpl configureWithView:] */

void FUN_105dac45c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105dac468; end: 105dac46f; -[SCPreviewFeatureSnapKitImpl responderChainPriority] */

undefined8 FUN_105dac468(void)

{
  return 0x7fffffff;
}



/* Entry: 105dac470; end: 105dac6c7; -[SCPreviewFeatureSnapKitImpl _setupForSnapKitWithConfiguration:] */

/* WARNING: Possible PIC construction at 0x000105dac680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105dac684) */

void FUN_105dac470(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    lVar5 = *(long *)(param_3 + 0x68);
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    _objc_release(lVar5);
    if (lVar2 == 0) {
      return;
    }
    uVar6 = 1;
  }
  else {
    func_0x0001008e4748();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf680c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab440(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = param_3;
      func_0x00010bf680c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf302c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178d00(uVar3);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
    }
    lVar1 = param_3;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0d6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf680c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28ca40(uVar6);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_release(uVar6);
    }
    uVar6 = 0;
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__updateSnapKitStickerStatesWithR_112595a60,uVar6);
  return;
}



/* Entry: 105dac6c8; end: 105dac743; -[SCPreviewFeatureSnapKitImpl didChangeAttachmentUrl] */

void FUN_105dac6c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateSnapKitStickerStatesWithR_112595a60,1);
    return;
  }
  return;
}



/* Entry: 105dac744; end: 105dac89b; -[SCPreviewFeatureSnapKitImpl isDeletedStickerViewSnapKitStickerView:] */

long FUN_105dac744(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfc0fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = lVar5;
      func_0x00010c099820(lVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010bf680c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar2);
    }
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105dac89c; end: 105dacaef; -[SCPreviewFeatureSnapKitImpl didDeleteSnapKitStickerView:] */

void FUN_105dac89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126c3dc8;
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010bf680c0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf29420(puVar1,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar3 = PTR_PTR_1126c3dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf680c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ad60(puVar3,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar2);
  func_0x00010c2ac420(puVar3,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b31a0(puVar1,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a960(*(undefined8 *)(param_1 + 0x68),param_2,puVar5);
  uVar11 = param_3;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar11;
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfc0fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c099820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar11);
  puVar10 = puVar4;
  func_0x00010bf0d6a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c0720c0(uVar9,param_2,puVar10);
  _objc_release(puVar10);
  if ((int)uVar11 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28ca40();
    _objc_release(uVar11);
  }
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dacaf0; end: 105dad1e3; -[SCPreviewFeatureSnapKitImpl _updateSnapKitStickerStatesWithResetAttachmentUrl:] */

ulong FUN_105dacaf0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                   int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uStack_270;
  undefined1 auStack_230 [8];
  undefined1 uStack_228;
  undefined1 auStack_220 [8];
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_3 + 0x68);
  func_0x00010bf680c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108eb71d0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar7 = 0;
    if (uVar3 == 0) {
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      lStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      uVar8 = *(ulong *)(param_3 + 0x68);
      func_0x00010bf680c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uStack_270 = uVar3;
      func_0x00010bf52a60();
      if (uStack_270 != 0) {
        lVar22 = *plStack_200;
        do {
          uVar8 = 0;
          do {
            if (*plStack_200 != lVar22) {
              _objc_enumerationMutation(uVar3);
            }
            puVar25 = *(undefined **)(lStack_208 + uVar8 * 8);
            _objc_retain(puVar25);
            puVar9 = puVar25;
            if (param_5 != 0) {
              uVar6 = *(undefined8 *)(param_3 + 0x38);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12e5c0();
              _objc_release(uVar6);
              puVar9 = PTR_PTR_1126c4968;
              _objc_alloc();
              puVar10 = puVar25;
              func_0x00010bfe7300(puVar25);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar25;
              func_0x00010c0cc0c0(puVar25);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff37a0();
              _objc_release(puVar25);
              _objc_release(puVar11);
              _objc_release(puVar10);
            }
            puVar25 = puVar9;
            func_0x00010bfe7300();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar25 == (undefined *)0x0) {
              puVar25 = (undefined *)0x0;
LAB_105dacf10:
              func_0x00010c254d00(PTR_PTR_1126c4978);
              puVar10 = PTR_PTR_1126b13b0;
              puVar11 = puVar9;
              func_0x00010bf06320(puVar9);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar11;
              func_0x00010bf05ba0();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar9;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar14;
              func_0x00010bf0d6a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c07f980(*(undefined8 *)(param_3 + 0x10));
              func_0x00010bfc0f80(uVar7,param_2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              _objc_release(puVar14);
              _objc_release(puVar13);
              _objc_release(puVar11);
              uVar12 = *(undefined8 *)(param_3 + 0x60);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar12;
              func_0x00010c06c020();
              _objc_release(uVar12);
              uVar16 = *(undefined8 *)(param_3 + 0x58);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar16;
              func_0x00010c29ce00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar16);
              _objc_initWeak(auStack_220,param_3);
              uVar16 = uVar12;
              func_0x00010c0e0460();
              _objc_retainAutoreleasedReturnValue();
              param_4 = auStack_220;
              _objc_copyWeak(auStack_230,param_4);
              _objc_retain(puVar10);
              _objc_retain(puVar9);
              uStack_228 = (undefined1)uVar6;
              uVar6 = uVar16;
              func_0x00010c25ff60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1a3e0();
              _objc_release(uVar6);
              _objc_release(uVar16);
              _objc_release(puVar9);
              _objc_release(puVar10);
              _objc_destroyWeak(auStack_230);
              _objc_destroyWeak(auStack_220);
              _objc_release(uVar12);
              _objc_release(puVar10);
              lVar23 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(param_3 + 0x50);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010bfe7300();
              _objc_retainAutoreleasedReturnValue();
              puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar11 = puVar10;
              func_0x00010011df08();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              lStack_218 = 0;
              uVar6 = uVar12;
              func_0x00010c2bda80();
              _objc_retainAutoreleasedReturnValue();
              lVar23 = lStack_218;
              _objc_retain(lStack_218);
              _objc_release(puVar25);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(uVar12);
              puVar25 = PTR_PTR_1126c4970;
              func_0x00010c09e1c0(PTR_PTR_1126c4970);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
              if (lVar23 == 0) goto LAB_105dacf10;
            }
            _objc_release(puVar25);
            _objc_release(lVar23);
            _objc_release(puVar9);
            uVar8 = uVar8 + 1;
          } while (uStack_270 != uVar8);
          uStack_270 = uVar3;
          func_0x00010bf52a60();
        } while (uStack_270 != 0);
      }
    }
    else {
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      _objc_retain(uVar2);
      uVar8 = uVar2;
      func_0x00010bf52a60();
      uVar3 = uVar2;
      if (uVar8 != 0) {
        lVar22 = *plStack_1c0;
        do {
          uVar24 = 0;
          do {
            if (*plStack_1c0 != lVar22) {
              _objc_enumerationMutation(uVar2);
            }
            uVar4 = uVar1;
            func_0x00010c0ff640();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR_PTR_1126baa08;
            _objc_alloc();
            uVar5 = uVar4;
            func_0x00010bf5cc00(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c020180();
            _objc_release(uVar5);
            uVar6 = *(undefined8 *)(param_3 + 0x38);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c253b60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b0a40();
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(puVar9);
            _objc_release(uVar4);
            uVar24 = uVar24 + 1;
          } while (uVar8 != uVar24);
          uVar8 = uVar2;
          func_0x00010bf52a60();
        } while (uVar8 != 0);
      }
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_220);
    __Unwind_Resume(uVar1);
    func_0x00010c271a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bfc0fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c099820();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c08fa60();
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(param_4);
    return (ulong)(puVar21 != (undefined1 *)0x0);
  }
  return uVar1;
}



/* Entry: 105dad1e4; end: 105dad297;  */

bool FUN_105dad1e4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c271a60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc0fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c099820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar5 != 0;
}



/* Entry: 105dad298; end: 105dad363;  */

void FUN_105dad298(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dad364; end: 105dad533;  */

void FUN_105dad364(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126baa08;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c020180();
  puVar2 = PTR_PTR_1126ba960;
  _objc_alloc(PTR_PTR_1126ba960);
  func_0x00010c04c640();
  _objc_release(param_4);
  func_0x00010c254d80(PTR_PTR_1126c4978);
  func_0x00010c1f5fe0(puVar2);
  func_0x00010c254d60(PTR_PTR_1126c4978);
  func_0x00010c1ee7a0(puVar2);
  func_0x00010c253ae0(PTR_PTR_1126c4978);
  lVar3 = *(long *)(param_3 + 0x30) + 0x78;
  dVar8 = param_1;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  param_1 = param_1 * dVar8;
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_3 + 0x30) + 0x78;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c3d58;
  _objc_opt_new(PTR_PTR_1126c3d58);
  func_0x00010c2aa4a0(param_1,param_2 * dVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b01a0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066e80(uVar6);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dad534; end: 105dad537;  */

void FUN_105dad534(void)

{
  return;
}



/* Entry: 105dad538; end: 105dad783; -[SCPreviewFeatureSnapKitImpl snapEditor:didInitiateExportWithType:] */

void FUN_105dad538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bfb1160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf680c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0dfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  puVar7 = PTR_PTR_1126c4980;
  _objc_alloc_init(PTR_PTR_1126c4980);
  func_0x00010c1d0440();
  func_0x00010c204b80(puVar6,param_2,puVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1f440(uVar4,param_2,&PTR____CFConstantStringClassReference_110e2a1d8,0,puVar6);
  uVar2 = uVar5;
  if ((int)uVar4 != 0) {
    func_0x00010c25cfc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110db3638,
                        &PTR____CFConstantStringClassReference_110dc1338);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126c4988;
    func_0x00010c241ac0(PTR_PTR_1126c4988);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x40),param_2,puVar10);
    _objc_release(puVar10);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105dad784; end: 105dad84b; -[SCPreviewFeatureSnapKitImpl .cxx_destruct] */

void FUN_105dad784(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105dad84c; end: 105dadc87; -[SCPreviewFeatureSnapKitServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dad84c(long param_1,undefined8 param_2)

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
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar16 = param_1;
  FUN_105dadc88();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar16;
  func_0x00010c241c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = param_1;
  FUN_105dadc88();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010bf689a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736314;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar16;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736318;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar16;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11273631c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar16;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736320;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar16;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11273630c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736338;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c241b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736324;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11273632c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar16;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736330;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar16;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112736334;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar16;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105dadcac;
  puStack_d8 = &UNK_1108e8ca0;
  puVar13 = PTR_PTR_1126ae720;
  lStack_d0 = lVar1;
  lStack_c8 = lVar3;
  lStack_c0 = lVar2;
  lStack_b8 = lVar4;
  lStack_b0 = lVar5;
  lStack_a8 = lVar6;
  lStack_a0 = lVar7;
  lStack_98 = lVar10;
  lStack_90 = lVar8;
  lStack_88 = param_1;
  lStack_80 = lVar9;
  lStack_78 = lVar11;
  lStack_70 = lVar12;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_f0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c4998;
  _objc_alloc(PTR_PTR_1126c4998);
  func_0x00010c048160();
  if (param_1 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + _DAT_11273633c);
  }
  func_0x00010bf9d660(uVar15,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105dadc88; end: 105dadcab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dadc88(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736310);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dadcac; end: 105dadd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dadcac(long param_1,undefined8 param_2)

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
  undefined *puVar10;
  long lVar11;
  
  puVar10 = PTR_PTR_1126c4990;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x68) + (long)_DAT_112736328;
    _objc_loadWeakRetained();
  }
  func_0x00010c0481a0(puVar10,param_2,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,lVar11,
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80));
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105dadd78; end: 105dade37; -[SCPreviewFeatureSnapKitServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dadd78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273633c,0);
  _objc_destroyWeak(param_1 + _DAT_112736338);
  _objc_destroyWeak(param_1 + _DAT_112736334);
  _objc_destroyWeak(param_1 + _DAT_112736330);
  _objc_destroyWeak(param_1 + _DAT_11273632c);
  _objc_destroyWeak(param_1 + _DAT_112736328);
  _objc_destroyWeak(param_1 + _DAT_112736324);
  _objc_destroyWeak(param_1 + _DAT_112736320);
  _objc_destroyWeak(param_1 + _DAT_11273631c);
  _objc_destroyWeak(param_1 + _DAT_112736318);
  _objc_destroyWeak(param_1 + _DAT_112736314);
  _objc_destroyWeak(param_1 + _DAT_112736310);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273630c);
  return;
}



/* Entry: 105dade38; end: 105dadee3; -[SCPreviewFeatureSnapKitServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dade38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112736340;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112736348;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c241880(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dadee4; end: 105dadf27; -[SCPreviewFeatureSnapKitServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dadee4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112736348);
  _objc_destroyWeak(param_1 + _DAT_112736344);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736340);
  return;
}



/* Entry: 105dadf28; end: 105dadf53; +[SCGrapheneSnapKitPreviewFeatureMetric snapKitIwvPartner] */

void FUN_105dadf28(void)

{
  _objc_alloc(PTR_PTR_1126c4988);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dadf54; end: 105dadff3; -[SCGrapheneSnapKitPreviewFeatureMetric description] */

void FUN_105dadf54(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a218;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e2a218,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ed140;
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



/* Entry: 105dadff4; end: 105dae137; -[SCGrapheneRegistry snapKitPreviewFeatureGraphene] */

void FUN_105dadff4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105dae07c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c22c0 != -1) {
    func_0x00010002a2fc(0x1136c22c0,&puStack_48);
  }
  uVar1 = uRam00000001136c22b8;
  _objc_retain(uRam00000001136c22b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dae138; end: 105dae29b; -[SCPreviewFeatureSnapRecoveryPersistenceImpl initWithUserSession:previewScopeServices:configuration:snapRecoveryConfig:circumstanceEngine:] */

undefined1 *
FUN_105dae138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ed148;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_7);
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dae29c; end: 105dae2a7; -[SCPreviewFeatureSnapRecoveryPersistenceImpl cancelDeferredImageRecoveryPersistence] */

void FUN_105dae29c(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105dae2a8; end: 105dae2ab; -[SCPreviewFeatureSnapRecoveryPersistenceImpl removePersistenceData] */

void FUN_105dae2a8(void)

{
  return;
}



/* Entry: 105dae2ac; end: 105dae2cf; -[SCPreviewFeatureSnapRecoveryPersistenceImpl cancelPersistenceAndRemoveData] */

void FUN_105dae2ac(undefined8 param_1)

{
  func_0x00010bf2e200();
                    /* WARNING: Could not recover jumptable at 0x00010c12d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removePersistenceData_112629090);
  return;
}



/* Entry: 105dae2d0; end: 105dae2d3; -[SCPreviewFeatureSnapRecoveryPersistenceImpl snapEditor:didInitiateExportWithType:] */

void FUN_105dae2d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelPersistenceAndRemoveData_1125a9430);
  return;
}



/* Entry: 105dae2d4; end: 105dae4fb; -[SCPreviewFeatureSnapRecoveryPersistenceImpl activate] */

void FUN_105dae2d4(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c075080();
  if ((uVar3 & 1) != 0) {
    uVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c07e620();
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1 + 0x18;
      _objc_loadWeakRetained();
      uVar5 = uVar4;
      func_0x00010c073e40();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) {
        _objc_initWeak(auStack_58,param_1);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_105dae4fc;
        puStack_70 = &UNK_110846540;
        uStack_60 = 0;
        _objc_copyWeak(auStack_68,auStack_58);
        ppuVar6 = &puStack_88;
        _objc_retainBlock(ppuVar6);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010bf80ce0();
        if (iVar1 == 0) {
          puVar7 = PTR_PTR_1126b6ae8;
          func_0x00010c22ba80(PTR_PTR_1126b6ae8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126ae960;
          puVar8 = PTR_PTR_1126c49a0;
          func_0x00010c124380(PTR_PTR_1126c49a0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c110380(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126ae970;
          func_0x00010c0c7320(PTR_PTR_1126ae970);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c11de00(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a14e0(puVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        else {
          func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38));
        }
        _objc_release(ppuVar6);
        _objc_destroyWeak(auStack_68);
        _objc_destroyWeak(auStack_58);
      }
      return;
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105dae4fc; end: 105dae64f;  */

void FUN_105dae4fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x28) & 1) == 0)) {
    lVar1 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf5aac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c096b40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010be73220(param_1,param_2,param_3,lVar3,lVar2,lVar5,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_2 + 0x20) = lVar8;
    _objc_release(uVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dae650; end: 105dae657; -[SCPreviewFeatureSnapRecoveryPersistenceImpl responderChainPriority] */

undefined8 FUN_105dae650(void)

{
  return 0x7fffffff;
}



/* Entry: 105dae658; end: 105dae77b; -[SCPreviewFeatureSnapRecoveryPersistenceImpl _persistImage:userSession:timestamp:captureSessionID:lensSessionID:] */

void FUN_105dae658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c26b240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b8020(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar3 != 0) {
    uVar4 = param_3;
    func_0x000108eb5cc8(param_3,0x5a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e080();
    _objc_retain(lVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105dae77c; end: 105dae7db; -[SCPreviewFeatureSnapRecoveryPersistenceImpl .cxx_destruct] */

void FUN_105dae77c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dae7dc; end: 105dae973; -[SCPreviewFeatureSnapRecoveryPersistenceServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dae7dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1 + _DAT_11273636c;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c49b0;
  _objc_alloc(PTR_PTR_1126c49b0);
  func_0x00010c0483c0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112736384);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105dae974; end: 105daeaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dae974(long param_1,undefined8 param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126c49a8;
    _objc_alloc();
    lVar2 = lVar1 + _DAT_112736370;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112736374;
    _objc_loadWeakRetained(lVar4);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = lVar1 + _DAT_112736378;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c242aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + _DAT_11273637c;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e220(puVar11,param_2,lVar3,lVar4,uVar12,lVar8,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105daeaf4; end: 105daeb6b; -[SCPreviewFeatureSnapRecoveryPersistenceServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105daeaf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736384,0);
  _objc_destroyWeak(param_1 + _DAT_112736380);
  _objc_destroyWeak(param_1 + _DAT_11273637c);
  _objc_destroyWeak(param_1 + _DAT_112736378);
  _objc_destroyWeak(param_1 + _DAT_112736374);
  _objc_destroyWeak(param_1 + _DAT_112736370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273636c);
  return;
}



/* Entry: 105daeb6c; end: 105daef97; -[SCPreviewFeatureInfoStickerImpl initWithStickerContainer:userSession:previewScopeServices:previewABServices:stickerLogger:commonLoggingParamsBuilder:customStoriesDataMutator:customStoriesDataFetcher:imageDownloader:webAttachmentFeature:attachmentStickerFeature:remixSettingsService:circumstanceEngine:valdiRuntimeProvider:itemViewService:userTaggingFriendsProvider:userTaggingCarousel:creativeToolsABProvider:stickerInjector:] */

undefined8 *
FUN_105daeb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126ed150;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 1,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_7);
    _objc_storeWeak(puVar1 + 3,param_8);
    *(undefined1 *)(puVar1 + 0xc) = 1;
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_12);
    _objc_storeWeak(puVar1 + 7);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 105daef98; end: 105daefd7; -[SCPreviewFeatureInfoStickerImpl configureWithView:] */

void FUN_105daef98(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2737a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x28,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105daefd8; end: 105daefdf; -[SCPreviewFeatureInfoStickerImpl responderChainPriority] */

undefined8 FUN_105daefd8(void)

{
  return 0x7fffffff;
}


