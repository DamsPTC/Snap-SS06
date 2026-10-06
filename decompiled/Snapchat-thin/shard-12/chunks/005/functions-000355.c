/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091f9d70; end: 1091f9d73; -[SCDMThumbnailsViewController snapSegmentExpandedCellDidPressDelete:] */

void FUN_1091f9d70(void)

{
  return;
}



/* Entry: 1091f9d74; end: 1091f9d7b; -[SCDMThumbnailsViewController snapSegmentExpandedCellShouldShowDeleteButton:] */

undefined8 FUN_1091f9d74(void)

{
  return 0;
}



/* Entry: 1091f9d7c; end: 1091f9d7f; -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:] */

void FUN_1091f9d7c(void)

{
  return;
}



/* Entry: 1091f9d80; end: 1091f9d83; -[SCDMThumbnailsViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:] */

void FUN_1091f9d80(void)

{
  return;
}



/* Entry: 1091f9d84; end: 1091f9e2f; -[SCDMThumbnailsViewController didTapOnThumbnailsActionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9d84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127837e8);
  if (param_3 == lVar1) {
    func_0x00010bf60240();
    if (lVar1 == 1) {
      func_0x00010bedd440(param_1,param_2,1);
      param_1 = param_1 + _DAT_1127837c4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f6160();
    }
    else {
      func_0x00010bedd440(param_1,param_2,0);
      param_1 = param_1 + _DAT_1127837c4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c13dae0();
    }
  }
  else {
    param_1 = param_1 + _DAT_112783804;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7f7a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091f9e30; end: 1091f9e47; -[SCDMThumbnailsViewController _isClipLevelEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1091f9e30(long param_1)

{
  return *(long *)(param_1 + _DAT_112783808) != 0;
}



/* Entry: 1091f9e48; end: 1091f9e7f; -[SCDMThumbnailsViewController _isInPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1091f9e48(long param_1)

{
  param_1 = param_1 + _DAT_1127837c4;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1091f9e80; end: 1091f9e8f; -[SCDMThumbnailsViewController _totalCellsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1581f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278378c),PTR_s_segmentCount_112633a98);
  return;
}



/* Entry: 1091f9e90; end: 1091f9ea7; -[SCDMThumbnailsViewController _isCellSelectedAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9e90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_1 + _DAT_1127837c0));
  return;
}



/* Entry: 1091f9ea8; end: 1091f9eff; -[SCDMThumbnailsViewController _selectedSegmentCellWidth] */

double FUN_1091f9ea8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_4);
  return param_3 + -64.0 + -12.0 + -12.0;
}



/* Entry: 1091f9f00; end: 1091f9fcb; -[SCDMThumbnailsViewController _updateWithPreSelectedSegmentIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9f00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127837c8;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_11278378c);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar2;
    func_0x00010bfecde0();
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar3 != 0x7fffffffffffffff) {
      func_0x00010bf6e8a0(param_1);
      func_0x00010be9db40(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + lVar4,0);
    return;
  }
  return;
}



/* Entry: 1091f9fcc; end: 1091fa2eb; -[SCDMThumbnailsViewController _selectSegmentCellAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091f9fcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar8 = (long)_DAT_11278378c;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c1581e0();
  if (param_3 < uVar1) {
    lVar9 = (long)_DAT_1127837c4;
    lVar2 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c26fe60();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127837c0);
    *(undefined **)(param_1 + _DAT_1127837c0) = puVar3;
    _objc_release(uVar7);
    puVar3 = *(undefined **)(param_1 + lVar8);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar8 = (long)_DAT_112783808;
    _objc_retain(puVar4);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar4;
    _objc_release(uVar7);
    lVar8 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f660();
    _objc_release(lVar8);
    puVar3 = puVar4;
    func_0x00010c26db80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    puVar3 = PTR_DAT_1126a4e40;
    if (puVar5 == (undefined *)0x0) {
      _objc_retain(puVar4);
      puVar5 = puVar4;
      func_0x000107c318f8(puVar4,puVar3);
      puVar3 = puVar4;
      if ((int)puVar5 == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar4);
      if (puVar4 == (undefined *)0x0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_b0,puVar4);
      }
      uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_e8 = uStack_90;
      uStack_f0 = uStack_98;
      uStack_e0 = uStack_88;
      _CMTimeRangeMake(&uStack_80,&uStack_d0,&uStack_f0);
      func_0x00010be9e080(param_1);
      puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      if (puVar3 == (undefined *)0x0) {
        puVar6 = puVar4;
        func_0x00010bf0b7e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b9e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        uStack_a8 = uStack_78;
        uStack_b0 = uStack_80;
        uStack_98 = uStack_68;
        uStack_a0 = uStack_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        puVar6 = PTR_PTR_1126d4260;
        func_0x00010bf59880(PTR_PTR_1126d4260);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = puVar4;
        func_0x00010bfb6cc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uStack_a8 = uStack_78;
        uStack_b0 = uStack_80;
        uStack_98 = uStack_68;
        uStack_a0 = uStack_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        puVar6 = PTR_PTR_1126d4260;
        func_0x00010bf59860(PTR_PTR_1126d4260);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c214080(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    func_0x00010bddc960(param_1);
    lVar8 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c270200();
    _objc_release(lVar8);
    lVar8 = param_1;
    func_0x00010c07a380();
    if ((int)lVar8 != 0) {
      param_1 = param_1 + lVar9;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f6160();
      _objc_release(param_1);
    }
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 1091fa2ec; end: 1091fa44b; -[SCDMThumbnailsViewController _setCellMaximumTrim:] */

void FUN_1091fa2ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_60,param_3);
    func_0x00010bf4d840(&uStack_90,param_3);
  }
  puVar1 = &uStack_60;
  _CMTimeRangeEqual(puVar1,&uStack_90);
  if ((int)puVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf12760();
    _CMTimeMakeWithSeconds(&uStack_90,600);
    _objc_release(param_1);
    if (param_3 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c27c900(&uStack_60,param_3);
    }
    uStack_b8 = uStack_40;
    uStack_c0 = uStack_48;
    uStack_b0 = uStack_38;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    _CMTimeAdd(&uStack_a8,&uStack_c0,&uStack_e0);
    if (param_3 == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_60,param_3);
    }
    uStack_d8 = uStack_a0;
    uStack_e0 = uStack_a8;
    uStack_d0 = uStack_98;
    uStack_f8 = uStack_40;
    uStack_100 = uStack_48;
    uStack_f0 = uStack_38;
    _CMTimeMinimum(&uStack_c0,&uStack_e0,&uStack_100);
    func_0x00010c1c3ca0(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091fa44c; end: 1091fa49f; -[SCDMThumbnailsViewController _changeLayoutAnimated] */

void FUN_1091fa44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1091fa4a0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bed5700(param_1,param_2,&puStack_38,0);
  return;
}



/* Entry: 1091fa4a0; end: 1091fa4a7;  */

void FUN_1091fa4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__changeCollectionViewLayout_112554bd0);
  return;
}



/* Entry: 1091fa4a8; end: 1091fa60f; -[SCDMThumbnailsViewController _updateCollectionViewLayoutWithAnimations:completion:] */

