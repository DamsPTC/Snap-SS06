/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2b67c4; end: 10b2b6853; -[SCHeader setBorderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b67c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278e400;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bf20000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bf20000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b6854; end: 10b2b68cf; -[SCHeader setBorderThickness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b6854(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + _DAT_11278e3b8) = param_1;
  lVar1 = param_2;
  func_0x00010bf20000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf20000(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10b2b68d0; end: 10b2b68df; -[SCHeader setCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b68d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e3bc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2b68e0; end: 10b2b6973; -[SCHeader setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b68e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278e404;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    _objc_retain();
    if (param_3 != 0) {
      lVar1 = param_1 + _DAT_11278e3e8;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(param_3);
      if (lVar1 != 0) {
        func_0x00010c128b60(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b6974; end: 10b2b6a0f; -[SCHeader setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b6974(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11278e3e8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    lVar1 = param_1 + _DAT_11278e404;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar2 = param_1 + lVar2;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        func_0x00010c128b60(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b6a10; end: 10b2b6adb; -[SCHeader reloadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b6a10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010beb24e0();
  lVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf13da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar4 = param_1;
  if ((int)lVar1 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_11278e3dc);
  }
  func_0x00010c22a660(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bed9280(param_1);
  func_0x00010bed4680(param_1);
  func_0x00010bdc9340(param_1);
  func_0x00010bed92a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2b6adc; end: 10b2b6e63; -[SCHeader _trailingAccessoryImageViewAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b2b6adc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined *param_5,undefined8 param_6,undefined *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  double dVar18;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  func_0x00010bfe0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7a80(param_5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7aa0(param_5);
    _objc_release(puVar5);
  }
  puVar5 = param_5;
  func_0x00010bfe0180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  while (PTR__OBJC_CLASS___UIImageView_1126aec28 = puVar5, puVar6 <= param_7) {
    _objc_opt_new();
    func_0x00010c182220();
    func_0x00010c219b60(puVar5);
    func_0x00010c1a7f60(puVar5);
    func_0x00010befbb60(param_5);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar7 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_11278e3fc;
    uVar8 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010bf348e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar16);
    _objc_release(uVar8);
    _objc_release(puVar7);
    puVar6 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + lVar17);
    func_0x00010c08e400(uVar8);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    puVar7 = puVar6;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar6);
    func_0x00010c162480(puVar7);
    puVar6 = param_5;
    func_0x00010bfe0180(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    puVar6 = param_5;
    func_0x00010bfe01a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = param_5;
    func_0x00010bfe0180();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  }
  func_0x00010bfe0180();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_opt_respondsToSelector();
  _objc_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = param_5;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    _objc_opt_respondsToSelector();
    _objc_release();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_5;
      func_0x00010bf15260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar6 = param_5;
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if (puVar7 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b2b7030;
      }
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    func_0x00010c279260();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
    }
    _objc_retain(puVar7);
    _objc_release(puVar6);
    _objc_release(param_5);
    puVar6 = puVar7;
    func_0x00010bf52a60();
    lVar17 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar17) {
          _objc_enumerationMutation(puVar7);
        }
        if (*(long *)((long)puVar16 * 8) != 0) {
          func_0x00010befa120(puVar5);
        }
        puVar16 = puVar16 + 1;
      } while (puVar6 != puVar16);
      puVar6 = puVar7;
      func_0x00010bf52a60();
    }
LAB_10b2b7030:
    _objc_release();
    puVar6 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar15 = (long)_DAT_11278e3fc;
    uVar8 = *(undefined8 *)(puVar6 + lVar15);
    func_0x00010c08ce80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar6 + lVar15);
    func_0x00010c26ba00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96780(uVar8);
    _objc_release(uVar14);
    _objc_release(uVar8);
    uVar14 = *(undefined8 *)(puVar6 + lVar15);
    func_0x00010c08ce80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar6 + lVar15);
    func_0x00010c26ba00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c290f80(uVar14);
    _objc_release(uVar8);
    _objc_release();
    iVar4 = (int)uVar14;
    dVar18 = param_1;
    _CGRectIsEmpty(param_1,param_2,param_3,param_4);
    if (iVar4 != 0) {
      func_0x00010becb740(puVar6);
      param_1 = dVar18;
      func_0x00010bf20c00(*(undefined8 *)(puVar6 + lVar15));
      _CGRectGetWidth();
      lVar17 = *(long *)(puVar6 + lVar15);
      func_0x00010c26b7a0();
      if (lVar17 == 2) {
        param_1 = param_1 - dVar18;
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
      }
      else {
        lVar15 = *(long *)(puVar6 + lVar15);
        func_0x00010c26b7a0();
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (lVar15 == 1) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1) && !NAN(dVar18)) {
            bVar1 = param_1 < dVar18;
            bVar2 = param_1 == dVar18;
            bVar3 = false;
          }
        }
        if (bVar2 || bVar1 != bVar3) {
          param_1 = 0.0;
        }
        else {
          param_1 = (param_1 - dVar18) * 0.5;
        }
      }
    }
    return param_1;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return param_1;
}



/* Entry: 10b2b6e64; end: 10b2b707b; -[SCHeader _trailingAccessoryImagesFromDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b2b6e64(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  double dVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_opt_respondsToSelector();
  _objc_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = param_5;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    _objc_opt_respondsToSelector();
    _objc_release();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (((ulong)puVar6 & 1) == 0) goto LAB_10b2b7044;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    func_0x00010bf15260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = param_5;
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (puVar6 == (undefined *)0x0) goto LAB_10b2b7044;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010c279260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
    }
    _objc_retain(puVar6);
    _objc_release(puVar5);
    _objc_release(param_5);
    puVar5 = puVar6;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar6);
        }
        if (*(long *)((long)puVar12 * 8) != 0) {
          func_0x00010befa120(puVar7);
        }
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar6;
      func_0x00010bf52a60();
    }
  }
  _objc_release();
  puVar5 = puVar6;
LAB_10b2b7044:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return param_1;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_11278e3fc;
  uVar8 = *(undefined8 *)(puVar5 + lVar11);
  func_0x00010c08ce80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar5 + lVar11);
  func_0x00010c26ba00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96780(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(puVar5 + lVar11);
  func_0x00010c08ce80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar5 + lVar11);
  func_0x00010c26ba00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290f80(uVar9);
  _objc_release(uVar8);
  _objc_release();
  iVar4 = (int)uVar9;
  dVar13 = param_1;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if (iVar4 != 0) {
    func_0x00010becb740(puVar5);
    param_1 = dVar13;
    func_0x00010bf20c00(*(undefined8 *)(puVar5 + lVar11));
    _CGRectGetWidth();
    lVar10 = *(long *)(puVar5 + lVar11);
    func_0x00010c26b7a0();
    if (lVar10 == 2) {
      param_1 = param_1 - dVar13;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      lVar11 = *(long *)(puVar5 + lVar11);
      func_0x00010c26b7a0();
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (lVar11 == 1) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_1) && !NAN(dVar13)) {
          bVar1 = param_1 < dVar13;
          bVar2 = param_1 == dVar13;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        param_1 = 0.0;
      }
      else {
        param_1 = (param_1 - dVar13) * 0.5;
      }
    }
  }
  return param_1;
}



/* Entry: 10b2b707c; end: 10b2b71e3; -[SCHeader _usedTextRectForTrailingAccessories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b2b707c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = (long)_DAT_11278e3fc;
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c08ce80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c26ba00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96780(uVar5,param_6,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c08ce80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c26ba00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c290f80(uVar6,param_6,uVar5);
  _objc_release(uVar5);
  _objc_release();
  iVar4 = (int)uVar6;
  dVar9 = param_1;
  _CGRectIsEmpty(param_1,param_2,param_3,param_4);
  if (iVar4 != 0) {
    func_0x00010becb740(param_5);
    param_1 = dVar9;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
    _CGRectGetWidth();
    lVar7 = *(long *)(param_5 + lVar8);
    func_0x00010c26b7a0();
    if (lVar7 == 2) {
      param_1 = param_1 - dVar9;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      lVar8 = *(long *)(param_5 + lVar8);
      func_0x00010c26b7a0();
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (lVar8 == 1) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_1) && !NAN(dVar9)) {
          bVar1 = param_1 < dVar9;
          bVar2 = param_1 == dVar9;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        param_1 = 0.0;
      }
      else {
        param_1 = (param_1 - dVar9) * 0.5;
      }
    }
  }
  return param_1;
}



/* Entry: 10b2b71e4; end: 10b2b748f; -[SCHeader _layoutHeaderTrailingAccessories] */

void FUN_10b2b71e4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_5;
  func_0x00010bfe0180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf529e0();
  _objc_release(uVar6);
  if (uVar1 != 0) {
    func_0x00010bee69a0(param_5);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c292ae0();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x1) {
      _CGRectGetMinX();
      uVar6 = param_5;
      func_0x00010bfe0180();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          uVar1 = param_5;
          func_0x00010bfe0180();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c074c20();
          _objc_release(uVar4);
          _objc_release(uVar1);
          if ((uVar5 & 1) != 0) {
            return;
          }
          param_1 = param_1 + -4.0 + -16.0;
          uVar1 = param_5;
          func_0x00010bfe01a0(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c181140(param_1);
          _objc_release(uVar4);
          _objc_release(uVar1);
          uVar6 = uVar6 + 1;
          uVar1 = param_5;
          func_0x00010bfe0180();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010bf529e0();
          _objc_release(uVar1);
        } while (uVar6 < uVar4);
      }
    }
    else {
      _CGRectGetMaxX(param_1,param_2,param_3,param_4);
      uVar6 = param_5;
      func_0x00010bfe0180();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      if (uVar1 != 0) {
        uVar6 = 0;
        param_1 = param_1 + 4.0;
        do {
          uVar1 = param_5;
          func_0x00010bfe0180();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c074c20();
          _objc_release(uVar4);
          _objc_release(uVar1);
          if ((uVar5 & 1) != 0) {
            return;
          }
          uVar1 = param_5;
          func_0x00010bfe01a0(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c181140(param_1);
          _objc_release(uVar4);
          _objc_release(uVar1);
          param_1 = param_1 + 20.0;
          uVar6 = uVar6 + 1;
          uVar1 = param_5;
          func_0x00010bfe0180();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010bf529e0();
          _objc_release(uVar1);
        } while (uVar6 < uVar4);
      }
    }
  }
  return;
}



