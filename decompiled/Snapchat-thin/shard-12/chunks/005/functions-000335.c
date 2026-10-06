/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091b747c; end: 1091b7483; -[SCLensCarouselUIController pointInsideAnyLensView:] */

void FUN_1091b747c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf0),PTR_s_pointInsideAnyLensView__11261e510);
  return;
}



/* Entry: 1091b7484; end: 1091b7533; -[SCLensCarouselUIController showTapToDownloadHint:animated:] */

void FUN_1091b7484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c23a700(*(undefined8 *)(param_1 + 0xd0));
  lVar1 = param_1;
  func_0x00010bdcd9c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c098000(lVar2,param_2,lVar3,2,param_3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091b7534; end: 1091b753f; -[SCLensCarouselUIController cleanup] */

void FUN_1091b7534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x110),PTR_s_didHideLensesWithContext__1125bb688,0);
  return;
}



/* Entry: 1091b7540; end: 1091b756b; -[SCLensCarouselUIController _setupCarouselFeaturesOnDidTurnOffLens] */

void FUN_1091b7540(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28a360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b756c; end: 1091b75eb; -[SCLensCarouselUIController showCallToActionViewForLens:] */

void FUN_1091b756c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c093ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0926e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2364c0();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b75ec; end: 1091b75f3; -[SCLensCarouselUIController closeButtonSetHiddenByLens] */

undefined1 FUN_1091b75ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 1091b75f4; end: 1091b7637; -[SCLensCarouselUIController appliedLensId] */

void FUN_1091b75f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdcd9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b7638; end: 1091b764f; -[SCLensCarouselUIController parentView] */

void FUN_1091b7638(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091b7650; end: 1091b7677; -[SCLensCarouselUIController hidableViewContainer] */

void FUN_1091b7650(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b7678; end: 1091b769f; -[SCLensCarouselUIController lensCarouselContainerView] */

void FUN_1091b7678(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b76a0; end: 1091b76db; -[SCLensCarouselUIController activeLens] */

void FUN_1091b76a0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b76dc; end: 1091b771b; -[SCLensCarouselUIController setActiveLens:] */

void FUN_1091b76dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x108);
  return;
}



/* Entry: 1091b771c; end: 1091b777b; -[SCLensCarouselUIController _appliedLens] */

void FUN_1091b771c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1091b777c; end: 1091b7833; -[SCLensCarouselUIController _setupLensProcessingConsumers] */

void FUN_1091b777c(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0e33e0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1091b7834; end: 1091b7987;  */

void FUN_1091b7834(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf7dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091b7988; end: 1091b79bb;  */

void FUN_1091b7988(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beab740(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b79bc; end: 1091b79c3; -[SCLensCarouselUIController _resetLensProcessingConsumers] */

void FUN_1091b79bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xc0),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1091b79c4; end: 1091b79cb; -[SCLensCarouselUIController legacyUiUpdateAnnouncer] */

undefined8 FUN_1091b79c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1091b79cc; end: 1091b7b43; -[SCLensCarouselUIController .cxx_destruct] */

void FUN_1091b79cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b7b44; end: 1091b7bb7; -[SCWindowTrackingView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091b7b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700c28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112782c5c),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b7bb8; end: 1091b7bf3; -[SCWindowTrackingView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b7bb8(long param_1)

{
  param_1 = param_1 + _DAT_112782c5c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29cb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b7bf4; end: 1091b7c4f; -[SCWindowTrackingView willMoveToWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b7bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112782c5c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29bf60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b7c50; end: 1091b7c57; -[SCWindowTrackingView hitTest:withEvent:] */

undefined8 FUN_1091b7c50(void)

{
  return 0;
}



/* Entry: 1091b7c58; end: 1091b7c67; -[SCWindowTrackingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b7c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112782c5c);
  return;
}



/* Entry: 1091b7c68; end: 1091b7d03; -[SCLensCarouselCameraTimerLayoutProvider initWithLensCarouselContainerView:cameraTimer:] */

undefined1 *
FUN_1091b7c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700c30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x00010bead6a0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b7d04; end: 1091b7d2b; -[SCLensCarouselCameraTimerLayoutProvider cameraTimerLayoutGuide] */

void FUN_1091b7d04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b7d2c; end: 1091b7d33; -[SCLensCarouselCameraTimerLayoutProvider updateLayoutForMiniCameraActive:] */

void FUN_1091b7d2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActiveConstraints_1125923a0);
  return;
}



/* Entry: 1091b7d34; end: 1091b7d9f; -[SCLensCarouselCameraTimerLayoutProvider _setupLayout] */

void FUN_1091b7d34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bead700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beab5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__setupCameraTimerWindowTrackingV_112588710);
      return;
    }
  }
  return;
}



/* Entry: 1091b7da0; end: 1091b7e07; -[SCLensCarouselCameraTimerLayoutProvider _setupLayoutGuide] */

void FUN_1091b7da0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bef9680();
  _objc_release(lVar2);
  func_0x00010beac900(param_1);
  func_0x00010beab580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActiveConstraints_1125923a0);
  return;
}



/* Entry: 1091b7e08; end: 1091b7fef; -[SCLensCarouselCameraTimerLayoutProvider _setupFallbackConstraints] */

/* WARNING: Possible PIC construction at 0x0001091b80fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001091b8118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001091b8134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001091b811c) */
/* WARNING: Removing unreachable block (ram,0x0001091b8100) */
/* WARNING: Removing unreachable block (ram,0x0001091b8138) */

