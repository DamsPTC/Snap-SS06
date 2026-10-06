/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cbe81c; end: 105cbe84f; -[SCMemoriesAddSnapsViewController _dismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbe81c(long param_1)

{
  param_1 = param_1 + _DAT_112733bb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbe850; end: 105cbe853; -[SCMemoriesAddSnapsViewController preferredStatusBarStyle] */

undefined8 FUN_105cbe850(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105cbe854; end: 105cbe89f; -[SCMemoriesAddSnapsViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_105cbe854(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecbc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didSelectDismissalActionWithHead_1125bc3f8);
  func_0x00010be02280(param_1);
  return;
}



/* Entry: 105cbe8a0; end: 105cbea3b; -[SCMemoriesAddSnapsViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105cbe8a0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  dVar10 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_3 + _DAT_112733bc0);
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_e8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        puVar7 = *(undefined1 **)(lStack_128 + lVar9 * 8);
        puVar3 = puVar7;
        func_0x00010bf40120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (param_5 == puVar3) {
          puVar3 = puVar7;
          func_0x00010bf40120(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4cdc0();
          func_0x00010bf40120(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befda00();
          puVar6 = (undefined1 *)(ulong)(param_2 + dVar10 <= 0.0);
          _objc_release(puVar7);
          _objc_release(puVar3);
          goto LAB_105cbe9ec;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar5 = auStack_e8;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar6 = (undefined1 *)0x1;
LAB_105cbe9ec:
  _objc_release(lVar1);
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_160;
  pcStack_138 = FUN_105cbea3c;
  puStack_158 = PTR_PTR_1126ecbc0;
  puStack_160 = puVar3;
  lStack_150 = lVar1;
  puStack_148 = param_5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_160,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if (puVar5 == (undefined1 *)0x1) {
    func_0x00010be02280(puVar3);
    ppuVar4 = (undefined1 **)puVar3;
  }
  return (undefined1 *)ppuVar4;
}



/* Entry: 105cbea3c; end: 105cbea93; -[SCMemoriesAddSnapsViewController cardTransitionEndedWithView:transitionType:] */

void FUN_105cbea3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecbc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_cardTransitionEndedWithView_tran_1125aa1a8);
  if (param_4 == 1) {
    func_0x00010be02280(param_1);
  }
  return;
}



/* Entry: 105cbea94; end: 105cbeadb; -[SCMemoriesAddSnapsViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cbea94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733bc0);
  func_0x00010c267b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105cbeadc; end: 105cbebf7; -[SCMemoriesAddSnapsViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbeadc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112733bc0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c267b40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  uVar2 = uVar4;
  func_0x00010c0dfd40(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c3a88;
  _objc_opt_class(PTR_PTR_1126c3a88);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010be4eaa0(param_1,param_2,uVar2);
  uVar4 = uVar2;
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115e0(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cbebf8; end: 105cbed0f; -[SCMemoriesAddSnapsViewController _loadTabController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105cbebf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_7;
  _objc_retain(param_7);
  puVar1 = param_7;
  func_0x00010c0834c0();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c09c7a0(param_7);
    func_0x00010c2237c0(param_7,param_6,1);
    uVar2 = *(undefined8 *)(param_5 + _DAT_112733bc4);
    func_0x00010bf012a0(uVar2);
    func_0x00010c1facc0(param_7,param_6,uVar2);
    func_0x00010bf31fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_7;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c067a20(param_5,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(param_5);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  uVar2 = param_1;
  func_0x00010bfb68e0(puVar4);
  _objc_release(puVar4);
  _CGRectGetHeight(uVar2,param_2,param_3,param_4);
  _objc_release(param_7);
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 105cbed10; end: 105cbedb7; -[SCMemoriesAddSnapsViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_105cbed10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_7);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  uVar1 = param_1;
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  _CGRectGetHeight(uVar1,param_2,param_3,param_4);
  _objc_release(param_5);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 105cbedb8; end: 105cbeee7; -[SCMemoriesAddSnapsViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbedb8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c081660();
  if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c070ea0(), (int)uVar1 != 0)) {
    lVar3 = (long)_DAT_112733bf0;
    func_0x00010bf4cdc0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
    lVar3 = param_1;
    func_0x00010bfdf5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c267600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar3);
    func_0x00010bfdf5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c267600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fade0();
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cbeee8; end: 105cbeef3; -[SCMemoriesAddSnapsViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_105cbeee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFocusedTab_112593a80);
  return;
}



/* Entry: 105cbeef4; end: 105cbeef7; -[SCMemoriesAddSnapsViewController scrollViewDidEndDecelerating:] */

void FUN_105cbeef4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFocusedTab_112593a80);
  return;
}