void FUN_1091fa4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1091fa55c;
  puStack_48 = &UNK_110858070;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666666666666,0,puVar1,param_2,0,param_3,&puStack_60
                     );
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091fa610; end: 1091fa8db; -[SCDMThumbnailsViewController _deselectSelectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fa610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_1;
  func_0x00010be3ef00();
  if ((int)lVar11 != 0) {
    lVar11 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112783808;
    func_0x00010bf7f620();
    _objc_release(lVar11);
    lVar9 = (long)_DAT_1127837c4;
    lVar11 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c2700e0();
    _objc_release(lVar11);
    puVar3 = PTR_DAT_1126a4e48;
    lVar11 = (long)_DAT_112783814;
    if (*(char *)(param_1 + lVar11) == '\x01') {
      uVar8 = *(undefined8 *)(param_1 + lVar10);
      _objc_retain(uVar8);
      uVar2 = uVar8;
      func_0x000107c318f8(uVar8,puVar3);
      uVar1 = uVar8;
      if ((int)uVar2 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar8);
      func_0x00010c285d60(uVar1);
      puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      uVar2 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf0b7e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0b9e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (*(long *)(param_1 + lVar10) == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010c09e0e0(&uStack_a0);
      }
      puVar6 = PTR_PTR_1126d4260;
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf597e0(0x4048000000000000,0x4055400000000000,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19d080(*(undefined8 *)(param_1 + lVar10));
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      lVar10 = param_1 + _DAT_112783804;
      _objc_loadWeakRetained(lVar10);
      func_0x00010bf7f6e0();
      _objc_release(lVar10);
      *(undefined1 *)(param_1 + lVar11) = 0;
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
    func_0x00010c1395a0(param_1);
    func_0x00010bddc960(param_1);
    lVar11 = param_1 + lVar9;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c2701e0();
    _objc_release(lVar11);
    lVar11 = param_1;
    func_0x00010c07a380();
    if ((int)lVar11 != 0) {
      param_1 = param_1 + lVar9;
      _objc_loadWeakRetained(param_1);
      func_0x00010c0f6160();
      _objc_release(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1091fa8dc; end: 1091fa8df;  */

void FUN_1091fa8dc(void)

{
  return;
}



/* Entry: 1091fa8e0; end: 1091fa917; -[SCDMThumbnailsViewController _canDropToIndexPath:] */

bool FUN_1091fa8e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c1554e0(param_3);
  func_0x00010becd8c0(param_1);
  return param_3 < param_1;
}



/* Entry: 1091fa918; end: 1091fa9bb; -[SCDMThumbnailsViewController _showClipsReorderingDeleteButtonAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fa918(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_1127837b8);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c17d4a0(uVar1);
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fa9bc; end: 1091faa2b; -[SCDMThumbnailsViewController _enterReorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fa9bc(long param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + _DAT_1127837b4) = 1;
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateCollectionViewForReorderi_112592f58,
             *(undefined8 *)(param_1 + _DAT_1127837b8),0);
  return;
}



/* Entry: 1091faa2c; end: 1091faaa7; -[SCDMThumbnailsViewController resetSegmentSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091faa2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127837c0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar4 = (long)_DAT_11278380c;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783808);
  *(undefined8 *)(param_1 + _DAT_112783808) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127837e4);
  *(undefined8 *)(param_1 + _DAT_1127837e4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091faaa8; end: 1091fab3f; -[SCDMThumbnailsViewController firstThumbnailCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091faaa8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_1127837b8);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126dde60;
  _objc_opt_class(PTR_PTR_1126dde60);
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



/* Entry: 1091fab40; end: 1091fb103; -[SCDMThumbnailsViewController _changeCollectionViewLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fab40(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11278380c;
  uVar1 = *(ulong *)(param_1 + lVar12);
  if (uVar1 == 0) goto LAB_1091fadfc;
  func_0x00010c1554e0();
  lVar9 = (long)_DAT_11278378c;
  uVar2 = *(ulong *)(param_1 + lVar9);
  func_0x00010c1581e0();
  if (uVar2 <= uVar1) goto LAB_1091fadfc;
  lVar9 = *(long *)(param_1 + lVar9);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar12));
  lVar12 = lVar9;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  uVar10 = *(ulong *)(param_1 + (long)_DAT_1127837b8);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  uVar2 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar3);
  uVar1 = uVar10;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar10);
  func_0x00010c17e480(uVar1);
  func_0x00010c173380(uVar1);
  func_0x00010c192e20(uVar1);
  func_0x00010c194ce0(uVar1);
  func_0x00010c2140a0(uVar1);
  lVar9 = lVar12;
  func_0x00010bf8c600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126ae558;
  puVar3 = PTR_DAT_1126a4e40;
  lVar6 = lVar12;
  if (lVar9 == 0) {
    _objc_retain(lVar12);
    lVar4 = lVar12;
    func_0x000107c318f8(lVar12,puVar3);
    lVar9 = lVar12;
    if ((int)lVar4 == 0) {
      lVar9 = 0;
    }
    _objc_retain(lVar9);
    _objc_release(lVar12);
    lVar4 = lVar9;
    func_0x00010bfb6cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR_PTR_1126ae558;
    if (lVar4 != 0) {
      lVar6 = lVar9;
      func_0x00010bfb6cc0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1091fad94;
    }
    func_0x00010bfb13c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar1);
  }
  else {
    func_0x00010bf8c600(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
LAB_1091fad94:
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  _objc_release(lVar6);
  func_0x00010c218dc0(uVar1);
  func_0x00010c1b5280(uVar1);
  func_0x00010bfe25e0(uVar1);
  _objc_release(uVar1);
  _objc_release(lVar12);
LAB_1091fadfc:
  lVar12 = (long)_DAT_1127837c0;
  if (*(long *)(param_1 + lVar12) != 0) {
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11278378c);
    func_0x00010c1585e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(*(undefined8 *)(param_1 + lVar12));
    uVar11 = uVar5;
    func_0x00010c0dfd40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar10 = *(ulong *)(param_1 + (long)_DAT_1127837b8);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0d88;
    _objc_opt_class(PTR_PTR_1126b0d88);
    uVar2 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar3);
    uVar1 = uVar10;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar10);
    func_0x00010c17e480(uVar1);
    func_0x00010c173380(uVar1);
    func_0x00010c192e20(uVar1);
    func_0x00010c194ce0(uVar1);
    func_0x00010c2145e0(0x4041000000000000,0x404e000000000000,uVar1);
    func_0x00010c2140a0(uVar1);
    uVar5 = uVar11;
    func_0x00010c26db80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar1);
    _objc_release(uVar5);
    func_0x00010c218dc0(uVar1);
    func_0x00010c1b5280(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar11);
  }
  func_0x00010c1554e0();
  func_0x00010c1554e0();
  uVar1 = param_1;
  func_0x00010becd8c0();
  lVar12 = (long)_DAT_1127837b8;
  if (uVar1 != 0) {
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0(uVar11);
    _objc_release(puVar3);
  }
  func_0x00010c0f8420(*(undefined8 *)(param_1 + lVar12));
  uVar1 = param_1;
  func_0x00010be41180();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1dd740();
  }
  else {
    func_0x00010bed5740(param_1);
    uVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar1);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127837c0) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278380c) == 0) {
      return;
    }
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010bef9300();
    lVar8 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar8 + _DAT_112783810) == '\x01') {
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c740(lVar8);
      _objc_release(puVar7);
      _objc_release(lVar8);
    }
    else {
      func_0x00010c12cb40(puVar3);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf40120(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066dc0();
  }
  else {
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010bef9300();
    func_0x00010c12cb40(puVar3);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf40120(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c740();
  }
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1091fb104; end: 1091fb303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb104(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127837c0) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278380c) == 0) {
      return;
    }
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010bef9300();
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar3 + _DAT_112783810) == '\x01') {
      func_0x00010bf40120();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c740(lVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c12cb40(puVar2,param_2,*(undefined8 *)(param_1 + 0x38));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf40120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066dc0();
  }
  else {
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    func_0x00010bef9300();
    func_0x00010c12cb40(puVar2,param_2,*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf40120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c740();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091fb304; end: 1091fb333; -[SCDMThumbnailsViewController _updateCollectionViewTrailingConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb304(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xc04c000000000000;
  if (*(long *)(param_1 + _DAT_1127837c0) != 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_1127837d8),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1091fb334; end: 1091fb38f; -[SCDMThumbnailsViewController _autoScrollAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf6f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_1127837b8),param_2,lVar1,0x10,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091fb390; end: 1091fb3cb; -[SCDMThumbnailsViewController _currentPlayingIndexPath] */

void FUN_1091fb390(long param_1,undefined8 param_2)

{
  func_0x00010bdf6f60();
  if (-1 < param_1) {
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fb3cc; end: 1091fb527; -[SCDMThumbnailsViewController _currentPlayingSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1091fb3cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar8 = (long)_DAT_11278378c;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_a0,lVar3);
      }
      _CMTimeRangeGetEnd(auStack_68,&uStack_a0);
      puVar1 = (undefined8 *)(param_1 + _DAT_1127837dc);
      uStack_98 = puVar1[1];
      uStack_a0 = *puVar1;
      uStack_90 = puVar1[2];
      puVar4 = auStack_68;
      _CMTimeCompare(puVar4,&uStack_a0);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (-1 < (int)puVar4) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar7 < uVar6);
  }
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  return lVar3 - 1;
}



/* Entry: 1091fb528; end: 1091fb5cf; -[SCDMThumbnailsViewController _isCellFullyVisibleAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bddc240();
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  lVar1 = (long)_DAT_1127837b8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar1));
  _CGRectOffset(uVar2,uVar3,param_3,param_4,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsRect_110347558)();
  return;
}



/* Entry: 1091fb5d0; end: 1091fb60b; -[SCDMThumbnailsViewController _cellFrameAtIndexPath:] */

double FUN_1091fb5d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c1554e0(param_3);
  return (double)param_3 * 54.0;
}



/* Entry: 1091fb60c; end: 1091fb69f; -[SCDMThumbnailsViewController _updatePlaybackManuallyPausedToValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb60c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_1127837ec) = param_3;
  lVar1 = param_1 + _DAT_1127837c4;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf60240();
  }
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112783804;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7f6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fb6a0; end: 1091fb837; -[SCDMThumbnailsViewController _canReorderWithRemixMetadataAtSourceIndexPath:destinationIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1091fb6a0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = (long)_DAT_11278378c;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_3;
  func_0x00010c1554e0();
  _objc_release(uVar2);
  if (uVar4 < uVar3) {
    uVar2 = *(ulong *)(param_1 + lVar8);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = param_4;
    func_0x00010c1554e0();
    _objc_release(uVar2);
    if (uVar4 < uVar3) {
      lVar5 = *(long *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c1554e0(param_3);
      lVar6 = lVar5;
      func_0x00010c0dfd40(lVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c129840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_1 + lVar8);
        func_0x00010c1585e0(lVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010c1554e0(param_4);
        lVar8 = lVar7;
        func_0x00010c0dfd40(lVar7,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar8;
        func_0x00010c129840();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar6 == 0;
        _objc_release();
        _objc_release(lVar8);
        _objc_release(lVar7);
        goto LAB_1091fb7ac;
      }
    }
  }
  bVar1 = false;
LAB_1091fb7ac:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1091fb838; end: 1091fb887; -[SCDMThumbnailsViewController _updateTemplateExplorerButtonVisibilityIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb838(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_1127837f8);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11278378c);
    func_0x00010c1581e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setHidden__1126479f8,lVar1 != 0);
    return;
  }
  return;
}



/* Entry: 1091fb888; end: 1091fb947; -[SCDMThumbnailsViewController onTap] */

void FUN_1091fb888(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1091fb948; end: 1091fb997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb948(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112783804;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7f7c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fb998; end: 1091fb9a7; -[SCDMThumbnailsViewController mediaConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091fb998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278378c);
}



/* Entry: 1091fb9a8; end: 1091fb9b7; -[SCDMThumbnailsViewController selectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091fb9a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783808);
}



/* Entry: 1091fb9b8; end: 1091fb9d7; -[SCDMThumbnailsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb9b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783804);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fb9d8; end: 1091fb9eb; -[SCDMThumbnailsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112783804,param_3);
  return;
}



/* Entry: 1091fb9ec; end: 1091fba0b; -[SCDMThumbnailsViewController playerHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fb9ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127837c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fba0c; end: 1091fba1f; -[SCDMThumbnailsViewController setPlayerHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fba0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127837c4,param_3);
  return;
}



/* Entry: 1091fba20; end: 1091fba2f; -[SCDMThumbnailsViewController collectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091fba20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127837b8);
}



/* Entry: 1091fba30; end: 1091fba6f; -[SCDMThumbnailsViewController setCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fba30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127837b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091fba70; end: 1091fbbe3; -[SCDMThumbnailsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fba70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127837b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127837c4);
  _objc_destroyWeak(param_1 + _DAT_112783804);
  _objc_storeStrong(param_1 + _DAT_112783808,0);
  _objc_storeStrong(param_1 + _DAT_11278378c,0);
  _objc_storeStrong(param_1 + _DAT_1127837f8,0);
  _objc_storeStrong(param_1 + _DAT_1127837ac,0);
  _objc_storeStrong(param_1 + _DAT_1127837bc,0);
  _objc_storeStrong(param_1 + _DAT_1127837f4,0);
  _objc_storeStrong(param_1 + _DAT_112783800,0);
  _objc_storeStrong(param_1 + _DAT_1127837fc,0);
  _objc_storeStrong(param_1 + _DAT_1127837e4,0);
  _objc_storeStrong(param_1 + _DAT_1127837cc,0);
  _objc_storeStrong(param_1 + _DAT_1127837d8,0);
  _objc_storeStrong(param_1 + _DAT_1127837d4,0);
  _objc_storeStrong(param_1 + _DAT_11278380c,0);
  _objc_storeStrong(param_1 + _DAT_1127837c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127837c8);
  _objc_storeStrong(param_1 + _DAT_1127837f0,0);
  _objc_storeStrong(param_1 + _DAT_1127837e8,0);
  _objc_storeStrong(param_1 + _DAT_112783788,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783790,0);
  return;
}



/* Entry: 1091fbbe4; end: 1091fbf43;  */

void FUN_1091fbbe4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  double *param_9)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  double in_stack_00000030;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  
  uVar1 = (uint)param_9;
  dVar12 = param_1;
  _CGRectGetMinY();
  dVar2 = param_5;
  _CGRectGetMaxY(param_5,param_6,param_7,param_8);
  in_stack_00000030 = in_stack_00000030 - in_stack_00000050;
  if (in_stack_00000030 <= 0.0) {
    in_stack_00000030 = 0.0;
  }
  dVar9 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar5 = dVar12 + (double)(long)((dVar2 - dVar12) * in_stack_00000040) / in_stack_00000040;
  dVar9 = dVar12 + (double)(long)(((dVar9 - in_stack_00000030) - dVar12) * in_stack_00000040) /
                   in_stack_00000040;
  dVar2 = dVar5;
  if (dVar9 <= dVar5) {
    dVar2 = dVar9;
  }
  dVar9 = (dVar2 - in_stack_00000048) - dVar12;
  dVar6 = in_stack_00000040 * dVar9;
  dVar9 = -(in_stack_00000040 * dVar9);
  if (0.0 <= dVar6) {
    dVar9 = dVar6;
  }
  if (dVar9 <= 1.0) {
    dVar9 = 1.0;
  }
  dVar12 = dVar12 + (double)(long)(dVar6 + dVar9 * 2.220446049250313e-16 * 4.0) / in_stack_00000040;
  dVar9 = param_5;
  _CGRectGetMinY(param_5,param_6,param_7,param_8);
  if (dVar12 <= dVar9) {
    dVar12 = dVar9;
  }
  dVar9 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar6 = param_5;
  _CGRectGetMinX(param_5,param_6,param_7,param_8);
  dVar7 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar13 = 0.0;
  dVar9 = dVar9 + (double)(long)(in_stack_00000040 * (dVar6 - dVar7)) / in_stack_00000040;
  _CGRectGetWidth(param_5,param_6,param_7,param_8);
  dVar7 = in_stack_00000040 * param_5;
  dVar6 = -(in_stack_00000040 * param_5);
  if (0.0 <= dVar7) {
    dVar6 = dVar7;
  }
  if (dVar6 <= 1.0) {
    dVar6 = 1.0;
  }
  dVar7 = (double)(long)(dVar7 + dVar6 * 2.220446049250313e-16 * 4.0) / in_stack_00000040;
  dVar6 = dVar5 - dVar12;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  _CGRectIntersection(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                      param_1,param_2,param_3,param_4);
  dVar3 = dVar9;
  dVar8 = dVar12;
  dVar10 = dVar7;
  dVar11 = dVar6;
  _CGRectIntersection(dVar9,dVar12,dVar7,dVar6,in_stack_00000000,in_stack_00000008,in_stack_00000010
                      ,in_stack_00000018);
  _CGRectIsNull();
  dVar4 = 0.0;
  if ((uVar1 & 1) == 0) {
    _CGRectGetHeight(dVar3,dVar8,dVar10,dVar11);
    dVar4 = dVar3;
  }
  if (1.0 / in_stack_00000040 < dVar4) {
    dVar13 = (double)(long)(in_stack_00000040 * dVar4) / in_stack_00000040;
  }
  dVar5 = dVar5 - dVar2;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  *param_9 = dVar9;
  param_9[1] = dVar12;
  param_9[2] = dVar7;
  param_9[3] = dVar6;
  _CGRectGetHeight(dVar9,dVar12,dVar7,dVar6);
  param_9[4] = dVar9;
  param_9[5] = dVar13;
  *(bool *)(param_9 + 6) = 0.0 < dVar13;
  *(undefined4 *)((long)param_9 + 0x31) = 0;
  *(undefined4 *)((long)param_9 + 0x34) = 0;
  param_9[7] = dVar5;
  param_9[8] = dVar2;
  param_9[9] = dVar13;
  return;
}



/* Entry: 1091fbf44; end: 1091fbfa3; -[SCDirectorModeThumbnailsWindowObservationView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fbf44(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112700f78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  param_1 = param_1 + _DAT_112783818;
  _objc_loadWeakRetained(param_1);
  func_0x00010be976e0();
  _objc_release(param_1);
  return;
}



/* Entry: 1091fbfa4; end: 1091fbfc3; -[SCDirectorModeThumbnailsWindowObservationView layoutController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fbfa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fbfc4; end: 1091fbfd7; -[SCDirectorModeThumbnailsWindowObservationView setLayoutController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fbfc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112783818,param_3);
  return;
}



/* Entry: 1091fbfd8; end: 1091fbfe7; -[SCDirectorModeThumbnailsWindowObservationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fbfd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112783818);
  return;
}



/* Entry: 1091fbfe8; end: 1091fc173; -[SCDirectorModeThumbnailsLayoutController initWithRootView:thumbnailHostView:thumbnailsView:cameraView:thumbnailContentHeight:thumbnailContentBottomMargin:geometryDidChange:] */

undefined1 *
FUN_1091fbfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112700f80;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_8);
    *(undefined8 *)((long)puVar1 + 0x90) = param_1;
    *(undefined8 *)((long)puVar1 + 0x98) = param_2;
    uVar4 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    *(undefined2 *)((long)puVar1 + 0x13a) = 0x101;
    puVar2 = PTR_PTR_1126dde68;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1b9ae0(*(undefined8 *)((long)puVar1 + 0x28));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + 0x28));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + 0x28));
    func_0x00010befbb60(param_5);
    func_0x00010c266b80(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1091fc174; end: 1091fc197; -[SCDirectorModeThumbnailsLayoutController geometry] */

void FUN_1091fc174(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x60);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  param_1[9] = *(undefined8 *)(param_2 + 0x80);
  param_1[8] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1091fc198; end: 1091fc19f; -[SCDirectorModeThumbnailsLayoutController freshness] */

undefined8 FUN_1091fc198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1091fc1a0; end: 1091fc1a7; -[SCDirectorModeThumbnailsLayoutController hasGeometry] */

undefined1 FUN_1091fc1a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x138);
}



