/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ce0dc8; end: 105ce0de3;  */

uint FUN_105ce0dc8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c081f00(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105ce0de4; end: 105ce0e37;  */

undefined8 FUN_105ce0de4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_2,param_2,PTR_PTR_11329cf60);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105ce0e38; end: 105ce0ea7;  */

undefined8 FUN_105ce0e38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfadea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105ce0ea8; end: 105ce10d3; -[SCPreviewFiltersLegacyController _updateFiltersInSnapDocEditorWithFiltersState:] */

void FUN_105ce0ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf926c0();
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x00010c1103a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfaec60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) goto LAB_105ce10b8;
    uVar2 = param_1;
    func_0x00010c111b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = param_1;
    func_0x00010c111b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010be166a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1310e0(uVar2,param_2,uVar3,uVar1);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126bcd50;
    uVar3 = param_1;
    func_0x00010be15fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c119660(puVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224bc0(uVar2,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126bcd50;
    func_0x00010be15fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf17720();
    func_0x00010c119060(puVar6,param_2,uVar3);
    func_0x00010c16fb60(uVar2,param_2,puVar6);
    _objc_release(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_105ce10b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce10d4; end: 105ce187f; -[SCPreviewFiltersLegacyController _filtersFromFilterState:] */

void FUN_105ce10d4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puStack_1f8;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf926c0();
  if ((uVar17 & 1) == 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar17 = param_1;
    func_0x00010c1103a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar17;
    func_0x00010bfaec60();
    _objc_release(uVar17);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_1;
      func_0x00010be15fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0ceee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puStack_1f8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(uVar2);
      uVar1 = uVar2;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (uVar1 != 0) {
        uVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(uVar2);
          }
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar18 = *(undefined8 *)(uVar17 * 8);
          func_0x00010bfad780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfadea0();
          func_0x00010c14de00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar18);
          func_0x00010c1d0640(puVar4);
          _objc_release(puVar5);
          uVar17 = uVar17 + 1;
        } while (uVar1 != uVar17);
        uVar1 = uVar2;
        func_0x00010bf52a60();
      }
      _objc_release(uVar2);
      lVar6 = param_3;
      func_0x00010bfc1460();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(lVar6);
          }
          uVar18 = *(undefined8 *)(lVar16 * 8);
          func_0x00010bfadea0(uVar18);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = param_3;
          func_0x00010c27e680();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf4b900();
          _objc_release(lVar8);
          puVar5 = PTR_PTR_1126bcd58;
          if ((int)lVar9 == 0) {
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar11 = PTR_PTR_1126bcd58;
            if (puVar5 != (undefined *)0x0) {
              puVar10 = puVar4;
              func_0x00010c0e00e0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar10;
              func_0x00010bfad780();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf5d740(puVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_1f8);
              _objc_release(puVar11);
              goto LAB_105ce142c;
            }
          }
          else {
            puVar10 = PTR_PTR_1126bcd50;
            func_0x00010bdc23e0(PTR_PTR_1126bcd50);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27e6e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_1f8);