/* Entry: 105cbeef8; end: 105cbeefb; -[SCMemoriesAddSnapsViewController scrollViewDidEndScrollingAnimation:] */

void FUN_105cbeef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFocusedTab_112593a80);
  return;
}



/* Entry: 105cbeefc; end: 105cbf05b; -[SCMemoriesAddSnapsViewController _updateFocusedTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbeefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *(undefined8 *)(param_5 + _DAT_112733bf0);
  func_0x00010bf20c00(uVar7);
  uVar4 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010bfed040(uVar4,param_1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112733bc0;
  lVar1 = *(long *)(param_5 + lVar9);
  func_0x00010c267b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar8 = 0;
    do {
      func_0x00010c0840e0(uVar7);
      uVar3 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c267b40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e220();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar8 = uVar8 + 1;
      uVar5 = *(ulong *)(param_5 + lVar9);
      func_0x00010c267b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar8 < uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105cbf05c; end: 105cbf127; -[SCMemoriesAddSnapsViewController memoriesAddSnapsDataProviderDidChangeSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf05c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c159920();
  ppuVar1 = *(undefined ***)(param_1 + _DAT_112733be4);
  func_0x00010c195460(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dba798;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba798,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(param_1);
  }
  else {
    func_0x000108dfd6a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105cbf128; end: 105cbf12f; -[SCMemoriesAddSnapsViewController pageViewName] */

undefined8 FUN_105cbf128(void)

{
  return 0x6b;
}



/* Entry: 105cbf130; end: 105cbf13f; -[SCMemoriesAddSnapsViewController shouldPopToRootViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733bc4),PTR_s_dismissOnAppBackground_1125be950);
  return;
}



/* Entry: 105cbf140; end: 105cbf14f; -[SCMemoriesAddSnapsViewController shouldPopToRootViewControllerLater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733bc4),PTR_s_dismissOnAppBackground_1125be950);
  return;
}



/* Entry: 105cbf150; end: 105cbf17f; -[SCMemoriesAddSnapsViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf150(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733bc8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cbf180; end: 105cbf1af; -[SCMemoriesAddSnapsViewController defaultSubProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf180(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733bcc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cbf1b0; end: 105cbf2ab; -[SCMemoriesAddSnapsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf1b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733bdc,0);
  _objc_storeStrong(param_1 + _DAT_112733bf4,0);
  _objc_storeStrong(param_1 + _DAT_112733be0,0);
  _objc_storeStrong(param_1 + _DAT_112733be8,0);
  _objc_storeStrong(param_1 + _DAT_112733bec,0);
  _objc_storeStrong(param_1 + _DAT_112733bd0,0);
  _objc_storeStrong(param_1 + _DAT_112733be4,0);
  _objc_storeStrong(param_1 + _DAT_112733bf0,0);
  _objc_storeStrong(param_1 + _DAT_112733bcc,0);
  _objc_storeStrong(param_1 + _DAT_112733bc8,0);
  _objc_storeStrong(param_1 + _DAT_112733bc4,0);
  _objc_storeStrong(param_1 + _DAT_112733bbc,0);
  _objc_storeStrong(param_1 + _DAT_112733bc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733bb8);
  return;
}



/* Entry: 105cbf2ac; end: 105cbf357; -[SCMemoriesAddSnapsAddTappedActionModel initWithItems:snaps:] */

undefined1 *
FUN_105cbf2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecbc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cbf358; end: 105cbf37b; -[SCMemoriesAddSnapsAddTappedActionModel copyWithZone:] */