/* Entry: 1091fc1a8; end: 1091fc1af; -[SCDirectorModeThumbnailsLayoutController hasAttachedGeometry] */

undefined1 FUN_1091fc1a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x139);
}



/* Entry: 1091fc1b0; end: 1091fc1b7; -[SCDirectorModeThumbnailsLayoutController geometryUpdateCount] */

undefined8 FUN_1091fc1b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1091fc1b8; end: 1091fc72f; -[SCDirectorModeThumbnailsLayoutController synchronize] */

void FUN_1091fc1b8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_f0 [80];
  
  if ((*(byte *)(param_5 + 0x13c) & 1) != 0) {
    return;
  }
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained();
  lVar4 = param_5 + 0x18;
  _objc_loadWeakRetained();
  lVar5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if ((((lVar2 == 0) || (lVar3 == 0)) || (lVar4 == 0)) || (lVar5 == 0)) goto LAB_1091fc510;
  lVar6 = lVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    *(undefined1 *)(param_5 + 0x13a) = 1;
    if (*(char *)(param_5 + 0x139) == '\x01') goto LAB_1091fc4fc;
    func_0x00010bede240(param_5);
  }
  else {
    func_0x00010bf20c00(lVar2);
    dVar9 = param_1;
    dVar19 = param_2;
    dVar21 = param_3;
    dVar23 = param_4;
    func_0x00010bf20c00(lVar3);
    func_0x00010bf513e0(lVar2);
    dVar10 = dVar9;
    dVar20 = dVar19;
    dVar22 = dVar21;
    dVar24 = dVar23;
    func_0x00010bf20c00(lVar5);
    func_0x00010bf513e0(lVar2);
    lVar7 = lVar6;
    dVar11 = dVar10;
    dVar27 = dVar20;
    dVar28 = dVar22;
    dVar25 = dVar24;
    func_0x00010c150e00(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar26 = dVar11;
    _objc_release(lVar7);
    func_0x00010bf20c00(lVar6);
    dVar12 = dVar26;
    dVar13 = dVar27;
    dVar14 = dVar28;
    dVar15 = dVar25;
    func_0x00010c148fc0(lVar6);
    dVar26 = dVar26 + dVar13;
    dVar27 = dVar27 + dVar12;
    dVar28 = dVar28 - (dVar13 + dVar15);
    dVar25 = dVar25 - (dVar12 + dVar14);
    func_0x00010bf513e0(lVar2);
    dVar12 = dVar26;
    _CGRectGetMinY();
    dVar13 = param_1;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar14 = dVar26;
    _CGRectGetMinX(dVar26,dVar27,dVar28,dVar25);
    dVar15 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar16 = param_1;
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    dVar17 = dVar26;
    _CGRectGetMaxY(dVar26,dVar27,dVar28,dVar25);
    dVar18 = param_1;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    _CGRectGetMaxX(dVar26,dVar27,dVar28,dVar25);
    lVar7 = param_5;
    func_0x00010be1c840(param_1,param_2,param_3,param_4,dVar9,dVar19,dVar21,dVar23);
    if ((int)lVar7 != 0) {
      lVar7 = lVar5;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == lVar6) {
        lVar8 = lVar3;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar7);
        if (lVar8 == lVar6) {
          if ((*(byte *)(param_5 + 0x13a) & 1) == 0) {
            lVar7 = param_5 + 0x128;
            _objc_loadWeakRetained();
            if (lVar6 != lVar7) {
LAB_1091fc63c:
              _objc_release(lVar7);
              goto LAB_1091fc644;
            }
            lVar8 = lVar7;
            _CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0xa0),
                               *(undefined8 *)(param_5 + 0xa8),*(undefined8 *)(param_5 + 0xb0),
                               *(undefined8 *)(param_5 + 0xb8));
            iVar1 = (int)lVar8;
            if (((((iVar1 == 0) ||
                  (_CGRectEqualToRect(dVar9,dVar19,dVar21,dVar23,*(undefined8 *)(param_5 + 0xc0),
                                      *(undefined8 *)(param_5 + 200),*(undefined8 *)(param_5 + 0xd0)
                                      ,*(undefined8 *)(param_5 + 0xd8)), iVar1 == 0)) ||
                 ((_CGRectEqualToRect(dVar10,dVar20,dVar22,dVar24,*(undefined8 *)(param_5 + 0xe0),
                                      *(undefined8 *)(param_5 + 0xe8),
                                      *(undefined8 *)(param_5 + 0xf0),
                                      *(undefined8 *)(param_5 + 0xf8)), iVar1 == 0 ||
                  ((dVar14 - dVar15 != *(double *)(param_5 + 0x108) ||
                   (dVar12 - dVar13 != *(double *)(param_5 + 0x100))))))) ||
                (dVar18 - dVar26 != *(double *)(param_5 + 0x118))) ||
               (dVar16 - dVar17 != *(double *)(param_5 + 0x110))) goto LAB_1091fc63c;
            dVar27 = *(double *)(param_5 + 0x120);
            _objc_release(lVar7);
            if (dVar11 != dVar27) goto LAB_1091fc644;
            func_0x00010bea4160(param_5);
          }
          else {
LAB_1091fc644:
            FUN_1091fbbe4(param_1,param_2,param_3,param_4,dVar9,dVar19,dVar21,dVar23,auStack_f0);
            func_0x00010bdc3d40(param_5);
            *(double *)(param_5 + 0xa0) = param_1;
            *(double *)(param_5 + 0xa8) = param_2;
            *(double *)(param_5 + 0xb0) = param_3;
            *(double *)(param_5 + 0xb8) = param_4;
            *(double *)(param_5 + 0xc0) = dVar9;
            *(double *)(param_5 + 200) = dVar19;
            *(double *)(param_5 + 0xd0) = dVar21;
            *(double *)(param_5 + 0xd8) = dVar23;
            *(double *)(param_5 + 0xe0) = dVar10;
            *(double *)(param_5 + 0xe8) = dVar20;
            *(double *)(param_5 + 0xf0) = dVar22;
            *(double *)(param_5 + 0xf8) = dVar24;
            *(double *)(param_5 + 0x100) = dVar12 - dVar13;
            *(double *)(param_5 + 0x108) = dVar14 - dVar15;
            *(double *)(param_5 + 0x110) = dVar16 - dVar17;
            *(double *)(param_5 + 0x118) = dVar18 - dVar26;
            *(double *)(param_5 + 0x120) = dVar11;
            _objc_storeWeak(param_5 + 0x128,lVar6);
            *(undefined2 *)(param_5 + 0x139) = 1;
          }
          func_0x00010bdcdf20(param_5);
          goto LAB_1091fc508;
        }
      }
      else {
        _objc_release(lVar7);
      }
    }
    *(undefined1 *)(param_5 + 0x13a) = 1;
    if (*(char *)(param_5 + 0x139) == '\x01') {
LAB_1091fc4fc:
      func_0x00010bea4160(param_5);
    }
  }