LAB_105ce142c:
            _objc_release(puVar5);
            _objc_release(puVar10);
          }
          _objc_release(uVar18);
          lVar16 = lVar16 + 1;
        } while (lVar7 != lVar16);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      lVar7 = param_3;
      func_0x00010c140140();
      puVar11 = PTR_PTR_1126bcd58;
      puVar5 = PTR_PTR_1126bcd50;
      if ((int)lVar7 != 0) {
        func_0x00010c140140(param_3);
        func_0x00010bdc2260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010befa120(puStack_1f8);
        _objc_release(puVar11);
      }
      lVar7 = param_3;
      func_0x00010c249d80();
      if (lVar7 != 0x7fffffffffffffff) {
        lVar7 = param_3;
        func_0x00010c249de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c249d80(param_3);
        lVar12 = lVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar12;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(lVar7);
        puVar5 = PTR_PTR_1126bcd58;
        puVar11 = PTR_PTR_1126bcd50;
        func_0x00010bdc2280(PTR_PTR_1126bcd50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010befa120(puStack_1f8);
        _objc_release(puVar5);
        _objc_release(lVar12);
      }
      lVar7 = param_3;
      func_0x00010c2a0460();
      if ((lVar7 != 0x7fffffffffffffff) && (lVar7 = param_3, func_0x00010c2a0460(), lVar7 != 0)) {
        lVar7 = param_3;
        func_0x00010c2a04c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a0460(param_3);
        lVar12 = lVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        func_0x000108086fd4(lVar12);
        puVar5 = PTR_PTR_1126bcd58;
        puVar11 = PTR_PTR_1126bcd50;
        func_0x00010bdc22a0(PTR_PTR_1126bcd50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010befa120(puStack_1f8);
        _objc_release(puVar5);
        _objc_release(lVar12);
      }
      lVar7 = param_3;
      func_0x00010c082fa0();
      if ((int)lVar7 != 0) {
        func_0x00010be15fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c297ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        puVar11 = PTR_PTR_1126c3cb0;
        _objc_alloc();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c2bec60(uVar1);
        func_0x00010c0df720(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar1;
        func_0x00010c297dc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c159620(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar3;
        func_0x00010c297e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0636a0();
        _objc_release(uVar13);
        _objc_release(uVar3);
        _objc_release(uVar17);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126bcd58;
        puVar10 = PTR_PTR_1126b3828;
        _objc_opt_new(PTR_PTR_1126b3828);
        puVar14 = PTR_PTR_1126bcd50;
        func_0x00010bfae140(PTR_PTR_1126bcd50);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d740(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar10);
        func_0x00010befa120(puStack_1f8);
        _objc_release(puVar5);
        _objc_release(puVar11);
        _objc_release(uVar1);
      }
      _objc_release(puVar4);
      _objc_release(uVar2);
      goto LAB_105ce1838;
    }
  }
  puStack_1f8 = (undefined *)0x0;
LAB_105ce1838:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1f8);
    return;
  }
  ___stack_chk_fail();
  lVar15 = param_3;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar15;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bfae480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f9e0(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010c19c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setFilterStackingUITooltipLabel__112644b98,0)
  ;
  return;
}



/* Entry: 105ce1880; end: 105ce1923; -[SCPreviewFiltersLegacyController removeFilterStackingUITooltipLabel] */

void FUN_105ce1880(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfae480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f9e0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFilterStackingUITooltipLabel__112644b98,0)
  ;
  return;
}



/* Entry: 105ce1924; end: 105ce1a1b; -[SCPreviewFiltersLegacyController updateStackingButtonWithStackedFiltersCount:] */