/* Entry: 10b2b7490; end: 10b2b7677; -[SCHeader _updateHeaderViewBadge] */

/* WARNING: Possible PIC construction at 0x00010b2b7578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b2b75e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2b757c) */
/* WARNING: Removing unreachable block (ram,0x00010b2b7594) */
/* WARNING: Removing unreachable block (ram,0x00010b2b75b0) */
/* WARNING: Removing unreachable block (ram,0x00010b2b75ec) */
/* WARNING: Removing unreachable block (ram,0x00010b2b7540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b7490(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  if ((*(long *)(param_1 + (long)_DAT_11278e3c4) == 3) &&
     (*(long *)(param_1 + (long)_DAT_11278e3fc) != 0)) {
    func_0x00010bece400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      func_0x00010bece3e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      goto code_r0x00010c1a7f60;
    }
    uVar2 = param_1;
    func_0x00010bfe0180();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      func_0x00010bfe0180(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010c1a7f60;
    }
    func_0x00010be49220(param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c233920();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) goto code_r0x00010c1a7f60;
  }
  lVar5 = *(long *)(uVar1 + (long)_DAT_11278e3c4);
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      func_0x00010bed91a0(uVar1);
    }
    else if (lVar5 == 1) {
      func_0x00010bed9200(uVar1);
    }
  }
  else if (lVar5 == 2) {
    func_0x00010bed91e0(uVar1);
  }
  else if (lVar5 == 3) {
    func_0x00010bed9220(uVar1);
  }
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b2b7678; end: 10b2b776f; -[SCHeader _updateHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b7678(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c233920();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar4 = 1;
      goto LAB_10b2b7754;
    }
  }
  uVar4 = 0;
  lVar5 = *(long *)(param_1 + (long)_DAT_11278e3c4);
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      func_0x00010bed91a0(param_1);
    }
    else {
      if (lVar5 != 1) goto LAB_10b2b7754;
      func_0x00010bed9200(param_1);
    }
  }
  else if (lVar5 == 2) {
    func_0x00010bed91e0(param_1);
  }
  else {
    if (lVar5 != 3) goto LAB_10b2b7754;
    func_0x00010bed9220(param_1);
  }
  uVar4 = 0;
LAB_10b2b7754:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + (long)_DAT_11278e3ec),PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 10b2b7770; end: 10b2b7843; -[SCHeader _updateHeaderLabel] */