LAB_1091fc508:
  _objc_release(lVar6);
LAB_1091fc510:
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1091fc730; end: 1091fc7d3; -[SCDirectorModeThumbnailsLayoutController setActive:] */

void FUN_1091fc730(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
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
  
  if (((*(byte *)(param_1 + 0x13c) & 1) == 0) && (*(byte *)(param_1 + 0x13b) != param_3)) {
    if ((param_3 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x13b) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x13a) = 1;
      func_0x00010c266b80(param_1);
      *(undefined1 *)(param_1 + 0x13b) = 1;
      func_0x00010bdcdf20(param_1);
      if ((*(char *)(param_1 + 0x138) == '\x01') && (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0))
      {
        uStack_58 = *(undefined8 *)(param_1 + 0x50);
        uStack_60 = *(undefined8 *)(param_1 + 0x48);
        uStack_48 = *(undefined8 *)(param_1 + 0x60);
        uStack_50 = *(undefined8 *)(param_1 + 0x58);
        uStack_38 = *(undefined8 *)(param_1 + 0x70);
        uStack_40 = *(undefined8 *)(param_1 + 0x68);
        uStack_28 = *(undefined8 *)(param_1 + 0x80);
        uStack_30 = *(undefined8 *)(param_1 + 0x78);
        uStack_68 = *(undefined8 *)(param_1 + 0x40);
        uStack_70 = *(undefined8 *)(param_1 + 0x38);
        (**(code **)(lVar1 + 0x10))(lVar1,&uStack_70,*(undefined8 *)(param_1 + 0x88));
      }
    }
  }
  return;
}



