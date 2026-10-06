/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10631e7ac; end: 10631e82f; -[SCOperaVerticalNavigationManager _setContentOffsetWithoutCallback:] */

void FUN_10631e7ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c182360(param_1,param_2);
  _objc_release(lVar1);
  if (*(char *)(param_3 + 0x58) == '\x01') {
    lVar1 = param_3 + 0x80;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4cdc0();
    func_0x00010bee3d40(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10631e830; end: 10631e837; -[SCOperaVerticalNavigationManager _scrollViewOffsetForPageVC:] */

void FUN_10631e830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_operaScrollViewOffsetForPageView_1126186d0);
  return;
}



/* Entry: 10631e838; end: 10631e937; -[SCOperaVerticalNavigationManager _sendScrollEventWithRelativePosition:] */

void FUN_10631e838(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2638;
  if (param_3 == 1) {
    func_0x00010bf7a560();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 4) {
    func_0x00010bf7a500();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 2) {
      return;
    }
    func_0x00010bf7a540();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar4,param_2,puVar1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10631e938; end: 10631e9af; -[SCOperaVerticalNavigationManager _pageVCForRelativePosition:] */

void FUN_10631e938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee9960(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f2040(lVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10631e9b0; end: 10631ea1b; -[SCOperaVerticalNavigationManager _viewModelForRelativePosition:] */

void FUN_10631e9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  FUN_10631677c(lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10631ea1c; end: 10631eb33; -[SCOperaVerticalNavigationManager _updateLeftTapLayerEnabled:] */

undefined *
FUN_10631ea1c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined **ppuVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_3 + 8);
  func_0x00010c123040();
  if ((int)puVar4 != 0) {
    puVar5 = (undefined *)(param_3 + 0x78);
    _objc_loadWeakRetained();
    puVar4 = puVar5;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c08ea20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_48 = puVar5;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar16;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_40,&puStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(puVar4,param_4,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  dVar21 = param_1;
  dVar23 = param_2;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010be43840();
  if ((int)puVar16 != 0) {
    puVar6 = puVar4 + 0x78;
    _objc_loadWeakRetained();
    puVar7 = puVar6;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      cVar1 = puVar4[0x48];
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (cVar1 != '\x01') goto LAB_10631ecc8;
    }
    else {
      _objc_release();
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    puVar6 = puVar4 + 0x78;
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(puVar7);
    _objc_release(puVar6);
    dVar22 = dVar21 + dVar21;
    if (param_2 <= dVar21) {
      dVar22 = dVar21;
    }
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010bf32180();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = dVar22 - param_2;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f0 = puVar6;
    func_0x00010c0df720(dVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_e8 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_e8,&puStack_f0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar5,param_4,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
LAB_10631ecc8:
  puVar6 = puVar4 + 0x78;
  _objc_loadWeakRetained();
  puVar7 = puVar6;
  func_0x00010bf5ede0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  iVar3 = (int)*(undefined8 *)(puVar4 + 8);
  func_0x00010c0b57a0();
  if (((iVar3 != 0) && ((puVar4[0x38] & 1) == 0)) &&
     ((((ulong)puVar16 & 1) != 0 || (puVar6 = puVar4, func_0x00010be43820(), (int)puVar6 != 0)))) {
    puVar6 = puVar4 + 0x78;
    _objc_loadWeakRetained();
    puVar8 = puVar6;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010c0f0be0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x00010c0720c0(puVar10,param_4,puVar8);
    if ((int)puVar9 == 0) {
      uVar19 = 1;
    }
    else {
      puVar9 = puVar4 + 0x78;
      _objc_loadWeakRetained(puVar9);
      puVar11 = puVar9;
      func_0x00010c0741c0();
      uVar19 = (uint)puVar11 ^ 1;
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = puVar4 + 0x80;
    _objc_loadWeakRetained(puVar6);
    puVar9 = puVar6;
    func_0x00010c07d460();
    func_0x00010c0df760(puVar8,param_4,((uint)puVar9 | uVar19) & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_4,puVar8,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar10);
  }
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar4 + 0x78;
    _objc_loadWeakRetained(puVar6);
    puVar8 = puVar6;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010bf7e940(puVar8,param_4,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = puVar4 + 0x78;
    _objc_loadWeakRetained();
    puVar8 = puVar6;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    _objc_release(puVar6);
    if (puVar9 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126c9410;
      func_0x00010bf32180(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c0e00e0(puVar5,param_4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      if (puVar8 != (undefined *)0x0) {
        puVar6 = puVar4 + 0x78;
        _objc_loadWeakRetained(puVar6);
        puVar8 = puVar6;
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar6 = puVar4 + 0x78;
        _objc_loadWeakRetained(puVar6);
        puVar8 = puVar6;
        func_0x00010c0f2060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126c9410;
        func_0x00010bf32180();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126c9410;
        puStack_100 = puVar6;
        func_0x00010bf32180(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010c0e00e0(puVar5,param_4,puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_f8 = puVar10;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_f8,
                            &puStack_100,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e080(puVar8,param_4,puVar12);
        _objc_release(puVar12);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar11);
      }
    }
  }
  if ((int)puVar16 == 0) {
    uVar15 = *(ulong *)(puVar4 + 8);
    func_0x00010bf4e680();
    if ((uVar15 & 1) == 0) goto LAB_10631f1d8;
LAB_10631f0bc:
    lVar17 = *(long *)(puVar4 + 0x88);
    puVar16 = puVar4 + 0x78;
    _objc_loadWeakRetained();
    puVar6 = puVar16;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar17 == 4) {
      puVar8 = puVar6;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar16);
      if (puVar8 == (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
LAB_10631f158:
        puVar6 = puVar4 + 0x78;
        _objc_loadWeakRetained(puVar6);
        puVar16 = puVar6;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
    }
    else {
      puVar8 = puVar6;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar16);
      if (puVar8 == (undefined *)0x0) goto LAB_10631f158;
      puVar16 = puVar4;
      func_0x00010be6f960(puVar4,param_4,3);
      _objc_retainAutoreleasedReturnValue();
    }
    iVar3 = (int)*(undefined8 *)(puVar4 + 8);
    func_0x00010bf4e680();
    puVar6 = puVar16;
    func_0x00010c29bf00(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    if (iVar3 == 0) {
      _CGRectGetMinY();
      dVar21 = param_2 - dVar21;
      func_0x00010c181ac0(dVar21,puVar16);
    }
    else {
      _CGRectGetMinX();
      dVar21 = param_1 - dVar21;
      func_0x00010c181aa0(dVar21,puVar16);
    }
  }
  else {
    puVar16 = puVar4 + 0x78;
    _objc_loadWeakRetained();
    puVar6 = puVar16;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar8 != (undefined *)0x0) || ((puVar4[0x48] & 1) != 0)) {
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar16);
      goto LAB_10631f0bc;
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar16);
LAB_10631f1d8:
  puVar16 = puVar4 + 0x78;
  _objc_loadWeakRetained();
  puVar6 = puVar16;
  func_0x00010c0eb720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(puVar6);
  _objc_release(puVar16);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111180938;
  func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111180938,param_4,&uStack_1c0,auStack_180,
                      0x10);
  if (ppuVar13 != (undefined **)0x0) {
    lVar17 = *plStack_1b0;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_1b0 != lVar17) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111180938);
        }
        lVar18 = *(long *)(lStack_1b8 + (long)ppuVar20 * 8);
        lVar14 = lVar18;
        func_0x00010c067fc0();
        if (lVar14 == 0) {
          _objc_retain(puVar7);
          puVar16 = puVar7;
        }
        else {
          lVar14 = lVar18;
          func_0x00010c067fc0(lVar18);
          puVar16 = puVar4;
          func_0x00010be6f960(puVar4,param_4,lVar14);
          _objc_retainAutoreleasedReturnValue();
        }
        if (puVar16 != (undefined *)0x0) {
          func_0x00010be9c320(puVar4,param_4,puVar16);
          dVar22 = dVar23 - param_2;
          func_0x00010c067fc0(lVar18);
          func_0x00010c0f1080(dVar22 / dVar21,puVar16,param_4,lVar18);
        }
        _objc_release(puVar16);
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar13 != ppuVar20);
      ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111180938;
      func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111180938,param_4,&uStack_1c0,
                          auStack_180,0x10);
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar4 = puVar5 + 0x78;
  _objc_loadWeakRetained();
  puVar16 = puVar4;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar16);
  _objc_release(puVar4);
  uVar15 = *(ulong *)(puVar5 + 0x88);
  if (puVar6 == (undefined *)0x0) {
    if (uVar15 == 0) {
      uVar15 = *(ulong *)(puVar5 + 0x40);
      bVar2 = 1 < uVar15 - 1;
    }
    else {
      bVar2 = 2 < uVar15;
    }
    bVar2 = !bVar2;
    if (puVar5[0x48] != '\0') {
      bVar2 = uVar15 == 4;
    }
    puVar4 = (undefined *)(ulong)bVar2;
  }
  else if (uVar15 - 3 < 2) {
    puVar4 = (undefined *)0x1;
  }
  else if (uVar15 == 0) {
    puVar4 = (undefined *)(ulong)(*(long *)(puVar5 + 0x40) - 3U < 2);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}



/* Entry: 10631eb34; end: 10631f367; -[SCOperaVerticalNavigationManager _updateViewPropertiesWithContentOffset:] */

undefined * FUN_10631eb34(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  undefined **ppuVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  dVar21 = param_1;
  dVar23 = param_2;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010be43840();
  if ((int)uVar16 != 0) {
    lVar18 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar18;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar4;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar17 == 0) {
      cVar1 = *(char *)(param_3 + 0x48);
      _objc_release(lVar4);
      _objc_release(lVar18);
      if (cVar1 != '\x01') goto LAB_10631ecc8;
    }
    else {
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar18);
    }
    lVar18 = param_3 + 0x78;
    _objc_loadWeakRetained(lVar18);
    lVar4 = lVar18;
    func_0x00010c0eb720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    _objc_release(lVar4);
    _objc_release(lVar18);
    dVar22 = dVar21 + dVar21;
    if (param_2 <= dVar21) {
      dVar22 = dVar21;
    }
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010bf32180();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = dVar22 - param_2;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a0 = puVar5;
    func_0x00010c0df720(dVar21);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_98 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_98,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar15,param_4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
LAB_10631ecc8:
  uVar8 = param_3 + 0x78;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf5ede0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  iVar3 = (int)*(undefined8 *)(param_3 + 8);
  func_0x00010c0b57a0();
  if (((iVar3 != 0) && ((*(byte *)(param_3 + 0x38) & 1) == 0)) &&
     (((uVar16 & 1) != 0 || (uVar8 = param_3, func_0x00010be43820(), (int)uVar8 != 0)))) {
    lVar18 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar18;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar4;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar17;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar17);
    _objc_release(lVar4);
    _objc_release(lVar18);
    uVar8 = uVar9;
    func_0x00010c0f0be0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar10;
    func_0x00010c0720c0(lVar10,param_4,uVar11);
    if ((int)lVar18 == 0) {
      uVar19 = 1;
    }
    else {
      lVar18 = param_3 + 0x78;
      _objc_loadWeakRetained(lVar18);
      lVar4 = lVar18;
      func_0x00010c0741c0();
      uVar19 = (uint)lVar4 ^ 1;
      _objc_release(lVar18);
    }
    _objc_release(uVar11);
    _objc_release(uVar8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar18 = param_3 + 0x80;
    _objc_loadWeakRetained(lVar18);
    lVar4 = lVar18;
    func_0x00010c07d460();
    func_0x00010c0df760(puVar5,param_4,((uint)lVar4 | uVar19) & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar15,param_4,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar18);
    _objc_release(lVar10);
  }
  puVar5 = puVar15;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    lVar18 = param_3 + 0x78;
    _objc_loadWeakRetained(lVar18);
    lVar4 = lVar18;
    func_0x00010bf5f880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010bf51e00(puVar15);
    func_0x00010bf7e940(lVar4,param_4,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar18);
    lVar18 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar18;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar4;
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar18);
    if (lVar17 != 0) {
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010bf32180(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar15;
      func_0x00010c0e00e0(puVar15,param_4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      if (puVar6 != (undefined *)0x0) {
        lVar18 = param_3 + 0x78;
        _objc_loadWeakRetained(lVar18);
        lVar4 = lVar18;
        func_0x00010bf60c20();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar4;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar17;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar10;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar17);
        _objc_release(lVar4);
        _objc_release(lVar18);
        lVar18 = param_3 + 0x78;
        _objc_loadWeakRetained(lVar18);
        lVar4 = lVar18;
        func_0x00010c0f2060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar18);
        puVar5 = PTR_PTR_1126c9410;
        func_0x00010bf32180();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c9410;
        puStack_b0 = puVar5;
        func_0x00010bf32180(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar15;
        func_0x00010c0e00e0(puVar15,param_4,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_a8 = puVar7;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_a8,&puStack_b0
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e080(lVar4,param_4,puVar13);
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(lVar4);
        _objc_release(lVar12);
      }
    }
  }
  if ((int)uVar16 == 0) {
    uVar16 = *(ulong *)(param_3 + 8);
    func_0x00010bf4e680();
    if ((uVar16 & 1) == 0) goto LAB_10631f1d8;
LAB_10631f0bc:
    lVar17 = *(long *)(param_3 + 0x88);
    lVar18 = param_3 + 0x78;
    _objc_loadWeakRetained();
    lVar4 = lVar18;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar17 == 4) {
      lVar17 = lVar4;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar18);
      if (lVar17 == 0) {
        uVar16 = 0;
      }
      else {
LAB_10631f158:
        uVar8 = param_3 + 0x78;
        _objc_loadWeakRetained(uVar8);
        uVar16 = uVar8;
        func_0x00010bf5f880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
      }
    }
    else {
      lVar17 = lVar4;
      func_0x00010c0f3aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar18);
      if (lVar17 == 0) goto LAB_10631f158;
      uVar16 = param_3;
      func_0x00010be6f960(param_3,param_4,3);
      _objc_retainAutoreleasedReturnValue();
    }
    iVar3 = (int)*(undefined8 *)(param_3 + 8);
    func_0x00010bf4e680();
    uVar8 = uVar16;
    func_0x00010c29bf00(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    if (iVar3 == 0) {
      _CGRectGetMinY();
      dVar21 = param_2 - dVar21;
      func_0x00010c181ac0(dVar21,uVar16);
    }
    else {
      _CGRectGetMinX();
      dVar21 = param_1 - dVar21;
      func_0x00010c181aa0(dVar21,uVar16);
    }
  }
  else {
    uVar16 = param_3 + 0x78;
    _objc_loadWeakRetained();
    uVar8 = uVar16;
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010c0f3aa0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar11 != 0) || ((*(byte *)(param_3 + 0x48) & 1) != 0)) {
      _objc_release();
      _objc_release(uVar8);
      _objc_release(uVar16);
      goto LAB_10631f0bc;
    }
  }
  _objc_release(uVar8);
  _objc_release(uVar16);
