/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069ef8f4; end: 1069ef93b; -[SCChatInputMediaAccessory _editableVideoMaxDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069ef8f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755720);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e674f8,0,0);
  uVar2 = 0x404e000000000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0x4025fae147ae147b;
  }
  return uVar2;
}



/* Entry: 1069ef93c; end: 1069efa2f; -[SCChatInputMediaAccessory _isMediaSizeOrDurationExceedLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069ef93c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_4);
  func_0x00010c0d9020(*(undefined8 *)(param_2 + _DAT_112755774));
  if (param_4 == 0) {
LAB_1069efa0c:
    uVar2 = 0;
  }
  else {
    dVar4 = *(double *)(param_2 + _DAT_1127557a0);
    dVar3 = param_1;
    func_0x00010bf8b160(param_4);
    dVar4 = dVar4 + dVar3;
    if (dVar4 <= param_1) {
      dVar3 = *(double *)(param_2 + _DAT_11275579c);
      uVar1 = param_4;
      func_0x00010bfad040(param_4);
      if (dVar3 + dVar4 <= 1000.0) goto LAB_1069efa0c;
      func_0x000108dfd944();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = (ulong)(uint)(int)(param_1 / 60.0);
      func_0x000108dfe0bc(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c10e200(param_2,param_3,uVar1);
    _objc_release(uVar1);
    uVar2 = 1;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 1069efa30; end: 1069efb43; -[SCChatInputMediaAccessory presentSendingLimitExceededAlert:] */

void FUN_1069efa30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aed70;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar2);
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1069efb44; end: 1069efb53;  */

void FUN_1069efb44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1069efb54; end: 1069efb97; -[SCChatInputMediaAccessory scrollViewForTray:] */

void FUN_1069efb54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdf72c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069efb98; end: 1069efc13; -[SCChatInputMediaAccessory _mediaIdForDrawerItem:] */