undefined8 FUN_105cbf358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105cbf37c; end: 105cbf3ef; -[SCMemoriesAddSnapsAddTappedActionModel hash] */

undefined8 * FUN_105cbf37c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105cbf470:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105cbf47c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105cbf47c;
        }
        goto LAB_105cbf470;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105cbf47c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105cbf3f0; end: 105cbf497; -[SCMemoriesAddSnapsAddTappedActionModel isEqual:] */

long FUN_105cbf3f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105cbf470:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105cbf47c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_105cbf47c;
        }
        goto LAB_105cbf470;
      }
    }
    lVar3 = 0;
  }
LAB_105cbf47c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105cbf498; end: 105cbf49f; -[SCMemoriesAddSnapsAddTappedActionModel items] */

undefined8 FUN_105cbf498(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cbf4a0; end: 105cbf4a7; -[SCMemoriesAddSnapsAddTappedActionModel snaps] */

undefined8 FUN_105cbf4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cbf4a8; end: 105cbf4d7; -[SCMemoriesAddSnapsAddTappedActionModel .cxx_destruct] */

void FUN_105cbf4a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cbf4d8; end: 105cbf613; -[SCMemoriesHeroPlayerController initWithSearchSessionLoggingCoordinator:inlineSearchDataSource:navigationItem:delegate:memoriesExperimentService:memoriesSearchPreTypeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105cbf4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
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
  puStack_58 = PTR_PTR_1126ecbd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112733c08),param_6);
    puVar2 = PTR_PTR_1126c3a90;
    _objc_alloc();
    func_0x00010c019f80();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733c0c);
    *(undefined **)((long)puVar1 + (long)_DAT_112733c0c) = puVar2;
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



/* Entry: 105cbf614; end: 105cbf927; -[SCMemoriesHeroPlayerController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105cbf614(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ecbd0;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  lVar18 = (long)_DAT_112733c0c;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = *(undefined **)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  puStack_88 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  uStack_78 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  return puVar17;
}



/* Entry: 105cbf928; end: 105cbf92f; -[SCMemoriesHeroPlayerController getPreferredStatusBarStyleWithDefualtStyle:] */

undefined8 FUN_105cbf928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 105cbf930; end: 105cbf93f; -[SCMemoriesHeroPlayerController clearSearchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_clearSearchField_1125ac998);
  return;
}



