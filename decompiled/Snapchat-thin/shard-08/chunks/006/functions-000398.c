/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063131ac; end: 10631341f; -[SCOperaPageLayoutGuide pinView:insets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063131ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010c219b60(param_7,param_6,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(param_1,lVar2,param_6,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_7;
  lStack_a8 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf1ff80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493c0(param_3,lVar5,param_6,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_7;
  lStack_a0 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c08de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf493c0(param_2,lVar8,param_6,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_7;
  lStack_98 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c2793a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf493c0(param_4,lVar11,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_6,puVar13);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(param_5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_1127459cc);
}



/* Entry: 106313420; end: 10631342f; -[SCOperaPageLayoutGuide topConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106313420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127459cc);
}



/* Entry: 106313430; end: 10631346f; -[SCOperaPageLayoutGuide setTopConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127459cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106313470; end: 10631347f; -[SCOperaPageLayoutGuide bottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106313470(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127459d0);
}



/* Entry: 106313480; end: 1063134bf; -[SCOperaPageLayoutGuide setBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127459d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063134c0; end: 1063134cf; -[SCOperaPageLayoutGuide leadingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063134c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127459d4);
}



/* Entry: 1063134d0; end: 10631350f; -[SCOperaPageLayoutGuide setLeadingConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063134d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127459d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106313510; end: 10631351f; -[SCOperaPageLayoutGuide trailingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106313510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127459d8);
}



/* Entry: 106313520; end: 10631355f; -[SCOperaPageLayoutGuide setTrailingConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127459d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106313560; end: 10631362f; -[SCOperaPageLayoutGuide .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313560(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127459d8,0);
  _objc_storeStrong(param_1 + _DAT_1127459d4,0);
  _objc_storeStrong(param_1 + _DAT_1127459d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127459cc,0);
  return;
}



/* Entry: 106313630; end: 106313733;  */

void FUN_106313630(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c9bb8;
  func_0x00010c113be0();
  if (((ulong)puVar1 & param_3) == 0) {
    puVar1 = PTR_PTR_1126c9bb8;
    func_0x00010c113b40();
    if ((((ulong)puVar1 & param_3) != 0) &&
       (uVar2 = param_2, func_0x00010c071f40(), (uVar2 & 1) == 0)) {
      func_0x00010c071f40(param_2);
    }
    puVar1 = PTR_PTR_1126c9bb8;
    func_0x00010c113ba0();
    if (((ulong)puVar1 & param_3) != 0) {
      func_0x00010c071f40(param_2);
    }
    puVar1 = PTR_PTR_1126c9bb8;
    func_0x00010c113bc0();
    if (((ulong)puVar1 & param_3) != 0) {
      func_0x00010c071f40(param_2);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106313734; end: 1063137db;  */

long FUN_106313734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  pcVar5 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_3);
  (*pcVar5)(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar3 + 0x10))(lVar3,param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010bf433a0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return lVar4;
}



/* Entry: 1063137dc; end: 10631385f; -[SCOperaPageableViewControllerVolumeHelper initWithDelegate:explicitMutePropagation:] */

undefined1 *
FUN_1063137dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0e68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0xbff0000000000000;
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106313860; end: 1063138d3; -[SCOperaPageableViewControllerVolumeHelper setVolume:] */

void FUN_106313860(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar3 = ABS(param_1 - *(double *)(param_2 + 8));
  dVar2 = ABS(param_1 + *(double *)(param_2 + 8)) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + 8) = param_1;
  param_2 = param_2 + 0x18;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0f2540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063138d4; end: 1063138db; -[SCOperaPageableViewControllerVolumeHelper volume] */

undefined8 FUN_1063138d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1063138dc; end: 10631394b; -[SCOperaPageableViewControllerVolumeHelper setMuted:] */

void FUN_1063138dc(long param_1,undefined8 param_2,uint param_3)

{
  if (((*(char *)(param_1 + 0x10) != '\x01') || (*(char *)(param_1 + 0x11) == '\x01')) &&
     (*(byte *)(param_1 + 0x20) == param_3)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(char *)(param_1 + 0x20) = (char)param_3;
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f2540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10631394c; end: 1063139cf; -[SCOperaPageableViewControllerVolumeHelper applyVolumeIfNeeded:] */

void FUN_10631394c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x10) != '\x01') || (*(char *)(param_1 + 0x11) == '\x01')) {
    func_0x00010c1ca6a0(param_3,param_2,*(undefined1 *)(param_1 + 0x20));
  }
  dVar3 = ABS(*(double *)(param_1 + 8));
  bVar1 = true;
  if ((*(double *)(param_1 + 8) < 0.0) && (bVar1 = false, !NAN(dVar3))) {
    bVar1 = dVar3 < 2.2250738585072014e-308;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = false, !NAN(dVar3) && !NAN(dVar3 * 2.220446049250313e-16))) {
    bVar2 = dVar3 < dVar3 * 2.220446049250313e-16;
  }
  if (bVar2) {
    func_0x00010c2241a0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063139d0; end: 1063139d7; -[SCOperaPageableViewControllerVolumeHelper isMuted] */

undefined1 FUN_1063139d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1063139d8; end: 1063139df; -[SCOperaPageableViewControllerVolumeHelper .cxx_destruct] */

void FUN_1063139d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 1063139e0; end: 106313a4b; -[SCOperaViewControllerLifecycleWorkaroundHelper init] */

undefined1 * FUN_1063139e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106313a4c; end: 106313a8b; -[SCOperaViewControllerLifecycleWorkaroundHelper registerCall:] */

void FUN_106313a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _NSStringFromSelector(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106313a8c; end: 106313ad7; -[SCOperaViewControllerLifecycleWorkaroundHelper wasCalled:] */

undefined8 FUN_106313a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _NSStringFromSelector(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106313ad8; end: 106313ae3; -[SCOperaViewControllerLifecycleWorkaroundHelper viewWillAppearWasCalled] */

void FUN_106313ad8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_wasCalled__1126862f0,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 106313ae4; end: 106313aef; -[SCOperaViewControllerLifecycleWorkaroundHelper viewDidAppearWasCalled] */

void FUN_106313ae4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_wasCalled__1126862f0,PTR_s_viewDidAppear__112684bd0);
  return;
}



/* Entry: 106313af0; end: 106313b37; -[SCOperaViewControllerLifecycleWorkaroundHelper viewWillOrDidDisappearWasCalled] */

/* WARNING: Possible PIC construction at 0x000106313b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106313b0c) */
/* WARNING: Removing unreachable block (ram,0x000106313b20) */
/* WARNING: Removing unreachable block (ram,0x000106313b10) */

void FUN_106313af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_wasCalled__1126862f0,PTR_s_viewWillDisappear__112685438);
  return;
}



/* Entry: 106313b38; end: 106313b3f; -[SCOperaViewControllerLifecycleWorkaroundHelper hasPendingViewDidAppearImplCall] */

undefined1 FUN_106313b38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106313b40; end: 106313b47; -[SCOperaViewControllerLifecycleWorkaroundHelper setHasPendingViewDidAppearImplCall:] */

void FUN_106313b40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106313b48; end: 106313b53; -[SCOperaViewControllerLifecycleWorkaroundHelper .cxx_destruct] */

void FUN_106313b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106313b54; end: 106313c2b; -[SCOperaWeakProxy initWithTarget:debugInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106313b54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_loadWeakRetained(puVar1);
  _objc_storeWeak(param_1 + _DAT_1127459f8,puVar1);
  _objc_release(puVar1);
  puVar1 = auStack_38;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  _objc_opt_class();
  *(undefined1 **)(param_1 + _DAT_1127459fc) = puVar2;
  _objc_release(puVar1);
  uVar3 = param_4;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745a00);
  *(undefined8 *)(param_1 + _DAT_112745a00) = uVar3;
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return param_1;
}



/* Entry: 106313c2c; end: 106313c5b; -[SCOperaWeakProxy class] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313c2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127459fc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106313c5c; end: 106313ccf; -[SCOperaWeakProxy isKindOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106313c5c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1 + _DAT_1127459f8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_isKindOfClass();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127459fc);
    func_0x00010c080080(uVar3);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106313cd0; end: 106313d17; -[SCOperaWeakProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106313cd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127459f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 106313d18; end: 106313dab; -[SCOperaWeakProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127459f8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127459fc);
    func_0x00010c067ba0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0cca80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106313dac; end: 106313e17; -[SCOperaWeakProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127459f8;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010be5a8c0(param_1);
  }
  else {
    func_0x00010c06ae40(param_3,param_2,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106313e18; end: 106313e83; -[SCOperaWeakProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313e18(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127459f8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010be5a8c0(param_1);
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106313e84; end: 106313e87; -[SCOperaWeakProxy _logWarningThenAssert] */

void FUN_106313e84(void)

{
  return;
}



/* Entry: 106313e88; end: 106313ec3; -[SCOperaWeakProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106313e88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127459f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745a00,0);
  return;
}



/* Entry: 106313ec4; end: 106313f0f; +[SCOperaPageViewModel viewModelWithPage:] */

void FUN_106313ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9ba0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106313f10; end: 106313f97; +[SCOperaPageViewModel dismissViewModel] */

void FUN_106313f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106313f98;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c37c0 != -1) {
    func_0x00010002a2fc(0x1136c37c0,&puStack_48);
  }
  uVar1 = uRam00000001136c37c8;
  _objc_retain(uRam00000001136c37c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106313f98; end: 106313fbf;  */

void FUN_106313f98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001136c37c8;
  uRam00000001136c37c8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106313fc0; end: 1063140af; -[SCOperaPageViewModel setPage:] */

void FUN_106313fc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  func_0x00010c1d8200(param_1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  if (lVar3 == 0) {
    lVar4 = param_1;
    func_0x00010c08aa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8f20(param_1,param_2,lVar4);
    _objc_release(lVar4);
  }
  else {
    func_0x00010c1b8f20(param_1,param_2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063140b0; end: 1063140f3; -[SCOperaPageViewModel clearPageWithReason:] */

void FUN_1063140b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c1d7f40(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1d7e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPage__1126539c8,0);
  return;
}



/* Entry: 1063140f4; end: 106314347; -[SCOperaPageViewModel insertTriggerPoints:afterTriggerPoint:] */

void FUN_1063140f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c27bf80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar11 = *(long *)(lVar10 * 8);
      lVar6 = lVar11;
      func_0x00010bfecde0();
      if (lVar6 == 0x7fffffffffffffff) {
        func_0x00010befa120(puVar3);
      }
      else {
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar11;
        func_0x00010c25e980(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar7);
        _objc_release(lVar6);
        func_0x00010befa160(puVar7);
        func_0x00010bf529e0(lVar11);
        func_0x00010c25e980(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar7);
        _objc_release(lVar11);
        puVar8 = puVar7;
        func_0x00010bf51e00(puVar7);
        func_0x00010befa120(puVar3);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar7 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c21a340(param_1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c37d8 != -1) {
    func_0x00010002a2fc(0x1136c37d8,&PTR___NSConcreteGlobalBlock_11091c768);
  }
  uVar2 = uRam00000001136c37d0;
  _objc_retain(uRam00000001136c37d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106314348; end: 10631439b;  */

void FUN_106314348(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c37d8 != -1) {
    func_0x00010002a2fc(0x1136c37d8,&PTR___NSConcreteGlobalBlock_11091c768);
  }
  uVar1 = uRam00000001136c37d0;
  _objc_retain(uRam00000001136c37d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10631439c; end: 1063143cb;  */

void FUN_10631439c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c37d0;
  ppuRam00000001136c37d0 = &PTR__OBJC_CLASS___NSConstantArray_1111808d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063143cc; end: 106314a07;  */

void FUN_1063143cc(undefined8 *param_1,undefined **param_2,undefined8 *param_3,ulong param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_2;
  puVar18 = param_3;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_1 != (undefined8 *)0x0) && (0 < (long)param_2)) &&
     (uVar4 = param_4, puVar18 = param_1, func_0x00010bf4b900(), (uVar4 & 1) == 0)) {
    func_0x00010befa120(param_4);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    if (lRam00000001136c37e8 != -1) {
      ppuVar15 = &PTR___NSConcreteGlobalBlock_11091c788;
      func_0x00010002a2fc(0x1136c37e8,&PTR___NSConcreteGlobalBlock_11091c788);
    }
    lVar2 = lRam00000001136c37e0;
    _objc_retain(lRam00000001136c37e0);
    puVar18 = &uStack_1b0;
    lVar5 = lVar2;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar16 = *plStack_1a0;
      do {
        lVar17 = 0;
        lVar6 = lVar5;
        do {
          if (*plStack_1a0 != lVar16) {
            lVar6 = lVar2;
            _objc_enumerationMutation();
          }
          uVar21 = *(undefined8 *)(lStack_1a8 + lVar17 * 8);
          FUN_106314348();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar7 != 0) {
            lVar19 = 0;
            do {
              iVar20 = (int)uVar21;
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar6);
              }
              iVar3 = (int)*(undefined8 *)(lVar19 * 8);
              func_0x00010c067ec0();
              func_0x00010c067ec0();
              _objc_retain(param_1);
              puVar18 = param_1;
              if (iVar3 == 1) {
                if (iVar20 == 0) {
                  func_0x00010c1126e0();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  if (iVar20 != 1) goto LAB_1063145e0;
                  func_0x00010c0d9ae0();
                  _objc_retainAutoreleasedReturnValue();
                }
LAB_106314628:
                _objc_release(param_1);
                if (puVar18 != (undefined8 *)0x0) {
                  puVar8 = puVar18;
                  func_0x00010c0f0be0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar8 != (undefined8 *)0x0) {
                    puVar9 = PTR_PTR_1126c9bc0;
                    _objc_alloc();
                    func_0x00010c00c780();
                    puVar8 = puVar18;
                    func_0x00010c0f0be0(puVar18);
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar8;
                    func_0x00010be36bc0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar11 = param_5;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar10);
                    _objc_release(puVar8);
                    if (lVar11 == 0) {
LAB_1063146fc:
                      puVar14 = PTR_PTR_1126c9bc8;
                      _objc_alloc();
                      _objc_retain(puVar18);
                      puVar8 = puVar18;
                      func_0x00010c0f0be0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar8;
                      func_0x00010c06b7e0();
                      _objc_release(puVar8);
                      puVar13 = PTR_PTR_1126c9a58;
                      if (((ulong)puVar10 & 1) == 0) {
                        puVar8 = puVar18;
                        func_0x00010c0f0be0(puVar18);
                        _objc_retainAutoreleasedReturnValue();
                        puVar10 = puVar8;
                        func_0x00010c118b40();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c07fc00(puVar13);
                        _objc_release(puVar10);
                        _objc_release(puVar8);
                      }
                      _objc_release(puVar18);
                      _objc_retain(puVar18);
                      puVar13 = PTR_PTR_1126b2340;
                      puVar8 = puVar18;
                      func_0x00010c0f0be0(puVar18);
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar8;
                      func_0x00010c118b40();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c083240();
                      _objc_release(puVar10);
                      _objc_release(puVar8);
                      if (((ulong)puVar13 & 1) == 0) {
                        puVar8 = puVar18;
                        func_0x00010c0f0be0(puVar18);
                        _objc_retainAutoreleasedReturnValue();
                        puVar10 = puVar8;
                        func_0x00010c118b40();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c075040();
                        _objc_release(puVar10);
                        _objc_release(puVar8);
                      }
                      _objc_release(puVar18);
                      puVar8 = puVar18;
                      func_0x00010c0f0be0(puVar18);
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar8;
                      func_0x00010be36bc0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c037c80(puVar14);
                      _objc_release(puVar10);
                      _objc_release(puVar8);
                      puVar8 = puVar18;
                      func_0x00010c0f0be0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar10 = puVar8;
                      func_0x00010be36bc0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(param_5);
                      _objc_release(puVar10);
                      _objc_release(puVar8);
                      _objc_release(puVar14);
                    }
                    else {
                      lVar12 = lVar11;
                      func_0x00010c104400(lVar11);
                      _objc_retainAutoreleasedReturnValue();
                      puVar13 = puVar9;
                      func_0x00010bf434c0();
                      _objc_release(lVar12);
                      if (0 < (long)puVar13) goto LAB_1063146fc;
                    }
                    ppuVar15 = (undefined **)((long)param_2 + -1);
                    FUN_1063143cc(puVar18,(undefined **)((long)param_2 + -1),(long)param_3 + 1,
                                  param_4,param_5);
                    _objc_release(lVar11);
                    _objc_release(puVar9);
                  }
                }
              }
              else {
                if (iVar3 == 2) {
                  if (iVar20 == 0) {
                    func_0x00010c0f3aa0();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    if (iVar20 != 1) goto LAB_1063145e0;
                    func_0x00010bf0cb60();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  goto LAB_106314628;
                }
                if (iVar3 == 3) {
                  if (iVar20 == 0) {
                    func_0x00010c1125e0();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    if (iVar20 != 1) goto LAB_1063145e0;
                    func_0x00010c0d9820();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  goto LAB_106314628;
                }
LAB_1063145e0:
                _objc_release(param_1);
                puVar18 = (undefined8 *)0x0;
              }
              _objc_release(puVar18);
              lVar19 = lVar19 + 1;
            } while (lVar7 != lVar19);
            lVar7 = lVar6;
            func_0x00010bf52a60();
          }
          _objc_release();
          lVar17 = lVar17 + 1;
        } while (lVar17 != lVar5);
        puVar18 = &uStack_1b0;
        lVar5 = lVar2;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(puVar18);
  _objc_retain(param_1);
  func_0x00010c1607a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  FUN_1063143cc(param_1,ppuVar15,0,puVar9,puVar13);
  puVar8 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar10 = puVar8;
  func_0x00010be36bc0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar8);
  puVar14 = puVar13;
  func_0x00010bf00d20(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar18);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106314a08; end: 106314b1f;  */

void FUN_106314a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c1607a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  FUN_1063143cc(param_1,param_2,0,puVar1,puVar2);
  uVar3 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = puVar2;
  func_0x00010bf00d20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_3);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106314b20; end: 106314b77; -[SCOperaActionBarPageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106314b20(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0e78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112745a04));
  return;
}



