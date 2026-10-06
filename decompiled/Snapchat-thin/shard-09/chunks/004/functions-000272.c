/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cdc860; end: 106cdc8e7; -[SCGallerySnapsTabController _setUpEmptyStateForActiveSearch] */

void FUN_106cdc860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c013de0();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126cfba8;
  _objc_alloc(PTR_PTR_1126cfba8);
  func_0x00010c055880();
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x50),param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cdc8e8; end: 106cdcc8f; -[SCGallerySnapsTabController _setupEmptyStateView] */

void FUN_106cdc8e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = *(undefined **)(param_1 + 0x50);
  if (puVar24 == (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x68);
    if ((puVar1 != (undefined *)0x0) && (func_0x00010bf529e0(), puVar1 == (undefined *)0x0)) {
      puVar24 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c013de0();
      uVar21 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar24;
      _objc_release(uVar21);
      func_0x00010c07b240();
      puVar24 = PTR_PTR_1126c3a20;
      _objc_alloc();
      func_0x00010c23a080();
      uVar2 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar2;
      func_0x00010bf5f860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062200();
      uVar22 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar24;
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar2);
      lVar23 = param_1 + 8;
      _objc_loadWeakRetained(lVar23);
      func_0x00010bef76e0();
      _objc_release(lVar23);
      puVar24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar21;
      func_0x00010bf493c0(*(undefined8 *)(param_1 + 0x58));
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar22;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = 4;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar24);
      _objc_release(puVar1);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar22);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar21);
      _objc_release(uVar3);
      puVar24 = *(undefined **)(param_1 + 0x50);
      goto LAB_106cdc920;
    }
    puVar24 = (undefined *)0x0;
  }
  else {
LAB_106cdc920:
    puVar1 = puVar24;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar25 = *(undefined **)(puVar1 + 0x88);
  _objc_retain(puVar25);
  puVar16 = puVar25;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (puVar16 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(puVar25);
      }
      puVar24 = *(undefined **)((long)puVar26 * 8);
      func_0x00010c155860();
      _objc_retainAutoreleasedReturnValue();
      if (puVar24 != (undefined *)0x0) goto LAB_106cdd040;
      puVar26 = puVar26 + 1;
    } while (puVar16 != puVar26);
    puVar16 = puVar25;
    func_0x00010bf52a60();
  }
  _objc_release(puVar25);
  puVar24 = *(undefined **)(puVar1 + 0x130);
  if (puVar24 == (undefined *)0x0) {
LAB_106cdcd9c:
    puVar24 = PTR_PTR_1126d2138;
    _objc_opt_class(PTR_PTR_1126d2138);
    uVar17 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar24);
    if ((uVar17 & 1) == 0) {
      puVar24 = PTR_PTR_1126d2148;
      _objc_opt_class(PTR_PTR_1126d2148);
      uVar17 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar24);
      puVar24 = PTR_PTR_1126d2150;
      if ((uVar17 & 1) == 0) {
        puVar24 = PTR_PTR_1126d2158;
        _objc_opt_class(PTR_PTR_1126d2158);
        uVar17 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar24);
        puVar24 = PTR_PTR_1126d2160;
        if ((uVar17 & 1) == 0) {
          puVar24 = PTR_PTR_1126d2168;
          _objc_opt_class(PTR_PTR_1126d2168);
          uVar17 = param_4;
          _objc_opt_isKindOfClass(param_4,puVar24);
          if ((uVar17 & 1) == 0) {
            puVar24 = PTR_PTR_1126b2690;
            _objc_opt_class(PTR_PTR_1126b2690);
            uVar17 = param_4;
            _objc_opt_isKindOfClass(param_4,puVar24);
            puVar24 = PTR_PTR_1126b2690;
            if ((uVar17 & 1) == 0) {
              puVar24 = PTR_PTR_1126cfc30;
              _objc_opt_class(PTR_PTR_1126cfc30);
              uVar17 = param_4;
              _objc_opt_isKindOfClass(param_4,puVar24);
              if ((uVar17 & 1) != 0) {
                puVar24 = *(undefined **)(puVar1 + 0x110);
                puVar25 = *(undefined **)(puVar1 + 0x18);
                func_0x00010bf80e60(puVar25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c245c20(puVar24);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_106cdd040;
              }
              puVar24 = (undefined *)0x0;
              goto LAB_106cdd044;
            }
            _objc_retain(param_4);
            _objc_opt_class(puVar24);
            uVar19 = param_4;
            _objc_opt_isKindOfClass(param_4,puVar24);
            uVar17 = param_4;
            if ((uVar19 & 1) == 0) {
              uVar17 = 0;
            }
            _objc_retain(uVar17);
            _objc_release(param_4);
            puVar24 = *(undefined **)(puVar1 + 0x110);
            puVar25 = *(undefined **)(puVar1 + 0x18);
            func_0x00010bf80e60(puVar25);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c245c40(puVar24);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar24 = PTR_PTR_1126d2170;
            _objc_alloc(PTR_PTR_1126d2170);
            puVar16 = PTR_PTR_1126d2178;
            _objc_alloc(PTR_PTR_1126d2178);
            puVar25 = puVar1 + 0x270;
            _objc_loadWeakRetained(puVar25);
            uVar17 = *(ulong *)(puVar1 + 0x108);
            func_0x00010c269d40(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar19 = uVar17;
            func_0x00010c151640();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar19;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0501c0(puVar16);
            func_0x00010c061d00(puVar24);
            _objc_release(puVar16);
            _objc_release(uVar18);
            _objc_release(uVar19);
          }
          _objc_release(uVar17);
          goto LAB_106cdd040;
        }
      }
      _objc_alloc(puVar24);
      func_0x00010c061ce0();
    }
    else {
      puVar24 = *(undefined **)(puVar1 + 0x110);
      func_0x00010c0c9c40();
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)(puVar1 + 0x120) != 0) {
        puVar16 = puVar24;
        func_0x00010010fab4(puVar24,PTR_DAT_1126a57a8);
        puVar25 = puVar24;
        if ((int)puVar16 == 0) {
          puVar25 = (undefined *)0x0;
        }
        _objc_retain(puVar25);
        func_0x00010bf687a0(puVar25);
        _objc_release(puVar25);
        puVar25 = *(undefined **)(puVar1 + 0x120);
        *(undefined8 *)(puVar1 + 0x120) = 0;
LAB_106cdd040:
        _objc_release(puVar25);
      }
    }
  }
  else {
    func_0x00010c155880();
    _objc_retainAutoreleasedReturnValue();
    if (puVar24 == (undefined *)0x0) goto LAB_106cdcd9c;
  }
LAB_106cdd044:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be22690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 106cdcc90; end: 106cdd093; -[SCGallerySnapsTabController listAdapter:sectionControllerForObject:] */