void FUN_1091b7e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08e400(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(param_5 + 0x30) = uVar9;
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_5 + 0x38) = uVar9;
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(param_5 + 0x40) = uVar9;
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(param_5 + 0x48) = uVar9;
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x38);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + 0x28);
  *(undefined **)(param_5 + 0x28) = puVar4;
  _objc_release(uVar9);
  func_0x00010bed7ce0(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar1 + 8;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar7 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    if (lVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    lVar5 = lVar1 + 0x10;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      lVar3 = lVar1 + 0x10;
      _objc_loadWeakRetained(lVar3);
      _objc_retain();
      func_0x00010bf20c00(lVar3);
      lVar7 = lVar1 + 8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf51460(uVar2,param_2,param_3,param_4,lVar3);
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(lVar3);
      _CGRectGetMinX(uVar2,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar1 + 0x30),PTR_s_setConstant__11263de70);
      return;
    }
  }
  return;
}



/* Entry: 1091b7ff0; end: 1091b81a7; -[SCLensCarouselCameraTimerLayoutProvider _updateFallbackConstraintsIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001091b80fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001091b8118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001091b8134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001091b811c) */
/* WARNING: Removing unreachable block (ram,0x0001091b8100) */
/* WARNING: Removing unreachable block (ram,0x0001091b8138) */

void FUN_1091b7ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_5 + 0x10;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    lVar3 = param_5 + 0x10;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar1);
      _objc_retain();
      func_0x00010bf20c00(lVar1);
      lVar2 = param_5 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf51460(param_1,param_2,param_3,param_4,lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar1);
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_5 + 0x30),PTR_s_setConstant__11263de70);
      return;
    }
  }
  return;
}



/* Entry: 1091b81a8; end: 1091b83fb; -[SCLensCarouselCameraTimerLayoutProvider _setupCameraTimerConstraints] */

void FUN_1091b81a8(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar17;
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = lVar2 + 0x10;
  _objc_loadWeakRetained();
  lVar6 = lVar20;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(lVar20);
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x50);
    _objc_release();
    _objc_release(lVar20);
    if ((bVar1 & 1) == 0) {
      lVar20 = 0x20;
      goto LAB_1091b845c;
    }
  }
  lVar20 = 0x28;
LAB_1091b845c:
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(lVar2 + lVar20));
  return;
}



/* Entry: 1091b83fc; end: 1091b8483; -[SCLensCarouselCameraTimerLayoutProvider _updateActiveConstraints] */

void FUN_1091b83fc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar3);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x50);
    _objc_release();
    _objc_release(lVar3);
    if ((bVar1 & 1) == 0) {
      lVar3 = 0x20;
      goto LAB_1091b845c;
    }
  }
  lVar3 = 0x28;
LAB_1091b845c:
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1091b8484; end: 1091b86c7; -[SCLensCarouselCameraTimerLayoutProvider _setupCameraTimerWindowTrackingView] */

void FUN_1091b8484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126ddb60;
  _objc_alloc();
  func_0x00010c00a2c0();
  func_0x00010c219b60();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_88 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_80 = puVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  puStack_78 = puVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = 4;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(lVar16);
  if ((lVar16 == 0) && ((puVar2[0x50] & 1) == 0)) {
    func_0x00010bed7ce0(puVar2);
  }
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 1091b86c8; end: 1091b8723; -[SCLensCarouselCameraTimerLayoutProvider view:willMoveToWindow:] */

void FUN_1091b86c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    func_0x00010bed7ce0(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091b8724; end: 1091b8727; -[SCLensCarouselCameraTimerLayoutProvider viewDidMoveToWindow:] */

void FUN_1091b8724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActiveConstraints_1125923a0);
  return;
}



/* Entry: 1091b8728; end: 1091b87a3; -[SCLensCarouselCameraTimerLayoutProvider .cxx_destruct] */

void FUN_1091b8728(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1091b87a4; end: 1091b8863; -[SCLensSubPickerBaseCell initWithFrame:] */

undefined8 * FUN_1091b87a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700c38;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1faf00(puVar1);
    _objc_release(puVar2);
    func_0x00010c1fb6c0(puVar1);
    func_0x00010c1fb9e0(puVar1);
    func_0x00010c17c0e0(puVar1);
    func_0x00010c18ec60(puVar1);
  }
  return puVar1;
}