/* Entry: 106314b78; end: 106314beb; -[SCOperaActionBarPageView hitTest:withEvent:] */

void FUN_106314b78(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f0e78;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106314bec; end: 106314c5f; -[SCOperaActionBarPageView setPageContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106314bec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112745a04;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106314c60; end: 106314c6f; -[SCOperaActionBarPageView shouldHideActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106314c60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745a08);
}



/* Entry: 106314c70; end: 106314c7f; -[SCOperaActionBarPageView setShouldHideActionBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106314c70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745a08) = param_3;
  return;
}



/* Entry: 106314c80; end: 106314c8f; -[SCOperaActionBarPageView pageContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106314c80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745a04);
}



/* Entry: 106314c90; end: 106314c9f; -[SCOperaActionBarPageView offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106314c90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745a0c);
}



/* Entry: 106314ca0; end: 106314caf; -[SCOperaActionBarPageView setOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106314ca0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112745a0c) = param_1;
  return;
}



/* Entry: 106314cb0; end: 106314cc3; -[SCOperaActionBarPageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106314cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745a04,0);
  return;
}



/* Entry: 106314cc4; end: 106314f07; -[SCOperaActionBarView initWithConfiguration:heightOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106314cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  puStack_78 = PTR_PTR_1126f0e80;
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_80 = param_2;
  _objc_msgSendSuper2(uVar6,uVar7,uVar8,uVar9,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112745a10) = param_1;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_112745a14;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdd21e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    if (param_4 == 2) {
      puVar3 = (undefined1 *)puVar1;
      func_0x00010bdee3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745a18);
      *(undefined1 **)((long)puVar1 + (long)_DAT_112745a18) = puVar3;
      _objc_release(uVar4);
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    }
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_112745a1c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745a20);
    *(undefined **)((long)puVar1 + (long)_DAT_112745a20) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745a24);
    *(undefined **)((long)puVar1 + (long)_DAT_112745a24) = puVar2;
    _objc_release(uVar6);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106314f08; end: 10631507b; -[SCOperaActionBarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106314f08(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f0e80;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  lVar3 = (long)_DAT_112745a14;
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar3));
  lVar2 = (long)_DAT_112745a18;
  dVar4 = param_1;
  if (*(long *)(param_2 + lVar2) != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
    _CGRectGetHeight();
    dVar5 = param_1 + -96.0;
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
    _CGRectGetWidth();
    uVar1 = *(ulong *)(param_2 + lVar2);
    dVar4 = param_1;
    func_0x00010bfb68e0();
    _CGRectEqualToRect();
    if ((uVar1 & 1) == 0) {
      dVar4 = 0.0;
      func_0x00010c19f0e0(0,dVar5,param_1,0x4058000000000000,*(undefined8 *)(param_2 + lVar2));
    }
  }
  dVar5 = *(double *)(param_2 + _DAT_112745a10);
  if (*(double *)(param_2 + _DAT_112745a10) <= 0.0) {
    func_0x000100594f4c();
    dVar5 = dVar4;
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,0,dVar4,dVar5,*(undefined8 *)(param_2 + _DAT_112745a1c));
  func_0x00010bf97ce0(*(undefined8 *)(param_2 + _DAT_112745a20));
  return;
}



/* Entry: 10631507c; end: 1063150bf;  */

void FUN_10631507c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0e1c40(param_3);
  func_0x00010be6f160(uVar1);
  func_0x00010c19f0e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063150c0; end: 1063151a7; -[SCOperaActionBarView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063150c0(double param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  dVar3 = param_1;
  _objc_retain(param_5);
  func_0x00010bf01b40(*(undefined8 *)(param_3 + _DAT_112745a14));
  if (dVar3 <= 0.01) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126f0e80;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar1 == (undefined1 **)param_3) ||
       (ppuVar1 == (undefined1 **)*(undefined1 **)(param_3 + _DAT_112745a1c))) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      _objc_retain(ppuVar1);
      puVar2 = (undefined1 *)ppuVar1;
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063151a8; end: 106315213; -[SCOperaActionBarView _pageFrameForOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063151a8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112745a1c;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetHeight();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetWidth();
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
  _CGRectGetHeight();
  return 0;
}



/* Entry: 106315214; end: 10631524b; -[SCOperaActionBarView _backgroundColorForActionBarStyle:] */

void FUN_106315214(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10dddb5e8 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631524c; end: 106315307; -[SCOperaActionBarView _updateActionBarVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10631524c(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106315308;
  puStack_58 = &UNK_11091c7d8;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + _DAT_112745a20),param_2,&puStack_70);
  func_0x00010c1677c0(puStack_38[3],*(undefined8 *)(param_1 + _DAT_112745a14));
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 106315308; end: 1063153ab;  */

void FUN_106315308(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c230b40();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0e1c40(param_4);
    dVar4 = 0.0;
    if (0.0 <= 1.0 - ABS(param_1)) {
      dVar4 = 1.0 - ABS(param_1);
    }
    dVar5 = dVar4;
    if (0.0 < dVar4) {
      iVar3 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010c0e1c40(param_4);
      func_0x00010be615a0();
      dVar5 = 1.0;
      if (iVar3 == 0) {
        dVar5 = dVar4;
      }
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    dVar4 = *(double *)(lVar2 + 0x18);
    if (dVar5 <= dVar4) {
      dVar5 = dVar4;
    }
    *(double *)(lVar2 + 0x18) = dVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063153ac; end: 106315417; -[SCOperaActionBarView _movingTowardsOtherVisiblePage:] */

undefined8 FUN_1063153ac(double param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((0.0 < param_1) &&
      (uVar1 = param_2, func_0x00010be34ae0(0xbff0000000000000,0), (uVar1 & 1) != 0)) ||
     ((param_1 < 0.0 && (func_0x00010be34ae0(0,0x3ff0000000000000), (param_2 & 1) != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106315418; end: 1063154c7; -[SCOperaActionBarView _hasVisiblePageWithOffsetInRange:upperBound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106315418(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_58 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1063154c8;
  puStack_60 = &UNK_11091c808;
  uStack_50 = param_1;
  uStack_48 = param_2;
  puStack_38 = puStack_58;
  func_0x00010bf97ce0(*(undefined8 *)(param_3 + _DAT_112745a20),param_4,&puStack_78);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1063154c8; end: 10631556f;  */

void FUN_1063154c8(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined1 *param_5)

{
  ulong uVar1;
  bool bVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c230b40();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) & 1) == 0) {
      func_0x00010c0e1c40(param_4);
      if (*(double *)(param_2 + 0x28) <= param_1) {
        func_0x00010c0e1c40(param_4);
        bVar2 = param_1 <= *(double *)(param_2 + 0x30);
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = true;
    }
    *(bool *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = bVar2;
    *param_5 = *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106315570; end: 106315707; -[SCOperaActionBarView _createGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21e900();
  puVar1 = puVar7;
  func_0x00010bfcd9c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar3;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bfcd9c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c17eb60();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    lVar9 = (long)_DAT_112745a24;
    puVar7 = *(undefined **)(puVar1 + lVar9);
    func_0x00010c0dff20(puVar7,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126c9bd0;
      _objc_alloc_init(PTR_PTR_1126c9bd0);
    }
    else {
      func_0x00010c12d3e0(*(undefined8 *)(puVar1 + lVar9),param_2,puVar8);
      func_0x00010c1a7f60(puVar7,param_2,0);
      func_0x00010c1d0bc0(0,puVar7);
    }
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106315708; end: 10631579f; -[SCOperaActionBarView _pageViewForContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112745a24;
  puVar1 = *(undefined **)(param_1 + lVar2);
  func_0x00010c0dff20(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c9bd0;
    _objc_alloc_init(PTR_PTR_1126c9bd0);
  }
  else {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010c1a7f60(puVar1,param_2,0);
    func_0x00010c1d0bc0(0,puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063157a0; end: 10631587f; -[SCOperaActionBarView removeAllPageContentViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063157a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar2 = (long)_DAT_112745a20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106315880;
  puStack_50 = &UNK_11091c7a8;
  lStack_48 = param_1;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + lVar2),param_2,&puStack_68);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010bed26c0(param_1);
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1063158f8;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 106315880; end: 1063158f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745a24);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f0da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010c1a7f60(param_3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063158f8; end: 106315a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063158f8(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
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
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar4 = (long)_DAT_112745a24;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c0dfe00();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_d8;
    param_5 = 0x10;
    lVar7 = lVar1;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_118 + lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar7 != lVar8);
        param_4 = auStack_d8;
        param_5 = 0x10;
        lVar7 = lVar1;
        puVar3 = &uStack_120;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,param_4,0x10);
      } while (lVar7 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar4));
    lVar7 = param_1;
    func_0x00010bf73900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_3 = (undefined1 *)puVar3;
    if (lVar7 != 0) {
      lVar7 = param_1;
      func_0x00010bf73900();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))();
      _objc_release(lVar7);
      param_3 = (undefined1 *)puVar3;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar1 = (long)_DAT_112745a20;
  lVar7 = *(long *)(param_1 + lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar7,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (lVar7 == 0) {
    lVar7 = param_1;
    func_0x00010be6fa40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7fc0();
    func_0x00010c2006e0(lVar7,param_2,param_5);
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,lVar7,puVar2);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112745a1c),param_2,lVar7);
    func_0x00010c1cbe20(param_1);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106315a5c; end: 106315b7b; -[SCOperaActionBarView addActionBarPageContentView:relativePosition:shouldHideActionBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112745a20;
  lVar3 = *(long *)(param_1 + lVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010be6fa40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7fc0();
    func_0x00010c2006e0(lVar3,param_2,param_5);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,lVar3,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112745a1c),param_2,lVar3);
    func_0x00010c1cbe20(param_1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106315b7c; end: 106315cf7; -[SCOperaActionBarView setRelativeVerticalOffset:forPageAtPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315b7c(double param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  uVar4 = *(ulong *)(param_2 + _DAT_112745a20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((!NAN(param_1) && uVar4 != 0) && ABS(param_1) != INFINITY) {
    dVar6 = param_1;
    func_0x00010be6f160(param_2);
    _CGRectGetWidth();
    if (!NAN(dVar6)) {
      dVar6 = param_1;
      func_0x00010be6f160(param_2);
      _CGRectGetHeight();
      if (!NAN(dVar6)) {
        func_0x00010c1d0bc0(param_1,uVar4);
        uVar2 = uVar4;
        func_0x00010c0f0da0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        _objc_opt_respondsToSelector();
        if ((uVar5 & 1) == 0) {
          _objc_release(uVar2);
          uVar5 = 0;
          dVar6 = param_1;
        }
        else {
          uVar3 = uVar4;
          func_0x00010c0f0da0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c073140();
          _objc_release(uVar3);
          _objc_release(uVar2);
          dVar6 = 0.0;
          if ((uVar5 & 1) == 0) {
            dVar6 = param_1;
          }
        }
        func_0x00010be6f160(dVar6,param_2);
        func_0x00010c19f0e0(uVar4);
        dVar6 = 1.0;
        if ((uVar5 & 1) == 0) {
          dVar6 = 1.0 - ABS(param_1);
        }
        func_0x00010c1677c0(dVar6,uVar4);
        func_0x00010bed26c0(param_2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106315cf8; end: 106315cff; -[SCOperaActionBarView showActionBar] */

void FUN_106315cf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 106315d00; end: 106315d07; -[SCOperaActionBarView hideActionBar] */

void FUN_106315d00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106315d08; end: 106315d17; -[SCOperaActionBarView didCleanPagesCacheBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106315d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745a28);
}



/* Entry: 106315d18; end: 106315d23; -[SCOperaActionBarView setDidCleanPagesCacheBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315d18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106315d24; end: 106315da3; -[SCOperaActionBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106315d24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745a28,0);
  _objc_storeStrong(param_1 + _DAT_112745a24,0);
  _objc_storeStrong(param_1 + _DAT_112745a20,0);
  _objc_storeStrong(param_1 + _DAT_112745a1c,0);
  _objc_storeStrong(param_1 + _DAT_112745a18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745a14,0);
  return;
}



/* Entry: 106315da4; end: 106315e73; -[SCOperaNavigationIntentManager initWithNavigationManager:delegate:] */

undefined8 *
FUN_106315da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  puStack_40 = PTR_PTR_1126f0e88;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 2,puVar3);
    _objc_release(puVar3);
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106315e74; end: 106315e77; -[SCOperaNavigationIntentManager cancelPendingIntentsWithReason:] */

void FUN_106315e74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelDelayedNavigationIfNeeded_112554370);
  return;
}



/* Entry: 106315e78; end: 106315e87; -[SCOperaNavigationIntentManager registerTapToAdvanceIntentWithDelay:] */

void FUN_106315e78(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleDelayedTrigger__112584580);
  return;
}



/* Entry: 106315e88; end: 106315edf; -[SCOperaNavigationIntentManager navigateToPreviousGroupAnimated:] */

void FUN_106315e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d6130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToPreviousGroupAnimated__112613260,param_3);
  return;
}



/* Entry: 106315ee0; end: 106315f37; -[SCOperaNavigationIntentManager navigateToNextGroupAnimated:] */

void FUN_106315ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d6030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToNextGroupAnimated__112613220,param_3);
  return;
}



/* Entry: 106315f38; end: 106315f8f; -[SCOperaNavigationIntentManager navigateToParentAnimated:] */

void FUN_106315f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d60b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToParentAnimated__112613240,param_3);
  return;
}



/* Entry: 106315f90; end: 106315fe7; -[SCOperaNavigationIntentManager navigateToAttachmentAnimated:] */

void FUN_106315f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d5ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToAttachmentAnimated__1126131d0,param_3);
  return;
}



/* Entry: 106315fe8; end: 106316047; -[SCOperaNavigationIntentManager navigateToPreviousGroupAnimated:ignoreSettingLastInteraction:] */

void FUN_106315fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToPreviousGroupAnimated__112613268,param_3,
             param_4);
  return;
}



/* Entry: 106316048; end: 1063160a7; -[SCOperaNavigationIntentManager navigateToNextGroupAnimated:ignoreSettingLastInteraction:] */

void FUN_106316048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d6050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToNextGroupAnimated_igno_112613228,param_3,
             param_4);
  return;
}