void FUN_106cdcc90(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar10 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      puVar3 = *(undefined **)(lVar11 * 8);
      func_0x00010c155860();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 != (undefined *)0x0) goto LAB_106cdd040;
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar3 = *(undefined **)(param_1 + 0x130);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c155880();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) goto LAB_106cdd044;
  }
  puVar3 = PTR_PTR_1126d2138;
  _objc_opt_class(PTR_PTR_1126d2138);
  uVar6 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  if ((uVar6 & 1) == 0) {
    puVar3 = PTR_PTR_1126d2148;
    _objc_opt_class(PTR_PTR_1126d2148);
    uVar6 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    puVar3 = PTR_PTR_1126d2150;
    if ((uVar6 & 1) == 0) {
      puVar3 = PTR_PTR_1126d2158;
      _objc_opt_class(PTR_PTR_1126d2158);
      uVar6 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar3);
      puVar3 = PTR_PTR_1126d2160;
      if ((uVar6 & 1) == 0) {
        puVar3 = PTR_PTR_1126d2168;
        _objc_opt_class(PTR_PTR_1126d2168);
        uVar6 = param_4;
        _objc_opt_isKindOfClass(param_4,puVar3);
        if ((uVar6 & 1) == 0) {
          puVar3 = PTR_PTR_1126b2690;
          _objc_opt_class(PTR_PTR_1126b2690);
          uVar6 = param_4;
          _objc_opt_isKindOfClass(param_4,puVar3);
          puVar3 = PTR_PTR_1126b2690;
          if ((uVar6 & 1) == 0) {
            puVar3 = PTR_PTR_1126cfc30;
            _objc_opt_class(PTR_PTR_1126cfc30);
            uVar6 = param_4;
            _objc_opt_isKindOfClass(param_4,puVar3);
            if ((uVar6 & 1) == 0) {
              puVar3 = (undefined *)0x0;
              goto LAB_106cdd044;
            }
            puVar3 = *(undefined **)(param_1 + 0x110);
            lVar10 = *(long *)(param_1 + 0x18);
            func_0x00010bf80e60(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c245c20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106cdd040;
          }
          _objc_retain(param_4);
          _objc_opt_class(puVar3);
          uVar8 = param_4;
          _objc_opt_isKindOfClass(param_4,puVar3);
          uVar6 = param_4;
          if ((uVar8 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(param_4);
          puVar3 = *(undefined **)(param_1 + 0x110);
          lVar10 = *(long *)(param_1 + 0x18);
          func_0x00010bf80e60(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c245c40(puVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = PTR_PTR_1126d2170;
          _objc_alloc(PTR_PTR_1126d2170);
          puVar5 = PTR_PTR_1126d2178;
          _objc_alloc(PTR_PTR_1126d2178);
          lVar10 = param_1 + 0x270;
          _objc_loadWeakRetained(lVar10);
          uVar6 = *(ulong *)(param_1 + 0x108);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c151640();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0501c0(puVar5);
          func_0x00010c061d00(puVar3);
          _objc_release(puVar5);
          _objc_release(uVar7);
          _objc_release(uVar8);
        }
        _objc_release(uVar6);
        goto LAB_106cdd040;
      }
    }
    _objc_alloc(puVar3);
    func_0x00010c061ce0();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x110);
    func_0x00010c0c9c40();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x120) == 0) goto LAB_106cdd044;
    puVar4 = puVar3;
    func_0x00010010fab4(puVar3,PTR_DAT_1126a57a8);
    puVar5 = puVar3;
    if ((int)puVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    func_0x00010bf687a0(puVar5);
    _objc_release(puVar5);
    lVar10 = *(long *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
LAB_106cdd040:
    _objc_release(lVar10);
  }
LAB_106cdd044:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be22690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106cdd094; end: 106cdd097; -[SCGallerySnapsTabController objectsForListAdapter:] */

void FUN_106cdd094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be22690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getSectionViewModels_112566340);
  return;
}



/* Entry: 106cdd098; end: 106cdd47f; -[SCGallerySnapsTabController _getSectionViewModels] */

void FUN_106cdd098(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = *(long *)(param_5 + 0x88);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar8 = 0x7fffffffffffffff;
    uVar10 = 0x7fffffffffffffff;
  }
  else {
    uVar9 = 0;
    uVar10 = 0x7fffffffffffffff;
    uVar8 = 0x7fffffffffffffff;
    do {
      if (uVar10 == 0x7fffffffffffffff) {
        lVar3 = *(long *)(param_5 + 0x88);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010010fab4();
        _objc_release(lVar3);
        uVar10 = uVar9;
        if (((uint)(lVar3 != 0) & (uint)lVar2) == 0) {
          uVar10 = 0x7fffffffffffffff;
        }
      }
      if (uVar8 == 0x7fffffffffffffff) {
        lVar3 = *(long *)(param_5 + 0x88);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010010fab4();
        _objc_release(lVar3);
        uVar8 = uVar9;
        if (((uint)(lVar3 != 0) & (uint)lVar2) == 0) {
          uVar8 = 0x7fffffffffffffff;
        }
      }
      uVar9 = uVar9 + 1;
      uVar4 = *(ulong *)(param_5 + 0x88);
      func_0x00010bf529e0();
    } while (uVar9 < uVar4);
  }
  lVar2 = *(long *)(param_5 + 0x90);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar9 = 0;
    do {
      if ((uVar10 != uVar9) && (uVar8 != uVar9)) {
        puVar5 = *(undefined **)(param_5 + 0x90);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != puVar6) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(puVar5);
      }
      uVar9 = uVar9 + 1;
      uVar4 = *(ulong *)(param_5 + 0x90);
      func_0x00010bf529e0();
    } while (uVar9 < uVar4);
  }
  lVar2 = *(long *)(param_5 + 0x68);
  func_0x00010bf529e0();
  uVar9 = param_5;
  func_0x00010beb5f80();
  if ((uVar9 & 1) != 0) {
    func_0x00010befa120(puVar1);
  }
  if (uVar10 != 0x7fffffffffffffff) {
    puVar5 = *(undefined **)(param_5 + 0x90);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != puVar6) {
      func_0x00010befa120(puVar1);
    }
    _objc_release(puVar5);
  }
  uVar10 = param_5;
  func_0x00010beb61a0();
  if ((int)uVar10 != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
    dVar11 = param_3;
    dVar12 = param_4;
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + 0x28));
    puVar6 = PTR_PTR_1126d2148;
    _objc_alloc(PTR_PTR_1126d2148);
    func_0x00010bfff9c0(param_3 - (param_2 + dVar12),param_4 - (param_1 + dVar11));
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  if (uVar8 == 0x7fffffffffffffff) {
LAB_106cdd398:
    lVar3 = 0;
  }
  else {
    puVar5 = *(undefined **)(param_5 + 0x90);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar5 == puVar6) goto LAB_106cdd398;
    lVar3 = *(long *)(param_5 + 0x90);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 != 0) && (*(long *)(param_5 + 0x70) != 0x7fffffffffffffff)) {
      puVar6 = *(undefined **)(param_5 + 0x68);
      func_0x00010c0d3c80();
      if (puVar6 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar6);
        puVar5 = puVar6;
      }
      _objc_release(puVar6);
      func_0x00010bf529e0();
      func_0x00010c066b00(puVar5);
      func_0x00010befa160(puVar1);
      _objc_release(puVar5);
      puVar6 = PTR_PTR_1126d2158;
      goto joined_r0x000106cdd3b4;
    }
  }
  lVar7 = *(long *)(param_5 + 0x68);
  func_0x00010bf529e0();
  puVar6 = PTR_PTR_1126d2158;
  if (lVar7 != 0) {
    func_0x00010befa160(puVar1);
    puVar6 = PTR_PTR_1126d2158;
  }
