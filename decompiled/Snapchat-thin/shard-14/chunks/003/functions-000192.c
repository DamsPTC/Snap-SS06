/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0a12f8; end: 10b0a136f; -[SIGContainerPresentationView presentTooltip:atPoint:fromView:forDuration:] */

void FUN_10b0a12f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  func_0x00010bf51200(param_1,param_2,param_3,param_4,param_6);
  func_0x00010c10c340(param_5,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b0a1370; end: 10b0a1377; -[SIGContainerPresentationView dismissTooltip:] */

void FUN_10b0a1370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10b0a1378; end: 10b0a1387; -[SIGContainerPresentationView footer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a1378(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c794);
}



/* Entry: 10b0a1388; end: 10b0a1407; -[SIGContainerPresentationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a1388(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c794,0);
  _objc_storeStrong(param_1 + _DAT_11278c790,0);
  _objc_storeStrong(param_1 + _DAT_11278c78c,0);
  _objc_storeStrong(param_1 + _DAT_11278c788,0);
  _objc_storeStrong(param_1 + _DAT_11278c780,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c77c,0);
  return;
}



/* Entry: 10b0a1408; end: 10b0a160b; -[SIGContainerView _addScreenChromeView] */

void FUN_10b0a1408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126df768;
  _objc_alloc();
  func_0x00010bf20c00(param_3);
  func_0x00010c013de0();
  func_0x00010c219b60();
  func_0x00010befbb60(param_3,param_4,puVar1);
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf493a0(puVar2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_80 = puVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_4,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_78 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0(puVar8,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = (undefined *)0x3;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar13);
  func_0x000107c2bd48();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  if (puVar11 == (undefined *)0x0) {
LAB_10b0a1678:
    func_0x00010bf1ff80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar12;
    func_0x00010bf493a0(puVar12,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar11;
    func_0x00010c0841c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c236ba0();
    _objc_release(puVar1);
    if ((int)puVar4 != 0) goto LAB_10b0a1678;
    func_0x00010bf1ff80(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149040(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010c0841c0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c084de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    puVar1 = puVar12;
    func_0x00010bf493c0(param_2,puVar12,param_4,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar13);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0a160c; end: 10b0a178b; -[SIGContainerView _bottomConstraintForViewController:onView:] */

void FUN_10b0a160c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  func_0x000107c2bd48();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  if (param_5 != 0) {
    lVar1 = param_5;
    func_0x00010c0841c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c236ba0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      func_0x00010bf1ff80(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149040(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c0841c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c084de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0699c0();
      uVar5 = uVar3;
      func_0x00010bf493c0(param_2,uVar3,param_4,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar4);
      goto LAB_10b0a1750;
    }
  }
  func_0x00010bf1ff80(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_10b0a1750:
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b0a178c; end: 10b0a17ab; -[SIGContainerView currentApplicationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a178c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a17ac; end: 10b0a17bb; -[SIGContainerView currentScreenChrome] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a17ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c7d0);
}



/* Entry: 10b0a17bc; end: 10b0a17cb; -[SIGContainerView backgroundScreenChrome] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a17bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c7d4);
}



/* Entry: 10b0a17cc; end: 10b0a17db; -[SIGContainerView footerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a17cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c7c0);
}



/* Entry: 10b0a17dc; end: 10b0a17eb; -[SIGContainerView disableBorderAndCornerViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b0a17dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c7b4);
}



/* Entry: 10b0a17ec; end: 10b0a18af; -[SIGContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a17ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c7d4,0);
  _objc_storeStrong(param_1 + _DAT_11278c7d0,0);
  _objc_destroyWeak(param_1 + _DAT_11278c7a8);
  _objc_storeStrong(param_1 + _DAT_11278c79c,0);
  _objc_storeStrong(param_1 + _DAT_11278c7a0,0);
  _objc_storeStrong(param_1 + _DAT_11278c7a4,0);
  _objc_destroyWeak(param_1 + _DAT_11278c7b0);
  _objc_destroyWeak(param_1 + _DAT_11278c7b8);
  _objc_storeStrong(param_1 + _DAT_11278c7cc,0);
  _objc_storeStrong(param_1 + _DAT_11278c7c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c7c8,0);
  return;
}



/* Entry: 10b0a18b0; end: 10b0a18bf; -[SCContainerViewControllerView footer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a18b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb4230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c7d8),PTR_s_footer_1125caa30);
  return;
}



/* Entry: 10b0a18c0; end: 10b0a18cf; -[SCContainerViewControllerView containerBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a18c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c7d8),PTR_s_backgroundColor_1125a28f8);
  return;
}



/* Entry: 10b0a18d0; end: 10b0a18ef; -[SCContainerViewControllerView hierarchyObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a18d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278c7dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a18f0; end: 10b0a18ff; -[SCContainerViewControllerView overlayItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a18f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c7e4);
}



/* Entry: 10b0a1900; end: 10b0a195b; -[SCContainerViewControllerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a1900(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c7e4,0);
  _objc_storeStrong(param_1 + _DAT_11278c7e0,0);
  _objc_destroyWeak(param_1 + _DAT_11278c7dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c7d8,0);
  return;
}



/* Entry: 10b0a195c; end: 10b0a19bf; -[SCContainerOverlayItem init] */

undefined1 * FUN_10b0a195c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a19c0; end: 10b0a1a93; -[SCContainerOverlayItem animateInItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a19c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126df778;
  _objc_alloc(PTR_PTR_1126df778);
  func_0x00010c004160();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_3 != *(long *)(param_1 + _DAT_11278c7e8)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b0a1a94;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f9680(puVar1,param_2,&puStack_60);
    func_0x00010be71520(param_1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0a1a94; end: 10b0a1a9f;  */

void FUN_10b0a1a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea8df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setUpAnimatedTransitionToItem__112587d20,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a1aa0; end: 10b0a1b13; -[SCContainerOverlayItem hitTest:withEvent:] */

void FUN_10b0a1aa0(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_112705630;
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



/* Entry: 10b0a1b14; end: 10b0a1dd3; -[SCContainerOverlayItem _setUpAnimatedTransitionToItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a1b14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

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
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar17 = (long)_DAT_11278c7e8;
  lVar15 = *(long *)(param_2 + lVar17);
  if (param_4 != lVar15) {
    if (param_4 != 0) {
      func_0x00010befbb60(param_2,param_3,param_4);
      func_0x00010c219b60(param_2,param_3,0);
      func_0x00010c219b60(param_4,param_3,0);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar15 = param_2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_4;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar15;
      func_0x00010bf493a0(lVar15,param_3,lVar16);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      lStack_88 = lVar2;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493a0(lVar3,param_3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      lStack_80 = lVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_4;
      func_0x00010c274200(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf493a0(lVar6,param_3,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_2;
      lStack_78 = lVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_4;
      func_0x00010bf1ff80(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010bf493a0(lVar9,param_3,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar16);
      _objc_release(lVar15);
      param_1 = 0;
      func_0x00010c1677c0(0,param_4);
      func_0x00010c08d140(param_4);
      lVar15 = *(long *)(param_2 + lVar17);
    }
    lVar16 = (long)_DAT_11278c7ec;
    _objc_retain(lVar15);
    uVar13 = *(undefined8 *)(param_2 + lVar16);
    *(long *)(param_2 + lVar16) = lVar15;
    _objc_release(uVar13);
    _objc_retain(param_4);
    uVar13 = *(undefined8 *)(param_2 + lVar17);
    *(long *)(param_2 + lVar17) = param_4;
    _objc_release(uVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_4 + _DAT_11278c7e8);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(param_4 + _DAT_11278c7ec);
  _objc_retain(uVar14);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10b0a1ec8;
  puStack_118 = &UNK_110841f80;
  uStack_110 = uVar14;
  uStack_108 = uVar13;
  _objc_retain(uVar13);
  _objc_retain(uVar14);
  func_0x00010bf02ee0(param_1,0,puVar1,param_3,0,&puStack_130,0);
  func_0x00010c1cbe20(param_4);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uVar14);
  _objc_release(uVar13);
  return;
}



/* Entry: 10b0a1dd4; end: 10b0a1ec7; -[SCContainerOverlayItem _performAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a1dd4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_11278c7e8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11278c7ec);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0a1ec8;
  puStack_58 = &UNK_110841f80;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  func_0x00010bf02ee0(param_1,0,puVar1,param_3,0,&puStack_70,0);
  func_0x00010c1cbe20(param_2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0a1ec8; end: 10b0a1fa7;  */

void FUN_10b0a1ec8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b0a1fa8;
  puStack_60 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar2,param_2,&puStack_78);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b0a1fb4;
  puStack_88 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_80 = uVar3;
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar2,param_2,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  return;
}



/* Entry: 10b0a1fa8; end: 10b0a1fbf;  */

void FUN_10b0a1fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b0a1fc0; end: 10b0a1fc3; -[SCContainerOverlayItem completeAnimation:] */

void FUN_10b0a1fc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishTransitionCompleted__1125636c0);
  return;
}



/* Entry: 10b0a1fc4; end: 10b0a2043; -[SCContainerOverlayItem _finishTransitionCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a1fc4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    lVar4 = (long)_DAT_11278c7e8;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    lVar3 = (long)_DAT_11278c7ec;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
  }
  else {
    lVar3 = (long)_DAT_11278c7ec;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11278c7e8));
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a2044; end: 10b0a2053; -[SCContainerOverlayItem currentItemView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a2044(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c7e8);
}



/* Entry: 10b0a2054; end: 10b0a2093; -[SCContainerOverlayItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a2054(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c7e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c7ec,0);
  return;
}



/* Entry: 10b0a2094; end: 10b0a2933; -[SCScreenChromeView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b0a2094(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_112705638;
  puVar1 = &uStack_120;
  uStack_120 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c30a74();
    uVar15 = 0x402a000000000000;
    if ((int)puVar2 == 0) {
      uVar15 = 0x4020000000000000;
    }
    lVar9 = (long)_DAT_11278c7f0;
    *(undefined8 *)((long)puVar1 + lVar9) = uVar15;
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc_init();
    lVar14 = (long)_DAT_11278c7f4;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc_init();
    lVar12 = (long)_DAT_11278c7f8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar12));
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc_init();
    lVar11 = (long)_DAT_11278c7fc;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc_init();
    lVar10 = (long)_DAT_11278c800;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar10));
    puVar3 = PTR_PTR_1126b52f0;
    _objc_alloc_init();
    lVar13 = (long)_DAT_11278c804;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar15);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    puStack_1c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = *(undefined8 **)((long)puVar1 + lVar14);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    puStack_128 = puVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar4;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar14);
    puStack_138 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar15;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_148 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar5;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_158 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_160 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_170 = uVar15;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_178 = uVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_188 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar15;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_198 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar5;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_1a8 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_1b0 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_1c0 = uVar15;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_1d0 = uVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_1e0 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = uVar15;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_1f0 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_1f8 = uVar5;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_200 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_208 = uVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_218 = uVar15;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_220 = uVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_230 = uVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = uVar15;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_240 = uVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = uVar5;
    func_0x00010bf49420(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar5;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_250 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_258 = uVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_268 = uVar15;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_270 = uVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puStack_278 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar5;
    unaff_x20 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_280 = uVar5;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    uStack_288 = unaff_x20;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = unaff_x20;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar5;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c8);
    _objc_release(puVar3);
    _objc_release(uVar15);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(unaff_x20);
    _objc_release(puVar6);
    _objc_release(uStack_288);
    _objc_release(uStack_280);
    _objc_release(puStack_278);
    _objc_release(uStack_270);
    _objc_release(uStack_268);
    _objc_release(puStack_260);
    _objc_release(uStack_258);
    _objc_release(uStack_250);
    _objc_release(uStack_248);
    _objc_release(uStack_240);
    _objc_release(uStack_238);
    _objc_release(uStack_230);
    _objc_release(puStack_228);
    _objc_release(uStack_220);
    _objc_release(uStack_218);
    _objc_release(puStack_210);
    _objc_release(uStack_208);
    _objc_release(uStack_200);
    _objc_release(uStack_1f8);
    _objc_release(uStack_1f0);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1e0);
    _objc_release(puStack_1d8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c0);
    _objc_release(puStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(uStack_198);
    _objc_release(uStack_190);
    _objc_release(uStack_188);
    _objc_release(puStack_180);
    _objc_release(uStack_178);
    _objc_release(uStack_170);
    _objc_release(puStack_168);
    _objc_release(uStack_160);
    _objc_release(uStack_158);
    _objc_release(uStack_150);
    _objc_release(uStack_148);
    _objc_release(uStack_140);
    _objc_release(puStack_138);
    _objc_release(puStack_130);
    puVar2 = puStack_128;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_10b0a2934;
  puStack_2b8 = PTR_PTR_112705638;
  puStack_2c0 = puVar2;
  uStack_2b0 = unaff_x20;
  puStack_2a8 = puVar1;
  puStack_2a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_2c0,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed4280(puVar2);
  return puVar2;
}



/* Entry: 10b0a2934; end: 10b0a297b; -[SCScreenChromeView traitCollectionDidChange:] */

void FUN_10b0a2934(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112705638;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed4280(param_1);
  return;
}



/* Entry: 10b0a297c; end: 10b0a2c3b; -[SCScreenChromeView setViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a297c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_11278c808;
  if (*(long *)(param_1 + lVar15) != 0) {
    func_0x00010c12c960();
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    *(undefined8 *)(param_1 + lVar15) = 0;
    _objc_release(uVar2);
  }
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar15);
    *(long *)(param_1 + lVar15) = lVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c066fa0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(param_1);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  lVar15 = param_3;
  func_0x000107c2bd48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa200();
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11278c7f8));
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11278c7f4));
                    /* WARNING: Could not recover jumptable at 0x00010bed62f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__updateCornerViewShapeLayers_112593260);
  return;
}



/* Entry: 10b0a2c3c; end: 10b0a2c8f; -[SCScreenChromeView footerItemConfig:showContentBehindFooterDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a2c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11278c7f8),param_2,param_4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11278c7f4));
                    /* WARNING: Could not recover jumptable at 0x00010bed62f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCornerViewShapeLayers_112593260);
  return;
}



/* Entry: 10b0a2c90; end: 10b0a2f7f; -[SCScreenChromeView _updateCornerViewShapeLayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a2c90(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  
  lVar4 = (long)_DAT_11278c7f4;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    lVar5 = (long)_DAT_11278c7f8;
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bc00();
      _objc_release(uVar3);
      _objc_release(puVar2);
      dVar6 = *(double *)(param_1 + _DAT_11278c7f0);
      puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d18c0(dVar6,0);
      func_0x00010bef6d40(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),dVar6,0,0x3ff921fb54442d18
                          ,puVar2,param_2,1);
      func_0x00010bef98c0(dVar6,dVar6,puVar2);
      func_0x00010bf3dc80(puVar2);
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1040();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar3);
      _CGAffineTransformMakeRotation(auStack_c0,0x3ff921fb54442d18);
      dVar6 = -dVar6;
      _CGAffineTransformTranslate(auStack_90,0,dVar6,auStack_c0);
      func_0x00010bf08a40(puVar2,param_2,auStack_90);
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1040();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar3);
      _CGAffineTransformMakeRotation(auStack_c0,0x3ff921fb54442d18);
      _CGAffineTransformTranslate(auStack_90,0,dVar6,auStack_c0);
      func_0x00010bf08a40(puVar2,param_2,auStack_90);
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1040();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11278c7fc);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar3);
      _CGAffineTransformMakeRotation(auStack_c0,0x3ff921fb54442d18);
      _CGAffineTransformTranslate(auStack_90,0,dVar6,auStack_c0);
      func_0x00010bf08a40(puVar2,param_2,auStack_90);
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1040();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11278c800);
      func_0x00010c22a660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 10b0a2f80; end: 10b0a2f8f; -[SCScreenChromeView footerItem:showBorderAroundViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a2f80(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + _DAT_11278c80c) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bed4290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBorder_112592a48);
  return;
}



/* Entry: 10b0a2f90; end: 10b0a300f; -[SCScreenChromeView _updateBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a2f90(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_11278c80c) == '\x01') {
    lVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292b20();
    _objc_release(lVar1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11278c804));
                    /* WARNING: Could not recover jumptable at 0x00010bed4310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBorderViewShapeLayer_112592a68);
  return;
}



/* Entry: 10b0a3010; end: 10b0a3247; -[SCScreenChromeView _updateBorderViewShapeLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3010(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = (long)_DAT_11278c804;
  uVar3 = *(ulong *)(param_5 + lVar8);
  func_0x00010c074c20();
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23baa0(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x20,0x21);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010bf20c00(param_5);
    _CGRectInset();
    pdVar1 = (double *)(param_5 + _DAT_11278c810);
    bVar2 = false;
    if ((*pdVar1 == param_3) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_4))) {
      bVar2 = pdVar1[1] == param_4;
    }
    if (!bVar2) {
      param_2 = param_2 + -0.5;
      *pdVar1 = param_3;
      pdVar1[1] = param_4;
      dVar9 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3);
      if ((1.0 < dVar9) &&
         (dVar9 = param_1, _CGRectGetHeight(param_1,param_2,param_3,param_4), 1.0 < dVar9)) {
        puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        func_0x00010bf19a00(param_1,param_2,param_3,param_4,
                            *(undefined8 *)(param_5 + _DAT_11278c7f0),
                            PTR__OBJC_CLASS___UIBezierPath_1126aec18);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        _CGRectInset(param_1,param_2,param_3,param_4,0x3ff0000000000000,0x3ff0000000000000);
        func_0x00010bf19a00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010bf19940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06f40(puVar6,param_6,puVar7);
        _objc_release(puVar7);
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc1040();
        uVar5 = *(undefined8 *)(param_5 + lVar8);
        func_0x00010c22a660(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9820();
        _objc_release(uVar5);
        _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10b0a3248; end: 10b0a343b; -[SCScreenChromeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3248(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c808,0);
  _objc_storeStrong(param_1 + _DAT_11278c804,0);
  _objc_storeStrong(param_1 + _DAT_11278c7f8,0);
  _objc_storeStrong(param_1 + _DAT_11278c7f4,0);
  _objc_storeStrong(param_1 + _DAT_11278c800,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c7fc,0);
  return;
}



/* Entry: 10b0a343c; end: 10b0a3447; +[SCAppFooter componentPath] */

undefined ** FUN_10b0a343c(void)

{
  return &PTR____CFConstantStringClassReference_110f5b4f8;
}



/* Entry: 10b0a3448; end: 10b0a347b; -[SCAppFooter initWithViewModel:componentContext:runtime:] */

void FUN_10b0a3448(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705640;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10b0a347c; end: 10b0a34cb; -[SCAppFooter setViewModel:] */

void FUN_10b0a347c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0a34cc; end: 10b0a350f; -[SCAppFooter viewModel] */

void FUN_10b0a34cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a3510; end: 10b0a3533; -[SCAppFooterContext init] */

void FUN_10b0a3510(void)

{
  func_0x00010b0a35dc(PTR_PTR_112705648);
  return;
}



/* Entry: 10b0a3534; end: 10b0a354b; +[SCAppFooterContext valdiMarshallableObjectDescriptor] */

void FUN_10b0a3534(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e554360;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0a354c; end: 10b0a358f; -[SCAppFooterCustomeViewProperty initWithKey:viewFactory:visible:] */

void FUN_10b0a354c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705650;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b0a3590; end: 10b0a35a3; +[SCAppFooterCustomeViewProperty valdiMarshallableObjectDescriptor] */

void FUN_10b0a3590(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb7348;
  param_1[1] = &PTR_s_SCValdiViewFactory_110cb73d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0a35a4; end: 10b0a35c7; -[SCAppFooterViewModel init] */

void FUN_10b0a35a4(void)

{
  func_0x00010b0a35dc(PTR_PTR_112705658);
  return;
}



/* Entry: 10b0a35c8; end: 10b0a35ff; +[SCAppFooterViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b0a35c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb73e8;
  param_1[1] = &PTR_DAT_110cb74a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0a3600; end: 10b0a360b; -[SCPageLoadMetricServices .cxx_destruct] */

void FUN_10b0a3600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a360c; end: 10b0a3667; -[SCDampedHarmonicSpring initWithMass:stiffness:dampingCoefficient:] */

void FUN_10b0a360c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705668;
  uStack_40 = param_4;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 10b0a3668; end: 10b0a36db; -[SCDampedHarmonicSpring initWithDampingRatio:frequencyResponse:] */

void FUN_10b0a3668(double param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705668;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x3ff0000000000000;
    *(double *)((long)puVar1 + 0x10) = (6.283185307179586 / param_2) * (6.283185307179586 / param_2)
    ;
    *(double *)((long)puVar1 + 0x18) = (param_1 * 12.566370614359172) / param_2;
  }
  return;
}



/* Entry: 10b0a36dc; end: 10b0a36f7; -[SCDampedHarmonicSpring dampingRatio] */

double FUN_10b0a36dc(long param_1)

{
  double dVar1;
  
  dVar1 = SQRT(*(double *)(param_1 + 0x10) * *(double *)(param_1 + 8));
  return *(double *)(param_1 + 0x18) / (dVar1 + dVar1);
}



/* Entry: 10b0a36f8; end: 10b0a3717; -[SCDampedHarmonicSpring frequencyResponse] */

double FUN_10b0a36f8(double param_1)

{
  func_0x00010c27f640();
  return 6.283185307179586 / param_1;
}



/* Entry: 10b0a3718; end: 10b0a3727; -[SCDampedHarmonicSpring undampedNaturalFrequency] */

double FUN_10b0a3718(long param_1)

{
  return SQRT(*(double *)(param_1 + 0x10) / *(double *)(param_1 + 8));
}



/* Entry: 10b0a3728; end: 10b0a376f; -[SCDampedHarmonicSpring dampedNaturalFrequency] */

double FUN_10b0a3728(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c27f640();
  dVar1 = param_1;
  func_0x00010bf63440(param_2);
  return param_1 * SQRT(ABS(1.0 - dVar1 * dVar1));
}



/* Entry: 10b0a3770; end: 10b0a388b; -[SCDampedHarmonicSpring positionAtTime:initialPosition:initialVelocity:] */

double FUN_10b0a3770(double param_1,double param_2,double param_3,long param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = param_1;
  func_0x00010bf63440();
  dVar1 = *(double *)(param_4 + 0x18) / *(double *)(param_4 + 8);
  dVar5 = dVar1 * 0.5;
  func_0x00010bf63400(param_4);
  dVar4 = 1e-06;
  if (1e-06 <= ABS(dVar3 + -1.0)) {
    if (1.0 <= dVar3) {
      dVar4 = (param_3 + (dVar1 + dVar5) * param_2) / (dVar1 + dVar1);
      dVar2 = -(dVar5 * param_1);
      _exp(dVar2);
      dVar3 = param_1 * dVar1;
      _exp(dVar3);
      dVar1 = -(dVar1 * param_1);
      _exp(dVar1);
      dVar2 = dVar2 * (dVar1 * (param_2 - dVar4) + dVar3 * dVar4);
    }
    else {
      dVar2 = -(dVar5 * param_1);
      _exp(dVar2);
      param_1 = param_1 * dVar1;
      ___sincos_stret(param_1);
      dVar2 = dVar2 * (param_1 * ((param_3 + param_2 * dVar5) / dVar1) + dVar4 * param_2);
    }
  }
  else {
    dVar2 = -(dVar5 * param_1);
    _exp(dVar2);
    dVar2 = dVar2 * (param_2 + param_1 * (param_3 + param_2 * dVar5));
  }
  return dVar2;
}



/* Entry: 10b0a388c; end: 10b0a3953; -[SCDampedHarmonicSpring maximumDisplacementFromEquilibrium:] */

double FUN_10b0a388c(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  func_0x00010bf63440();
  dVar2 = *(double *)(param_2 + 0x18) / *(double *)(param_2 + 8);
  dVar3 = dVar2 * 0.5;
  func_0x00010bf63400(param_2);
  if (1e-06 <= ABS(dVar1 + -1.0)) {
    if (1.0 <= dVar1) {
      dVar3 = (dVar2 + dVar3) / (dVar3 - dVar2);
      _log(dVar3);
      dVar3 = dVar3 / (dVar2 + dVar2);
    }
    else {
      dVar3 = dVar2 / dVar3;
      _atan(dVar3);
      dVar3 = dVar3 / dVar2;
    }
  }
  else {
    dVar3 = 1.0 / dVar3;
  }
  func_0x00010c1042a0(dVar3,0,param_1,param_2);
  return ABS(dVar3);
}



/* Entry: 10b0a3954; end: 10b0a39af; -[SCDampedHarmonicSpring timingFunctionWithRelativeInitialVelocity:] */

void FUN_10b0a3954(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
  func_0x00010c028a80(uVar1,uVar2,uVar3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a39b0; end: 10b0a39b7; -[SCDampedHarmonicSpring timingFunctionWithRelativeInitialFloatVelocity:] */

void FUN_10b0a39b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c270e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_1,param_2,PTR_s_timingFunctionWithRelativeInitia_112679db0);
  return;
}



/* Entry: 10b0a39b8; end: 10b0a39eb; -[SCDampedHarmonicSpring timingFunctionWithInitialVelocity:from:to:] */

void FUN_10b0a39b8(undefined8 param_1)

{
  func_0x00010c128300();
                    /* WARNING: Could not recover jumptable at 0x00010c270e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_timingFunctionWithRelativeInitia_112679da8);
  return;
}



/* Entry: 10b0a39ec; end: 10b0a3a6b; -[SCDampedHarmonicSpring timingFunctionWithInitialFloatVelocity:from:to:context:] */

void FUN_10b0a39ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c279540(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86320();
  if (dVar1 <= 1.0) {
    dVar1 = 1.0;
  }
  _objc_release(param_6);
  func_0x00010c128300(param_1,param_2,param_3,1.0 / dVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c270e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_timingFunctionWithRelativeInitia_112679da8);
  return;
}



/* Entry: 10b0a3a6c; end: 10b0a3b2b; -[SCDampedHarmonicSpring timingFunctionWithInitialVelocity:from:to:context:] */

void FUN_10b0a3a6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c279540(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86320();
  if (dVar1 <= 1.0) {
    dVar1 = 1.0;
  }
  _objc_release(param_9);
  func_0x00010c128300(param_1,param_3,param_5,1.0 / dVar1,param_7);
  func_0x00010c128300(param_2,param_4,param_6,1.0 / dVar1,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010c270e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_7,PTR_s_timingFunctionWithRelativeInitia_112679db0);
  return;
}



/* Entry: 10b0a3b2c; end: 10b0a3b9f; -[SCDampedHarmonicSpring relativeVelocityForVelocity:from:to:epsilon:] */

double FUN_10b0a3b2c(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  if (ABS(param_3 - param_2) < param_4) {
    dVar1 = param_1;
    func_0x00010c0c33e0();
    if (dVar1 < param_4 + param_4) {
      return 0.0;
    }
    param_2 = -param_4;
    if (0.0 <= param_1) {
      param_2 = param_4;
    }
    param_2 = param_3 + param_2;
  }
  return param_1 / (param_3 - param_2);
}



/* Entry: 10b0a3ba0; end: 10b0a3c07; -[SCPanningGestureRecognizer initWithTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112705670;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278c824) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278c828) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278c82c) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278c830) = 0x4050800000000000;
  }
  return;
}



/* Entry: 10b0a3c08; end: 10b0a3e3f; -[SCPanningGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3c08(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_5);
  puStack_98 = PTR_PTR_112705670;
  lStack_a0 = param_3;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_touchesBegan_withEvent__11267b780,param_5,param_6);
  lVar8 = (long)_DAT_11278c828;
  if (*(long *)(param_3 + lVar8) != 0) {
    uVar2 = param_5;
    func_0x00010bf00560(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar3);
    dVar9 = param_1;
    dVar10 = param_2;
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar7 = *(ulong *)(param_3 + lVar8);
    dVar12 = 0.0;
    dVar15 = 0.0;
    uVar6 = (uint)uVar7;
    if ((uVar6 >> 1 & 1) != 0) {
      dVar15 = *(double *)(param_3 + _DAT_11278c830);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      dVar12 = *(double *)(param_3 + _DAT_11278c830);
    }
    dVar13 = 0.0;
    dVar14 = 0.0;
    if ((uVar7 & 1) != 0) {
      dVar14 = *(double *)(param_3 + _DAT_11278c830);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      dVar13 = *(double *)(param_3 + _DAT_11278c830);
    }
    lVar8 = param_3;
    func_0x00010c29bf00();
    bVar1 = (byte)lVar8;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar11 = dVar15 + dVar9;
    lVar8 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar4 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar9 = dVar9 - dVar15;
    dVar12 = dVar9 - dVar12;
    lVar5 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release();
    _CGRectContainsPoint(dVar11,dVar14 + dVar10,dVar12,(dVar9 - dVar14) - dVar13,param_1,param_2);
    *(byte *)(param_3 + _DAT_11278c82c) = bVar1 ^ 1;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10b0a3e40; end: 10b0a3e4f; -[SCPanningGestureRecognizer edgePanDistanceThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a3e40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c830);
}



/* Entry: 10b0a3e50; end: 10b0a3e5f; -[SCPanningGestureRecognizer setEdgePanDistanceThreshold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3e50(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278c830) = param_1;
  return;
}



/* Entry: 10b0a3e60; end: 10b0a3e6f; -[SCPanningGestureRecognizer hasHighPriority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b0a3e60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c824);
}



/* Entry: 10b0a3e70; end: 10b0a3e7f; -[SCPanningGestureRecognizer setHasHighPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3e70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278c824) = param_3;
  return;
}



/* Entry: 10b0a3e80; end: 10b0a3e8f; -[SCPanningGestureRecognizer isEdgePan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b0a3e80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278c82c);
}



/* Entry: 10b0a3e90; end: 10b0a3e9f; -[SCPanningGestureRecognizer edges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0a3e90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278c828);
}



/* Entry: 10b0a3ea0; end: 10b0a3eaf; -[SCPanningGestureRecognizer setEdges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a3ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278c828) = param_3;
  return;
}



/* Entry: 10b0a3eb0; end: 10b0a3f13; -[SCPanningTransitionCoordinator dealloc] */

void FUN_10b0a3eb0(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_112705678;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b0a3f14; end: 10b0a3f87; -[SCPanningTransitionCoordinator gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

ulong FUN_10b0a3f14(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126c2bc0;
  _objc_opt_class(PTR_PTR_1126c2bc0);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfd7be0(uVar1);
  _objc_release(uVar1);
  _objc_release(in_x3);
  return uVar3;
}



/* Entry: 10b0a3f88; end: 10b0a3fcf; -[SCPanningTransitionCoordinator _relativeView] */

void FUN_10b0a3f88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c30a2c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0a3fd0; end: 10b0a4077; -[SCPanningTransitionCoordinator _panGestureUpdated:] */

void FUN_10b0a3fd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else if (lVar1 == 1) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      func_0x00010be8a2e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_3,param_2,param_1);
      _objc_release(param_1);
    }
    else if (lVar1 == 2) {
      func_0x00010be6fde0(param_1);
    }
  }
  else if (lVar1 - 3U < 3) {
    func_0x00010be6fe00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a4078; end: 10b0a42cb; -[SCPanningTransitionCoordinator _panGestureStateChangedHandler] */

void FUN_10b0a4078(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = param_5;
  func_0x00010be8a2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(*(undefined8 *)(param_5 + 0x40),param_6,lVar1);
  dVar7 = param_1;
  dVar8 = param_2;
  func_0x00010c297a00(*(undefined8 *)(param_5 + 0x40),param_6,lVar1);
  func_0x00010bf20c00(lVar1);
  lVar4 = *(long *)(param_5 + 0x20);
  if (lVar4 != 1 && (ABS(param_1) <= ABS(param_2) || lVar4 == 2)) {
    param_3 = ABS(param_2) / param_4;
    if (0.0 <= param_2) {
      bVar5 = 100.0 <= dVar8 || 0.0 <= dVar8 && 0.2 < param_3;
      uVar6 = 8;
    }
    else {
      bVar5 = dVar8 <= -100.0 || dVar8 <= 0.0 && 0.2 < param_3;
      uVar6 = 4;
    }
  }
  else {
    param_3 = ABS(param_1) / param_3;
    if (0.0 <= param_1) {
      bVar5 = 100.0 <= dVar7 || 0.0 <= dVar7 && 0.2 < param_3;
      uVar6 = 2;
    }
    else {
      bVar5 = dVar7 <= -100.0 || dVar7 <= 0.0 && 0.2 < param_3;
      uVar6 = 1;
    }
  }
  uVar6 = *(ulong *)(param_5 + 0x38) & uVar6;
  if (((*(char *)(param_5 + 0x28) == '\x01') && (lVar4 == 0)) && (uVar6 != 0)) {
    uVar2 = 1;
    if (2 < uVar6) {
      uVar2 = 2;
    }
    *(undefined8 *)(param_5 + 0x20) = uVar2;
  }
  *(bool *)(param_5 + 0x18) = bVar5;
  if ((*(long *)(param_5 + 8) != 0) && (*(ulong *)(param_5 + 0x10) != uVar6)) {
    func_0x00010bf43be0(*(long *)(param_5 + 8),param_6,0,1);
    uVar2 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(param_5 + 8) = 0;
    _objc_release(uVar2);
  }
  *(ulong *)(param_5 + 0x10) = uVar6;
  if (uVar6 != 0) {
    lVar4 = *(long *)(param_5 + 8);
    if (lVar4 == 0) {
      func_0x00010c09ef00(*(undefined8 *)(param_5 + 0x40),param_6,lVar1);
      func_0x00010bfb68e0(lVar1);
      _CGRectInset();
      _CGRectContainsPoint();
      lVar4 = param_5 + 0x30;
      _objc_loadWeakRetained();
      lVar3 = lVar4;
      func_0x00010c0f37c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + 8);
      *(long *)(param_5 + 8) = lVar3;
      _objc_release(uVar2);
      _objc_release(lVar4);
      lVar4 = *(long *)(param_5 + 8);
    }
    func_0x00010c286a00(param_3,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0a42cc; end: 10b0a437f; -[SCPanningTransitionCoordinator _panGestureStateTerminalHandler] */

void FUN_10b0a42cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_3 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_3 + 0x40);
    func_0x00010c252440(lVar2);
    bVar1 = lVar2 == 3;
  }
  else {
    bVar1 = false;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  lVar2 = param_3;
  func_0x00010be8a2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(uVar3,param_4,lVar2);
  _objc_release(lVar2);
  func_0x00010bf43c00(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,bVar1,1);
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  return;
}



/* Entry: 10b0a4380; end: 10b0a4397; -[SCPanningTransitionCoordinator delegate] */

void FUN_10b0a4380(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a4398; end: 10b0a439f; -[SCPanningTransitionCoordinator allowedDirections] */

undefined8 FUN_10b0a4398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0a43a0; end: 10b0a43a7; -[SCPanningTransitionCoordinator panGestureRecognizer] */

undefined8 FUN_10b0a43a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0a43a8; end: 10b0a443f; -[SCPanningTransitionCoordinator .cxx_destruct] */

void FUN_10b0a43a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a4440; end: 10b0a4447; -[SIGModalPresentationPresentationStyle modal] */

undefined8 FUN_10b0a4440(void)

{
  return 1;
}



/* Entry: 10b0a4448; end: 10b0a4453; -[SIGModalPresentationPresentationStyle duration] */

undefined8 FUN_10b0a4448(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b0a4454; end: 10b0a4467; -[SIGModalPresentationPresentationStyle footerAnimationStyle] */

undefined8 FUN_10b0a4454(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (*(long *)(param_1 + 0x10) != 3) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b0a4468; end: 10b0a446f; -[SIGModalPresentationPresentationStyle headerAnimationStyle] */

undefined8 FUN_10b0a4468(void)

{
  return 0;
}



/* Entry: 10b0a4470; end: 10b0a4477; -[SIGModalPresentationPresentationStyle completionCurve] */

undefined8 FUN_10b0a4470(void)

{
  return 2;
}



/* Entry: 10b0a4478; end: 10b0a4a33; -[SIGModalPresentationPresentationStyle setupInContext:] */

void FUN_10b0a4478(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_7);
  if (*(long *)(param_5 + 0x10) != 3) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_5 + 8);
    *(undefined **)(param_5 + 8) = puVar1;
    _objc_release(uVar3);
    _objc_retain(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1,param_6,puVar2);
    _objc_release(puVar2);
    func_0x00010c1677c0(0,puVar1);
    puVar2 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  puVar1 = param_7;
  func_0x00010c0d95a0(param_7);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010c0d95a0(param_7);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 16.0;
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_7;
  func_0x00010c0d95a0(param_7);
  func_0x00010bf21300(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_7;
  func_0x00010c0e20e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0(puVar1,param_6,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar9 = *(long *)(param_5 + 0x10);
  puVar2 = param_7;
  if (lVar9 < 2) {
    if (lVar9 == 0) {
      puVar1 = param_7;
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGAffineTransformMakeTranslation(&uStack_140,0,param_4);
      func_0x00010c0d95a0(param_7);
      uStack_d8 = uStack_138;
      uStack_e0 = uStack_140;
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
    }
    else {
      if (lVar9 != 1) goto LAB_10b0a4a04;
      puVar1 = param_7;
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGAffineTransformMakeTranslation(&uStack_b0,param_3,0);
      func_0x00010c0d95a0(param_7);
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
    }
LAB_10b0a49e8:
    func_0x00010c219960();
  }
  else {
    if (lVar9 == 2) {
      puVar1 = param_7;
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGAffineTransformMakeTranslation(&uStack_110,-param_3,0);
      func_0x00010c0d95a0(param_7);
      uStack_d8 = uStack_108;
      uStack_e0 = uStack_110;
      uStack_c8 = uStack_f8;
      uStack_d0 = uStack_100;
      goto LAB_10b0a49e8;
    }
    if (lVar9 != 3) goto LAB_10b0a4a04;
    func_0x00010c0efb80(param_7);
    dVar11 = param_3;
    func_0x00010c0efb80(param_7);
    func_0x00010bf19a00(dVar10,param_2,param_3,param_4,dVar11 / 6.0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c0d95a0(param_7);
    func_0x00010bf20c00();
    puVar5 = param_7;
    dVar11 = dVar10;
    func_0x00010c0d95a0(param_7);
    func_0x00010bf20c00();
    puVar6 = param_7;
    func_0x00010c0d95a0(param_7);
    func_0x00010bf20c00();
    puVar7 = param_7;
    func_0x00010c0d95a0(param_7);
    func_0x00010bf20c00();
    func_0x00010bfb4320(param_7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(dVar10,param_2,param_3,param_4 - dVar11,0x403c000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar5,param_6,puVar7);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar6,param_6,puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_6,
                        &PTR____CFConstantStringClassReference_110dbfab8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea580();
    func_0x00010c1a1180(puVar7,param_6,puVar4);
    puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc0c0(0x3e800000,0x3f800000,0x3f000000,0x3f800000,
                        PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar7,param_6,puVar4);
    _objc_release(puVar4);
    func_0x00010c192d40(0x3fd3333333333333,puVar7);
    puVar4 = param_7;
    func_0x00010c0d95a0(param_7);
    puVar8 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar8);
    _objc_release(puVar4);
    func_0x00010bef6c20(puVar5,param_6,puVar7,&PTR____CFConstantStringClassReference_110dbfab8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_10b0a4a04:
  _objc_release(param_7);
  return;
}



/* Entry: 10b0a4a34; end: 10b0a4aeb; -[SIGModalPresentationPresentationStyle performAnimationsInContext:] */

void FUN_10b0a4a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b0a4aec; end: 10b0a4c07; -[SIGModalPresentationPresentationStyle completeInContext:didComplete:] */

void FUN_10b0a4aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b0a4c08; end: 10b0a4c0f; -[SIGModalDismissalPresentationStyle modal] */

undefined8 FUN_10b0a4c08(void)

{
  return 1;
}



/* Entry: 10b0a4c10; end: 10b0a4c1b; -[SIGModalDismissalPresentationStyle duration] */

undefined8 FUN_10b0a4c10(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b0a4c1c; end: 10b0a4c2f; -[SIGModalDismissalPresentationStyle footerAnimationStyle] */

undefined8 FUN_10b0a4c1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (*(long *)(param_1 + 0x10) != 3) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10b0a4c30; end: 10b0a4c37; -[SIGModalDismissalPresentationStyle headerAnimationStyle] */

undefined8 FUN_10b0a4c30(void)

{
  return 0;
}



/* Entry: 10b0a4c38; end: 10b0a4c3f; -[SIGModalDismissalPresentationStyle completionCurve] */

undefined8 FUN_10b0a4c38(void)

{
  return 1;
}



/* Entry: 10b0a4c40; end: 10b0a50c7; -[SIGModalDismissalPresentationStyle setupInContext:] */

void FUN_10b0a4c40(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined **)(param_5 + 8) = puVar1;
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c1677c0(0x3fe0000000000000,puVar1);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c0d95a0(param_7);
  func_0x00010c15cda0(uVar2,param_6,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c0e20e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(uVar2,param_6,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c0e20e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar11 = 0.0;
  func_0x00010c1842e0(0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_7;
  func_0x00010c0e20e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (*(long *)(param_5 + 0x10) == 3) {
    func_0x00010c0efb80(param_7);
    dVar12 = param_3;
    func_0x00010c0efb80(param_7);
    func_0x00010bf19a00(dVar11,param_2,param_3,param_4,dVar12 / 6.0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = param_7;
    func_0x00010c0e20e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar3 = param_7;
    dVar12 = dVar11;
    func_0x00010c0e20e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar5 = param_7;
    func_0x00010c0e20e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar6 = param_7;
    func_0x00010c0e20e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bfb4320(param_7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(dVar11,param_2,param_3,param_4 - dVar12,0x403c000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    puVar8 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar8,param_6,puVar10);
    _objc_release(puVar9);
    uVar2 = param_7;
    func_0x00010c0e20e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar9 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_6,
                        &PTR____CFConstantStringClassReference_110dbfab8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920();
    puVar10 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc0c0(0x3e800000,0x3f800000,0x3f000000,0x3f800000,
                        PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar9,param_6,puVar10);
    func_0x00010c216080(puVar9,param_6,puVar10);
    _objc_release(puVar10);
    func_0x00010c192d40(0x3fd3333333333333,puVar9);
    func_0x00010bef6c20(puVar8,param_6,puVar9,&PTR____CFConstantStringClassReference_110dbfab8);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b0a50c8; end: 10b0a5293; -[SIGModalDismissalPresentationStyle performAnimationsInContext:] */

void FUN_10b0a50c8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  lVar3 = *(long *)(param_5 + 0x10);
  uVar1 = param_7;
  uVar2 = param_7;
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGAffineTransformMakeTranslation(&uStack_f0,0,param_4);
      func_0x00010c0e20e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uStack_e8;
      uStack_90 = uStack_f0;
      uStack_78 = uStack_d8;
      uStack_80 = uStack_e0;
    }
    else {
      if (lVar3 != 1) goto LAB_10b0a5230;
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGAffineTransformMakeTranslation(&uStack_60,param_3,0);
      func_0x00010c0e20e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_78 = uStack_48;
      uStack_80 = uStack_50;
    }
LAB_10b0a5214:
    func_0x00010c219960();
    _objc_release(uVar2);
  }
  else {
    if (lVar3 == 2) {
      func_0x00010bf4b2a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGAffineTransformMakeTranslation(&uStack_c0,-param_3,0);
      func_0x00010c0e20e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      goto LAB_10b0a5214;
    }
    if (lVar3 != 3) goto LAB_10b0a5230;
    func_0x00010c0e20e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
  }
  _objc_release(uVar1);
LAB_10b0a5230:
  uVar1 = param_7;
  func_0x00010c0e20e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_5 + 8));
  _objc_release(param_7);
  return;
}



/* Entry: 10b0a5294; end: 10b0a533f; -[SIGModalDismissalPresentationStyle completeInContext:didComplete:] */

void FUN_10b0a5294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 3) {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010c0e20e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c0e20e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10b0a5340; end: 10b0a5393;  */

void FUN_10b0a5340(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f3fc8 != -1) {
    func_0x000107c27d9c(0x1137f3fc8,&PTR___NSConcreteGlobalBlock_110cb74d8);
  }
  uVar1 = uRam00000001137f3fc0;
  _objc_retain(uRam00000001137f3fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a5394; end: 10b0a53bf;  */

void FUN_10b0a5394(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126df798;
  _objc_alloc_init();
  uVar1 = puRam00000001137f3fc0;
  puRam00000001137f3fc0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