/* Entry: 1091b8864; end: 1091b895b; -[SCLensSubPickerBaseCell initializeLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b8864(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_112782c90;
  if (*(long *)(param_2 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  param_1 = param_1 + -28.0;
  dVar4 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  _CGRectIntegral(dVar4,(param_1 + -28.0) * 0.5,0x403c000000000000,0x403c000000000000);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c1a8560(*(undefined8 *)(param_2 + lVar3),param_3,1);
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091b895c; end: 1091b8fc3; -[SCLensSubPickerBaseCell initizlizeImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b895c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  double dVar10;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112782c94;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar7));
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar6);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar7));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar1);
    lVar7 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    lVar7 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar9 = (long)_DAT_112782c98;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar6);
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar9));
    lVar7 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    dVar10 = 0.0;
    func_0x00010c013de0(0,0,0x4034000000000000,0x4034000000000000);
    lVar8 = (long)_DAT_112782c9c;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar6);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8));
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar8));
    _CGRectGetHeight();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar10 * 0.5);
    _objc_release(uVar6);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
    lVar7 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar9 = (long)_DAT_112782ca0;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8));
    puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar7 = *(long *)(param_1 + lVar9);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    lStack_c8 = lVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    lStack_d8 = lVar7;
    lStack_c0 = lVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    uStack_e0 = uVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    uStack_f0 = uVar3;
    uStack_b8 = uVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar6;
    func_0x00010bf49420(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    uStack_100 = uVar6;
    uStack_b0 = uVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar3;
    func_0x00010bf49420(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    uStack_118 = uVar3;
    uStack_a8 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    uStack_128 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lStack_120 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_130 = lVar7;
    func_0x00010bf493c0(0xc01c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    uStack_a0 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493c0(0xc01c000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(long *)(param_1 + lVar8);
    uStack_98 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = unaff_x20;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = *(undefined8 *)(param_1 + lVar8);
    lStack_90 = lVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x19;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_108);
    _objc_release(puVar1);
    _objc_release(unaff_x22);
    _objc_release(unaff_x19);
    _objc_release(lVar7);
    _objc_release(unaff_x20);
    _objc_release(uVar6);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lStack_130);
    _objc_release(lStack_120);
    _objc_release(uStack_128);
    _objc_release(uStack_118);
    _objc_release(uStack_110);
    _objc_release(uStack_100);
    _objc_release(uStack_f8);
    _objc_release(uStack_f0);
    _objc_release(uStack_e8);
    _objc_release(uStack_e0);
    _objc_release(lStack_d8);
    _objc_release(uStack_d0);
    param_1 = lStack_c8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1091b8fc4;
  puStack_168 = PTR_PTR_112700c38;
  lStack_170 = param_1;
  uStack_160 = unaff_x22;
  lStack_158 = lVar7;
  lStack_150 = unaff_x20;
  uStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_170,PTR_s_prepareForReuse_112620008);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112782ca4);
  *(undefined8 *)(param_1 + _DAT_112782ca4) = 0;
  _objc_release(uVar6);
  func_0x00010c1bec60(param_1);
  *(undefined1 *)(param_1 + _DAT_112782ca8) = 0;
  *(undefined1 *)(param_1 + _DAT_112782cac) = 0;
  lVar7 = (long)_DAT_112782c98;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar6);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112782c9c));
  return;
}



/* Entry: 1091b8fc4; end: 1091b90a7; -[SCLensSubPickerBaseCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b8fc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112700c38;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112782ca4);
  *(undefined8 *)(param_1 + _DAT_112782ca4) = 0;
  _objc_release(uVar1);
  func_0x00010c1bec60(param_1);
  *(undefined1 *)(param_1 + _DAT_112782ca8) = 0;
  *(undefined1 *)(param_1 + _DAT_112782cac) = 0;
  lVar2 = (long)_DAT_112782c98;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112782c9c));
  return;
}



/* Entry: 1091b90a8; end: 1091b90b7; -[SCLensSubPickerBaseCell image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b90a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112782c94),PTR_s_image_1125d7478);
  return;
}



/* Entry: 1091b90b8; end: 1091b9147; -[SCLensSubPickerBaseCell setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b90b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782ca4);
  *(undefined8 *)(param_1 + _DAT_112782ca4) = 0;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_112782c94;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_3);
  if (param_3 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf38780();
    uVar2 = 0x3ff0000000000000;
    if ((int)lVar1 == 0) {
      uVar2 = 0x3feccccccccccccd;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,*(undefined8 *)(param_1 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1091b9148; end: 1091b9157; -[SCLensSubPickerBaseCell setSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9148(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112782c88) = param_3;
  return;
}



/* Entry: 1091b9158; end: 1091b925b; -[SCLensSubPickerBaseCell setChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9158(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [48];
  
  *(undefined1 *)(param_1 + _DAT_112782cac) = param_3;
  if (*(long *)(param_1 + _DAT_112782c94) != 0) {
    func_0x00010bde58a0();
    func_0x00010c15a300(auStack_60,param_1);
    uVar2 = 0;
    _CGAffineTransformIsIdentity();
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(auStack_60,param_1);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_copyWeak(auStack_70,auStack_60);
      uStack_68 = param_3;
      func_0x00010bf03420(0x3fb99999a0000000,puVar1);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_60);
    }
  }
  return;
}



/* Entry: 1091b925c; end: 1091b92ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b925c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010c15a300(&uStack_50,lVar1);
    }
    else {
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(lVar1 + _DAT_112782c94),param_2,&uStack_80);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091b92f0; end: 1091b92f3;  */

void FUN_1091b92f0(void)

{
  return;
}



/* Entry: 1091b92f4; end: 1091b935b; -[SCLensSubPickerBaseCell setLoadingIndicatorActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b92f4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112782c94);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_112782c90),PTR_s_stopAnimating_112673058);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112782c90),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 1091b935c; end: 1091b94df; -[SCLensSubPickerBaseCell setImageFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b935c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112782ca4;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_1091b949c;
    }
    func_0x00010c1a9f00(param_1);
    if (param_3 != 0) {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010c1bec60(param_1);
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = param_3;
      _objc_release(uVar2);
      puVar3 = auStack_50;
      _objc_copyWeak(puVar3,auStack_48);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(param_3);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
LAB_1091b949c:
  _objc_release(param_3);
  return;
}



/* Entry: 1091b94e0; end: 1091b954b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b94e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_112782ca4) != 0)) {
    func_0x00010c1a9f00(param_1);
    func_0x00010c1bec60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091b954c; end: 1091b9633; -[SCLensSubPickerBaseCell setDisabled:] */