joined_r0x000106cdd3b4:
  PTR_PTR_1126d2158 = puVar6;
  if ((lVar2 != 0) && (*(char *)(param_5 + 0x26a) == '\x01')) {
    _objc_opt_new(puVar6);
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106cdd480; end: 106cdd4c7; -[SCGallerySnapsTabController _shouldShowLoadingSection] */

byte FUN_106cdd480(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 0x26a);
    }
    else {
      bVar2 = 1;
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 106cdd4c8; end: 106cdd50b; -[SCGallerySnapsTabController _shouldShowFeaturedStoriesSectionWithFeaturedStoriesModel:] */

bool FUN_106cdd4c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bfa3240(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 106cdd50c; end: 106cdd5a7; -[SCGallerySnapsTabController flowLayout:sectionShouldDisplayOverlay:] */

void FUN_106cdd50c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010beb61a0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c155820(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c262ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c263120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010bf4b900(uVar4,param_2,&PTR____CFConstantStringClassReference_110ec1a78);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106cdd5a8; end: 106cdd5ab; -[SCGallerySnapsTabController isTabVisibleForFeaturedStoriesCarousel] */

void FUN_106cdd5a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_visible_112685918);
  return;
}



/* Entry: 106cdd5ac; end: 106cdd5af; -[SCGallerySnapsTabController isTabFocusedForFeaturedStoriesCarousel] */

void FUN_106cdd5ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_focused_1125ca790);
  return;
}



/* Entry: 106cdd5b0; end: 106cdd5f3; -[SCGallerySnapsTabController _entryForIndexPath:] */

void FUN_106cdd5b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bebda40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cdd5f4; end: 106cdd657; -[SCGallerySnapsTabController _snapForIndexPath:] */

void FUN_106cdd5f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bebda40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cdd658; end: 106cdd71b; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:galleryItemAtIndexPath:] */

void FUN_106cdd658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be0aa60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bdea1a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1;
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x00010010fab4(lVar1,PTR_DAT_1126a4ec0);
    lVar3 = lVar1;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106cdd71c; end: 106cdd76f; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:snapsForEntry:] */

