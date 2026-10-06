/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063490fc; end: 10634918f; -[SCOperaPageViewController _toggleCriticalMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063490fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745d10);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745cf8);
  func_0x00010bf461c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc65c0(uVar3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeCriticalModeContext_1125808b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc6710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addCriticalModeContext_11254f360);
  return;
}



/* Entry: 106349190; end: 106349277; -[SCOperaPageViewController _addCriticalModeContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349190(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112745cf8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf4f380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_112745d10;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010bf5c460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf4f380(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010bef7ac0(uVar3,param_2,&PTR____CFConstantStringClassReference_110de0958);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf5c460(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7ac0(uVar3,param_2,uVar4);
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106349278; end: 10634935f; -[SCOperaPageViewController _removeCriticalModeContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349278(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112745cf8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf4f380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_112745d10;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010bf5c460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf4f380(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010c12ba20(uVar3,param_2,&PTR____CFConstantStringClassReference_110de0958);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf5c460(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12ba20(uVar3,param_2,uVar4);
      _objc_release(uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106349360; end: 1063494df; -[SCOperaPageViewController movingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349360(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar2 = PTR_DAT_1126a5380;
      lVar10 = *(long *)(lVar12 * 8);
      _objc_retain(lVar10);
      lVar4 = lVar10;
      func_0x00010010fab4(lVar10,puVar2);
      _objc_release(lVar10);
      if ((int)lVar4 != 0 && lVar10 != 0) {
        func_0x00010c0d1a00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 != 0) {
          func_0x00010c2804c0(puVar3);
        }
        _objc_release(lVar10);
      }
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = PTR_DAT_1126a5380;
        lVar10 = *(long *)(lVar12 * 8);
        _objc_retain(lVar10);
        lVar4 = lVar10;
        func_0x00010010fab4(lVar10,puVar2);
        _objc_release(lVar10);
        if ((int)lVar4 != 0 && lVar10 != 0) {
          func_0x00010bf9fa40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 != 0) {
            func_0x00010c2804c0(puVar3);
          }
          _objc_release(lVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      puVar3 = PTR_PTR_1126b2340;
      lVar11 = (long)_DAT_112745d10;
      uVar5 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c118b40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c083240();
      _objc_release(uVar5);
      if ((int)puVar3 != 0) {
        uVar6 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
        _objc_release(uVar6);
        if ((int)uVar7 != 0) {
          uVar6 = *(undefined8 *)(param_1 + lVar11);
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010bf1f3c0();
          _objc_release(uVar5);
          _objc_release(uVar6);
          puVar3 = PTR_PTR_1126afca8;
          if ((int)uVar7 != 0) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110e4b718;
            func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e4b718,
                                &PTR____CFConstantStringClassReference_110e34d78,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c237520(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
            return;
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063494e0; end: 10634965f; -[SCOperaPageViewController fadingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063494e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar2 = PTR_DAT_1126a5380;
      lVar10 = *(long *)(lVar12 * 8);
      _objc_retain(lVar10);
      lVar4 = lVar10;
      func_0x00010010fab4(lVar10,puVar2);
      _objc_release(lVar10);
      if ((int)lVar4 != 0 && lVar10 != 0) {
        func_0x00010bf9fa40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 != 0) {
          func_0x00010c2804c0(puVar3);
        }
        _objc_release(lVar10);
      }
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b2340;
  lVar11 = (long)_DAT_112745d10;
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c118b40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083240();
  _objc_release(uVar5);
  if ((int)puVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((int)uVar7 != 0) {
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      _objc_release(uVar6);
      puVar3 = PTR_PTR_1126afca8;
      if ((int)uVar7 != 0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110e4b718;
        func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e4b718,
                            &PTR____CFConstantStringClassReference_110e34d78,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
        return;
      }
    }
  }
  return;
}



/* Entry: 106349660; end: 1063497b3; -[SCOperaPageViewController _displayContentBlockingMessageIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349660(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b2340;
  lVar6 = (long)_DAT_112745d10;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083240();
  _objc_release(uVar1);
  if ((int)puVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126afca8;
      if ((int)uVar4 != 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e4b718;
        func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e4b718,
                            &PTR____CFConstantStringClassReference_110e34d78,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 1063497b4; end: 106349833; -[SCOperaPageViewController _presentedVCSizeRequiresResize:] */

bool FUN_1063497b4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  func_0x00010bdd2a40();
  dVar2 = dVar1;
  _CGRectGetHeight();
  _CGRectGetWidth(dVar1,param_2,param_3,param_4);
  dVar3 = dVar1;
  func_0x00010c0c5140(param_5);
  return dVar2 - param_1 < dVar1 * dVar3;
}



/* Entry: 106349834; end: 106349a9b; -[SCOperaPageViewController resizeMedia:animationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349834(double param_1,double param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  float fVar14;
  undefined *puVar6;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(double *)(param_3 + _DAT_112745d38) = param_1;
  lVar12 = (long)_DAT_112745db4;
  cVar1 = param_3[lVar12];
  if (param_1 <= 0.0) {
    uVar5 = 0;
  }
  else {
    puVar6 = param_3;
    func_0x00010be7f8c0();
    uVar5 = SUB81(puVar6,0);
  }
  param_3[lVar12] = uVar5;
  puVar6 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(puVar6);
  if (cVar1 != param_3[lVar12]) {
    puVar7 = param_3;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    puVar2 = PTR_s_pageDidChangeResizingState__112619df0;
    while (PTR_s_pageDidChangeResizingState__112619df0 = puVar2, puVar6 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar7);
        }
        uVar11 = *(ulong *)((long)puVar13 * 8);
        uVar8 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar2);
        if ((uVar8 & 1) != 0) {
          func_0x00010c0f0f60(uVar11);
        }
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar7;
      func_0x00010bf52a60();
      puVar2 = PTR_s_pageDidChangeResizingState__112619df0;
    }
    _objc_release(puVar7);
  }
  fVar14 = ABS((float)param_2);
  bVar3 = true;
  if ((0.0 < (float)param_2) && (bVar3 = false, !NAN(fVar14))) {
    bVar3 = fVar14 < 1.1754944e-38;
  }
  bVar4 = true;
  if ((!bVar3) && (bVar4 = false, !NAN(fVar14) && !NAN(fVar14 * 1.1920929e-07))) {
    bVar4 = fVar14 < fVar14 * 1.1920929e-07;
  }
  if (bVar4) {
    param_3[_DAT_112745d98] = 0;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release();
  }
  else {
    param_3[_DAT_112745d98] = 1;
    param_3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf03440(param_2,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106349a9c; end: 106349acf;  */

void FUN_106349a9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106349ad0; end: 106349ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349ad0(long param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d98) = 0;
  }
  return;
}