/* Entry: 105cbf940; end: 105cbf94f; -[SCMemoriesHeroPlayerController dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_dismissKeyboard_1125be8b8);
  return;
}



/* Entry: 105cbf950; end: 105cbf95f; -[SCMemoriesHeroPlayerController focusSearchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_focusSearchField_1125ca740);
  return;
}



/* Entry: 105cbf960; end: 105cbf96f; -[SCMemoriesHeroPlayerController setRightButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ee130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_setRightButtonMode__112659270);
  return;
}



/* Entry: 105cbf970; end: 105cbf97f; -[SCMemoriesHeroPlayerController rightButtonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c140970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_rightButtonMode_11262dc78);
  return;
}



/* Entry: 105cbf980; end: 105cbf98f; -[SCMemoriesHeroPlayerController selectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_selectionEnabled_1126343a8);
  return;
}



/* Entry: 105cbf990; end: 105cbf99f; -[SCMemoriesHeroPlayerController setSelectionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_setSelectionEnabled__11265c840);
  return;
}



/* Entry: 105cbf9a0; end: 105cbf9af; -[SCMemoriesHeroPlayerController searchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1538d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_searchEnabled_112632850);
  return;
}



/* Entry: 105cbf9b0; end: 105cbf9bf; -[SCMemoriesHeroPlayerController setSearchEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf9b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_setSearchEnabled__11265baf8);
  return;
}



/* Entry: 105cbf9c0; end: 105cbf9cf; -[SCMemoriesHeroPlayerController headerBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf9c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_headerBar_1125d55e8);
  return;
}



/* Entry: 105cbf9d0; end: 105cbf9df; -[SCMemoriesHeroPlayerController setSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_setSelectionMode__11265c8a0);
  return;
}



/* Entry: 105cbf9e0; end: 105cbf9ef; -[SCMemoriesHeroPlayerController setCurrentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf9e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c187470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c0c),PTR_s_setCurrentHeight__11263f738);
  return;
}



/* Entry: 105cbf9f0; end: 105cbfa23; -[SCMemoriesHeroPlayerController galleryHeaderBarDidPressQuestionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbf9f0(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfa24; end: 105cbfa57; -[SCMemoriesHeroPlayerController galleryHeaderBarDidPressSelectButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfa24(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfa58; end: 105cbfa8b; -[SCMemoriesHeroPlayerController galleryHeaderBarDidPressSearchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfa58(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfa8c; end: 105cbfabf; -[SCMemoriesHeroPlayerController galleryHeaderBarRequestsNavigationToMemoriesHome] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfa8c(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfac0; end: 105cbfaf3; -[SCMemoriesHeroPlayerController galleryHeaderBarEndedSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfac0(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfaf4; end: 105cbfb27; -[SCMemoriesHeroPlayerController galleryHeaderBarDidPressDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfaf4(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfb28; end: 105cbfb5b; -[SCMemoriesHeroPlayerController galleryHeaderBarDidTapHeaderItemTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfb28(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfb5c; end: 105cbfb9b; -[SCMemoriesHeroPlayerController galleryHasPublicStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cbfb5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfbce80();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105cbfb9c; end: 105cbfbd7; -[SCMemoriesHeroPlayerController updateMemoriesSearchPreTypeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfb9c(long param_1)

{
  param_1 = param_1 + _DAT_112733c08;
  _objc_loadWeakRetained(param_1);
  func_0x00010c287b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cbfbd8; end: 105cbfbe7; -[SCMemoriesHeroPlayerController selectionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cbfbd8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112733c00);
}



/* Entry: 105cbfbe8; end: 105cbfbf7; -[SCMemoriesHeroPlayerController currentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cbfbe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733c04);
}



/* Entry: 105cbfbf8; end: 105cbfc33; -[SCMemoriesHeroPlayerController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfbf8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112733c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733c0c,0);
  return;
}



/* Entry: 105cbfc34; end: 105cbff8b; -[SCMemoriesHeroPlayerView initWithHeaderBarDelegate:navigationItem:searchSessionLoggingCoordinator:inlineSearchDataSource:memoriesExperimentService:memoriesSearchPreTypeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105cbfc34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_90 = PTR_PTR_1126ecbd8;
  puVar14 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar14,PTR_s_init_1125d9248);
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR_PTR_1126c3a98;
    _objc_alloc();
    func_0x00010c02e9c0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar16 = (long)_DAT_112733c1c;
    uVar15 = *(undefined8 *)((long)puVar14 + lVar16);
    *(undefined **)((long)puVar14 + lVar16) = puVar1;
    _objc_release(uVar15);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar14 + lVar16));
    func_0x00010befbb60(puVar14);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar15 = uVar2;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar15;
    uVar4 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar14;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010c08de00(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar14 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010c2793a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar14 = *(undefined8 **)(param_3 + _DAT_112733c1c);
                    /* WARNING: Could not recover jumptable at 0x00010bf3bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar14,PTR_s_clearSearchField_1125ac998);
  return puVar14;
}



/* Entry: 105cbff8c; end: 105cbff9b; -[SCMemoriesHeroPlayerView clearSearchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbff8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_clearSearchField_1125ac998);
  return;
}



/* Entry: 105cbff9c; end: 105cbffab; -[SCMemoriesHeroPlayerView dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbff9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_dismissKeyboard_1125be8b8);
  return;
}



/* Entry: 105cbffac; end: 105cbffbb; -[SCMemoriesHeroPlayerView focusSearchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbffac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_focusSearchField_1125ca740);
  return;
}



/* Entry: 105cbffbc; end: 105cbffcb; -[SCMemoriesHeroPlayerView setRightButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbffbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ee130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_setRightButtonMode__112659270);
  return;
}



/* Entry: 105cbffcc; end: 105cbffdb; -[SCMemoriesHeroPlayerView rightButtonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbffcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c140970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_rightButtonMode_11262dc78);
  return;
}



/* Entry: 105cbffdc; end: 105cbffeb; -[SCMemoriesHeroPlayerView selectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbffdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_selectionEnabled_1126343a8);
  return;
}



/* Entry: 105cbffec; end: 105cbfffb; -[SCMemoriesHeroPlayerView setSelectionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbffec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_setSelectionEnabled__11265c840);
  return;
}



/* Entry: 105cbfffc; end: 105cc000b; -[SCMemoriesHeroPlayerView searchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cbfffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1538d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_searchEnabled_112632850);
  return;
}



/* Entry: 105cc000c; end: 105cc001b; -[SCMemoriesHeroPlayerView setSearchEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc000c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_setSearchEnabled__11265baf8);
  return;
}



/* Entry: 105cc001c; end: 105cc004b; -[SCMemoriesHeroPlayerView headerBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc001c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733c1c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cc004c; end: 105cc005b; -[SCMemoriesHeroPlayerView setSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc004c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fb9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c1c),PTR_s_setSelectionMode__11265c8a0);
  return;
}



/* Entry: 105cc005c; end: 105cc006b; -[SCMemoriesHeroPlayerView _preferredStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cc005c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112733c10);
}



/* Entry: 105cc006c; end: 105cc007b; -[SCMemoriesHeroPlayerView selectionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cc006c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112733c14);
}



/* Entry: 105cc007c; end: 105cc008b; -[SCMemoriesHeroPlayerView currentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc007c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733c18);
}



/* Entry: 105cc008c; end: 105cc009b; -[SCMemoriesHeroPlayerView setCurrentHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc008c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112733c18) = param_1;
  return;
}



/* Entry: 105cc009c; end: 105cc00fb; -[SCMemoriesHeroPlayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc009c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733c20,0);
  _objc_storeStrong(param_1 + _DAT_112733c24,0);
  _objc_storeStrong(param_1 + _DAT_112733c28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733c1c,0);
  return;
}



/* Entry: 105cc00fc; end: 105cc0793; -[SCGalleryHeaderBar initWithNavigationItem:frame:searchSessionLoggingCoordinator:inlineSearchDataSource:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105cc00fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_b8 = PTR_PTR_1126ecbe0;
  puVar1 = &uStack_c0;
  uStack_c0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112733c30) = 0;
    func_0x00010c17d4c0(puVar1);
    lVar17 = (long)_DAT_112733c34;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(long *)((long)puVar1 + lVar17) = param_7;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112733c38;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_10;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112733c3c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112733c40,param_9);
    _objc_retain();
    func_0x00010c1f8a60(param_9);
    _objc_release(param_9);
    puVar3 = PTR_PTR_1126c3aa0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733c44);
    *(undefined **)((long)puVar1 + (long)_DAT_112733c44) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3aa8;
    _objc_alloc();
    func_0x00010c008ec0();
    lVar15 = (long)_DAT_112733c48;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar3;
    _objc_release(uVar2);
    func_0x00010c211400(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_initWeak(auStack_c8,puVar1);
    _objc_copyWeak(auStack_d0,auStack_c8);
    func_0x00010c189e60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    lVar15 = (long)_DAT_112733c4c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar3;
    _objc_release(uVar2);
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c207380(0x4018000000000000,*(undefined8 *)((long)puVar1 + lVar15));
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733c50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733c50) = 0;
    _objc_release(uVar2);
    func_0x00010c190b80(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010bdeb8a0(puVar1);
    func_0x00010bee08a0(puVar1);
    puVar5 = PTR_PTR_1126af078;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar6 = PTR_PTR_1126af080;
    _objc_alloc_init(PTR_PTR_1126af080);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar6);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292ae0();
    _objc_release(puVar3);
    func_0x00010c216560(puVar6);
    func_0x00010c1dee80(puVar6);
    func_0x00010c18f820(puVar6);
    func_0x00010c18b5e0(puVar6);
    puVar16 = puVar1;
    func_0x00010bded300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188540(puVar6);
    func_0x00010c2194c0(puVar6);
    func_0x00010c216340(puVar6);
    func_0x00010c187440(puVar5);
    lVar15 = (long)_DAT_112733c54;
    _objc_retain(puVar5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf5eee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8460();
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar2;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar4;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a0 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
  puVar1 = (undefined8 *)(param_7 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    puVar16 = puVar1;
    func_0x00010bdd1640(puVar1);
  }
  _objc_release(puVar1);
  return puVar16;
}



/* Entry: 105cc0794; end: 105cc07db;  */