/* WARNING: Possible PIC construction at 0x0001091b95cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001091b95d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b954c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c15a8a0();
  if (((lVar1 == 1) && ((*(byte *)(param_1 + _DAT_112782cac) & 1) == 0)) &&
     (*(long *)(param_1 + _DAT_112782c94) != 0)) {
    if (*(byte *)(param_1 + _DAT_112782ca8) != param_3) {
      *(char *)(param_1 + _DAT_112782ca8) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_112782c98),PTR_s_setHidden__1126479f8,param_3 ^ 1);
      return;
    }
  }
  return;
}



/* Entry: 1091b9634; end: 1091b96ef; -[SCLensSubPickerBaseCell updateAccessibilityIdForIndexPath:] */

void FUN_1091b9634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf38780();
  lVar1 = 0x30;
  if ((int)uVar2 == 0) {
    lVar1 = 0x38;
  }
  uVar2 = *(undefined8 *)((long)&PTR_PTR_110c90b00 + lVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f30f38;
  _objc_retain(uVar2);
  func_0x00010c0840e0();
  _objc_release(param_3);
  func_0x00010c25cde0(&PTR____CFConstantStringClassReference_110f30f38,param_2,
                      &PTR____CFConstantStringClassReference_110f2b838);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c160fc0(param_1,param_2,ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 1091b96f0; end: 1091b98df; -[SCLensSubPickerBaseCell _configureSelectedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b96f0(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = (long)_DAT_112782cac;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112782c94));
  }
  else {
    lVar2 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3ff0000000000000;
    if (lVar2 != 0) {
      uVar5 = 0x3feccccccccccccd;
    }
    func_0x00010c1677c0(uVar5,*(undefined8 *)(param_1 + _DAT_112782c94));
    _objc_release(lVar2);
  }
  lVar4 = (long)_DAT_112782c98;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,
                      (*(byte *)(param_1 + lVar3) ^ 0xff) & 1);
  lVar2 = param_1;
  func_0x00010c15a8a0();
  if (lVar2 == 1) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112782c9c),param_2,
                        (*(byte *)(param_1 + lVar3) ^ 0xff) & 1);
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0);
    _objc_release(uVar5);
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c08c0e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
LAB_1091b98ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  if (lVar2 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112782c9c),param_2,1);
    uVar5 = 0x4010000000000000;
    if (*(char *)(param_1 + lVar3) == '\0') {
      uVar5 = 0;
    }
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c08c0e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar5);
    _objc_release(lVar2);
    bVar1 = *(byte *)(param_1 + lVar3);
    if (bVar1 == 1) {
      lVar2 = param_1;
      func_0x00010c159340(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
    }
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar5);
    if ((bVar1 & 1) != 0) goto LAB_1091b98ac;
  }
  return;
}



/* Entry: 1091b98e0; end: 1091b98ef; -[SCLensSubPickerBaseCell currentLoadingIndentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091b98e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782cb0);
}



/* Entry: 1091b98f0; end: 1091b992f; -[SCLensSubPickerBaseCell setCurrentLoadingIndentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b98f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782cb0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b9930; end: 1091b993f; -[SCLensSubPickerBaseCell checked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1091b9930(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112782cac);
}



/* Entry: 1091b9940; end: 1091b994f; -[SCLensSubPickerBaseCell disabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1091b9940(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112782ca8);
}



/* Entry: 1091b9950; end: 1091b995f; -[SCLensSubPickerBaseCell selectionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091b9950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782c88);
}



/* Entry: 1091b9960; end: 1091b996f; -[SCLensSubPickerBaseCell selectedBorderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091b9960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782cb4);
}



/* Entry: 1091b9970; end: 1091b99af; -[SCLensSubPickerBaseCell setSelectedBorderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782cb4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b99b0; end: 1091b99cf; -[SCLensSubPickerBaseCell selectedTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b99b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112782c8c);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 1091b99d0; end: 1091b99ef; -[SCLensSubPickerBaseCell setSelectedTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b99d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112782c8c);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 1091b99f0; end: 1091b9a8f; -[SCLensSubPickerBaseCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b99f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782cb4,0);
  _objc_storeStrong(param_1 + _DAT_112782cb0,0);
  _objc_storeStrong(param_1 + _DAT_112782ca0,0);
  _objc_storeStrong(param_1 + _DAT_112782c9c,0);
  _objc_storeStrong(param_1 + _DAT_112782c98,0);
  _objc_storeStrong(param_1 + _DAT_112782ca4,0);
  _objc_storeStrong(param_1 + _DAT_112782c90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782c94,0);
  return;
}



/* Entry: 1091b9a90; end: 1091b9ae7; -[SCLensSubPickerImageCell initWithFrame:] */

undefined1 * FUN_1091b9a90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700c40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c064f60(puVar1);
    func_0x00010c064900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091b9ae8; end: 1091b9b7b; -[SCLensSubPickerImageCell updateAccessibilityIdForIndexPath:] */

void FUN_1091b9ae8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112700c40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_updateAccessibilityIdForIndexPat_11267e6d8);
  uVar1 = param_1;
  func_0x00010beecec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1091b9b7c; end: 1091b9bdb; -[SCLensSubPickerVideoCell initWithFrame:] */

