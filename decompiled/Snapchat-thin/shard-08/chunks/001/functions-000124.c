/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e1e470; end: 105e1e523; -[SCSendToEventHandler _onSendWithSelectedItems:previewText:] */

void FUN_105e1e470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2a4bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c25d0a0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b5c0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e1e524; end: 105e1e5ef; -[SCSendToEventHandler _onSearchWithKeyword:] */

void FUN_105e1e524(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c153e00();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      func_0x00010bea69c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2be78,0);
    }
    else {
      func_0x00010be7e540(param_1);
    }
  }
  else {
    lVar1 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c195460();
    _objc_release(lVar1);
    func_0x00010bea69c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2be98,param_3);
    func_0x00010bea2bc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e1e5f0; end: 105e1e667; -[SCSendToEventHandler _presentSearchPreType] */

void FUN_105e1e5f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153e00();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bea69c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCollectionViewToTop_112586498);
    return;
  }
  return;
}



/* Entry: 105e1e668; end: 105e1e847; -[SCSendToEventHandler _onTapConfirmationBarWithSelectedItems:] */

void FUN_105e1e668(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  _objc_retain(param_3);
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c195460();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  uVar8 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        func_0x00010c122a80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c0d5140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar8);
        _objc_release(uVar8);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      uVar8 = 0x10;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf446e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c212f20();
  _objc_release(lVar1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e2beb8;
  puVar7 = puVar4;
  func_0x00010bea69c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2beb8);
  iVar6 = (int)puVar7;
  func_0x00010bea2bc0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  _objc_retain(ppuVar5);
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  if (iVar6 == 0) {
    func_0x00010bf7bb00();
  }
  else {
    func_0x00010bf7bb40();
  }
  _objc_release(uVar8);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e1e848; end: 105e1e8bf; -[SCSendToEventHandler _onStartNewGroupWithSelectedItems:openGroupEdit:source:] */

void FUN_105e1e848(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_4 == 0) {
    func_0x00010bf7bb00();
  }
  else {
    func_0x00010bf7bb40();
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1e8c0; end: 105e1eab7; -[SCSendToEventHandler _performScrollToTopicSearchSection] */

undefined * FUN_105e1e8c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar3);
        }
        puVar13 = *(undefined **)(lStack_128 + lVar16 * 8);
        uVar4 = param_1 + 0x88;
        _objc_loadWeakRetained();
        uVar5 = uVar4;
        puVar12 = (undefined8 *)puVar13;
        func_0x00010bf33b60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar6 = PTR_PTR_1126c50a0;
        _objc_opt_class(PTR_PTR_1126c50a0);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar4 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar5);
        if (uVar4 != 0) {
          _objc_retain(puVar13);
          _objc_release(uVar5);
          _objc_release(lVar3);
          if ((puVar13 == (undefined *)0x0) ||
             (puVar14 = puVar13, func_0x00010c1554e0(),
             puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990, puVar14 == (undefined *)0x0))
          goto LAB_105e1ea6c;
          func_0x00010c1554e0(puVar13);
          func_0x00010bfed020();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = (undefined8 *)puVar6;
          func_0x00010be9bfc0(param_1);
          _objc_release(puVar6);
          goto LAB_105e1ea74;
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar3;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  puVar13 = (undefined *)0x0;
LAB_105e1ea6c:
  func_0x00010bea2bc0(param_1);
LAB_105e1ea74:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  puVar13 = puVar13 + 0x88;
  _objc_loadWeakRetained();
  puVar6 = puVar13;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  puVar14 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar13);
  puVar13 = puVar6;
  if (((ulong)puVar14 & 1) == 0) {
    puVar13 = (undefined *)0x0;
  }
  _objc_retain(puVar13);
  _objc_release(puVar6);
  if (puVar13 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b52c0;
    _objc_opt_class(PTR_PTR_1126b52c0);
    puVar8 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar14);
    puVar1 = puVar6;
    if (((ulong)puVar8 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar6);
    if (puVar1 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      func_0x00010bfecc60();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b5678;
      _objc_opt_class(PTR_PTR_1126b5678);
      puVar9 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar14);
      puVar8 = puVar6;
      if (((ulong)puVar9 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar6);
      if (puVar8 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        func_0x00010c15a7a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR_PTR_1126b3568;
        _objc_opt_class(PTR_PTR_1126b3568);
        puVar10 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar14);
        puVar9 = puVar6;
        if (((ulong)puVar10 & 1) == 0) {
          puVar9 = (undefined *)0x0;
        }
        _objc_retain(puVar9);
        _objc_release(puVar6);
        if (puVar9 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          func_0x00010c122a80(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar6;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar11;
          func_0x00010c0720c0();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar6);
        }
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar13);
  return puVar14;
}



/* Entry: 105e1eab8; end: 105e1ecd7; -[SCSendToEventHandler _lastSnapCellIsAtIndexPath:] */