long FUN_105cc0794(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdd1640(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105cc07dc; end: 105cc0dbb; -[SCGalleryHeaderBar _createButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc07dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0(PTR_PTR_1126c3298,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112733c58;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar8);
  _objc_release(ppuVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c271420(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar8);
  _objc_release(puVar1);
  func_0x00010c1a8c20(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,
                      *(undefined8 *)(param_1 + lVar10));
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar8);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112733c5c;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar8);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  ppuVar2 = &PTR____CFConstantStringClassReference_110dba798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba798,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar11));
  _objc_release(ppuVar2);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar11));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1a8c20(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,
                      *(undefined8 *)(param_1 + lVar11));
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c181e40(0,0x4028000000000000,0,0x4028000000000000);
  func_0x000108dfdaf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c271420(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar8);
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar8);
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar8);
  _objc_release(puVar1);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402e000000000000);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08c0e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar4);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112733c60;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR_PTR_1126b0c40;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b0c40;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar9));
  lVar9 = (long)_DAT_112733c4c;
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0(PTR_PTR_1126c3298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  puVar1 = PTR_PTR_1126b0c40;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4046000000000000,0x4040000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4024000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1a9fc0(puVar6);
  func_0x00010befbd60(puVar6);
  func_0x00010c1a8c20(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,
                      puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105cc0dbc; end: 105cc0ebb; -[SCGalleryHeaderBar _createDismissButton] */

void FUN_105cc0dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c3298;
  func_0x00010bf25cc0(PTR_PTR_1126c3298,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  puVar3 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4046000000000000,0x4040000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4024000000000000,puVar3,param_2,0x84,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1a9fc0(puVar1,param_2,puVar3,0);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__didPressDismiss_11252cf88,0x40);
  func_0x00010c1a8c20(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,
                      puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cc0ebc; end: 105cc10ab; -[SCGalleryHeaderBar _updateStackViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc0ebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = (long)_DAT_112733c64;
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010c12b8a0(*(undefined8 *)(param_1 + _DAT_112733c58));
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar1);
  }
  lVar5 = (long)_DAT_112733c68;
  if (*(long *)(param_1 + lVar5) != 0) {
    func_0x00010c12b8a0(*(undefined8 *)(param_1 + _DAT_112733c5c));
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar1);
  }
  lVar4 = (long)_DAT_112733c6c;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12b8a0(*(undefined8 *)(param_1 + _DAT_112733c60));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
  }
  lVar7 = (long)_DAT_112733c58;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28;
  uVar9 = *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
  func_0x00010c267040(uVar8,uVar9,*(undefined8 *)(param_1 + lVar7));
  uVar1 = uVar2;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar6));
  lVar6 = (long)_DAT_112733c5c;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267040(uVar8,uVar9,*(undefined8 *)(param_1 + lVar6));
  uVar1 = uVar2;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar5));
  lVar6 = (long)_DAT_112733c60;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267040(uVar8,uVar9,*(undefined8 *)(param_1 + lVar6));
  uVar1 = uVar2;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c4c),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105cc10ac; end: 105cc127b; -[SCGalleryHeaderBar clearSearchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc10ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c58),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c5c),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c60),param_2,0);
  lVar1 = param_1;
  func_0x00010bded300(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112733c54;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188540();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2162c0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
  _objc_release(uVar2);
  func_0x00010bee08a0(param_1);
  lVar3 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfbcf40();
  _objc_release(lVar3);
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + _DAT_112733c4c));
  lVar3 = param_1;
  func_0x00010be9c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar3);
  func_0x00010bf3a660(*(undefined8 *)(param_1 + _DAT_112733c44));
  func_0x00010be8e200(param_1);
  func_0x00010bf83c40(param_1);
  lVar3 = param_1;
  func_0x00010be43aa0();
  if ((int)lVar3 == 0) {
    func_0x00010bedf140(param_1,param_2,0,0);
  }
  else {
    lVar3 = param_1 + _DAT_112733c40;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf3c080();
    _objc_release(lVar3);
  }
  func_0x00010bde04e0(param_1);
  func_0x00010be09aa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cc127c; end: 105cc12ab; -[SCGalleryHeaderBar dismissKeyboard] */