/* Entry: 1091fc7d4; end: 1091fc7d7; -[SCDirectorModeThumbnailsLayoutController invalidate] */

void FUN_1091fc7d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidate_11256cf68);
  return;
}



/* Entry: 1091fc7d8; end: 1091fc8ef; -[SCDirectorModeThumbnailsLayoutController dealloc] */

void FUN_1091fc7d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x13c) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    *(undefined1 *)(param_1 + 0x13c) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 8,0);
    _objc_storeWeak(param_1 + 0x10,0);
    _objc_storeWeak(param_1 + 0x18,0);
    lVar2 = param_1 + 0x20;
    _objc_storeWeak(lVar2,0);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1091fc8f0;
    puStack_40 = &UNK_110842e18;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010c0f88c0(lVar2);
    _objc_release(lVar2);
    _objc_release(uStack_38);
    _objc_release(uVar3);
  }
  puStack_60 = PTR_PTR_112700f80;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091fc8f0; end: 1091fc92b;  */

void FUN_1091fc8f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c1b9ae0(uVar1,param_2,0);
  func_0x00010c12c960(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091fc92c; end: 1091fc92f; -[SCDirectorModeThumbnailsLayoutController _rootViewWindowDidChange] */

void FUN_1091fc92c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_synchronize_112677508);
  return;
}