/* Entry: 106349ae8; end: 106349cff; -[SCOperaPageViewController _resizeLayoutConfigForBaseBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349ae8(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = *(ulong *)(param_6 + _DAT_112745d10);
  dVar11 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  dVar12 = param_3;
  dVar7 = param_4;
  dVar6 = param_2;
  if (uVar1 != 0) {
    func_0x00010bfb2c80(uVar2);
    fVar5 = SUB84(dVar11,0);
    dVar11 = param_2;
    _CGRectGetMinY(param_2,param_3,param_4,param_5);
    if (dVar11 < (double)fVar5) {
      dVar11 = (double)fVar5 - dVar11;
      _CGRectGetMinX(param_2,param_3,param_4,param_5);
      dVar12 = param_2;
      _CGRectGetMinY(param_2,param_3,param_4,param_5);
      dVar12 = dVar11 + dVar12;
      dVar7 = param_2;
      _CGRectGetWidth(param_2,param_3,param_4,param_5);
      _CGRectGetHeight(param_2,param_3,param_4,param_5);
      dVar11 = param_2 - dVar11;
      param_5 = dVar11;
      if (dVar11 <= 0.0) {
        param_5 = 0.0;
      }
    }
  }
  func_0x00010c0c5140(param_6);
  dVar8 = dVar7;
  dVar10 = param_5;
  func_0x000107dd92cc(dVar7,param_5,dVar11);
  dVar11 = dVar6;
  if (0.0 < dVar8) {
    _CGRectGetMinX(dVar6,dVar12,dVar7,param_5);
    dVar9 = dVar6;
    _CGRectGetWidth(dVar6,dVar12,dVar7,param_5);
    dVar11 = dVar11 + (dVar9 - dVar8) * 0.5;
    _CGRectGetMinY(dVar6,dVar12,dVar7,param_5);
    param_5 = dVar10;
    dVar12 = dVar6;
    dVar7 = dVar8;
  }
  *param_1 = 1;
  param_1[1] = dVar11;
  param_1[2] = dVar12;
  param_1[3] = dVar7;
  param_1[4] = param_5;
  param_1[5] = 0;
  param_1[6] = &PTR____CFConstantStringClassReference_110e4b738;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106349d00; end: 106349d87; -[SCOperaPageViewController additionalS2RDebugOutput] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349d00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f13c0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)param_1 != 0) {
    func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110db8118,
                        &PTR____CFConstantStringClassReference_110e4b758);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106349d88; end: 10634a30f; -[SCOperaPageViewController logShakeToReportState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106349d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  lVar14 = (long)_DAT_112745d10;
  uVar4 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + lVar14);
  func_0x00010be36bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010c0f13c0();
  _objc_release(uVar4);
  if ((int)lVar9 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3580(param_7);
    _objc_release(puVar5);
  }
  lVar6 = param_7;
  func_0x00010bef9860(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_5 + lVar14);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar9;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar7);
  lVar9 = lVar17;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar17);
      }
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar16 = *(undefined8 *)(lVar15 * 8);
      uVar8 = *(undefined8 *)(param_5 + lVar14);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_106337de8(uVar16,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(lVar6);
      _objc_release(puVar5);
      _objc_release(uVar16);
      _objc_release(uVar4);
      _objc_release(uVar8);
      lVar15 = lVar15 + 1;
    } while (lVar9 != lVar15);
    lVar9 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  lVar7 = param_7;
  func_0x00010bef9860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar17 = (long)_DAT_112745dd8;
  lVar9 = *(long *)(param_5 + lVar17);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar9;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar6;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar6);
      }
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar4 = *(undefined8 *)(param_5 + lVar17);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3580(lVar7);
      _objc_release(puVar5);
      _objc_release(uVar4);
      lVar15 = lVar15 + 1;
    } while (lVar9 != lVar15);
    lVar9 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  func_0x00010c0ab360(param_7);
  lVar9 = (long)_DAT_112745dc0;
  uVar4 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c08c720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab360(param_7);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010bfb2da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab360(param_7);
  _objc_release(uVar4);
  lVar6 = param_7;
  func_0x00010bef9860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar4 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010c0ab340(lVar6);
      lVar7 = lVar7 + 1;
    } while (lVar9 != lVar7);
    lVar9 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  plVar1 = (long *)(param_7 + _DAT_112745d6c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e4b9d8;
  if (*plVar1 != 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e4b9b8;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4b9f8;
  if (*plVar1 != 2) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain(ppuVar3);
  func_0x00010bdd2a20(param_7);
  lVar9 = param_7;
  uVar8 = uVar4;
  func_0x00010c0c5140();
  uVar16 = param_3;
  uVar18 = param_4;
  func_0x000107dd92a0(param_3,param_4,uVar8);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromCGRect(plVar1[1],plVar1[2],plVar1[3],plVar1[4]);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c5140(param_7);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  _NSStringFromCGRect(uVar4,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  _NSStringFromCGSize(uVar16,uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be952a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(param_7);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10634a310; end: 10634a4f3; -[SCOperaPageViewController responsiveLayoutDebugInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar1 = (long *)(param_5 + _DAT_112745d6c);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e4b9d8;
  if (*plVar1 != 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e4b9b8;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110e4b9f8;
  if (*plVar1 != 2) {
    ppuVar3 = ppuVar2;
  }
  _objc_retain(ppuVar3);
  func_0x00010bdd2a20(param_5);
  lVar4 = param_5;
  uVar9 = param_1;
  func_0x00010c0c5140();
  uVar10 = param_3;
  uVar11 = param_4;
  func_0x000107dd92a0(param_3,param_4,uVar9);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromCGRect(plVar1[1],plVar1[2],plVar1[3],plVar1[4]);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0c5140(param_5);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _NSStringFromCGRect(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  _NSStringFromCGSize(uVar10,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be952a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8,param_6,&PTR____CFConstantStringClassReference_110e4b878);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10634a4f4; end: 10634a72b; -[SCOperaPageViewController layerViewControllersInfoForCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10634a4f4(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar17 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(param_1);
      }
      puVar7 = PTR_DAT_1126a5328;
      lVar15 = *(long *)(lVar14 * 8);
      _objc_retain(lVar15);
      lVar5 = lVar15;
      func_0x00010010fab4(lVar15,puVar7);
      lVar1 = lVar15;
      if ((int)lVar5 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar15);
      if (lVar1 == 0) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0c5140(lVar15);
        func_0x00010c079780();
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      func_0x00010befa120(ppuVar3);
      _objc_release(lVar1);
      _objc_release(puVar7);
      lVar14 = lVar14 + 1;
    } while (lVar4 != lVar14);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  ppuVar12 = ppuVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110e4b8d8;
    }
    else {
      ppuVar12 = &PTR____CFConstantStringClassReference_110e4b8d8;
      do {
        ppuVar16 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(ppuVar3);
          }
          puVar7 = PTR_DAT_1126a5388;
          ppuVar13 = *(undefined ***)((long)ppuVar16 * 8);
          _objc_retain(ppuVar13);
          ppuVar9 = ppuVar13;
          func_0x00010010fab4(ppuVar13,puVar7);
          ppuVar2 = ppuVar13;
          if ((int)ppuVar9 == 0) {
            ppuVar2 = (undefined **)0x0;
          }
          _objc_retain(ppuVar2);
          _objc_release(ppuVar13);
          if (ppuVar2 != (undefined **)0x0) {
            ppuVar12 = ppuVar13;
            func_0x00010bf5fa20(ppuVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar13);
            goto LAB_10634a850;
          }
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar8 != ppuVar16);
        ppuVar8 = ppuVar3;
        func_0x00010bf52a60();
      } while (ppuVar8 != (undefined **)0x0);
    }
LAB_10634a850:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      return *(undefined ***)((long)ppuVar3 + (long)_DAT_112745d10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return ppuVar12;
}



/* Entry: 10634a72c; end: 10634a897; -[SCOperaPageViewController currentPlayerStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10634a72c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar4 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e4b8d8;
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e4b8d8;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_DAT_1126a5388;
        ppuVar8 = *(undefined ***)(lVar9 * 8);
        _objc_retain(ppuVar8);
        ppuVar5 = ppuVar8;
        func_0x00010010fab4(ppuVar8,puVar3);
        ppuVar1 = ppuVar8;
        if ((int)ppuVar5 == 0) {
          ppuVar1 = (undefined **)0x0;
        }
        _objc_retain(ppuVar1);
        _objc_release(ppuVar8);
        if (ppuVar1 != (undefined **)0x0) {
          ppuVar7 = ppuVar8;
          func_0x00010bf5fa20(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          goto LAB_10634a850;
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
LAB_10634a850:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    return *(undefined ***)(param_1 + _DAT_112745d10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return ppuVar7;
}



/* Entry: 10634a898; end: 10634a8a7; -[SCOperaPageViewController page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a898(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745d10);
}



/* Entry: 10634a8a8; end: 10634a8b7; -[SCOperaPageViewController viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a8a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745d14);
}



/* Entry: 10634a8b8; end: 10634a8c7; -[SCOperaPageViewController configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a8b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745cf0);
}



/* Entry: 10634a8c8; end: 10634a8d7; -[SCOperaPageViewController operaDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a8c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745cf8);
}



/* Entry: 10634a8d8; end: 10634a8e7; -[SCOperaPageViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a8d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745d00);
}



/* Entry: 10634a8e8; end: 10634a8f7; -[SCOperaPageViewController eventPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a8e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745d04);
}



/* Entry: 10634a8f8; end: 10634a917; -[SCOperaPageViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a8f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745d0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634a918; end: 10634a937; -[SCOperaPageViewController pageableViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a918(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745e34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634a938; end: 10634a94b; -[SCOperaPageViewController setPageableViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a938(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112745e34,param_3);
  return;
}



/* Entry: 10634a94c; end: 10634a96b; -[SCOperaPageViewController layerTypeToFloatingLayerVCs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a94c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634a96c; end: 10634a97f; -[SCOperaPageViewController setLayerTypeToFloatingLayerVCs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a96c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112745e00,param_3);
  return;
}



/* Entry: 10634a980; end: 10634a98f; -[SCOperaPageViewController didSendCloseViewEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10634a980(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745e30);
}



/* Entry: 10634a990; end: 10634a99f; -[SCOperaPageViewController setDidSendCloseViewEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a990(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745e30) = param_3;
  return;
}



/* Entry: 10634a9a0; end: 10634a9af; -[SCOperaPageViewController shouldNotReloadLayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10634a9a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745e08);
}



/* Entry: 10634a9b0; end: 10634a9bf; -[SCOperaPageViewController setShouldNotReloadLayers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634a9b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745e08) = param_3;
  return;
}



/* Entry: 10634a9c0; end: 10634a9cf; -[SCOperaPageViewController containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10634a9c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745d80);
}



/* Entry: 10634a9d0; end: 10634a9df; -[SCOperaPageViewController hasRoundedCornersForAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10634a9d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745dc4);
}



/* Entry: 10634a9e0; end: 10634a9ef; -[SCOperaPageViewController overridePausedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10634a9e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745df4);
}



/* Entry: 10634a9f0; end: 10634aa03; -[SCOperaPageViewController operaScrollViewOffsetForPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10634a9f0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112745ce4);
}



/* Entry: 10634aa04; end: 10634aa17; -[SCOperaPageViewController setOperaScrollViewOffsetForPageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634aa04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112745ce4;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10634aa18; end: 10634ad13; -[SCOperaPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634aa18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745d80,0);
  _objc_destroyWeak(param_1 + _DAT_112745e00);
  _objc_destroyWeak(param_1 + _DAT_112745e34);
  _objc_destroyWeak(param_1 + _DAT_112745d0c);
  _objc_storeStrong(param_1 + _DAT_112745d04,0);
  _objc_storeStrong(param_1 + _DAT_112745d00,0);
  _objc_storeStrong(param_1 + _DAT_112745cf8,0);
  _objc_storeStrong(param_1 + _DAT_112745cf0,0);
  _objc_storeStrong(param_1 + _DAT_112745d14,0);
  _objc_storeStrong(param_1 + _DAT_112745d10,0);
  _objc_storeStrong(param_1 + _DAT_112745cec,0);
  _objc_storeStrong(param_1 + _DAT_112745d58,0);
  _objc_storeStrong(param_1 + _DAT_112745d30,0);
  _objc_destroyWeak(param_1 + _DAT_112745d2c);
  _objc_destroyWeak(param_1 + _DAT_112745d28);
  _objc_storeStrong(param_1 + _DAT_112745d24,0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_112745d6c + 0x30));
  _objc_storeStrong(param_1 + _DAT_112745e24,0);
  _objc_storeStrong(param_1 + _DAT_112745ddc,0);
  _objc_storeStrong(param_1 + _DAT_112745df8,0);
  _objc_storeStrong(param_1 + _DAT_112745d7c,0);
  _objc_storeStrong(param_1 + _DAT_112745cf4,0);
  _objc_storeStrong(param_1 + _DAT_112745cfc,0);
  _objc_storeStrong(param_1 + _DAT_112745dc0,0);
  _objc_storeStrong(param_1 + _DAT_112745dcc,0);
  _objc_storeStrong(param_1 + _DAT_112745e1c,0);
  _objc_storeStrong(param_1 + _DAT_112745da8,0);
  _objc_storeStrong(param_1 + _DAT_112745dbc,0);
  _objc_storeStrong(param_1 + _DAT_112745db0,0);
  _objc_storeStrong(param_1 + _DAT_112745dc8,0);
  _objc_storeStrong(param_1 + _DAT_112745d8c,0);
  _objc_storeStrong(param_1 + _DAT_112745d88,0);
  _objc_storeStrong(param_1 + _DAT_112745d84,0);
  _objc_storeStrong(param_1 + _DAT_112745d18,0);
  _objc_storeStrong(param_1 + _DAT_112745d3c,0);
  _objc_storeStrong(param_1 + _DAT_112745da0,0);
  _objc_storeStrong(param_1 + _DAT_112745dfc,0);
  _objc_storeStrong(param_1 + _DAT_112745e2c,0);
  _objc_storeStrong(param_1 + _DAT_112745df0,0);
  _objc_storeStrong(param_1 + _DAT_112745d20,0);
  _objc_storeStrong(param_1 + _DAT_112745d1c,0);
  _objc_storeStrong(param_1 + _DAT_112745de8,0);
  _objc_storeStrong(param_1 + _DAT_112745dd8,0);
  _objc_storeStrong(param_1 + _DAT_112745e14,0);
  _objc_storeStrong(param_1 + _DAT_112745dec,0);
  _objc_storeStrong(param_1 + _DAT_112745d94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745d08,0);
  return;
}



/* Entry: 10634ad14; end: 10634ae37; -[SCOperaMediaTypeConfiguration initWithType:modelProvider:modelToPageDataConverter:playlistItemGroupResolver:playlistItemGroupDataModelResolver:] */