ulong FUN_105e1eab8(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  _objc_retain(param_3);
  uVar4 = param_1 + 0x88;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar9 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar4 = uVar5;
  if ((uVar9 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if (uVar4 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b52c0;
    _objc_opt_class(PTR_PTR_1126b52c0);
    uVar9 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar1 = uVar5;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x00010bfecc60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b5678;
      _objc_opt_class(PTR_PTR_1126b5678);
      uVar9 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar2 = uVar5;
      if ((uVar9 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar5);
      if (uVar2 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x00010c15a7a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b3568;
        _objc_opt_class(PTR_PTR_1126b3568);
        uVar9 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar6);
        uVar3 = uVar5;
        if ((uVar9 & 1) == 0) {
          uVar3 = 0;
        }
        _objc_retain(uVar3);
        _objc_release(uVar5);
        if (uVar3 == 0) {
          uVar9 = 0;
        }
        else {
          func_0x00010c122a80(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0720c0();
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar5);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar4);
  return uVar9;
}



/* Entry: 105e1ecd8; end: 105e1ee0b; -[SCSendToEventHandler _lastSnapSectionIsVisible] */

ulong FUN_105e1ecd8(undefined8 param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar4 = param_3 + 0x88;
  _objc_loadWeakRetained();
  uVar1 = uVar4;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        puVar5 = *(undefined1 **)(lStack_118 + uVar7 * 8);
        uVar2 = param_3;
        puVar3 = (undefined8 *)puVar5;
        func_0x00010be470c0();
        if ((uVar2 & 1) != 0) {
          uVar4 = (ulong)(puVar5 != (undefined1 *)0x0);
          goto LAB_105e1edc8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      uVar4 = uVar1;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  uVar4 = 0;
LAB_105e1edc8:
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(puVar3);
    uVar4 = uVar1 + 0x88;
    _objc_loadWeakRetained(uVar4);
    uVar7 = uVar4;
    func_0x00010c08c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar4);
    func_0x00010bfb68e0(uVar7);
    lVar6 = uVar1 + 0x88;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf4c7c0();
    _objc_release(lVar6);
    lVar6 = uVar1 + 0x88;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c1822e0(0,param_2 - dVar8);
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return uVar7;
  }
  return uVar1;
}



/* Entry: 105e1ee0c; end: 105e1eec7; -[SCSendToEventHandler _scrollToCellAtIndexPath:] */

void FUN_105e1ee0c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  if (param_5 != 0) {
    _objc_retain(param_5);
    lVar1 = param_3 + 0x88;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(lVar1);
    func_0x00010bfb68e0(lVar2);
    lVar1 = param_3 + 0x88;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4c7c0();
    _objc_release(lVar1);
    param_3 = param_3 + 0x88;
    _objc_loadWeakRetained(param_3);
    func_0x00010c1822e0(0,param_2 - param_1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105e1eec8; end: 105e1eeff; -[SCSendToEventHandler _onPresentTopicSearch] */

void FUN_105e1eec8(long param_1)

{
  func_0x00010be72720();
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1ef00; end: 105e1ef2f; -[SCSendToEventHandler _onDismissTopicSearch] */

void FUN_105e1ef00(long param_1)

{
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1ef30; end: 105e1ef6f; -[SCSendToEventHandler _onSelectListWithListId:listName:isContextual:subtext:] */

void FUN_105e1ef30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010bea54c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2bed8,param_3,
                      param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bea2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCollectionViewToTop_112586498);
  return;
}



/* Entry: 105e1ef70; end: 105e1ef9b; -[SCSendToEventHandler _onSelectContactRecipient] */

void FUN_105e1ef70(long param_1)

{
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1ef9c; end: 105e1f02b; -[SCSendToEventHandler _onClearSearchTextField] */

void FUN_105e1ef9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153ce0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bea69c0(param_1);
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    func_0x00010c212f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be93a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSearchQueryAndSendToView_112582820);
  return;
}



/* Entry: 105e1f02c; end: 105e1f0ef; -[SCSendToEventHandler _resetSearchQueryAndSendToView] */

void FUN_105e1f02c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153e00();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c154280();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_105e1f0b0;
  }
  else {
    _objc_release(uVar1);
  }
  lVar4 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c13a0e0();
  _objc_release(lVar4);
LAB_105e1f0b0:
  func_0x00010bea69c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2be78,0);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c212f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1f0f0; end: 105e1f1bf; -[SCSendToEventHandler _onSelectSponsorWithBusinessId:displayName:status:] */

void FUN_105e1f0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c50a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03ae60();
  _objc_release(param_3);
  func_0x00010c207f00(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c50b0;
  func_0x00010bfca940(PTR_PTR_1126c50b0,param_2,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f8fc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e1f1c0; end: 105e1f20b; -[SCSendToEventHandler _onClearSponsorSelection] */

void FUN_105e1f1c0(long param_1,undefined8 param_2)

{
  func_0x00010c207f00(*(undefined8 *)(param_1 + 0x30),param_2,0);
  func_0x00010c207f40(*(undefined8 *)(param_1 + 0x30),param_2,0);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f8fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1f20c; end: 105e1f277; -[SCSendToEventHandler _onSetScheduleWithDate:] */

void FUN_105e1f20c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1f6760(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    param_1 = param_1 + 0x98;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10e080(uVar1,param_2,param_3,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e1f278; end: 105e1f2a3; -[SCSendToEventHandler _tapFloatingShareButton] */

void FUN_105e1f278(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1f2a4; end: 105e1f32f; -[SCSendToEventHandler _actionSheetAvailabilityDidChangeWithAvailableTypes:] */

void FUN_105e1f2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10e8c0(uVar2,param_2,param_3,lVar1);
  _objc_release(lVar1);
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1c9020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e1f330; end: 105e1f3c7; -[SCSendToEventHandler _setQueryWithQuerySource:queryText:] */

void FUN_105e1f330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1158;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03c440();
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e6360();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e1f3c8; end: 105e1f4cb; -[SCSendToEventHandler _setListsQueryWithQuerySource:listId:listName:isContextual:subtext:] */

void FUN_105e1f3c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b53c8;
  ppuVar1 = param_5;
  if ((int)param_6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c09a360(puVar2,param_2,param_4,param_6,ppuVar1,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  _objc_release(ppuVar1);
  _objc_release(param_3);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e6360();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e1f4cc; end: 105e1f563; -[SCSendToEventHandler _setCollectionViewToTop] */

void FUN_105e1f4cc(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_5 + 0xa0);
  func_0x00010bf1fee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  param_5 = param_5 + 0x88;
  _objc_loadWeakRetained(param_5);
  _objc_retain();
  func_0x00010bf4c7c0(param_5);
  dVar2 = -param_1;
  if (param_4 <= 0.001) {
    dVar2 = -0.5 - param_1;
  }
  func_0x00010c182300(0,dVar2,param_5,param_6,0);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e1f564; end: 105e1f57b; -[SCSendToEventHandler queryResultController] */

void FUN_105e1f564(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e1f57c; end: 105e1f587; -[SCSendToEventHandler setQueryResultController:] */

void FUN_105e1f57c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105e1f588; end: 105e1f59f; -[SCSendToEventHandler searchSelectionHighlighter] */

void FUN_105e1f588(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e1f5a0; end: 105e1f5ab; -[SCSendToEventHandler setSearchSelectionHighlighter:] */

void FUN_105e1f5a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 105e1f5ac; end: 105e1f5c3; -[SCSendToEventHandler collectionView] */

void FUN_105e1f5ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e1f5c4; end: 105e1f5cf; -[SCSendToEventHandler setCollectionView:] */

void FUN_105e1f5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 105e1f5d0; end: 105e1f5e7; -[SCSendToEventHandler searchField] */

void FUN_105e1f5d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e1f5e8; end: 105e1f5f3; -[SCSendToEventHandler setSearchField:] */

void FUN_105e1f5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 105e1f5f4; end: 105e1f60b; -[SCSendToEventHandler selectBar] */

void FUN_105e1f5f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e1f60c; end: 105e1f617; -[SCSendToEventHandler setSelectBar:] */

void FUN_105e1f60c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 105e1f618; end: 105e1f61f; -[SCSendToEventHandler headerItem] */

undefined8 FUN_105e1f618(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105e1f620; end: 105e1f64f; -[SCSendToEventHandler setHeaderItem:] */

void FUN_105e1f620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e1f650; end: 105e1f657; -[SCSendToEventHandler uiContainer] */

undefined8 FUN_105e1f650(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105e1f658; end: 105e1f687; -[SCSendToEventHandler setUiContainer:] */

void FUN_105e1f658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e1f688; end: 105e1f783; -[SCSendToEventHandler .cxx_destruct] */

void FUN_105e1f688(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105e1f784; end: 105e1f827; -[SCSendToTextFieldHandler initWithSendToTracker:sendToUIConfiguration:] */

undefined1 *
FUN_105e1f784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e1f828; end: 105e1f897; -[SCSendToTextFieldHandler textFieldDidChange:] */

void FUN_105e1f828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154940(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e1f898; end: 105e1f8e7; -[SCSendToTextFieldHandler textFieldDidEndEditing:] */

void FUN_105e1f898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c13a0e0(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010bf84480(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e1f8e8; end: 105e1f97b; -[SCSendToTextFieldHandler textFieldShouldClear:] */

undefined8 FUN_105e1f8e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c153e00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR_PTR_1126b50d0;
  if ((int)uVar2 == 0) {
    func_0x00010c154940(PTR_PTR_1126b50d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3c000();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf8de60(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  return 1;
}



/* Entry: 105e1f97c; end: 105e1f997; -[SCSendToTextFieldHandler textFieldShouldReturn:] */

undefined8 FUN_105e1f97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 1;
}



/* Entry: 105e1f998; end: 105e1f9e3; -[SCSendToTextFieldHandler textFieldShouldBeginEditing:] */

undefined8 FUN_105e1f998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b50d0;
  func_0x00010c10e0a0(PTR_PTR_1126b50d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 105e1f9e4; end: 105e1fa13; -[SCSendToTextFieldHandler .cxx_destruct] */

void FUN_105e1f9e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e1fa14; end: 105e1fd4f; -[SCSendToSectionExtensionsProvider initWithSectionExtensions:] */

undefined8 * FUN_105e1fa14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_178 = PTR_PTR_1126ed380;
  puVar3 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar7 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar15 = *(long *)(lVar13 * 8);
        lVar8 = lVar15;
        func_0x00010c155fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 != 0) {
          lVar9 = lVar15;
          func_0x00010c155fe0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar9;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar9);
              }
              if (*(long *)(lVar14 * 8) != 0) {
                lVar10 = lVar15;
                func_0x00010c155900(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
                _objc_release(lVar10);
                lVar10 = lVar15;
                func_0x00010c155b40(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar5);
                _objc_release(lVar10);
                lVar10 = lVar15;
                func_0x00010c1562e0(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar6);
                _objc_release(lVar10);
              }
              lVar14 = lVar14 + 1;
            } while (lVar8 != lVar14);
            lVar8 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar7);
      lVar7 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar11 = puVar4;
    func_0x00010bf51e00();
    uVar12 = puVar3[1];
    puVar3[1] = puVar11;
    _objc_release(uVar12);
    puVar11 = puVar5;
    func_0x00010bf51e00();
    uVar12 = puVar3[2];
    puVar3[2] = puVar11;
    _objc_release(uVar12);
    puVar11 = puVar6;
    func_0x00010bf51e00();
    uVar12 = puVar3[3];
    puVar3[3] = puVar11;
    _objc_release(uVar12);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined8 **)(param_3 + 8);
}



/* Entry: 105e1fd50; end: 105e1fd57; -[SCSendToSectionExtensionsProvider sectionCreators] */

undefined8 FUN_105e1fd50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e1fd58; end: 105e1fd5f; -[SCSendToSectionExtensionsProvider sectionDescriptors] */

undefined8 FUN_105e1fd58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e1fd60; end: 105e1fd67; -[SCSendToSectionExtensionsProvider sectionLoggingParsers] */

undefined8 FUN_105e1fd60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e1fd68; end: 105e1fda3; -[SCSendToSectionExtensionsProvider .cxx_destruct] */

void FUN_105e1fd68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e1fda4; end: 105e1fe37; -[SCSendToCOFSectionRanker initWithCircumstanceEngine:] */

undefined1 * FUN_105e1fda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be1bb60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e1fe38; end: 105e1ff1b; -[SCSendToCOFSectionRanker rankSections:] */

void FUN_105e1fe38(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e1ff1c;
    puStack_40 = &UNK_1108eb540;
    puVar3 = param_3;
    lStack_38 = lVar1;
    func_0x00010c246ca0(param_3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e1ff1c; end: 105e1ffdf;  */

undefined * FUN_105e1ff1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfecde0(uVar4);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfecde0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 105e1ffe0; end: 105e201db; -[SCSendToCOFSectionRanker rankFoldedSections] */

void FUN_105e1ffe0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105e200c0;
  puStack_40 = &UNK_1108eb590;
  puVar1 = PTR_PTR_1126ae720;
  uStack_38 = uVar4;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    param_1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    _objc_opt_new(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  }
  else {
    func_0x00010c11f620(param_1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e201dc; end: 105e20263; -[SCSendToCOFSectionRanker _generateSectionOrder] */

void FUN_105e201dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e20264;
  puStack_30 = &UNK_1108eb590;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e20264; end: 105e2037f;  */

void FUN_105e20264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e2bb78,
                      &PTR____CFConstantStringClassReference_110e2bb98,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e20380; end: 105e203af; -[SCSendToCOFSectionRanker .cxx_destruct] */

void FUN_105e20380(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e203b0; end: 105e2046f; -[SCSendToSectionCoordinator initWithConfiguration:expansionModelProvider:] */

undefined1 *
FUN_105e203b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed390;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e20470; end: 105e20477; -[SCSendToSectionCoordinator canPerformQuery:] */

undefined8 FUN_105e20470(void)

{
  return 1;
}



/* Entry: 105e20478; end: 105e205bb; -[SCSendToSectionCoordinator resultsForQuery:updatingBlock:] */

void FUN_105e20478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9c120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e205bc; end: 105e2060f;  */

void FUN_105e205bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e20610; end: 105e2070f; -[SCSendToSectionCoordinator _resultsForQuery:sectionIdentifierToExpansionModels:updatingBlock:] */

void FUN_105e20610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be9cd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b16f0;
  _objc_alloc();
  func_0x00010c042a40();
  uVar4 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar4);
  }
  (**(code **)(param_5 + 0x10))(param_5,puVar2,0);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e20710; end: 105e20a4f; -[SCSendToSectionCoordinator _sectionDescriptorsForQuery:sectionIdentifierToExpansionModels:] */

undefined * FUN_105e20710(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(param_1 + 8);
  lVar2 = param_3;
  func_0x00010c11da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c156000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_retain(lVar13);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar13);
      }
      lVar14 = *(long *)(lVar12 * 8);
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x00010c155be0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar5;
      func_0x00010c155b80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c155ec0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          func_0x000106c9c838();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf32a80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf4b900();
        _objc_release(uVar7);
        lVar9 = param_3;
        func_0x00010c11da20(param_3);
        _objc_retainAutoreleasedReturnValue();
        if ((int)uVar8 == 0) {
          func_0x000106c9c378(lVar14,lVar9,uVar6,lVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000106c9c6c0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar9);
        _objc_release(lVar4);
        _objc_release(uVar6);
        lVar4 = lVar14;
      }
      func_0x00010befa120(puVar1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar12 = lVar12 + 1;
    } while (lVar2 != lVar12);
    lVar2 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  puVar10 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar13);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 0x28);
}



/* Entry: 105e20a50; end: 105e20a57; -[SCSendToSectionCoordinator currentQuery] */

undefined8 FUN_105e20a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e20a58; end: 105e20a5f; -[SCSendToSectionCoordinator setCurrentQuery:] */

void FUN_105e20a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e20a60; end: 105e20a67; -[SCSendToSectionCoordinator isLoading] */

undefined1 FUN_105e20a60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 105e20a68; end: 105e20a6f; -[SCSendToSectionCoordinator sectionExtensionsProvider] */

undefined8 FUN_105e20a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e20a70; end: 105e20a9f; -[SCSendToSectionCoordinator setSectionExtensionsProvider:] */

void FUN_105e20a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e20aa0; end: 105e20aa7; -[SCSendToSectionCoordinator nonQueryResult] */

undefined8 FUN_105e20aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e20aa8; end: 105e20b07; -[SCSendToSectionCoordinator .cxx_destruct] */

void FUN_105e20aa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e20b08; end: 105e20c2b; -[SCSendToRecentSectionCreator initWithSectionIdentifiers:lastSnapSectionCreator:recipientSectionCreator:sendToExperimentConfiguration:renderingTracker:] */

undefined1 *
FUN_105e20b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed398;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e20c2c; end: 105e20ea7; -[SCSendToRecentSectionCreator sectionForDescriptor:] */

void FUN_105e20c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar11 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b1260;
    _objc_alloc(PTR_PTR_1126b1260);
    uVar3 = param_3;
    func_0x00010c27dd80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86240(param_3);
    uVar10 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055bc0(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar3);
    uVar4 = *(ulong *)(param_1 + 0x10);
    func_0x00010c155ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_1 + 0x18);
    func_0x00010c155ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    if (uVar4 == 0) {
      _objc_retain(uVar5);
    }
    else {
      puVar6 = PTR_PTR_1126b1108;
      _objc_opt_class(PTR_PTR_1126b1108);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      if ((uVar7 & 1) == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b1108;
      _objc_retain(uVar4);
      _objc_opt_class(puVar6);
      uVar9 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar7 = uVar4;
      if ((uVar9 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar4);
      uVar9 = uVar7;
      func_0x00010c155a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar11;
      func_0x00010c155a60();
      _objc_retainAutoreleasedReturnValue();
      if (uVar9 != 0) {
        func_0x00010befa120(puVar8);
      }
      if (uVar7 != 0) {
        func_0x00010befa120(puVar8);
      }
      puVar6 = PTR_PTR_1126c50b8;
      _objc_alloc(PTR_PTR_1126c50b8);
      func_0x00010c042f40();
      func_0x00010c1f9240(uVar11);
      _objc_release(puVar6);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf79c60(uVar10);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar9);
      _objc_release(puVar8);
    }
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 105e20ea8; end: 105e20efb; -[SCSendToRecentSectionCreator .cxx_destruct] */

void FUN_105e20ea8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e20efc; end: 105e216ef; -[SCSendToSectionCreator initWithConfiguration:sendToSectionDataSource:sendToViewModelSource:storyConfiguration:placeTagCarouselViewProvider:placeTagsTracker:sendToTracker:actionHandler:imageDownloader:lastInteractionDataService:customStoriesOnboardingManager:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:friendmojiPresenter:messagingExperimentService:selectionStoryObservableRepository:renderingTracker:subscriptionInfoProvider:streakProvider:showSendToTray:avatarFactory:crossPostingSelectionTracker:] */

undefined8 *
FUN_105e20efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_25);
  _objc_retain(param_26);
  puStack_70 = PTR_PTR_1126ed3a0;
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
    _objc_retain(param_10);
    uVar2 = puVar1[3];
    puVar1[3] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[6];
    puVar1[6] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[8];
    puVar1[8] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[7];
    puVar1[7] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x14) = param_23;
    puVar3 = PTR_PTR_1126c50c0;
    _objc_alloc_init();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c15ab20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f3ded4();
    func_0x000108f3dec0();
    puVar3 = PTR_PTR_1126c25b0;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c244660(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_9;
    func_0x00010c15ab20(param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c244640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0434a0();
    uVar6 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c26f0;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c15a6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043440();
    uVar7 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c50c8;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c15aae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf32a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043360();
    uVar8 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c50d0;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c15aae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf32a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043360();
    uVar8 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c2728;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c15a940(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043420();
    uVar7 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126c50d8;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c122580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0433a0();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c50e0;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c122580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0433c0();
    uVar7 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_26);
  _objc_release(param_25);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e216f0; end: 105e2194f; -[SCSendToSectionCreator sectionForDescriptor:] */

void FUN_105e216f0(long param_1,undefined8 param_2,undefined **param_3)

{
  int iVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f12a58,param_2,ppuVar2);
  if ((uVar3 & 1) == 0) {
    iVar1 = 0x10f12a78;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f12a78,param_2,ppuVar2);
    if (iVar1 != 0) goto LAB_105e21750;
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c244660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b900();
    _objc_release(uVar5);
    if ((int)uVar6 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c15a6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf4b900();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c15a940();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf4b900();
        _objc_release(uVar5);
        if ((int)uVar6 == 0) {
          iVar1 = 0x10f12dd8;
          func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f12dd8,param_2,ppuVar2);
          if (iVar1 == 0) {
            iVar1 = 0x10f12a18;
            func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f12a18,param_2,ppuVar2);
            if (iVar1 == 0) {
              iVar1 = 0x10f12ad8;
              func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f12ad8,param_2,ppuVar2);
              if (iVar1 != 0) goto LAB_105e2183c;
              uVar5 = *(undefined8 *)(param_1 + 8);
              func_0x00010c15aae0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010bf4b900();
              _objc_release(uVar5);
              if ((int)uVar6 == 0) {
                _objc_retain(ppuVar2);
                ppuVar7 = ppuVar2;
                func_0x00010bfda7c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110f12db8
                                   );
                ppuVar10 = ppuVar2;
                if ((int)ppuVar7 != 0) {
                  ppuVar10 = &PTR____CFConstantStringClassReference_110f12d98;
                  _objc_retain(&PTR____CFConstantStringClassReference_110f12d98);
                  _objc_release(ppuVar2);
                }
                lVar4 = *(long *)(param_1 + 0xa8);
                func_0x00010c155960();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar4);
                if (lVar8 == 0) {
                  lVar4 = 0;
                }
                else {
                  lVar9 = lVar8;
                  func_0x00010c155940(lVar8,param_2,*(undefined8 *)(param_1 + 0x18),
                                      *(undefined8 *)(param_1 + 0x20),
                                      *(undefined8 *)(param_1 + 0xb0));
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar9;
                  func_0x00010c155ce0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                }
                _objc_release(lVar8);
                _objc_release(ppuVar10);
                goto LAB_105e21768;
              }
            }
            lVar4 = *(long *)(param_1 + 0x60);
          }
          else {
LAB_105e2183c:
            lVar4 = *(long *)(param_1 + 0x68);
          }
        }
        else {
          lVar4 = *(long *)(param_1 + 0x70);
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x58);
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x50);
    }
  }
  else {
LAB_105e21750:
    lVar4 = *(long *)(param_1 + 0x78);
  }
  func_0x00010c155ce0(lVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_105e21768:
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105e21950; end: 105e21957; -[SCSendToSectionCreator sectionExtensionsProvider] */

undefined8 FUN_105e21950(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105e21958; end: 105e21987; -[SCSendToSectionCreator setSectionExtensionsProvider:] */

void FUN_105e21958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e21988; end: 105e2198f; -[SCSendToSectionCreator uiContainer] */

undefined8 FUN_105e21988(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105e21990; end: 105e219bf; -[SCSendToSectionCreator setUiContainer:] */

void FUN_105e21990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e219c0; end: 105e21ad3; -[SCSendToSectionCreator .cxx_destruct] */

void FUN_105e219c0(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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



/* Entry: 105e21ad4; end: 105e22717; -[SCSendToSectionDataSource initWithConfiguration:snapchatterObservableRepository:searchServiceClientFactory:searchClient:sortableSnapchatterObservableRepository:selectionGroupObservableRepository:selectionRecipientObservableRepository:selectionStoryObservableRepository:replyRecipientObservableRepository:lastSnapDataCoordinator:storiesDataCoordinator:mapPersonLocationsProvider:selectionTracker:sendToSnapchatterObservableRepository:userInitiatedPerformer:circumstanceEngine:sendToExperimentConfiguration:recentlyActiveService:snapchattersDataFetcher:topGroupsDataSource:snappableDataSource:sendToLogger:sendToAttribution:contextualSignalsObservable:] */

undefined8 *
FUN_105e21ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain();
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  puStack_80 = PTR_PTR_1126ed3a8;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[2];
    puVar2[2] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[3];
    puVar2[3] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[6];
    puVar2[6] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[7];
    puVar2[7] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[8];
    puVar2[8] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[9];
    puVar2[9] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[10];
    puVar2[10] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[4];
    puVar2[4] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[5];
    puVar2[5] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x12];
    puVar2[0x12] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x13];
    puVar2[0x13] = param_23;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x15];
    puVar2[0x15] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    uVar3 = param_17;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[0x16];
    puVar2[0x16] = uVar3;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_6;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[3];
    func_0x000108f3df4c();
    *(undefined1 *)(puVar2 + 0x18) = uVar1;
    uVar3 = puVar2[3];
    func_0x000108f3de20();
    puVar2[0x19] = uVar3;
    _objc_storeWeak(puVar2 + 0x28,param_24);
    _objc_retain(param_25);
    uVar3 = puVar2[0x29];
    puVar2[0x29] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = param_26;
    _objc_release(uVar3);
    _objc_initWeak(auStack_90,puVar2);
    puVar5 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105e22718;
    puStack_a0 = &UNK_110854530;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x105e22758;
    puStack_c8 = &UNK_110854530;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x105e22798;
    puStack_f0 = &UNK_110854530;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_138 = puVar4;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x105e227d8;
    puStack_120 = &UNK_110885178;
    _objc_copyWeak(auStack_110,auStack_90);
    _objc_retain(param_3);
    uStack_118 = param_3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_160 = puVar4;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x105e22820;
    puStack_148 = &UNK_110854530;
    _objc_copyWeak(auStack_140,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_188 = puVar4;
    uStack_180 = 0xc2000000;
    uStack_178 = 0x105e22860;
    puStack_170 = &UNK_110854530;
    _objc_copyWeak(auStack_168,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x20];
    puVar2[0x20] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_1b0 = puVar4;
    uStack_1a8 = 0xc2000000;
    uStack_1a0 = 0x105e228a0;
    puStack_198 = &UNK_110854530;
    _objc_copyWeak(auStack_190,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x21];
    puVar2[0x21] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_1d8 = puVar4;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x105e228e0;
    puStack_1c0 = &UNK_110854530;
    _objc_copyWeak(auStack_1b8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x22];
    puVar2[0x22] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_200 = puVar4;
    uStack_1f8 = 0xc2000000;
    uStack_1f0 = 0x105e22920;
    puStack_1e8 = &UNK_110854530;
    _objc_copyWeak(auStack_1e0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x23];
    puVar2[0x23] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_228 = puVar4;
    uStack_220 = 0xc2000000;
    uStack_218 = 0x105e22958;
    puStack_210 = &UNK_110854530;
    _objc_copyWeak(auStack_208,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x24];
    puVar2[0x24] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_258 = puVar4;
    uStack_250 = 0xc2000000;
    uStack_248 = 0x105e22998;
    puStack_240 = &UNK_110885178;
    _objc_copyWeak(auStack_230,auStack_90);
    _objc_retain(param_3);
    uStack_238 = param_3;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x25];
    puVar2[0x25] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_280 = puVar4;
    uStack_278 = 0xc2000000;
    uStack_270 = 0x105e229e0;
    puStack_268 = &UNK_110854530;
    _objc_copyWeak(auStack_260,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x26];
    puVar2[0x26] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_2a8 = puVar4;
    uStack_2a0 = 0xc2000000;
    uStack_298 = 0x105e22a20;
    puStack_290 = &UNK_110854530;
    _objc_copyWeak(auStack_288,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x27];
    puVar2[0x27] = puVar5;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_2d0 = puVar4;
    uStack_2c8 = 0xc2000000;
    uStack_2c0 = 0x105e22a60;
    puStack_2b8 = &UNK_110854530;
    _objc_copyWeak(auStack_2b0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = puVar5;
    _objc_release(uVar3);
    if (puVar2[0x19] != 0) {
      uVar3 = param_21;
      func_0x00010c269d40(param_21);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puVar2[0x17];
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_2d8,auStack_90);
      func_0x00010c0d42a0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_2d8);
    }
    _objc_destroyWeak(auStack_2b0);
    _objc_destroyWeak(auStack_288);
    _objc_destroyWeak(auStack_260);
    _objc_release(uStack_238);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(auStack_1e0);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_140);
    _objc_release(uStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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
  return puVar2;
}



/* Entry: 105e22718; end: 105e22a9f;  */

void FUN_105e22718(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd4040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e22aa0; end: 105e22b07;  */

void FUN_105e22aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86fa0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e22b08; end: 105e22bc7; -[SCSendToSectionDataSource sortableSnapchatterObservableForSectionIdentifier:query:] */

void FUN_105e22b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12ab8);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110f12ab8);
    if ((int)uVar1 == 0) {
      param_1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2713c0(uVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebe2c0(param_1,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
  }
  else {
    param_1 = *(long *)(param_1 + 0x100);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e22bc8; end: 105e22d63; -[SCSendToSectionDataSource selectionGroupObservableForSectionIdentifier:query:selectionTracker:] */

void FUN_105e22bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be431e0();
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        uVar2 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) {
          lVar3 = 0;
          goto LAB_105e22d0c;
        }
        lVar3 = *(long *)(param_1 + 0x120);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x118);
      }
      goto LAB_105e22c18;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c0ecca0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x000108425d60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c15a640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if ((int)lVar1 != 0) {
      func_0x00010bde20e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = param_1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x110);
LAB_105e22c18:
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar1 == 0) goto LAB_105e22d0c;
    func_0x00010bde20e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    lVar3 = param_1;
  }
  _objc_release(lVar5);
LAB_105e22d0c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105e22d64; end: 105e22f5b; -[SCSendToSectionDataSource selectionSnapchatterObservableForSectionIdentifier:query:includeStoriesSummaryInfo:includeLocation:selectionTracker:] */

void FUN_105e22d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be431e0(param_1,param_2,param_3);
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12cb8);
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110f12bb8);
      lVar4 = param_1;
      if ((int)uVar2 == 0) {
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b38);
        if ((int)uVar2 == 0) {
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12c98);
          if ((int)uVar2 != 0) {
            lVar4 = *(long *)(param_1 + 0xf8);
            goto LAB_105e22e34;
          }
          uVar2 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f129f8);
          if ((int)uVar2 == 0) {
            param_1 = 0;
            goto LAB_105e22ec0;
          }
          lVar3 = *(long *)(param_1 + 0x68);
          func_0x00010c269d40(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bfb1c80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
        }
        else {
          func_0x00010be9c4e0(param_1,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010be9de80(param_1,param_2,param_7);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0xf0);
LAB_105e22e34:
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    param_5 = 0;
    param_6 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xd8);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  func_0x00010be9e400(param_1,param_2,lVar4,param_5,param_6,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
LAB_105e22ec0:
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e22f5c; end: 105e23143;  */

void FUN_105e22f5c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_105e23144;
  uStack_108 = 0x105e23154;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar2;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c0c0060(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  uVar4 = puStack_120[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(puStack_100);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  lVar3 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 105e23144; end: 105e2316f;  */

void FUN_105e23144(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105e23170; end: 105e2335f; -[SCSendToSectionDataSource selectionRecipientObservableForSectionIdentifier:query:selectionTracker:] */

void FUN_105e23170(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be431e0(param_1,param_2,param_3);
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a58);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a78),
     (int)uVar3 == 0)) {
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12af8);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b18);
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12c78);
        if ((int)uVar3 == 0) {
          lVar4 = 0;
          goto LAB_105e23330;
        }
        lVar4 = *(long *)(param_1 + 0xe0);
        func_0x00010c269d40(lVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar4 = param_1;
        func_0x00010bed1420(param_1,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c1541e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    if ((int)lVar1 == 0) goto LAB_105e23330;
    func_0x00010bde2100(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x128);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    if ((int)lVar1 != 0) {
      lVar4 = param_1;
      func_0x00010bde2100(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x000108f3e21c();
    if ((uVar3 & 1) != 0) goto LAB_105e23330;
    func_0x00010becd4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_1;
  }
  _objc_release(lVar4);
  lVar4 = lVar1;
LAB_105e23330:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105e23360; end: 105e23447;  */

void FUN_105e23360(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  uVar2 = param_3;
  if (lVar1 == 0) {
    _objc_retain(param_3);
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_2;
    func_0x000100817178(param_2,&PTR___NSConcreteGlobalBlock_1108ebde0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e27f0c;
    puStack_40 = &UNK_1108ebe60;
    lStack_38 = lVar1;
    _objc_retain();
    func_0x0001006372a4(param_3,&puStack_58);
    _objc_release(param_3);
    _objc_release(lStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e23448; end: 105e236a3; -[SCSendToSectionDataSource foldedSectionRecipientObservableForSectionIdentifier:query:selectionTracker:] */

void FUN_105e23448(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_148 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_f8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c156420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11f5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(lVar3);
  puVar16 = &uStack_140;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  puVar6 = (undefined8 *)0x0;
  if (lVar2 != 0) {
    unaff_x28 = *plStack_130;
    do {
      param_4 = 0;
      do {
        if (*plStack_130 != unaff_x28) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x26 = *(undefined8 **)(lStack_138 + param_4 * 8);
        unaff_x27 = auStack_f8;
        _objc_loadWeakRetained();
        unaff_x25 = unaff_x27;
        func_0x00010be18540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x27);
        lVar4 = param_3;
        func_0x00010c0720c0();
        if ((int)lVar4 != 0) {
          unaff_x26 = auStack_f8;
          _objc_loadWeakRetained();
          puVar6 = unaff_x26;
          puVar16 = unaff_x25;
          func_0x00010bdf8ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x26);
          goto LAB_105e235f8;
        }
        if (unaff_x25 != (undefined8 *)0x0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(unaff_x25);
        param_4 = param_4 + 1;
      } while (lVar2 != param_4);
      puVar16 = &uStack_140;
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar6 = (undefined8 *)0x0;
  }
LAB_105e235f8:
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_f8);
  _objc_release(param_5);
  _objc_release(lStack_148);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  lVar2 = param_3;
  __Unwind_Resume();
  pcStack_158 = FUN_105e236a4;
  lStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = puVar6;
  lStack_188 = lVar3;
  puStack_180 = puVar1;
  uStack_178 = param_5;
  lStack_170 = param_4;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar16);
  _objc_initWeak(&uStack_1b8,lVar2);
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010be431e0();
  _objc_release(lVar2);
  puVar5 = (undefined8 *)PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c0720c0();
  if ((int)puVar6 == 0) {
    puVar6 = puVar16;
    func_0x00010c0720c0();
    if ((int)puVar6 != 0) {
      puVar6 = *(undefined8 **)(lVar2 + 0xf8);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e23798;
    }
    puVar6 = puVar16;
    func_0x00010c0720c0();
    if ((int)puVar6 != 0) {
      puVar7 = *(undefined8 **)(lVar2 + 0xe0);
      func_0x00010c269d40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      goto LAB_105e237a8;
    }
    puVar6 = puVar16;
    func_0x00010c0720c0();
    if ((int)puVar6 != 0) {
      puVar7 = &uStack_1b8;
      _objc_loadWeakRetained(puVar7);
      puVar6 = puVar7;
      func_0x00010c089fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar8 = puVar6;
      func_0x000100504554(puVar6,&PTR___NSConcreteGlobalBlock_1108eb6c0);
      puVar9 = *(undefined8 **)(lVar2 + 0x30);
      func_0x00010c269d40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c2445e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar9);
      uVar12 = *(undefined8 *)(lVar2 + 0x40);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c15a640();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar11;
      func_0x00010bf41860(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(puVar8);
      goto LAB_105e237a8;
    }
    puVar6 = puVar16;
    func_0x00010c0720c0();
    if ((int)puVar6 != 0) {
      puVar6 = *(undefined8 **)(lVar2 + 0x120);
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e23798;
    }
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar2 + 0xd0);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
LAB_105e23798:
    _objc_release(puVar5);
LAB_105e237a8:
    _objc_release(puVar6);
    puVar6 = puVar7;
    if ((int)lVar3 != 0) {
      puVar5 = &uStack_1b8;
      _objc_loadWeakRetained(puVar5);
      puVar6 = puVar5;
      func_0x00010bde2100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    _objc_retain(puVar6);
    puVar5 = puVar6;
  }
  _objc_release(puVar5);
  _objc_destroyWeak(&uStack_1b8);
  _objc_release(puVar16);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e236a4; end: 105e23a1f; -[SCSendToSectionDataSource _foldedSectionRecipientObservable:] */

void FUN_105e236a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010be431e0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 != 0) {
      puVar4 = *(undefined **)(param_1 + 0xf8);
      func_0x00010c269d40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e23798;
    }
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) {
          puVar4 = (undefined *)0x0;
          goto LAB_105e237f4;
        }
        puVar4 = *(undefined **)(param_1 + 0x120);
        func_0x00010c269d40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105e23798;
      }
      puVar5 = auStack_68;
      _objc_loadWeakRetained(puVar5);
      puVar4 = puVar5;
      func_0x00010c089fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar6 = puVar4;
      func_0x000100504554(puVar4,&PTR___NSConcreteGlobalBlock_1108eb6c0);
      puVar7 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c2445e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar7);
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c15a640();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010bf41860(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(puVar6);
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0xe0);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
    }
  }
  else {
    puVar4 = *(undefined **)(param_1 + 0xd0);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
LAB_105e23798:
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  puVar4 = puVar5;
  if ((int)lVar1 != 0) {
    puVar2 = auStack_68;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010bde2100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_retain(puVar4);
  puVar2 = puVar4;
LAB_105e237f4:
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e23a20; end: 105e23a3f;  */

void FUN_105e23a20(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eb660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e23a40; end: 105e23a5f;  */

void FUN_105e23a40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_snapchatterWithSnapchatter_story_11266ec48,param_2,0,0,0,0);
  return;
}



/* Entry: 105e23a60; end: 105e23a7f;  */

void FUN_105e23a60(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eb6a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e23a80; end: 105e23a9f;  */

void FUN_105e23a80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_snapchatterWithSnapchatter_story_11266ec48,param_2,0,0,0,0);
  return;
}



/* Entry: 105e23aa0; end: 105e23b07;  */

void FUN_105e23aa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e23b08; end: 105e23b27;  */

void FUN_105e23b08(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eb700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e23b28; end: 105e23b47;  */

void FUN_105e23b28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_snapchatterWithSnapchatter_story_11266ec48,param_2,0,0,0,0);
  return;
}



/* Entry: 105e23b48; end: 105e23b67;  */

void FUN_105e23b48(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eb760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