LAB_10631f1d8:
  lVar18 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar4 = lVar18;
  func_0x00010c0eb720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(lVar4);
  _objc_release(lVar18);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  ppuVar14 = &PTR__OBJC_CLASS___NSConstantArray_111180938;
  func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111180938,param_4,&uStack_170,auStack_130,
                      0x10);
  if (ppuVar14 != (undefined **)0x0) {
    lVar18 = *plStack_160;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_160 != lVar18) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111180938);
        }
        lVar17 = *(long *)(lStack_168 + (long)ppuVar20 * 8);
        lVar4 = lVar17;
        func_0x00010c067fc0();
        if (lVar4 == 0) {
          _objc_retain(uVar9);
          uVar16 = uVar9;
        }
        else {
          lVar4 = lVar17;
          func_0x00010c067fc0(lVar17);
          uVar16 = param_3;
          func_0x00010be6f960(param_3,param_4,lVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        if (uVar16 != 0) {
          func_0x00010be9c320(param_3,param_4,uVar16);
          dVar22 = dVar23 - param_2;
          func_0x00010c067fc0(lVar17);
          func_0x00010c0f1080(dVar22 / dVar21,uVar16,param_4,lVar17);
        }
        _objc_release(uVar16);
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar14 != ppuVar20);
      ppuVar14 = &PTR__OBJC_CLASS___NSConstantArray_111180938;
      func_0x00010bf52a60(&PTR__OBJC_CLASS___NSConstantArray_111180938,param_4,&uStack_170,
                          auStack_130,0x10);
    } while (ppuVar14 != (undefined **)0x0);
  }
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar5 = puVar15 + 0x78;
  _objc_loadWeakRetained();
  puVar6 = puVar5;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar16 = *(ulong *)(puVar15 + 0x88);
  if (puVar7 == (undefined *)0x0) {
    if (uVar16 == 0) {
      uVar16 = *(ulong *)(puVar15 + 0x40);
      bVar2 = 1 < uVar16 - 1;
    }
    else {
      bVar2 = 2 < uVar16;
    }
    bVar2 = !bVar2;
    if (puVar15[0x48] != '\0') {
      bVar2 = uVar16 == 4;
    }
    puVar15 = (undefined *)(ulong)bVar2;
  }
  else if (uVar16 - 3 < 2) {
    puVar15 = (undefined *)0x1;
  }
  else if (uVar16 == 0) {
    puVar15 = (undefined *)(ulong)(*(long *)(puVar15 + 0x40) - 3U < 2);
  }
  else {
    puVar15 = (undefined *)0x0;
  }
  return puVar15;
}



/* Entry: 10631f368; end: 10631f437; -[SCOperaVerticalNavigationManager _isScrollingVertically] */

bool FUN_10631f368(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(ulong *)(param_1 + 0x88);
  if (lVar4 == 0) {
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(param_1 + 0x40);
      bVar1 = 1 < uVar5 - 1;
    }
    else {
      bVar1 = 2 < uVar5;
    }
    bVar1 = !bVar1;
    if (*(char *)(param_1 + 0x48) != '\0') {
      bVar1 = uVar5 == 4;
    }
  }
  else if (uVar5 - 3 < 2) {
    bVar1 = true;
  }
  else if (uVar5 == 0) {
    bVar1 = *(long *)(param_1 + 0x40) - 3U < 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10631f438; end: 10631f4d3; -[SCOperaVerticalNavigationManager _isScrollingHorizontally] */

bool FUN_10631f438(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f3aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x88) - 1U < 2) {
      return true;
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      return *(long *)(param_1 + 0x40) - 1U < 2;
    }
  }
  return false;
}



/* Entry: 10631f4d4; end: 10631f707; -[SCOperaVerticalNavigationManager _pageViewControllerForViewModel:atRelativePosition:] */