undefined1 *
FUN_10634ad14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f0f00;
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



/* Entry: 10634ae38; end: 10634ae3f; -[SCOperaMediaTypeConfiguration type] */

undefined8 FUN_10634ae38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10634ae40; end: 10634ae47; -[SCOperaMediaTypeConfiguration modelProvider] */

undefined8 FUN_10634ae40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10634ae48; end: 10634ae4f; -[SCOperaMediaTypeConfiguration modelToPageDataConverter] */

undefined8 FUN_10634ae48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10634ae50; end: 10634ae57; -[SCOperaMediaTypeConfiguration playlistItemGroupResolver] */

undefined8 FUN_10634ae50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10634ae58; end: 10634ae5f; -[SCOperaMediaTypeConfiguration playlistItemGroupDataModelResolver] */

undefined8 FUN_10634ae58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10634ae60; end: 10634ae67; -[SCOperaMediaTypeConfiguration mediaPreparationController] */

undefined8 FUN_10634ae60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10634ae68; end: 10634ae97; -[SCOperaMediaTypeConfiguration setMediaPreparationController:] */

void FUN_10634ae68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10634ae98; end: 10634aef7; -[SCOperaMediaTypeConfiguration .cxx_destruct] */

void FUN_10634ae98(long param_1)

{
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



/* Entry: 10634aef8; end: 10634b18f;  */

void FUN_10634aef8(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  if (param_4 == 0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_3;
    func_0x00010bf4b900(param_3,param_2,param_4);
    if ((int)uVar3 == 0) {
      lVar1 = param_1;
      func_0x00010bfecde0(param_1,param_2,param_4);
      func_0x00010be47080(param_1,param_2,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_3;
        func_0x00010bfecde0(param_3,param_2,param_1);
        uVar3 = uVar3 + 1;
      }
      uVar2 = param_3;
      func_0x00010bf529e0();
      if (uVar3 < uVar2) {
        func_0x00010c0dfd40(param_3,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = 0;
      }
      _objc_release(param_1);
    }
    else {
      _objc_retain(param_4);
      uVar4 = param_4;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10634b190; end: 10634b377; -[SCOperaPlaylistImpl initWithCurrentGroup:groups:] */

undefined8 * FUN_10634b190(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  puVar7 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_f0 = PTR_PTR_1126f0f08;
  puVar5 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar1 = puVar5[3];
    puVar5[3] = param_3;
    _objc_release(uVar1);
    lVar8 = param_4;
    func_0x00010bf51e00();
    uVar1 = puVar5[2];
    puVar5[2] = lVar8;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar5[1];
    puVar5[1] = puVar2;
    _objc_release(uVar1);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_4);
    lVar8 = param_4;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar11 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(param_4);
          }
          lVar9 = *(long *)(lStack_138 + lVar11 * 8);
          lVar3 = lVar9;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            uVar1 = puVar5[1];
            func_0x00010be36bc0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(uVar1);
            _objc_release(lVar9);
          }
          lVar11 = lVar11 + 1;
        } while (lVar8 != lVar11);
        lVar8 = param_4;
        puVar7 = &uStack_140;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(param_4);
    puVar6 = (undefined1 *)puVar7;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  lVar8 = *(long *)(param_3 + 0x10);
  _objc_retain(puVar6);
  func_0x00010bfece40();
  if (lVar8 != 0x7fffffffffffffff) {
    uVar4 = *(ulong *)(param_3 + 0x10);
    func_0x00010bf529e0();
    if (lVar8 + 1U < uVar4) {
      puVar5 = *(undefined8 **)(param_3 + 0x10);
      func_0x00010c0dfd40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10634b424;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_10634b424:
  _objc_release(puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 10634b378; end: 10634b4bb; -[SCOperaPlaylistImpl groupAfter:] */

void FUN_10634b378(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10634b44c;
  puStack_40 = &UNK_11091cc98;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfece40(lVar3,param_2,&puStack_58);
  if (lVar3 != 0x7fffffffffffffff) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar3 + 1U < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0dfd40(uVar2,param_2,lVar3 + 1U);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10634b424;
    }
  }
  uVar2 = 0;
LAB_10634b424:
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10634b4bc; end: 10634b5ef; -[SCOperaPlaylistImpl groupBefore:] */

void FUN_10634b4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10634b580;
  puStack_40 = &UNK_11091cc98;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfece40(lVar2,param_2,&puStack_58);
  if (lVar2 - 1U < 0x7ffffffffffffffe) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10634b5f0; end: 10634b70b; -[SCOperaPlaylistImpl removeItem:] */

void FUN_10634b5f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfceb80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar3 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c071ae0(uVar2,param_2,param_3);
  uVar5 = uVar2;
  if ((int)uVar3 != 0) {
    uVar3 = uVar4;
    func_0x00010bfecde0(uVar4,param_2,param_3);
    uVar5 = uVar4;
    func_0x00010bf529e0();
    if (uVar3 + 1 < uVar5) {
      uVar5 = uVar4;
      func_0x00010c0dfd20(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
  func_0x00010c12d360(uVar4,param_2,param_3);
  func_0x00010c13aa20(uVar1,param_2,uVar4,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634b70c; end: 10634b713; -[SCOperaPlaylistImpl groupForId:] */

void FUN_10634b70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10634b714; end: 10634b7eb; -[SCOperaPlaylistImpl removeGroup:] */

void FUN_10634b714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  lVar1 = param_1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c14c9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  uVar3 = uVar5;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar4,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10634b7ec; end: 10634ba93; -[SCOperaPlaylistImpl updateWithPlaylistGroups:] */

undefined * FUN_10634b7ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  _objc_retain(param_3);
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0);
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar11 = *(long *)(lStack_128 + lVar13 * 8);
        lVar2 = lVar11;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == 0) {
          lVar2 = lVar11;
          func_0x00010be36bc0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1;
          func_0x00010bfcea60(param_1,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = lVar3;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            lVar2 = lVar3;
            func_0x00010c084fc0(lVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010bf5f0a0(lVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c13aa20(lVar11,param_2,lVar2,lVar4);
            _objc_release(lVar4);
            _objc_release(lVar2);
          }
          _objc_release(lVar3);
        }
        lVar2 = lVar11;
        func_0x00010be36bc0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10,param_2,lVar11,lVar2);
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      puVar8 = (undefined8 *)0x10;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  lVar2 = param_3;
  lVar11 = lVar12;
  func_0x00010c14c9a0(lVar1,param_2,param_3,lVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar9);
  puVar5 = puVar10;
  func_0x00010c0d3c80();
  uVar9 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar5;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar13;
  _objc_release(uVar9);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  _objc_retain(lVar11);
  uVar9 = *(undefined8 *)(puVar10 + 0x10);
  func_0x00010bf4b900(uVar9,param_2,lVar2);
  if ((int)uVar9 == 0) {
    uVar6 = *(ulong *)(puVar10 + 0x10);
    func_0x00010bf4b900(uVar6,param_2,lVar11);
    if ((uVar6 & 1) != 0) {
      lVar12 = *(long *)(puVar10 + 0x10);
      func_0x00010c0d3c80();
      lVar1 = lVar12;
      func_0x00010bfecde0();
      func_0x00010c066b00(lVar12,param_2,lVar2,lVar1 + 1);
      uVar9 = *(undefined8 *)(puVar10 + 0x10);
      *(long *)(puVar10 + 0x10) = lVar12;
      _objc_retain(lVar12);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar10 + 8);
      lVar1 = lVar2;
      func_0x00010be36bc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9,param_2,lVar2,lVar1);
      _objc_release(lVar12);
      _objc_release(lVar1);
      puVar10 = (undefined *)0x1;
      goto LAB_10634bbb8;
    }
    if (puVar8 == (undefined8 *)0x0) goto LAB_10634bbb4;
    ppuVar7 = &PTR____CFConstantStringClassReference_110e4ba38;
    uVar9 = 7;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
LAB_10634bbb4:
      puVar10 = (undefined *)0x0;
      goto LAB_10634bbb8;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110e4ba18;
    uVar9 = 2;
  }
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c0eac60(PTR__OBJC_CLASS___NSError_1126ae858,param_2,uVar9,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar10 = (undefined *)0x0;
  *puVar8 = puVar5;
LAB_10634bbb8:
  _objc_release(lVar11);
  _objc_release(lVar2);
  return puVar10;
}



/* Entry: 10634ba94; end: 10634bbdf; -[SCOperaPlaylistImpl insertPlaylistItemGroup:afterPlaylistItemGroup:error:] */

undefined8
FUN_10634ba94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf4b900(uVar2,param_2,param_4);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c0d3c80();
      lVar4 = lVar3;
      func_0x00010bfecde0();
      func_0x00010c066b00(lVar3,param_2,param_3,lVar4 + 1);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar3;
      _objc_retain(lVar3);
      _objc_release(uVar1);
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar1 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7,param_2,param_3,uVar1);
      _objc_release(lVar3);
      _objc_release(uVar1);
      uVar1 = 1;
      goto LAB_10634bbb8;
    }
    if (param_5 == (undefined8 *)0x0) goto LAB_10634bbb4;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e4ba38;
    uVar1 = 7;
  }
  else {
    if (param_5 == (undefined8 *)0x0) {
LAB_10634bbb4:
      uVar1 = 0;
      goto LAB_10634bbb8;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e4ba18;
    uVar1 = 2;
  }
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010c0eac60(PTR__OBJC_CLASS___NSError_1126ae858,param_2,uVar1,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  uVar1 = 0;
  *param_5 = puVar5;
LAB_10634bbb8:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10634bbe0; end: 10634bbe7; -[SCOperaPlaylistImpl groups] */

undefined8 FUN_10634bbe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10634bbe8; end: 10634bbef; -[SCOperaPlaylistImpl currentGroup] */

undefined8 FUN_10634bbe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10634bbf0; end: 10634bc1f; -[SCOperaPlaylistImpl setCurrentGroup:] */

void FUN_10634bbf0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10634bc20; end: 10634bc5b; -[SCOperaPlaylistImpl .cxx_destruct] */

void FUN_10634bc20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10634bc5c; end: 10634bc7b; +[SCOperaPlaylistItemImpl newWithModel:] */

void FUN_10634bc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10634bc7c(param_3);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 10634bc7c; end: 10634beaf;  */

undefined1 *
FUN_10634bc7c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c9e08;
    _objc_alloc();
    puVar1 = param_1;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bdc1720();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar1;
    param_4 = puVar2;
    func_0x00010c0558a0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    unaff_x21 = param_1;
    func_0x00010c25eba0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x21;
    func_0x00010bf529e0();
    _objc_release(unaff_x21);
    unaff_x22 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      unaff_x21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      puVar1 = param_1;
      func_0x00010c25eba0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_f0;
      puVar2 = puVar1;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        lVar7 = *plStack_130;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar7) {
              _objc_enumerationMutation(puVar1);
            }
            uVar3 = *(undefined8 *)(lStack_138 + (long)puVar8 * 8);
            FUN_10634bc7c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d8fe0();
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            uStack_f8 = uVar3;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x21);
            _objc_release(puVar4);
            _objc_release(uVar3);
            puVar8 = puVar8 + 1;
          } while (puVar2 != puVar8);
          param_4 = auStack_f0;
          puVar2 = puVar1;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      unaff_x22 = unaff_x21;
      func_0x00010bf51e00();
      param_3 = unaff_x22;
      func_0x00010c20ed00(puVar6);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
    }
  }
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_180;
  pcStack_148 = FUN_10634beb0;
  puStack_170 = unaff_x22;
  puStack_168 = unaff_x21;
  puStack_160 = puVar6;
  puStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_178 = PTR_PTR_1126f0f10;
  puStack_180 = puVar1;
  _objc_msgSendSuper2(&puStack_180,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar3);
    puVar6 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)ppuVar5;
}