void FUN_10b2b7770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c271340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdfc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b7844; end: 10b2b7cdb; -[SCHeader _updateHeaderTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b7844(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c26b940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar5;
    _objc_opt_respondsToSelector(uVar5,PTR_s_placeHolderForHeaderTextField_11261ce48);
    _objc_release(uVar5);
    if ((uVar2 & 1) != 0) {
      uVar5 = param_1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      _objc_opt_respondsToSelector();
      if ((uVar2 & 1) == 0) {
        _objc_retain(uVar1);
        uVar2 = uVar1;
      }
      else {
        uVar7 = param_1;
        func_0x00010bf643e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010c26b960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      uVar5 = param_1;
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0fd0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (uVar7 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840();
        func_0x00010c16b680(*(undefined8 *)(param_1 + (long)_DAT_11278e3f4));
        _objc_release(puVar3);
        _objc_release(puVar4);
      }
      _objc_release(uVar7);
      goto LAB_10b2b7a64;
    }
  }
  else {
    uVar2 = uVar5;
    func_0x00010c0fd760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (uVar2 != 0) {
      func_0x00010c16b680(*(undefined8 *)(param_1 + (long)_DAT_11278e3f4));
    }
LAB_10b2b7a64:
    _objc_release(uVar2);
  }
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    puVar9 = (undefined8 *)(param_1 + (long)_DAT_11278e3f4);
    func_0x00010c1edbe0(*puVar9);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fbc0();
    puVar9 = (undefined8 *)(param_1 + (long)_DAT_11278e3f4);
    func_0x00010c1edbe0(*puVar9);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c195460(*puVar9);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c230220();
    func_0x00010c195460(*puVar9);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c271340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*puVar9);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010c213180(*puVar9);
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c216160(*puVar9);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c270f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*puVar9);
    _objc_release(uVar7);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c2711e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (uVar5 != 0) {
      func_0x00010c16b720(*puVar9);
    }
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    puVar10 = (ulong *)(uVar1 + (long)_DAT_11278e3fc);
    func_0x00010c193a00(*puVar10);
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf643e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c230220();
    puVar10 = (ulong *)(uVar1 + (long)_DAT_11278e3fc);
    func_0x00010c193a00(*puVar10);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  func_0x00010c0711e0(*puVar10);
  func_0x00010c1fada0(*puVar10);
  uVar5 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1edbe0(*puVar10);
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf643e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fbc0();
    func_0x00010c1edbe0(*puVar10);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf643e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c271340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*puVar10);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c26b940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = *puVar10;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar2);
  if (uVar5 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar5);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar5);
    }
    else {
      uVar7 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar5);
      if ((uVar7 & 1) != 0) goto LAB_10b2b7ef8;
    }
    func_0x00010c213180(*puVar10);
  }