void FUN_10631f4d4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined1 *param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_6;
  _objc_retain(param_5);
  lVar2 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf8aec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(lVar3);
    puVar8 = auStack_100;
    lVar2 = lVar3;
    func_0x00010bf52a60(lVar3,param_4,&uStack_140,puVar8,0x10);
    if (lVar2 != 0) {
      lVar11 = *plStack_130;
      do {
        lVar12 = 0;
        do {
          dVar13 = param_2;
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(lVar3);
            dVar13 = param_2;
          }
          lVar10 = *(long *)(lStack_138 + lVar12 * 8);
          lVar4 = lVar10;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_5;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          param_2 = dVar13;
          if (lVar4 == lVar5) {
            func_0x00010be9c320(param_3,param_4,lVar10);
            lVar4 = param_3 + 0x78;
            dVar14 = dVar13;
            _objc_loadWeakRetained();
            lVar5 = lVar4;
            func_0x00010bf5ede0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar5;
            func_0x00010be9c320(param_3);
            param_2 = dVar14;
            _objc_release(lVar5);
            _objc_release(lVar4);
            bVar1 = dVar14 <= dVar13;
            if (param_6 != (undefined1 *)0x1) {
              bVar1 = dVar13 <= dVar14;
            }
            if (!bVar1) {
              _objc_retain(lVar10);
              param_3 = lVar3;
              goto LAB_10631f6ac;
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        puVar8 = auStack_100;
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_4,&uStack_140,puVar8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
  }
  param_3 = param_3 + 0x78;
  _objc_loadWeakRetained();
  lVar10 = param_3;
  lVar7 = param_5;
  func_0x00010c0f2080();
  _objc_retainAutoreleasedReturnValue();
LAB_10631f6ac:
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  _objc_retain(puVar8);
  lVar2 = lVar7;
  func_0x00010bfa0d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf926c0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    puVar6 = PTR_PTR_1126c9c20;
    _objc_alloc();
    lVar2 = lVar7;
    func_0x00010c0d6c60(lVar7);
    func_0x00010c02ec20(puVar6,param_4,lVar2,puVar8);
    uVar9 = *(undefined8 *)(param_5 + 0x50);
    *(undefined **)(param_5 + 0x50) = puVar6;
    _objc_release(uVar9);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10631f708; end: 10631f7b7; -[SCOperaVerticalNavigationManager _initProfilerIfNeeded:grapheneRegistry:] */

void FUN_10631f708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010bfa0d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126c9c20;
    _objc_alloc();
    uVar3 = param_3;
    func_0x00010c0d6c60(param_3);
    func_0x00010c02ec20(puVar2,param_2,uVar3,param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10631f7b8; end: 10631f7cf; -[SCOperaVerticalNavigationManager delegate] */

void FUN_10631f7b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631f7d0; end: 10631f7e7; -[SCOperaVerticalNavigationManager dataProvider] */

void FUN_10631f7d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631f7e8; end: 10631f7ff; -[SCOperaVerticalNavigationManager operaScrollView] */

void FUN_10631f7e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631f800; end: 10631f807; -[SCOperaVerticalNavigationManager scrollRelativePosition] */

undefined8 FUN_10631f800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10631f808; end: 10631f80f; -[SCOperaVerticalNavigationManager setScrollRelativePosition:] */

void FUN_10631f808(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10631f810; end: 10631f893; -[SCOperaVerticalNavigationManager .cxx_destruct] */

void FUN_10631f810(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10631f894; end: 10631f96b;  */

void FUN_10631f894(undefined *param_1,int param_2,undefined ***param_3,undefined ***param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined *)0x1) {
    if (param_2 == 0) {
      ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57d0;
      ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
      ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
      ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
      param_3 = &ppuStack_68;
      param_4 = &ppuStack_78;
    }
    else {
      ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57d0;
      ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
      ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
      ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57d0;
      param_3 = &ppuStack_48;
      param_4 = &ppuStack_58;
    }
  }
  else {
    if (param_1 != (undefined *)0x0) goto LAB_10631f944;
    ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57d0;
    ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
    ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57d0;
    ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c57e8;
    param_3 = &ppuStack_28;
    param_4 = &ppuStack_38;
  }
  param_5 = 2;
  param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
LAB_10631f944:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c0eaac0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb260();
  _objc_release(param_1);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97ce0(param_5);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10631f96c; end: 10631fab3; -[SCOperaScrollViewLayoutManager layoutPageViewControllers:viewModels:dimensionToLayoutDirectionMap:currentViewModel:] */

void FUN_10631f96c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaac0();
  uVar2 = param_1;
  uVar3 = param_2;
  _objc_release(lVar1);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eb260();
  _objc_release(lVar1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10631fab4;
  puStack_a8 = &UNK_11091c898;
  lStack_a0 = param_3;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_8;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf97ce0(param_7,param_4,&puStack_c0);
  _objc_release(param_7);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10631fab4; end: 10631fbff;  */

void FUN_10631fab4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  func_0x00010c067fc0();
  lVar3 = param_3;
  func_0x00010c067fc0();
  _objc_release(param_3);
  if ((param_2 != 0) && (lVar3 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = 0;
    if (lVar3 != 2) {
      uVar8 = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x40);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be49460(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),uVar2,uVar8,
                        uVar1);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10631fc00; end: 10631fcbf; -[SCOperaScrollViewLayoutManager _layoutPageViewControllers:loadedViewModels:currentViewModel:contentOffsetForCurrentViewModel:nextOperaPageOffset:] */

void FUN_10631fc00(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8,undefined8 param_9)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  func_0x00010bfecde0(param_8,param_6,param_9);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  pcStack_70 = FUN_10631fcc0;
  puStack_68 = &UNK_11091c8c8;
  dStack_60 = param_3;
  dStack_58 = param_4;
  func_0x00010bdc7c00(param_1 - param_3 * (double)param_8,param_2 - param_4 * (double)param_8,
                      param_5,param_6,param_7,&puStack_80);
  _objc_release(param_7);
  return;
}



/* Entry: 10631fcc0; end: 10631fccf;  */

undefined1  [16] FUN_10631fcc0(double param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 + *(double *)(param_3 + 0x20);
  auVar1._8_8_ = param_2 + *(double *)(param_3 + 0x28);
  return auVar1;
}



/* Entry: 10631fcd0; end: 10631fe33; -[SCOperaScrollViewLayoutManager _addPageViewControllers:originOffset:nextOffsetGenerator:] */

void FUN_10631fcd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_5;
  func_0x00010bf52a60(param_5,param_4,&uStack_140,auStack_f8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_130;
    do {
      lVar4 = 0;
      do {
        if (*plStack_130 != lVar3) {
          _objc_enumerationMutation(param_5);
        }
        lVar2 = param_3 + 8;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c231640(param_1,param_2);
        _objc_release(lVar2);
        (**(code **)(param_6 + 0x10))(param_6);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_5;
      func_0x00010bf52a60(param_5,param_4,&uStack_140,auStack_f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_5 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631fe34; end: 10631fe4b; -[SCOperaScrollViewLayoutManager delegate] */

void FUN_10631fe34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631fe4c; end: 10631fe57; -[SCOperaScrollViewLayoutManager setDelegate:] */

void FUN_10631fe4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10631fe58; end: 10631fe6f; -[SCOperaScrollViewLayoutManager scrollViewDataProvider] */

void FUN_10631fe58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631fe70; end: 10631fe7b; -[SCOperaScrollViewLayoutManager setScrollViewDataProvider:] */

void FUN_10631fe70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10631fe7c; end: 10631fea3; -[SCOperaScrollViewLayoutManager .cxx_destruct] */

void FUN_10631fe7c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10631fea4; end: 10631ff33; -[SCOperaAppStateChangeTracker init] */

undefined1 * FUN_10631fea4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0eb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10631ff34; end: 10631ff4b; -[SCOperaAppStateChangeTracker stateChanges] */

void FUN_10631ff34(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10631ff4c; end: 10631ff53; -[SCOperaAppStateChangeTracker registerAppWillForeground] */

void FUN_10631ff4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerStateChange__112580100,0);
  return;
}



/* Entry: 10631ff54; end: 10631ff5b; -[SCOperaAppStateChangeTracker registerAppDidBecomeActive] */

void FUN_10631ff54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerStateChange__112580100,1);
  return;
}



/* Entry: 10631ff5c; end: 10631ff63; -[SCOperaAppStateChangeTracker registerAppWillResignActive] */

void FUN_10631ff5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerStateChange__112580100,2);
  return;
}



/* Entry: 10631ff64; end: 10631ff6b; -[SCOperaAppStateChangeTracker registerAppWillBackground] */

void FUN_10631ff64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be89d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerStateChange__112580100,3);
  return;
}



/* Entry: 10631ff6c; end: 10631ffdb; -[SCOperaAppStateChangeTracker hasState:] */

undefined8 FUN_10631ff6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10631ffdc; end: 106320003; -[SCOperaAppStateChangeTracker reset] */

/* WARNING: Possible PIC construction at 0x00010631fff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010631fff4) */

void FUN_10631ffdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106320004; end: 106320097; -[SCOperaAppStateChangeTracker _registerStateChange:] */

void FUN_106320004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,PTR____kCFBooleanTrue_11034ab68,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106320098; end: 1063200c7; -[SCOperaAppStateChangeTracker .cxx_destruct] */

void FUN_106320098(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063200c8; end: 106320157; -[SCOperaExtendedTouchOverlayManager initWithOperaView:] */

undefined1 * FUN_1063200c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0eb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106320158; end: 10632026f; -[SCOperaExtendedTouchOverlayManager dealloc] */

void FUN_106320158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  plVar3 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_5 + 0x10);
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = &uStack_110;
  puVar11 = auStack_c8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_100;
    do {
      lVar13 = 0;
      do {
        if (*plStack_100 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bdfb5e0(param_5);
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar10 = &uStack_110;
      puVar11 = auStack_c8;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puStack_118 = PTR_PTR_1126f0eb8;
  lStack_120 = param_5;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  puVar4 = puVar10;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)((long)plVar3 + 8);
  _objc_loadWeakRetained();
  if (((puVar11 != (undefined1 *)0x0) && (puVar4 != (undefined8 *)0x0)) &&
     (puVar5 != (undefined1 *)0x0)) {
    _objc_retain(puVar5);
    _objc_retain(puVar11);
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    puVar14 = puVar5;
    do {
      func_0x00010befa120(puVar6);
      puVar7 = puVar14;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar14 = puVar7;
    } while (puVar7 != (undefined1 *)0x0);
    _objc_retain(puVar11);
    puVar14 = puVar11;
    do {
      puVar8 = puVar6;
      func_0x00010bf4b900();
      puVar7 = puVar14;
      if (((ulong)puVar8 & 1) != 0) break;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      puVar14 = puVar7;
    } while (puVar7 != (undefined1 *)0x0);
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar5);
    if (puVar7 != (undefined1 *)0x0) {
      uVar9 = *(undefined8 *)((long)plVar3 + 0x10);
      func_0x00010c0dff20(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfb5e0(plVar3);
      _objc_release(uVar9);
      puVar6 = PTR_PTR_1126c9c28;
      _objc_alloc(PTR_PTR_1126c9c28);
      func_0x00010c050d00(uVar15,param_2,param_3,param_4);
      func_0x00010bf20c00(puVar7);
      func_0x00010c19f0e0(puVar6);
      func_0x00010befbb60(puVar7);
      puVar8 = puVar6;
      func_0x00010c268fe0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(puVar4);
      _objc_release(puVar8);
      func_0x00010c1d0560(*(undefined8 *)((long)plVar3 + 0x10));
      _objc_release(puVar6);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106320270; end: 1063204af; -[SCOperaExtendedTouchOverlayManager registerGesture:blockingView:extendedInsets:defersInBoundsTouches:] */

void FUN_106320270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained();
  if (((param_8 != 0) && (lVar1 != 0)) && (lVar2 != 0)) {
    _objc_retain(lVar2);
    _objc_retain(param_8);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    lVar7 = lVar2;
    do {
      func_0x00010befa120(puVar3,param_6,lVar7);
      lVar4 = lVar7;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar4;
    } while (lVar4 != 0);
    _objc_retain(param_8);
    lVar7 = param_8;
    do {
      puVar5 = puVar3;
      func_0x00010bf4b900(puVar3,param_6,lVar7);
      lVar4 = lVar7;
      if (((ulong)puVar5 & 1) != 0) break;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar4;
    } while (lVar4 != 0);
    _objc_release(puVar3);
    _objc_release(param_8);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_5 + 0x10);
      func_0x00010c0dff20(uVar6,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfb5e0(param_5,param_6,uVar6);
      _objc_release(uVar6);
      puVar3 = PTR_PTR_1126c9c28;
      _objc_alloc(PTR_PTR_1126c9c28);
      func_0x00010c050d00(param_1,param_2,param_3,param_4);
      func_0x00010bf20c00(lVar4);
      func_0x00010c19f0e0(puVar3);
      func_0x00010befbb60(lVar4,param_6,puVar3);
      puVar5 = puVar3;
      func_0x00010c268fe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(lVar1,param_6,puVar5);
      _objc_release(puVar5);
      func_0x00010c1d0560(*(undefined8 *)(param_5 + 0x10),param_6,puVar3,param_7);
      _objc_release(puVar3);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1063204b0; end: 10632051f; -[SCOperaExtendedTouchOverlayManager unregisterGesture:] */

void FUN_1063204b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfb5e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106320520; end: 1063205b3; -[SCOperaExtendedTouchOverlayManager _detachOverlayView:] */

void FUN_106320520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c268fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c268fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12c960(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063205b4; end: 1063205df; -[SCOperaExtendedTouchOverlayManager .cxx_destruct] */

void FUN_1063205b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1063205e0; end: 106320757; -[SCOperaExtendedTouchOverlayView initWithTargetView:blockingView:extendedInsets:defersInBoundsTouches:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1063205e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f0ec0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112745b08),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112745b0c),param_8);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112745b10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112745b14) = param_9;
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar5 = (long)_DAT_112745b18;
    uVar4 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined **)((long)puVar2 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c178280(*(undefined8 *)((long)puVar2 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c16d4a0(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 106320758; end: 106320787; -[SCOperaExtendedTouchOverlayView tapForwardingRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106320758(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106320788; end: 1063208a3; -[SCOperaExtendedTouchOverlayView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106320788(double param_1,double param_2,double param_3,double param_4,long param_5,
                   undefined8 param_6)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = param_5 + _DAT_112745b08;
  dVar5 = param_1;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (((uVar4 == 0) || (uVar3 = uVar2, func_0x00010c074c20(), (uVar3 & 1) != 0)) ||
       (func_0x00010bf01b40(uVar2), dVar5 < 0.01)) {
      _objc_release(uVar4);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c082800();
      _objc_release(uVar4);
      if ((int)uVar3 != 0) {
        func_0x00010bf512a0(param_1,param_2,param_5,param_6,uVar2);
        uVar4 = uVar2;
        dVar5 = param_1;
        dVar6 = param_2;
        func_0x00010bf20c00(uVar2);
        pdVar1 = (double *)(param_5 + _DAT_112745b10);
        _CGRectContainsPoint
                  (dVar5 + pdVar1[1],dVar6 + *pdVar1,param_3 - (pdVar1[1] + pdVar1[3]),
                   param_4 - (*pdVar1 + pdVar1[2]),param_1,param_2);
        goto LAB_106320808;
      }
    }
  }
  uVar4 = 0;
LAB_106320808:
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 1063208a4; end: 106320963; -[SCOperaExtendedTouchOverlayView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063208a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_3;
  func_0x00010c102b20();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
    goto LAB_10632094c;
  }
  uVar2 = param_3 + _DAT_112745b08;
  _objc_loadWeakRetained();
  func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar2);
  if (*(char *)(param_3 + _DAT_112745b14) == '\x01') {
    uVar3 = uVar2;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    if ((uVar3 & 1) == 0) goto LAB_106320938;
    uVar3 = 0;
  }
  else {
LAB_106320938:
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  _objc_release(uVar2);
LAB_10632094c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106320964; end: 106320b23; -[SCOperaExtendedTouchOverlayView _handleForwardedTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106320964(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  uVar2 = param_1 + _DAT_112745b08;
  _objc_loadWeakRetained();
  uVar3 = param_1 + _DAT_112745b0c;
  _objc_loadWeakRetained();
  if (uVar2 != 0 && uVar3 != 0) {
    uVar4 = uVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 != 0) {
      func_0x00010c09ef00(param_3);
      uVar4 = uVar2;
      func_0x00010bf20c00();
      _CGRectContainsPoint();
      if ((uVar4 & 1) == 0) {
        func_0x00010c09ef00(param_3);
        uVar4 = uVar3;
        func_0x00010bfe3a40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 != 0) {
          _objc_retain(uVar4);
          uVar8 = 0;
          uVar9 = uVar4;
          do {
            puVar5 = PTR__OBJC_CLASS___UIControl_1126c3e60;
            _objc_retain(uVar9);
            _objc_opt_class(puVar5);
            uVar6 = uVar9;
            _objc_opt_isKindOfClass(uVar9,puVar5);
            uVar1 = uVar9;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar9);
            _objc_release(uVar8);
            uVar7 = uVar9;
            if ((uVar6 & 1) != 0 || uVar9 == uVar3) break;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            uVar8 = uVar1;
            uVar9 = uVar7;
          } while (uVar7 != 0);
          _objc_release(uVar7);
          uVar8 = uVar1;
          func_0x00010c071800();
          if ((int)uVar8 != 0) {
            func_0x00010c15b4c0(uVar1);
          }
          _objc_release(uVar1);
        }
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106320b24; end: 106320bbb; -[SCOperaExtendedTouchOverlayView gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106320b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  param_1 = param_1 + _DAT_112745b08;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c09ef00(param_4,param_2,param_1);
    lVar2 = param_1;
    func_0x00010bf20c00(param_1);
    uVar1 = (uint)lVar2;
    _CGRectContainsPoint();
    uVar1 = uVar1 ^ 1;
  }
  _objc_release(param_1);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 106320bbc; end: 106320c03; -[SCOperaExtendedTouchOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106320bbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745b18,0);
  _objc_destroyWeak(param_1 + _DAT_112745b0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112745b08);
  return;
}



/* Entry: 106320c04; end: 106320dab; -[SCOperaView initWithConfiguration:operaSafeAreaInsets:configProvider:internalConfigProvider:scrollTransitionResolver:debugServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106320c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010bf20c00(param_7);
  puStack_78 = PTR_PTR_1126f0ec8;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112745b20;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112745b24);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar5 = (long)_DAT_112745b28;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112745b2c;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_11;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745b30);
    *(undefined **)((long)puVar2 + (long)_DAT_112745b30) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c9c30;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112745b34);
    *(undefined **)((long)puVar2 + (long)_DAT_112745b34) = puVar4;
    _objc_release(uVar3);
    func_0x00010be71f00(puVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 106320dac; end: 106320e8b; -[SCOperaView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106320dac(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0ec8;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112745b20;
  lVar1 = *(long *)(param_2 + lVar2);
  func_0x00010c0da1c0();
  if (lVar1 != 3) {
    func_0x00010beede60(*(undefined8 *)(param_2 + lVar2));
    if (param_1 <= 0.0) {
      func_0x000100594f4c();
    }
    else {
      func_0x00010beede60(*(undefined8 *)(param_2 + lVar2));
    }
    dVar3 = param_1;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    dVar3 = dVar3 - param_1;
    lVar1 = (long)_DAT_112745b24;
    dVar4 = dVar3 - *(double *)(param_2 + lVar1 + 0x10);
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    func_0x00010c19f0e0(0,dVar4,dVar3,param_1 + *(double *)(param_2 + lVar1 + 0x10),
                        *(undefined8 *)(param_2 + _DAT_112745b38));
  }
  return;
}



/* Entry: 106320e8c; end: 106320ebf; -[SCOperaView traitCollectionDidChange:] */

void FUN_106320e8c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0ec8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_traitCollectionDidChange__11267bf88);
  return;
}



/* Entry: 106320ec0; end: 106320f1f; -[SCOperaView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106320ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined *puStack_18;
  
  if ((*(byte *)(param_1 + _DAT_112745b1c) & 1) == 0) {
    puStack_18 = PTR_PTR_1126f0ec8;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_hitTest_withEvent__1125d6850);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1063669a0(param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106320f20; end: 106320fdf; -[SCOperaView showBlurOverlayOnViews:blurBounds:] */

void FUN_106320f20(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    func_0x00010bfe1ac0(param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106320fe0;
    puStack_48 = &UNK_11091c8e8;
    _objc_retain(param_4);
    lStack_40 = param_4;
    uStack_38 = param_1;
    func_0x00010bf97e80(param_3,param_2,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106320fe0; end: 1063210e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106320fe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    func_0x00010c19f0e0(puVar2);
    _objc_release(uVar4);
    func_0x00010befbb60(param_2);
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112745b30));
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063210e4; end: 10632111b; -[SCOperaView hideBlurOverlays] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063210e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112745b30;
  func_0x00010c0b7520(*(undefined8 *)(param_1 + lVar1),param_2,PTR_s_removeFromSuperview_112628c78);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10632111c; end: 10632118b; -[SCOperaView setActionBarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632111c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112745b38;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    if (param_3 == 0) goto LAB_106321178;
  }
  func_0x00010befbb60(param_1,param_2,param_3);
LAB_106321178:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10632118c; end: 1063211ff; -[SCOperaView setNoClipViewHitTestEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632118c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112745b1c) = param_3;
  lVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd680();
  _objc_release(lVar1);
  func_0x00010c151f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106321200; end: 1063213c7; -[SCOperaView _performInitialSetup:internalConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106321200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c17d4c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b20);
  func_0x00010bf12160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1);
  _objc_release(uVar1);
  func_0x00010c160fc0(param_1);
  lVar4 = param_1;
  func_0x00010bdf2e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = (long)_DAT_112745b3c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar4;
  _objc_release(uVar1);
  func_0x00010befbb60(param_1);
  puVar2 = PTR_PTR_1126c9c38;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112745b40;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18fc20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3));
  uVar1 = param_3;
  func_0x00010c0eb880();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_112745b44;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c178280(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c18b5c0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + lVar4));
    return;
  }
  return;
}



/* Entry: 1063213c8; end: 10632146b; -[SCOperaView _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063213c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112745b44);
  if (param_3 != lVar1) {
    return;
  }
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb760();
  }
  else {
    if (lVar1 != 1) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb740();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10632146c; end: 106321617; -[SCOperaView _createScrollViewContainer:internalConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632146c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf8fde0();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112745b28);
    _objc_retain(uVar5);
  }
  puVar1 = PTR_PTR_1126c9c40;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b20);
  func_0x00010c0d6c60(uVar2);
  func_0x00010c0149a0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,uVar2,param_3
                      ,param_4,uVar5,*(undefined8 *)(param_1 + _DAT_112745b2c),
                      *(undefined8 *)(param_1 + _DAT_112745b34));
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c219a20(0x3fc0000000000000,puVar1);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126b6138;
  puStack_70 = puVar3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126aec40;
  puStack_68 = puVar4;
  _objc_opt_class();
  puVar4 = PTR__OBJC_CLASS___UITextField_1126af060;
  puStack_60 = puVar3;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___UITextView_1126afb88;
  puStack_58 = puVar4;
  _objc_opt_class();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211c40(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106321618; end: 10632164f; -[SCOperaView scrollContentViewDidRefreshDisplay:] */

void FUN_106321618(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106321650; end: 106321667; -[SCOperaView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106321650(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + _DAT_112745b44);
}



/* Entry: 106321668; end: 106321677; -[SCOperaView scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106321668(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b3c);
}



/* Entry: 106321678; end: 106321687; -[SCOperaView scrollContentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106321678(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b40);
}



/* Entry: 106321688; end: 1063216a7; -[SCOperaView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106321688(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745b48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063216a8; end: 1063216bb; -[SCOperaView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063216a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112745b48,param_3);
  return;
}



/* Entry: 1063216bc; end: 1063216cb; -[SCOperaView actionBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063216bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745b38);
}



/* Entry: 1063216cc; end: 1063216db; -[SCOperaView noClipViewHitTestEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1063216cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745b1c);
}



/* Entry: 1063216dc; end: 106321797; -[SCOperaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063216dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745b38,0);
  _objc_destroyWeak(param_1 + _DAT_112745b48);
  _objc_storeStrong(param_1 + _DAT_112745b40,0);
  _objc_storeStrong(param_1 + _DAT_112745b3c,0);
  _objc_storeStrong(param_1 + _DAT_112745b34,0);
  _objc_storeStrong(param_1 + _DAT_112745b2c,0);
  _objc_storeStrong(param_1 + _DAT_112745b44,0);
  _objc_storeStrong(param_1 + _DAT_112745b28,0);
  _objc_storeStrong(param_1 + _DAT_112745b30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745b20,0);
  return;
}



/* Entry: 106321798; end: 106321aa3; -[SCOperaViewController initWithConfiguration:operaDependencies:initialViewModel:sessions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106321798(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)((long)param_1 + (long)_DAT_112745b58);
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf99b60();
  _objc_release(uVar15);
  _objc_release(uVar1);
  if ((int)uVar18 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c9b40;
    _objc_opt_new(PTR_PTR_1126c9b40);
    puVar3 = PTR_PTR_1126c9b48;
    _objc_opt_new(PTR_PTR_1126c9b48);
    puVar20 = PTR_PTR_1126c9b50;
    _objc_alloc();
    func_0x00010c031f20();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126c9b60;
  _objc_alloc();
  puVar4 = param_4;
  func_0x00010bfb2ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0138a0(puVar2,param_2,puVar5,puVar7);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 0;
  puVar13 = param_3;
  puVar14 = param_4;
  uVar15 = param_5;
  puVar16 = puVar2;
  puVar17 = puVar20;
  func_0x00010c001c00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (param_1 != (undefined8 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_6);
    puVar13 = &uStack_130;
    puVar14 = auStack_f0;
    uVar15 = 0x10;
    lVar8 = param_6;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar22 = *plStack_120;
      do {
        lVar21 = 0;
        do {
          if (*plStack_120 != lVar22) {
            _objc_enumerationMutation(param_6);
          }
          uVar1 = *(undefined8 *)(lStack_128 + lVar21 * 8);
          uVar19 = *(undefined8 *)((long)param_1 + (long)_DAT_112745b5c);
          uVar15 = uVar1;
          func_0x00010c127820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef99a0(uVar19,param_2,uVar1,uVar15);
          _objc_release(uVar15);
          lVar21 = lVar21 + 1;
        } while (lVar8 != lVar21);
        puVar13 = &uStack_130;
        puVar14 = auStack_f0;
        uVar15 = 0x10;
        lVar8 = param_6;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(param_6);
  }
  _objc_release(puVar20);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(0);
  puVar20 = PTR_PTR_1126c98e0;
  _objc_retain(puVar3);
  _objc_retain(uVar18);
  _objc_retain(puVar17);
  _objc_retain(puVar16);
  _objc_retain(uVar15);
  _objc_retain(puVar14);
  _objc_retain(puVar13);
  func_0x00010bf18180(puVar20,param_2,&PTR____CFConstantStringClassReference_110e4ae58);
  puVar2 = PTR_PTR_1126c9c48;
  _objc_alloc();
  puVar9 = PTR_PTR_1126c9c50;
  _objc_opt_new(PTR_PTR_1126c9c50);
  puVar4 = puVar14;
  func_0x00010c069200(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bd00(puVar2,param_2,uVar15,puVar9,puVar4);
  _objc_release(uVar15);
  _objc_release(puVar4);
  _objc_release(puVar9);
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar20);
  uVar15 = *(undefined8 *)((long)param_3 + (long)_DAT_112745b60);
  *(undefined8 *)((long)param_3 + (long)_DAT_112745b60) = 0;
  _objc_retain(0);
  _objc_release(uVar15);
  puVar20 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4ae78);
  puVar9 = PTR_PTR_1126c9c58;
  _objc_alloc();
  puVar4 = puVar14;
  func_0x00010c0d78a0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar14;
  func_0x00010c0b52a0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar14;
  func_0x00010bf461c0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar14;
  func_0x00010c069200(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar14;
  func_0x00010bf66420(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001bc0(puVar9,param_2,puVar13,puVar4,puVar5,puVar7,puVar10,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar20);
  puVar20 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4ae98);
  puVar12 = PTR_PTR_1126c9c60;
  _objc_alloc();
  func_0x00010c045ba0();
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar20);
  puVar4 = puVar14;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001be0(param_3,param_2,puVar13,puVar14,puVar16,puVar17,puVar2,puVar5,puVar20,puVar9,
                      puVar12,uVar18,puVar3,0);
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar2);
  return param_3;
}



/* Entry: 106321aa4; end: 106321e2f; -[SCOperaViewController initWithConfiguration:operaDependencies:initialViewModel:eventAnnouncer:eventPublisher:trackerService:operaSessionId:operaSessionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106321aa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c98e0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf18180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4ae58);
  puVar2 = PTR_PTR_1126c9c48;
  _objc_alloc();
  puVar3 = PTR_PTR_1126c9c50;
  _objc_opt_new(PTR_PTR_1126c9c50);
  uVar10 = param_4;
  func_0x00010c069200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bd00(puVar2,param_2,param_5,puVar3,uVar10);
  _objc_release(param_5);
  _objc_release(uVar10);
  _objc_release(puVar3);
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112745b60);
  *(undefined8 *)(param_1 + _DAT_112745b60) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar10);
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4ae78);
  puVar3 = PTR_PTR_1126c9c58;
  _objc_alloc();
  uVar10 = param_4;
  func_0x00010c0d78a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0b52a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf461c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c069200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf66420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001bc0(puVar3,param_2,param_3,uVar10,uVar4,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4ae98);
  puVar9 = PTR_PTR_1126c9c60;
  _objc_alloc();
  func_0x00010c045ba0();
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
  uVar10 = param_4;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001be0(param_1,param_2,param_3,param_4,param_6,param_7,puVar2,uVar4,puVar1,puVar3,
                      puVar9,param_8,param_9,param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 106321e30; end: 106322c3f; -[SCOperaViewController initWithConfiguration:operaDependencies:eventAnnouncer:eventPublisher:viewModelsManager:customVolumeController:notificationCenter:sharedResourceManager:viewControllerCacheManager:trackerService:operaSessionId:operaSessionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106321e30(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
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
  func_0x00010bf18180();
  puStack_a0 = PTR_PTR_1126f0ed0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    _objc_alloc_init();
    lVar9 = (long)_DAT_112745b64;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar7);
    func_0x00010bf77520(*(undefined8 *)((long)puVar1 + lVar9));
    lVar10 = (long)_DAT_112745b60;
    _objc_retain(param_18);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_18;
    _objc_release(uVar7);
    lVar11 = (long)_DAT_112745b68;
    _objc_retain(param_7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
    *(long *)((long)puVar1 + lVar11) = param_7;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112745b58;
    _objc_retain(param_8);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(long *)((long)puVar1 + lVar9) = param_8;
    _objc_release(uVar7);
    lVar9 = param_8;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010c14f9e0();
    *(char *)((long)puVar1 + (long)_DAT_112745b6c) = (char)lVar12;
    _objc_release(lVar9);
    puVar2 = PTR_PTR_1126afdd8;
    func_0x00010c0f2220(puVar1);
    func_0x00010bfc8740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar2);
    lVar9 = param_8;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      _objc_release();
    }
    uVar7 = param_17;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745b70);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112745b70) = uVar7;
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745b74);
    *(undefined **)((long)puVar1 + (long)_DAT_112745b74) = puVar2;
    _objc_release(uVar7);
    lVar9 = param_8;
    func_0x00010bf461c0(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(lVar12);
    _objc_release(lVar9);
    puVar2 = PTR_PTR_1126c9c68;
    _objc_alloc();
    func_0x00010c00a760();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745b78);
    *(undefined **)((long)puVar1 + (long)_DAT_112745b78) = puVar2;
    _objc_release(uVar7);
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126c9d68;
    _objc_retain(param_7);
    _objc_opt_new();
    func_0x00010c063aa0(param_7);
    _objc_release(param_7);
    func_0x00010c161be0(puVar2);
    lVar16 = (long)_DAT_112745b7c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar7);
    func_0x00010bee7b20(puVar1);
    lVar9 = (long)_DAT_112745b80;
    _objc_retain(param_14);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_14;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112745b84;
    _objc_retain(param_15);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_15;
    _objc_release(uVar7);
    lVar12 = (long)_DAT_112745b5c;
    _objc_retain(param_9);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_9;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112745b88;
    _objc_retain(param_10);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_10;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112745b8c;
    _objc_retain(param_11);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_11;
    _objc_release(uVar7);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar9));
    lVar13 = (long)_DAT_112745b90;
    _objc_retain(param_16);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_16;
    _objc_release(uVar7);
    lVar9 = *(long *)((long)puVar1 + lVar11);
    func_0x00010bf61800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x0001008522a8();
      uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
      func_0x00010c0da1c0(uVar7);
      uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
      func_0x00010bf8c120(uVar8);
      func_0x000107b7fb60(param_1,param_2,param_3,param_4,puVar2,uVar7,uVar8);
      lVar9 = param_7;
      dVar17 = param_1;
      func_0x00010bf4c640();
      if (lVar9 < 0) {
        lVar9 = param_8;
        func_0x00010bf461c0(param_8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfbe4c0();
        _objc_release(lVar3);
        _objc_release(lVar9);
      }
      else {
        func_0x00010bf4c640(param_7);
      }
      lVar9 = param_8;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf804c0();
      _objc_release(lVar3);
      _objc_release(lVar9);
      lVar9 = *(long *)((long)puVar1 + lVar11);
      func_0x00010c0da1c0();
      func_0x00010bf6a1a0(param_7);
      dVar17 = ABS(dVar17 + 0.0) * 2.220446049250313e-16;
      if (dVar17 <= 2.2250738585072014e-308) {
        dVar17 = 2.2250738585072014e-308;
      }
      dVar19 = 0.0;
      if (lVar9 == 1) {
        func_0x000100594f4c();
        dVar19 = dVar17;
      }
      func_0x000100594f4c();
      puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      dVar18 = dVar17;
      func_0x00010bf5e640();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c292ac0();
      _objc_release(puVar2);
      dVar20 = dVar17;
      if (puVar5 == (undefined *)0x1) {
        func_0x000100594f4c();
        dVar19 = dVar18;
        dVar20 = 0.0;
        if ((int)lVar4 == 0) {
          dVar20 = dVar17;
        }
      }
      puVar2 = PTR_PTR_1126c9d70;
      _objc_alloc();
      func_0x00010c031e20(param_1,param_2,param_3,param_4,dVar19,dVar20);
    }
    else {
      puVar2 = *(undefined **)((long)puVar1 + lVar11);
      func_0x00010bf61800();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745b94);
    *(undefined **)((long)puVar1 + (long)_DAT_112745b94) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c99e8;
    _objc_alloc_init();
    lVar9 = (long)_DAT_112745b98;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar9);
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    lVar9 = param_8;
    func_0x00010bf461c0(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_8;
    func_0x00010c069200(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010c29e220();
    FUN_106316868(uVar8,uVar14,uVar15,puVar1,puVar1,param_9,lVar11,lVar16,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    _objc_release(lVar11);
    _objc_release(lVar9);
    lVar9 = (long)_DAT_112745b9c;
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = uVar8;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c9c70;
    _objc_alloc();
    func_0x00010c02ea00();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745ba0);
    *(undefined **)((long)puVar1 + (long)_DAT_112745ba0) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c9c78;
    func_0x00010c282640();
    *(undefined **)((long)puVar1 + (long)_DAT_112745ba4) = puVar2;
    lVar9 = param_8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_112745ba8) = (char)lVar11;
    _objc_release(lVar10);
    _objc_release(lVar9);
    lVar9 = param_8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2555c0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar11;
    func_0x00010c08a0e0();
    *(double *)((long)puVar1 + (long)_DAT_112745bac) = (double)(int)lVar16 / 1000.0;
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    lVar9 = param_8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf7fdc0();
    *(char *)((long)puVar1 + (long)_DAT_112745bb0) = (char)lVar11;
    _objc_release(lVar10);
    _objc_release(lVar9);
    lVar9 = param_8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf84e20();
    *(long *)((long)puVar1 + (long)_DAT_112745bb4) = lVar11;
    _objc_release(lVar10);
    _objc_release(lVar9);
    lVar9 = param_8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010befdf40();
    *(long *)((long)puVar1 + (long)_DAT_112745bb8) = lVar11;
    _objc_release(lVar10);
    _objc_release(lVar9);
    lVar9 = param_8;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c29d0e0();
    *(char *)((long)puVar1 + (long)_DAT_112745bbc) = (char)lVar10;
    _objc_release(lVar9);
    lVar9 = param_8;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf90460();
    *(char *)((long)puVar1 + (long)_DAT_112745bc0) = (char)lVar10;
    _objc_release(lVar9);
    puVar2 = PTR_PTR_1126c9c80;
    _objc_opt_new();
    lVar9 = (long)_DAT_112745bc4;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar7);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1f7d20(*(undefined8 *)((long)puVar1 + lVar9));
    puVar2 = PTR_PTR_1126c9c88;
    _objc_alloc();
    func_0x00010c031d20();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bc8);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bc8) = puVar2;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112745bcc;
    _objc_retain(param_12);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_12;
    _objc_release(uVar7);
    lVar9 = (long)_DAT_112745bd0;
    _objc_retain(param_13);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_13;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar12);
    puVar6 = puVar1;
    func_0x00010c127820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar7);
    _objc_release(puVar6);
    uVar15 = *(undefined8 *)((long)puVar1 + lVar12);
    uVar14 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bdc2b20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c127840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar15);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bd4);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bd4) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bd8);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bd8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bdc);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bdc) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c9c90;
    _objc_alloc_init();
    lVar9 = (long)_DAT_112745be0;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar7);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar9));
    lVar9 = param_8;
    func_0x00010bf0fb00(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(lVar9);
    func_0x00010befa2c0(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112745be4) = 1;
    func_0x00010beaec00(puVar1);
    func_0x00010be70ce0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745be8);
    *(undefined **)((long)puVar1 + (long)_DAT_112745be8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c9c98;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bec);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bec) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126c9ca0;
    _objc_alloc();
    lVar9 = param_8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001220();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bf0);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bf0) = puVar2;
    _objc_release(uVar7);
    _objc_release(lVar12);
    _objc_release(lVar9);
    func_0x00010bdc84c0(puVar1);
    puVar2 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bf4);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bf4) = puVar2;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar2 == (undefined *)0x0) {
      lVar9 = param_8;
      func_0x00010c22a1e0(param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c9aa8;
      func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c197660();
      _objc_release(puVar2);
      _objc_release(lVar12);
      _objc_release(lVar9);
    }
    puVar2 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1270e0();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ca0();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bf8);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bf8) = puVar2;
    _objc_release(uVar7);
    func_0x00010be3a180(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9b78;
    _objc_alloc();
    func_0x00010c050a20();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112745bfc);
    *(undefined **)((long)puVar1 + (long)_DAT_112745bfc) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar8);
  }
  func_0x00010bf94960(PTR_PTR_1126c98e0);
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
  return puVar1;
}



/* Entry: 106322c40; end: 106322d67; -[SCOperaViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106322c40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c2a5e40(*(undefined8 *)(param_1 + _DAT_112745b64),param_2,param_1);
  func_0x00010c077480(PTR__OBJC_CLASS___NSThread_1126b47e0);
  puVar1 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2821e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2820c0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bf40();
  _objc_release(puVar1);
  func_0x00010c12d5e0(param_1);
  if (lRam00000001136c3828 != -1) {
    func_0x00010002a2fc(0x1136c3828,&PTR___NSConcreteGlobalBlock_11091ca38);
  }
  if ((bRam00000001136c3810 & 1) != 0) {
    func_0x00010bdc67a0(param_1);
  }
  func_0x00010bec3040(param_1);
  puStack_38 = PTR_PTR_1126f0ed0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106322d68; end: 106322ef7; -[SCOperaViewController addObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106322d68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112745bd0;
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1),param_2,param_1,
                      PTR_s_deviceOrientationDidChange_1125304e8,
                      *(undefined8 *)PTR__UIDeviceOrientationDidChangeNotification_110345b98,0);
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
  func_0x00010befa240(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010be668b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observePlaybackDebugInfo_1125773c8);
  return;
}



/* Entry: 106322ef8; end: 106322f77; -[SCOperaViewController removeObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106322ef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12d560(*(undefined8 *)(param_1 + _DAT_112745bd0),param_2,param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112745b74));
  if (*(long *)(param_1 + _DAT_112745c00) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112745bf4);
    func_0x00010bf99b40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106322f78; end: 106322f7b; -[SCOperaViewController _observePlaybackDebugInfo] */

void FUN_106322f78(void)

{
  return;
}



/* Entry: 106322f7c; end: 106322f7f; -[SCOperaViewController _currentPlaybackDidUpdateWithLog:] */

void FUN_106322f7c(void)

{
  return;
}



/* Entry: 106322f80; end: 106322f8f; -[SCOperaViewController updateModelsToPreload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106322f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2229f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745b8c),PTR_s_setViewModelsToPreload__1126664a0);
  return;
}



/* Entry: 106322f90; end: 106323003; -[SCOperaViewController prefersStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106322f90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001008522a8();
  uVar4 = uVar2;
  func_0x000107d36174(uVar2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106323004; end: 10632308b; -[SCOperaViewController preferredStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106323004(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  if ((param_1[_DAT_112745b6c] & 1) == 0) {
    puStack_28 = PTR_PTR_1126f0ed0;
    puStack_30 = param_1;
    _objc_msgSendSuper2(&puStack_30,PTR_s_preferredStatusBarStyle_11261f5d0);
  }
  else {
    func_0x00010bdf6e40();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined1 *)0x0) {
      ppuVar1 = (undefined1 **)0x1;
    }
    else {
      ppuVar1 = (undefined1 **)param_1;
      func_0x00010c067fc0(param_1);
    }
    _objc_release(param_1);
  }
  return (undefined1 *)ppuVar1;
}



/* Entry: 10632308c; end: 106323153; -[SCOperaViewController _currentPagePreferredStatusBarStyleNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632308c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c106ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001008522a8();
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c292b20();
  uVar6 = uVar3;
  func_0x000107d36120(uVar3,uVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106323154; end: 10632331f; -[SCOperaViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106323154(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_4,&PTR____CFConstantStringClassReference_110e4af58);
  func_0x00010be6f820(param_3);
  pdVar1 = (double *)(param_3 + _DAT_112745c04);
  bVar3 = false;
  if ((*pdVar1 == param_1) && (bVar3 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar3 = pdVar1[1] == param_2;
  }
  if (!bVar3) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    uVar9 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar10 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    lVar5 = param_3;
    func_0x00010c0eb6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(uVar9,uVar10,param_1,param_2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    dVar7 = *pdVar1;
    dVar8 = pdVar1[1];
    func_0x00010be6de20(dVar7,dVar8,param_3);
    lVar5 = param_3;
    func_0x00010c0eb6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1827c0(dVar7,dVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c0eb6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c151f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(uVar9,uVar10,dVar7,dVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    pdVar2 = (double *)(param_3 + _DAT_112745c08);
    dVar7 = *pdVar1;
    pdVar2[1] = pdVar1[1];
    *pdVar2 = dVar7;
    func_0x00010c0eb6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182360(*pdVar2,pdVar2[1]);
    _objc_release(lVar5);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar4);
  return;
}



/* Entry: 106323320; end: 106323597; -[SCOperaViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106323320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c98e0;
  func_0x00010bf18180();
  puVar2 = PTR_PTR_1126c9ca8;
  _objc_alloc(PTR_PTR_1126c9ca8);
  func_0x00010c0eb1c0(*(undefined8 *)(param_5 + _DAT_112745b94));
  lVar10 = (long)_DAT_112745b58;
  uVar3 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010bf461c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010c069200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112745b9c;
  uVar6 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010bf66420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001c20(param_1,param_2,param_3,param_4,puVar2);
  func_0x00010c222380(param_5);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar10 = param_5;
  func_0x00010c0eb6a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar10);
  lVar10 = param_5;
  func_0x00010c0eb6a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar10;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5680(*(undefined8 *)(param_5 + lVar9));
  _objc_release(lVar7);
  _objc_release(lVar10);
  func_0x00010c29ca80(param_5);
  if ((*(byte *)(param_5 + _DAT_112745b6c) & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c07f8c0();
    *(char *)(param_5 + _DAT_112745c0c) = (char)puVar8;
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c14cde0();
    *(undefined **)(param_5 + _DAT_112745c10) = puVar8;
    _objc_release(puVar2);
  }
  func_0x00010bdce640(param_5);
  func_0x00010bdc5c40(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bf94970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c98e0,PTR_s_endFor__1125c2c00,puVar1);
  return;
}



/* Entry: 106323598; end: 10632359b; -[SCOperaViewController operaView] */

void FUN_106323598(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 10632359c; end: 10632390b; -[SCOperaViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632359c(undefined **param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *unaff_x24;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = &DAT_112745b64;
  func_0x00010c29e740(*(undefined8 *)((long)param_1 + (long)_DAT_112745b64),param_2,param_1,param_3)
  ;
  func_0x00010bf04340(PTR_PTR_1126c98e0);
  puStack_90 = PTR_PTR_1126f0ed0;
  ppuStack_98 = param_1;
  _objc_msgSendSuper2(&ppuStack_98,PTR_s_viewWillAppear__1126853f0,param_3);
  puVar13 = (undefined *)(long)_DAT_112745bec;
  func_0x00010c125ea0(*(undefined8 *)((long)param_1 + (long)puVar13));
  ppuVar9 = (undefined **)PTR_PTR_1126b6b20;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 10;
  func_0x00010c27ab40();
  ppuVar3 = ppuVar9;
  _objc_release();
  if ((*(byte *)((long)param_1 + (long)_DAT_112745c14) & 1) != 0) goto LAB_1063238d0;
  puStack_a0 = puVar13;
  func_0x00010c29c520(*(undefined8 *)((long)param_1 + (long)_DAT_112745c18));
  ppuVar9 = param_1;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar9;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dced58;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_a8 = ppuVar3;
  }
  _objc_retain(ppuStack_a8);
  _objc_release(ppuVar3);
  _objc_release(ppuVar9);
  uStack_b0 = *(undefined8 *)((long)param_1 + (long)_DAT_112745b5c);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c29f080(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = *(undefined **)((long)param_1 + (long)_DAT_112745b8c);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = puVar13;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a20;
  func_0x00010c0d27e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9a20;
  puStack_78 = puVar6;
  func_0x00010c0f3cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar7;
  ppuStack_70 = ppuStack_a8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uStack_b0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(unaff_x24);
  _objc_release(puVar13);
  _objc_release(puVar4);
  func_0x00010bee0a40(param_1);
  ppuVar9 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar9;
  func_0x00010c06d1a0();
  if ((int)ppuVar3 == 0) {
    _objc_release(ppuVar9);
LAB_106323840:
    puVar4 = puStack_a0;
    func_0x00010be78c00(param_1);
  }
  else {
    bVar1 = *(byte *)((long)param_1 + (long)_DAT_112745c1c);
    _objc_release(ppuVar9);
    puVar4 = puStack_a0;
    if ((bVar1 & 1) == 0) goto LAB_106323840;
  }
  param_3 = &DAT_112745b58;
  ppuVar9 = *(undefined ***)((long)param_1 + (long)_DAT_112745b58);
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(ppuVar9);
  _objc_release(ppuVar9);
  uVar11 = 1;
  ppuVar3 = param_1;
  func_0x00010be42e40();
  *(char *)((long)param_1 + (long)_DAT_112745c20) = (char)ppuVar3;
  ppuVar3 = param_1;
  func_0x00010be42e00();
  *(char *)((long)param_1 + (long)_DAT_112745c24) = (char)ppuVar3;
  iVar2 = (int)*(undefined8 *)((long)param_1 + (long)puVar4);
  func_0x00010bfda200();
  if (iVar2 != 0) {
    func_0x00010bee9440(param_1);
    uVar11 = 0;
    func_0x00010c1a66a0(*(undefined8 *)((long)param_1 + (long)puVar4));
  }
  ppuVar3 = ppuStack_a8;
  _objc_release();
LAB_1063238d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_10632390c;
    puStack_f0 = unaff_x24;
    puStack_e8 = puVar13;
    puStack_e0 = puVar4;
    puStack_d8 = param_3;
    ppuStack_d0 = ppuVar9;
    ppuStack_c8 = param_1;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x00010c29c6c0(*(undefined8 *)((long)ppuVar3 + (long)_DAT_112745b64));
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c18a100(ppuVar3);
    _objc_release(puVar4);
    puStack_f8 = PTR_PTR_1126f0ed0;
    ppuStack_100 = ppuVar3;
    _objc_msgSendSuper2(&ppuStack_100,PTR_s_viewDidAppear__112684bd0,uVar11);
    *(undefined1 *)((long)ppuVar3 + (long)_DAT_112745c28) = 1;
    lVar12 = (long)_DAT_112745bec;
    iVar2 = (int)*(undefined8 *)((long)ppuVar3 + lVar12);
    func_0x00010c2a2320();
    func_0x00010c125ea0(*(undefined8 *)((long)ppuVar3 + lVar12));
    uVar10 = *(ulong *)((long)ppuVar3 + lVar12);
    func_0x00010c2a2320();
    if ((iVar2 != 0) || ((uVar10 & 1) == 0)) {
      func_0x00010bee9440(ppuVar3);
    }
    return;
  }
  return;
}



/* Entry: 10632390c; end: 1063239fb; -[SCOperaViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10632390c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  func_0x00010c29c6c0(*(undefined8 *)(param_1 + _DAT_112745b64),param_2,param_1,param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c18a100(param_1);
  _objc_release(puVar2);
  puStack_48 = PTR_PTR_1126f0ed0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0,param_3);
  *(undefined1 *)(param_1 + _DAT_112745c28) = 1;
  lVar4 = (long)_DAT_112745bec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c2a2320();
  func_0x00010c125ea0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(ulong *)(param_1 + lVar4);
  func_0x00010c2a2320();
  if ((iVar1 != 0) || ((uVar3 & 1) == 0)) {
    func_0x00010bee9440(param_1);
  }
  return;
}



/* Entry: 1063239fc; end: 106323b33; -[SCOperaViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063239fc(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  
  func_0x00010c29e860(*(undefined8 *)(param_1 + _DAT_112745b64),param_2,param_1,param_3);
  puStack_48 = PTR_PTR_1126f0ed0;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_viewWillDisappear__112685438,param_3);
  func_0x00010c125ea0(*(undefined8 *)(param_1 + _DAT_112745bec));
  func_0x00010bece000(param_1);
  if (param_1[_DAT_112745b6c] == '\x01') {
    puVar2 = param_1;
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    func_0x00010c1cbec0(puVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc80();
  }
  _objc_release(puVar2);
  func_0x00010c29e920(param_1);
  return;
}



/* Entry: 106323b34; end: 106323d4b; -[SCOperaViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106323b34(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  func_0x00010c29c8a0(*(undefined8 *)(param_1 + (long)_DAT_112745b64),param_2,param_1,param_3);
  puStack_48 = PTR_PTR_1126f0ed0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidDisappear__112684c48,param_3);
  func_0x00010c125ea0(*(undefined8 *)(param_1 + (long)_DAT_112745bec));
  uVar1 = param_1;
  func_0x00010be42e40();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c077fc0();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c06d1a0(), (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c06d1a0();
      _objc_release(uVar1);
      if ((int)uVar4 == 0) {
        func_0x00010c29ca20(param_1);
        return;
      }
    }
    func_0x00010c29ca20(param_1);
    func_0x00010be95740(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010be42e00();
    if ((int)uVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112745c00);
      puVar2 = PTR_PTR_1126c9cb0;
      func_0x00010c23c5c0(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6220(uVar5);
      _objc_release(puVar2);
      uVar1 = param_1;
      func_0x00010bdf6e60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d99a0();
      _objc_release(uVar1);
      uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112745b5c);
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c23c600(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112745b8c);
      func_0x00010bf60c20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf6e60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf60c40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar6);
      _objc_release(uVar1);
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 106323d4c; end: 106323d7f; -[SCOperaViewController presentViewController:animated:completion:] */

void FUN_106323d4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0ed0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_presentViewController_animated_c_112621588);
  return;
}



/* Entry: 106323d80; end: 106323e13; -[SCOperaViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106323d80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0ed0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dismissViewControllerAnimated_co_1125bec68);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112745c00);
    puVar2 = PTR_PTR_1126c9cb0;
    func_0x00010c10f900(PTR_PTR_1126c9cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13dba0(uVar3);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 106323e14; end: 106324013; -[SCOperaViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106323e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + _DAT_112745c2c) = 1;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745c00);
  puVar1 = PTR_PTR_1126c9cb0;
  func_0x00010bf77100(PTR_PTR_1126c9cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dba0(uVar5,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c235540(*(undefined8 *)(param_1 + _DAT_112745b68));
  puVar1 = PTR_PTR_1126c9cb8;
  func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9cb8;
  func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f320();
  _objc_release(puVar1);
  lVar7 = (long)_DAT_112745b58;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf5f860(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar5,param_2,lVar2);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c22a220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200240();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745bf4);
  func_0x00010bf99b40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar5);
  func_0x00010be391e0(param_1);
  func_0x00010bea5ce0(param_1);
  uVar4 = *(ulong *)(param_1 + _DAT_112745c34);
  func_0x00010c0c53e0();
  if ((uVar4 & 1) == 0) {
    func_0x00010bdf6e80(param_1);
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c29eee0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar6,param_2,puVar1,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106324014; end: 106324367; -[SCOperaViewController viewDidFullyDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  *(undefined1 *)(param_1 + _DAT_112745c2c) = 0;
  *(undefined1 *)(param_1 + _DAT_112745c28) = 0;
  func_0x00010be391c0();
  lVar10 = (long)_DAT_112745c00;
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  puVar1 = PTR_PTR_1126c9cb0;
  func_0x00010bf77100(PTR_PTR_1126c9cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6220(uVar7,param_2,0,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9cb8;
  func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2561e0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b58);
  func_0x00010c22a220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200240();
  _objc_release(uVar7);
  _objc_release(uVar2);
  if (*(long *)(param_1 + lVar10) == 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112745bf4);
    func_0x00010bf99b40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar7);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar11 = (long)_DAT_112745bdc;
  lVar3 = *(long *)(param_1 + lVar11);
  func_0x00010bf51e00();
  lVar10 = lVar3;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c0e00e0(uVar7,param_2,*(undefined8 *)(lStack_128 + lVar15 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29ca00();
        _objc_release(uVar7);
        lVar15 = lVar15 + 1;
      } while (lVar10 != lVar15);
      lVar10 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar10 = param_1;
  func_0x00010c089060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c089060(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,lVar10,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar10);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a20;
  func_0x00010bf43ba0(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c29ef00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar9,param_2,puVar4,uVar7,puVar1);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(puVar4);
  if ((int)param_3 != 0) {
    func_0x00010becaf20(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  if ((puVar1[_DAT_112745c38] & 1) == 0) {
    puVar1[_DAT_112745c38] = 1;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar5 = puVar1;
    func_0x00010c089060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010c089060(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4,param_2,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c9a20;
    func_0x00010bf43ba0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4,param_2,PTR____kCFBooleanTrue_11034ab68,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar11 = (long)_DAT_112745b90;
    uVar9 = *(undefined8 *)(puVar1 + lVar11);
    func_0x00010c09d0e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c2a2520();
    func_0x00010c0df6e0(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9a20;
    func_0x00010c09d1c0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4,param_2,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar9);
    lVar13 = (long)_DAT_112745b5c;
    uVar9 = *(undefined8 *)(puVar1 + lVar13);
    puVar5 = PTR_PTR_1126b2330;
    func_0x00010c2a6fc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112745b8c;
    uVar2 = *(undefined8 *)(puVar1 + lVar15);
    func_0x00010bf60c20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar9,param_2,puVar5,uVar7,puVar4);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(puVar5);
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    lVar12 = (long)_DAT_112745bd4;
    lVar3 = *(long *)(puVar1 + lVar12);
    func_0x00010bf51e00();
    lVar10 = lVar3;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar14 = *plStack_2d0;
      do {
        lVar16 = 0;
        do {
          if (*plStack_2d0 != lVar14) {
            _objc_enumerationMutation(lVar3);
          }
          uVar7 = *(undefined8 *)(puVar1 + lVar12);
          func_0x00010c0e00e0(uVar7,param_2,*(undefined8 *)(lStack_2d8 + lVar16 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26ac40();
          _objc_release(uVar7);
          lVar16 = lVar16 + 1;
        } while (lVar10 != lVar16);
        lVar10 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_2e0,auStack_220,0x10);
      } while (lVar10 != 0);
    }
    _objc_release(lVar3);
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    lVar12 = (long)_DAT_112745bdc;
    lVar3 = *(long *)(puVar1 + lVar12);
    func_0x00010bf51e00();
    lVar10 = lVar3;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar14 = *plStack_310;
      do {
        lVar16 = 0;
        do {
          if (*plStack_310 != lVar14) {
            _objc_enumerationMutation(lVar3);
          }
          uVar2 = *(undefined8 *)(puVar1 + _DAT_112745b84);
          uVar7 = *(undefined8 *)(puVar1 + lVar12);
          func_0x00010c0e00e0(uVar7,param_2,*(undefined8 *)(lStack_318 + lVar16 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26ac80(uVar2,param_2,uVar7);
          _objc_release(uVar7);
          lVar16 = lVar16 + 1;
        } while (lVar10 != lVar16);
        lVar10 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_320,auStack_2a0,0x10);
      } while (lVar10 != 0);
    }
    _objc_release(lVar3);
    uVar9 = *(undefined8 *)(puVar1 + lVar13);
    puVar5 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar1 + lVar15);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar9,param_2,puVar5,uVar7,puVar4);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b3130;
    func_0x00010c22bc20(PTR_PTR_1126b3130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b860();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b3130;
    func_0x00010c22bc20(PTR_PTR_1126b3130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b860();
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(puVar1 + lVar11);
    func_0x00010c0847c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a660();
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar4[_DAT_112745c3c] & 1) != 0) {
    return;
  }
  uVar9 = *(undefined8 *)(puVar4 + _DAT_112745c34);
  puVar4[_DAT_112745c3c] = 1;
  puVar1 = PTR_PTR_1126b2330;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_112745b5c);
  _objc_retain(uVar9);
  func_0x00010c2a5ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar4 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar8,param_2,puVar1,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c29e920(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 106324368; end: 106324813; -[SCOperaViewController _teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324368(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  puVar1 = param_1;
  if ((param_1[_DAT_112745c38] & 1) == 0) {
    param_1[_DAT_112745c38] = 1;
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = param_1;
    func_0x00010c089060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c089060(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9a20;
    func_0x00010bf43ba0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar9 = (long)_DAT_112745b90;
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c09d0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c2a2520();
    func_0x00010c0df6e0(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a20;
    func_0x00010c09d1c0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar4);
    lVar10 = (long)_DAT_112745b5c;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c2a6fc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112745b8c;
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf60c20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar4,param_2,puVar2,uVar8,puVar1);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(puVar2);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar13 = (long)_DAT_112745bd4;
    lVar6 = *(long *)(param_1 + lVar13);
    func_0x00010bf51e00();
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar14 = *plStack_1a0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1a0 != lVar14) {
            _objc_enumerationMutation(lVar6);
          }
          uVar8 = *(undefined8 *)(param_1 + lVar13);
          func_0x00010c0e00e0(uVar8,param_2,*(undefined8 *)(lStack_1a8 + lVar15 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26ac40();
          _objc_release(uVar8);
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        lVar7 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    lVar13 = (long)_DAT_112745bdc;
    lVar6 = *(long *)(param_1 + lVar13);
    func_0x00010bf51e00();
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar14 = *plStack_1e0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_1e0 != lVar14) {
            _objc_enumerationMutation(lVar6);
          }
          uVar5 = *(undefined8 *)(param_1 + _DAT_112745b84);
          uVar8 = *(undefined8 *)(param_1 + lVar13);
          func_0x00010c0e00e0(uVar8,param_2,*(undefined8 *)(lStack_1e8 + lVar15 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26ac80(uVar5,param_2,uVar8);
          _objc_release(uVar8);
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        lVar7 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_1f0,auStack_170,0x10);
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf60c20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar4,param_2,puVar2,uVar8,puVar1);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b3130;
    func_0x00010c22bc20(PTR_PTR_1126b3130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b860();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b3130;
    func_0x00010c22bc20(PTR_PTR_1126b3130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b860();
    _objc_release(puVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c0847c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a660();
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar1[_DAT_112745c3c] & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(puVar1 + _DAT_112745c34);
  puVar1[_DAT_112745c3c] = 1;
  puVar2 = PTR_PTR_1126b2330;
  uVar12 = *(undefined8 *)(puVar1 + _DAT_112745b5c);
  _objc_retain(uVar4);
  func_0x00010c2a5ca0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar12,param_2,puVar2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar2);
  func_0x00010c29e920(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106324814; end: 1063248f3; -[SCOperaViewController viewWillFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + _DAT_112745c3c) & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745c34);
  *(undefined1 *)(param_1 + _DAT_112745c3c) = 1;
  puVar1 = PTR_PTR_1126b2330;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  _objc_retain(uVar4);
  func_0x00010c2a5ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar5,param_2,puVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c29e920(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1063248f4; end: 106324b7b; -[SCOperaViewController viewEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063248f4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_112745c00);
  puVar1 = PTR_PTR_1126c9cb0;
  func_0x00010bf04de0(PTR_PTR_1126c9cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6220(uVar7,param_2,0,puVar1);
  _objc_release(puVar1);
  func_0x00010c125ce0(*(undefined8 *)(param_1 + _DAT_112745c40));
  func_0x00010bec0180(param_1,param_2,&PTR____CFConstantStringClassReference_110dcdfb8);
  puVar1 = param_1;
  func_0x00010bdeb340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9cc0;
  func_0x00010bf7c720(PTR_PTR_1126c9cc0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1f3c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)puVar4 == 0) {
    lVar5 = *(long *)(param_1 + _DAT_112745c44);
    func_0x00010c27dd80();
    if (lVar5 != 0xe) {
      puVar2 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106324a14;
    }
  }
  else {
    puVar2 = param_1;
    func_0x00010be3d240(param_1,param_2,2,puVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_106324a14:
    func_0x00010c1b8f80(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010be7f8e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010be42e40(param_1,param_2,0);
    _objc_release(puVar2);
    if ((int)puVar3 == 0) goto LAB_106324b64;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = *(long *)(param_1 + _DAT_112745c44);
  if (lVar5 != 0) {
    func_0x00010c27dd80();
    func_0x00010c0df840(puVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a28;
    func_0x00010c29d280(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar8 = *(undefined8 *)(param_1 + _DAT_112745b5c);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf96940(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112745b8c);
  func_0x00010bf60c20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar8,param_2,puVar2,uVar7,puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  func_0x00010bf04340(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e4afb8);
  func_0x00010c29ca20(param_1,param_2,0);
LAB_106324b64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106324b7c; end: 106324e3b; -[SCOperaViewController viewWillEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324b7c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112745c00;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  puVar1 = PTR_PTR_1126c9cb0;
  func_0x00010bf04de0(PTR_PTR_1126c9cb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dba0(uVar5);
  _objc_release(puVar1);
  func_0x00010bec0e20(param_1);
  func_0x00010bec3040(param_1);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_112745b5c);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf96a00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112745b8c);
  func_0x00010bf60c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010bf04340(PTR_PTR_1126c98e0);
  lVar7 = (long)_DAT_112745c48;
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    if (*(char *)(param_1 + (long)_DAT_112745b6c) == '\x01') {
      func_0x00010bee0a40();
    }
    else {
      func_0x00010c1070e0(param_1);
      puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc20();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14dc20();
      _objc_release(puVar1);
    }
  }
  uVar3 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar4 = param_1;
    func_0x00010be42e40();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + lVar8) == 0) {
        return;
      }
      uVar3 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06d1a0();
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        return;
      }
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      puVar1 = PTR_PTR_1126c9cb0;
      func_0x00010c23c5c0(PTR_PTR_1126c9cb0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13dba0(uVar5);
      _objc_release(puVar1);
    }
  }
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 == 0) {
        uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112745b58);
        func_0x00010bf5f860(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f2220(param_1);
        func_0x00010c24fc40(uVar5);
        _objc_release(uVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010c29c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewDidFullyAppear_112684c88);
      return;
    }
  }
  return;
}



/* Entry: 106324e3c; end: 106324eb7; -[SCOperaViewController willMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106324e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745b64);
  _objc_retain(param_3);
  func_0x00010c2a6760(uVar1);
  puStack_38 = PTR_PTR_1126f0ed0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willMoveToParentViewController__1126873f8,param_3);
  _objc_release(param_3);
  return;
}