/* Entry: 10634beb0; end: 10634bf5b; -[SCOperaPlaylistItemImpl initWithType:ID:] */

undefined1 *
FUN_10634beb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0f10;
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



/* Entry: 10634bf5c; end: 10634c07b; -[SCOperaPlaylistItemImpl isEqual:] */

ulong FUN_10634bf5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar5 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126c9e08;
    _objc_opt_class(PTR_PTR_1126c9e08);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      _objc_retain(param_3);
      uVar2 = param_1;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c27dd80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0();
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        func_0x00010be36bc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c0720c0(param_1);
        _objc_release(uVar4);
        _objc_release(param_1);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10634c07c; end: 10634c0e7; -[SCOperaPlaylistItemImpl hash] */

long FUN_10634c07c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfde980();
  func_0x00010be36bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar3 + lVar2;
}



/* Entry: 10634c0e8; end: 10634c0ff; -[SCOperaPlaylistItemImpl group] */

void FUN_10634c0e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634c100; end: 10634c207; -[SCOperaPlaylistItemImpl insertSubItems:afterSubItem:] */

void FUN_10634c100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c25e580(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10634c208;
    puStack_60 = &UNK_11091ccc8;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(param_3);
    lVar2 = lVar1;
    uStack_50 = param_3;
    lStack_48 = param_1;
    func_0x000100504554(lVar1,&puStack_78);
    func_0x00010c20ed00(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634c208; end: 10634c423;  */

undefined * FUN_10634c208(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010bfecde0();
  if (puVar2 == (undefined *)0x7fffffffffffffff) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c25e980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar3);
    func_0x00010befa160(puVar2);
    func_0x00010bf529e0(param_2);
    puVar3 = param_2;
    func_0x00010c25e980(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar3);
    lVar7 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar7);
    lVar4 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lVar9 * 8);
        func_0x00010c1d8fe0(uVar8);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bfceb80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a47c0(uVar8);
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_2 + 8);
}