/* Entry: 1063160a8; end: 106316107; -[SCOperaNavigationIntentManager navigateToParentAnimated:ignoreSettingLastInteraction:] */

void FUN_1063160a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToParentAnimated_ignoreS_112613248,param_3,
             param_4);
  return;
}



/* Entry: 106316108; end: 106316167; -[SCOperaNavigationIntentManager navigateToAttachmentAnimated:ignoreSettingLastInteraction:] */

void FUN_106316108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigateToAttachmentAnimated_ign_1126131d8,param_3,
             param_4);
  return;
}



/* Entry: 106316168; end: 1063161af; -[SCOperaNavigationIntentManager resetCurrentScrolling] */

void FUN_106316168(long param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c138790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_resetCurrentScrolling_11262bc00);
  return;
}



/* Entry: 1063161b0; end: 106316237; -[SCOperaNavigationIntentManager startInteractiveTransitionInDirection:velocity:touchPoint:] */

void FUN_1063161b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  _NSStringFromSelector(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda740(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c24f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 8),
             PTR_s_startInteractiveTransitionInDire_112671650,param_7);
  return;
}



/* Entry: 106316238; end: 106316327; -[SCOperaNavigationIntentManager _scheduleDelayedTrigger:] */

void FUN_106316238(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_2 + 0x20) + 1;
  *(long *)(param_2 + 0x20) = lVar1;
  *(undefined1 *)(param_2 + 0x18) = 1;
  puVar2 = auStack_48;
  _objc_initWeak(puVar2,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  lStack_50 = lVar1;
  func_0x00010c0f7fe0(param_1,puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106316328; end: 106316393;  */

void FUN_106316328(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x18) == '\x01')) &&
     (*(long *)(param_1 + 0x28) == *(long *)(lVar1 + 0x20))) {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0d6860();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106316394; end: 1063163a7; -[SCOperaNavigationIntentManager _cancelDelayedNavigationIfNeeded:] */

void FUN_106316394(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1063163a8; end: 1063163d3; -[SCOperaNavigationIntentManager .cxx_destruct] */

void FUN_1063163a8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063163d4; end: 106316633;  */

void FUN_1063163d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c27a6c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = lVar1;
  func_0x00010c27a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_138 + lVar5 * 8);
        uStack_160 = 0;
        uStack_150 = 0x2020000000;
        uStack_148 = 0;
        uStack_180 = 0;
        uStack_170 = 0x2020000000;
        uStack_168 = 0;
        uVar4 = uVar6;
        puStack_178 = &uStack_180;
        puStack_158 = &uStack_160;
        func_0x00010bf7f0e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bdfe0();
        _objc_release(uVar4);
        if (((*(byte *)(puStack_158 + 3) & 1) != 0) && (param_2 == puStack_178[3])) {
          func_0x00010bf03a20(uVar6);
          _objc_retainAutoreleasedReturnValue();
          __Block_object_dispose(&uStack_180,8);
          __Block_object_dispose(&uStack_160,8);
          goto LAB_1063165a8;
        }
        __Block_object_dispose(&uStack_180,8);
        __Block_object_dispose(&uStack_160,8);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  uVar6 = 0;
LAB_1063165a8:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_180,8);
  uVar4 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
  return;
}



/* Entry: 106316634; end: 10631667b;  */

void FUN_106316634(long param_1,undefined8 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10631667c; end: 1063166f3;  */

uint FUN_10631667c(undefined *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126c9ba0;
    func_0x00010bf84be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = 1;
    if (param_1 != puVar1) {
      uVar2 = (param_2 | param_3) ^ 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1063166f4; end: 10631677b;  */

undefined8 FUN_1063166f4(ulong param_1)

{
  if (param_1 < 6) {
    return *(undefined8 *)(&UNK_10dddb650 + param_1 * 8);
  }
  return 4;
}


