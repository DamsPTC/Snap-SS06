/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fc4088; end: 108fc408f; -[SCLegacySectionBasedCollectionViewUpdater _prepareLayoutUpdate] */

void FUN_108fc4088(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsUpdating__112586d68,1);
  return;
}



/* Entry: 108fc4090; end: 108fc43e3; -[SCLegacySectionBasedCollectionViewUpdater _updateCollectionViewSupplementaryView:inSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4090(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(uVar2);
      }
      uVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010bf52a60();
      lVar19 = lRam0000000000000000;
      while (uVar4 != 0) {
        uVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar19) {
            _objc_enumerationMutation(uVar5);
          }
          func_0x00010c2827c0(*(undefined8 *)(uVar15 * 8));
          uVar18 = *(ulong *)(param_1 + _DAT_11277f14c);
          puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c262e00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR_DAT_1126a4fe8;
          _objc_retain(uVar18);
          uVar7 = uVar18;
          func_0x000107c318f8(uVar18,puVar6);
          uVar1 = uVar18;
          if ((int)uVar7 == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar18);
          uVar7 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar1;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_retain(uVar8);
          if (uVar7 == uVar8) {
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar7);
          }
          else {
            if (uVar8 == 0) {
              _objc_release();
              _objc_release(uVar7);
            }
            else {
              uVar9 = uVar7;
              func_0x00010c071ae0();
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_release(uVar7);
              if ((uVar9 & 1) != 0) goto LAB_108fc4324;
            }
            func_0x00010c2226c0(uVar1);
            func_0x00010c1cbe20(uVar18);
          }
LAB_108fc4324:
          _objc_release(uVar8);
          _objc_release(uVar1);
          _objc_release(uVar18);
          uVar15 = uVar15 + 1;
        } while (uVar4 != uVar15);
        uVar4 = uVar5;
        func_0x00010bf52a60();
      }
      _objc_release(uVar5);
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar3);
    uVar3 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if ((*(char *)(param_3 + 0x2b) != '\x01') || ((*(byte *)(param_3 + 0x38) & 1) == 0)) {
    lVar13 = (long)_DAT_11277f180;
    lVar10 = *(long *)(param_3 + lVar13);
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      lVar19 = (long)_DAT_11277f168;
      lVar10 = *(long *)(param_3 + lVar19);
      func_0x00010bf529e0();
      if (lVar10 != 0) {
        lVar10 = 0;
        do {
          iVar16 = (int)*(undefined8 *)(param_3 + lVar13);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          if (iVar16 == 0) {
LAB_108fc44d0:
            _objc_release(puVar6);
          }
          else {
            lVar11 = *(long *)(param_3 + lVar19);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010bf63d80();
            _objc_release(lVar11);
            _objc_release(puVar6);
            if (lVar12 != 1) {
              uVar17 = *(undefined8 *)(param_3 + lVar13);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360(uVar17);
              goto LAB_108fc44d0;
            }
          }
          lVar10 = lVar10 + 1;
          lVar12 = *(long *)(param_3 + lVar19);
          func_0x00010bf529e0();
        } while (lVar10 != lVar12);
      }
    }
    lVar10 = *(long *)(param_3 + lVar13);
    func_0x00010bf529e0();
    if (lVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed5770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s__updateCollectionViewWithAnimate_112592f80,
                 *(undefined1 *)(param_3 + (long)_DAT_11277f184));
      return;
    }
  }
  return;
}



/* Entry: 108fc43e4; end: 108fc4537; -[SCLegacySectionBasedCollectionViewUpdater _updateCollectionViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc43e4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((*(char *)(param_1 + 0x2b) != '\x01') || ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    lVar7 = (long)_DAT_11277f180;
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar8 = (long)_DAT_11277f168;
      lVar1 = *(long *)(param_1 + lVar8);
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        lVar1 = 0;
        do {
          iVar5 = (int)*(undefined8 *)(param_1 + lVar7);
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          if (iVar5 == 0) {
LAB_108fc44d0:
            _objc_release(puVar2);
          }
          else {
            lVar3 = *(long *)(param_1 + lVar8);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf63d80();
            _objc_release(lVar3);
            _objc_release(puVar2);
            if (lVar4 != 1) {
              uVar6 = *(undefined8 *)(param_1 + lVar7);
              puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360(uVar6);
              goto LAB_108fc44d0;
            }
          }
          lVar1 = lVar1 + 1;
          lVar4 = *(long *)(param_1 + lVar8);
          func_0x00010bf529e0();
        } while (lVar1 != lVar4);
      }
    }
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed5770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__updateCollectionViewWithAnimate_112592f80,
                 *(undefined1 *)(param_1 + _DAT_11277f184));
      return;
    }
  }
  return;
}



/* Entry: 108fc4538; end: 108fc465f; -[SCLegacySectionBasedCollectionViewUpdater _delayUpdateCollectionViewWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4538(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = (long)_DAT_11277f188;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae888;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_3;
  func_0x00010c0522e0(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = puVar1;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108fc4660; end: 108fc4693;  */

void FUN_108fc4660(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be18940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc4694; end: 108fc46df; -[SCLegacySectionBasedCollectionViewUpdater _updateCollectionViewWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f188;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be18950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__forceUpdateCollectionViewAnimat_112563bf0,param_3);
  return;
}



/* Entry: 108fc46e0; end: 108fc4763; -[SCLegacySectionBasedCollectionViewUpdater _forceUpdateCollectionViewAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc46e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f168;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_11277f184) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f180);
  *(undefined8 *)(param_1 + _DAT_11277f180) = 0;
  _objc_release(uVar2);
  func_0x00010bed5780(param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fc4764; end: 108fc491f; -[SCLegacySectionBasedCollectionViewUpdater _handleCollectionViewUpdateWithSections:sectionsToTearDown:insertSectionsIndexSet:deleteSectionsIndexSet:reloadSectionsIndexSet:insertItemsIndexPaths:deleteItemsIndexPaths:reloadItemsIndexPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4764(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1555a0();
  _objc_release(lVar1);
  if (param_3 != 0) {
    func_0x00010bea7120(param_1,param_2,param_3);
  }
  if (param_4 != 0) {
    func_0x00010becae40(param_1,param_2,param_4);
  }
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6c740(*(undefined8 *)(param_1 + _DAT_11277f14c),param_2,param_6);
  }
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c066dc0(*(undefined8 *)(param_1 + _DAT_11277f14c),param_2,param_5);
  }
  lVar1 = param_7;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c128fa0(*(undefined8 *)(param_1 + _DAT_11277f14c),param_2,param_7);
  }
  lVar1 = param_8;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c066a40(*(undefined8 *)(param_1 + _DAT_11277f14c),param_2,param_8);
  }
  lVar1 = param_9;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf6c100(*(undefined8 *)(param_1 + _DAT_11277f14c),param_2,param_9);
  }
  lVar1 = param_10;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c128de0(*(undefined8 *)(param_1 + _DAT_11277f14c),param_2,param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc4920; end: 108fc4997; -[SCLegacySectionBasedCollectionViewUpdater _handleResultsCollectionViewUpdateCompletionWithFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4920(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bea4f00(param_1,param_2,0);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155580();
  _objc_release(lVar1);
  if (*(char *)(param_1 + _DAT_11277f150) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be71610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performBatchUpdateInvalidateCol_112579f20)
    ;
    return;
  }
  return;
}



/* Entry: 108fc4998; end: 108fc49e7; -[SCLegacySectionBasedCollectionViewUpdater _updateResultCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4998(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11277f150) = 1;
    return;
  }
  func_0x00010be78800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be71610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performBatchUpdateInvalidateCol_112579f20);
  return;
}



/* Entry: 108fc49e8; end: 108fc4a27; -[SCLegacySectionBasedCollectionViewUpdater _setSections:] */