undefined1 * FUN_1091b9b7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700c48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c064f60(puVar1);
    func_0x00010c064900(puVar1);
    func_0x00010c064880(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091b9bdc; end: 1091b9eef; -[SCLensSubPickerVideoCell initializeDurationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9bdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar13 = (long)_DAT_112782cb8;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar11);
  lVar12 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar12);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf493c0(0xc014000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493c0(0xc000000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar13));
  _objc_release(puVar1);
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar11);
  _objc_release(puVar1);
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4000000000000000);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f333333);
  _objc_release(uVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar13));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_112782cbc;
  if (*(long *)(puVar1 + lVar12) != 0) {
    return;
  }
  puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  puVar9 = puVar1;
  func_0x00010bf4dce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  uVar11 = *(undefined8 *)(puVar1 + lVar12);
  *(undefined **)(puVar1 + lVar12) = puVar8;
  _objc_release(uVar11);
  _objc_release(puVar9);
  func_0x00010befbb60(puVar1);
  uVar11 = *(undefined8 *)(puVar1 + lVar12);
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar11);
  _objc_release(puVar8);
  func_0x00010befbd60(*(undefined8 *)(puVar1 + lVar12));
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + lVar12),PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110f30f58);
  return;
}



/* Entry: 1091b9ef0; end: 1091b9feb; -[SCLensSubPickerVideoCell loadEditButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9ef0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112782cbc;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010befbb60(param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110f30f58);
  return;
}



/* Entry: 1091b9fec; end: 1091b9ffb; -[SCLensSubPickerVideoCell setDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112782cb8),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 1091b9ffc; end: 1091ba00b; -[SCLensSubPickerVideoCell setEditingEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091b9ffc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112782cc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2855d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateEditButtonState_11267ef98);
  return;
}



/* Entry: 1091ba00c; end: 1091ba053; -[SCLensSubPickerVideoCell setSelected:] */

void FUN_1091ba00c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700c48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598);
  func_0x00010c2855c0(param_1);
  return;
}



/* Entry: 1091ba054; end: 1091ba0a3; -[SCLensSubPickerVideoCell setChecked:] */

void FUN_1091ba054(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700c48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setChecked__11263ca58);
  func_0x00010c2855c0(param_1);
  func_0x00010c285580(param_1);
  return;
}



/* Entry: 1091ba0a4; end: 1091ba0db; -[SCLensSubPickerVideoCell editButtonTapped] */

void FUN_1091ba0a4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2996c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ba0dc; end: 1091ba133; -[SCLensSubPickerVideoCell updateEditButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ba0dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf38780();
  if (((int)lVar1 == 0) || (*(char *)(param_1 + _DAT_112782cc0) != '\x01')) {
    uVar2 = 1;
  }
  else {
    func_0x00010c09b400(param_1);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112782cbc),PTR_s_setHidden__1126479f8,uVar2);
  return;
}



/* Entry: 1091ba134; end: 1091ba17b; -[SCLensSubPickerVideoCell updateDurationLabelState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ba134(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c15a8a0();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bf38780(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112782cb8),PTR_s_setHidden__1126479f8,lVar1);
  return;
}



/* Entry: 1091ba17c; end: 1091ba20f; -[SCLensSubPickerVideoCell updateAccessibilityIdForIndexPath:] */

void FUN_1091ba17c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112700c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_updateAccessibilityIdForIndexPat_11267e6d8);
  uVar1 = param_1;
  func_0x00010beecec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1091ba210; end: 1091ba21f; -[SCLensSubPickerVideoCell editingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1091ba210(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112782cc0);
}