void FUN_106cdd71c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010bfaa500(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cdd770; end: 106cdd777;  */

long FUN_106cdd770(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010b5fa088();
    if (lVar1 == 9999) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010b5fa5d4(param_2);
    }
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 106cdd778; end: 106cdd7d7; -[SCGallerySnapsTabController _adtGroupViewModelForSection:] */

void FUN_106cdd778(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0xb0);
  func_0x00010c0dfd60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2690;
  _objc_opt_class(PTR_PTR_1126b2690);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cdd7d8; end: 106cdd873; -[SCGallerySnapsTabController _legacyGroupViewModelForSection:] */

void FUN_106cdd7d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0xb0);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155d20(lVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar4 = param_3 - lVar1;
    uVar3 = *(ulong *)(param_1 + 0x78);
    func_0x00010bf529e0();
    if (uVar4 != 0x7fffffffffffffff && uVar4 < uVar3) {
      func_0x00010c0dfd40(*(undefined8 *)(param_1 + 0x78),param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cdd874; end: 106cdd9cb; -[SCGallerySnapsTabController _snapsCellViewModelForIndexPath:] */

void FUN_106cdd874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1554e0(param_3);
  func_0x00010bdc9720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106cd900c;
    uStack_40 = 0x106cd901c;
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010c156980(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0be2a0(lVar1);
    _objc_release(lVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cdd9cc; end: 106cdd9cf;  */

void FUN_106cdd9cc(void)

{
  return;
}



/* Entry: 106cdd9d0; end: 106cddad3;  */

void FUN_106cdd9d0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0840e0();
  uVar2 = param_2;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) {
    uVar2 = param_2;
    func_0x00010bf343c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(*(undefined8 *)(param_1 + 0x20));
    uVar3 = uVar2;
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bff00();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cddad4; end: 106cddb0b;  */

void FUN_106cddad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cddb0c; end: 106cddb13;  */

void FUN_106cddb0c(void)

{
  return;
}



/* Entry: 106cddb14; end: 106cddc6b; -[SCGallerySnapsTabController _crCellViewModelForIndexPath:] */

void FUN_106cddb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c1554e0(param_3);
  func_0x00010bdc9720();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_106cd900c;
    uStack_40 = 0x106cd901c;
    uStack_38 = 0;
    lVar1 = param_1;
    func_0x00010c156980(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0be2a0(lVar1);
    _objc_release(lVar1);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cddc6c; end: 106cddc73;  */

void FUN_106cddc6c(void)

{
  return;
}



/* Entry: 106cddc74; end: 106cddcf7;  */

void FUN_106cddc74(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0840e0();
  if (uVar2 < uVar1) {
    func_0x00010c0840e0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(ulong *)(lVar4 + 0x28) = uVar1;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cddcf8; end: 106cddd3b; -[SCGallerySnapsTabController _isLockedSnapCellViewModel:] */

bool FUN_106cddcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c11eb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c252440();
  _objc_release(param_3);
  return (int)uVar1 == 3;
}



/* Entry: 106cddd3c; end: 106cdddfb; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:shouldChangeSelectedAtIndexPath:] */

ulong FUN_106cddd3c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bebda40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    func_0x00010bdea1a0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bf171c0(param_1);
    }
    _objc_release(param_1);
  }
  else {
    func_0x00010be41a20(param_1,param_2,uVar1);
    if ((param_1 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010c06ece0(uVar1);
    }
    else {
      uVar2 = 0;
    }
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 106cdddfc; end: 106cdde57; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forItem:] */

void FUN_106cdddfc(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0x270;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2677a0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cdde58; end: 106cddeb3; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forSnapItem:] */

void FUN_106cdde58(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 0x270;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2677c0();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cddeb4; end: 106cddf2f; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:didChangeSelected:forItems:snapItems:] */

void FUN_106cddeb4(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  param_1 = param_1 + 0x270;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2677e0();
  _objc_release(in_x5);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cddf30; end: 106cde0cb; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:didTapItemAtIndexPath:] */

void FUN_106cddf30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cfc70;
  _objc_opt_class(PTR_PTR_1126cfc70);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  puVar4 = PTR_PTR_1126d2180;
  puVar2 = PTR_PTR_1126cfc70;
  uVar5 = uVar1;
  if (((uVar3 & 1) == 0) || (uVar1 == 0)) {
    _objc_retain(uVar1);
    _objc_opt_class(puVar4);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d2180;
    if (((uVar3 & 1) == 0) || (uVar1 == 0)) {
      uVar5 = *(ulong *)(param_1 + 0x108);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110e83738,
                          &PTR____CFConstantStringClassReference_110e83758,0,uVar3);
      _objc_release(uVar3);
    }
    else {
      _objc_retain(uVar1);
      _objc_opt_class(puVar2);
      uVar3 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar1);
      func_0x00010be31ba0(param_1);
    }
  }
  else {
    _objc_retain(uVar1);
    _objc_opt_class(puVar2);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
    func_0x00010be31d20(param_1);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cde0cc; end: 106cde41f; -[SCGallerySnapsTabController _handleTapCrCellWithCell:indexPath:] */

void FUN_106cde0cc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1554e0(param_4);
  lVar1 = param_1;
  func_0x00010bdc9720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) goto LAB_106cde3ac;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106cd900c;
  uStack_70 = 0x106cd901c;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106cd900c;
  uStack_a0 = 0x106cd901c;
  uStack_98 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_106cd900c;
  uStack_d0 = 0x106cd901c;
  uStack_c8 = 0;
  lVar2 = lVar1;
  func_0x00010c156980(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be2a0();
  _objc_release(lVar2);
  uVar3 = puStack_e8[5];
  if (uVar3 != 0) {
    func_0x00010bf529e0();
    uVar4 = param_4;
    func_0x00010c0840e0();
    if (uVar4 < uVar3) {
      uVar7 = puStack_e8[5];
      func_0x00010c0840e0(param_4);
      func_0x00010c0dfd20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar3 = *(ulong *)(param_1 + 0x100);
      if (uVar3 == 0) {
LAB_106cde28c:
        lVar2 = param_3;
        func_0x00010bfcb080();
        if (lVar2 == 1) {
          func_0x00010c0840e0(param_4);
          lVar2 = param_1;
          func_0x00010bdd5da0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0();
          puVar6 = PTR_PTR_1126c3a10;
          _objc_alloc(PTR_PTR_1126c3a10);
          func_0x00010c02a9c0();
          _objc_retain(param_4);
          uVar7 = *(undefined8 *)(param_1 + 0xd0);
          *(ulong *)(param_1 + 0xd0) = param_4;
          _objc_release(uVar7);
          param_1 = param_1 + 0x270;
          _objc_loadWeakRetained(param_1);
          func_0x00010c267720();
          _objc_release(param_1);
          _objc_release(puVar6);
        }
        else {
          if (lVar2 != 2) goto LAB_106cde368;
          lVar2 = param_1 + 0x270;
          _objc_loadWeakRetained(lVar2);
          func_0x00010c267ae0();
        }
        _objc_release(lVar2);
      }
      else {
        uVar7 = uVar5;
        FUN_106cebee0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd0140();
        _objc_release(uVar7);
        if ((uVar3 & 1) == 0) goto LAB_106cde28c;
      }
LAB_106cde368:
      _objc_release(uVar5);
    }
  }
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
LAB_106cde3ac:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cde420; end: 106cde427;  */

void FUN_106cde420(void)

{
  return;
}



/* Entry: 106cde428; end: 106cde4d7;  */

void FUN_106cde428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cde4d8; end: 106cdea47; -[SCGallerySnapsTabController _handleTapSnapCellWithCell:indexPath:] */

void FUN_106cde4d8(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **unaff_x25;
  undefined *puVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106cd900c;
  uStack_a0 = 0x106cd901c;
  uStack_98 = 0;
  func_0x00010c1554e0(param_4);
  ppuVar1 = param_1;
  func_0x00010bdc9720(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c156980();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106cdea4c;
  puStack_d0 = &UNK_11085b3d0;
  puStack_c8 = &uStack_c0;
  func_0x00010c0be2a0();
  _objc_release(ppuVar2);
  if (puStack_b8[5] == 0) goto LAB_106cde99c;
  ppuVar2 = param_1;
  func_0x00010bebda40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    puVar7 = param_1[0x21];
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110e83738,
                        &PTR____CFConstantStringClassReference_110e83778,0,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x000100150168();
    if ((int)ppuVar3 != 0) {
      ppuStack_90 = &PTR____CFConstantStringClassReference_110e06db8;
      ppuVar3 = ppuVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_88 = ppuVar5;
      }
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1[0x21];
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110e83798,
                          &PTR____CFConstantStringClassReference_110e837b8,puVar8,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
    }
    ppuVar3 = param_1 + 0x1e;
    _objc_loadWeakRetained();
    unaff_x25 = ppuVar3;
    func_0x00010c07d540();
    _objc_release(ppuVar3);
    if ((int)unaff_x25 != 0) {
      ppuVar3 = param_1 + 0x1e;
      _objc_loadWeakRetained(ppuVar3);
      unaff_x25 = ppuVar2;
      func_0x00010c245680(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = unaff_x25;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0af080(ppuVar3);
      _objc_release(ppuVar4);
      _objc_release(unaff_x25);
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar2;
    func_0x00010c06ece0();
    if (((ulong)ppuVar3 & 1) == 0) {
      unaff_x25 = ppuVar2;
      func_0x00010c245680(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = unaff_x25;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      param_1 = param_1 + 1;
      _objc_loadWeakRetained(param_1);
      func_0x000107e00710();
      _objc_release(param_1);
      _objc_release(ppuVar3);
    }
    else {
      ppuVar3 = param_1;
      func_0x00010be41a20();
      if ((int)ppuVar3 == 0) {
        puVar8 = param_1[0x20];
        if (puVar8 != (undefined *)0x0) {
          ppuVar3 = ppuVar2;
          func_0x00010c245680(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar2;
          func_0x00010bf97060(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = unaff_x25;
          FUN_106cebe34(unaff_x25,ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd0140();
          _objc_release(ppuVar5);
          _objc_release(ppuVar4);
          _objc_release(unaff_x25);
          _objc_release(ppuVar3);
          if (((ulong)puVar8 & 1) != 0) goto LAB_106cde994;
        }
        _objc_initWeak(auStack_f0,param_1);
        puVar8 = param_1[0x1f];
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_128 = 0xc2000000;
        pcStack_120 = FUN_106cdea88;
        puStack_118 = &UNK_110974c30;
        unaff_x25 = &puStack_130;
        _objc_copyWeak(auStack_f8,auStack_f0);
        _objc_retain(param_4);
        puStack_100 = &uStack_c0;
        uStack_110 = param_4;
        _objc_retain(param_3);
        uStack_108 = param_3;
        func_0x00010bf224c0(puVar8);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uStack_108);
        _objc_release(uStack_110);
        _objc_destroyWeak(auStack_f8);
        _objc_destroyWeak(auStack_f0);
      }
      else {
        func_0x00010be7eac0(param_1);
      }
    }
  }
LAB_106cde994:
  _objc_release(ppuVar2);
LAB_106cde99c:
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 7);
  _objc_destroyWeak(auStack_f0);
  __Block_object_dispose(&uStack_c0,8);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 106cdea48; end: 106cdea4b;  */

void FUN_106cdea48(void)

{
  return;
}



/* Entry: 106cdea4c; end: 106cdea83;  */

void FUN_106cdea4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cdea84; end: 106cdea87;  */

void FUN_106cdea84(void)

{
  return;
}



/* Entry: 106cdea88; end: 106cdeb13;  */

void FUN_106cdea88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined8 *)(lVar1 + 0xd0) = uVar3;
    _objc_release(uVar2);
    func_0x00010be7d080(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106cdeb14; end: 106cdeb17; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:handleLongPress:itemAtIndexPath:] */

void FUN_106cdeb14(void)

{
  return;
}



/* Entry: 106cdeb18; end: 106cdeb57; -[SCGallerySnapsTabController memoriesCollectionViewIsFullyVisible:] */

long FUN_106cdeb18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x270;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c267980();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106cdeb58; end: 106cdeecf; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelper:overrideTapHandlingAtIndexPath:] */

ulong FUN_106cdeb58(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bebda40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar11 = 0;
    goto LAB_106cdec98;
  }
  uVar11 = uVar1;
  func_0x00010c06ece0();
  if ((uVar11 & 1) == 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    uVar11 = uVar1;
    func_0x00010c245680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    param_2 = uVar3;
    func_0x000107e00710(lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(lVar2);
  }
  else {
    uVar11 = param_1;
    func_0x00010be41a20();
    if ((int)uVar11 == 0) {
      uVar3 = param_1;
      func_0x00010be0aa60();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010bfbdda0();
      func_0x00010b5fad2c();
      if ((uVar11 & 1) == 0) {
        uVar11 = uVar3;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (uVar11 == 8) goto LAB_106cdec8c;
        uVar11 = param_1;
        func_0x00010c07b240();
        if ((int)uVar11 != 0) {
          uVar4 = *(ulong *)(param_1 + 0x108);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar4;
          func_0x00010c0c9fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010bf3f7c0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c15ac40();
          _objc_release(uVar5);
          _objc_release(uVar11);
          _objc_release(uVar4);
          if ((uVar6 & 1) != 0) goto LAB_106cdec8c;
        }
        uVar11 = param_1;
        func_0x00010bebcca0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
        if (uVar11 != 0) {
          uVar5 = uVar1;
          func_0x00010c245680(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c225c20();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010bf80e60(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c080280();
          _objc_release(uVar8);
          _objc_release(puVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if (((ulong)puVar9 & 1) == 0) {
            uVar6 = uVar1;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar6;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            while (uVar5 != 0) {
              uVar4 = 0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(uVar6);
                }
                uVar8 = *(undefined8 *)(uVar4 * 8);
                param_2 = uVar3;
                func_0x00010b6f8630(uVar8,uVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c272be0(param_3);
                _objc_release(uVar8);
                uVar4 = uVar4 + 1;
              } while (uVar5 != uVar4);
              uVar5 = uVar6;
              func_0x00010bf52a60();
            }
            _objc_release(uVar6);
          }
        }
        _objc_release(uVar11);
        uVar11 = 1;
      }
      else {
LAB_106cdec8c:
        uVar11 = 0;
      }
      _objc_release(uVar3);
      goto LAB_106cdec98;
    }
    func_0x00010be7eac0(param_1);
  }
  uVar11 = 1;
LAB_106cdec98:
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return uVar11;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return param_2;
}



/* Entry: 106cdeed0; end: 106cdeed7;  */

void FUN_106cdeed0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106cdeed8; end: 106cdef2b; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelperRequestSelectMode:isFromLongPress:] */

long FUN_106cdeed8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x270;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c267940();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106cdef2c; end: 106cdf0e3; -[SCGallerySnapsTabController memoriesCollectionViewSelectionHelperDidTapOverSelectionLimit:] */

void FUN_106cdef2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR_PTR_1126aed70;
  if (lVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = puVar4;
    func_0x000108dfd59c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    if (lVar7 == 0) {
      func_0x00010c10eda0();
    }
    else {
      lVar1 = param_1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10eda0();
      _objc_release(lVar1);
    }
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106cdf0e4; end: 106cdf0f3;  */

void FUN_106cdf0e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 106cdf0f4; end: 106cdf12b; -[SCGallerySnapsTabController emptyStateViewDidTapButton] */

void FUN_106cdf0f4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cdf12c; end: 106cdf133; -[SCGallerySnapsTabController requestToCancelOngoingGestureRecognizers] */

void FUN_106cdf12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe0),PTR_s_cancelOngoingGestureRecognizers_1125a93b8);
  return;
}



/* Entry: 106cdf134; end: 106cdf13b; -[SCGallerySnapsTabController fetchAllFeaturedStories] */

void FUN_106cdf134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_featuredStories_1125c6638);
  return;
}



/* Entry: 106cdf13c; end: 106cdf1d7; -[SCGallerySnapsTabController galleryCollectionViewHelper:itemAtIndexPath:] */

void FUN_106cdf13c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bebda40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bdea1a0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cdf1d8; end: 106cdf293; -[SCGallerySnapsTabController spectaclesOnboardingScopeWantsDismiss] */

void FUN_106cdf1d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2492e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2492e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106cdf294; end: 106cdf487; -[SCGallerySnapsTabController snapsTabBannerDidDismiss:isExplicitDismiss:] */

void FUN_106cdf294(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c113c80();
  if (lVar2 == 0) {
LAB_106cdf384:
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c113c80();
    if (lVar3 == 2) {
LAB_106cdf37c:
      _objc_release(lVar2);
      goto LAB_106cdf384;
    }
    lVar3 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c113c80();
    if (lVar4 == 3) {
LAB_106cdf374:
      _objc_release(lVar3);
      goto LAB_106cdf37c;
    }
    lVar4 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c113c80();
    if (lVar5 == 4) {
LAB_106cdf36c:
      _objc_release(lVar4);
      goto LAB_106cdf374;
    }
    lVar5 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c113c80();
    if (lVar6 == 5) {
      _objc_release(lVar5);
      goto LAB_106cdf36c;
    }
    lVar6 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c113c80();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar9 != 1) goto LAB_106cdf408;
  }
  if (param_4 != 0) {
    puVar7 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(puVar7);
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  _objc_release(uVar8);
LAB_106cdf408:
  _objc_release(param_3);
  return;
}



/* Entry: 106cdf488; end: 106cdf4f7;  */

void FUN_106cdf488(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x1d0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7b60(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cdf4f8; end: 106cdf5c7; -[SCGallerySnapsTabController _presentStorageUpsellWithSourceId:] */

void FUN_106cdf4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106cdf5c8;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106cdf5c8; end: 106cdf737;  */

void FUN_106cdf5c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x1f0;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0x1f0;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar3,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    uVar6 = *(undefined8 *)(param_1 + 0x1f8);
    puVar5 = PTR_PTR_1126b5af8;
    func_0x00010c257080(PTR_PTR_1126b5af8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23e60(uVar6,param_2,puVar3,puVar4,param_1,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar1 = param_1 + 0x1f0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf9d620();
    _objc_release(lVar1);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cdf738; end: 106cdf807; -[SCGallerySnapsTabController snapsTabBannerDidTapCTA:] */

void FUN_106cdf738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106cdf808;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106cdf808; end: 106cdf9d3;  */

void FUN_106cdf808(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106cdf8dc;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c113c80();
  if (lVar3 == 0) {
LAB_106cdf8c8:
    _objc_release(lVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c113c80();
    if (lVar3 == 2) {
LAB_106cdf8c0:
      _objc_release(lVar4);
      goto LAB_106cdf8c8;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c113c80();
    if (lVar3 == 3) {
LAB_106cdf8b8:
      _objc_release(lVar5);
      goto LAB_106cdf8c0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c113c80();
    if (lVar3 == 4) {
      _objc_release(lVar6);
      goto LAB_106cdf8b8;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c113c80();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar3 != 5) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c113c80();
      _objc_release(lVar2);
      if (lVar3 == 1) {
        puVar8 = PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        lVar3 = lVar1 + 8;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c038f40(puVar8,param_2,lVar3,1);
        _objc_release(lVar3);
        lVar3 = lVar1 + 0x200;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c0e9920();
        _objc_release(lVar3);
        _objc_release(puVar8);
      }
      goto LAB_106cdf8dc;
    }
  }
  func_0x00010be7eac0(lVar1,param_2,0);
LAB_106cdf8dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cdf9d4; end: 106cdfaff; -[SCGallerySnapsTabController getSectionModelsForGivenHeaderModel:] */

void FUN_106cdf9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106cd900c;
  uStack_40 = 0x106cd901c;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010c156980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be2a0();
  _objc_release(uVar1);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puStack_58[5] != 0) {
    puVar2 = *(undefined **)(param_1 + 0xf8);
    func_0x00010bfc3c40(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cdfb00; end: 106cdfb37;  */

void FUN_106cdfb00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cdfb38; end: 106cdfb3f;  */

void FUN_106cdfb38(void)

{
  return;
}



/* Entry: 106cdfb40; end: 106cdfc77; -[SCGallerySnapsTabController galleryTabsOperaPresenterShouldUpdateList] */

byte FUN_106cdfb40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((*(long *)(param_1 + 0x130) == 0) || (*(long *)(param_1 + 0xd0) == 0)) {
    bVar4 = 0;
  }
  else {
    func_0x00010c1554e0();
    lVar1 = param_1;
    func_0x00010bdc9720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      bVar4 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x140);
      *(undefined8 *)(param_1 + 0x140) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 *)(param_1 + 0x148) = 0;
      _objc_release(uVar2);
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      lVar3 = lVar1;
      func_0x00010c156980(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0be2a0();
      _objc_release(lVar3);
      bVar4 = *(byte *)(puStack_48 + 3);
      __Block_object_dispose(&uStack_50,8);
    }
    _objc_release(lVar1);
  }
  return bVar4 & 1;
}



/* Entry: 106cdfc78; end: 106cdfc7f;  */

void FUN_106cdfc78(void)

{
  return;
}



/* Entry: 106cdfc80; end: 106cdfd0f;  */

void FUN_106cdfc80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cdfd10; end: 106cdfe37; -[SCGallerySnapsTabController _getCurrentGalleryTabsOperaPresentedIndexForItemId:] */

long FUN_106cdfd10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xd0);
  func_0x00010c0840e0();
  lVar2 = *(long *)(param_1 + 0x140);
  func_0x00010bf529e0();
  lVar6 = lVar2;
  if (lVar2 < 2) {
    lVar6 = 1;
  }
  if (lVar2 <= lVar1) {
    lVar1 = lVar6 + -1;
  }
  if (lVar1 < lVar2 + -1) {
    uVar3 = *(ulong *)(param_1 + 0x140);
    func_0x00010c0dfd20(uVar3,param_2,lVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar6 = lVar1 + 1;
    if ((uVar5 & 1) != 0) goto LAB_106cdfe14;
  }
  if (0 < lVar2 && 0 < lVar1) {
    uVar3 = *(ulong *)(param_1 + 0x140);
    func_0x00010c0dfd20(uVar3,param_2,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar6 = lVar1 + -1;
    if ((uVar5 & 1) != 0) goto LAB_106cdfe14;
  }
  lVar6 = lVar1;
LAB_106cdfe14:
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 106cdfe38; end: 106cdfef3; -[SCGallerySnapsTabController galleryTabsOperaPresenterOperaPlaylistForItemId:] */

void FUN_106cdfe38(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0x140) != 0)) {
    puVar1 = param_1;
    func_0x00010be1e3e0(param_1,param_2,param_3);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c1554e0(uVar2);
    func_0x00010bfed020(puVar3,param_2,puVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar3;
    _objc_release(uVar2);
    func_0x00010bdd5da0(param_1,param_2,puVar1,*(undefined8 *)(param_1 + 0x140),
                        *(undefined8 *)(param_1 + 0x148));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cdfef4; end: 106cdff0f; -[SCGallerySnapsTabController galleryTabsOperaPresenterDidDismissOpera] */

void FUN_106cdfef4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106cdff10; end: 106cdff3f; -[SCGallerySnapsTabController _buildCROperaPlaylistWithItemIndex:assetsList:assetsExcludeList:] */

void FUN_106cdff10(void)

{
  long in_x4;
  
  if (in_x4 == 0) {
    func_0x00010bdea200();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdea1e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cdff40; end: 106ce001f; -[SCGallerySnapsTabController _crOperaPlaylistWithoutExcludeListWithItemIndex:assetsList:] */

void FUN_106cdff40(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf529e0();
  lVar6 = param_3;
  if (param_3 < 6) {
    lVar6 = 5;
  }
  lVar5 = lVar6 + -5;
  lVar1 = param_3 + 5;
  if (lVar2 + -1 <= param_3 + 5) {
    lVar1 = lVar2 + -1;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 <= lVar1) {
    lVar6 = (lVar1 - lVar6) + 6;
    do {
      lVar2 = param_4;
      func_0x00010c0dfd20(param_4,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,lVar2);
      _objc_release(lVar2);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ce0020; end: 106ce024b; -[SCGallerySnapsTabController _crOperaPlaylistWithExcludeListWithItemIndex:assetsList:assetsExcludeList:] */

void FUN_106ce0020(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106ce024c;
  puStack_80 = &UNK_11085b3a0;
  _objc_retain(puVar2);
  puStack_78 = puVar2;
  func_0x00010bf97e80(param_5,param_2,&puStack_98);
  puStack_c0 = puVar5;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106ce0258;
  puStack_a8 = &UNK_11085b3a0;
  _objc_retain(puVar3);
  puStack_a0 = puVar3;
  func_0x00010bf97e80(param_4,param_2,&puStack_c0);
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_e8 = puVar5;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106ce0264;
  puStack_d0 = &UNK_110891b70;
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  func_0x00010c1063a0(puVar4,param_2,&puStack_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfaea40(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  if (param_3 < 6) {
    lVar1 = 5;
  }
  lVar8 = lVar1 + -5;
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar9 = (undefined *)(param_3 + 5U);
  if (puVar6 + -1 <= (undefined *)(param_3 + 5U)) {
    puVar9 = puVar6 + -1;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 <= (long)puVar9) {
    puVar9 = puVar9 + (6 - lVar1);
    do {
      puVar7 = puVar5;
      func_0x00010c0dfd20(puVar5,param_2,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      lVar8 = lVar8 + 1;
      puVar9 = puVar9 + -1;
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_c8);
  _objc_release(puStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106ce024c; end: 106ce0263;  */

void FUN_106ce024c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106ce0264; end: 106ce0283;  */

uint FUN_106ce0264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106ce0284; end: 106ce045f; -[SCGallerySnapsTabController _presentOperaWithOperaGroups:initialIndex:groupViewModel:snapCell:] */

void FUN_106ce0284(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = param_7;
  _objc_retain();
  iVar1 = (int)uVar2;
  if (param_5 == 0x7fffffffffffffff) {
    lVar3 = *(long *)(param_2 + 0x108);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110e83738,
                        &PTR____CFConstantStringClassReference_110e837d8,0,lVar5);
  }
  else {
    func_0x000100150168();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x108);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108e00074(&PTR____CFConstantStringClassReference_110e83798,
                          &PTR____CFConstantStringClassReference_110e837f8,0,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    uVar2 = param_6;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_2 + 200) = uVar2;
    _objc_release(uVar4);
    func_0x00010bf47240(*(undefined8 *)(param_2 + 0x110));
    lVar3 = *(long *)(param_2 + 0x110);
    func_0x00010c0ead40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010be6f200(param_2);
    uVar2 = param_1;
    func_0x00010c0f2220(param_2);
    param_2 = param_2 + 0x270;
    _objc_loadWeakRetained(param_2);
    func_0x00010c0eafa0();
    func_0x00010c10d5e0(param_1,uVar2,lVar3);
    _objc_release(param_2);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ce0460; end: 106ce04cb; -[SCGallerySnapsTabController _pageHeight] */

double FUN_106ce0460(long param_1)

{
  double dVar1;
  double in_d3;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x280);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x28));
  if (in_d3 == 0.0) {
    in_d3 = 0.0;
  }
  else {
    dVar1 = -dVar3;
    if (0.0 <= dVar3) {
      dVar1 = dVar3;
    }
    dVar3 = -dVar2;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x28));
    in_d3 = (dVar1 - dVar3) / in_d3;
  }
  return in_d3;
}



/* Entry: 106ce04cc; end: 106ce059b; -[SCGallerySnapsTabController _getSectionIndexForViewModelType:] */

ulong FUN_106ce04cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010be22680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar1 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
      _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar3 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar2);
      uVar4 = uVar1;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar1);
      uVar1 = uVar4;
      _objc_opt_isKindOfClass(uVar4,param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_106ce057c;
      uVar5 = uVar5 + 1;
      uVar4 = param_1;
      func_0x00010bf529e0();
    } while (uVar5 < uVar4);
  }
  uVar5 = 0x7fffffffffffffff;
LAB_106ce057c:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106ce059c; end: 106ce062f; -[SCGallerySnapsTabController _deeplinkToGridLocationOnRegularSnapId:] */

void FUN_106ce059c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10e500(uVar2,param_2,param_3,lVar1);
  _objc_release(lVar1);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c0834c0();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + 0x268) == '\x01')) {
    func_0x00010bdd18e0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ce0630; end: 106ce06cb; -[SCGallerySnapsTabController _deeplinkToOperaForFeaturedStoryInfo:] */

void FUN_106ce0630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be28120(param_1,param_2,param_3);
  if ((int)lVar1 == 0) {
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef89d8,
                        &PTR____CFConstantStringClassReference_110e63a18,
                        *(undefined8 *)(param_1 + 0x250));
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = param_3;
    _objc_release(uVar2);
  }
  else {
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef89b8,
                        &PTR____CFConstantStringClassReference_110dab0d8,
                        *(undefined8 *)(param_1 + 0x250));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ce06cc; end: 106ce085f; -[SCGallerySnapsTabController _handleDeeplinkRequestForFeaturedStoryInfo:] */

undefined1 * FUN_106ce06cc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0xb0);
  func_0x00010c0e0300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(param_1 + 0xb0);
        func_0x00010c155800();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_DAT_1126a57a8;
        _objc_retain();
        lVar5 = lVar4;
        func_0x00010010fab4(lVar4,puVar6);
        lVar1 = lVar4;
        if ((int)lVar5 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar4);
        if (lVar1 != 0) {
          func_0x00010bf687a0(lVar4);
          _objc_release(lVar4);
          _objc_release(lVar4);
          puVar8 = (undefined1 *)0x1;
          goto LAB_106ce0810;
        }
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  puVar8 = (undefined1 *)0x0;
  param_3 = (undefined1 *)puVar7;
LAB_106ce0810:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    puVar6 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar6);
    _objc_release(puVar6);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return param_3;
}



/* Entry: 106ce0860; end: 106ce09eb; -[SCGallerySnapsTabController _autoScrollToDeeplinkingSnapIfNeed:] */

void FUN_106ce0860(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106ce091c;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(puVar1,param_2,&puStack_60);
    _objc_release(puVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ce09ec; end: 106ce0b43;  */

void FUN_106ce09ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    uVar8 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf343c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar1;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106ce0b44;
      puStack_98 = &UNK_110974d40;
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar9);
      uStack_88 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uStack_90 = uVar9;
      _objc_retain(uVar10);
      uStack_80 = uVar10;
      uStack_78 = uVar8;
      func_0x00010c0bff00(uVar5,param_2,&puStack_b0,&PTR___NSConcreteGlobalBlock_110974d70);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uStack_80);
      _objc_release(uStack_90);
      uVar8 = uVar8 + 1;
      uVar6 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf343c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
    } while (uVar8 < uVar7);
  }
  return;
}



/* Entry: 106ce0b44; end: 106ce0cd3;  */

void FUN_106ce0b44(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_106ce0c94:
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar2 = *(undefined8 *)(lVar7 * 8);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar5 != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0xb0);
        func_0x00010c155d20();
        if (lVar3 != 0x7fffffffffffffff) {
          puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128);
          *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128) = 0;
          _objc_release(uVar5);
          func_0x00010c1525a0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
          _objc_release(puVar4);
        }
        goto LAB_106ce0c94;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106ce0cd4; end: 106ce0cd7;  */

void FUN_106ce0cd4(void)

{
  return;
}



/* Entry: 106ce0cd8; end: 106ce0dc7; -[SCGallerySnapsTabController _logPageLoadMetricsForPageLoadCompleteOnHomeTab] */

void FUN_106ce0cd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
    if (*(long *)(param_1 + 0x278) == 3) {
      uVar1 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0f1680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f1560();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0c8940();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c22eba0();
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        func_0x000107e6b210(*(undefined8 *)(param_1 + 0x248),*(undefined8 *)(param_1 + 0x1e8));
      }
    }
    *(undefined1 *)(param_1 + 0x240) = 1;
  }
  return;
}