void FUN_108fc49e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  func_0x00010bdf1040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee3ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateVirtualSectionDelegateIfN_1125969a0);
  return;
}



/* Entry: 108fc4a28; end: 108fc4b67; -[SCLegacySectionBasedCollectionViewUpdater _createPagingControllerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc4a28(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar9);
  lVar5 = lVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  puVar2 = PTR_s_experimentalPagingMode_1125c4b28;
  do {
    PTR_s_experimentalPagingMode_1125c4b28 = puVar2;
    if (lVar5 == 0) {
LAB_108fc4b24:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      lVar5 = *(long *)(lVar9 + 0x30);
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        lVar5 = lVar9 + 8;
        _objc_loadWeakRetained();
        _objc_release();
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(lVar9 + 0x30);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x000107c318f8();
          uVar1 = uVar6;
          if ((int)uVar7 == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar6);
          uVar7 = uVar1;
          func_0x00010bf924c0();
          if ((int)uVar7 != 0) {
            lVar9 = lVar9 + 8;
            _objc_loadWeakRetained(lVar9);
            func_0x00010c29fa20();
            _objc_release(lVar9);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar1);
          return;
        }
      }
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar9);
      }
      uVar10 = *(ulong *)(lVar11 * 8);
      uVar4 = uVar10;
      _objc_opt_respondsToSelector(uVar10,puVar2);
      if (((uVar4 & 1) != 0) && (func_0x00010bf9c600(), uVar10 != 0)) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + _DAT_11277f160));
        _objc_unsafeClaimAutoreleasedReturnValue();
        goto LAB_108fc4b24;
      }
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar9;
    func_0x00010bf52a60();
    puVar2 = PTR_s_experimentalPagingMode_1125c4b28;
  } while( true );
}



/* Entry: 108fc4b68; end: 108fc4c27; -[SCLegacySectionBasedCollectionViewUpdater _updateVirtualSectionDelegateIfNeeded] */

void FUN_108fc4b68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000107c318f8();
      uVar1 = uVar3;
      if ((int)uVar4 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      uVar4 = uVar1;
      func_0x00010bf924c0();
      if ((int)uVar4 != 0) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010c29fa20();
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 108fc4c28; end: 108fc4c73; -[SCLegacySectionBasedCollectionViewUpdater _handleUpdateLayoutCompletionWithFinished:] */

void FUN_108fc4c28(long param_1,undefined8 param_2)

{
  func_0x00010bea4f00(param_1,param_2,0);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc4c74; end: 108fc4cab; -[SCLegacySectionBasedCollectionViewUpdater _updateResultCollectionViewLayoutInteractively] */

void FUN_108fc4c74(undefined8 param_1)

{
  func_0x00010be78800();
  func_0x00010bde1e60(param_1);
  func_0x00010bde1e40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be32870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleUpdateLayoutCompletionWit_11256a3b8,1)
  ;
  return;
}



/* Entry: 108fc4cac; end: 108fc54c7; -[SCLegacySectionBasedCollectionViewUpdater _updateCollectionViewWithSections:animated:] */

/* WARNING: Possible PIC construction at 0x000108fc4e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fc4e94) */
/* WARNING: Removing unreachable block (ram,0x000108fc4ea0) */

void FUN_108fc4cac(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined1 auStack_410 [8];
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined1 auStack_3e8 [8];
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined1 auStack_388 [8];
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined1 auStack_358 [8];
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bea4f00(param_1);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x30);
    func_0x00010b813c80(puVar1,param_3,0);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar3 = puVar1;
  func_0x00010c27f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar16 = *plStack_240;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_240 != lVar16) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0e1e60(*(undefined8 *)(lStack_248 + (long)puVar14 * 8));
        func_0x00010c0df840(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar5);
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puStack_288 = (undefined8 *)0x0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  puVar4 = puVar1;
  func_0x00010c286820();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010bf52a60();
  if (puVar14 != (undefined *)0x0) {
    if (*plStack_280 != *plStack_280) {
      _objc_enumerationMutation(puVar4);
    }
    uVar6 = *puStack_288;
    func_0x00010c0e1e60(uVar6);
    goto code_r0x00010bef92c0;
  }
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar16 != 0) {
    lVar16 = 0;
    do {
      puVar7 = puVar1;
      func_0x00010bf6c000();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf4b800();
      if (((ulong)puVar8 & 1) == 0) {
        puVar8 = puVar3;
        func_0x00010bf4b800();
        _objc_release(puVar7);
        if (((ulong)puVar8 & 1) == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c0dfd40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar9;
          func_0x00010c156960();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2b8 = 0xc2000000;
          pcStack_2b0 = FUN_108fc54c8;
          puStack_2a8 = &UNK_110848c48;
          _objc_retain(puVar3);
          puStack_308 = puVar7;
          uStack_300 = 0xc2000000;
          pcStack_2f8 = FUN_108fc54d4;
          puStack_2f0 = &UNK_110ad1b98;
          puStack_2a0 = puVar3;
          lStack_298 = lVar16;
          _objc_retain(puVar4);
          puStack_2e8 = puVar4;
          _objc_retain(puVar2);
          puStack_2e0 = puVar2;
          lStack_2c8 = lVar16;
          _objc_retain(puVar14);
          puStack_2d8 = puVar14;
          _objc_retain(puVar5);
          puStack_2d0 = puVar5;
          func_0x00010c0bf8a0(uVar6);
          _objc_release(uVar6);
          _objc_release(uVar9);
          _objc_release(puStack_2d0);
          _objc_release(puStack_2d8);
          _objc_release(puStack_2e0);
          _objc_release(puStack_2e8);
          puVar7 = puStack_2a0;
          goto LAB_108fc503c;
        }
      }
      else {
LAB_108fc503c:
        _objc_release(puVar7);
      }
      lVar10 = *(long *)(param_1 + 0x30);
      func_0x00010c0dfd40(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f96e0();
      _objc_release(lVar10);
      lVar10 = *(long *)(param_1 + 0x30);
      func_0x00010bf529e0();
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar10);
  }
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  _objc_retain(param_3);
  lVar16 = param_3;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar10 = *plStack_340;
    do {
      lVar15 = 0;
      do {
        if (*plStack_340 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c1f96e0(*(undefined8 *)(lStack_348 + lVar15 * 8));
        lVar15 = lVar15 + 1;
      } while (lVar16 != lVar15);
      lVar16 = param_3;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_358,param_1);
  if (param_3 == 0) {
    puVar7 = puVar3;
    func_0x00010bf529e0();
    if ((puVar7 != (undefined *)0x0) ||
       (puVar7 = puVar5, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) {
LAB_108fc51bc:
      uVar6 = 0;
      goto LAB_108fc51c0;
    }
    puVar7 = puVar4;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) goto LAB_108fc51bc;
    puVar7 = puVar14;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) goto LAB_108fc51bc;
    func_0x00010be2f500(param_1);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_108fc57c4;
    puStack_368 = &UNK_110ad1bc8;
    _objc_retain(param_3);
    lStack_360 = param_3;
    func_0x000107c31910(uVar6,&puStack_380);
    _objc_release(lStack_360);
LAB_108fc51c0:
    puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3d8 = 0xc2000000;
    pcStack_3d0 = FUN_108fc57e4;
    puStack_3c8 = &UNK_110853a90;
    _objc_copyWeak(auStack_388,auStack_358);
    _objc_retain(param_3);
    lStack_3c0 = param_3;
    _objc_retain(uVar6);
    uStack_3b8 = uVar6;
    _objc_retain(puVar1);
    puStack_3b0 = puVar1;
    _objc_retain(puVar3);
    puStack_3a8 = puVar3;
    _objc_retain(puVar4);
    puStack_3a0 = puVar4;
    _objc_retain(puVar14);
    puStack_398 = puVar14;
    _objc_retain(puVar5);
    ppuVar11 = &puStack_3e0;
    puStack_390 = puVar5;
    _objc_retainBlock();
    puStack_408 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_400 = 0xc2000000;
    pcStack_3f8 = FUN_108fc58e8;
    puStack_3f0 = &UNK_110849200;
    _objc_copyWeak(auStack_3e8,auStack_358);
    ppuVar12 = &puStack_408;
    _objc_retainBlock();
    puStack_440 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_438 = 0xc2000000;
    uStack_430 = 0x108fc591c;
    puStack_428 = &UNK_110924520;
    _objc_copyWeak(auStack_410,auStack_358);
    _objc_retain(ppuVar11);
    ppuStack_420 = ppuVar11;
    _objc_retain(ppuVar12);
    ppuVar13 = &puStack_440;
    ppuStack_418 = ppuVar12;
    _objc_retainBlock();
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (param_4 == 0) {
      _objc_retain(ppuVar13);
      func_0x00010c0f9680(puVar7);
      _objc_release(ppuVar13);
    }
    else {
      (*(code *)ppuVar13[2])(ppuVar13);
    }
    _objc_release(ppuVar13);
    _objc_release(ppuStack_418);
    _objc_release(ppuStack_420);
    _objc_destroyWeak(auStack_410);
    _objc_release(ppuVar12);
    _objc_destroyWeak(auStack_3e8);
    _objc_release(ppuVar11);
    _objc_release(puStack_390);
    _objc_release(puStack_398);
    _objc_release(puStack_3a0);
    _objc_release(puStack_3a8);
    _objc_release(puStack_3b0);
    _objc_release(uStack_3b8);
    _objc_release(lStack_3c0);
    _objc_destroyWeak(auStack_388);
    _objc_release(uVar6);
  }
  _objc_destroyWeak(auStack_358);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_358);
  __Unwind_Resume();
  puVar3 = *(undefined **)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