/* Entry: 1091ba220; end: 1091ba23f; -[SCLensSubPickerVideoCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ba220(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112782cc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091ba240; end: 1091ba253; -[SCLensSubPickerVideoCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ba240(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112782cc4,param_3);
  return;
}



/* Entry: 1091ba254; end: 1091ba29f; -[SCLensSubPickerVideoCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ba254(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112782cc4);
  _objc_storeStrong(param_1 + _DAT_112782cbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782cb8,0);
  return;
}



/* Entry: 1091ba2a0; end: 1091ba6e3; -[SCLensMediaAndPresetPickerControllerV2 initWithBottomViewContainer:lensLogger:presetsComponent:externalImageComponent:effectSuspendable:photoFaceImageProvider:lensCrashLogger:photoPermissionCoordinator:standardPickerUIContainer:videoEditingUIContainer:standardMediaPickerMediaTypes:mediaAssetManager:videoEditingLauncher:videoEditingScopeServices:videoEditingEnabled:modalPresentationEnabled:batchSize:hideArrow:lensOptionSourceType:imageTrackingCompressionLevel:selectionLimit:didEnterBackgroundObservable:studySettingsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091ba2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined *puStack_b8;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  if (param_14 == 0) {
    puStack_b8 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ddb68;
    _objc_alloc();
    func_0x00010c056f20();
    puVar2 = puVar1;
    func_0x00010bf570e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c24d860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    puStack_b8 = puVar2;
    func_0x00010c0fbb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0649e0(param_2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puStack_80 = PTR_PTR_112700c50;
  puVar3 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithBottomViewContainer_lens_11253fc90,param_4,param_5,
                      param_9,param_7,puVar6,puStack_b8,param_15,param_18);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112782cc8;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_6;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112782ccc;
    _objc_retain(param_10);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_10;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112782cd0;
    _objc_retain(param_11);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_11;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112782cd4;
    _objc_retain(param_13);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_13;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112782cd8;
    _objc_retain(param_16);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_16;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112782cdc;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_17;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112782ce0);
    *(undefined **)((long)puVar3 + (long)_DAT_112782ce0) = puVar1;
    _objc_release(uVar4);
    _objc_storeWeak((long)puVar3 + (long)_DAT_112782ce4,param_8);
    *(undefined8 *)((long)puVar3 + (long)_DAT_112782ce8) = param_1;
    *(undefined4 *)((long)puVar3 + (long)_DAT_112782cec) = 0;
    lVar5 = (long)_DAT_112782cf0;
    _objc_retain(in_stack_00000078);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = in_stack_00000078;
    _objc_release(uVar4);
  }
  _objc_release(puStack_b8);
  _objc_release(puVar6);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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
  return puVar3;
}



/* Entry: 1091ba6e4; end: 1091baa5f; -[SCLensMediaAndPresetPickerControllerV2 initializePickerFeature:resultFeatures:modalPresentationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ba6e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112782cf4);
  *(undefined **)(param_1 + _DAT_112782cf4) = puVar2;
  _objc_release(uVar6);
  _objc_initWeak(auStack_80,param_1);
  _objc_initWeak(auStack_88,param_3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1091baa60;
  puStack_a0 = &UNK_1108fa1a0;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_copyWeak(auStack_90,auStack_88);
  uVar6 = param_5;
  func_0x00010c25ff60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  uVar6 = uVar1;
  func_0x00010bef0d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1091bac70;
  puStack_c8 = &UNK_110adfb58;
  _objc_copyWeak(auStack_c0,auStack_80);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_initWeak(auStack_e8,param_4);
  uVar6 = uVar1;
  func_0x00010c158ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_80);
  _objc_copyWeak(auStack_f0,auStack_e8);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091baa60; end: 1091baba3;  */

void FUN_1091baa60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x00010c1598a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        _objc_copyWeak(auStack_48,param_1 + 0x20);
        _objc_retain(lVar4);
        func_0x00010c1491a0(lVar1);
        _objc_release(lVar4);
        _objc_destroyWeak(auStack_48);
      }
      func_0x00010bf1f3c0(param_2);
      func_0x00010c195460(lVar2);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091baba4; end: 1091bac6b;  */