/* Entry: 10634c424; end: 10634c42b; -[SCOperaPlaylistItemImpl type] */

undefined8 FUN_10634c424(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10634c42c; end: 10634c433; -[SCOperaPlaylistItemImpl _id] */

undefined8 FUN_10634c42c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10634c434; end: 10634c43b; -[SCOperaPlaylistItemImpl subItemArrays] */

undefined8 FUN_10634c434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10634c43c; end: 10634c443; -[SCOperaPlaylistItemImpl setSubItemArrays:] */

void FUN_10634c43c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10634c444; end: 10634c45b; -[SCOperaPlaylistItemImpl parent] */

void FUN_10634c444(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634c45c; end: 10634c467; -[SCOperaPlaylistItemImpl setParent:] */

void FUN_10634c45c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10634c468; end: 10634c47f; -[SCOperaPlaylistItemImpl groupImpl] */

void FUN_10634c468(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634c480; end: 10634c48b; -[SCOperaPlaylistItemImpl setGroupImpl:] */

void FUN_10634c480(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10634c48c; end: 10634c4d7; -[SCOperaPlaylistItemImpl .cxx_destruct] */

void FUN_10634c48c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10634c4d8; end: 10634c5ab; +[SCOperaPlaylistItemGroupImpl newWithModel:] */

undefined8 FUN_10634c4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  uVar1 = param_3;
  func_0x00010bdc1720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c264f20(param_3);
  uVar4 = param_3;
  func_0x00010bfb6280(param_3);
  uVar5 = param_3;
  func_0x00010bf14f80(param_3);
  _objc_release(param_3);
  func_0x00010c01ade0(param_1,param_2,uVar1,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10634c5ac; end: 10634c677; -[SCOperaPlaylistItemGroupImpl initWithID:type:swipeToDismissEnabled:forwardAutoAdvanceEnabled:backwardsAutoAdvanceEnabled:] */

undefined1 *
FUN_10634c5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0f18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10634c678; end: 10634c68b; -[SCOperaPlaylistItemGroupImpl indexOfItem:] */

long FUN_10634c678(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfecdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_indexOfObject__1125d8d40);
    return lVar1;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 10634c68c; end: 10634c68f; -[SCOperaPlaylistItemGroupImpl group] */

void FUN_10634c68c(void)

{
  return;
}



/* Entry: 10634c690; end: 10634c6cf; -[SCOperaPlaylistItemGroupImpl resolveGroupWithItemModels:] */

void FUN_10634c690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10634c6d0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13aa00(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634c6d0; end: 10634c813;  */

void FUN_10634c6d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          puVar2 = PTR_PTR_1126c9e08;
          func_0x00010c0d95e0();
          func_0x00010befa120(puVar4);
          _objc_release(puVar2);
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = param_1;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
    param_3 = (undefined1 *)puVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    puVar5 = param_3;
    FUN_10634c8c4(param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_1 + 0x20);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = param_3;
        func_0x00010bfb1920(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c14c9a0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar5 = *(undefined1 **)(param_1 + 0x28);
      _objc_retain(puVar5);
    }
    func_0x00010c13aa20(param_1);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10634c814; end: 10634c8c3; -[SCOperaPlaylistItemGroupImpl resolveGroupWithItems:] */

void FUN_10634c814(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_10634c8c4(param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14c9a0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar1);
  }
  func_0x00010c13aa20(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634c8c4; end: 10634caa7;  */

void FUN_10634c8c4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long lVar13;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar14;
  undefined8 *unaff_x28;
  undefined8 *puVar15;
  undefined8 uStack_740;
  long lStack_738;
  long *plStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 **ppuStack_640;
  code *pcStack_638;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_4b0;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  long lStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined1 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  long lStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  long lStack_340;
  undefined1 *puStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    _objc_retain(param_1);
    param_3 = &uStack_1b0;
    param_4 = auStack_f0;
    lVar13 = param_1;
    func_0x00010bf52a60();
    if (lVar13 != 0) {
      unaff_x25 = (undefined8 *)*puStack_1a0;
      unaff_x21 = lVar13;
      do {
        unaff_x26 = 0;
        do {
          if ((undefined8 *)*puStack_1a0 != unaff_x25) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x22 = *(undefined8 **)(lStack_1a8 + unaff_x26 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          puStack_1e0 = (undefined8 *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x00010c25e580();
          _objc_retainAutoreleasedReturnValue();
          param_4 = auStack_170;
          puVar11 = unaff_x22;
          func_0x00010bf52a60();
          if (puVar11 != (undefined8 *)0x0) {
            unaff_x27 = (undefined8 *)*puStack_1e0;
            unaff_x24 = puVar11;
            do {
              unaff_x28 = (undefined8 *)0x0;
              do {
                if ((undefined8 *)*puStack_1e0 != unaff_x27) {
                  _objc_enumerationMutation(unaff_x22);
                }
                uVar10 = *(ulong *)(lStack_1e8 + (long)unaff_x28 * 8);
                uVar1 = uVar10;
                param_3 = param_2;
                func_0x00010bf4b900();
                if ((uVar1 & 1) != 0) {
                  _objc_retain(uVar10);
                  _objc_release(unaff_x22);
                  goto LAB_10634ca48;
                }
                unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
              } while (unaff_x24 != unaff_x28);
              param_4 = auStack_170;
              unaff_x24 = unaff_x22;
              func_0x00010bf52a60();
            } while (unaff_x24 != (undefined8 *)0x0);
          }
          _objc_release(unaff_x22);
          unaff_x26 = unaff_x26 + 1;
        } while (unaff_x26 != unaff_x21);
        param_3 = &uStack_1b0;
        param_4 = auStack_f0;
        unaff_x21 = param_1;
        func_0x00010bf52a60();
      } while (unaff_x21 != 0);
    }
    uVar10 = 0;
LAB_10634ca48:
    _objc_release(param_1);
  }
  _objc_release(param_2);
  lVar13 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10634caa8;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_250 = unaff_x28;
  puStack_248 = unaff_x27;
  lStack_240 = unaff_x26;
  puStack_238 = unaff_x25;
  puStack_230 = unaff_x24;
  uStack_228 = uVar10;
  puStack_220 = unaff_x22;
  lStack_218 = unaff_x21;
  puStack_210 = param_2;
  lStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  FUN_10634c6d0();
  _objc_retainAutoreleasedReturnValue();
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  _objc_retain();
  puVar11 = param_3;
  func_0x00010bf52a60();
  if (puVar11 != (undefined8 *)0x0) {
    unaff_x26 = *plStack_310;
    unaff_x22 = puVar11;
    do {
      unaff_x27 = (undefined8 *)0x0;
      do {
        if (*plStack_310 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        puVar11 = *(undefined8 **)(lStack_318 + (long)unaff_x27 * 8);
        unaff_x24 = puVar11;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0720c0();
        _objc_release(unaff_x24);
        if (((ulong)unaff_x25 & 1) != 0) {
          _objc_retain(puVar11);
          _objc_release(param_3);
          if (puVar11 == (undefined8 *)0x0) goto LAB_10634cbcc;
          goto LAB_10634cbe0;
        }
        unaff_x27 = (undefined8 *)((long)unaff_x27 + 1);
      } while (unaff_x22 != unaff_x27);
      unaff_x22 = param_3;
      func_0x00010bf52a60();
    } while (unaff_x22 != (undefined8 *)0x0);
  }
  _objc_release(param_3);
LAB_10634cbcc:
  puVar11 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
LAB_10634cbe0:
  puVar5 = param_3;
  puVar6 = puVar11;
  func_0x00010c13aa20(lVar13);
  _objc_release(puVar11);
  _objc_release(param_3);
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_10634cc44;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_370 = unaff_x26;
  puStack_368 = unaff_x25;
  puStack_360 = unaff_x24;
  puStack_358 = puVar11;
  puStack_350 = unaff_x22;
  puStack_348 = param_3;
  lStack_340 = lVar13;
  puStack_338 = param_4;
  ppuStack_330 = &puStack_200;
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 **)(puVar2 + 0x20) = puVar5;
  _objc_release(uVar3);
  _objc_retain(puVar6);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 **)(puVar2 + 0x28) = puVar6;
  _objc_release(uVar3);
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  puStack_430 = (undefined8 *)0x0;
  puVar8 = *(undefined8 **)(puVar2 + 0x20);
  _objc_retain(puVar8);
  puVar4 = puVar8;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    unaff_x24 = (undefined8 *)*puStack_430;
    do {
      unaff_x25 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_430 != unaff_x24) {
          _objc_enumerationMutation(puVar8);
        }
        puVar7 = *(undefined8 **)(lStack_438 + (long)unaff_x25 * 8);
        FUN_10634cd94(puVar2);
        unaff_x25 = (undefined8 *)((long)unaff_x25 + 1);
      } while (puVar4 != unaff_x25);
      puVar4 = puVar8;
      func_0x00010bf52a60();
      puVar11 = (undefined8 *)0x0;
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar4 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_10634cd94;
  lStack_4b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4a0 = unaff_x28;
  puStack_498 = unaff_x27;
  lStack_490 = unaff_x26;
  puStack_488 = unaff_x25;
  puStack_480 = unaff_x24;
  puStack_478 = puVar11;
  puStack_470 = puVar8;
  puStack_468 = puVar2;
  puStack_460 = puVar6;
  puStack_458 = puVar5;
  ppuStack_450 = &ppuStack_330;
  _objc_retain();
  _objc_retain(puVar7);
  func_0x00010c1a47c0(puVar7);
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  puVar5 = puVar7;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    lVar13 = *plStack_5e0;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_5e0 != lVar13) {
          _objc_enumerationMutation(puVar5);
        }
        puVar11 = *(undefined8 **)(lStack_5e8 + (long)puVar8 * 8);
        lStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        plStack_620 = (long *)0x0;
        uStack_608 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        _objc_retain(puVar11);
        puVar15 = puVar11;
        func_0x00010bf52a60();
        if (puVar15 != (undefined8 *)0x0) {
          lVar14 = *plStack_620;
          unaff_x24 = puVar15;
          do {
            puVar15 = (undefined8 *)0x0;
            do {
              if (*plStack_620 != lVar14) {
                _objc_enumerationMutation(puVar11);
              }
              FUN_10634cd94(puVar4,*(undefined8 *)(lStack_628 + (long)puVar15 * 8));
              puVar15 = (undefined8 *)((long)puVar15 + 1);
            } while (unaff_x24 != puVar15);
            unaff_x24 = puVar11;
            func_0x00010bf52a60();
          } while (unaff_x24 != (undefined8 *)0x0);
        }
        _objc_release(puVar11);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar8 != puVar6);
      puVar6 = puVar5;
      func_0x00010bf52a60();
      puVar8 = (undefined8 *)0x0;
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar7);
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b0) {
    return;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_740;
  pcStack_638 = FUN_10634cf58;
  lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_738 = 0;
  uStack_740 = 0;
  uStack_728 = 0;
  plStack_730 = (long *)0x0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  lVar14 = puVar6[4];
  puStack_670 = unaff_x24;
  puStack_668 = puVar11;
  puStack_660 = puVar8;
  puStack_658 = puVar5;
  puStack_650 = puVar7;
  puStack_648 = puVar4;
  ppuStack_640 = &ppuStack_450;
  _objc_retain(lVar14);
  lVar13 = lVar14;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar9 = *plStack_730;
    do {
      lVar12 = 0;
      do {
        if (*plStack_730 != lVar9) {
          _objc_enumerationMutation(lVar14);
        }
        FUN_10634cd94(0,*(undefined8 *)(lStack_738 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = lVar14;
      puVar15 = &uStack_740;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar14);
  uVar3 = puVar6[4];
  puVar6[4] = 0;
  _objc_release(uVar3);
  lVar13 = puVar6[5];
  puVar6[5] = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  uVar10 = *(ulong *)(lVar13 + 0x20);
  func_0x00010bfecde0();
  if (uVar10 != 0x7fffffffffffffff) {
    FUN_10634cd94(lVar13,puVar15);
    lVar9 = *(long *)(lVar13 + 0x20);
    func_0x00010c0d3c80();
    lVar14 = lVar9;
    func_0x00010bf529e0();
    if (uVar10 < lVar14 - 1U) {
      func_0x00010c066b00(lVar9);
    }
    else {
      func_0x00010befa120(lVar9);
    }
    lVar14 = lVar9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    *(long *)(lVar13 + 0x20) = lVar14;
    _objc_release(uVar3);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return;
}



/* Entry: 10634caa8; end: 10634cc43; -[SCOperaPlaylistItemGroupImpl resolveGroupWithItemModels:currentItemID:] */

void FUN_10634caa8(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong unaff_x22;
  long lVar5;
  ulong uVar6;
  ulong unaff_x24;
  ulong unaff_x25;
  long lVar7;
  long unaff_x26;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  ulong uStack_480;
  ulong uStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  ulong uStack_458;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_2c0;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  ulong *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_10634c6d0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  uVar8 = param_3;
  func_0x00010bf52a60();
  if (uVar8 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x22 = uVar8;
    do {
      uVar8 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(ulong *)(lStack_128 + uVar8 * 8);
        unaff_x24 = uVar6;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0720c0();
        _objc_release(unaff_x24);
        if ((unaff_x25 & 1) != 0) {
          _objc_retain(uVar6);
          _objc_release(param_3);
          if (uVar6 == 0) goto LAB_10634cbcc;
          goto LAB_10634cbe0;
        }
        uVar8 = uVar8 + 1;
      } while (unaff_x22 != uVar8);
      unaff_x22 = param_3;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release(param_3);
LAB_10634cbcc:
  uVar6 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
LAB_10634cbe0:
  uVar8 = param_3;
  uVar10 = uVar6;
  func_0x00010c13aa20(param_1);
  _objc_release(uVar6);
  _objc_release(param_3);
  lVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10634cc44;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = uVar6;
  uStack_160 = unaff_x22;
  uStack_158 = param_3;
  uStack_150 = param_1;
  lStack_148 = param_4;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  _objc_retain(uVar10);
  _objc_retain(uVar8);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(ulong *)(lVar2 + 0x20) = uVar8;
  _objc_release(uVar1);
  _objc_retain(uVar10);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(ulong *)(lVar2 + 0x28) = uVar10;
  _objc_release(uVar1);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (ulong *)0x0;
  lVar5 = *(long *)(lVar2 + 0x20);
  _objc_retain(lVar5);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x24 = *puStack_240;
    do {
      lVar7 = 0;
      do {
        if (*puStack_240 != unaff_x24) {
          _objc_enumerationMutation(lVar5);
        }
        param_2 = *(long *)(lStack_248 + lVar7 * 8);
        FUN_10634cd94(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar5;
      func_0x00010bf52a60();
      uVar6 = 0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar5);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_10634cd94;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_260 = &puStack_140;
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c1a47c0(param_2);
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  lStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  lVar2 = param_2;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_3f0;
    do {
      lVar5 = 0;
      do {
        if (*plStack_3f0 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(ulong *)(lStack_3f8 + lVar5 * 8);
        lStack_438 = 0;
        uStack_440 = 0;
        uStack_428 = 0;
        plStack_430 = (long *)0x0;
        uStack_418 = 0;
        uStack_420 = 0;
        uStack_408 = 0;
        uStack_410 = 0;
        _objc_retain(uVar6);
        uVar10 = uVar6;
        func_0x00010bf52a60();
        if (uVar10 != 0) {
          lVar9 = *plStack_430;
          unaff_x24 = uVar10;
          do {
            uVar10 = 0;
            do {
              if (*plStack_430 != lVar9) {
                _objc_enumerationMutation(uVar6);
              }
              FUN_10634cd94(uVar8,*(undefined8 *)(lStack_438 + uVar10 * 8));
              uVar10 = uVar10 + 1;
            } while (unaff_x24 != uVar10);
            unaff_x24 = uVar6;
            func_0x00010bf52a60();
          } while (unaff_x24 != 0);
        }
        _objc_release(uVar6);
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar4);
      lVar4 = lVar2;
      func_0x00010bf52a60();
      lVar5 = 0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  uVar10 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_550;
  pcStack_448 = FUN_10634cf58;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  lVar4 = *(long *)(uVar10 + 0x20);
  uStack_480 = unaff_x24;
  uStack_478 = uVar6;
  lStack_470 = lVar5;
  lStack_468 = lVar2;
  lStack_460 = param_2;
  uStack_458 = uVar8;
  ppuStack_450 = &ppuStack_260;
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_540;
    do {
      lVar7 = 0;
      do {
        if (*plStack_540 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        FUN_10634cd94(0,*(undefined8 *)(lStack_548 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      puVar3 = &uStack_550;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(uVar10 + 0x20);
  *(undefined8 *)(uVar10 + 0x20) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(uVar10 + 0x28);
  *(undefined8 *)(uVar10 + 0x28) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar8 = *(ulong *)(lVar2 + 0x20);
  func_0x00010bfecde0();
  if (uVar8 != 0x7fffffffffffffff) {
    FUN_10634cd94(lVar2,puVar3);
    lVar4 = *(long *)(lVar2 + 0x20);
    func_0x00010c0d3c80();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (uVar8 < lVar5 - 1U) {
      func_0x00010c066b00(lVar4);
    }
    else {
      func_0x00010befa120(lVar4);
    }
    lVar5 = lVar4;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(lVar2 + 0x20) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10634cc44; end: 10634cd93; -[SCOperaPlaylistItemGroupImpl resolveGroupWithItems:currentItem:] */

void FUN_10634cc44(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_release(uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    unaff_x24 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(lVar4);
        }
        param_2 = *(long *)(lStack_118 + lVar6 * 8);
        FUN_10634cd94(param_1);
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = lVar4;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10634cd94;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c1a47c0(param_2);
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  lVar5 = param_2;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_2c0;
    do {
      lVar4 = 0;
      do {
        if (*plStack_2c0 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        unaff_x23 = *(long *)(lStack_2c8 + lVar4 * 8);
        lStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        plStack_300 = (long *)0x0;
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        _objc_retain(unaff_x23);
        lVar9 = unaff_x23;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar8 = *plStack_300;
          unaff_x24 = lVar9;
          do {
            lVar9 = 0;
            do {
              if (*plStack_300 != lVar8) {
                _objc_enumerationMutation(unaff_x23);
              }
              FUN_10634cd94(param_3,*(undefined8 *)(lStack_308 + lVar9 * 8));
              lVar9 = lVar9 + 1;
            } while (unaff_x24 != lVar9);
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60();
          } while (unaff_x24 != 0);
        }
        _objc_release(unaff_x23);
        lVar4 = lVar4 + 1;
      } while (lVar4 != lVar6);
      lVar6 = lVar5;
      func_0x00010bf52a60();
      lVar4 = 0;
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  _objc_release(param_2);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_420;
  pcStack_318 = FUN_10634cf58;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  plStack_410 = (long *)0x0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  lVar7 = *(long *)(lVar6 + 0x20);
  lStack_350 = unaff_x24;
  lStack_348 = unaff_x23;
  lStack_340 = lVar4;
  lStack_338 = lVar5;
  lStack_330 = param_2;
  lStack_328 = param_3;
  ppuStack_320 = &puStack_130;
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar5 = *plStack_410;
    do {
      lVar9 = 0;
      do {
        if (*plStack_410 != lVar5) {
          _objc_enumerationMutation(lVar7);
        }
        FUN_10634cd94(0,*(undefined8 *)(lStack_418 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar7;
      puVar3 = &uStack_420;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar7);
  uVar1 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  _objc_release(uVar1);
  lVar4 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar2 = *(ulong *)(lVar4 + 0x20);
  func_0x00010bfecde0();
  if (uVar2 != 0x7fffffffffffffff) {
    FUN_10634cd94(lVar4,puVar3);
    lVar6 = *(long *)(lVar4 + 0x20);
    func_0x00010c0d3c80();
    lVar5 = lVar6;
    func_0x00010bf529e0();
    if (uVar2 < lVar5 - 1U) {
      func_0x00010c066b00(lVar6);
    }
    else {
      func_0x00010befa120(lVar6);
    }
    lVar5 = lVar6;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    *(long *)(lVar4 + 0x20) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10634cd94; end: 10634cf57;  */

void FUN_10634cd94(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c1a47c0(param_2);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar3 = param_2;
  func_0x00010c25e580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x23 = *(long *)(lStack_1a8 + lVar7 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        _objc_retain(unaff_x23);
        lVar9 = unaff_x23;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar8 = *plStack_1e0;
          unaff_x24 = lVar9;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1e0 != lVar8) {
                _objc_enumerationMutation(unaff_x23);
              }
              FUN_10634cd94(param_1,*(undefined8 *)(lStack_1e8 + lVar9 * 8));
              lVar9 = lVar9 + 1;
            } while (unaff_x24 != lVar9);
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60();
          } while (unaff_x24 != 0);
        }
        _objc_release(unaff_x23);
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar1);
      lVar1 = lVar3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_300;
  pcStack_1f8 = FUN_10634cf58;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lVar6 = *(long *)(lVar1 + 0x20);
  lStack_230 = unaff_x24;
  lStack_228 = unaff_x23;
  uStack_220 = unaff_x22;
  lStack_218 = lVar3;
  lStack_210 = param_2;
  lStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_2f0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_2f0 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        FUN_10634cd94(0,*(undefined8 *)(lStack_2f8 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar6;
      puVar5 = &uStack_300;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  _objc_release(uVar2);
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar4 = *(ulong *)(lVar3 + 0x20);
  func_0x00010bfecde0();
  if (uVar4 != 0x7fffffffffffffff) {
    FUN_10634cd94(lVar3,puVar5);
    lVar6 = *(long *)(lVar3 + 0x20);
    func_0x00010c0d3c80();
    lVar1 = lVar6;
    func_0x00010bf529e0();
    if (uVar4 < lVar1 - 1U) {
      func_0x00010c066b00(lVar6);
    }
    else {
      func_0x00010befa120(lVar6);
    }
    lVar1 = lVar6;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    *(long *)(lVar3 + 0x20) = lVar1;
    _objc_release(uVar2);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10634cf58; end: 10634d067; -[SCOperaPlaylistItemGroupImpl unresolveGroup] */

void FUN_10634cf58(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        FUN_10634cd94(0,*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar3 = *(ulong *)(lVar2 + 0x20);
  func_0x00010bfecde0();
  if (uVar3 != 0x7fffffffffffffff) {
    FUN_10634cd94(lVar2,puVar4);
    lVar6 = *(long *)(lVar2 + 0x20);
    func_0x00010c0d3c80();
    lVar5 = lVar6;
    func_0x00010bf529e0();
    if (uVar3 < lVar5 - 1U) {
      func_0x00010c066b00(lVar6);
    }
    else {
      func_0x00010befa120(lVar6);
    }
    lVar5 = lVar6;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(lVar2 + 0x20) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10634d068; end: 10634d123; -[SCOperaPlaylistItemGroupImpl insertItem:afterItem:] */

void FUN_10634d068(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfecde0();
  if (uVar1 != 0x7fffffffffffffff) {
    FUN_10634cd94(param_1,param_3);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0d3c80();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (uVar1 < lVar3 - 1U) {
      func_0x00010c066b00(lVar2);
    }
    else {
      func_0x00010befa120(lVar2);
    }
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634d124; end: 10634d18b; -[SCOperaPlaylistItemGroupImpl insertItemModel:afterItem:] */

void FUN_10634d124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9e08;
  _objc_retain(param_4);
  func_0x00010c0d95e0(puVar1,param_2,param_3);
  func_0x00010c0669a0(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10634d18c; end: 10634d1f3; -[SCOperaPlaylistItemGroupImpl insertItemModel:beforeItem:] */

void FUN_10634d18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9e08;
  _objc_retain(param_4);
  func_0x00010c0d95e0(puVar1,param_2,param_3);
  func_0x00010c0669e0(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10634d1f4; end: 10634d28b; -[SCOperaPlaylistItemGroupImpl insertItem:beforeItem:] */

void FUN_10634d1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfecde0();
  if (lVar1 != 0x7fffffffffffffff) {
    FUN_10634cd94(param_1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80();
    func_0x00010c066b00();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10634d28c; end: 10634d3e7; -[SCOperaPlaylistItemGroupImpl setInitialItemId:] */

void FUN_10634d28c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar7);
    lVar1 = lVar7;
    func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar3 = uVar8;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          puVar6 = (undefined8 *)param_3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar2 != 0) {
            _objc_retain(uVar8);
            uVar3 = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = uVar8;
            _objc_release(uVar3);
            goto LAB_10634d39c;
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = lVar7;
        puVar6 = &uStack_130;
        func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar1 != 0);
    }
LAB_10634d39c:
    _objc_release(lVar7);
    puVar5 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar4 = param_3;
    func_0x00010bfecd60();
    if (puVar4 != (undefined1 *)0x7fffffffffffffff) {
      func_0x00010be753a0(param_3,param_2,puVar4,puVar4 + (long)puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10634d3e8; end: 10634d43f; -[SCOperaPlaylistItemGroupImpl playlistItemsOfLength:] */

void FUN_10634d3e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecd60(param_1,param_2,*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010be753a0(param_1,param_2,lVar1,lVar1 + param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634d440; end: 10634d4ab; -[SCOperaPlaylistItemGroupImpl subItemArrayContainingSubItem:] */

void FUN_10634d440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c084fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_10634c8c4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10634d4ac; end: 10634d513; -[SCOperaPlaylistItemGroupImpl _playlistItemsFromIndex:toIndex:] */

void FUN_10634d4ac(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  uVar1 = lVar2 - 1U;
  if (param_4 <= lVar2 - 1U) {
    uVar1 = param_4;
  }
  if ((-1 < param_3) && (param_3 <= (long)uVar1)) {
    func_0x00010c25e980(*(undefined8 *)(param_1 + 0x20),param_2,param_3,uVar1 - param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10634d514; end: 10634d51b; -[SCOperaPlaylistItemGroupImpl type] */

undefined8 FUN_10634d514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10634d51c; end: 10634d523; -[SCOperaPlaylistItemGroupImpl _id] */

undefined8 FUN_10634d51c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10634d524; end: 10634d52b; -[SCOperaPlaylistItemGroupImpl swipeToDismissEnabled] */

undefined1 FUN_10634d524(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10634d52c; end: 10634d533; -[SCOperaPlaylistItemGroupImpl forwardAutoAdvanceEnabled] */

undefined1 FUN_10634d52c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