LAB_10b2b7ef8:
  uVar5 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar7 & 1) == 0) {
    func_0x00010c216160(*puVar10);
  }
  else {
    uVar7 = uVar1;
    func_0x00010bf643e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c270f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*puVar10);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  _objc_opt_respondsToSelector();
  _objc_release(uVar5);
  if ((uVar7 & 1) != 0) {
    uVar5 = uVar1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c2711e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (uVar7 != 0) {
      func_0x00010c16b720(*puVar10);
    }
    _objc_release(uVar7);
  }
  uVar7 = *puVar10;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c08fa60();
  _objc_release(uVar7);
  if (uVar5 == 0) {
    func_0x00010c202440(*puVar10);
    uVar5 = uVar1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    if ((uVar7 & 1) != 0) {
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c0fd760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (uVar5 != 0) {
        func_0x00010c16b720(*puVar10);
        uVar1 = uVar5;
        func_0x00010bf0e760();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar7 != 0) {
          uVar7 = uVar1;
          func_0x00010c0e00e0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e480(*puVar10);
          _objc_release(uVar7);
        }
        _objc_release(uVar1);
      }
      _objc_release(uVar5);
    }
  }
  else {
    func_0x00010c202440(*puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b2b7cdc; end: 10b2b8137; -[SCHeader _updateHeaderTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b7cdc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    puVar5 = (ulong *)(param_1 + (long)_DAT_11278e3fc);
    func_0x00010c193a00(*puVar5);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c230220();
    puVar5 = (ulong *)(param_1 + (long)_DAT_11278e3fc);
    func_0x00010c193a00(*puVar5);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  func_0x00010c0711e0(*puVar5);
  func_0x00010c1fada0(*puVar5);
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1edbe0(*puVar5);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fbc0();
    func_0x00010c1edbe0(*puVar5);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c271340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*puVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c26b940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *puVar5;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar1);
  if (uVar2 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
      _objc_release(uVar2);
    }
    else {
      uVar4 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_10b2b7ef8;
    }
    func_0x00010c213180(*puVar5);
  }
LAB_10b2b7ef8:
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar4 & 1) == 0) {
    func_0x00010c216160(*puVar5);
  }
  else {
    uVar4 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c270f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*puVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    uVar2 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2711e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar4 != 0) {
      func_0x00010c16b720(*puVar5);
    }
    _objc_release(uVar4);
  }
  uVar4 = *puVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar2 == 0) {
    func_0x00010c202440(*puVar5);
    uVar2 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      func_0x00010bf643e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0fd760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (uVar2 != 0) {
        func_0x00010c16b720(*puVar5);
        uVar4 = uVar2;
        func_0x00010bf0e760();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          uVar3 = uVar4;
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e480(*puVar5);
          _objc_release(uVar3);
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010c202440(*puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b8138; end: 10b2b81e3; -[SCHeader _updateHeaderSearchBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b8138(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    func_0x00010c216160(*(undefined8 *)(param_1 + (long)_DAT_11278e3f8));
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c270f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + (long)_DAT_11278e3f8));
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b81e4; end: 10b2b836b; -[SCHeader _updateButtons] */

void FUN_10b2b81e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe7900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c140900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe7920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c2be8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfe79e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar1);
    _objc_release(uVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b2b836c; end: 10b2b846f; -[SCHeader _adjustFontIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b836c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_opt_respondsToSelector();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb3e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) goto LAB_10b2b83fc;
  }
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2b83fc:
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_11278e3f0));
  func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_11278e3f4));
  if (*(long *)(param_1 + _DAT_11278e3c4) == 3) {
    lVar4 = (long)_DAT_11278e3fc;
    uVar3 = *(ulong *)(param_1 + lVar4);
    func_0x00010c23b1e0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4));
    }
  }
  func_0x00010bdc9360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b2b8470; end: 10b2b867f; -[SCHeader _adjustFontSizeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b8470(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (*(long *)(param_1 + _DAT_11278e3c4) == 3) {
    dVar10 = *(double *)(param_1 + _DAT_11278e3d0);
    dVar11 = *(double *)(param_1 + _DAT_11278e3cc);
    lVar8 = (long)_DAT_11278e3e8;
    uVar4 = param_1 + lVar8;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      dVar10 = dVar10 - dVar11;
      dVar11 = dVar10 + -8.0;
    }
    else {
      lVar8 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar8);
      dVar11 = 8.0;
      func_0x00010bfe07a0();
      dVar10 = dVar11;
      _objc_release(lVar8);
    }
    func_0x00010be34c40(param_1);
    lVar8 = (long)_DAT_11278e3fc;
    dVar12 = 3.4028234663852886e+38;
    dVar13 = dVar10;
    dVar9 = dVar12;
    func_0x00010c23d5a0(*(undefined8 *)(param_1 + lVar8));
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfb3a80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    _objc_release(uVar6);
    bVar1 = false;
    if ((dVar9 < dVar11) && (bVar1 = false, !NAN(dVar13))) {
      bVar1 = dVar13 < 21.0;
    }
    if (bVar1) {
      do {
        dVar13 = dVar13 + 1.0;
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bfb3a80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010bfb41c0(dVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8));
        _objc_release(uVar6);
        _objc_release(uVar7);
        dVar9 = dVar12;
        func_0x00010c23d5a0(dVar10,*(undefined8 *)(param_1 + lVar8));
        bVar1 = false;
        if ((dVar9 < dVar11) && (bVar1 = false, !NAN(dVar13))) {
          bVar1 = dVar13 < 21.0;
        }
      } while (bVar1);
    }
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (dVar11 < dVar9) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar13)) {
        bVar1 = dVar13 < 15.0;
        bVar2 = dVar13 == 15.0;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      do {
        dVar13 = dVar13 + -1.0;
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bfb3a80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010bfb41c0(dVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)(param_1 + lVar8));
        _objc_release(uVar6);
        _objc_release(uVar7);
        dVar9 = dVar12;
        func_0x00010c23d5a0(dVar10,*(undefined8 *)(param_1 + lVar8));
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (dVar11 < dVar9) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar13)) {
            bVar1 = dVar13 < 15.0;
            bVar2 = dVar13 == 15.0;
            bVar3 = false;
          }
        }
      } while (!bVar2 && bVar1 == bVar3);
    }
  }
  return;
}