void FUN_1091baba4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfe7100(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0(lVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1091bac6c; end: 1091bac6f;  */

void FUN_1091bac6c(void)

{
  return;
}



/* Entry: 1091bac70; end: 1091badd7;  */

void FUN_1091bac70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  if (lVar1 != 0) {
    func_0x00010c0fbae0(param_2);
    func_0x00010bfed020();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1091badd8;
    puStack_60 = &UNK_1108434b0;
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    _objc_copyWeak(auStack_80,param_1 + 0x20);
    _objc_retain(param_2);
    _objc_retain(puVar2);
    func_0x00010c1491a0(lVar1);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091badd8; end: 1091bae53;  */

void FUN_1091badd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091bae54; end: 1091bae9b;  */

void FUN_1091bae54(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bef0100();
    if (iVar1 != 0) {
      func_0x00010c158ee0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1091bae9c; end: 1091bb13f;  */

void FUN_1091bae9c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1091bb0fc;
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar3 = param_2;
    func_0x00010c0fbae0();
    uVar4 = param_2;
    func_0x00010c159240();
    if (((int)uVar4 != 0) && (uVar4 = uVar2, func_0x00010bf529e0(), uVar3 < uVar4)) {
      func_0x00010c1fb400(lVar1);
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c29bb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == 0) {
        uVar4 = uVar3;
        func_0x00010bfe7ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar4 != 0) {
          uVar4 = uVar3;
          func_0x00010bfe7ce0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = auStack_90;
          _objc_copyWeak(puVar8,param_1 + 0x20);
          _objc_retain(puVar5);
          uVar6 = uVar3;
          _objc_retain(uVar3);
          func_0x000107c30a80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(uVar4);
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar3);
          puVar7 = puVar5;
          goto LAB_1091bb0d8;
        }
      }
      else {
        uVar4 = uVar3;
        func_0x00010c29bb60();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_1091bb140;
        puStack_70 = &UNK_110adfb88;
        puVar8 = auStack_58;
        _objc_copyWeak(puVar8,param_1 + 0x20);
        _objc_retain(puVar5);
        uVar6 = uVar3;
        puStack_68 = puVar5;
        _objc_retain(uVar3);
        uStack_60 = uVar3;
        func_0x000107c30a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar4);
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(uStack_60);
        puVar7 = puStack_68;
LAB_1091bb0d8:
        _objc_release(puVar7);
        _objc_destroyWeak(puVar8);
      }
      _objc_release(uVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(uVar2);
LAB_1091bb0fc:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091bb140; end: 1091bb243;  */

void FUN_1091bb140(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0fb940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be86cc0(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091bb244; end: 1091bb2e7; -[SCLensMediaAndPresetPickerControllerV2 safeCollectionUpdate:completion:] */

void FUN_1091bb244(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c06eb80();
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar1 == 0) {
    func_0x00010c128b60();
    _objc_release(param_1);
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    func_0x00010c0f8420();
    _objc_release(param_4);
    param_4 = param_1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091bb2e8; end: 1091bb34b; -[SCLensMediaAndPresetPickerControllerV2 dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bb2e8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112782ce4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13d800();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_112700c50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091bb34c; end: 1091bb7b7; -[SCLensMediaAndPresetPickerControllerV2 setUpWarningMessageLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bb34c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 auStack_300 [8];
  undefined1 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((puVar2 != (undefined *)0x0) &&
     (lVar28 = (long)_DAT_112782cf8, *(long *)(param_1 + lVar28) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    *(undefined **)(param_1 + lVar28) = puVar1;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar28));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar28));
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar28));
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar28));
    puVar1 = param_1;
    func_0x00010c25e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = *(undefined **)(param_1 + lVar28);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf49420(0x4061800000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1e3380(0x443b8000,puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar3;
    func_0x00010bf493c0(0x403c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar11;
    func_0x00010bf493c0(0xc03c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar18;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar23);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(param_1);
    _objc_release(uVar15);
    _objc_release(uVar22);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar27);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((puVar4 != (undefined *)0x0) &&
     (lVar28 = (long)_DAT_112782cfc, *(long *)(puVar1 + lVar28) == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(puVar1 + lVar28);
    *(undefined **)(puVar1 + lVar28) = puVar2;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar28));
    puVar2 = puVar1;
    func_0x00010c25e720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c25e720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar19);
    _objc_release(uVar23);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar22);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar27);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar4);
    func_0x00010c213040(puVar2);
    func_0x00010c1cfce0(puVar2);
    ppuVar20 = &PTR____CFConstantStringClassReference_110f2b8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f2b8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(ppuVar20);
    func_0x00010befbb60(*(undefined8 *)(puVar1 + lVar28));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c274200(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010bf34860(uVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar16);
    _objc_release(uVar23);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar22);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar21);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(uVar27);
    _objc_release(puVar5);
    puVar18 = PTR_PTR_1126af938;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar18);
    _objc_release(puVar4);
    puVar5 = puVar18;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar18);
    _objc_release(puVar4);
    ppuVar20 = &PTR____CFConstantStringClassReference_110e286f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e286f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar18);
    _objc_release(ppuVar20);
    func_0x00010befbd60(puVar18);
    puVar4 = puVar18;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar4);
    func_0x00010befbb60(*(undefined8 *)(puVar1 + lVar28));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar24 = puVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010bf49420(0x4066e00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar19;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf493c0(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(puVar1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bf493c0(0xc037000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar8;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar16;
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(uVar22);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar21);
    _objc_release(puVar10);
    _objc_release(puVar12);
    _objc_release(uVar27);
    _objc_release(puVar13);
    _objc_release(puVar14);
    _objc_release(puVar19);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    puVar1 = puVar2;
    func_0x00010bf9e160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      puStack_330 = PTR_PTR_112700c50;
      ppuVar20 = &puStack_338;
      puStack_338 = puVar2;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if ((puVar1 != (undefined *)0x2) &&
         (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
         puVar1 != (undefined *)0x1)) {
        _objc_initWeak(auStack_2b8,puVar2);
        uVar27 = *(undefined8 *)(puVar2 + _DAT_112782cd0);
        func_0x00010c269d40(uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2e8 = 0xc2000000;
        pcStack_2e0 = FUN_1091bc330;
        puStack_2d8 = &UNK_1108488f8;
        _objc_copyWeak(auStack_2c8,auStack_2b8);
        puStack_328 = puVar1;
        uStack_320 = 0xc2000000;
        pcStack_318 = FUN_1091bc470;
        puStack_310 = &UNK_1108488f8;
        puStack_2d0 = puVar2;
        uStack_2c0 = (char)param_3;
        _objc_copyWeak(auStack_300,auStack_2b8);
        puStack_308 = puVar2;
        uStack_2f8 = (char)param_3;
        func_0x00010bf37c20(uVar27);
        _objc_release(uVar27);
        _objc_destroyWeak(auStack_300);
        _objc_destroyWeak(auStack_2c8);
        _objc_destroyWeak(auStack_2b8);
        return;
      }
      func_0x00010c1db480(puVar2);
      puStack_2a8 = PTR_PTR_112700c50;
      ppuVar20 = &puStack_2b0;
      puStack_2b0 = puVar2;
    }
    _objc_msgSendSuper2(ppuVar20,PTR_s_showAnimated__11266b178,param_3);
    return;
  }
  return;
}



/* Entry: 1091bb7b8; end: 1091bc16f; -[SCLensMediaAndPresetPickerControllerV2 setUpPhotoAccessPromptView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bb7b8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  if ((puVar2 != (undefined *)0x0) &&
     (lVar28 = (long)_DAT_112782cfc, *(long *)(param_1 + lVar28) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    *(undefined **)(param_1 + lVar28) = puVar1;
    _objc_release(uVar27);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28));
    puVar1 = param_1;
    func_0x00010c25e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c25e720();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c25e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar18);
    _objc_release(uVar22);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar21);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar20);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar27);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
    func_0x00010c213040(puVar1);
    func_0x00010c1cfce0(puVar1);
    ppuVar19 = &PTR____CFConstantStringClassReference_110f2b8b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f2b8b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
    _objc_release(ppuVar19);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c274200(uVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf34860(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar15);
    _objc_release(uVar22);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar21);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar20);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(uVar27);
    _objc_release(puVar4);
    puVar18 = PTR_PTR_1126af938;
    _objc_alloc_init();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar18);
    _objc_release(puVar2);
    puVar2 = puVar18;
    func_0x00010c271420(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar18);
    _objc_release(puVar2);
    ppuVar19 = &PTR____CFConstantStringClassReference_110e286f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e286f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar18);
    _objc_release(ppuVar19);
    func_0x00010befbd60(puVar18);
    puVar2 = puVar18;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar23 = puVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf49420(0x4066e00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar25;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf493c0(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar18;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010bf493c0(0xc032000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf493c0(0xc037000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar18;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar5;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar16;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar21);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(uVar20);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(uVar27);
    _objc_release(puVar13);
    _objc_release(puVar15);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010bf9e160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puStack_230 = PTR_PTR_112700c50;
      ppuVar19 = &puStack_238;
      puStack_238 = puVar1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if ((puVar2 != (undefined *)0x2) &&
         (puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
         puVar2 != (undefined *)0x1)) {
        _objc_initWeak(auStack_1b8,puVar1);
        uVar27 = *(undefined8 *)(puVar1 + _DAT_112782cd0);
        func_0x00010c269d40(uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e8 = 0xc2000000;
        pcStack_1e0 = FUN_1091bc330;
        puStack_1d8 = &UNK_1108488f8;
        _objc_copyWeak(auStack_1c8,auStack_1b8);
        puStack_228 = puVar2;
        uStack_220 = 0xc2000000;
        pcStack_218 = FUN_1091bc470;
        puStack_210 = &UNK_1108488f8;
        puStack_1d0 = puVar1;
        uStack_1c0 = (char)param_3;
        _objc_copyWeak(auStack_200,auStack_1b8);
        puStack_208 = puVar1;
        uStack_1f8 = (char)param_3;
        func_0x00010bf37c20(uVar27);
        _objc_release(uVar27);
        _objc_destroyWeak(auStack_200);
        _objc_destroyWeak(auStack_1c8);
        _objc_destroyWeak(auStack_1b8);
        return;
      }
      func_0x00010c1db480(puVar1);
      puStack_1a8 = PTR_PTR_112700c50;
      ppuVar19 = &puStack_1b0;
      puStack_1b0 = puVar1;
    }
    _objc_msgSendSuper2(ppuVar19,PTR_s_showAnimated__11266b178,param_3);
    return;
  }
  return;
}



/* Entry: 1091bc170; end: 1091bc32f; -[SCLensMediaAndPresetPickerControllerV2 showAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bc170(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_e0 = PTR_PTR_112700c50;
    plVar3 = &lStack_e8;
    lStack_e8 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if ((puVar2 != (undefined *)0x2) &&
       (puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
       puVar2 != (undefined *)0x1)) {
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112782cd0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1091bc330;
      puStack_88 = &UNK_1108488f8;
      _objc_copyWeak(auStack_78,auStack_68);
      puStack_d8 = puVar2;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1091bc470;
      puStack_c0 = &UNK_1108488f8;
      lStack_80 = param_1;
      uStack_70 = (char)param_3;
      _objc_copyWeak(auStack_b0,auStack_68);
      lStack_b8 = param_1;
      uStack_a8 = (char)param_3;
      func_0x00010bf37c20(uVar4);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      return;
    }
    func_0x00010c1db480(param_1);
    puStack_58 = PTR_PTR_112700c50;
    plVar3 = &lStack_60;
    lStack_60 = param_1;
  }
  _objc_msgSendSuper2(plVar3,PTR_s_showAnimated__11266b178,param_3);
  return;
}



/* Entry: 1091bc330; end: 1091bc467;  */

void FUN_1091bc330(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07cd80();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c1db480(uVar1);
    uVar2 = uVar1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2d220();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 == 0) {
      uVar3 = uVar2;
      func_0x00010bfe72c0();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        func_0x00010c238ae0(uVar1);
      }
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1091bc468;
      puStack_40 = &UNK_110842e18;
      uStack_38 = uVar1;
      func_0x00010c2a2120(uVar2);
      _objc_release(uVar2);
    }
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR_PTR_112700c50;
    _objc_msgSendSuper2(&uStack_68,PTR_s_showAnimated__11266b178,*(undefined1 *)(param_1 + 0x30));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1091bc468; end: 1091bc46f;  */

void FUN_1091bc468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadNextBatch_112604938);
  return;
}



/* Entry: 1091bc470; end: 1091bc503;  */

void FUN_1091bc470(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07cd80();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010c1db480(uVar1);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    puStack_38 = PTR_PTR_112700c50;
    _objc_msgSendSuper2(&uStack_40,PTR_s_showAnimated__11266b178,*(undefined1 *)(param_1 + 0x30));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1091bc504; end: 1091bc5af; -[SCLensMediaAndPresetPickerControllerV2 hideAnimated:completion:] */

void FUN_1091bc504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_s_hideAnimated_completion__1125d5fe0;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091bc5b0;
  puStack_48 = &UNK_11084aaa8;
  puStack_68 = PTR_PTR_112700c50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = param_1;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_70,puVar1,param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091bc5b0; end: 1091bc613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bc5b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782cf8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782cf8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782cfc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112782cfc) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091bc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}