/* Entry: 1091fc930; end: 1091fcbab; -[SCDirectorModeThumbnailsLayoutController _updateProvisionalGeometryIfPossible] */

void FUN_1091fc930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e0 [80];
  
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf20c00(lVar2);
  uVar6 = param_1;
  uVar9 = param_2;
  uVar10 = param_3;
  uVar12 = param_4;
  func_0x00010bf20c00(lVar3);
  func_0x00010bf513e0(lVar2,param_6,lVar3);
  uVar8 = uVar6;
  uVar7 = uVar9;
  uVar11 = uVar10;
  uVar13 = uVar12;
  func_0x00010bf20c00(lVar4);
  func_0x00010bf513e0(lVar2,param_6,lVar4);
  puVar1 = PTR__UIEdgeInsetsZero_110345bb0;
  uVar5 = param_5;
  func_0x00010be1c840(param_1,param_2,param_3,param_4,uVar6,uVar9,uVar10,uVar12);
  if ((int)uVar5 != 0) {
    if ((((*(char *)(param_5 + 0x138) == '\x01') &&
         (_CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0xa0),
                             *(undefined8 *)(param_5 + 0xa8),*(undefined8 *)(param_5 + 0xb0),
                             *(undefined8 *)(param_5 + 0xb8)), (int)uVar5 != 0)) &&
        (_CGRectEqualToRect(uVar6,uVar9,uVar10,uVar12,*(undefined8 *)(param_5 + 0xc0),
                            *(undefined8 *)(param_5 + 200),*(undefined8 *)(param_5 + 0xd0),
                            *(undefined8 *)(param_5 + 0xd8)), (int)uVar5 != 0)) &&
       (_CGRectEqualToRect(uVar8,uVar7,uVar11,uVar13,*(undefined8 *)(param_5 + 0xe0),
                           *(undefined8 *)(param_5 + 0xe8),*(undefined8 *)(param_5 + 0xf0),
                           *(undefined8 *)(param_5 + 0xf8)), (uVar5 & 1) != 0)) {
      func_0x00010bea4160(param_5,param_6,0);
    }
    else {
      FUN_1091fbbe4(param_1,param_2,param_3,param_4,uVar6,uVar9,uVar10,uVar12,auStack_e0);
      func_0x00010bdc3d40(param_5,param_6,auStack_e0,0);
      *(undefined8 *)(param_5 + 0xa0) = param_1;
      *(undefined8 *)(param_5 + 0xa8) = param_2;
      *(undefined8 *)(param_5 + 0xb0) = param_3;
      *(undefined8 *)(param_5 + 0xb8) = param_4;
      *(undefined8 *)(param_5 + 0xc0) = uVar6;
      *(undefined8 *)(param_5 + 200) = uVar9;
      *(undefined8 *)(param_5 + 0xd0) = uVar10;
      *(undefined8 *)(param_5 + 0xd8) = uVar12;
      *(undefined8 *)(param_5 + 0xe0) = uVar8;
      *(undefined8 *)(param_5 + 0xe8) = uVar7;
      *(undefined8 *)(param_5 + 0xf0) = uVar11;
      *(undefined8 *)(param_5 + 0xf8) = uVar13;
      uVar6 = *(undefined8 *)puVar1;
      uVar9 = *(undefined8 *)(puVar1 + 0x18);
      uVar8 = *(undefined8 *)(puVar1 + 0x10);
      *(undefined8 *)(param_5 + 0x108) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(param_5 + 0x100) = uVar6;
      *(undefined8 *)(param_5 + 0x118) = uVar9;
      *(undefined8 *)(param_5 + 0x110) = uVar8;
      *(undefined8 *)(param_5 + 0x120) = 0x3ff0000000000000;
    }
    func_0x00010bdcdf20(param_5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1091fcbac; end: 1091fcd37; -[SCDirectorModeThumbnailsLayoutController _acceptGeometry:freshness:] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001091fcc18 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1091fcbac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_3 + 0x138) == '\x01') {
    cVar1 = *(char *)(param_3 + 0x68);
    dVar13 = *(double *)(param_3 + 0x80);
    cVar2 = *(char *)(param_5 + 6);
    dVar14 = (double)param_5[9];
    dVar21 = *(double *)(param_3 + 0x60);
    dVar19 = *(double *)(param_3 + 0x58);
    dVar17 = *(double *)(param_3 + 0x78);
    dVar15 = *(double *)(param_3 + 0x70);
    dVar22 = (double)param_5[5];
    dVar20 = (double)param_5[4];
    dVar18 = (double)param_5[8];
    dVar16 = (double)param_5[7];
    lVar9 = param_3;
    _CGRectEqualToRect(param_1,param_2,*(undefined8 *)(param_3 + 0x48),
                       *(undefined8 *)(param_3 + 0x50),*param_5,param_5[1],param_5[2],param_5[3]);
    bVar7 = true;
    if (((int)lVar9 != 0) &&
       ((((-(dVar19 == dVar20) & 1U) + (-(dVar21 == dVar22) & 2U) +
          (-(dVar15 == dVar16) & 4U) + (-(dVar17 == dVar18) & 8U) ^ 0xff) & 0xf) == 0 &&
        cVar1 == cVar2)) {
      bVar7 = dVar13 != dVar14;
    }
  }
  else {
    bVar7 = true;
  }
  bVar8 = true;
  if (*(char *)(param_3 + 0x138) == '\x01') {
    bVar8 = *(long *)(param_3 + 0x88) != param_6;
  }
  uVar3 = *param_5;
  *(undefined8 *)(param_3 + 0x40) = param_5[1];
  *(undefined8 *)(param_3 + 0x38) = uVar3;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  uVar6 = param_5[5];
  uVar5 = param_5[4];
  uVar11 = param_5[7];
  uVar10 = param_5[6];
  uVar12 = param_5[8];
  *(undefined8 *)(param_3 + 0x80) = param_5[9];
  *(undefined8 *)(param_3 + 0x78) = uVar12;
  *(undefined8 *)(param_3 + 0x70) = uVar11;
  *(undefined8 *)(param_3 + 0x68) = uVar10;
  *(undefined8 *)(param_3 + 0x60) = uVar6;
  *(undefined8 *)(param_3 + 0x58) = uVar5;
  *(undefined8 *)(param_3 + 0x50) = uVar4;
  *(undefined8 *)(param_3 + 0x48) = uVar3;
  *(long *)(param_3 + 0x88) = param_6;
  *(undefined1 *)(param_3 + 0x138) = 1;
  if (bVar7) {
    *(long *)(param_3 + 0x130) = *(long *)(param_3 + 0x130) + 1;
    bVar8 = true;
  }
  if (((*(char *)(param_3 + 0x13b) == '\x01') && (bVar8)) &&
     (lVar9 = *(long *)(param_3 + 0x30), lVar9 != 0)) {
    uStack_88 = *(undefined8 *)(param_3 + 0x50);
    uStack_90 = *(undefined8 *)(param_3 + 0x48);
    uStack_78 = *(undefined8 *)(param_3 + 0x60);
    uStack_80 = *(undefined8 *)(param_3 + 0x58);
    uStack_68 = *(undefined8 *)(param_3 + 0x70);
    uStack_70 = *(undefined8 *)(param_3 + 0x68);
    uStack_58 = *(undefined8 *)(param_3 + 0x80);
    uStack_60 = *(undefined8 *)(param_3 + 0x78);
    uStack_98 = *(undefined8 *)(param_3 + 0x40);
    uStack_a0 = *(undefined8 *)(param_3 + 0x38);
    (**(code **)(lVar9 + 0x10))(lVar9,&uStack_a0,param_6);
  }
  return;
}