void FUN_105cc127c(undefined8 param_1)

{
  func_0x00010be9c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc12ac; end: 105cc12db; -[SCGalleryHeaderBar focusSearchField] */

void FUN_105cc12ac(undefined8 param_1)

{
  func_0x00010be9c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc12dc; end: 105cc12eb; -[SCGalleryHeaderBar _searchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc12dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c54),PTR_s_searchField_112632880);
  return;
}



/* Entry: 105cc12ec; end: 105cc13e7; -[SCGalleryHeaderBar hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc12ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar5 = &lStack_50;
  lVar6 = (long)_DAT_112733c74;
  if (*(char *)(param_1 + lVar6) == '\x01') {
    plVar5 = (long *)0x0;
    *(undefined1 *)(param_1 + lVar6) = 0;
  }
  else {
    puStack_48 = PTR_PTR_1126ecbe0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_hitTest_withEvent__1125d6850);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be9c640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c073040();
    if ((int)lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UITextField_1126af060;
      _objc_opt_class(PTR__OBJC_CLASS___UITextField_1126af060);
      puVar4 = (undefined1 *)plVar5;
      _objc_opt_isKindOfClass(plVar5,puVar3);
      _objc_release(lVar1);
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
        _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
        puVar4 = (undefined1 *)plVar5;
        _objc_opt_isKindOfClass(plVar5,puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          func_0x00010bf3bfc0(param_1);
          *(undefined1 *)(param_1 + lVar6) = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 105cc13e8; end: 105cc13ef; -[SCGalleryHeaderBar getHeaderBarHeight] */