/* Entry: 10b2b8680; end: 10b2b872f; -[SCHeader resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b8680(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined *puStack_18;
  
  plVar1 = &lStack_30;
  lVar2 = *(long *)(param_1 + _DAT_11278e3c4);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      puStack_18 = PTR_PTR_112706298;
      plVar1 = &lStack_20;
      lStack_20 = param_1;
      goto LAB_10b2b8708;
    }
    if (lVar2 == 1) {
      lVar2 = (long)_DAT_11278e3f4;
      goto LAB_10b2b8720;
    }
  }
  else {
    if (lVar2 == 2) {
      lVar2 = (long)_DAT_11278e3f8;
LAB_10b2b8720:
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar2),PTR_s_resignFirstResponder_11262c258);
      return;
    }
    if (lVar2 == 3) {
      lVar2 = (long)_DAT_11278e3fc;
      goto LAB_10b2b8720;
    }
  }
  puStack_28 = PTR_PTR_112706298;
  lStack_30 = param_1;
LAB_10b2b8708:
  _objc_msgSendSuper2(plVar1,PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 10b2b8730; end: 10b2b87b3; -[SCHeader _textFieldEditingChanged] */

void FUN_10b2b8730(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bebbd80();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2b87b4; end: 10b2b88f7; -[SCHeader textField:shouldChangeCharactersInRange:replacementString:] */

ulong FUN_10b2b87b4(ulong param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar1 < (ulong)(param_5 + param_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c25cf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bf643e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c082f60();
      _objc_release(param_1);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b2b88f8; end: 10b2b898b; -[SCHeader _textFieldEditingDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b88f8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11278e3e0),param_2,1);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2b898c; end: 10b2b8a0f; -[SCHeader _textFieldEditingDidBegin] */

void FUN_10b2b898c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bebbd80();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2b8a10; end: 10b2b8aa3; -[SCHeader _textFieldEditingDidEndOnExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b8a10(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11278e3e0),param_2,1);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2b8aa4; end: 10b2b8c23; -[SCHeader _showXButtonIfNecessary] */

/* WARNING: Possible PIC construction at 0x00010b2b8bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2b8be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b8aa4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  uVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2302c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    return;
  }
  lVar5 = (long)_DAT_11278e3c4;
  lVar6 = *(long *)(param_1 + lVar5);
  if (lVar6 == 1) {
    uVar3 = *(ulong *)(param_1 + (long)_DAT_11278e3f4);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      _objc_release(uVar3);
      goto code_r0x00010c1a7f60;
    }
    if (*(long *)(param_1 + lVar5) == 3) goto LAB_10b2b8b84;
    _objc_release(uVar3);
  }
  else if (lVar6 == 3) {
LAB_10b2b8b84:
    lVar4 = *(long *)(param_1 + (long)_DAT_11278e3fc);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar6 == 1) {
      _objc_release(uVar3);
    }
    if (lVar5 == 0) goto code_r0x00010c1a7f60;
  }
  func_0x00010c2be8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b2b8c24; end: 10b2b8dc3; -[SCHeader textView:shouldChangeTextInRange:replacementText:] */

ulong FUN_10b2b8c24(undefined8 param_1,undefined8 param_2,double param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_9);
  uVar1 = param_9;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    func_0x00010c13a0e0(param_6);
    uVar4 = 0;
    goto LAB_10b2b8d98;
  }
  uVar1 = param_6;
  func_0x00010c26b700(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = param_4;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar3 & 1) == 0) {
LAB_10b2b8d1c:
    uVar1 = param_6;
    func_0x00010bfb3a80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_6);
    dVar5 = 1.79769313486232e+308;
    func_0x00010c14dd20(uVar2);
    _objc_release(uVar1);
    uVar1 = param_6;
    func_0x00010bfb3a80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    _objc_release(uVar1);
    uVar4 = (ulong)(dVar5 / param_3 <= 2.0);
  }
  else {
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c082f60();
    _objc_release(param_4);
    if ((int)uVar4 != 0) goto LAB_10b2b8d1c;
  }
  _objc_release(uVar2);