/* Entry: 1091fcd38; end: 1091fcdaf; -[SCDirectorModeThumbnailsLayoutController _setFreshness:] */

void FUN_1091fcd38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((((*(char *)(param_1 + 0x138) == '\x01') && (*(long *)(param_1 + 0x88) != param_3)) &&
      (*(long *)(param_1 + 0x88) = param_3, *(char *)(param_1 + 0x13b) == '\x01')) &&
     (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) {
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    uStack_38 = *(undefined8 *)(param_1 + 0x60);
    uStack_40 = *(undefined8 *)(param_1 + 0x58);
    uStack_28 = *(undefined8 *)(param_1 + 0x70);
    uStack_30 = *(undefined8 *)(param_1 + 0x68);
    uStack_18 = *(undefined8 *)(param_1 + 0x80);
    uStack_20 = *(undefined8 *)(param_1 + 0x78);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    (**(code **)(lVar1 + 0x10))(lVar1,&uStack_60);
  }
  return;
}



/* Entry: 1091fcdb0; end: 1091fcefb; -[SCDirectorModeThumbnailsLayoutController _applyCurrentGeometry] */

void FUN_1091fcdb0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((*(char *)(param_1 + 0x13b) == '\x01') && (*(char *)(param_1 + 0x138) == '\x01')) {
    uVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    if (((uVar1 != 0) && (uVar2 != 0)) && (uVar3 != 0)) {
      uVar4 = uVar3;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == uVar2) {
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        if (uVar2 == uVar1) {
          uVar5 = *(undefined8 *)(param_1 + 0x40);
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x40);
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010bf513e0(uVar8,uVar5,uVar6,uVar7,uVar2,param_2,uVar1);
        }
        uVar4 = uVar3;
        func_0x00010bfb68e0();
        _CGRectEqualToRect();
        if ((uVar4 & 1) == 0) {
          func_0x00010c19f0e0(uVar8,uVar5,uVar6,uVar7,uVar3);
        }
      }
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1091fcefc; end: 1091fcfcb; -[SCDirectorModeThumbnailsLayoutController _geometryInputsAreValidWithRootBounds:thumbnailHostBounds:cameraFrame:systemSafeAreaInsets:displayScale:] */

void FUN_1091fcefc(int param_1)

{
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_1091fcfcc();
  if ((param_1 != 0) && (FUN_1091fcfcc(in_d4,in_d5,in_d6,in_d7), param_1 != 0)) {
    FUN_1091fcfcc(in_stack_00000000,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  }
  return;
}



/* Entry: 1091fcfcc; end: 1091fd0f7;  */

bool FUN_1091fcfcc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  double dVar2;
  
  _CGRectIsNull();
  if (((((param_5 & 1) != 0) ||
       (_CGRectIsInfinite(param_1,param_2,param_3,param_4), (param_5 & 1) != 0)) ||
      (dVar2 = param_1, _CGRectGetMinX(param_1,param_2,param_3,param_4),
      0x7fefffffffffffff < (ulong)ABS(dVar2))) ||
     (((dVar2 = param_1, _CGRectGetMinY(param_1,param_2,param_3,param_4),
       0x7fefffffffffffff < (ulong)ABS(dVar2) ||
       (dVar2 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4),
       0x7fefffffffffffff < (ulong)ABS(dVar2))) ||
      ((dVar2 = param_1, _CGRectGetHeight(param_1,param_2,param_3,param_4),
       0x7fefffffffffffff < (ulong)ABS(dVar2) ||
       (dVar2 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4), dVar2 <= 0.0)))))) {
    bVar1 = false;
  }
  else {
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    bVar1 = 0.0 < param_1;
  }
  return bVar1;
}



/* Entry: 1091fd0f8; end: 1091fd1a3; -[SCDirectorModeThumbnailsLayoutController _invalidate] */

void FUN_1091fd0f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x13c) & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  *(undefined1 *)(param_1 + 0x13c) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 8,0);
  _objc_storeWeak(param_1 + 0x10,0);
  _objc_storeWeak(param_1 + 0x18,0);
  _objc_storeWeak(param_1 + 0x20,0);
  _objc_retain(uVar2);
  func_0x00010c1b9ae0(uVar2);
  func_0x00010c12c960(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091fd1a4; end: 1091fd1fb; -[SCDirectorModeThumbnailsLayoutController .cxx_destruct] */

void FUN_1091fd1a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x128);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091fd1fc; end: 1091fd393; -[SCFeatureDirectorModeThumbnailsImpl initWithSnapDocEditorProvider:mediaConfiguration:thumbnailGenerator:includeFooterView:snapEditorEnabled:isSegmentTrimmable:isClipReorderingEnabled:maxVideoDurationInSec:useFixedSegmentDuration:templateExplorerEnabled:runtime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1091fd1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000008);
  puStack_78 = PTR_PTR_112700f88;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112783874;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112783878;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dde70;
    _objc_alloc();
    func_0x00010c0476a0();
    lVar4 = (long)_DAT_11278387c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    *(undefined1 *)((long)puVar1 + (long)_DAT_112783880) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112783884) = param_1;
  }
  _objc_release(in_stack_00000008);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1091fd394; end: 1091fd3c7; -[SCFeatureDirectorModeThumbnailsImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd394(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_112783888,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beb0890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupThumbnailsInParentView_112589bc8);
  return;
}



/* Entry: 1091fd3c8; end: 1091fd59f; -[SCFeatureDirectorModeThumbnailsImpl configureRuntimeGeometryWithView:cameraView:overlapDidChangeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd3c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = (long)_DAT_11278388c;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar6));
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_112783888,param_3);
  uVar1 = param_5;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112783890);
  *(undefined8 *)(param_1 + _DAT_112783890) = uVar1;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_112783894) = 0;
  lVar4 = (long)_DAT_112783898;
  lVar5 = (long)_DAT_11278387c;
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    func_0x00010bf91780(*(undefined8 *)(param_1 + lVar5));
    *(undefined1 *)(param_1 + lVar4) = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126dde78;
  _objc_alloc();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0402c0(0x4053000000000000,0x4020000000000000);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091fd5a0; end: 1091fd683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd5a0(long param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf08800(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_1 + _DAT_11278387c));
    lVar1 = (long)_DAT_112783894;
    if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
      *(undefined8 *)(param_1 + _DAT_11278389c) = *(undefined8 *)(param_2 + 0x48);
      *(undefined1 *)(param_1 + lVar1) = 1;
    }
    else {
      dVar2 = *(double *)(param_1 + _DAT_11278389c);
      dVar3 = *(double *)(param_2 + 0x48);
      *(double *)(param_1 + _DAT_11278389c) = dVar3;
      *(undefined1 *)(param_1 + lVar1) = 1;
      if (dVar2 == dVar3) goto LAB_1091fd670;
    }
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2120(*(undefined8 *)(param_2 + 0x48));
    _objc_release(lVar1);
    if (*(long *)(param_1 + _DAT_112783890) != 0) {
      (**(code **)(*(long *)(param_1 + _DAT_112783890) + 0x10))(*(undefined8 *)(param_2 + 0x48));
    }
  }
LAB_1091fd670:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fd684; end: 1091fd693; -[SCFeatureDirectorModeThumbnailsImpl synchronizeRuntimeGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278388c),PTR_s_synchronize_112677508);
  return;
}



/* Entry: 1091fd694; end: 1091fd6f7; -[SCFeatureDirectorModeThumbnailsImpl invalidateRuntimeGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278388c);
  *(undefined8 *)(param_1 + _DAT_11278388c) = 0;
  _objc_retain(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783890);
  *(undefined8 *)(param_1 + _DAT_112783890) = 0;
  _objc_release(uVar1);
  func_0x00010c069d00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091fd6f8; end: 1091fd83b; -[SCFeatureDirectorModeThumbnailsImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd6f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = (long)_DAT_11278388c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar2);
  lVar5 = (long)_DAT_11278387c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783890);
  *(undefined8 *)(param_1 + _DAT_112783890) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar1);
  lVar4 = param_1 + _DAT_112783888;
  _objc_storeWeak(lVar4,0);
  *(undefined1 *)(param_1 + _DAT_112783894) = 0;
  *(undefined1 *)(param_1 + _DAT_112783898) = 0;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1091fd83c;
  puStack_58 = &UNK_110841f80;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f88c0(lVar4);
  _objc_release(lVar4);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_78 = PTR_PTR_112700f88;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091fd83c; end: 1091fd877;  */