void FUN_1069efb98(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c084c40();
  lVar2 = param_3;
  if (lVar1 == 1) {
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c084c40();
    if (lVar1 == 0) {
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = 0;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1069efc14; end: 1069efd27; -[SCChatInputMediaAccessory _chatMediaPreviewItemForDrawerItem:] */

void FUN_1069efc14(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c084c40();
  if (puVar1 == (undefined *)0x1) {
    func_0x00010be5e800(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
LAB_1069efc8c:
      puVar1 = (undefined *)0x0;
      goto LAB_1069efd0c;
    }
    puVar1 = PTR_PTR_1126cfac8;
    _objc_alloc(PTR_PTR_1126cfac8);
    func_0x00010c029700();
  }
  else {
    puVar1 = param_3;
    func_0x00010c084c40();
    if (puVar1 != (undefined *)0x0) goto LAB_1069efc8c;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010c0fa940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0x0;
      param_1 = param_3;
    }
    else {
      puVar1 = param_3;
      func_0x00010c0fa940(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddcec0(0x4062c00000000000,0x4062c00000000000,param_1,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = param_1;
      param_1 = param_3;
    }
  }
  _objc_release(param_1);
LAB_1069efd0c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069efd28; end: 1069efdfb; -[SCChatInputMediaAccessory _addDrawerItemToCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069efd28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3ed80();
  if ((int)lVar1 != 0) {
    lVar4 = (long)_DAT_112755754;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127556e8);
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127557a4);
      *(undefined8 *)(param_1 + _DAT_1127557a4) = uVar2;
      _objc_release(uVar3);
      lVar1 = param_1;
      func_0x00010bddcea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef94e0();
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069efdfc; end: 1069eff03; -[SCChatInputMediaAccessory _removeDrawerItemFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069efdfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3ed80();
  if ((int)lVar1 != 0) {
    lVar5 = (long)_DAT_112755754;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar4 = (long)_DAT_1127556e8;
      lVar1 = *(long *)(param_1 + lVar4);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010bf51e00();
      }
      lVar4 = (long)_DAT_1127557a4;
      _objc_retain(uVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar2;
      _objc_release(uVar3);
      if (lVar1 != 0) {
        _objc_release(uVar2);
      }
      lVar1 = param_1;
      func_0x00010bddcea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc20();
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069eff04; end: 1069f00f3; -[SCChatInputMediaAccessory _rebuildCachedMediaDataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069eff04(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010be3ed80();
  if ((int)puVar1 != 0) {
    lVar8 = (long)_DAT_112755754;
    puVar2 = *(undefined **)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      lVar6 = (long)_DAT_1127556e8;
      lVar3 = *(long *)(param_1 + lVar6);
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010bf51e00();
      }
      lVar7 = (long)_DAT_1127557a4;
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      *(undefined8 *)(param_1 + lVar7) = uVar4;
      _objc_release(uVar5);
      if (lVar3 != 0) {
        _objc_release(uVar4);
      }
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar6 = *(long *)(param_1 + lVar6);
      _objc_retain(lVar6);
      lVar3 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
      if (lVar3 != 0) {
        lVar7 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(lVar6);
            }
            puVar2 = param_1;
            func_0x00010bddcea0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 != (undefined *)0x0) {
              func_0x00010befa120(puVar1,param_2,puVar2);
            }
            _objc_release(puVar2);
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = lVar6;
          func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
        } while (lVar3 != 0);
      }
      _objc_release(lVar6);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c289ae0();
      _objc_release(uVar4);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010be3ed80();
  if ((int)puVar2 != 0) {
    lVar3 = *(long *)(puVar1 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bf00260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar8;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010be95840(puVar1,param_2,lVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar8);
    return;
  }
  return;
}



/* Entry: 1069f00f4; end: 1069f017f; -[SCChatInputMediaAccessory _autoRestoreSelectionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f00f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be3ed80();
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf00260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010be95840(param_1,param_2,lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1069f0180; end: 1069f054b; -[SCChatInputMediaAccessory _restoreSelectedItemsBySnapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0180(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010be3ed80();
  if ((int)lVar2 != 0) {
    if ((param_5 == (undefined8 *)0x0) ||
       (puVar1 = param_5, func_0x00010bf529e0(), puVar1 == (undefined8 *)0x0)) {
      lVar13 = (long)_DAT_1127556e8;
      lVar2 = *(long *)(param_3 + lVar13);
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        func_0x00010c12adc0(*(undefined8 *)(param_3 + lVar13));
        uVar12 = *(undefined8 *)(param_3 + _DAT_1127557a4);
        *(undefined8 *)(param_3 + _DAT_1127557a4) = 0;
        _objc_release(uVar12);
        func_0x00010bf02d60(*(undefined8 *)(param_3 + _DAT_112755774));
        func_0x00010bf02d60(*(undefined8 *)(param_3 + _DAT_112755778));
        func_0x00010c1398e0(*(undefined8 *)(param_3 + _DAT_112755798));
        func_0x00010be35c60(param_3);
        puVar6 = (undefined8 *)0x0;
        func_0x00010c289ac0(*(undefined8 *)(param_3 + _DAT_112755790),param_4,0);
        func_0x00010be86a60(param_3);
      }
    }
    else {
      lVar13 = (long)_DAT_1127557a4;
      lVar2 = *(long *)(param_3 + lVar13);
      if ((lVar2 != 0) && (func_0x00010bf529e0(), lVar2 != 0)) {
        puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_4,param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        lVar10 = *(long *)(param_3 + lVar13);
        _objc_retain(lVar10);
        lVar2 = lVar10;
        func_0x00010bf52a60(lVar10,param_4,&uStack_1b0,auStack_f0,0x10);
        if (lVar2 != 0) {
          lVar14 = *plStack_1a0;
          do {
            lVar8 = 0;
            do {
              if (*plStack_1a0 != lVar14) {
                _objc_enumerationMutation(lVar10);
              }
              uVar12 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);
              lVar11 = param_3;
              func_0x00010be5e800(param_3,param_4,uVar12);
              _objc_retainAutoreleasedReturnValue();
              if ((lVar11 != 0) &&
                 (puVar5 = puVar3, func_0x00010bf4b900(puVar3,param_4,lVar11), (int)puVar5 != 0)) {
                func_0x00010befa120(puVar4,param_4,uVar12);
              }
              _objc_release(lVar11);
              lVar8 = lVar8 + 1;
            } while (lVar2 != lVar8);
            lVar2 = lVar10;
            func_0x00010bf52a60(lVar10,param_4,&uStack_1b0,auStack_f0,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar10);
        lVar2 = (long)_DAT_112755774;
        func_0x00010bf02d60(*(long *)(param_3 + lVar2));
        lVar10 = (long)_DAT_112755778;
        func_0x00010bf02d60(*(long *)(param_3 + lVar10));
        puVar5 = puVar4;
        func_0x00010bf51e00();
        uVar12 = *(undefined8 *)(param_3 + lVar13);
        *(undefined **)(param_3 + lVar13) = puVar5;
        _objc_release(uVar12);
        puVar5 = puVar4;
        func_0x00010c0d3c80();
        lVar13 = (long)_DAT_1127556e8;
        uVar12 = *(undefined8 *)(param_3 + lVar13);
        *(undefined **)(param_3 + lVar13) = puVar5;
        _objc_release(uVar12);
        param_1 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(puVar4);
        puVar6 = &uStack_1f0;
        puVar5 = puVar4;
        func_0x00010bf52a60(puVar4,param_4,puVar6,auStack_170,0x10);
        if (puVar5 != (undefined *)0x0) {
          lVar14 = *plStack_1e0;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar14) {
                _objc_enumerationMutation(puVar4);
              }
              lVar11 = *(long *)(lStack_1e8 + (long)puVar9 * 8);
              lVar8 = lVar11;
              func_0x00010c084c40();
              plVar7 = (long *)(param_3 + lVar10);
              if ((lVar8 == 1) ||
                 (lVar8 = lVar11, func_0x00010c084c40(), plVar7 = (long *)(param_3 + lVar2),
                 lVar8 == 0)) {
                lVar8 = *plVar7;
                _objc_retain(lVar8);
                if (lVar8 != 0) {
                  func_0x00010c13c680(lVar8,param_4,lVar11);
                  _objc_release(lVar8);
                }
              }
              puVar9 = puVar9 + 1;
            } while (puVar5 != puVar9);
            puVar6 = &uStack_1f0;
            puVar5 = puVar4;
            func_0x00010bf52a60(puVar4,param_4,puVar6,auStack_170,0x10);
          } while (puVar5 != (undefined *)0x0);
        }
        _objc_release(puVar4);
        lVar2 = *(long *)(param_3 + lVar13);
        func_0x00010bf529e0();
        if (lVar2 != 0) {
          func_0x00010c1398e0(*(undefined8 *)(param_3 + _DAT_112755798));
          func_0x00010bedf9c0(param_3);
          uVar12 = *(undefined8 *)(param_3 + _DAT_112755790);
          puVar6 = *(undefined8 **)(param_3 + lVar13);
          func_0x00010bf529e0(puVar6);
          func_0x00010c289ac0(uVar12,param_4,puVar6);
          func_0x00010be86a60(param_3);
        }
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c6618;
  _objc_retain(puVar6);
  puVar1 = puVar6;
  func_0x00010c09da80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f40(param_1,param_2,puVar3,param_4,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126cfac8;
  _objc_alloc(PTR_PTR_1126cfac8);
  puVar1 = puVar6;
  func_0x00010c09da80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c029700(puVar4,param_4,puVar1,puVar3);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069f054c; end: 1069f0623; -[SCChatInputMediaAccessory _chatMediaPreviewItemFromPHAsset:thumbnailTargetSize:] */

void FUN_1069f054c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126c6618;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c09da80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f40(param_1,param_2,puVar2,param_4,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cfac8;
  _objc_alloc(PTR_PTR_1126cfac8);
  uVar1 = param_5;
  func_0x00010c09da80(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c029700(puVar3,param_4,uVar1,puVar2);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069f0624; end: 1069f065f; -[SCChatInputMediaAccessory setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0624(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_1127557b8,param_3);
  func_0x00010bec71e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToKeyboardEventsForCha_11258f870);
  return;
}



/* Entry: 1069f0660; end: 1069f0703; -[SCChatInputMediaAccessory _isChatMediaPreviewEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069f0660(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127557bc;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112755754);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf36840(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071840(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return uVar4;
}



/* Entry: 1069f0704; end: 1069f0833; -[SCChatInputMediaAccessory _subscribeToActiveConversationInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0704(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar3 = (long)_DAT_112755764;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = auStack_48;
    _objc_initWeak(puVar1,param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1069f0834; end: 1069f098b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0834(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_1069f0960;
  uVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_1069f08fc:
    func_0x00010be02780(param_1);
  }
  else {
    uVar2 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127557bc);
    func_0x00010bf36840(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) goto LAB_1069f08fc;
  }
  func_0x00010c0bf0a0(param_2);
LAB_1069f0960:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1069f098c; end: 1069f09a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f098c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127557bc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127557bc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f09a4; end: 1069f09df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f09a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127557bc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127557bc) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f09e0; end: 1069f0b23; -[SCChatInputMediaAccessory _subscribeToKeyboardEventsForChatMediaPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f09e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010c065880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && ((*(byte *)(param_1 + _DAT_1127557c0) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_1127557c0) = 1;
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c065880(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0660e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    lVar2 = lVar1;
    func_0x00010c25ff60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1069f0b24; end: 1069f0bcb;  */

void FUN_1069f0b24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010be3ed80(), (int)lVar1 != 0)) {
    func_0x00010c0bd4c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069f0bcc; end: 1069f0c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0bcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755754);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4f20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb84d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__showChatMediaPreview_11258bad8);
    return;
  }
  return;
}



/* Entry: 1069f0c38; end: 1069f0cc3; -[SCChatInputMediaAccessory _showChatMediaPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0c38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_112755768);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd4f20();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0cc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeChatMediaPreviewScope_112560ca0);
      return;
    }
  }
  return;
}



/* Entry: 1069f0cc4; end: 1069f0d3f; -[SCChatInputMediaAccessory _dismissChatMediaPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0cc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112755768;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755754);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069f0d40; end: 1069f0e77; -[SCChatInputMediaAccessory _exposeChatMediaPreviewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0d40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112755768;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = (long)_DAT_112755754;
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd4f20();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar4 = param_1;
      func_0x00010c065880(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c274160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfc4560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275576c);
      func_0x00010bf23260(uVar2,param_2,uVar3,lVar5,param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar6),param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 1069f0e78; end: 1069f0ecf; -[SCChatInputMediaAccessory _hideChatMediaPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0e78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112755768;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069f0ed0; end: 1069f0fa7; -[SCChatInputMediaAccessory interceptMessageSendAttemptForPlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b6120;
  _objc_retain(param_3);
  func_0x00010c26c4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (((int)uVar2 != 0) && (lVar3 = param_1, func_0x00010be3ed80(), (int)lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfd4f20();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      func_0x00010be9eca0(param_1);
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,PTR____kCFBooleanFalse_11034ab60);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f0fa8; end: 1069f1263; -[SCChatInputMediaAccessory _sendCombinedMediaAndText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f0fa8(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined **unaff_x23;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
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
  lVar7 = *(long *)(param_1 + _DAT_1127557a4);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + _DAT_1127556e8);
    func_0x00010bf51e00();
  }
  else {
    _objc_retain(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar7);
    lVar1 = lVar7;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
          uVar4 = uVar8;
          func_0x00010c084c40();
          if (uVar4 == 0) {
            func_0x00010befa120(puVar2);
          }
          else {
            uVar4 = uVar8;
            func_0x00010c084c40();
            puVar5 = PTR_PTR_1126af4c0;
            if (uVar4 == 1) {
              _objc_retain(uVar8);
              _objc_opt_class(puVar5);
              uVar6 = uVar8;
              _objc_opt_isKindOfClass(uVar8,puVar5);
              uVar4 = uVar8;
              if ((uVar6 & 1) == 0) {
                uVar4 = 0;
              }
              _objc_retain(uVar4);
              _objc_release(uVar8);
              param_2 = puVar5;
              if (uVar4 != 0) {
                func_0x00010befa120(puVar3);
                param_2 = puVar5;
              }
              _objc_release(uVar4);
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = lVar7;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    unaff_x23 = (undefined **)0x0;
    _objc_release(lVar7);
    puVar5 = puVar3;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      param_3 = puVar2;
      func_0x00010be07940(param_1);
    }
    else {
      _objc_initWeak(auStack_138,param_1);
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_1069f1264;
      puStack_150 = &UNK_110853590;
      unaff_x23 = &puStack_168;
      param_2 = auStack_138;
      _objc_copyWeak(auStack_140,param_2);
      _objc_retain(puVar2);
      param_3 = puVar3;
      puStack_148 = puVar2;
      func_0x00010be78560(param_1);
      _objc_release(puStack_148);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_138);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar7 = lVar7 + 0x28;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      func_0x00010be07940(lVar7);
      _objc_release(puVar2);
    }
    else {
      func_0x00010be35640(lVar7);
    }
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069f1264; end: 1069f12ff;  */

void FUN_1069f1264(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      func_0x00010be07940(param_1);
      _objc_release(puVar1);
    }
    else {
      func_0x00010be35640(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069f1300; end: 1069f160b; -[SCChatInputMediaAccessory _buildTextMessageWithAttributedText:botMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1300(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x21;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar12;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar11 = param_4;
  func_0x00010c08fa60();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    unaff_x21 = *(undefined **)(param_2 + _DAT_112755758);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x21 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      if (param_5 == 0) {
        unaff_x23 = (undefined *)0x0;
      }
      else {
        lVar4 = param_5;
        func_0x00010bf1fd60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          func_0x00010bfcb980(lVar4,param_3,auStack_88);
          puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_3,auStack_88,0x10);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar4);
        unaff_x23 = PTR_PTR_1126cfad0;
        _objc_alloc();
        lVar4 = param_5;
        func_0x00010c276780(param_5);
        puVar1 = param_4;
        func_0x00010c25cd40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c019060(unaff_x23,param_3,puVar11,lVar4,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar11);
      }
      unaff_x24 = PTR_PTR_1126cfad8;
      _objc_alloc();
      lVar12 = (long)_DAT_1127557bc;
      uVar2 = *(undefined8 *)(param_2 + lVar12);
      func_0x00010c11eca0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c11ecc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c065880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c15b9c0(*(undefined8 *)(param_2 + lVar12));
      uStack_90 = 0;
      func_0x00010c02b140(param_1);
      _objc_release(lVar4);
      _objc_release(uVar6);
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126b1a40;
      _objc_opt_new();
      puVar11 = puVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bc480(puVar3,param_3,puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
      lVar4 = *(long *)(param_2 + lVar12);
      func_0x00010c25a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar6 = 0;
      if (lVar4 != 0) {
        uVar6 = 0x2c;
      }
      func_0x00010c2b9b80(puVar3,param_3,uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = unaff_x21;
      puVar1 = param_4;
      func_0x00010bf37860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x21);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_98 = FUN_1069f160c;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar1;
    puStack_d0 = unaff_x24;
    puStack_c8 = unaff_x23;
    puStack_c0 = puVar11;
    puStack_b8 = unaff_x21;
    lStack_b0 = param_5;
    puStack_a8 = param_4;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar1;
      func_0x00010bf1fd60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 == (undefined *)0x0) {
        _objc_release();
        puVar10 = (undefined *)0x0;
        puVar11 = (undefined *)0x0;
      }
      else {
        func_0x00010bfcb980(puVar11,param_3,auStack_e8);
        puVar3 = auStack_e8;
        puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        if (puVar10 == (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = PTR_PTR_1126cfad0;
          _objc_alloc();
          func_0x00010c276780();
          puVar5 = puVar1;
          func_0x00010bf4f340();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar10;
          func_0x00010c019060();
          _objc_release(puVar5);
        }
      }
      _objc_release(puVar10);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_retain(puVar3);
      puVar11 = puVar3;
      func_0x00010bf529e0();
      if (puVar11 != (undefined *)0x0) {
        lVar4 = *(long *)(puVar1 + _DAT_112755754);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          puVar11 = puVar1;
          func_0x00010c065880(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar11;
          func_0x00010bf0e540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          uVar6 = *(undefined8 *)(puVar1 + _DAT_1127557bc);
          func_0x00010bf36840(uVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar4;
          func_0x00010c2308e0(lVar4,param_3,uVar6);
          _objc_release(uVar6);
          if ((int)lVar12 == 0) {
            lVar12 = 0;
          }
          else {
            puVar11 = puVar10;
            func_0x00010c25cd40(puVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar4;
            func_0x00010bfbf100(lVar4,param_3,puVar11);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
          }
          puVar11 = puVar1;
          func_0x00010bdd6d80(puVar1,param_3,puVar10,lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010bdd6a20(puVar1,param_3,lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126cfab0;
          _objc_alloc(PTR_PTR_1126cfab0);
          func_0x00010c0293a0();
          func_0x00010c1ac6c0();
          func_0x00010c165b60(puVar7,param_3,puVar11);
          func_0x00010c173400(puVar7,param_3,puVar5);
          func_0x00010c0d9840(*(undefined8 *)(puVar1 + _DAT_112755734),param_3,puVar7);
          puVar8 = puVar1;
          func_0x00010c065880(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3c380();
          _objc_release(puVar8);
          puVar8 = puVar1;
          func_0x00010c065880(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b6120;
          func_0x00010c0c4b40(PTR_PTR_1126b6120);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf04500(puVar8,param_3,puVar9);
          _objc_release(puVar9);
          _objc_release(puVar8);
          func_0x00010be35640(puVar1);
          func_0x00010bf3a660(lVar4);
          _objc_release(puVar7);
          _objc_release(puVar5);
          _objc_release(puVar11);
          _objc_release(lVar12);
          _objc_release(puVar10);
        }
        _objc_release(lVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1069f160c; end: 1069f1747; -[SCChatInputMediaAccessory _buildSendEventBotMetadataFrom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f160c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = param_3;
    func_0x00010bf1fd60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      _objc_release();
      puVar8 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
    }
    else {
      func_0x00010bfcb980(puVar9,param_2,auStack_58);
      puVar7 = auStack_58;
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      if (puVar8 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126cfad0;
        _objc_alloc();
        func_0x00010c276780();
        puVar1 = param_3;
        func_0x00010bf4f340();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010c019060();
        _objc_release(puVar1);
      }
    }
    _objc_release(puVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar9 = puVar7;
  func_0x00010bf529e0();
  if (puVar9 != (undefined *)0x0) {
    lVar2 = *(long *)(param_3 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar9 = param_3;
      func_0x00010c065880(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      uVar3 = *(undefined8 *)(param_3 + _DAT_1127557bc);
      func_0x00010bf36840(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar2;
      func_0x00010c2308e0(lVar2,param_2,uVar3);
      _objc_release(uVar3);
      if ((int)lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        puVar9 = puVar8;
        func_0x00010c25cd40(puVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar2;
        func_0x00010bfbf100(lVar2,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
      }
      puVar9 = param_3;
      func_0x00010bdd6d80(param_3,param_2,puVar8,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010bdd6a20(param_3,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126cfab0;
      _objc_alloc(PTR_PTR_1126cfab0);
      func_0x00010c0293a0();
      func_0x00010c1ac6c0();
      func_0x00010c165b60(puVar4,param_2,puVar9);
      func_0x00010c173400(puVar4,param_2,puVar1);
      func_0x00010c0d9840(*(undefined8 *)(param_3 + _DAT_112755734),param_2,puVar4);
      puVar5 = param_3;
      func_0x00010c065880(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3c380();
      _objc_release(puVar5);
      puVar5 = param_3;
      func_0x00010c065880(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b6120;
      func_0x00010c0c4b40(PTR_PTR_1126b6120);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04500(puVar5,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010be35640(param_3);
      func_0x00010bf3a660(lVar2);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar9);
      _objc_release(lVar10);
      _objc_release(puVar8);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1069f1748; end: 1069f1993; -[SCChatInputMediaAccessory _emitCombinedSendEventWithMediaSnaps:drawerTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1748(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112755754);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar9 = param_1;
      func_0x00010c065880(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar9;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127557bc);
      func_0x00010bf36840(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c2308e0(lVar1,param_2,uVar3);
      _objc_release(uVar3);
      if ((int)lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar4 = lVar2;
        func_0x00010c25cd40(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010bfbf100(lVar1,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      lVar4 = param_1;
      func_0x00010bdd6d80(param_1,param_2,lVar2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bdd6a20(param_1,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cfab0;
      _objc_alloc(PTR_PTR_1126cfab0);
      func_0x00010c0293a0();
      func_0x00010c1ac6c0();
      func_0x00010c165b60(puVar6,param_2,lVar4);
      func_0x00010c173400(puVar6,param_2,lVar5);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112755734),param_2,puVar6);
      lVar7 = param_1;
      func_0x00010c065880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3c380();
      _objc_release(lVar7);
      lVar7 = param_1;
      func_0x00010c065880(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b6120;
      func_0x00010c0c4b40(PTR_PTR_1126b6120);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04500(lVar7,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(lVar7);
      func_0x00010be35640(param_1);
      func_0x00010bf3a660(lVar1);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar9);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069f1994; end: 1069f1997; -[SCChatInputMediaAccessory dismissChatMediaPreviewScope] */

void FUN_1069f1994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissChatMediaPreview_11255e380);
  return;
}



/* Entry: 1069f1998; end: 1069f1a07; -[SCChatInputMediaAccessory updateMediaPreviewSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755754);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289ae0();
  _objc_release(uVar1);
  func_0x00010bec9c80(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069f1a08; end: 1069f1cf3; -[SCChatInputMediaAccessory _syncSelectedDrawerItemsWithPreviewItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1a08(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar3 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c225ec0(puVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar8 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lStack_1a8 + lVar10 * 8);
        lVar11 = lVar7;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 != 0) {
          func_0x00010c0c5180(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,lVar7);
          _objc_release(lVar7);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  plVar1 = (long *)(param_1 + _DAT_1127556e8);
  lVar3 = *plVar1;
  func_0x00010bf529e0();
  plVar6 = plVar1;
  if (lVar3 == 0) {
    plVar6 = (long *)(param_1 + _DAT_1127557a4);
  }
  lVar8 = *plVar6;
  _objc_retain(lVar8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar3 != 0) {
    lVar10 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
        lVar7 = param_1;
        func_0x00010be5e800(param_1,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        if ((lVar7 != 0) &&
           (puVar5 = puVar2, func_0x00010bf4b900(puVar2,param_2,lVar7), (int)puVar5 != 0)) {
          func_0x00010befa120(puVar4,param_2,uVar9);
        }
        _objc_release(lVar7);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar8);
  lVar3 = *plVar1;
  *plVar1 = (long)puVar4;
  _objc_retain(puVar4);
  _objc_release(lVar3);
  puVar5 = puVar4;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127557a4);
  *(undefined **)(param_1 + _DAT_1127557a4) = puVar5;
  _objc_release(uVar9);
  _objc_release(puVar4);
  _objc_release(lVar8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(param_3 + _DAT_1127556d0) =
       CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12(
                                                  uVar14,CONCAT11(uVar13,uVar12)))))));
  return;
}



/* Entry: 1069f1cf4; end: 1069f1d03; -[SCChatInputMediaAccessory setDefaultDrawerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1cf4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127556d0) = param_1;
  return;
}



/* Entry: 1069f1d04; end: 1069f1d23; -[SCChatInputMediaAccessory inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1d04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127557c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f1d24; end: 1069f1d37; -[SCChatInputMediaAccessory setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1d24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127557c4,param_3);
  return;
}



/* Entry: 1069f1d38; end: 1069f1d57; -[SCChatInputMediaAccessory inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1d38(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127557b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f1d58; end: 1069f1d67; -[SCChatInputMediaAccessory style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069f1d58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127556d8);
}



/* Entry: 1069f1d68; end: 1069f1d77; -[SCChatInputMediaAccessory tabBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069f1d68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127556dc);
}



/* Entry: 1069f1d78; end: 1069f1d97; -[SCChatInputMediaAccessory delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1d78(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127557c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f1d98; end: 1069f1dab; -[SCChatInputMediaAccessory setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1d98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127557c8,param_3);
  return;
}



/* Entry: 1069f1dac; end: 1069f2113; -[SCChatInputMediaAccessory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069f1dac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127557c8);
  _objc_destroyWeak(param_1 + _DAT_1127557b8);
  _objc_destroyWeak(param_1 + _DAT_1127557c4);
  _objc_storeStrong(param_1 + _DAT_112755760,0);
  _objc_storeStrong(param_1 + _DAT_11275575c,0);
  _objc_storeStrong(param_1 + _DAT_112755758,0);
  _objc_storeStrong(param_1 + _DAT_1127557bc,0);
  _objc_storeStrong(param_1 + _DAT_112755764,0);
  _objc_storeStrong(param_1 + _DAT_112755770,0);
  _objc_storeStrong(param_1 + _DAT_11275576c,0);
  _objc_storeStrong(param_1 + _DAT_112755768,0);
  _objc_storeStrong(param_1 + _DAT_112755780,0);
  _objc_storeStrong(param_1 + _DAT_112755754,0);
  _objc_storeStrong(param_1 + _DAT_112755750,0);
  _objc_storeStrong(param_1 + _DAT_11275574c,0);
  _objc_storeStrong(param_1 + _DAT_112755748,0);
  _objc_storeStrong(param_1 + _DAT_112755784,0);
  _objc_storeStrong(param_1 + _DAT_112755744,0);
  _objc_storeStrong(param_1 + _DAT_112755704,0);
  _objc_destroyWeak(param_1 + _DAT_112755700);
  _objc_destroyWeak(param_1 + _DAT_112755730);
  _objc_destroyWeak(param_1 + _DAT_1127556e4);
  _objc_storeStrong(param_1 + _DAT_112755734,0);
  _objc_storeStrong(param_1 + _DAT_11275572c,0);
  _objc_storeStrong(param_1 + _DAT_112755728,0);
  _objc_storeStrong(param_1 + _DAT_112755724,0);
  _objc_storeStrong(param_1 + _DAT_1127556fc,0);
  _objc_storeStrong(param_1 + _DAT_1127557b0,0);
  _objc_storeStrong(param_1 + _DAT_1127556f8,0);
  _objc_storeStrong(param_1 + _DAT_1127556f4,0);
  _objc_storeStrong(param_1 + _DAT_112755718,0);
  _objc_storeStrong(param_1 + _DAT_112755714,0);
  _objc_storeStrong(param_1 + _DAT_11275571c,0);
  _objc_storeStrong(param_1 + _DAT_112755720,0);
  _objc_storeStrong(param_1 + _DAT_112755710,0);
  _objc_storeStrong(param_1 + _DAT_112755740,0);
  _objc_storeStrong(param_1 + _DAT_11275573c,0);
  _objc_storeStrong(param_1 + _DAT_112755738,0);
  _objc_storeStrong(param_1 + _DAT_11275570c,0);
  _objc_storeStrong(param_1 + _DAT_112755708,0);
  _objc_storeStrong(param_1 + _DAT_1127556e0,0);
  _objc_storeStrong(param_1 + _DAT_1127556f0,0);
  _objc_storeStrong(param_1 + _DAT_1127556ec,0);
  _objc_storeStrong(param_1 + _DAT_11275577c,0);
  _objc_storeStrong(param_1 + _DAT_1127557ac,0);
  _objc_storeStrong(param_1 + _DAT_1127557a8,0);
  _objc_storeStrong(param_1 + _DAT_1127557a4,0);
  _objc_storeStrong(param_1 + _DAT_1127556e8,0);
  _objc_storeStrong(param_1 + _DAT_112755778,0);
  _objc_storeStrong(param_1 + _DAT_112755774,0);
  _objc_storeStrong(param_1 + _DAT_11275578c,0);
  _objc_storeStrong(param_1 + _DAT_112755798,0);
  _objc_storeStrong(param_1 + _DAT_112755794,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755790,0);
  return;
}



/* Entry: 1069f2114; end: 1069f2c67; -[SCChatInputMediaPlugin initWithDrawerMediaSender:groupFetcher:snapchattersDataFetcher:activeConversationInformation:cameraRollAlbumPickerScopeExposer:chatLogger:blizzardLogger:dataObjectContext:cloudFS:encryptedContentManager:circumstanceEngine:contentDelivery:musicSelectionLoader:musicMediaLoader:snapVideoFilterFactory:mediaVideoImporter:mediaImageImporter:previewScopeExposer:previewScopeBuilderServices:previewVideoProviderServices:previewFilterDataProviderFactory:photoPermissionCoordinator:mediaTranscodingLogger:grapheneRegistry:storyReplySender:storyShareSender:replyAllGroupId:snapVideoFilterScopeExposer:memoriesPreviewPresenterBuilder:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:galleryLogger:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:memoriesTranscodingHelper:snapDocDownloadingService:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:snapDocEditorServices:snapSender:memoriesSnapDocTranscodingManager:spotlightShareSender:notificationPool:chatMediaPreviewDataManager:messagingExperimentService:textSender:externalMediaPreparer:chatMediaPreviewScopeExposer:chatMediaPreviewScopeServices:legacyStoryMediaCache:memTwoChatMediaDrawerHost:enableMemTwoChatMediaDrawer:stickerInjector:] */

undefined8 *
FUN_1069f2114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined1 param_58,undefined4 param_59,undefined8 param_60)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_39);
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
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_60);
  puStack_70 = PTR_PTR_1126f42d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_47;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x41];
    puVar1[0x41] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_48);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_57;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x3f) = param_58;
    func_0x00010be253e0(puVar1);
  }
  _objc_release(param_60);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
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
  _objc_release(param_39);
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



/* Entry: 1069f2c68; end: 1069f2e7f; -[SCChatInputMediaPlugin _subscribeToMediaSendEvents:] */

void FUN_1069f2c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_58;
  _objc_initWeak(puVar3,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar8 = *(long *)(param_1 + 0x108);
  uVar4 = uVar5;
  if (lVar8 != 0) {
    _objc_retain(lVar8);
    puStack_80 = puVar1;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1069f2f0c;
    puStack_68 = &UNK_110952ce0;
    lStack_60 = lVar8;
    func_0x00010bfb26a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar8);
  }
  uVar5 = uVar4;
  func_0x00010bfad7a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1069f2e80; end: 1069f3083;  */

bool FUN_1069f2e80(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1069f3084; end: 1069f323b; -[SCChatInputMediaPlugin configureInputItem:] */

void FUN_1069f3084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar1,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x207,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000cd);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff800000cc);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0c40;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x87);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar1,param_2,0x207,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1aa060(param_3,param_2,puVar2,puVar3,puVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1ba020(param_3,param_2,500);
  func_0x00010c223c40(param_3,param_2,9);
  func_0x00010c1ad540(param_3,param_2,8);
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ad00(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c18ac20(param_3,param_2,&PTR____CFConstantStringClassReference_110edbc38);
  func_0x00010c160fc0(param_3,param_2,&PTR____CFConstantStringClassReference_110e67518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069f323c; end: 1069f3243; -[SCChatInputMediaPlugin pluginType] */

undefined8 FUN_1069f323c(void)

{
  return 1;
}



/* Entry: 1069f3244; end: 1069f324b; -[SCChatInputMediaPlugin position] */

undefined8 FUN_1069f3244(void)

{
  return 0;
}



/* Entry: 1069f324c; end: 1069f3403; -[SCChatInputMediaPlugin createDrawer] */

void FUN_1069f324c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    puVar3 = *(undefined **)(param_1 + 0x1f0);
    lVar1 = param_1;
    func_0x00010be5ef00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b71e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + 0x200,puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126cfae0;
    _objc_alloc();
    func_0x00010c0089e0(puVar3,*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x78),
                        param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xa0),
                        *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                        *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xe8),
                        *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xd8),
                        *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x110),
                        *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128),
                        *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x138),
                        *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x148),
                        *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158),
                        *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                        *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),
                        *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                        *(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1b0),
                        *(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0xf0),
                        *(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8));
    func_0x00010c18b5e0();
    puVar2 = puVar3;
    func_0x00010c0c6620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7d20(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069f3404; end: 1069f355b; -[SCChatInputMediaPlugin createItemController] */

void FUN_1069f3404(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cfae8;
  _objc_alloc();
  func_0x00010c0089e0(puVar1,*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x78),
                      param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x110),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128),
                      *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x138),
                      *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x148),
                      *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158),
                      *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                      *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x170),
                      *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                      *(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1b0),
                      *(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0xf0),
                      *(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                      *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8));
  puVar2 = puVar1;
  func_0x00010c0c6620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec7d20(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069f355c; end: 1069f35b3; -[SCChatInputMediaPlugin mediaAccessoryDidSendMessageFromPreview:] */

void FUN_1069f355c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c065820();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069f35b4; end: 1069f4377; -[SCChatInputMediaPlugin _handleMediaSendEvent:] */

void FUN_1069f35b4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puStack_3c8;
  undefined *puStack_398;
  undefined *puStack_380;
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c11eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b6090;
  func_0x00010c09ea00(param_3);
  func_0x00010c0c5380();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b6098;
  _objc_alloc();
  puVar21 = param_1;
  func_0x00010c065820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89e20();
  func_0x00010c09ea00(param_3);
  puVar25 = param_1;
  func_0x00010c065820(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar25;
  func_0x00010bf89e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061ca0();
  _objc_release(puVar19);
  _objc_release(puVar25);
  _objc_release(puVar21);
  puVar21 = param_3;
  func_0x00010c09ea00();
  if (puVar21 < (undefined *)0x2) {
    puVar25 = param_3;
    func_0x00010c0c4b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar21 == (undefined *)0x1) {
      puVar19 = puVar25;
      func_0x000100504554(puVar25,&PTR___NSConcreteGlobalBlock_110952da0);
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar21 = puVar25;
      func_0x000100504554(puVar25,&PTR___NSConcreteGlobalBlock_110952de0);
      puVar19 = (undefined *)0x0;
    }
    _objc_release(puVar25);
    if (puVar3 == (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x140);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be65640(param_1);
    uVar10 = uVar7;
    func_0x00010c15d000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puStack_398 = PTR_PTR_1126c3360;
    _objc_alloc();
    func_0x00010c048240();
    _objc_release(uVar10);
    _objc_release(puVar25);
    _objc_release(puVar21);
    _objc_release(puVar19);
  }
  else {
    puStack_398 = (undefined *)0x0;
  }
  puVar21 = param_3;
  func_0x00010bfee140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = param_3;
  func_0x00010c1319e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_1;
  func_0x00010be744a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  _objc_release(puVar21);
  _objc_initWeak(&puStack_1c0,param_1);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x1069f4470;
  puStack_1d0 = &UNK_110850658;
  ppuVar24 = &puStack_1c0;
  _objc_copyWeak(auStack_1c8);
  ppuVar8 = &puStack_1e8;
  _objc_retainBlock();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  puVar21 = param_3;
  func_0x00010c0c4b60();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar21;
  func_0x00010bf52a60();
  if (puVar25 != (undefined *)0x0) {
    lVar22 = *plStack_220;
    do {
      puVar16 = PTR_s_prepareSnapMetadata_1126201f0;
      puVar23 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar22) {
          _objc_enumerationMutation(puVar21);
        }
        uVar20 = *(ulong *)(lStack_228 + (long)puVar23 * 8);
        uVar9 = uVar20;
        ppuVar24 = (undefined **)puVar16;
        _objc_opt_respondsToSelector();
        if ((uVar9 & 1) != 0) {
          func_0x00010c109f40(uVar20);
        }
        puVar23 = puVar23 + 1;
      } while (puVar25 != puVar23);
      puVar25 = puVar21;
      func_0x00010bf52a60();
    } while (puVar25 != (undefined *)0x0);
  }
  _objc_release(puVar21);
  uVar20 = *(ulong *)(param_1 + 0x168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar20;
  func_0x00010c07c3a0();
  _objc_release(uVar20);
  puVar21 = param_3;
  puStack_380 = param_1;
  if ((uVar9 & 1) == 0) {
    func_0x00010c0c4b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be80e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0c4b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9620();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar21);
  if ((puStack_380 == (undefined *)0x0) ||
     (puVar21 = puStack_380, func_0x00010bf529e0(), puVar21 == (undefined *)0x0))
  goto LAB_1069f421c;
  puVar21 = puVar1;
  func_0x00010c06f6c0();
  if ((int)puVar21 == 0) {
    puVar21 = param_3;
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar21 != (undefined *)0x0 && puVar2 != (undefined *)0x0) {
      puStack_3c8 = PTR_PTR_1126c2810;
      _objc_alloc();
      puVar21 = puVar2;
      func_0x00010c15f2e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar2;
      func_0x00010c0c5340(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c04e240();
      _objc_release(puVar25);
      _objc_release(puVar21);
      puVar21 = puVar19;
      func_0x000108604d34(puVar19);
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = *(undefined ***)(param_1 + 8);
      _objc_retain(ppuVar24);
      uVar10 = *(undefined8 *)(param_1 + 0x100);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = param_3;
      func_0x00010c1319e0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_120 = puVar25;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2d0 = 0xc2000000;
      uStack_2c8 = 0x1069f4624;
      puStack_2c0 = &UNK_110952e30;
      _objc_retain(ppuVar8);
      ppuStack_2b8 = ppuVar24;
      ppuStack_290 = ppuVar8;
      _objc_retain(puStack_380);
      puStack_2b0 = puStack_380;
      puStack_2a8 = puVar5;
      _objc_retain(param_3);
      puStack_2a0 = param_3;
      puStack_298 = puVar19;
      func_0x00010c15d8c0(uVar10);
      _objc_release(puVar23);
      _objc_release(puVar25);
      _objc_release(uVar10);
      _objc_release(puStack_2a0);
      _objc_release(puStack_2b0);
      _objc_release(ppuStack_290);
      goto LAB_1069f41c8;
    }
    if ((puVar2 == (undefined *)0x0) ||
       (puVar21 = puVar2, func_0x00010853b5e0(), ((ulong)puVar21 & 1) != 0)) {
      puStack_3c8 = param_3;
      func_0x00010befd460();
      _objc_retainAutoreleasedReturnValue();
      if (puStack_3c8 != (undefined *)0x0) {
        uVar7 = *(undefined8 *)(param_1 + 0x1b0);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = param_3;
        func_0x00010bfee140();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar21;
        func_0x00010bf36840();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        func_0x00010c071840();
        _objc_release(puVar25);
        _objc_release(puVar21);
        _objc_release(uVar7);
        if ((int)uVar10 != 0) {
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          lStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          plStack_310 = (long *)0x0;
          _objc_retain(puStack_380);
          puVar21 = puStack_380;
          func_0x00010bf52a60();
          if (puVar21 != (undefined *)0x0) {
            lVar22 = *plStack_310;
            do {
              puVar25 = (undefined *)0x0;
              do {
                if (*plStack_310 != lVar22) {
                  _objc_enumerationMutation(puStack_380);
                }
                uVar18 = *(undefined8 *)(lStack_318 + (long)puVar25 * 8);
                uVar11 = *(undefined8 *)(param_1 + 0x1c8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar18;
                func_0x00010c0c3fe0(uVar18);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar18;
                func_0x00010c240200(uVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c23fe00();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar18;
                func_0x00010c0fee00();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar12;
                func_0x00010c0ff660();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar13;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar14;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                puVar23 = puVar19;
                func_0x00010c294d60(puVar19);
                _objc_retainAutoreleasedReturnValue();
                puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_1a8 = puVar3;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c10a380(uVar11);
                _objc_release(puVar16);
                _objc_release(puVar23);
                _objc_release(uVar15);
                _objc_release(uVar14);
                _objc_release(uVar13);
                _objc_release(uVar12);
                _objc_release(uVar18);
                _objc_release(uVar7);
                _objc_release(uVar10);
                _objc_release(uVar11);
                puVar25 = puVar25 + 1;
              } while (puVar21 != puVar25);
              puVar21 = puStack_380;
              func_0x00010bf52a60();
            } while (puVar21 != (undefined *)0x0);
          }
          _objc_release(puStack_380);
          puVar21 = PTR_PTR_1126cfaf0;
          puVar25 = param_3;
          func_0x00010bf1fde0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4c600(puVar21);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar25);
          ppuVar17 = *(undefined ***)(param_1 + 0x1c0);
          func_0x00010c269d40(ppuVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puStack_3c8;
          func_0x00010c26c420(puStack_3c8);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puStack_3c8;
          func_0x00010befd240();
          _objc_retainAutoreleasedReturnValue();
          ppuVar24 = ppuVar17;
          func_0x00010bf37860(ppuVar17);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar23);
          _objc_release(puVar25);
          _objc_release(ppuVar17);
          uVar10 = *(undefined8 *)(param_1 + 0x1c0);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_1b0 = puVar3;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c260(uVar10);
          _objc_release(puVar25);
          _objc_release(uVar10);
          goto LAB_1069f41c8;
        }
      }
      puVar21 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(puVar21);
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1b8 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15bb60(puVar21);
      goto LAB_1069f41c8;
    }
    puStack_3c8 = PTR_PTR_1126b6078;
    func_0x00010bf9e400();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = *(undefined **)(param_1 + 0xf8);
    func_0x00010c269d40(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cd40();
  }
  else {
    puStack_3c8 = PTR_PTR_1126b5bd0;
    _objc_alloc();
    puVar21 = puVar1;
    func_0x00010c25a520(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar21;
    func_0x00010853bdd8();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126b5bd8;
    func_0x00010c24bd60(PTR_PTR_1126b5bd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000c00();
    _objc_release(puVar23);
    _objc_release(puVar25);
    _objc_release(puVar21);
    puVar21 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar21);
    uVar10 = *(undefined8 *)(param_1 + 0x1a0);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_118 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_1069f44f0;
    puStack_270 = &UNK_110952e00;
    _objc_retain(ppuVar8);
    puStack_268 = puVar21;
    ppuStack_238 = ppuVar8;
    _objc_retain(puStack_380);
    puStack_260 = puStack_380;
    puStack_258 = puVar5;
    puStack_250 = puVar3;
    puStack_248 = puVar19;
    _objc_retain(param_3);
    puStack_240 = param_3;
    func_0x00010c15cbe0(uVar10);
    _objc_release(puVar25);
    _objc_release(uVar10);
    _objc_release(puStack_240);
    _objc_release(puStack_260);
    ppuVar24 = ppuStack_238;
LAB_1069f41c8:
    _objc_release(ppuVar24);
  }
  _objc_release(puVar21);
  _objc_release(puStack_3c8);
  puStack_348 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_340 = 0xc2000000;
  pcStack_338 = FUN_1069f4770;
  puStack_330 = &UNK_110842e18;
  ppuVar24 = &puStack_348;
  puStack_328 = param_1;
  func_0x0001000d76cc("APPSTORE");
LAB_1069f421c:
  _objc_release(puStack_380);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(&puStack_1c0);
  _objc_release(puVar19);
  _objc_release(puStack_398);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(&puStack_1c0);
  __Unwind_Resume(param_3);
  _objc_retain(ppuVar24);
  puVar4 = PTR_PTR_1126cfac0;
  _objc_opt_class(PTR_PTR_1126cfac0);
  ppuVar17 = ppuVar24;
  _objc_opt_isKindOfClass(ppuVar24,puVar4);
  ppuVar8 = ppuVar24;
  if (((ulong)ppuVar17 & 1) == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_retain(ppuVar8);
  ppuVar17 = ppuVar8;
  func_0x00010c23f220(ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(ppuVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar17);
  return;
}



/* Entry: 1069f4378; end: 1069f44ef;  */

void FUN_1069f4378(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126cfac0;
  _objc_opt_class(PTR_PTR_1126cfac0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c23f220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1069f44f0; end: 1069f476f;  */

void FUN_1069f44f0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf1fde0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bb60(lVar1);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x0001069f455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))();
      return;
    }
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010bf1fde0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bb60(lVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x0001069f4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x10))();
      return;
    }
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010c065820(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1069f4770; end: 1069f47cb;  */

void FUN_1069f4770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f47cc; end: 1069f47f3; -[SCChatInputMediaPlugin recipient] */

void FUN_1069f47cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069f47f4; end: 1069f481b; -[SCChatInputMediaPlugin recipientUserId] */

void FUN_1069f47f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069f481c; end: 1069f4843; -[SCChatInputMediaPlugin replyParameters] */

void FUN_1069f481c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069f4844; end: 1069f489b; -[SCChatInputMediaPlugin replyParametersWithCompletion:] */

void FUN_1069f4844(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c131e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069f489c; end: 1069f48a3; -[SCChatInputMediaPlugin isGroupConversation] */

undefined1 FUN_1069f489c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1069f48a4; end: 1069f4afb; -[SCChatInputMediaPlugin _setReplyParmetersForConversationInformation:] */

void FUN_1069f48a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar3);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf36840(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 0;
      puVar5 = PTR_PTR_1126b1010;
      _objc_alloc();
      func_0x00010c02ec80();
      func_0x00010c1eb220();
      func_0x00010c1d86a0(puVar5);
      uVar1 = param_3;
      func_0x00010bfb50e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf36840();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      _objc_retain(puVar5);
      func_0x00010c0c11e0(uVar2);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar5;
      _objc_retain(puVar5);
      _objc_release(uVar3);
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(puStack_68 + 3);
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(uVar1);
      __Block_object_dispose(&uStack_70,8);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069f4afc; end: 1069f4c2f;  */

void FUN_1069f4afc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar3;
  _objc_release(uVar2);
  uVar3 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = uVar3;
  _objc_release(uVar2);
  func_0x00010bede880(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f4c30; end: 1069f4cd7; -[SCChatInputMediaPlugin _updateReplyParametersForGroupConversationId:partialReplyParameters:] */

void FUN_1069f4c30(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf85ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  func_0x00010c1eb080(param_4,param_2,lVar2);
  func_0x00010c1eb300(param_4,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b2900(param_4,param_2,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069f4cd8; end: 1069f4dcf; -[SCChatInputMediaPlugin _updateReplyParametersForSnapchatter:partialReplyParameters:] */

void FUN_1069f4cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010901d7c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(param_4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(param_4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb300(param_4);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(param_3,puVar2);
  _objc_release(param_3);
  func_0x00010c1af8a0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069f4dd0; end: 1069f4eab; -[SCChatInputMediaPlugin _handleActiveConversationInformation:] */

void FUN_1069f4dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069f4eac; end: 1069f4ef3;  */

void FUN_1069f4eac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc3e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069f4ef4; end: 1069f4fff; -[SCChatInputMediaPlugin _sinkInformation:] */

void FUN_1069f4ef4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  func_0x00010bea6ca0(param_1,param_2,param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar6 = (uint)(*(long *)(param_1 + 0x28) != 0);
  }
  else {
    lVar2 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf36840(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,uVar4);
    uVar6 = (uint)lVar5 ^ 1;
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1;
  _objc_release(uVar4);
  if (uVar6 != 0) {
    func_0x00010be64d80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069f5000; end: 1069f50f7; -[SCChatInputMediaPlugin _memTwoDrawerConversation] */

void FUN_1069f5000(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1069f50f8;
  uStack_30 = 0x1069f5108;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf36840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069f50f8; end: 1069f510f;  */

void FUN_1069f50f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069f5110; end: 1069f51df;  */

void FUN_1069f5110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cfaf8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c03d4a0();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069f51e0; end: 1069f52c3; -[SCChatInputMediaPlugin _notifyMemTwoDrawerOfConversationChange] */

void FUN_1069f51e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1 + 0x200;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 != 0) {
    func_0x00010be5ef00();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1069f52c4;
    puStack_48 = &UNK_110841f80;
    _objc_retain(lVar2);
    lStack_40 = lVar1;
    lStack_38 = param_1;
    _objc_retain(param_1);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1069f52c4; end: 1069f52cf;  */

void FUN_1069f52c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateConversation__11267eca8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069f52d0; end: 1069f53bb; -[SCChatInputMediaPlugin _numberOfRecipients] */

undefined8 FUN_1069f52d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf36840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1069f53bc; end: 1069f53cf;  */

void FUN_1069f53bc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1069f53d0; end: 1069f546f;  */

void FUN_1069f53d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f5470; end: 1069f55ab; -[SCChatInputMediaPlugin _destinationInfoForConversationInformation:replyAllGroupId:] */

void FUN_1069f5470(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (param_4 == (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bf36840(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR_PTR_1126b01c0;
      func_0x00010bfcf680(PTR_PTR_1126b01c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      puVar2 = param_4;
    }
    puVar3 = param_3;
    func_0x00010c10ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0df180();
    puVar5 = param_3;
    func_0x00010c10ad20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0df160();
    puVar7 = puVar1;
    func_0x000108606910(puVar1,puVar2,puVar4,puVar6,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1069f55ac; end: 1069f5813; -[SCChatInputMediaPlugin _platformAnalyticsWithDrawerMetricsInfo:memoriesMetricsInfo:conversationInformation:replyAllGroupId:] */

void FUN_1069f55ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bdfb280(param_1,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c11eca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108606d64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  lVar4 = param_5;
  func_0x00010bf37160();
  lVar1 = lVar4;
  if (lVar4 != 0x1c) {
    lVar1 = 0;
  }
  if (lVar4 != 0x2c) {
    lVar4 = lVar1;
  }
  func_0x00010c2b9b80(puVar3,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar3,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aca20(puVar3,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b3c60(puVar3,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2aa640(puVar3,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126b5f90;
    _objc_alloc(PTR_PTR_1126b5f90);
    lVar1 = param_5;
    func_0x00010bf4f080(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004680(puVar5,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010c2ab020(puVar3,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069f5814; end: 1069f5867; -[SCChatInputMediaPlugin _convertToExternalMediasFromDrawerGallerySnaps:drawerTab:] */

void FUN_1069f5814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1069f5868;
  puStack_20 = &UNK_110952e60;
  uStack_18 = param_4;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f5868; end: 1069f5927;  */

void FUN_1069f5868(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cfb00;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0ed100(param_2);
  func_0x00010c0ed920(param_2);
  uVar4 = param_2;
  FUN_106e0bc24(param_2,uVar3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f80(puVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069f5928; end: 1069f5b53; -[SCChatInputMediaPlugin _processDrawerGallerySnaps:sendEvent:platformAnalytics:drawerTab:completionHandler:] */

void FUN_1069f5928(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x26;
  undefined8 uVar11;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = param_1;
  lStack_148 = param_6;
  _objc_retain(param_3);
  puStack_138 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_140 = puVar1;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  uVar11 = param_5;
  lVar9 = param_3;
  lVar10 = param_7;
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      uVar8 = uVar11;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar11;
        func_0x00010c0746e0();
        if ((int)uVar3 == 0) {
          puVar1 = PTR_PTR_1126cfb00;
          _objc_alloc();
          param_4 = puVar1;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar11;
          func_0x00010c0ed100(uVar11);
          func_0x00010c0ed920(uVar11);
          FUN_106e0bc24(uVar11,uVar8,lStack_148);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c028f80(puVar1);
          func_0x00010befa120(puStack_140);
          _objc_release(puVar1);
          _objc_release(uVar11);
          _objc_release(param_4);
        }
        else {
          param_6 = param_7;
          func_0x00010be9f3a0(uStack_150);
          uVar11 = uVar8;
        }
        lVar10 = lVar10 + 1;
        uVar8 = uVar11;
      } while (lVar2 != lVar10);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar2 = param_3;
      func_0x00010bf52a60();
      unaff_x26 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puStack_138);
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_140);
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1069f5b54;
  uStack_1a0 = unaff_x26;
  lStack_198 = param_7;
  lStack_190 = param_3;
  lStack_188 = lVar10;
  lStack_180 = lVar9;
  uStack_178 = uVar11;
  puStack_170 = param_4;
  uStack_168 = param_5;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c220e20();
  _objc_initWeak(auStack_1a8,lVar2);
  puVar5 = puVar6;
  func_0x00010c0fa940(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(param_6);
  func_0x00010c135780(puVar1);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return;
}



/* Entry: 1069f5b54; end: 1069f5d07; -[SCChatInputMediaPlugin _sendGifFromDrawerMedia:sendEvent:platformAnalytics:completionHandler:] */

void FUN_1069f5b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c220e20();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = param_3;
  func_0x00010c0fa940(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c135780(puVar1);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069f5d08; end: 1069f5d6b;  */

void FUN_1069f5d08(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be9f3c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069f5d6c; end: 1069f65e7; -[SCChatInputMediaPlugin _sendGifFromImageData:sendEvent:platformAnalytics:completionHandler:] */

void FUN_1069f5d6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126cfb08;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad60();
  _objc_release(puVar2);
  func_0x00010c1a3aa0(puVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cfb00;
  _objc_alloc();
  puVar15 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_106e0c1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f80();
  _objc_release(puVar3);
  _objc_release(puVar15);
  lVar19 = param_4;
  func_0x00010bfee140();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar19;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar19;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar19;
  func_0x00010c11eca0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c1319e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar5 != 0) && (lVar16 != 0)) {
    puVar15 = PTR_PTR_1126c2810;
    _objc_alloc(PTR_PTR_1126c2810);
    lVar5 = lVar16;
    func_0x00010c15f2e0(lVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x00010c0c5340(lVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    func_0x00010c04e240(puVar15);
    _objc_release(lVar7);
    _objc_release(lVar5);
    uVar17 = param_5;
    func_0x000108604d34();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + 8);
    uVar20 = *(undefined8 *)(param_1 + 0x100);
    _objc_retain(uVar21);
    func_0x00010c269d40(uVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1069f65e8;
    puStack_d0 = &UNK_110952e30;
    _objc_retain(param_6);
    uStack_c8 = uVar21;
    uStack_a0 = param_6;
    _objc_retain(puVar2);
    puStack_c0 = puVar2;
    lStack_b8 = lVar6;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    _objc_retain(param_5);
    uStack_a8 = param_5;
    func_0x00010c15d8c0(uVar20);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(uVar20);
    _objc_release(uStack_a8);
    _objc_release(lStack_b0);
    _objc_release(puStack_c0);
    _objc_release(uStack_a0);
    _objc_release(uVar21);
    _objc_release(uVar17);
    _objc_release(puVar15);
    goto LAB_1069f6524;
  }
  if (lVar16 != 0) {
    puVar15 = PTR_PTR_1126b6078;
    func_0x00010bfcc980(PTR_PTR_1126b6078);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cd40();
    _objc_release(uVar17);
    _objc_release(puVar15);
    goto LAB_1069f6524;
  }
  lVar5 = param_4;
  func_0x00010befd460();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
LAB_1069f64a0:
    puVar15 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_98 = lVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bf20(puVar15);
  }
  else {
    uVar20 = *(undefined8 *)(param_1 + 0x1b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar19;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar20;
    func_0x00010c071840();
    _objc_release(lVar7);
    _objc_release(uVar20);
    if ((int)uVar17 == 0) goto LAB_1069f64a0;
    uVar20 = *(undefined8 *)(param_1 + 0x1c8);
    func_0x00010c269d40(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c240200();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_5;
    func_0x00010c294d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = lVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a380(uVar20);
    _objc_release(puVar12);
    _objc_release(uVar17);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar13);
    _objc_release(puVar3);
    _objc_release(puVar15);
    _objc_release(uVar20);
    puVar15 = PTR_PTR_1126cfaf0;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010bf1fde0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c600(puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(puVar3);
    puVar13 = *(undefined **)(param_1 + 0x1c0);
    func_0x00010c269d40(puVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c26c420(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010befd240(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf37860(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar7);
    _objc_release(puVar13);
    uVar17 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_90 = lVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260(uVar17);
    _objc_release(puVar13);
    _objc_release(uVar17);
  }
  _objc_release(puVar3);
  _objc_release(puVar15);
  _objc_release(lVar5);
LAB_1069f6524:
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1069f6704;
  puStack_f8 = &UNK_110842e18;
  ppuVar18 = &puStack_110;
  lStack_f0 = param_1;
  func_0x0001000d76cc("APPSTORE");
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar19);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppuVar18 == (undefined **)0x0) {
    lVar16 = *(long *)(param_4 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_4 + 0x38);
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bf20(lVar16);
    _objc_release(puVar1);
    _objc_release(uVar17);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
      return;
    }
  }
  else {
    lVar16 = *(long *)(param_4 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x0001069f664c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 0x10))();
      return;
    }
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(lVar16 + 0x20);
  func_0x00010c065820(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar17);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}



/* Entry: 1069f65e8; end: 1069f6703;  */

void FUN_1069f65e8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c1319e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bf20(lVar1);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001069f664c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))();
      return;
    }
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c065820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1069f6704; end: 1069f675f;  */

void FUN_1069f6704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c065820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6120;
  func_0x00010c0c4b40(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f6760; end: 1069f6777; -[SCChatInputMediaPlugin inputContext] */

void FUN_1069f6760(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069f6778; end: 1069f6783; -[SCChatInputMediaPlugin setInputContext:] */

void FUN_1069f6778(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x210,param_3);
  return;
}



/* Entry: 1069f6784; end: 1069f678b; -[SCChatInputMediaPlugin inputItem] */

undefined8 FUN_1069f6784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 1069f678c; end: 1069f67bb; -[SCChatInputMediaPlugin setInputItem:] */

void FUN_1069f678c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069f67bc; end: 1069f6ad7; -[SCChatInputMediaPlugin .cxx_destruct] */

void FUN_1069f67bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_destroyWeak(param_1 + 0x210);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_destroyWeak(param_1 + 0x200);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1069f6ad8; end: 1069f751f; -[SCChatInputMediaPluginProvider initWithDrawerMediaSender:groupFetcher:snapchattersDataFetcher:cameraRollAlbumPickerScopeExposer:chatLogger:blizzardLogger:dataObjectContext:cloudFS:encryptedContentManager:circumstanceEngine:contentDelivery:musicSelectionLoader:musicMediaLoader:snapVideoFilterFactory:mediaVideoImporter:mediaImageImporter:previewScopeExposer:previewScopeBuilderServices:previewVideoProviderServices:previewFilterDataProviderFactory:photoPermissionCoordinator:mediaTranscodingLogger:grapheneRegistry:storyReplySender:storyShareSender:snapVideoFilterScopeExposer:memoriesPreviewPresenterBuilder:cloudSync:memoriesMergedDataSource:memoriesEntryThumbnailGeneratorBuilder:galleryLogger:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:memoriesTranscodingHelper:snapDocDownloadingService:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:userPreferences:downloader:snapDocEditorServices:snapSender:memoriesSnapDocTranscodingManager:spotlightShareSender:notificationPool:chatMediaPreviewDataManager:messagingExperimentService:textSender:externalMediaPreparer:chatMediaPreviewScopeExposer:chatMediaPreviewScopeServices:legacyStoryMediaCache:memTwoChatMediaDrawerHost:enableMemTwoChatMediaDrawer:stickerInjector:] */

undefined8 *
FUN_1069f6ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined1 param_56,
             undefined4 param_57,undefined8 param_58)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_39);
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
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_58);
  puStack_70 = PTR_PTR_1126f42e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
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
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_55;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x37) = param_56;
  }
  _objc_release(param_58);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
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
  _objc_release(param_39);
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



/* Entry: 1069f7520; end: 1069f7527; -[SCChatInputMediaPluginProvider providerType] */

undefined8 FUN_1069f7520(void)

{
  return 1;
}



/* Entry: 1069f7528; end: 1069f768b; -[SCChatInputMediaPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1069f7528(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfb10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c00e520(puVar1,*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_3,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),param_4,
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                      *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                      *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148),
                      *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158),
                      *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                      *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x178),
                      *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188),
                      *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                      *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1b0),
                      *(undefined1 *)(param_1 + 0x1b8));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069f768c; end: 1069f7693; -[SCChatInputMediaPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_1069f768c(void)

{
  return 0;
}



/* Entry: 1069f7694; end: 1069f7933; -[SCChatInputMediaPluginProvider .cxx_destruct] */

void FUN_1069f7694(long param_1)

{
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 1069f7934; end: 1069f79c7; -[SCChatInputMediaSendEvent initWithMediaDrawerSnaps:location:] */

undefined1 * FUN_1069f7934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f42e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c1bf6c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069f79c8; end: 1069f79cf; -[SCChatInputMediaSendEvent mediaDrawerSnaps] */

undefined8 FUN_1069f79c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1069f79d0; end: 1069f79ff; -[SCChatInputMediaSendEvent setMediaDrawerSnaps:] */

void FUN_1069f79d0(long param_1,undefined8 param_2,undefined8 param_3)

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