LAB_10b2b8d98:
  _objc_release(param_9);
  _objc_release(param_6);
  return uVar4;
}



/* Entry: 10b2b8dc4; end: 10b2b8e4f; -[SCHeader textViewDidChange:] */

/* WARNING: Possible PIC construction at 0x00010b2b8df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2b8dfc) */
/* WARNING: Removing unreachable block (ram,0x00010b2b8e40) */
/* WARNING: Removing unreachable block (ram,0x00010b2b8e2c) */

void FUN_10b2b8dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bebbd80(param_1);
  func_0x00010bdc9360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b2b8e50; end: 10b2b8f43; -[SCHeader textViewDidBeginEditing:] */

void FUN_10b2b8e50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0140;
  _objc_opt_class(PTR_PTR_1126e0140);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c23b1e0();
  if ((int)uVar3 != 0) {
    func_0x00010c212f20(uVar1);
    func_0x00010c202440(uVar1);
    func_0x00010c1cbe20(param_1);
  }
  func_0x00010bebbd80(param_1);
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe00c0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b8f44; end: 10b2b9057; -[SCHeader textViewDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b8f44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0140;
  _objc_opt_class(PTR_PTR_1126e0140);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010c202440(uVar1);
    func_0x00010c1cbe20(param_1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11278e3e0));
  uVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe00e0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b9058; end: 10b2b9077; -[SCHeader textView:shouldInteractWithTextAttachment:inRange:interaction:] */

undefined8 FUN_10b2b9058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_x6;
  
  if (in_x6 == 0) {
    func_0x00010bf179a0(param_3);
  }
  return 0;
}



/* Entry: 10b2b9078; end: 10b2b90f3; -[SCHeader leftButtonPressed] */