void FUN_105ce1924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfae440(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066ae0(lVar1,param_2,lVar2,param_3,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    func_0x00010c285c80(lVar1,param_2,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105ce1a1c; end: 105ce1a77; -[SCPreviewFiltersLegacyController isAnyUcoSelected] */

bool FUN_105ce1a1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf60840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf529e0(lVar1);
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 105ce1a78; end: 105ce1b43; -[SCPreviewFiltersLegacyController previewFilterDataProviderInsertPromptFilterInVenueFilterPosition:] */

undefined ** FUN_105ce1a78(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f27818;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa420();
  _objc_release(param_1);
  ppuVar1 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105ce1b44;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f27818;
  puStack_70 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_60 = ppuVar5;
  uStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f27478;
  func_0x00010befa420();
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_c0 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c0,&ppuStack_c8,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420();
    _objc_release(ppuVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuVar5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c078120();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = ppuVar5;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010bf529e0();
    if (ppuVar6 < (undefined **)0x2) {
      func_0x00010bf46560(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c070a20();
      _objc_release(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)0x1;
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar6 = (undefined **)0x1;
  }
  _objc_release(ppuVar1);
  return ppuVar6;
}



/* Entry: 105ce1b44; end: 105ce1c0f; -[SCPreviewFiltersLegacyController previewFilterDataProviderInsertBroadLocationPromptFilterInVenueFilterPosition:] */

undefined ** FUN_105ce1b44(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f27818;
  puStack_30 = PTR____kCFBooleanTrue_11034ab68;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f27478;
  func_0x00010befa420();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_80 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_88,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420();
    _objc_release(ppuVar1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  ppuVar1 = ppuVar5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c078120();
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar3 = ppuVar5;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010bf529e0();
    if (ppuVar6 < (undefined **)0x2) {
      func_0x00010bf46560(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c070a20();
      _objc_release(ppuVar5);
    }
    else {
      ppuVar6 = (undefined **)0x1;
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  else {
    ppuVar6 = (undefined **)0x1;
  }
  _objc_release(ppuVar1);
  return ppuVar6;
}



/* Entry: 105ce1c10; end: 105ce1cf7; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateVenueFilter:] */

ulong FUN_105ce1c10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c297ce0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ef0fd8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_40 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_40,&ppuStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa420();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c078120();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    if (uVar5 < 2) {
      func_0x00010bf46560(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c070a20();
      _objc_release(param_3);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 105ce1cf8; end: 105ce1dbb; -[SCPreviewFiltersLegacyController previewFilterDataProviderShouldUseVenueFilterInsteadOfLens] */

ulong FUN_105ce1cf8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078120();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c2702c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (uVar4 < 2) {
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c070a20();
      _objc_release(param_1);
    }
    else {
      uVar4 = 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105ce1dbc; end: 105ce1f53; -[SCPreviewFiltersLegacyController previewFilterDataProviderCanUseUCO] */

ulong FUN_105ce1dbc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0811c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c070a20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07f160();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar3 != 0) {
        uVar2 = uVar1;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c081c00();
        _objc_release(uVar2);
        _objc_release(uVar1);
        return uVar3;
      }
      uVar2 = uVar1;
      func_0x00010c0d2100();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c077140();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c078120();
        if ((int)uVar2 == 0) {
          uVar2 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c06d080();
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((int)uVar3 == 0) {
            return 1;
          }
        }
        else {
          _objc_release(uVar1);
        }
                    /* WARNING: Could not recover jumptable at 0x00010be09190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__enableUCOFiltersForMultiMediaCa_11255fe00);
        return param_1;
      }
    }
  }
  else {
    _objc_release(uVar1);
  }
  return 1;
}



/* Entry: 105ce1f54; end: 105ce2123; -[SCPreviewFiltersLegacyController shouldDisableMotionFilters] */

bool FUN_105ce1f54(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar4 == 0) {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c083340();
      if ((int)uVar3 == 0) {
        bVar1 = true;
        goto LAB_105ce1fa0;
      }
      uVar3 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06d080();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0d2940();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
          func_0x00010bfa3600(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c2a0940();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf08020();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = uVar8 != 0;
          _objc_release();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(param_1);
        }
        else {
          bVar1 = true;
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        goto LAB_105ce1f98;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = true;
LAB_105ce1f98:
    _objc_release(uVar3);
LAB_105ce1fa0:
    _objc_release(uVar2);
  }
  return bVar1;
}



/* Entry: 105ce2124; end: 105ce213b; -[SCPreviewFiltersLegacyController previewFilterDataProviderCanUseColorLenses] */

uint FUN_105ce2124(uint param_1)

{
  func_0x00010c110e80();
  return param_1 ^ 1;
}



/* Entry: 105ce213c; end: 105ce2197; -[SCPreviewFiltersLegacyController _enableUCOFiltersForMultiMediaCases] */

undefined8 FUN_105ce213c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27e640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92260();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105ce2198; end: 105ce220b; -[SCPreviewFiltersLegacyController _enableColorLensesForMultiMediaCases] */

ulong FUN_105ce2198(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010be09180();
  if ((uVar1 & 1) == 0) {
    func_0x00010c27e640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf92260();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 105ce220c; end: 105ce220f; -[SCPreviewFiltersLegacyController previewFilterDataProviderCanUseReverseMotionFilter:] */

void FUN_105ce220c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be972b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reverseMotionFilterAvailable_112583648);
  return;
}



/* Entry: 105ce2210; end: 105ce2297; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateUnlockable:unlockable:] */

void FUN_105ce2210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf115c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf11540();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2298; end: 105ce2313; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateGeoFilterImages:] */

void FUN_105ce2298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc1240(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfc1180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc7aa0(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ce2314; end: 105ce2317; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateSpeed:] */

void FUN_105ce2314(void)

{
  return;
}



/* Entry: 105ce2318; end: 105ce2393; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateAltitude:] */

void FUN_105ce2318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bf01f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bfede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835c0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce2394; end: 105ce244f; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateWeather:] */

void FUN_105ce2394(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34540(param_4);
  uVar2 = param_1;
  func_0x00010bf9fa60(param_4);
  func_0x00010bfaed40(param_1,uVar2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bfede80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c340();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ce2450; end: 105ce24df; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateVenues:] */

void FUN_105ce2450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c297e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28bd60();
    _objc_release(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce24e0; end: 105ce2527; -[SCPreviewFiltersLegacyController previewFilterDataProviderWillStartUpdates] */

void FUN_105ce24e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf323e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18160();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2528; end: 105ce2577; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidCompleteUpdates:succeeded:] */

void FUN_105ce2528(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c111b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6d9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a020();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2578; end: 105ce263f; -[SCPreviewFiltersLegacyController previewFilterDataProviderDidCompleteUpdates:isGeoFilterListUpdatedDuringLoading:] */

void FUN_105ce2578(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bdc80c0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ce2640; end: 105ce26d3;  */

void FUN_105ce2640(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c158ae0(param_1);
    lVar1 = param_1;
    func_0x00010c111180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1236a0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf323e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18160();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce26d4; end: 105ce271b; -[SCPreviewFiltersLegacyController cacheCurrentFilterSelection] */

void FUN_105ce26d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257660();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce271c; end: 105ce2763; -[SCPreviewFiltersLegacyController restoreFilterSelection] */

void FUN_105ce271c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c3c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2764; end: 105ce27ab; -[SCPreviewFiltersLegacyController stopPreviewCarouselUpdates] */

void FUN_105ce2764(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf323e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255fa0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce27ac; end: 105ce2a0f; -[SCPreviewFiltersLegacyController previewFilterStackingUIHelperDidPressStackingButton:] */

void FUN_105ce27ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c1120c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22fa00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010bfae480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126c3cb8;
    _objc_alloc(PTR_PTR_1126c3cb8);
    puVar5 = puVar4;
    func_0x000108edec30();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0511e0(puVar4,param_2,puVar5);
    func_0x00010c19c5e0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfae480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfae480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c1120c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190600();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105ce2a10; end: 105ce2a9f; -[SCPreviewFiltersLegacyController previewFilterStackingUIHelperDidUpdateToolbarPayload:] */

void FUN_105ce2a10(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (*(long *)(param_1 + 8) == 0)) {
    func_0x00010c216fa0(param_1,param_2,0);
  }
  else {
    puVar1 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c039d00();
    func_0x00010c216fa0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce2aa0; end: 105ce2aa7; -[SCPreviewFiltersLegacyController smartSwipeFilterViewDidTapSponsoredSlug:filterId:] */

void FUN_105ce2aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb7830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showAdReportWithFilterId__11258b7b0,param_4)
  ;
  return;
}



/* Entry: 105ce2aa8; end: 105ce2af7; -[SCPreviewFiltersLegacyController geoFilterViewNeedsUpdate:] */

void FUN_105ce2aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be15fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286220();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2af8; end: 105ce2b57; -[SCPreviewFiltersLegacyController swipeFilterViewDidScroll:] */

void FUN_105ce2af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaed00();
  _objc_release(uVar1);
  func_0x00010bed0c00(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce2b58; end: 105ce2f03; -[SCPreviewFiltersLegacyController _udpateStackingToolWithSwipeFilterView:] */

void FUN_105ce2b58(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double adStack_190 [8];
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f27458;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f27478;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_a0,2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4b5c0();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
  func_0x00010bfed2e0(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar4 != 0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    adStack_190[7] = 0.0;
    adStack_190[6] = 0.0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,adStack_190 + 6,auStack_120,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar10 = *plStack_150;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_150 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar3 = param_1;
          func_0x00010c23eb80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf5f000();
          _objc_release(uVar3);
          if (uVar4 != 0x7fffffffffffffff) {
            func_0x00010bef92c0(puVar5,param_2,uVar4);
            uVar3 = param_1;
            func_0x00010c264a00();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar3;
            func_0x00010c0695e0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar7 == 0) {
              adStack_190[3] = 0.0;
              adStack_190[2] = 0.0;
              adStack_190[5] = 0.0;
              adStack_190[4] = 0.0;
              adStack_190[1] = 0.0;
              adStack_190[0] = 0.0;
            }
            else {
              func_0x00010bf603a0(adStack_190,uVar7);
            }
            dVar1 = adStack_190[0];
            _objc_release(uVar7);
            _objc_release(uVar3);
            uVar3 = param_1;
            func_0x00010c23eb80();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar3;
            func_0x00010bf5e9c0();
            _objc_release(uVar3);
            if ((uVar4 != uVar7 - 1) || (dVar11 = 1.0, dVar1 != 0.0)) {
              if (((double)(uVar4 + 1) < dVar1) || (dVar1 < (double)(uVar4 - 1)))
              goto LAB_105ce2dc8;
              dVar11 = ABS(dVar1 - (double)uVar4);
            }
            uVar3 = param_1;
            func_0x00010c1122a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d4be0(dVar11);
            _objc_release(uVar3);
            uVar3 = param_1;
            func_0x00010c1122a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c161840();
            _objc_release(uVar3);
          }
LAB_105ce2dc8:
          puVar9 = puVar9 + 1;
        } while (puVar6 != puVar9);
        puVar6 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,adStack_190 + 6,auStack_120,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar2);
  }
  uVar3 = param_1;
  func_0x00010bfae440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bfe5d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285c60(uVar3,param_2,param_3,uVar7,uVar8,puVar5);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaef00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce2f04; end: 105ce2f33; -[SCPreviewFiltersLegacyController swipeFilterViewWillBeginDragging:] */

void FUN_105ce2f04(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaef00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2f34; end: 105ce2f63; -[SCPreviewFiltersLegacyController swipeFilterViewWillEndDragging:] */

void FUN_105ce2f34(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce2f64; end: 105ce328f; -[SCPreviewFiltersLegacyController swipeViewDidEndDecelerating:] */

void FUN_105ce2f64(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe0a80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2dc0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c12c6c0(param_1);
  puVar1 = param_1;
  func_0x00010bfaee80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8160(param_1);
  puVar2 = param_1;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_1;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c0d2440(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105ce3050;
    }
  }
  else {
    func_0x00010bf16ce0();
    _objc_retainAutoreleasedReturnValue();
LAB_105ce3050:
    func_0x00010bf731a0();
    _objc_release(puVar3);
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaee60();
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c1120c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1907e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b38c8;
  _objc_opt_class(PTR_PTR_1126b38c8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126c3cd0;
    _objc_opt_class(PTR_PTR_1126c3cd0);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010c18b5e0(puVar2);
      goto LAB_105ce324c;
    }
    puVar3 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4be0(0x3ff0000000000000);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161840();
  }
  else {
    func_0x00010c18b5e0(puVar2);
    puVar3 = PTR_PTR_1126c3cc8;
    func_0x00010c09f1e0(PTR_PTR_1126c3cc8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c242680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010be53760(param_1);
  }
  _objc_release(puVar3);
LAB_105ce324c:
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaecc0();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ce3290; end: 105ce3357; -[SCPreviewFiltersLegacyController swipeViewDidEndExternalSelection:] */

void FUN_105ce3290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfaee80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8160(param_1,param_2,lVar1);
  lVar2 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0d2440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf731a0();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaee60();
    _objc_release(lVar2);
  }
  func_0x00010bed0c00(param_1,param_2,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce3358; end: 105ce33df; -[SCPreviewFiltersLegacyController venueFilterView:openPlacePickerTrayWithOnVenueTapped:suggestedVenuesFromFilter:venueIDToDistanceStringMap:] */

void FUN_105ce3358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaee20();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce33e0; end: 105ce34ff; -[SCPreviewFiltersLegacyController swipeViewDidRemoveStackedFilterView:] */

void FUN_105ce33e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfaee80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8160(param_1,param_2,lVar1);
  lVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06d080();
  _objc_release(lVar2);
  lVar2 = param_1;
  if ((int)lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_105ce349c;
    func_0x00010c0d2440(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf16ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf731a0();
  _objc_release(lVar2);
LAB_105ce349c:
  lVar2 = param_1;
  func_0x00010bfae440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2653c0();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaee60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ce3500; end: 105ce3603; -[SCPreviewFiltersLegacyController swipeViewDidStackFilter:] */

void FUN_105ce3500(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfae440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2653c0();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaee60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfaee80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8160(param_1,param_2,lVar1);
  lVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0811c0();
  if ((int)lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c0d2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_105ce35f0;
    func_0x00010c0d2440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf731a0();
    lVar2 = param_1;
  }
  _objc_release(lVar2);
LAB_105ce35f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ce3604; end: 105ce3667; -[SCPreviewFiltersLegacyController swipeFilterView:endedSwipeSessionNumber:] */

void FUN_105ce3604(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaeec0();
  _objc_release(uVar1);
  func_0x00010bfc12c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce3668; end: 105ce36fb; -[SCPreviewFiltersLegacyController venueFilterViewDidUpdate:] */

void FUN_105ce3668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaeee0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0d2440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73820();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce36fc; end: 105ce3777; -[SCPreviewFiltersLegacyController turnOnFiltersButtonPressed] */

void FUN_105ce36fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaee00();
  _objc_release(uVar1);
  func_0x00010be53740(param_1);
  return;
}



/* Entry: 105ce3778; end: 105ce3783;  */

void FUN_105ce3778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2033f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSmartAndVisualFilterEnabled__11265e720,1);
  return;
}



/* Entry: 105ce3784; end: 105ce37bb; -[SCPreviewFiltersLegacyController turnOnPreciseLocationButtonPressed] */

void FUN_105ce3784(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ce37bc; end: 105ce3867; -[SCPreviewFiltersLegacyController smartAndVisualFilterEnabled] */

ulong FUN_105ce37bc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23ec20();
  if ((uVar3 & 1) == 0) {
    func_0x00010bfa2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a04e0();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 105ce3868; end: 105ce391b; -[SCPreviewFiltersLegacyController setSmartAndVisualFilterEnabled:] */

void FUN_105ce3868(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ce391c;
  puStack_48 = &UNK_110845ce0;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(uVar1);
  func_0x00010c0f8520(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ce391c; end: 105ce394b;  */

void FUN_105ce391c(long param_1,undefined8 param_2)

{
  func_0x00010c203480(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c223f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setVisualFiltersEnabled__1126669e8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ce394c; end: 105ce3a07; -[SCPreviewFiltersLegacyController anyFilterAvailable] */

bool FUN_105ce394c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar1 = param_1;
  func_0x00010c23eb80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b780();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b780();
    if ((uVar3 & 1) == 0) {
      func_0x00010c23eb80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c276560();
      bVar4 = 1 < (long)uVar3;
      _objc_release(param_1);
    }
    else {
      bVar4 = false;
    }
    _objc_release(uVar2);
  }
  else {
    bVar4 = false;
  }
  _objc_release(uVar1);
  return bVar4;
}



/* Entry: 105ce3a08; end: 105ce3a9b; -[SCPreviewFiltersLegacyController featureSwipeFiltersAddMotionFilters:] */

void FUN_105ce3a08(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083340();
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  uVar2 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06d080();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef9e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addMotionFilters_11259c130);
  return;
}



/* Entry: 105ce3a9c; end: 105ce3aef; -[SCPreviewFiltersLegacyController featureSwipeFiltersShouldIncludePromptFilterView:] */

uint FUN_105ce3a9c(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  func_0x00010c23eb00();
  if ((int)uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfaedc0();
    uVar2 = (uint)uVar1 ^ 1;
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105ce3af0; end: 105ce3af3; -[SCPreviewFiltersLegacyController featureSwipeFiltersAddSmartFilters:] */

void FUN_105ce3af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addSmartFilters_11254fa88);
  return;
}



/* Entry: 105ce3af4; end: 105ce3af7; -[SCPreviewFiltersLegacyController featureSwipeFiltersAddStreakFilters:] */

void FUN_105ce3af4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStreakFilter_11254fb70);
  return;
}



/* Entry: 105ce3af8; end: 105ce3afb; -[SCPreviewFiltersLegacyController featureSwipeFiltersRemovePromptFilters:] */

void FUN_105ce3af8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePromptFilter_112580d80);
  return;
}



/* Entry: 105ce3afc; end: 105ce3aff; -[SCPreviewFiltersLegacyController featureSwipeFiltersDidTurnOnFilters:] */

void FUN_105ce3afc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableFilterStackingUIIfNeeded_11255fc80);
  return;
}



/* Entry: 105ce3b00; end: 105ce3b7b; -[SCPreviewFiltersLegacyController featureSwipeFiltersDidUpdateState:] */

void FUN_105ce3b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaeee0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ce3b7c; end: 105ce3b7f; -[SCPreviewFiltersLegacyController filterStackingUIHelperForFeatureSwipeFilters:] */

void FUN_105ce3b7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_filterStackingUIHelper_1125c92b8);
  return;
}



/* Entry: 105ce3b80; end: 105ce3e37; -[SCPreviewFiltersLegacyController _enableFilterStackingUIIfNeeded] */

void FUN_105ce3b80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010bfae440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar1 = param_1;
  func_0x00010c230080();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126c3cd8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c264a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0695e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c273c20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c1116e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c1120c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010beee840(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046d40(puVar2);
    func_0x00010c19c5c0(param_1);
    _objc_release(puVar2);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfae440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
    _objc_initWeak(auStack_68,param_1);
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010befa300(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 105ce3e38; end: 105ce3f03;  */

void FUN_105ce3e38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c264a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfa2d40(param_1,param_2,lVar1);
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      lVar1 = param_1;
      func_0x00010bfae440(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c264a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0695e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c289f60(lVar1,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c19c5c0(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ce3f04; end: 105ce3f0b; -[SCPreviewFiltersLegacyController shouldEnableFilterStacking] */

undefined8 FUN_105ce3f04(void)

{
  return 0;
}



/* Entry: 105ce3f0c; end: 105ce3fbf; -[SCPreviewFiltersLegacyController _getGeoFilterId] */

void FUN_105ce3f0c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010bec9360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf5eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c3c88;
  _objc_opt_class(PTR_PTR_1126c3c88);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  uVar4 = 0;
  if ((uVar2 & 1) != 0) {
    uVar4 = uVar1;
    func_0x00010bfadea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105ce3fc0; end: 105ce3fff; -[SCPreviewFiltersLegacyController isUncroppableGeoFilterSelected] */

bool FUN_105ce3fc0(long param_1)

{
  long lVar1;
  
  func_0x00010be1f780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 105ce4000; end: 105ce415f; -[SCPreviewFiltersLegacyController selectedGeofilter] */

void FUN_105ce4000(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be1f780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105ce4100;
    puStack_40 = &UNK_1108e4b10;
    _objc_retain(lVar1);
    lVar3 = lVar2;
    lStack_38 = lVar1;
    func_0x00010bfece40(lVar2,param_2,&puStack_58);
    if (lVar3 == 0x7fffffffffffffff) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x00010c0dfd40(lVar2,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lStack_38);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105ce4160; end: 105ce41af; -[SCPreviewFiltersLegacyController _exportableGeoFiltersForSnap] */

void FUN_105ce4160(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be1c720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c9e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ce41b0; end: 105ce428b; -[SCPreviewFiltersLegacyController _exportableGeoFiltersForSnapWithGeoFilterIdsSelected:] */

void FUN_105ce41b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ce428c;
  puStack_40 = &UNK_110861678;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  uVar3 = uVar2;
  func_0x00010c14cca0(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ce428c; end: 105ce43ab;  */

undefined8 FUN_105ce428c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07f200();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c280fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar2 = param_2;
      func_0x00010c280fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar3 = param_2;
        func_0x00010c081f00();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) == 0) {
          uVar4 = 1;
          goto LAB_105ce4364;
        }
        goto LAB_105ce4334;
      }
      _objc_release();
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
LAB_105ce4334:
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4);
  _objc_release(uVar1);
LAB_105ce4364:
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105ce43ac; end: 105ce458b; -[SCPreviewFiltersLegacyController selectedGeofilters] */

void FUN_105ce43ac(long param_1,undefined **param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be1c720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        func_0x00010bfadea0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar2);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_105ce458c;
    puStack_140 = &UNK_1108e4b40;
    _objc_retain(puVar2);
    param_2 = &puStack_158;
    lVar3 = lVar1;
    puStack_138 = puVar2;
    func_0x000100504554(lVar1,param_2);
    _objc_release(puStack_138);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 105ce458c; end: 105ce4597;  */

void FUN_105ce458c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 105ce4598; end: 105ce4603; -[SCPreviewFiltersLegacyController _filterDataProvider] */

void FUN_105ce4598(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c08ef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ce4604; end: 105ce4683; -[SCPreviewFiltersLegacyController _geoFilterIdsSelected] */

void FUN_105ce4604(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c264a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1595a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108e4b70);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ce4684; end: 105ce4693;  */

void FUN_105ce4684(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b38b8,PTR_s_geofilterIdFromName__1125cdf50,param_2);
  return;
}



/* Entry: 105ce4694; end: 105ce48c3; -[SCPreviewFiltersLegacyController _showAdReportWithFilterId:] */

void FUN_105ce4694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afea0;
  _objc_opt_class(PTR_PTR_1126afea0);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1108e4b90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c3ce0;
  _objc_alloc(PTR_PTR_1126c3ce0);
  func_0x00010bff16e0();
  uVar1 = param_1;
  func_0x00010bdc5700(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010c111b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bef46a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ce48cc;
  puStack_70 = &UNK_110842e18;
  uStack_68 = uVar3;
  _objc_retain(uVar3);
  uVar4 = param_1;
  func_0x00010bf22be0(param_1,param_2,puVar2,uVar1,uVar8,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar5 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105ce48c4; end: 105ce48cb;  */

void FUN_105ce48c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_adReportScopeLauncher_11259ab48);
  return;
}



/* Entry: 105ce48cc; end: 105ce48ff;  */

void FUN_105ce48cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ce4900; end: 105ce49d3; -[SCPreviewFiltersLegacyController _adReportEventTrackerWithUnlockableId:] */

void FUN_105ce4900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c264a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0695e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c281060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c3ce8;
  _objc_alloc(PTR_PTR_1126c3ce8);
  func_0x00010c293fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054ee0(puVar4,param_2,uVar3,param_1,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ce49d4; end: 105ce4a4f; -[SCPreviewFiltersLegacyController _logFilterTooltipShownWithOneAttempt] */

void FUN_105ce49d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3cf0;
  _objc_opt_new(PTR_PTR_1126c3cf0);
  func_0x00010c16b460();
  func_0x00010c293fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ce4a50; end: 105ce4acb; -[SCPreviewFiltersLegacyController _logFilterTooltipCompleteWithOneAttempt] */

void FUN_105ce4a50(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3cf8;
  _objc_opt_new(PTR_PTR_1126c3cf8);
  func_0x00010c16b460();
  func_0x00010c293fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ce4acc; end: 105ce4c57; -[SCPreviewFiltersLegacyController _syntheticVenueFilterSelector] */

void FUN_105ce4acc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1115c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2981c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2981c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_105ce4c30;
    }
  }
  func_0x00010bf529e0(lVar3);
  puVar6 = PTR_PTR_1126c3d00;
  _objc_alloc(PTR_PTR_1126c3d00);
  lVar2 = lVar1;
  func_0x00010c15a3e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0d4f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c09e300(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060800(puVar6,param_2,lVar2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105ce4c30:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105ce4c58; end: 105ce4cf7; -[SCPreviewFiltersLegacyController setToolbarItemViewModel:] */

void FUN_105ce4c58(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ce4cf8; end: 105ce4d1f; -[SCPreviewFiltersLegacyController toolbarItemViewModelObservable] */

void FUN_105ce4cf8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ce4d20; end: 105ce4d2b; -[SCPreviewFiltersLegacyController setDelegate:] */

void FUN_105ce4d20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105ce4d2c; end: 105ce4d33; -[SCPreviewFiltersLegacyController toolbarItemViewModel] */

undefined8 FUN_105ce4d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105ce4d34; end: 105ce4d3b; -[SCPreviewFiltersLegacyController configuration] */

undefined8 FUN_105ce4d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105ce4d3c; end: 105ce4d43; -[SCPreviewFiltersLegacyController carousel] */

undefined8 FUN_105ce4d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105ce4d44; end: 105ce4d4b; -[SCPreviewFiltersLegacyController features_DEPRECATED] */

undefined8 FUN_105ce4d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105ce4d4c; end: 105ce4d53; -[SCPreviewFiltersLegacyController previewLogging] */

undefined8 FUN_105ce4d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105ce4d54; end: 105ce4d5b; -[SCPreviewFiltersLegacyController previewScopeServices] */

undefined8 FUN_105ce4d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105ce4d5c; end: 105ce4d63; -[SCPreviewFiltersLegacyController adReportScopeServices] */

undefined8 FUN_105ce4d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105ce4d64; end: 105ce4d6b; -[SCPreviewFiltersLegacyController previewABProvider] */

undefined8 FUN_105ce4d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105ce4d6c; end: 105ce4d73; -[SCPreviewFiltersLegacyController bundledLensProvider] */

undefined8 FUN_105ce4d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105ce4d74; end: 105ce4d7b; -[SCPreviewFiltersLegacyController featureSettingsService] */

undefined8 FUN_105ce4d74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105ce4d7c; end: 105ce4d83; -[SCPreviewFiltersLegacyController swipeFiltersProvider] */

undefined8 FUN_105ce4d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105ce4d84; end: 105ce4d8b; -[SCPreviewFiltersLegacyController swipeFilters] */

undefined8 FUN_105ce4d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105ce4d8c; end: 105ce4d93; -[SCPreviewFiltersLegacyController smartCarouselFilterArranger] */

undefined8 FUN_105ce4d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105ce4d94; end: 105ce4d9b; -[SCPreviewFiltersLegacyController userTrackedLogger] */

undefined8 FUN_105ce4d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105ce4d9c; end: 105ce4da3; -[SCPreviewFiltersLegacyController memoriesReverseAudioCache] */

undefined8 FUN_105ce4d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