undefined8 FUN_105cc13e8(void)

{
  return 0;
}



/* Entry: 105cc13f0; end: 105cc1527; -[SCGalleryHeaderBar setRightButtonMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc13f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_112733c78) != param_3) {
    *(long *)(param_1 + _DAT_112733c78) = param_3;
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010beba810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showQuestionMark_11258c3a8);
      return;
    }
    if (param_3 == 0) {
      lVar3 = (long)_DAT_112733c34;
      func_0x00010c1ba180(*(undefined8 *)(param_1 + lVar3),param_2,PTR____NSArray0__struct_11034ab48
                         );
      func_0x00010c216240(*(undefined8 *)(param_1 + lVar3));
      uVar1 = *(undefined8 *)(param_1 + _DAT_112733c38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c235060();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c5c));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c60));
        uVar2 = *(undefined8 *)(param_1 + _DAT_112733c54);
        func_0x00010bf5eee0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2194c0();
        _objc_release(uVar2);
        lVar3 = param_1;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee08b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStackViewLayout_112595bd0);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 105cc1528; end: 105cc1633; -[SCGalleryHeaderBar _showQuestionMark] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e27ab8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__didPressQuestionButton_11252cf90,0x40);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112733c54);
  func_0x00010bf5eee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cc1634; end: 105cc1643; -[SCGalleryHeaderBar selectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c5c),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 105cc1644; end: 105cc1653; -[SCGalleryHeaderBar setSelectionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733c5c),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 105cc1654; end: 105cc169b; -[SCGalleryHeaderBar searchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc1654(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733c54);
  func_0x00010c153980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105cc169c; end: 105cc1797; -[SCGalleryHeaderBar setSearchEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc169c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112733c54;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c153980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112733c60),param_2,param_3);
  if ((param_3 & 1) == 0) {
    func_0x00010bf3bfc0(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071800();
  _objc_release(uVar2);
  if ((int)uVar3 != (int)uVar1) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c153980(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105cc1798; end: 105cc1803; -[SCGalleryHeaderBar setSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1798(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + _DAT_112733c7c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112733c7c) = (char)param_3;
  uVar2 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  lVar1 = (long)_DAT_112733c54;
  func_0x00010c1677c0(uVar2,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setUserInteractionEnabled__112665468,param_3 ^ 1
            );
  return;
}



/* Entry: 105cc1804; end: 105cc1837; -[SCGalleryHeaderBar _didPressQuestionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1804(long param_1)

{
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc1838; end: 105cc186b; -[SCGalleryHeaderBar _didPressSelectButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1838(long param_1)

{
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc186c; end: 105cc18e3; -[SCGalleryHeaderBar _didPressSearchButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc186c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733c38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d500();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_1 + _DAT_112733c70;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfbcf60();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf96c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enterSearchMode_1125c34b0);
  return;
}



/* Entry: 105cc18e4; end: 105cc1a1b; -[SCGalleryHeaderBar enterSearchMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc18e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c5c),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c60),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112733c58),param_2,0);
  lVar2 = (long)_DAT_112733c54;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188540();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2162c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
  _objc_release(uVar1);
  func_0x00010bee08a0(param_1);
  lVar2 = (long)_DAT_112733c30;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    func_0x00010beaf940(param_1);
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  func_0x00010be9c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc1a1c; end: 105cc1a4f; -[SCGalleryHeaderBar _didPressDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1a1c(long param_1)

{
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc1a50; end: 105cc1a83; -[SCGalleryHeaderBar didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1a50(long param_1)

{
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc1a84; end: 105cc1ab7; -[SCGalleryHeaderBar didTapHeaderItemTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc1a84(long param_1)

{
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc1ab8; end: 105cc1e57; -[SCGalleryHeaderBar _setupSearchFieldForInlineSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cc1ab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112733c54;
  uVar1 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_3 + lVar11);
  func_0x00010bf5eee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1db9c0();
  _objc_release();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c153ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = lVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c23d0a0(lVar3);
  func_0x00010c23d0a0(lVar3);
  func_0x00010c013de0(0,0,param_1,param_2);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar5);
  _objc_release(puVar6);
  func_0x00010c182220(puVar5);
  func_0x00010c1a9f00(puVar5);
  uVar1 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010bf5eee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8440();
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010c153980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar1);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_3 + lVar11);
  func_0x00010c153980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbe0();
  puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar1 = uVar7;
  func_0x00010c0fd720();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar6);
  func_0x00010c16b680(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar1);
  func_0x00010c16d0c0(uVar7);
  func_0x00010befbd60(uVar7);
  puVar6 = PTR_PTR_1126c3ab0;
  _objc_alloc(PTR_PTR_1126c3ab0);
  lVar2 = param_3 + _DAT_112733c40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c01df80(puVar6);
  _objc_release(lVar2);
  func_0x00010c1ad180(uVar7);
  func_0x00010c1f8400(puVar6);
  lVar2 = param_3;
  func_0x00010c199ce0(puVar6);
  _objc_storeWeak(param_3 + _DAT_112733c80,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return lVar3;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar3 + _DAT_112733c74) = 0;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 == 0) {
    func_0x00010bdd3600(lVar3);
    lVar3 = lVar3 + _DAT_112733c70;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfbcee0();
    _objc_release(lVar3);
  }
  return 1;
}



/* Entry: 105cc1e58; end: 105cc1edb; -[SCGalleryHeaderBar textFieldShouldBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc1e58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112733c74) = 0;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  if (lVar1 == 0) {
    func_0x00010bdd3600(param_1);
    param_1 = param_1 + _DAT_112733c70;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfbcee0();
    _objc_release(param_1);
  }
  return 1;
}



/* Entry: 105cc1edc; end: 105cc1f63; -[SCGalleryHeaderBar textFieldShouldClear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc1edc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf3a660(*(undefined8 *)(param_1 + _DAT_112733c44));
  func_0x00010be8e200(param_1);
  lVar1 = param_1;
  func_0x00010be43aa0();
  if ((int)lVar1 == 0) {
    func_0x00010bedf140(param_1,param_2,0,0);
  }
  else {
    lVar1 = param_1 + _DAT_112733c40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3c080();
    _objc_release(lVar1);
  }
  func_0x00010bde04e0(param_1);
  func_0x00010be09aa0(param_1);
  return 1;
}