void FUN_10b2b9078(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2b90f4; end: 10b2b916f; -[SCHeader rightButtonPressed] */

void FUN_10b2b90f4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b2b9170; end: 10b2b91fb; -[SCHeader leftButtonWidth] */

undefined8 FUN_10b2b9170(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = 0x4046000000000000;
  }
  else {
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ce0();
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 10b2b91fc; end: 10b2b9207; -[SCHeader rightButtonWidth] */

undefined8 FUN_10b2b91fc(void)

{
  return 0x4046000000000000;
}



/* Entry: 10b2b9208; end: 10b2b928f; -[SCHeader additionalXOffsetForHeader] */

undefined8 FUN_10b2b9208(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf643e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befd540();
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 10b2b9290; end: 10b2b930b; -[SCHeader xButtonPressed] */

void FUN_10b2b9290(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be900();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setText__1126625f0,&PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 10b2b930c; end: 10b2b932b; -[SCHeader dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b930c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b932c; end: 10b2b934b; -[SCHeader delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b932c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e404);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2b934c; end: 10b2b935b; -[SCHeader leftButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b934c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e408);
}



/* Entry: 10b2b935c; end: 10b2b939b; -[SCHeader setLeftButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b935c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e408;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b939c; end: 10b2b93ab; -[SCHeader rightButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b939c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e40c);
}



/* Entry: 10b2b93ac; end: 10b2b93eb; -[SCHeader setRightButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b93ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e40c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b93ec; end: 10b2b93fb; -[SCHeader borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b93ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e400);
}



/* Entry: 10b2b93fc; end: 10b2b940b; -[SCHeader borderThickness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b93fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3b8);
}



/* Entry: 10b2b940c; end: 10b2b941b; -[SCHeader centerLabelNoButtonOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2b940c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e3d4);
}



/* Entry: 10b2b941c; end: 10b2b942b; -[SCHeader setCenterLabelNoButtonOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b941c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e3d4) = param_3;
  return;
}



/* Entry: 10b2b942c; end: 10b2b943b; -[SCHeader topInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b942c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3cc);
}



/* Entry: 10b2b943c; end: 10b2b944b; -[SCHeader height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b943c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3d0);
}



/* Entry: 10b2b944c; end: 10b2b945b; -[SCHeader corners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b944c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3bc);
}



/* Entry: 10b2b945c; end: 10b2b946b; -[SCHeader headerLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b945c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3f0);
}



/* Entry: 10b2b946c; end: 10b2b94ab; -[SCHeader setHeaderLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b946c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e3f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b94ac; end: 10b2b94bb; -[SCHeader headerTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b94ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3f4);
}



/* Entry: 10b2b94bc; end: 10b2b94cb; -[SCHeader headerTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b94bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3fc);
}



/* Entry: 10b2b94cc; end: 10b2b94db; -[SCHeader headerSearchBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b94cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3f8);
}



/* Entry: 10b2b94dc; end: 10b2b94eb; -[SCHeader bottomBorderedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b94dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3e4);
}



/* Entry: 10b2b94ec; end: 10b2b952b; -[SCHeader setBottomBorderedView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b94ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e3e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b952c; end: 10b2b953b; -[SCHeader style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b952c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3c4);
}



/* Entry: 10b2b953c; end: 10b2b954b; -[SCHeader setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b953c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e3c4) = param_3;
  return;
}



/* Entry: 10b2b954c; end: 10b2b958b; -[SCHeader setXButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b954c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e3e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b958c; end: 10b2b959b; -[SCHeader headerViewToUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b958c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e3ec);
}



/* Entry: 10b2b959c; end: 10b2b95db; -[SCHeader setHeaderViewToUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b959c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e3ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b95dc; end: 10b2b95eb; -[SCHeader headerTrailingAccessoryImageViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b95dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e410);
}



/* Entry: 10b2b95ec; end: 10b2b962b; -[SCHeader setHeaderTrailingAccessoryImageViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b95ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e410;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b962c; end: 10b2b963b; -[SCHeader headerTrailingAccessoryLeadingConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b962c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e414);
}



/* Entry: 10b2b963c; end: 10b2b967b; -[SCHeader setHeaderTrailingAccessoryLeadingConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b963c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e414;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2b967c; end: 10b2b9783; -[SCHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b967c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e414,0);
  _objc_storeStrong(param_1 + _DAT_11278e410,0);
  _objc_storeStrong(param_1 + _DAT_11278e3ec,0);
  _objc_storeStrong(param_1 + _DAT_11278e3e0,0);
  _objc_storeStrong(param_1 + _DAT_11278e3e4,0);
  _objc_storeStrong(param_1 + _DAT_11278e3f8,0);
  _objc_storeStrong(param_1 + _DAT_11278e3fc,0);
  _objc_storeStrong(param_1 + _DAT_11278e3f4,0);
  _objc_storeStrong(param_1 + _DAT_11278e3f0,0);
  _objc_storeStrong(param_1 + _DAT_11278e400,0);
  _objc_storeStrong(param_1 + _DAT_11278e40c,0);
  _objc_storeStrong(param_1 + _DAT_11278e408,0);
  _objc_destroyWeak(param_1 + _DAT_11278e404);
  _objc_destroyWeak(param_1 + _DAT_11278e3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e3dc,0);
  return;
}



/* Entry: 10b2b9784; end: 10b2b97ef; -[SCHeaderTextView init] */

undefined1 * FUN_10b2b9784(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127062a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c26bbc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2b97f0; end: 10b2b9883; -[SCHeaderTextView layoutSubviews] */

void FUN_10b2b97f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1127062a0;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  dVar1 = 3.4028234663852886e+38;
  func_0x00010c23d5a0(param_3,0x47efffffe0000000,param_5);
  uVar2 = NEON_fminnm((param_4 - dVar1) * -0.5,0);
  func_0x00010c1822e0(0,uVar2,param_5);
  return;
}



/* Entry: 10b2b9884; end: 10b2b99bb; -[SCHeaderTextView setText:] */

void FUN_10b2b9884(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_1127062a0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_setText__1126625f0);
  puVar2 = (undefined8 *)0x0;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_opt_new();
    func_0x00010c26b7a0(param_1);
    func_0x00010c166c00(puVar2);
    uVar3 = param_1;
    func_0x00010bf0e540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    uStack_48 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(uVar4);
    func_0x00010bef6f40(uVar4);
    func_0x00010c16b720(param_1);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar1 = puVar2;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b2b99bc;
  puStack_88 = PTR_PTR_1127062a0;
  puStack_90 = puVar1;
  puStack_80 = puVar2;
  uStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_90,PTR_s_setAttributedText__1126387e8);
  func_0x00010c1cbe20(puVar1);
  return;
}



/* Entry: 10b2b99bc; end: 10b2b9a03; -[SCHeaderTextView setAttributedText:] */

void FUN_10b2b99bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setAttributedText__1126387e8);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 10b2b9a04; end: 10b2b9a4b; -[SCHeaderTextView setFont:] */

void FUN_10b2b9a04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setFont__112645340);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 10b2b9a4c; end: 10b2b9a5b; -[SCHeaderTextView showingPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2b9a4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e418);
}



/* Entry: 10b2b9a5c; end: 10b2b9a6b; -[SCHeaderTextView setShowingPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9a5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e418) = param_3;
  return;
}



/* Entry: 10b2b9a6c; end: 10b2b9ad3; +[SCKeyboardHelper isCurrentInputEmoji] */