/* Entry: 106ce0dc8; end: 106ce0dcf; -[SCGallerySnapsTabController hasCompletePageLoad] */

undefined1 FUN_106ce0dc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x240);
}



/* Entry: 106ce0dd0; end: 106ce0deb; -[SCGallerySnapsTabController _performBatchedUpdateWithAnimated:completion:] */

void FUN_106ce0dd0(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x240);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb0),PTR_s_performUpdatesAnimated_completio_11261beb0,
             bVar1 & 1);
  return;
}



/* Entry: 106ce0dec; end: 106ce0ed3; -[SCGallerySnapsTabController _logUiUpdatedLatencyIfNeeded] */

void FUN_106ce0dec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *(double *)(param_1 + 0x220);
  if (dVar4 == -1.0) {
    _CACurrentMediaTime();
    *(double *)(param_1 + 0x220) = dVar4;
    lVar1 = param_1;
    func_0x00010be65460(param_1);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = *(double *)(param_1 + 0x220);
    dVar5 = *(double *)(param_1 + 0x218);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    FUN_106cf001c(*(undefined8 *)(param_1 + 0x118),lVar1,puVar3,(long)((dVar4 - dVar5) * 1000.0));
    param_1 = param_1 + 0x270;
    _objc_loadWeakRetained(param_1);
    func_0x00010c267a60();
    _objc_release(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106ce0ed4; end: 106ce0f33; -[SCGallerySnapsTabController _numSnapsToBucketStringForLatencyMetrics:] */

undefined ** FUN_106ce0ed4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e83898;
  if (5000 < param_3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e838b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e83878;
  if (1000 < param_3) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e83858;
  if (500 < param_3) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e83838;
  if (100 < param_3) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e83818;
  if (10 < (long)param_3) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 106ce0f34; end: 106ce0f37; -[SCGallerySnapsTabController memoriesPickerV2DidDismiss] */

void FUN_106ce0f34(void)

{
  return;
}



/* Entry: 106ce0f38; end: 106ce0f87; -[SCGallerySnapsTabController onBackPressed] */

void FUN_106ce0f38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x180;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ce0f88; end: 106ce0f8b; -[SCGallerySnapsTabController onCameraRollAlbumClickedWithCameraRollAlbumId:] */

void FUN_106ce0f88(void)

{
  return;
}



/* Entry: 106ce0f8c; end: 106ce0f8f; -[SCGallerySnapsTabController onItemClickedWithItem:thumbnailCell:] */

void FUN_106ce0f8c(void)

{
  return;
}



/* Entry: 106ce0f90; end: 106ce1017; -[SCGallerySnapsTabController onItemsSelectedWithItems:] */

void FUN_106ce0f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106ce1018;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106ce1018; end: 106ce1023;  */

void FUN_106ce1018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onItemsSelectedWithItems__112578048,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ce1024; end: 106ce1387; -[SCGallerySnapsTabController _onItemsSelectedWithItems:] */

void FUN_106ce1024(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  _objc_retain(param_3);
  func_0x00010be7ea80(param_1);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126af4d0;
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf63f40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
    puVar6 = puVar5;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    puVar7 = puVar6;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(puVar6);
    if (lVar1 == 0) {
      puVar6 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar8 = PTR_PTR_1126b25b8;
      _objc_alloc();
      puVar9 = puVar8;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011280();
      _objc_release(puVar9);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x198);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e6121c(puVar8,puVar7,puVar9,uVar10,*(undefined8 *)(param_1 + 0x1a0),puVar6,0);
      _objc_release(uVar10);
      _objc_release(puVar9);
      uVar11 = *(undefined8 *)(param_1 + 0x1b8);
      _objc_retain(uVar11);
      uVar10 = *(undefined8 *)(param_1 + 400);
      _objc_retain(uVar10);
      _objc_initWeak(auStack_70,param_1);
      puVar9 = puVar6;
      func_0x00010bfbc3e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(puVar7);
      func_0x00010c297260(puVar9);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_release(uVar10);
      _objc_release(uVar11);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    else {
      func_0x00010be72fe0(param_1);
    }
    _objc_release(puVar7);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010be72fe0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ce1388; end: 106ce14e3;  */

void FUN_106ce1388(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf59640();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  else {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be72fe0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106ce14e4; end: 106ce15a3;  */

void FUN_106ce14e4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010be72fe0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = PTR_PTR_1126b25c0;
    _objc_alloc(PTR_PTR_1126b25c0);
    lVar2 = param_2;
    func_0x00010c15ec60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar1);
    _objc_release(lVar2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be01460();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ce15a4; end: 106ce15db; -[SCGallerySnapsTabController didTriggerCreateMashupForStory:] */

void FUN_106ce15a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be01450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTriggerCreateMashupForStory_11255deb0);
  return;
}



/* Entry: 106ce15dc; end: 106ce1657; -[SCGallerySnapsTabController didTriggerRefetchLatestFeaturedStories] */

void FUN_106ce15dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1073e0(0x403e000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ce1658; end: 106ce165b;  */

void FUN_106ce1658(void)

{
  return;
}



/* Entry: 106ce165c; end: 106ce18cb; -[SCGallerySnapsTabController _didTriggerCreateMashupForStory:templateSnapDoc:] */

void FUN_106ce165c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bf8d8;
  _objc_opt_new(PTR_PTR_1126bf8d8);
  func_0x00010c1c2be0();
  puVar5 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = puVar5;
  func_0x00010c0b8600(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  func_0x00010c204700(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c212c20(puVar1);
  func_0x00010c1dcc20(puVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x178);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(uVar9);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = uVar8;
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbfa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ce18cc; end: 106ce18d3;  */

void FUN_106ce18cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_duplicatedFromSnapId_1125c05d8);
  return;
}