code_r0x00010bef92c0:
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_addIndex__11259be58,uVar6);
  return;
}



/* Entry: 108fc54c8; end: 108fc54d3;  */

void FUN_108fc54c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addIndex__11259be58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108fc54d4; end: 108fc5623;  */

void FUN_108fc54d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97bc0(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bf97bc0(param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010bf97bc0(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fc5624; end: 108fc572b;  */

void FUN_108fc5624(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  ppuVar5 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x28);
    param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d8ae0();
  }
  func_0x00010bfed020(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
  _objc_release(puVar4);
  if (lVar3 != 0) {
    _objc_release(ppuVar5);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc572c; end: 108fc57c3;  */

void FUN_108fc572c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc57c4; end: 108fc57e3;  */

uint FUN_108fc57c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108fc57e4; end: 108fc58e7;  */

void FUN_108fc57e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c066900(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf6c000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00();
  func_0x00010be27380(lVar3,param_2,uVar1,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108fc58e8; end: 108fc594f;  */

void FUN_108fc58e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc5950; end: 108fc595b;  */

void FUN_108fc5950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108fc5958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108fc595c; end: 108fc59c7; -[SCLegacySectionBasedCollectionViewUpdater _handleResultCollectionViewUpdateWithUpdateBlock:completion:] */

void FUN_108fc595c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010bde1e40(param_1);
  }
  func_0x00010bde1ea0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc59c8; end: 108fc5bd7; -[SCLegacySectionBasedCollectionViewUpdater _newUpdateCollectionViewWithSections:animated:] */

void FUN_108fc59c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  func_0x00010bea4f00(param_1);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108fc5bd8;
  puStack_98 = &UNK_110848218;
  _objc_retain(param_3);
  uStack_90 = param_3;
  uStack_88 = param_1;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar2 = &puStack_b0;
  _objc_retainBlock();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108fc6554;
  puStack_c0 = &UNK_110849200;
  _objc_copyWeak(auStack_b8,auStack_78);
  ppuVar3 = &puStack_d8;
  _objc_retainBlock();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x108fc6588;
  puStack_f8 = &UNK_11097cfb0;
  uStack_f0 = param_1;
  _objc_retain(ppuVar2);
  ppuStack_e8 = ppuVar2;
  _objc_retain(ppuVar3);
  ppuVar4 = &puStack_110;
  ppuStack_e0 = ppuVar3;
  _objc_retainBlock();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_4 == 0) {
    _objc_retain(ppuVar4);
    func_0x00010c0f9680(puVar1);
    _objc_release(ppuVar4);
  }
  else {
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuStack_e0);
  _objc_release(ppuStack_e8);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc5bd8; end: 108fc6237;  */

/* WARNING: Possible PIC construction at 0x000108fc5da0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108fc5da4) */
/* WARNING: Removing unreachable block (ram,0x000108fc5db0) */

void FUN_108fc5bd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uStack_398;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010b813c80(puVar1,*(long *)(param_1 + 0x20),0);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar3 = puVar1;
  func_0x00010c27f5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar18 = *plStack_240;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_240 != lVar18) {
          _objc_enumerationMutation(puVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0e1e60(*(undefined8 *)(lStack_248 + (long)puVar17 * 8));
        func_0x00010c0df840(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar5);
        puVar17 = puVar17 + 1;
      } while (puVar4 != puVar17);
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  _objc_opt_new();
  puStack_288 = (undefined8 *)0x0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  puVar4 = puVar1;
  func_0x00010c286820();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010bf52a60();
  if (puVar17 != (undefined *)0x0) {
    if (*plStack_280 != *plStack_280) {
      _objc_enumerationMutation(puVar4);
    }
    uVar6 = *puStack_288;
    func_0x00010c0e1e60(uVar6);
    goto code_r0x00010bef92c0;
  }
  _objc_release(puVar4);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar18 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010bf529e0();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar18 != 0) {
    lVar18 = 0;
    do {
      puVar8 = puVar1;
      func_0x00010bf6c000();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf4b800();
      if (((ulong)puVar9 & 1) == 0) {
        puVar9 = puVar3;
        func_0x00010bf4b800();
        _objc_release(puVar8);
        if (((ulong)puVar9 & 1) == 0) {
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
          func_0x00010c0dfd40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar10;
          func_0x00010c156960();
          _objc_retainAutoreleasedReturnValue();
          puStack_2c0 = puVar4;
          uStack_2b8 = 0xc2000000;
          pcStack_2b0 = FUN_108fc6238;
          puStack_2a8 = &UNK_110848c48;
          _objc_retain(puVar3);
          puStack_308 = puVar4;
          uStack_300 = 0xc2000000;
          pcStack_2f8 = FUN_108fc6244;
          puStack_2f0 = &UNK_110ad1b98;
          puStack_2a0 = puVar3;
          lStack_298 = lVar18;
          _objc_retain(puVar17);
          puStack_2e8 = puVar17;
          _objc_retain(puVar2);
          puStack_2e0 = puVar2;
          lStack_2c8 = lVar18;
          _objc_retain(puVar5);
          puStack_2d8 = puVar5;
          _objc_retain(puVar7);
          puStack_2d0 = puVar7;
          func_0x00010c0bf8a0(uVar6);
          _objc_release(uVar6);
          _objc_release(uVar10);
          _objc_release(puStack_2d0);
          _objc_release(puStack_2d8);
          _objc_release(puStack_2e0);
          _objc_release(puStack_2e8);
          puVar8 = puStack_2a0;
          goto LAB_108fc5f50;
        }
      }
      else {
LAB_108fc5f50:
        _objc_release(puVar8);
      }
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f96e0();
      _objc_release(uVar6);
      lVar18 = lVar18 + 1;
      lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
      func_0x00010bf529e0();
    } while (lVar18 != lVar11);
  }
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar18 = lVar11;
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    lVar15 = *plStack_340;
    do {
      lVar16 = 0;
      do {
        if (*plStack_340 != lVar15) {
          _objc_enumerationMutation(lVar11);
        }
        func_0x00010c1f96e0(*(undefined8 *)(lStack_348 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar18 != lVar16);
      lVar18 = lVar11;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lVar11);
  lVar18 = *(long *)(param_1 + 0x20);
  if (lVar18 == 0) {
    puVar8 = puVar3;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
LAB_108fc6070:
      lVar18 = *(long *)(param_1 + 0x20);
      if (lVar18 != 0) goto LAB_108fc6078;
      uStack_398 = 0;
      goto LAB_108fc60cc;
    }
    puVar8 = puVar7;
    func_0x00010bf529e0();
    if (((puVar8 != (undefined *)0x0) ||
        (puVar8 = puVar17, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) ||
       (puVar8 = puVar5, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) goto LAB_108fc6070;
    func_0x00010be2f500(*(undefined8 *)(param_1 + 0x28));
  }
  else {
LAB_108fc6078:
    uStack_398 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    puStack_378 = puVar4;
    uStack_370 = 0xc2000000;
    pcStack_368 = FUN_108fc6534;
    puStack_360 = &UNK_110ad1bc8;
    _objc_retain(lVar18);
    lStack_358 = lVar18;
    func_0x000107c31910(uStack_398,&puStack_378);
    _objc_release(lStack_358);
LAB_108fc60cc:
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    puVar4 = puVar1;
    func_0x00010c066900(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf6c000(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf51e00(puVar3);
    puVar12 = puVar17;
    func_0x00010bf51e00(puVar17);
    puVar13 = puVar5;
    func_0x00010bf51e00();
    puVar14 = puVar7;
    func_0x00010bf51e00();
    func_0x00010be27380(param_1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(uStack_398);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar17);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(puVar1 + 0x20);
  uVar6 = *(undefined8 *)(puVar1 + 0x28);
code_r0x00010bef92c0:
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_addIndex__11259be58,uVar6);
  return;
}



/* Entry: 108fc6238; end: 108fc6243;  */

void FUN_108fc6238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addIndex__11259be58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108fc6244; end: 108fc6393;  */

void FUN_108fc6244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97bc0(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bf97bc0(param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010bf97bc0(param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108fc6394; end: 108fc649b;  */

void FUN_108fc6394(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  ppuVar5 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    ppuVar5 = *(undefined ***)(param_1 + 0x28);
    param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d8ae0();
  }
  func_0x00010bfed020(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
  _objc_release(puVar4);
  if (lVar3 != 0) {
    _objc_release(ppuVar5);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc649c; end: 108fc6533;  */

void FUN_108fc649c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc6534; end: 108fc6553;  */

uint FUN_108fc6534(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108fc6554; end: 108fc65bf;  */

void FUN_108fc6554(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc65c0; end: 108fc65cb;  */

void FUN_108fc65c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108fc65c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108fc65cc; end: 108fc6897; -[SCLegacySectionBasedCollectionViewUpdater _applySectionWithConfigurations:animated:checkPendingSectionForSetup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc65cc(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ad1c18);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_108fc0a34();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  FUN_108fc0a34();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  lVar10 = (long)_DAT_11277f168;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108fc68a0;
  puStack_88 = &UNK_110ad1c38;
  _objc_retain(uVar2);
  uStack_80 = uVar2;
  _objc_retain(lVar3);
  lStack_78 = lVar3;
  func_0x000107c31910(uVar8,&puStack_a0);
  func_0x00010becae40(param_1);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  FUN_108fc0a34();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108fc68fc;
  puStack_c0 = &UNK_110ad1c68;
  uStack_a8 = param_5;
  _objc_retain(uVar2);
  uStack_b8 = uVar2;
  _objc_retain(uVar8);
  lVar9 = lVar1;
  uStack_b0 = uVar8;
  func_0x000107c31910(lVar1,&puStack_d8);
  func_0x00010bea9980(param_1);
  _objc_release(lVar9);
  func_0x00010bdcde20(param_1);
  lVar9 = lVar1;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = lVar9;
  _objc_release(uVar7);
  *(undefined1 *)(param_1 + _DAT_11277f184) = param_4;
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar10 = (long)_DAT_11277f180;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar4;
  _objc_release(uVar7);
  lVar9 = lVar1;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    lVar9 = 0;
    do {
      lVar5 = lVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf63d80();
      _objc_release(lVar5);
      if (lVar6 == 1) {
        uVar7 = *(undefined8 *)(param_1 + lVar10);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(puVar4);
      }
      lVar9 = lVar9 + 1;
      lVar5 = lVar1;
      func_0x00010bf529e0();
    } while (lVar9 != lVar5);
  }
  lVar9 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    func_0x00010bed5760(param_1);
  }
  else {
    func_0x00010bdf9a60(param_1);
  }
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar8);
  _objc_release(lStack_78);
  _objc_release(uStack_80);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc6898; end: 108fc689f;  */

void FUN_108fc6898(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1554f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_section_112632f58);
  return;
}



/* Entry: 108fc68a0; end: 108fc68fb;  */

uint FUN_108fc68a0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4b900(uVar2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 108fc68fc; end: 108fc696b;  */

uint FUN_108fc68fc(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  cVar1 = *(char *)(param_1 + 0x30);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  uVar2 = (uint)uVar3;
  if (cVar1 == '\x01') {
    if ((uVar3 & 1) != 0) {
      uVar2 = 0;
      goto LAB_108fc6950;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf4b900(uVar4);
    uVar2 = (uint)uVar4;
  }
  uVar2 = uVar2 ^ 1;
LAB_108fc6950:
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 108fc696c; end: 108fc6da3; -[SCLegacySectionBasedCollectionViewUpdater _setUpSections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc696c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *unaff_x21;
  long lVar13;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar14;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined *puVar15;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_780;
  long lStack_778;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined1 auStack_738 [128];
  long lStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined1 ***pppuStack_660;
  code *pcStack_658;
  undefined8 uStack_650;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  long lStack_538;
  undefined1 **ppuStack_530;
  code *pcStack_528;
  undefined **ppuStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_450;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined **ppuStack_400;
  long lStack_3f8;
  undefined1 *puStack_3f0;
  code *pcStack_3e8;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  long lStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  ppuStack_3c8 = param_3;
  func_0x00010bf52a60();
  if (param_3 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*plStack_2a0;
    ppuStack_3d8 = unaff_x26;
    do {
      unaff_x28 = (undefined **)0x0;
      puStack_3a8 = PTR_s_viewClassesForSupplementaryViews_112684a20;
      puStack_3a0 = PTR_s_supplementaryViewProvider_1126765b8;
      puStack_3b0 = PTR_s_setUp_112664a70;
      ppuStack_3d0 = param_3;
      do {
        if ((undefined **)*plStack_2a0 != unaff_x26) {
          _objc_enumerationMutation(ppuStack_3c8);
        }
        puVar2 = *(undefined **)(lStack_2a8 + (long)unaff_x28 * 8);
        puStack_398 = puVar2;
        func_0x00010c13fd80();
        _objc_retainAutoreleasedReturnValue();
        lStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        plStack_2e0 = (long *)0x0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        puStack_378 = puVar2;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x00010bf52a60();
        if (puVar11 != (undefined *)0x0) {
          lVar13 = *plStack_2e0;
          do {
            unaff_x25 = (undefined *)0x0;
            do {
              if (*plStack_2e0 != lVar13) {
                _objc_enumerationMutation(puVar2);
              }
              unaff_x23 = *(undefined **)(lStack_2e8 + (long)unaff_x25 * 8);
              unaff_x24 = *(undefined **)(param_1 + _DAT_11277f14c);
              func_0x00010c0e00e0(puStack_378);
              func_0x00010c126000(unaff_x24);
              unaff_x25 = unaff_x25 + 1;
            } while (puVar11 != unaff_x25);
            puVar11 = puVar2;
            func_0x00010bf52a60();
            unaff_x22 = (undefined *)0x0;
          } while (puVar11 != (undefined *)0x0);
        }
        _objc_release(puVar2);
        puVar11 = puStack_398;
        puVar2 = puStack_398;
        _objc_opt_respondsToSelector(puStack_398,puStack_3a0);
        if (((ulong)puVar2 & 1) == 0) {
          unaff_x21 = (undefined *)0x0;
        }
        else {
          unaff_x21 = puVar11;
          func_0x00010c262e40();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar2 = unaff_x21;
        _objc_opt_respondsToSelector(unaff_x21,puStack_3a8);
        if (((ulong)puVar2 & 1) != 0) {
          puStack_3c0 = unaff_x21;
          ppuStack_3b8 = unaff_x28;
          func_0x00010c29bfe0();
          _objc_retainAutoreleasedReturnValue();
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          puVar11 = unaff_x21;
          func_0x00010bf52a60();
          puStack_388 = puVar11;
          if (puVar11 != (undefined *)0x0) {
            lStack_390 = *plStack_320;
            do {
              puVar11 = (undefined *)0x0;
              do {
                if (*plStack_320 != lStack_390) {
                  _objc_enumerationMutation(unaff_x21);
                }
                unaff_x22 = *(undefined **)(lStack_328 + (long)puVar11 * 8);
                uStack_368 = 0;
                uStack_370 = 0;
                uStack_358 = 0;
                plStack_360 = (long *)0x0;
                uStack_348 = 0;
                uStack_350 = 0;
                uStack_338 = 0;
                uStack_340 = 0;
                unaff_x23 = unaff_x21;
                puStack_380 = puVar11;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar11 = unaff_x23;
                func_0x00010bf52a60();
                if (puVar11 != (undefined *)0x0) {
                  lVar13 = *plStack_360;
                  unaff_x24 = puVar11;
                  do {
                    unaff_x25 = (undefined *)0x0;
                    do {
                      if (*plStack_360 != lVar13) {
                        _objc_enumerationMutation(unaff_x23);
                      }
                      puVar11 = unaff_x21;
                      func_0x00010c0e00e0(unaff_x21);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0e00e0();
                      _objc_release(puVar11);
                      func_0x00010c126060(*(undefined8 *)(param_1 + _DAT_11277f14c));
                      unaff_x25 = unaff_x25 + 1;
                    } while (unaff_x24 != unaff_x25);
                    unaff_x24 = unaff_x23;
                    func_0x00010bf52a60();
                  } while (unaff_x24 != (undefined *)0x0);
                }
                _objc_release(unaff_x23);
                puVar11 = puStack_380 + 1;
              } while (puVar11 != puStack_388);
              puVar11 = unaff_x21;
              func_0x00010bf52a60();
              puStack_388 = puVar11;
            } while (puVar11 != (undefined *)0x0);
          }
          _objc_release(unaff_x21);
          puVar11 = puStack_398;
          unaff_x21 = puStack_3c0;
          unaff_x26 = ppuStack_3d8;
          param_3 = ppuStack_3d0;
          unaff_x28 = ppuStack_3b8;
        }
        func_0x00010c20fe60(unaff_x21);
        func_0x00010c1f96e0(puVar11);
        func_0x00010c18b5e0(puVar11);
        puVar2 = puVar11;
        _objc_opt_respondsToSelector(puVar11,puStack_3b0);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010c21c120(puVar11);
        }
        _objc_release(unaff_x21);
        _objc_release(puStack_378);
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x28 != param_3);
      param_3 = ppuStack_3c8;
      func_0x00010bf52a60();
      unaff_x27 = (undefined **)0x0;
    } while (param_3 != (undefined **)0x0);
  }
  lVar13 = param_1 + 0x10;
  _objc_loadWeakRetained();
  ppuVar4 = ppuStack_3c8;
  func_0x00010c155520();
  _objc_release(lVar13);
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_400 = ppuVar4;
  pcStack_3e8 = FUN_108fc6da4;
  lStack_450 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_518 = ppuVar3;
  ppuStack_440 = unaff_x28;
  ppuStack_438 = unaff_x27;
  ppuStack_430 = unaff_x26;
  puStack_428 = unaff_x25;
  puStack_420 = unaff_x24;
  puStack_418 = unaff_x23;
  puStack_410 = unaff_x22;
  puStack_408 = unaff_x21;
  lStack_3f8 = lVar13;
  puStack_3f0 = &stack0xfffffffffffffff0;
  _objc_retain(param_1);
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  plStack_500 = (long *)0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  lVar13 = param_1;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x26 = (undefined **)*plStack_500;
    unaff_x27 = &PTR_s_tapToStartWithAttribution__112678000;
    unaff_x28 = &PTR_s_successBlock_112676000;
    do {
      unaff_x22 = PTR_s_tearDown_112678508;
      unaff_x23 = PTR_s_supplementaryViewProvider_1126765b8;
      lVar12 = 0;
      do {
        if ((undefined **)*plStack_500 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_508 + lVar12 * 8);
        puVar11 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x22);
        if (((ulong)puVar11 & 1) != 0) {
          func_0x00010c26ab80(unaff_x24);
        }
        func_0x00010c1f96e0(unaff_x24);
        func_0x00010c18b5e0(unaff_x24);
        puVar11 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        unaff_x25 = (undefined *)0x0;
        if (((ulong)puVar11 & 1) != 0) {
          unaff_x25 = unaff_x24;
          func_0x00010c262e40();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c20fe60(unaff_x25);
        _objc_release(unaff_x25);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = param_1;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  ppuVar3 = ppuStack_518;
  ppuVar4 = ppuStack_518 + 2;
  _objc_loadWeakRetained();
  ppuVar8 = ppuVar3;
  func_0x00010c155540();
  _objc_release(ppuVar4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_450) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = SUB81(&uStack_650,0);
  ppuStack_540 = ppuVar3;
  pcStack_528 = FUN_108fc6f44;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_580 = unaff_x28;
  ppuStack_578 = unaff_x27;
  ppuStack_570 = unaff_x26;
  puStack_568 = unaff_x25;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = unaff_x22;
  ppuStack_548 = ppuVar4;
  lStack_538 = param_1;
  ppuStack_530 = &puStack_3f0;
  _objc_retain(ppuVar8);
  lStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  puStack_640 = (undefined8 *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  uStack_618 = 0;
  uStack_620 = 0;
  ppuVar5 = ppuVar8;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x25 = (undefined *)*puStack_640;
    unaff_x26 = &PTR_s_appLinkFromALData_destination__11259f000;
    do {
      ppuVar4 = (undefined **)PTR_s_applyConfiguration__11259fa20;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_640 != unaff_x25) {
          _objc_enumerationMutation(ppuVar8);
        }
        unaff_x22 = *(undefined **)(lStack_648 + (long)unaff_x27 * 8);
        unaff_x23 = unaff_x22;
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        _objc_opt_respondsToSelector();
        _objc_release(unaff_x23);
        if (((ulong)unaff_x24 & 1) != 0) {
          unaff_x23 = unaff_x22;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf081e0(unaff_x23);
          _objc_release(unaff_x22);
          _objc_release(unaff_x23);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar5 != unaff_x27);
      ppuVar5 = ppuVar8;
      uVar7 = (char)&uStack_650;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  ppuVar5 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_780;
  pcStack_658 = FUN_108fc70b8;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(ppuVar5 + 7) = uVar7;
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  plStack_770 = (long *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar2 = ppuVar5[6];
  ppuStack_6b0 = unaff_x28;
  ppuStack_6a8 = unaff_x27;
  ppuStack_6a0 = unaff_x26;
  puStack_698 = unaff_x25;
  puStack_690 = unaff_x24;
  puStack_688 = unaff_x23;
  puStack_680 = unaff_x22;
  ppuStack_678 = ppuVar4;
  ppuStack_670 = ppuVar3;
  ppuStack_668 = ppuVar8;
  pppuStack_660 = &ppuStack_530;
  _objc_retain(puVar2);
  puVar10 = auStack_738;
  puVar11 = puVar2;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    lVar13 = *plStack_770;
    do {
      puVar1 = PTR_s_setSectionUpdatable__11265bfd0;
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_770 != lVar13) {
          _objc_enumerationMutation(puVar2);
        }
        uVar14 = *(ulong *)(lStack_778 + (long)puVar15 * 8);
        uVar6 = uVar14;
        _objc_opt_respondsToSelector(uVar14,puVar1);
        if ((uVar6 & 1) != 0) {
          func_0x00010c1f96a0(uVar14);
        }
        puVar15 = puVar15 + 1;
      } while (puVar11 != puVar15);
      puVar10 = auStack_738;
      puVar11 = puVar2;
      puVar9 = &uStack_780;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  (**(code **)((long)puVar9 + 0x10))(puVar9);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 108fc6da4; end: 108fc6f43; -[SCLegacySectionBasedCollectionViewUpdater _tearDownSections:] */

void FUN_108fc6da4(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar13;
  undefined *unaff_x24;
  long lVar14;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined *puVar15;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [128];
  long lStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
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
  ppuStack_138 = param_1;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar14 = param_3;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    unaff_x26 = (undefined **)*plStack_120;
    unaff_x27 = &PTR_s_tapToStartWithAttribution__112678000;
    unaff_x28 = &PTR_s_successBlock_112676000;
    do {
      unaff_x22 = PTR_s_tearDown_112678508;
      unaff_x23 = PTR_s_supplementaryViewProvider_1126765b8;
      lVar10 = 0;
      do {
        if ((undefined **)*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_128 + lVar10 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x22);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010c26ab80(unaff_x24);
        }
        func_0x00010c1f96e0(unaff_x24);
        func_0x00010c18b5e0(unaff_x24);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        unaff_x25 = (undefined *)0x0;
        if (((ulong)puVar2 & 1) != 0) {
          unaff_x25 = unaff_x24;
          func_0x00010c262e40();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c20fe60(unaff_x25);
        _objc_release(unaff_x25);
        lVar10 = lVar10 + 1;
      } while (lVar14 != lVar10);
      lVar14 = param_3;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  ppuVar11 = ppuStack_138;
  ppuVar3 = ppuStack_138 + 2;
  _objc_loadWeakRetained();
  ppuVar7 = ppuVar11;
  func_0x00010c155540();
  _objc_release(ppuVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = SUB81(&uStack_270,0);
  ppuStack_160 = ppuVar11;
  pcStack_148 = FUN_108fc6f44;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  ppuStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = unaff_x22;
  ppuStack_168 = ppuVar3;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppuVar4 = ppuVar7;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined *)*puStack_260;
    unaff_x26 = &PTR_s_appLinkFromALData_destination__11259f000;
    do {
      ppuVar3 = (undefined **)PTR_s_applyConfiguration__11259fa20;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_260 != unaff_x25) {
          _objc_enumerationMutation(ppuVar7);
        }
        unaff_x22 = *(undefined **)(lStack_268 + (long)unaff_x27 * 8);
        unaff_x23 = unaff_x22;
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        _objc_opt_respondsToSelector();
        _objc_release(unaff_x23);
        if (((ulong)unaff_x24 & 1) != 0) {
          unaff_x23 = unaff_x22;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf081e0(unaff_x23);
          _objc_release(unaff_x22);
          _objc_release(unaff_x23);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar7;
      uVar6 = (char)&uStack_270;
      func_0x00010bf52a60();
      ppuVar11 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_3a0;
  pcStack_278 = FUN_108fc70b8;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(ppuVar4 + 7) = uVar6;
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  puVar12 = ppuVar4[6];
  ppuStack_2d0 = unaff_x28;
  ppuStack_2c8 = unaff_x27;
  ppuStack_2c0 = unaff_x26;
  puStack_2b8 = unaff_x25;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  ppuStack_298 = ppuVar3;
  ppuStack_290 = ppuVar11;
  ppuStack_288 = ppuVar7;
  ppuStack_280 = &puStack_150;
  _objc_retain(puVar12);
  puVar9 = auStack_358;
  puVar2 = puVar12;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar14 = *plStack_390;
    do {
      puVar1 = PTR_s_setSectionUpdatable__11265bfd0;
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_390 != lVar14) {
          _objc_enumerationMutation(puVar12);
        }
        uVar13 = *(ulong *)(lStack_398 + (long)puVar15 * 8);
        uVar5 = uVar13;
        _objc_opt_respondsToSelector(uVar13,puVar1);
        if ((uVar5 & 1) != 0) {
          func_0x00010c1f96a0(uVar13);
        }
        puVar15 = puVar15 + 1;
      } while (puVar2 != puVar15);
      puVar9 = auStack_358;
      puVar2 = puVar12;
      puVar8 = &uStack_3a0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  (**(code **)((long)puVar8 + 0x10))(puVar8);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 108fc6f44; end: 108fc70b7; -[SCLegacySectionBasedCollectionViewUpdater _applyConfigurationsForSectionWithConfigurations:] */

void FUN_108fc6f44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  uVar4 = SUB81(&uStack_130,0);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar3 = uVar7;
        func_0x00010c1554e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        _objc_opt_respondsToSelector();
        _objc_release(uVar3);
        if ((uVar8 & 1) != 0) {
          uVar3 = uVar7;
          func_0x00010c1554e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf081e0(uVar3);
          _objc_release(uVar7);
          _objc_release(uVar3);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      uVar4 = (char)&uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_3 + 0x38) = uVar4;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar9 = *(long *)(param_3 + 0x30);
  _objc_retain(lVar9);
  puVar6 = auStack_218;
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_250;
    do {
      puVar1 = PTR_s_setSectionUpdatable__11265bfd0;
      lVar10 = 0;
      do {
        if (*plStack_250 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar8 = *(ulong *)(lStack_258 + lVar10 * 8);
        uVar3 = uVar8;
        _objc_opt_respondsToSelector(uVar8,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010c1f96a0(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar6 = auStack_218;
      lVar2 = lVar9;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  (**(code **)((long)puVar5 + 0x10))(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108fc70b8; end: 108fc71df; -[SCLegacySectionBasedCollectionViewUpdater _setIsUpdating:] */

void FUN_108fc70b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x38) = param_3;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar6);
  puVar5 = auStack_e8;
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      puVar1 = PTR_s_setSectionUpdatable__11265bfd0;
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar3 = uVar7;
        _objc_opt_respondsToSelector(uVar7,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010c1f96a0(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar5 = auStack_e8;
      lVar2 = lVar6;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  (**(code **)((long)puVar4 + 0x10))(puVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108fc71e0; end: 108fc727b; -[SCLegacySectionBasedCollectionViewUpdater _handleExceptionWithRecovery:recoveryBlock:] */

void FUN_108fc71e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc727c; end: 108fc733b; -[SCLegacySectionBasedCollectionViewUpdater _collectionViewLayoutInvalidateLayout] */

undefined1 FUN_108fc727c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108fc733c;
  puStack_58 = &UNK_11084b9d0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108fc7394;
  puStack_80 = &UNK_110ad1c98;
  uStack_78 = param_1;
  uStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010be29080(param_1,param_2,&puStack_70,&puStack_98);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 108fc733c; end: 108fc7393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc733c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108fc7394; end: 108fc7473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7394(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc388;
  func_0x00010c121ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9ef20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f164);
  _objc_opt_class(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c));
  func_0x00010c0af960(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fc7474; end: 108fc7487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108fc7488; end: 108fc74f7; -[SCLegacySectionBasedCollectionViewUpdater _collectionViewLayoutIfNeeded] */

void FUN_108fc7488(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108fc74f8;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108fc750c;
  puStack_48 = &UNK_110ad1c98;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010be29080(param_1,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 108fc74f8; end: 108fc750b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc74f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c),
             PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108fc750c; end: 108fc75f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc750c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126cc388;
  func_0x00010c121ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9ef20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bde1e60();
  if (iVar1 != 0) {
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f164);
  _objc_opt_class(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c));
  func_0x00010c0af980(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc75f8; end: 108fc760b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc75f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108fc760c; end: 108fc7743; -[SCLegacySectionBasedCollectionViewUpdater _collectionViewPerformBatchUpdates:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc760c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11277f14c;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    func_0x00010c0df2e0();
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c0deec0(*(undefined8 *)(param_1 + lVar3),param_2,0);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108fc7744;
    puStack_60 = &UNK_11097cfb0;
    lStack_58 = param_1;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108fc7760;
    puStack_90 = &UNK_110ad1cc8;
    lStack_88 = param_1;
    uStack_48 = param_4;
    _objc_retain(param_4);
    uStack_80 = param_4;
    func_0x00010be29080(param_1,param_2,&puStack_78,&puStack_a8);
    _objc_release(uStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  else {
    func_0x00010c0f8420(*(undefined8 *)(param_1 + lVar3),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fc7744; end: 108fc775f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c),
             PTR_s_performBatchUpdates_completion__11261bb28,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108fc7760; end: 108fc784f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cc388;
  func_0x00010c121ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9ef20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f164);
  _objc_opt_class(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c));
  func_0x00010c0af9a0(uVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fc7850; end: 108fc7863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108fc7864; end: 108fc794b; -[SCLegacySectionBasedCollectionViewUpdater _performBatchUpdateInvalidateCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7864(long param_1)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_1 + _DAT_11277f150) = 0;
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010be29080(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108fc794c; end: 108fc7a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc794c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108fc7a34;
  puStack_50 = &UNK_1108434b0;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0f8420(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108fc7a34; end: 108fc7a93;  */

void FUN_108fc7a34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc7a94; end: 108fc7b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7a94(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126cc388;
  func_0x00010c121ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9ef20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bde1e60();
  if (iVar1 != 0) {
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f164);
  _objc_opt_class(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c));
  func_0x00010c0af940(uVar3);
  func_0x00010be32860(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108fc7b8c; end: 108fc7b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277f14c),
             PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108fc7ba0; end: 108fc7c43; -[SCLegacySectionBasedCollectionViewUpdater .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc7ba0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f164,0);
  _objc_storeStrong(param_1 + _DAT_11277f160,0);
  _objc_storeStrong(param_1 + _DAT_11277f174,0);
  _objc_storeStrong(param_1 + _DAT_11277f178,0);
  _objc_storeStrong(param_1 + _DAT_11277f188,0);
  _objc_storeStrong(param_1 + _DAT_11277f180,0);
  _objc_storeStrong(param_1 + _DAT_11277f168,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f14c,0);
  return;
}



/* Entry: 108fc7c44; end: 108fc7c4b; +[SCSectionBasedCollectionViewUpdaterProvider sectionBasedCollectionViewUpdaterWithCollectionView:] */

void FUN_108fc7c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1555f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sectionBasedCollectionViewUpdate_112632f98,param_3,0);
  return;
}



/* Entry: 108fc7c4c; end: 108fc7ca7; +[SCSectionBasedCollectionViewUpdaterProvider sectionBasedCollectionViewUpdaterWithCollectionView:activateiOS18DequeuFix:] */

void FUN_108fc7c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcd40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfff820();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108fc7ca8; end: 108fc7d4f; -[SCSectionWithConfiguration initWithSection:configuration:] */

undefined1 *
FUN_108fc7ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffb28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fc7d50; end: 108fc7d57; -[SCSectionWithConfiguration section] */

undefined8 FUN_108fc7d50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fc7d58; end: 108fc7d5f; -[SCSectionWithConfiguration configuration] */

undefined8 FUN_108fc7d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fc7d60; end: 108fc7d8f; -[SCSectionWithConfiguration .cxx_destruct] */

void FUN_108fc7d60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fc7d90; end: 108fc7f6b; +[SCUIExceptionReasonHelper extractUIElementClassNameFromExceptionReason:] */

void FUN_108fc7d90(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111183710;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db54d8;
    do {
      ppuVar7 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183710);
        }
        puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
        func_0x00010c127e80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(param_3);
        puVar4 = puVar3;
        func_0x00010bfb1800();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010c11f2c0(puVar4);
          ppuVar6 = param_3;
          func_0x00010c260c80(param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar3);
          goto LAB_108fc7f20;
        }
        _objc_release(puVar3);
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar2 != ppuVar7);
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111183710;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
LAB_108fc7f20:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c041bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0x3fe0000000000000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 108fc7f6c; end: 108fc7f73; -[SCCollectionViewSectionDataProvidingScheduler init] */

void FUN_108fc7f6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c041bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,param_1,PTR_s_initWithScheduleForceUpdateInter_1125ee0e8);
  return;
}



/* Entry: 108fc7f74; end: 108fc806b; -[SCCollectionViewSectionDataProvidingScheduler initWithScheduleForceUpdateInterval:] */

undefined1 * FUN_108fc7f74(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffb30;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fc806c; end: 108fc8143; -[SCCollectionViewSectionDataProvidingScheduler monitorDataProvider:] */

void FUN_108fc806c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc8144; end: 108fc8177;  */

void FUN_108fc8144(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be61140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8178; end: 108fc824f; -[SCCollectionViewSectionDataProvidingScheduler scheduleSectionDataUpdate:] */

void FUN_108fc8178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc8250; end: 108fc8283;  */

void FUN_108fc8250(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9b6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8284; end: 108fc8293; -[SCCollectionViewSectionDataProvidingScheduler _monitorDataProvider:] */

void FUN_108fc8284(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 108fc8294; end: 108fc83fb; -[SCCollectionViewSectionDataProvidingScheduler _scheduleSectionDataUpdate:] */

void FUN_108fc8294(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be340c0();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 8) == 0)) {
    _objc_opt_respondsToSelector(param_3,PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30);
    func_0x00010c235020(param_3);
  }
  else {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 8) == 0) {
      _objc_initWeak(auStack_58,param_1);
      puVar2 = PTR_PTR_1126ae888;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0522e0(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar2;
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108fc83fc; end: 108fc8427;  */

void FUN_108fc83fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be18920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8428; end: 108fc854f; -[SCCollectionViewSectionDataProvidingScheduler _hasLoadingDataProviders] */

long FUN_108fc8428(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar9 = 0;
  if (lVar5 != 0) {
    do {
      puVar1 = PTR_s_dataLoadingStatus_1125b6908;
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lVar9 * 8);
        uVar3 = uVar7;
        _objc_opt_respondsToSelector(uVar7,puVar1);
        if (((uVar3 & 1) != 0) && (func_0x00010bf63d80(), uVar7 == 1)) {
          lVar9 = 1;
          goto LAB_108fc850c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    lVar9 = 0;
  }
LAB_108fc850c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar9;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(lVar6 + 0x20);
  _objc_retain(lVar4);
  lVar9 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30;
  while (PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30 = puVar1, lVar9 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      uVar8 = *(undefined8 *)(lVar10 * 8);
      _objc_opt_respondsToSelector(uVar8,puVar1);
      func_0x00010c235020(uVar8);
      lVar10 = lVar10 + 1;
    } while (lVar9 != lVar10);
    lVar9 = lVar4;
    func_0x00010bf52a60();
    puVar1 = PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30;
  }
  _objc_release(lVar4);
  func_0x00010c12adc0(*(undefined8 *)(lVar6 + 0x20));
  lVar9 = *(long *)(lVar6 + 8);
  *(undefined8 *)(lVar6 + 8) = 0;
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar9 + 0x20,0);
  _objc_storeStrong(lVar9 + 0x18,0);
  _objc_storeStrong(lVar9 + 0x10,0);
  lVar9 = lVar9 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar9,0);
  return lVar9;
}



/* Entry: 108fc8550; end: 108fc867f; -[SCCollectionViewSectionDataProvidingScheduler _forceUpdateAllSections] */

void FUN_108fc8550(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30;
  while (PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30 = puVar1, lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      _objc_opt_respondsToSelector(uVar6,puVar1);
      func_0x00010c235020(uVar6);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar5;
    func_0x00010bf52a60();
    puVar1 = PTR_s_shouldUpdateDataModelsFromDataPr_11266ae30;
  }
  _objc_release(lVar5);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 108fc8680; end: 108fc86c7; -[SCCollectionViewSectionDataProvidingScheduler .cxx_destruct] */

void FUN_108fc8680(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fc86c8; end: 108fc876b; -[SCSectionKitViewMoreCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fc86c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffb38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dcd48;
    _objc_opt_new();
    lVar5 = (long)_DAT_11277f1ac;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fc876c; end: 108fc87db; -[SCSectionKitViewMoreCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc876c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffb38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277f1ac));
  _objc_release(lVar1);
  return;
}



/* Entry: 108fc87dc; end: 108fc87eb; -[SCSectionKitViewMoreCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc87dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f1ac),PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 108fc87ec; end: 108fc87f7; +[SCSectionKitViewMoreCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_108fc87ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcd48,PTR_s_sizeWithViewModel_constrainedToS_11266cfe0);
  return;
}



/* Entry: 108fc87f8; end: 108fc8807; -[SCSectionKitViewMoreCollectionViewCell setRoundedCorner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc87f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ee990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f1ac),PTR_s_setRoundedCorners__112659488);
  return;
}



/* Entry: 108fc8808; end: 108fc8817; -[SCSectionKitViewMoreCollectionViewCell setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc8808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f1ac),PTR_s_setHighlighted__112647c38);
  return;
}



/* Entry: 108fc8818; end: 108fc8853; -[SCSectionKitViewMoreCollectionViewCell sectionKitSeeMoreViewDidTapSeeMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc8818(long param_1)

{
  param_1 = param_1 + _DAT_11277f1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29de20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fc8854; end: 108fc88c3; -[SCSectionKitViewMoreCollectionViewCell applyLayoutAttributes:] */

void FUN_108fc8854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126ffb38;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108fc88c4; end: 108fc88d3; -[SCSectionKitViewMoreCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fc88c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f1b4);
}



/* Entry: 108fc88d4; end: 108fc88e3; -[SCSectionKitViewMoreCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fc88d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f1a8);
}



/* Entry: 108fc88e4; end: 108fc88f3; -[SCSectionKitViewMoreCollectionViewCell setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc88e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277f1a8) = param_3;
  return;
}



/* Entry: 108fc88f4; end: 108fc8913; -[SCSectionKitViewMoreCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc88f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fc8914; end: 108fc8927; -[SCSectionKitViewMoreCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc8914(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f1b0,param_3);
  return;
}



/* Entry: 108fc8928; end: 108fc8973; -[SCSectionKitViewMoreCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fc8928(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277f1b0);
  _objc_storeStrong(param_1 + _DAT_11277f1b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f1ac,0);
  return;
}



/* Entry: 108fc8974; end: 108fc897f; +[SCCollectionViewCarouselSection announcerIdentifier] */

undefined ** FUN_108fc8974(void)

{
  return &PTR____CFConstantStringClassReference_110f16438;
}



/* Entry: 108fc8980; end: 108fc8987; -[SCCollectionViewCarouselSection addListener:] */

void FUN_108fc8980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108fc8988; end: 108fc898f; -[SCCollectionViewCarouselSection removeListener:] */

void FUN_108fc8988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108fc8990; end: 108fc8b07; -[SCCollectionViewCarouselSection initWithSupplementaryViewProvider:containerCellReuseIdentifier:] */

undefined1 *
FUN_108fc8990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ffb40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_4 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f163f8;
    }
    else {
      ppuVar2 = param_4;
      func_0x00010bf51e00();
    }
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined ***)((long)puVar1 + 0x28) = ppuVar2;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126c22e0;
    _objc_alloc();
    func_0x00010c00c800();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x20));
    *(undefined2 *)((long)puVar1 + 0xb6) = 0x101;
    *(undefined8 *)((long)puVar1 + 0x70) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fc8b08; end: 108fc8b13; -[SCCollectionViewCarouselSection initWithSupplementaryViewProvider:] */

void FUN_108fc8b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSupplementaryViewProvide_1125f1820,param_3,
             &PTR____CFConstantStringClassReference_110f163f8);
  return;
}



/* Entry: 108fc8b14; end: 108fc8bcf; -[SCCollectionViewCarouselSection setUp] */

void FUN_108fc8b14(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(ulong *)(param_1 + 0xf8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setUp_112664a70);
  if ((uVar1 & 1) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}