undefined * FUN_10b2b9a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITextInputMode_1126cb8a0;
  func_0x00010bf5f020(PTR__OBJC_CLASS___UITextInputMode_1126cb8a0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c112f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c0720c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e540b8);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 10b2b9ad4; end: 10b2b9b3b; +[SCKeyboardHelper isCurrentInputDictation] */

undefined * FUN_10b2b9ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITextInputMode_1126cb8a0;
  func_0x00010bf5f020(PTR__OBJC_CLASS___UITextInputMode_1126cb8a0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c112f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c0720c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f62878);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 10b2b9b3c; end: 10b2b9b8f; +[SCKeyboardHelper keyboardHeightForDeviceWithQuickType:] */

undefined8 FUN_10b2b9b3c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf997a0();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b2b9b90; end: 10b2b9cd7; -[SCLabeledGrowingButton configureLabelWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11278e41c;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010be46b20(param_1);
    func_0x00010c013de0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar1 = param_1;
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2b9cd8; end: 10b2b9d27; -[SCLabeledGrowingButton dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9cd8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11278e41c));
  puStack_28 = PTR_PTR_1127062a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2b9d28; end: 10b2b9d77; -[SCLabeledGrowingButton removeFromSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9d28(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11278e41c));
  puStack_28 = PTR_PTR_1127062a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10b2b9d78; end: 10b2b9dcf; -[SCLabeledGrowingButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9d78(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be46b20(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11278e41c));
  return;
}



/* Entry: 10b2b9dd0; end: 10b2b9e27; -[SCLabeledGrowingButton setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9dd0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHidden__1126479f8);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11278e41c));
  return;
}



/* Entry: 10b2b9e28; end: 10b2b9e87; -[SCLabeledGrowingButton setAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9e28(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1127062a8;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setAlpha__112637810);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11278e41c));
  return;
}



/* Entry: 10b2b9e88; end: 10b2b9f0f; -[SCLabeledGrowingButton _labelFrame] */

double FUN_10b2b9e88(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010bf345e0();
  func_0x00010bf20c00(param_4);
  func_0x00010bf345e0(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  return param_1 - param_3 * 0.5;
}



/* Entry: 10b2b9f10; end: 10b2b9f1f; -[SCLabeledGrowingButton label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2b9f10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e41c);
}



/* Entry: 10b2b9f20; end: 10b2b9f33; -[SCLabeledGrowingButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2b9f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e41c,0);
  return;
}



/* Entry: 10b2b9f34; end: 10b2ba04f; -[SCLayoutAccessoryTableViewCell layoutSubviews] */

void FUN_10b2b9f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1127062b0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_5;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010beed360(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c7e0(lVar1);
      func_0x00010beed360(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(param_5);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 10b2ba050; end: 10b2ba06f; -[SCLayoutAccessoryTableViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba050(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2ba070; end: 10b2ba083; -[SCLayoutAccessoryTableViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba070(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e420,param_3);
  return;
}



/* Entry: 10b2ba084; end: 10b2ba093; -[SCLayoutAccessoryTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ba084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278e420);
  return;
}



/* Entry: 10b2ba094; end: 10b2ba0f7; -[SCLeftSwipableViewController viewWillAppear:] */

void FUN_10b2ba094(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2ba0f8; end: 10b2ba15b; -[SCLeftSwipableViewController viewDidAppear:] */

void FUN_10b2ba0f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127062b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b2ba15c; end: 10b2ba203; -[SCLeftSwipableViewController viewWillDisappear:] */

void FUN_10b2ba15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1127062b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 10b2ba204; end: 10b2ba417; -[SCLeftSwipableViewController viewDidLoad] */

void FUN_10b2ba204(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1127062b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c1ba300(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c08e9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08e9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c229fc0();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0xbff0000000000000,0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4014000000000000);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e19999a);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10b2ba418; end: 10b2ba4ff; -[SCLeftSwipableViewController viewDidLayoutSubviews] */

void FUN_10b2ba418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1127062b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = param_1;
  func_0x00010c229fc0();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010bf199c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10b2ba500; end: 10b2ba5d3; -[SCLeftSwipableViewController dealloc] */

void FUN_10b2ba500(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c08e9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c08e9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08e9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1ba300(param_1);
  }
  puStack_38 = PTR_PTR_1127062b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2ba5d4; end: 10b2ba5db; -[SCLeftSwipableViewController inValidView:] */

undefined8 FUN_10b2ba5d4(void)

{
  return 1;
}



/* Entry: 10b2ba5dc; end: 10b2ba5e3; -[SCLeftSwipableViewController disableLeftSwipe] */

undefined8 FUN_10b2ba5dc(void)

{
  return 0;
}



/* Entry: 10b2ba5e4; end: 10b2ba5e7; -[SCLeftSwipableViewController leftSwipePrepare] */

void FUN_10b2ba5e4(void)

{
  return;
}



/* Entry: 10b2ba5e8; end: 10b2ba61f; -[SCLeftSwipableViewController leftSwipeCancelled] */

void FUN_10b2ba5e8(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