void FUN_1091fd83c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c18b5e0(uVar2,param_2,0);
  func_0x00010c069d00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091fd878; end: 1091fd87b; -[SCFeatureDirectorModeThumbnailsImpl activate] */

void FUN_1091fd878(void)

{
  return;
}



/* Entry: 1091fd87c; end: 1091fd883; -[SCFeatureDirectorModeThumbnailsImpl isFeatureEnabled] */

undefined8 FUN_1091fd87c(void)

{
  return 1;
}



/* Entry: 1091fd884; end: 1091fd893; -[SCFeatureDirectorModeThumbnailsImpl thumbnailsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_view_1126849e8);
  return;
}



/* Entry: 1091fd894; end: 1091fd8a3; -[SCFeatureDirectorModeThumbnailsImpl firstThumbnailCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_firstThumbnailCell_1125ca130);
  return;
}



/* Entry: 1091fd8a4; end: 1091fd9b7; -[SCFeatureDirectorModeThumbnailsImpl updateThumbnailsViewAlphaWithAnimated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd8a4(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  char cStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  char cStack_48;
  
  lVar4 = param_2;
  func_0x00010c26e740();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_2 + _DAT_112783880);
  if (cVar1 == '\x01') {
    func_0x00010c21e900(lVar4,param_3,0);
  }
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    param_1 = 0;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1091fd9b8;
  puStack_58 = &UNK_110845ce0;
  _objc_retain(lVar4);
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1091fd9cc;
  puStack_88 = &UNK_110857498;
  lStack_80 = lVar4;
  cStack_78 = cVar1;
  lStack_50 = lVar4;
  cStack_48 = cVar1;
  _objc_retain(lVar4);
  func_0x00010bf03420(param_1,puVar3,param_3,&puStack_70,&puStack_a0);
  _objc_release(lStack_80);
  _objc_release(lStack_50);
  _objc_release(lVar4);
  return;
}



/* Entry: 1091fd9b8; end: 1091fd9e3;  */

void FUN_1091fd9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(*(byte *)(param_1 + 0x28) ^ 1),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1091fd9e4; end: 1091fda77; -[SCFeatureDirectorModeThumbnailsImpl setThumbnailHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fd9e4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_112783880) = (char)param_3;
  lVar2 = (long)_DAT_11278387c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0((double)(param_3 ^ 1));
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091fda78; end: 1091fdae7; -[SCFeatureDirectorModeThumbnailsImpl setMediaConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fda78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112783874;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1c4340(*(undefined8 *)(param_1 + _DAT_11278387c),param_2,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091fdae8; end: 1091fdaf7; -[SCFeatureDirectorModeThumbnailsImpl selectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_selectedSegment_1126341e0);
  return;
}



/* Entry: 1091fdaf8; end: 1091fdb07; -[SCFeatureDirectorModeThumbnailsImpl setPlayerHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdaf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ddab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_setPlayerHandler__1126550d0);
  return;
}



/* Entry: 1091fdb08; end: 1091fdb43; -[SCFeatureDirectorModeThumbnailsImpl playbackDidRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdb08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c0ff160(*(undefined8 *)(param_1 + _DAT_11278387c),param_2,&uStack_30);
  return;
}



/* Entry: 1091fdb44; end: 1091fdb53; -[SCFeatureDirectorModeThumbnailsImpl playbackDidStartRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdb44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_playbackDidStartRunning_11261d688);
  return;
}



/* Entry: 1091fdb54; end: 1091fdb63; -[SCFeatureDirectorModeThumbnailsImpl playbackDidStopRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdb54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_playbackDidStopRunning_11261d690);
  return;
}



/* Entry: 1091fdb64; end: 1091fdb73; -[SCFeatureDirectorModeThumbnailsImpl playbackDidPauseRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_playbackDidPauseRunning_11261d670);
  return;
}



/* Entry: 1091fdb74; end: 1091fdb83; -[SCFeatureDirectorModeThumbnailsImpl playbackDidResumeRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ff190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_playbackDidResumeRunning_11261d680);
  return;
}



/* Entry: 1091fdb84; end: 1091fdbf7; -[SCFeatureDirectorModeThumbnailsImpl onEnterPreviewAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + _DAT_112783898) == '\x01') {
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_11278388c),param_2,0);
  }
  func_0x00010c0e53e0(*(undefined8 *)(param_1 + _DAT_11278387c),param_2,param_3);
  *(undefined1 *)(param_1 + _DAT_1127838a0) = 1;
  return;
}



/* Entry: 1091fdbf8; end: 1091fdc33; -[SCFeatureDirectorModeThumbnailsImpl onDismissPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdbf8(long param_1)

{
  func_0x00010beb0880();
  func_0x00010c0e5fa0(*(undefined8 *)(param_1 + _DAT_11278387c));
  *(undefined1 *)(param_1 + _DAT_1127838a0) = 0;
  return;
}



/* Entry: 1091fdc34; end: 1091fdc43; -[SCFeatureDirectorModeThumbnailsImpl deleteSelectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_deleteSelectedSegment_1125b8b90);
  return;
}



/* Entry: 1091fdc44; end: 1091fdc53; -[SCFeatureDirectorModeThumbnailsImpl isPlaybackManuallyPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_isPlaybackManuallyPaused_1125fc2f0);
  return;
}



/* Entry: 1091fdc54; end: 1091fdc63; -[SCFeatureDirectorModeThumbnailsImpl batchThumbnailsUpdateBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdc54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_batchThumbnailsUpdateBegin_1125a3670);
  return;
}



/* Entry: 1091fdc64; end: 1091fdc73; -[SCFeatureDirectorModeThumbnailsImpl batchThumbnailsUpdateEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdc64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_batchThumbnailsUpdateEnd_1125a3678);
  return;
}



/* Entry: 1091fdc74; end: 1091fdc83; -[SCFeatureDirectorModeThumbnailsImpl setPreSelectedSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dfa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_setPreSelectedSegment__1126558c8);
  return;
}


