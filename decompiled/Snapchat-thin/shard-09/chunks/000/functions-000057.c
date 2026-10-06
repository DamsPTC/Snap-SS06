/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068e5e9c; end: 1068e62a3; -[SCDiscoverFeedDataStore _removeStoriesByCreatorId:similarStoryIdFpsArray:feedTypes:] */

void FUN_1068e5e9c(long param_1,undefined **param_2,undefined **param_3,long param_4,long param_5,
                  undefined8 param_6,undefined **param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  uint uVar21;
  long lVar22;
  bool bVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  long lVar29;
  undefined *puVar30;
  long lStack_300;
  undefined *puStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar20 = param_3;
  lVar22 = param_5;
  _objc_retain(param_3);
  uVar21 = (uint)lVar22;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = param_3;
  func_0x00010c08fa60();
  if ((ppuVar2 != (undefined **)0x0) && (lVar22 = param_5, func_0x00010bf529e0(), lVar22 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_228 = 0;
    puStack_230 = (undefined *)0x0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    _objc_retain(param_5);
    ppuVar20 = &puStack_230;
    uVar21 = 0;
    lStack_300 = param_5;
    func_0x00010bf52a60();
    if (lStack_300 != 0) {
      lVar22 = *plStack_220;
      do {
        lVar24 = 0;
        do {
          if (*plStack_220 != lVar22) {
            _objc_enumerationMutation(param_5);
          }
          puVar13 = PTR_PTR_1126ced30;
          _objc_alloc();
          func_0x00010c0126a0();
          lVar4 = *(long *)(param_1 + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar5 != 0) {
            lVar26 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar4);
              }
              puVar6 = puVar3;
              func_0x00010bf4b900();
              if (((ulong)puVar6 & 1) == 0) {
                uVar7 = *(ulong *)(param_1 + 0x38);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (uVar7 != 0) {
                  lVar8 = param_1;
                  func_0x00010bdf5f60();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = param_4;
                  func_0x00010bf4b900();
                  if ((int)lVar9 == 0) {
                    _objc_retain(param_4);
                    lVar10 = param_4;
                    func_0x00010bf52a60();
                    lVar9 = lRam0000000000000000;
                    if (lVar10 == 0) {
                      bVar23 = false;
                    }
                    else {
                      do {
                        lVar29 = 0;
                        do {
                          if (lRam0000000000000000 != lVar9) {
                            _objc_enumerationMutation(param_4);
                          }
                          uVar11 = uVar7;
                          func_0x00010c23c720();
                          _objc_retainAutoreleasedReturnValue();
                          uVar12 = uVar11;
                          func_0x00010bf4b900();
                          _objc_release(uVar11);
                          if ((uVar12 & 1) != 0) {
                            bVar23 = true;
                            goto LAB_1068e6170;
                          }
                          lVar29 = lVar29 + 1;
                        } while (lVar10 != lVar29);
                        lVar10 = param_4;
                        func_0x00010bf52a60();
                      } while (lVar10 != 0);
                      bVar23 = false;
                    }
LAB_1068e6170:
                    _objc_release(param_4);
                    lVar9 = lVar8;
                    func_0x00010c0720c0();
                    if ((bVar23) || ((int)lVar9 != 0)) goto LAB_1068e6088;
                  }
                  else {
                    func_0x00010c0720c0(lVar8);
LAB_1068e6088:
                    func_0x00010befa120(puVar3);
                    func_0x00010befa120(ppuVar2);
                  }
                  _objc_release(lVar8);
                }
                _objc_release(uVar7);
              }
              lVar26 = lVar26 + 1;
            } while (lVar26 != lVar5);
            lVar5 = lVar4;
            func_0x00010bf52a60();
          }
          _objc_release(lVar4);
          _objc_release(puVar13);
          lVar24 = lVar24 + 1;
        } while (lVar24 != lStack_300);
        ppuVar20 = &puStack_230;
        uVar21 = 0;
        lStack_300 = param_5;
        func_0x00010bf52a60();
      } while (lStack_300 != 0);
    }
    _objc_release(param_5);
    ppuVar28 = ppuVar2;
    func_0x00010bf529e0();
    if (ppuVar28 != (undefined **)0x0) {
      ppuVar28 = ppuVar2;
      func_0x00010bf51e00();
      ppuVar20 = ppuVar28;
      func_0x00010be8d640(param_1);
      _objc_release(ppuVar28);
    }
    _objc_release(ppuVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar20);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar13);
  puVar13 = param_3[6];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar13 == (undefined *)0x0) {
    if (param_7 != (undefined **)0x0) {
      param_2 = param_7;
      func_0x00010007380c(param_6,param_7);
    }
  }
  else {
    puVar14 = param_3[6];
    func_0x00010c0d3c80();
    puVar15 = param_3[7];
    func_0x00010c0d3c80();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(puVar14);
    puVar13 = puVar14;
    func_0x00010bf52a60();
    lVar24 = lRam0000000000000000;
    while (puVar13 != (undefined *)0x0) {
      puVar27 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar24) {
          _objc_enumerationMutation(puVar14);
        }
        puVar16 = puVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar16;
        func_0x00010bf52a60();
        lVar5 = lRam0000000000000000;
        while (puVar19 != (undefined *)0x0) {
          puVar30 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar5) {
              _objc_enumerationMutation(puVar16);
            }
            puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar17 = puVar6;
            func_0x00010c0e00e0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c0df760(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar6);
            _objc_release(puVar18);
            _objc_release(puVar17);
            puVar30 = puVar30 + 1;
          } while (puVar19 != puVar30);
          puVar19 = puVar16;
          func_0x00010bf52a60();
        }
        _objc_release(puVar16);
        puVar27 = puVar27 + 1;
      } while (puVar27 != puVar13);
      puVar13 = puVar14;
      func_0x00010bf52a60();
    }
    _objc_release(puVar14);
    puVar19 = param_3[6];
    func_0x00010c0e00e0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(ppuVar20);
    _objc_alloc();
    param_2 = &PTR___NSConcreteGlobalBlock_110948ea0;
    ppuVar2 = ppuVar20;
    func_0x000100504554(ppuVar20,&PTR___NSConcreteGlobalBlock_110948ea0);
    _objc_release(ppuVar20);
    func_0x00010bff4000();
    _objc_release(ppuVar2);
    _objc_retain(puVar13);
    puVar27 = puVar19;
    func_0x00010c14cca0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar13);
    func_0x00010c1d0640(puVar14);
    _objc_release(puVar27);
    _objc_release(puVar19);
    _objc_retain(ppuVar20);
    ppuVar2 = ppuVar20;
    func_0x00010bf52a60();
    lVar24 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar28 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar24) {
          _objc_enumerationMutation(ppuVar20);
        }
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar25 = *(undefined8 *)((long)ppuVar28 * 8);
        func_0x00010c259740(uVar25);
        func_0x00010c0df880(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar27;
        func_0x00010c067ec0();
        _objc_release(puVar27);
        _objc_release(puVar13);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)puVar19 == 1) {
          func_0x00010c259740(uVar25);
          func_0x00010c0df880(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(puVar15);
          _objc_release(puVar13);
        }
        ppuVar28 = (undefined **)((long)ppuVar28 + 1);
      } while (ppuVar2 != ppuVar28);
      ppuVar2 = ppuVar20;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar20);
    puVar13 = puVar14;
    func_0x00010bf51e00(puVar14);
    func_0x00010bee0ec0(param_3);
    _objc_release(puVar13);
    puVar13 = puVar15;
    func_0x00010bf51e00(puVar15);
    func_0x00010bee0da0(param_3);
    _objc_release(puVar13);
    if ((uVar21 & 1) == 0) {
      ppuVar2 = ppuVar20;
      func_0x000100504554(ppuVar20,&PTR___NSConcreteGlobalBlock_110948c70);
      uVar25 = 1;
      param_2 = ppuVar2;
      func_0x000107cb5f2c(1,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    else {
      uVar25 = 1;
      func_0x000107cb5e38(1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = param_3[0x18];
    ppuVar2 = param_3;
    _objc_opt_class(param_3);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(puVar13);
    _objc_release(ppuVar2);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be03d20(param_3);
    _objc_release(puVar27);
    _objc_release(puVar13);
    if (param_7 != (undefined **)0x0) {
      param_2 = param_7;
      func_0x00010007380c(param_6,param_7);
    }
    _objc_release(uVar25);
    _objc_release(puVar6);
    _objc_release(puVar15);
    _objc_release(puVar14);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar20);
  return;
}



/* Entry: 1068e62a4; end: 1068e6943; -[SCDiscoverFeedDataStore _removeStories:forFeedType:flushAllImpressions:completionQueue:completion:] */

void FUN_1068e62a4(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,undefined **param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126ced30;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    if (param_7 != (undefined **)0x0) {
      param_2 = param_7;
      func_0x00010007380c(param_6,param_7);
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010c0d3c80();
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0d3c80();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    _objc_retain(lVar6);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = lVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar9 != 0) {
          lVar19 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar10 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c0df760(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(puVar11);
            _objc_release(puVar10);
            lVar19 = lVar19 + 1;
          } while (lVar9 != lVar19);
          lVar9 = lVar8;
          func_0x00010bf52a60();
        }
        _objc_release(lVar8);
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar5);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(param_3);
    _objc_alloc();
    param_2 = &PTR___NSConcreteGlobalBlock_110948ea0;
    ppuVar13 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110948ea0);
    _objc_release(param_3);
    func_0x00010bff4000();
    _objc_release(ppuVar13);
    _objc_retain(puVar11);
    uVar16 = uVar12;
    func_0x00010c14cca0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar11);
    func_0x00010c1d0640(lVar6);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_retain(param_3);
    ppuVar13 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (ppuVar13 != (undefined **)0x0) {
      ppuVar18 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar16 = *(undefined8 *)((long)ppuVar18 * 8);
        func_0x00010c259740(uVar16);
        func_0x00010c0df880(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar10;
        func_0x00010c067ec0();
        _objc_release(puVar10);
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)puVar14 == 1) {
          func_0x00010c259740(uVar16);
          func_0x00010c0df880(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(uVar7);
          _objc_release(puVar11);
        }
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar13 != ppuVar18);
      ppuVar13 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    lVar5 = lVar6;
    func_0x00010bf51e00(lVar6);
    func_0x00010bee0ec0(param_1);
    _objc_release(lVar5);
    uVar16 = uVar7;
    func_0x00010bf51e00(uVar7);
    func_0x00010bee0da0(param_1);
    _objc_release(uVar16);
    if ((param_5 & 1) == 0) {
      ppuVar13 = param_3;
      func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110948c70);
      uVar16 = 1;
      param_2 = ppuVar13;
      func_0x000107cb5f2c(1,ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
    }
    else {
      uVar16 = 1;
      func_0x000107cb5e38(1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar12 = *(undefined8 *)(param_1 + 0xc0);
    lVar5 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar12);
    _objc_release(lVar5);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be03d20(param_1);
    _objc_release(puVar10);
    _objc_release(puVar11);
    if (param_7 != (undefined **)0x0) {
      param_2 = param_7;
      func_0x00010007380c(param_6,param_7);
    }
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar7);
    _objc_release(lVar6);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 1068e6944; end: 1068e698b;  */

void FUN_1068e6944(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068e698c; end: 1068e6bd7; -[SCDiscoverFeedDataStore _removeStoriesInFeedIdentifierMapping:forFeedType:] */

void FUN_1068e698c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ced30;
  _objc_alloc(PTR_PTR_1126ced30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0(puVar1);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0d3c80(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(param_3);
    _objc_alloc();
    uVar6 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110948ea0);
    _objc_release(param_3);
    func_0x00010bff4000();
    _objc_release(uVar6);
    _objc_retain(puVar2);
    uVar6 = uVar5;
    func_0x00010c14cca0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar2);
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar6 = uVar4;
    func_0x00010bf51e00(uVar4);
    func_0x00010bee0ec0(param_1);
    _objc_release(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    lVar3 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    func_0x000107cb5e38(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar5);
    _objc_release(uVar6);
    _objc_release(lVar3);
    func_0x00010be03d20(param_1);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e6bd8; end: 1068e6f23; -[SCDiscoverFeedDataStore _updateUnsubscribedStoriesInDedupeFp:] */

void FUN_1068e6bd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
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
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d3c80();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126c6d78;
        uVar13 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        _objc_retain(uVar13);
        func_0x00010bf82080(puVar3,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2b17c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c22b0;
        uVar5 = uVar13;
        func_0x00010c25a160(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010c11fd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf81ce0(puVar3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c2b17c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar10);
        _objc_release(uVar5);
        puVar3 = PTR_PTR_1126c2140;
        uVar5 = uVar13;
        func_0x00010c25a160(uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        func_0x00010bf82100(puVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf21f60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c2b67e0(puVar3,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar3);
        _objc_release(uVar5);
        puVar3 = puVar8;
        func_0x00010bf21f60(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c2ba4e0(puVar4,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar4 = puVar7;
        func_0x00010bf21f60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar7);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(uVar13);
        func_0x00010c0df880(puVar3,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar1,param_2,puVar4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar4);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  uVar5 = uVar1;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  _objc_release(uVar10);
  ppuVar9 = &PTR____CFConstantStringClassReference_110f48bb8;
  func_0x00010be03d20(param_1,param_2,&PTR____CFConstantStringClassReference_110f48bb8,0);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined ***)(param_3 + 0x30) = ppuVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068e6f24; end: 1068e6f53; -[SCDiscoverFeedDataStore _updateStoryDedupeFpsByFeedIdentifier:] */

void FUN_1068e6f24(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1068e6f54; end: 1068e6f83; -[SCDiscoverFeedDataStore _updateStoriesByStoryDedupeFp:] */

void FUN_1068e6f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068e6f84; end: 1068e717f; -[SCDiscoverFeedDataStore _updateStories:] */

/* WARNING: Possible PIC construction at 0x0001068e7048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068e704c) */
/* WARNING: Removing unreachable block (ram,0x0001068e707c) */
/* WARNING: Removing unreachable block (ram,0x0001068e7024) */

void FUN_1068e6f84(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_3);
  iVar8 = 0x10;
  lVar10 = param_3;
  func_0x00010bf52a60();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar10 == 0) {
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf51e00();
    uVar7 = uVar3;
    func_0x0001006decbc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf51e00();
    func_0x00010bee0da0(param_1);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      func_0x00010bde9e00(param_1);
      *(undefined1 *)(param_1 + 0xa0) = 0;
      iVar8 = 0;
      func_0x00010c130ac0(param_1);
    }
    uVar7 = 0;
    func_0x00010be03d20(param_1);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126ced30;
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(uVar7);
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0126a0();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0d3c80();
    ppuVar2 = &PTR___NSConcreteGlobalBlock_110948c90;
    uVar4 = uVar7;
    func_0x000100504554(uVar7,&PTR___NSConcreteGlobalBlock_110948c90);
    _objc_release(uVar7);
    uVar7 = uVar4;
    func_0x00010bf51e00(uVar4);
    func_0x00010c1d0640(uVar3);
    _objc_release(uVar7);
    uVar7 = uVar3;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x30) = uVar7;
    _objc_release(uVar11);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (iVar8 == 0) {
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be03d20(param_3);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(ppuVar2);
  }
  else {
    ppuVar2 = ppuRam0000000000000000;
    func_0x00010c259740(ppuRam0000000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar5,PTR_s_numberWithUnsignedLongLong__112615838,ppuVar2)
  ;
  return;
}



/* Entry: 1068e7180; end: 1068e7377; -[SCDiscoverFeedDataStore _replaceFeedType:withStories:isFromMetadataPrefetch:] */

void FUN_1068e7180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ced30;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0126a0();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  ppuVar7 = &PTR___NSConcreteGlobalBlock_110948c90;
  uVar4 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110948c90);
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010bf51e00(uVar4);
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 == 0) {
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be03d20(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,ppuVar7)
  ;
  return;
}



/* Entry: 1068e7378; end: 1068e73a7;  */

void FUN_1068e7378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068e73a8; end: 1068e74c7; -[SCDiscoverFeedDataStore _updateStoryForCreator:isPublisher:isSubscribed:isOptedInNotification:] */

void FUN_1068e73a8(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010bec48e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c6d78;
    func_0x00010bf82080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1080(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar4;
    func_0x00010bee0d40(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(lVar1 + 0xb8) == 0) {
    func_0x00010bee4600(param_1,lVar1);
  }
  else {
    _objc_initWeak(auStack_a8,lVar1);
    uVar7 = *(undefined8 *)(lVar1 + 0xb8);
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_a8);
    _objc_retain(param_5);
    _objc_retain(param_4);
    uStack_b0 = param_1;
    func_0x00010bfcac80(uVar7);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1068e74c8; end: 1068e762f; -[SCDiscoverFeedDataStore _updateWithCachedStream:startTime:completion:] */

void FUN_1068e74c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0xb8) == 0) {
    func_0x00010bee4600(param_1,param_2);
  }
  else {
    _objc_initWeak(auStack_58,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_5);
    _objc_retain(param_4);
    uStack_60 = param_1;
    func_0x00010bfcac80(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1068e7630; end: 1068e76b7;  */

void FUN_1068e7630(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    }
  }
  else {
    func_0x00010bee4600(*(undefined8 *)(param_1 + 0x38),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068e76b8; end: 1068e7dc7; -[SCDiscoverFeedDataStore _updateWithCachedStream:startTime:interactionHistoryArray:completion:] */

void FUN_1068e76b8(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_5);
  lVar11 = param_5;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar18 = *plStack_130;
    do {
      lVar19 = 0;
      do {
        if (*plStack_130 != lVar18) {
          _objc_enumerationMutation(param_5);
        }
        lVar17 = *(long *)((long)puStack_138 + lVar19 * 8);
        lVar2 = lVar17;
        func_0x000107bfa34c();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar2 != 0) &&
           (lVar3 = lVar2, func_0x00010c296d80(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
           (int)lVar3 != 0)) {
          func_0x00010c259740(lVar17);
          func_0x00010c0df880(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
        }
        _objc_release(lVar2);
        lVar19 = lVar19 + 1;
      } while (lVar11 != lVar19);
      lVar11 = param_5;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release(param_5);
  puVar4 = puVar1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    _objc_retain(param_4);
    puVar4 = param_4;
  }
  else {
    puVar5 = puVar1;
    func_0x00010c0d3c80();
    puVar4 = param_4;
    func_0x00010c2597a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_1068eb050;
    puStack_150 = &UNK_110948ec0;
    puStack_148 = puVar5;
    _objc_retain();
    func_0x00010bf97ce0(puVar4);
    _objc_release(puVar4);
    puVar4 = param_4;
    func_0x00010c258200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010bf00560(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d4a0(puVar16);
    _objc_release(puVar4);
    puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = param_4;
    func_0x00010c2597a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1068eb0ec;
    puStack_180 = &UNK_110948ef0;
    puStack_178 = puVar13;
    _objc_retain(puVar1);
    puStack_170 = puVar1;
    _objc_retain(puVar13);
    func_0x00010bf97ce0(puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ced40;
    _objc_alloc();
    puVar6 = param_4;
    func_0x00010bfa3dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010bf51e00(puVar13);
    puVar8 = param_4;
    func_0x00010c156340(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_4;
    func_0x00010c155a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar16;
    func_0x00010bf51e00(puVar16);
    func_0x00010c012620();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
    _objc_release(puVar13);
    _objc_release(puVar16);
    _objc_release(puStack_148);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_4);
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  plStack_130 = (long *)0x2020000000;
  lVar11 = *(long *)(param_2 + 0x30);
  func_0x00010bf529e0();
  uStack_128 = CONCAT71(uStack_128._1_7_,lVar11 != 0);
  lVar11 = *(long *)(param_2 + 0x30);
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    puVar1 = puVar4;
    func_0x00010c258200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2597a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d8 = 0xc2000000;
    pcStack_1d0 = FUN_1068e7dc8;
    puStack_1c8 = &UNK_110948ce0;
    lStack_1c0 = param_2;
    _objc_retain(puVar4);
    puStack_1b0 = &uStack_100;
    puStack_1a8 = &uStack_140;
    puVar13 = puVar16;
    puStack_1b8 = puVar4;
    uStack_1a0 = param_3;
    FUN_1068d72b8(puVar1,puVar5,puVar16,&puStack_1e0);
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puStack_1b8);
  }
  else {
    puVar1 = puVar4;
    func_0x00010c258200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2597a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_1068e7fa4;
    puStack_210 = &UNK_110948ce0;
    lStack_208 = param_2;
    _objc_retain(puVar4);
    puStack_1f8 = &uStack_100;
    puStack_1f0 = &uStack_140;
    puVar13 = puVar16;
    puStack_200 = puVar4;
    uStack_1e8 = param_3;
    FUN_1068d72b8(puVar1,puVar5,puVar16,&puStack_228);
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puStack_200);
  }
  _objc_initWeak(&puStack_198,param_2);
  uVar12 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  uStack_260 = 0x1068e8114;
  puStack_258 = &UNK_110948d10;
  puStack_248 = &uStack_100;
  puStack_240 = &uStack_140;
  uStack_250 = param_6;
  _objc_retain();
  _objc_copyWeak(auStack_238,&puStack_198);
  uStack_230 = param_1;
  func_0x00010007380c(uVar12,&puStack_270);
  _objc_release(uVar12);
  _objc_destroyWeak(auStack_238);
  _objc_release(uStack_250);
  _objc_release(param_6);
  _objc_destroyWeak(&puStack_198);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&puStack_198);
  __Block_object_dispose(&uStack_140,8);
  puVar16 = (undefined *)0x8;
  __Block_object_dispose(&uStack_100);
  __Unwind_Resume();
  _objc_retain(puVar16);
  func_0x00010bf51e00();
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar13 != (undefined *)0x0) {
    puVar1 = puVar13;
  }
  lVar11 = *(long *)(puVar4 + 0x20);
  _objc_retain(puVar1);
  uVar12 = *(undefined8 *)(lVar11 + 0x30);
  *(undefined **)(lVar11 + 0x30) = puVar1;
  _objc_release(uVar12);
  _objc_release(puVar13);
  puVar13 = puVar16;
  func_0x00010bf51e00();
  _objc_release(puVar16);
  puVar1 = puVar5;
  if (puVar13 != (undefined *)0x0) {
    puVar1 = puVar13;
  }
  lVar11 = *(long *)(puVar4 + 0x20);
  _objc_retain(puVar1);
  uVar12 = *(undefined8 *)(lVar11 + 0x38);
  *(undefined **)(lVar11 + 0x38) = puVar1;
  _objc_release(uVar12);
  _objc_release(puVar13);
  puVar13 = *(undefined **)(puVar4 + 0x28);
  func_0x00010c155a20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010bf51e00();
  puVar1 = puVar5;
  if (puVar16 != (undefined *)0x0) {
    puVar1 = puVar16;
  }
  lVar11 = *(long *)(puVar4 + 0x20);
  _objc_retain(puVar1);
  uVar12 = *(undefined8 *)(lVar11 + 0x10);
  *(undefined **)(lVar11 + 0x10) = puVar1;
  _objc_release(uVar12);
  _objc_release(puVar16);
  _objc_release(puVar13);
  puVar16 = *(undefined **)(puVar4 + 0x28);
  func_0x00010c156340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar16;
  func_0x00010bf51e00();
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
  }
  lVar11 = *(long *)(puVar4 + 0x20);
  _objc_retain(puVar5);
  uVar12 = *(undefined8 *)(lVar11 + 0x18);
  *(undefined **)(lVar11 + 0x18) = puVar5;
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar16);
  func_0x00010be91f20(*(undefined8 *)(puVar4 + 0x20));
  uVar12 = *(undefined8 *)(puVar4 + 0x20);
  uVar14 = *(undefined8 *)(puVar4 + 0x28);
  func_0x00010bfa3dc0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf51e00();
  func_0x00010bea3e80(uVar12);
  _objc_release(uVar15);
  _objc_release(uVar14);
  func_0x00010c18f2a0(*(undefined8 *)(puVar4 + 0x20));
  func_0x00010be03d20(*(undefined8 *)(puVar4 + 0x20));
  func_0x00010bde9e00(*(undefined8 *)(puVar4 + 0x20));
  func_0x00010beddbc0(*(undefined8 *)(puVar4 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(puVar4 + 0x30) + 8) + 0x18) = 1;
  *(undefined1 *)(*(long *)(*(long *)(puVar4 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1068e7dc8; end: 1068e7fa3;  */

void FUN_1068e7dc8(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  func_0x00010bf51e00();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar5);
  uVar2 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined **)(lVar8 + 0x30) = puVar5;
  _objc_release(uVar2);
  _objc_release(param_3);
  puVar4 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
  puVar5 = puVar1;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar5);
  uVar2 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined **)(lVar8 + 0x38) = puVar5;
  _objc_release(uVar2);
  _objc_release(puVar4);
  puVar3 = *(undefined **)(param_1 + 0x28);
  func_0x00010c155a20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  puVar5 = puVar1;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar5);
  uVar2 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined **)(lVar8 + 0x10) = puVar5;
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = *(undefined **)(param_1 + 0x28);
  func_0x00010c156340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf51e00();
  if (puVar5 != (undefined *)0x0) {
    puVar1 = puVar5;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(lVar8 + 0x18);
  *(undefined **)(lVar8 + 0x18) = puVar1;
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be91f20(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3dc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf51e00();
  func_0x00010bea3e80(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c18f2a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be03d20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bde9e00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010beddbc0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1068e7fa4; end: 1068e81eb;  */

void FUN_1068e7fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_2);
  func_0x0001006decbc(param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_3;
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x0001006decbc(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c155a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001006decbc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c156340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001006decbc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c18f2a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be03d20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bde9e00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010beddbc0(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1068e81ec; end: 1068e87df; -[SCDiscoverFeedDataStore _reorderStoriesForFeedTypes:interactionHistoryArray:isDebouncedQuery:completion:] */

void FUN_1068e81ec(long param_1,undefined **param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 != 0) {
    bVar1 = false;
    do {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar17 = *(ulong *)(lVar19 * 8);
        puVar4 = PTR_PTR_1126ced30;
        _objc_alloc(PTR_PTR_1126ced30);
        func_0x00010c0126a0();
        uVar5 = *(ulong *)(param_1 + 0x30);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 != 0) {
          uVar15 = uVar17;
          func_0x00010c067ec0();
          uVar18 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar18);
          puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_1068eaa54;
          puStack_110 = &UNK_1109488b0;
          uStack_108 = uVar18;
          _objc_retain(uVar18);
          param_2 = &puStack_128;
          uVar7 = uVar5;
          func_0x000100504554(uVar5,param_2);
          _objc_release(uStack_108);
          _objc_release(uVar18);
          iVar20 = (int)uVar15;
          if (((iVar20 == 3) || (iVar20 == 0xef)) || (iVar20 == 0xf7)) {
            uVar18 = uVar6;
            func_0x00010c150dc0();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar18;
            func_0x00010c232660();
            _objc_release(uVar18);
            if ((int)uVar16 != 0) {
              uVar18 = uVar6;
              func_0x00010c150dc0(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar16 = uVar18;
              func_0x00010bf51e00();
              _objc_release(uVar18);
              uVar8 = uVar15 & 0xffffffff;
              func_0x000108f53fe8(uVar8);
              _objc_retainAutoreleasedReturnValue();
              param_2 = (undefined **)0x0;
              uVar21 = uVar7;
              func_0x000107cb5a9c(uVar7,0,0,uVar16,0,1,uVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be03d60(param_1);
              _objc_release(uVar21);
              _objc_release(uVar8);
              func_0x00010c067ec0(uVar17);
              lVar9 = param_1;
              func_0x00010c0d1100();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = param_1;
              func_0x00010be7fa40();
              _objc_retainAutoreleasedReturnValue();
              uVar21 = *(ulong *)(param_1 + 0xb0);
              func_0x00010c067ec0(uVar17);
              func_0x00010c130aa0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar10);
              _objc_release(lVar9);
              _objc_release(uVar16);
              goto LAB_1068e8580;
            }
            uVar21 = 0;
          }
          else {
            uVar17 = uVar15;
            func_0x000108f53fe8(uVar15);
            _objc_retainAutoreleasedReturnValue();
            param_2 = (undefined **)0x0;
            uVar21 = uVar7;
            func_0x000107cb5a9c(uVar7,0,0,0,0,1,uVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be03d60(param_1);
            _objc_release(uVar21);
            _objc_release(uVar17);
            uVar21 = uVar7;
            func_0x000107bf2f24();
            _objc_retainAutoreleasedReturnValue();
LAB_1068e8580:
            _objc_retain(uVar7);
            _objc_retain(uVar21);
            uVar8 = uVar7;
            func_0x00010bf529e0();
            uVar11 = uVar21;
            func_0x00010bf529e0();
            uVar17 = 0;
            if (uVar11 <= uVar8) {
              uVar8 = uVar11;
            }
            uVar11 = uVar17;
            if (uVar8 != 0) {
              do {
                uVar11 = uVar21;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar11;
                func_0x00010c259740();
                uVar13 = uVar7;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar13;
                func_0x00010c259740();
                _objc_release(uVar13);
                _objc_release(uVar11);
                uVar11 = uVar17;
                if (uVar12 != uVar14) break;
                uVar17 = uVar17 + 1;
                uVar11 = uVar8;
              } while (uVar8 != uVar17);
            }
            _objc_release(uVar21);
            _objc_release(uVar7);
            uVar17 = uVar7;
            func_0x00010bf529e0();
            if (uVar11 != uVar17) {
              uVar15 = uVar15 & 0xffffffff;
              func_0x000108f53fe8(uVar15);
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar21;
              func_0x000107cb6100(uVar21,0,uVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be03d60(param_1);
              _objc_release(uVar17);
              _objc_release(uVar15);
              uVar16 = *(undefined8 *)(param_1 + 0x30);
              func_0x00010c0d3c80(uVar16);
              param_2 = &PTR___NSConcreteGlobalBlock_110948d40;
              uVar17 = uVar21;
              func_0x000100504554(uVar21,&PTR___NSConcreteGlobalBlock_110948d40);
              func_0x00010c1d0640(uVar16);
              _objc_release(uVar17);
              uVar18 = uVar16;
              func_0x00010bf51e00(uVar16);
              func_0x00010bee0ec0(param_1);
              _objc_release(uVar18);
              _objc_release(uVar16);
              bVar1 = true;
            }
          }
          _objc_release(uVar21);
          _objc_release(uVar7);
        }
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(puVar4);
        lVar19 = lVar19 + 1;
      } while (lVar19 != lVar3);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    if (bVar1) {
      func_0x00010be03d20(param_1);
    }
  }
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar4,PTR_s_numberWithUnsignedLongLong__112615838,param_2);
    return;
  }
  return;
}



/* Entry: 1068e87e0; end: 1068e880f;  */

void FUN_1068e87e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068e8810; end: 1068e8a37; -[SCDiscoverFeedDataStore _removeFeedIdentifier:] */

ulong FUN_1068e8810(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c0d3c80();
  func_0x00010c12d3e0();
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010bee0ec0(param_1);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  func_0x00010c12d3e0();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d3c80();
  func_0x00010c12d3e0();
  uVar4 = uVar7;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c14cca0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf51e00();
  func_0x00010bea3e80(param_1);
  _objc_release(uVar4);
  _objc_release(uVar8);
  uVar4 = param_3;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010be03d20(param_1);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x00010c071ae0(param_2);
  return (ulong)((uint)param_2 ^ 1);
}



/* Entry: 1068e8a38; end: 1068e8a57;  */

uint FUN_1068e8a38(long param_1,undefined8 param_2)

{
  func_0x00010c071ae0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  return (uint)param_2 ^ 1;
}



/* Entry: 1068e8a58; end: 1068e8b37; -[SCDiscoverFeedDataStore _creatorSettingsDidUpdateWithCreatorSettings:didSubscribe:] */

void FUN_1068e8a58(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e8b38; end: 1068e8b6f;  */

void FUN_1068e8b38(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf60c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e8b70; end: 1068e9157; -[SCDiscoverFeedDataStore _creatorSettingsUpdateOnPerformerWithCreatorSettings:didSubscribe:] */

void FUN_1068e8b70(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_590 [8];
  undefined1 auStack_588 [8];
  undefined8 uStack_580;
  undefined8 *puStack_578;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined8 **ppuStack_500;
  code *pcStack_4f8;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [256];
  long lStack_350;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  int iStack_26c;
  undefined **ppuStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_268 = param_1;
  _objc_retain(param_3);
  puVar13 = PTR_PTR_1126ced30;
  _objc_alloc();
  func_0x00010c0126a0();
  ppuVar10 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puStack_280 = puVar13;
  if (((ulong)param_4 & 1) == 0) {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_278 = puVar13;
LAB_1068e8d58:
    iStack_26c = 0;
  }
  else {
    param_4 = param_3;
    func_0x00010c080120();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    ppuVar12 = ppuStack_268;
    puStack_278 = puVar13;
    if ((int)param_4 == 0) goto LAB_1068e8d58;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    puStack_1e0 = (undefined8 *)0x0;
    ppuVar2 = (undefined **)ppuStack_268[6];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar2;
    func_0x00010bf51e00();
    puVar13 = ppuVar12[7];
    _objc_retain(puVar13);
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_1068eaa54;
    puStack_198 = &UNK_1109488b0;
    unaff_x22 = &puStack_1b0;
    puStack_190 = puVar13;
    _objc_retain(puVar13);
    unaff_x23 = ppuVar14;
    func_0x000100504554(ppuVar14,&puStack_1b0);
    _objc_release(puStack_190);
    _objc_release(puVar13);
    _objc_release(ppuVar14);
    _objc_release(ppuVar2);
    ppuVar12 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar12 != (undefined **)0x0) {
      unaff_x22 = (undefined **)*puStack_1e0;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1e0 != unaff_x22) {
            _objc_enumerationMutation(unaff_x23);
          }
          lVar3 = *(long *)(lStack_1e8 + (long)ppuVar14 * 8);
          func_0x000107c03ddc();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010befa120(puStack_278);
          }
          _objc_release(lVar3);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar12 != ppuVar14);
        ppuVar12 = unaff_x23;
        func_0x00010bf52a60();
      } while (ppuVar12 != (undefined **)0x0);
    }
    param_4 = (undefined **)0x0;
    _objc_release(unaff_x23);
    iStack_26c = 1;
  }
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  ppuVar12 = ppuStack_268;
  ppuStack_288 = ppuVar14;
  func_0x00010bdca0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    unaff_x22 = (undefined **)*puStack_220;
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_220 != unaff_x22) {
          _objc_enumerationMutation(ppuVar12);
        }
        unaff_x27 = *(undefined ***)(lStack_228 + (long)ppuVar10 * 8);
        param_4 = param_3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x27;
        func_0x000107c03ddc();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_4;
        func_0x00010c0720c0();
        _objc_release(unaff_x26);
        _objc_release(param_4);
        if ((int)unaff_x23 != 0) {
          unaff_x26 = unaff_x27;
          func_0x000107c04008(unaff_x27,param_3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = param_3;
          func_0x000107c03f80(param_3,unaff_x27);
          if (((ulong)ppuVar2 & 1) == 0) {
            func_0x00010befa120(ppuStack_288);
          }
          ppuVar2 = param_3;
          func_0x00010c080120();
          if (((ulong)ppuVar2 & 1) == 0) {
            param_4 = (undefined **)ppuStack_268[6];
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c259740(unaff_x27);
            func_0x00010c0df880();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = param_4;
            func_0x00010bf4b900();
            _objc_release(unaff_x28);
            _objc_release(param_4);
            if ((int)unaff_x23 == 0) goto LAB_1068e8f48;
            _objc_initWeak(&puStack_1b0,ppuStack_268);
            param_4 = (undefined **)ppuStack_268[0xe];
            puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_258 = 0xc2000000;
            pcStack_250 = FUN_1068e9158;
            puStack_248 = &UNK_110841fb0;
            _objc_copyWeak(auStack_238,&puStack_1b0);
            _objc_retain(unaff_x26);
            ppuStack_240 = unaff_x26;
            func_0x00010c0f7fc0(param_4);
            _objc_release(ppuStack_240);
            _objc_destroyWeak(auStack_238);
            _objc_destroyWeak(&puStack_1b0);
          }
          else {
LAB_1068e8f48:
            if (iStack_26c != 0) {
              unaff_x28 = param_3;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puStack_278;
              func_0x00010bf4b900();
              if ((int)puVar13 == 0) {
                param_4 = (undefined **)ppuStack_268[6];
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c259740(unaff_x27);
                func_0x00010c0df880();
                _objc_retainAutoreleasedReturnValue();
                ppuVar2 = param_4;
                func_0x00010bf4b900();
                if ((((ulong)ppuVar2 & 1) == 0) &&
                   (ppuVar2 = unaff_x27, func_0x00010c25b720(), ppuVar2 != (undefined **)0xb)) {
                  func_0x00010c25b720();
                  bVar1 = unaff_x27 == (undefined **)0xe;
                  unaff_x27 = (undefined **)(ulong)bVar1;
                  _objc_release(unaff_x23);
                  _objc_release(param_4);
                  _objc_release(unaff_x28);
                  if (!bVar1) {
                    param_4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                    ppuStack_188 = unaff_x26;
                    func_0x00010bf0a140();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010be799e0(ppuStack_268);
                    _objc_release(param_4);
                  }
                }
                else {
                  _objc_release(unaff_x23);
                  _objc_release(param_4);
                  _objc_release(unaff_x28);
                }
              }
              else {
                _objc_release(unaff_x28);
              }
            }
          }
          _objc_release(unaff_x26);
        }
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar14 != ppuVar10);
      ppuVar14 = ppuVar12;
      func_0x00010bf52a60();
    } while (ppuVar14 != (undefined **)0x0);
  }
  ppuVar2 = (undefined **)0x0;
  _objc_release(ppuVar12);
  ppuVar14 = ppuStack_288;
  func_0x00010bf529e0();
  if (ppuVar14 != (undefined **)0x0) {
    param_4 = ppuStack_288;
    func_0x00010bf51e00();
    func_0x00010c28a480(ppuStack_268);
    _objc_release(param_4);
  }
  _objc_release(ppuStack_288);
  _objc_release(puStack_278);
  _objc_release(puStack_280);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_238);
  _objc_destroyWeak(&puStack_1b0);
  ppuVar4 = param_3;
  __Unwind_Resume();
  pcStack_298 = FUN_1068e9158;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = ppuVar4 + 5;
  ppuStack_2c0 = unaff_x22;
  ppuStack_2b8 = ppuVar10;
  ppuStack_2b0 = param_4;
  ppuStack_2a8 = param_3;
  puStack_2a0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(ppuVar14);
  puStack_2d0 = ppuVar4[4];
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8d7a0(ppuVar14);
  _objc_release(ppuVar11);
  _objc_release(ppuVar14);
  ppuVar10 = ppuVar4 + 5;
  _objc_loadWeakRetained();
  puStack_2d8 = ppuVar4[4];
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee2da0(ppuVar10);
  _objc_release(puVar13);
  ppuVar14 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_310 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_2e8 = FUN_1068e9250;
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar14;
  ppuStack_340 = unaff_x28;
  ppuStack_338 = unaff_x27;
  ppuStack_330 = unaff_x26;
  ppuStack_328 = ppuVar2;
  ppuStack_320 = ppuVar12;
  ppuStack_318 = unaff_x23;
  ppuStack_308 = ppuVar11;
  ppuStack_300 = ppuVar10;
  puStack_2f8 = puVar13;
  ppuStack_2f0 = &puStack_2a0;
  func_0x00010bf009c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)ppuVar14[0x1c];
  ppuStack_4e8 = ppuVar14;
  ppuStack_4d8 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar5;
  func_0x00010beffda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  plStack_480 = (long *)0x0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  _objc_retain(ppuVar10);
  ppuVar4 = ppuVar10;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    lVar3 = *plStack_480;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_480 != lVar3) {
          _objc_enumerationMutation(ppuVar10);
        }
        ppuVar12 = *(undefined ***)(lStack_488 + (long)ppuVar11 * 8);
        ppuVar2 = ppuVar12;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar14);
        _objc_release(ppuVar2);
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar4 != ppuVar11);
      ppuVar4 = ppuVar10;
      func_0x00010bf52a60();
      unaff_x23 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar10);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar5 = ppuStack_4d8;
  lStack_4c8 = 0;
  puStack_4d0 = (undefined *)0x0;
  uStack_4b8 = 0;
  puStack_4c0 = (undefined8 *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  ppuStack_4e0 = ppuVar4;
  _objc_retain(ppuStack_4d8);
  ppuVar4 = &puStack_4d0;
  puVar9 = auStack_450;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*puStack_4c0;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4c0 != unaff_x23) {
          _objc_enumerationMutation(ppuStack_4d8);
        }
        unaff_x26 = *(undefined ***)(lStack_4c8 + (long)ppuVar12 * 8);
        ppuVar2 = unaff_x26;
        func_0x000107c03ddc();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar4 = ppuVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar4 != (undefined **)0x0) {
            unaff_x28 = ppuVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = unaff_x28;
            func_0x000107c03f80();
            _objc_release(unaff_x28);
            _objc_release(ppuVar4);
            unaff_x27 = ppuVar4;
            if (((ulong)ppuVar11 & 1) == 0) {
              ppuVar11 = ppuVar14;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x000107c04008(unaff_x26,ppuVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuStack_4e0);
              _objc_release(unaff_x26);
              _objc_release(ppuVar11);
            }
          }
        }
        _objc_release(ppuVar2);
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar5 != ppuVar12);
      ppuVar4 = &puStack_4d0;
      puVar9 = auStack_450;
      ppuVar5 = ppuStack_4d8;
      func_0x00010bf52a60();
      ppuVar12 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuStack_4d8);
  ppuVar5 = ppuStack_4e0;
  ppuVar6 = ppuStack_4e0;
  func_0x00010bf529e0();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar11 = ppuVar5;
    func_0x00010bf51e00();
    puVar9 = (undefined1 *)0x0;
    ppuVar4 = ppuVar11;
    func_0x00010c28a4a0(ppuStack_4e8);
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar14);
  _objc_release(ppuVar10);
  ppuVar6 = ppuStack_4d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_508 = ppuVar5;
  pcStack_4f8 = FUN_1068e957c;
  ppuStack_550 = unaff_x28;
  ppuStack_548 = unaff_x27;
  ppuStack_540 = unaff_x26;
  ppuStack_538 = ppuVar2;
  ppuStack_530 = ppuVar12;
  ppuStack_528 = unaff_x23;
  ppuStack_520 = ppuVar14;
  ppuStack_518 = ppuVar11;
  ppuStack_510 = ppuVar10;
  ppuStack_500 = &ppuStack_2f0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar9);
  if (ppuVar4 == (undefined **)0x0) goto LAB_1068e9780;
  ppuVar10 = ppuVar4;
  func_0x000107c03ddc();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar12 = ppuVar4;
    func_0x00010c25b720();
    if ((ppuVar12 == (undefined **)0x2) ||
       (ppuVar12 = ppuVar4, func_0x00010c25b720(), ppuVar12 == (undefined **)0xb)) {
      puVar13 = PTR_PTR_1126c1030;
      puVar7 = PTR_PTR_1126c1040;
      _objc_alloc(PTR_PTR_1126c1040);
      func_0x00010c00d3e0();
      func_0x00010c11b000(puVar13);
      _objc_retainAutoreleasedReturnValue();
LAB_1068e962c:
      _objc_release(puVar7);
    }
    else {
      ppuVar12 = ppuVar4;
      func_0x00010c25b720();
      if ((ppuVar12 == (undefined **)0x3) ||
         (ppuVar12 = ppuVar4, func_0x00010c25b720(), ppuVar12 == (undefined **)0xe)) {
        puVar13 = PTR_PTR_1126c1030;
        puVar7 = PTR_PTR_1126c1038;
        _objc_opt_new(PTR_PTR_1126c1038);
        func_0x00010c291a40(puVar13);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068e962c;
      }
      puVar13 = (undefined *)0x0;
    }
    puStack_578 = &uStack_580;
    uStack_580 = 0;
    uStack_570 = 0x3032000000;
    pcStack_568 = FUN_1068d384c;
    uStack_560 = 0x1068d385c;
    puVar7 = PTR_PTR_1126b4040;
    _objc_alloc();
    func_0x00010c080120(ppuVar4);
    func_0x00010c0794a0(ppuVar4);
    func_0x00010c01b600();
    puStack_558 = puVar7;
    _objc_initWeak(auStack_588,ppuVar6);
    puVar7 = ppuVar6[0x1d];
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_590,auStack_588);
    func_0x00010c284b60(puVar7);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_590);
    _objc_destroyWeak(auStack_588);
    __Block_object_dispose(&uStack_580,8);
    _objc_release(puStack_558);
    _objc_release(puVar13);
  }
  _objc_release(ppuVar10);
LAB_1068e9780:
  _objc_release(puVar9);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 1068e9158; end: 1068e924f;  */

void FUN_1068e9158(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long unaff_x23;
  undefined *puVar13;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  long lStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [256];
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar10);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8d7a0(lVar10);
  _objc_release(puVar12);
  _objc_release(lVar10);
  lVar10 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee2da0(lVar10);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_1068e9250;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar10;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bf009c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined8 **)(lVar10 + 0xe0);
  lStack_258 = lVar10;
  lStack_248 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beffda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_1f0;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_1f0 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x24 = *(long *)(lStack_1f8 + (long)puVar12 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(unaff_x25);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar4 != puVar12);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar10 = lStack_248;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puStack_250 = puVar4;
  _objc_retain(lStack_248);
  puVar4 = &uStack_240;
  puVar9 = auStack_1c0;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x23 = *plStack_230;
    do {
      lVar11 = 0;
      do {
        if (*plStack_230 != unaff_x23) {
          _objc_enumerationMutation(lStack_248);
        }
        unaff_x26 = *(long *)(lStack_238 + lVar11 * 8);
        unaff_x25 = unaff_x26;
        func_0x000107c03ddc();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != 0) {
          puVar4 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 != (undefined8 *)0x0) {
            unaff_x28 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = unaff_x28;
            func_0x000107c03f80();
            _objc_release(unaff_x28);
            _objc_release(puVar4);
            unaff_x27 = puVar4;
            if (((ulong)puVar12 & 1) == 0) {
              puVar12 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x000107c04008(unaff_x26,puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_250);
              _objc_release(unaff_x26);
              _objc_release(puVar12);
            }
          }
        }
        _objc_release(unaff_x25);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      puVar4 = &uStack_240;
      puVar9 = auStack_1c0;
      lVar10 = lStack_248;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar10 != 0);
  }
  _objc_release(lStack_248);
  puVar1 = puStack_250;
  puVar5 = puStack_250;
  func_0x00010bf529e0();
  if (puVar5 != (undefined8 *)0x0) {
    puVar12 = puVar1;
    func_0x00010bf51e00();
    puVar9 = (undefined1 *)0x0;
    puVar4 = puVar12;
    func_0x00010c28a4a0(lStack_258);
    _objc_release(puVar12);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar10 = lStack_248;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  puStack_278 = puVar1;
  pcStack_268 = FUN_1068e957c;
  puStack_2c0 = unaff_x28;
  puStack_2b8 = unaff_x27;
  lStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  lStack_2a0 = unaff_x24;
  lStack_298 = unaff_x23;
  puStack_290 = puVar2;
  puStack_288 = puVar12;
  puStack_280 = puVar3;
  ppuStack_270 = &puStack_60;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar4 == (undefined8 *)0x0) goto LAB_1068e9780;
  puVar12 = puVar4;
  func_0x000107c03ddc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar12 != (undefined8 *)0x0) {
    puVar3 = puVar4;
    func_0x00010c25b720();
    if ((puVar3 == (undefined8 *)0x2) ||
       (puVar3 = puVar4, func_0x00010c25b720(), puVar3 == (undefined8 *)0xb)) {
      puVar13 = PTR_PTR_1126c1030;
      puVar8 = PTR_PTR_1126c1040;
      _objc_alloc(PTR_PTR_1126c1040);
      func_0x00010c00d3e0();
      func_0x00010c11b000(puVar13);
      _objc_retainAutoreleasedReturnValue();
LAB_1068e962c:
      _objc_release(puVar8);
    }
    else {
      puVar3 = puVar4;
      func_0x00010c25b720();
      if ((puVar3 == (undefined8 *)0x3) ||
         (puVar3 = puVar4, func_0x00010c25b720(), puVar3 == (undefined8 *)0xe)) {
        puVar13 = PTR_PTR_1126c1030;
        puVar8 = PTR_PTR_1126c1038;
        _objc_opt_new(PTR_PTR_1126c1038);
        func_0x00010c291a40(puVar13);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068e962c;
      }
      puVar13 = (undefined *)0x0;
    }
    puStack_2e8 = &uStack_2f0;
    uStack_2f0 = 0;
    uStack_2e0 = 0x3032000000;
    pcStack_2d8 = FUN_1068d384c;
    uStack_2d0 = 0x1068d385c;
    puVar8 = PTR_PTR_1126b4040;
    _objc_alloc();
    func_0x00010c080120(puVar4);
    func_0x00010c0794a0(puVar4);
    func_0x00010c01b600();
    puStack_2c8 = puVar8;
    _objc_initWeak(auStack_2f8,lVar10);
    uVar6 = *(undefined8 *)(lVar10 + 0xe8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_300,auStack_2f8);
    func_0x00010c284b60(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_300);
    _objc_destroyWeak(auStack_2f8);
    __Block_object_dispose(&uStack_2f0,8);
    _objc_release(puStack_2c8);
    _objc_release(puVar13);
  }
  _objc_release(puVar12);
LAB_1068e9780:
  _objc_release(puVar9);
  _objc_release(puVar4);
  return;
}



/* Entry: 1068e9250; end: 1068e957b; -[SCDiscoverFeedDataStore _creatorSettingsDidUpdate] */

void FUN_1068e9250(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined *puVar12;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  func_0x00010bf009c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined8 **)(param_1 + 0xe0);
  lStack_208 = param_1;
  lStack_1f8 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010beffda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = *plStack_1a0;
    do {
      unaff_x21 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x24 = *(long *)(lStack_1a8 + (long)unaff_x21 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(unaff_x25);
        unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
      } while (puVar4 != unaff_x21);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puVar3);
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar10 = lStack_1f8;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puStack_200 = puVar4;
  _objc_retain(lStack_1f8);
  puVar4 = &uStack_1f0;
  puVar9 = auStack_170;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x23 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != unaff_x23) {
          _objc_enumerationMutation(lStack_1f8);
        }
        unaff_x26 = *(long *)(lStack_1e8 + lVar11 * 8);
        unaff_x25 = unaff_x26;
        func_0x000107c03ddc();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != 0) {
          puVar4 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 != (undefined8 *)0x0) {
            unaff_x28 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x21 = unaff_x28;
            func_0x000107c03f80();
            _objc_release(unaff_x28);
            _objc_release(puVar4);
            unaff_x27 = puVar4;
            if (((ulong)unaff_x21 & 1) == 0) {
              unaff_x21 = puVar2;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x000107c04008(unaff_x26,unaff_x21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_200);
              _objc_release(unaff_x26);
              _objc_release(unaff_x21);
            }
          }
        }
        _objc_release(unaff_x25);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      puVar4 = &uStack_1f0;
      puVar9 = auStack_170;
      lVar10 = lStack_1f8;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar10 != 0);
  }
  _objc_release(lStack_1f8);
  puVar1 = puStack_200;
  puVar5 = puStack_200;
  func_0x00010bf529e0();
  if (puVar5 != (undefined8 *)0x0) {
    unaff_x21 = puVar1;
    func_0x00010bf51e00();
    puVar9 = (undefined1 *)0x0;
    puVar4 = unaff_x21;
    func_0x00010c28a4a0(lStack_208);
    _objc_release(unaff_x21);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar10 = lStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_228 = puVar1;
  pcStack_218 = FUN_1068e957c;
  puStack_270 = unaff_x28;
  puStack_268 = unaff_x27;
  lStack_260 = unaff_x26;
  lStack_258 = unaff_x25;
  lStack_250 = unaff_x24;
  lStack_248 = unaff_x23;
  puStack_240 = puVar2;
  puStack_238 = unaff_x21;
  puStack_230 = puVar3;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  if (puVar4 == (undefined8 *)0x0) goto LAB_1068e9780;
  puVar3 = puVar4;
  func_0x000107c03ddc();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar4;
    func_0x00010c25b720();
    if ((puVar2 == (undefined8 *)0x2) ||
       (puVar2 = puVar4, func_0x00010c25b720(), puVar2 == (undefined8 *)0xb)) {
      puVar12 = PTR_PTR_1126c1030;
      puVar8 = PTR_PTR_1126c1040;
      _objc_alloc(PTR_PTR_1126c1040);
      func_0x00010c00d3e0();
      func_0x00010c11b000(puVar12);
      _objc_retainAutoreleasedReturnValue();
LAB_1068e962c:
      _objc_release(puVar8);
    }
    else {
      puVar2 = puVar4;
      func_0x00010c25b720();
      if ((puVar2 == (undefined8 *)0x3) ||
         (puVar2 = puVar4, func_0x00010c25b720(), puVar2 == (undefined8 *)0xe)) {
        puVar12 = PTR_PTR_1126c1030;
        puVar8 = PTR_PTR_1126c1038;
        _objc_opt_new(PTR_PTR_1126c1038);
        func_0x00010c291a40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068e962c;
      }
      puVar12 = (undefined *)0x0;
    }
    puStack_298 = &uStack_2a0;
    uStack_2a0 = 0;
    uStack_290 = 0x3032000000;
    pcStack_288 = FUN_1068d384c;
    uStack_280 = 0x1068d385c;
    puVar8 = PTR_PTR_1126b4040;
    _objc_alloc();
    func_0x00010c080120(puVar4);
    func_0x00010c0794a0(puVar4);
    func_0x00010c01b600();
    puStack_278 = puVar8;
    _objc_initWeak(auStack_2a8,lVar10);
    uVar6 = *(undefined8 *)(lVar10 + 0xe8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_2b0,auStack_2a8);
    func_0x00010c284b60(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_2b0);
    _objc_destroyWeak(auStack_2a8);
    __Block_object_dispose(&uStack_2a0,8);
    _objc_release(puStack_278);
    _objc_release(puVar12);
  }
  _objc_release(puVar3);
LAB_1068e9780:
  _objc_release(puVar9);
  _objc_release(puVar4);
  return;
}



/* Entry: 1068e957c; end: 1068e9837; -[SCDiscoverFeedDataStore _updateCreatorSettingsWithStory:transactionContext:] */

void FUN_1068e957c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_1068e9780;
  lVar1 = param_3;
  func_0x000107c03ddc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c25b720();
    if ((lVar2 == 2) || (lVar2 = param_3, func_0x00010c25b720(), lVar2 == 0xb)) {
      puVar6 = PTR_PTR_1126c1030;
      puVar5 = PTR_PTR_1126c1040;
      _objc_alloc(PTR_PTR_1126c1040);
      func_0x00010c00d3e0();
      func_0x00010c11b000(puVar6);
      _objc_retainAutoreleasedReturnValue();
LAB_1068e962c:
      _objc_release(puVar5);
    }
    else {
      lVar2 = param_3;
      func_0x00010c25b720();
      if ((lVar2 == 3) || (lVar2 = param_3, func_0x00010c25b720(), lVar2 == 0xe)) {
        puVar6 = PTR_PTR_1126c1030;
        puVar5 = PTR_PTR_1126c1038;
        _objc_opt_new(PTR_PTR_1126c1038);
        func_0x00010c291a40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1068e962c;
      }
      puVar6 = (undefined *)0x0;
    }
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_1068d384c;
    uStack_70 = 0x1068d385c;
    puVar5 = PTR_PTR_1126b4040;
    _objc_alloc();
    func_0x00010c080120(param_3);
    func_0x00010c0794a0(param_3);
    func_0x00010c01b600();
    puStack_68 = puVar5;
    _objc_initWeak(auStack_98,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010c284b60(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(puStack_68);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
LAB_1068e9780:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e9838; end: 1068e9873;  */

void FUN_1068e9838(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068e9874; end: 1068e98f3; -[SCDiscoverFeedDataStore _updateCreatorSettingsTracker:] */

void FUN_1068e9874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b4030;
  func_0x00010bf814e0(PTR_PTR_1126b4030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b740(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068e98f4; end: 1068e998b; -[SCDiscoverFeedDataStore _updateCreatorSettingsWithStories:] */

void FUN_1068e98f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1068e998c;
  puStack_48 = &UNK_110864a38;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1068e998c; end: 1068e9aa3;  */

void FUN_1068e998c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010bed64a0(*(undefined8 *)(param_1 + 0x28));
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_opt_class(param_2);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar3 = puVar2;
  func_0x00010bf1f3c0();
  _objc_release(puVar2);
  uVar4 = param_2;
  if ((int)puVar3 != 0) {
    func_0x00010c25ce40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1068e9aa4; end: 1068e9b5b; -[SCDiscoverFeedDataStore _legacyAnnouncerIdentifierWithExtraData:] */

void FUN_1068e9aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f48cf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  if ((int)uVar2 != 0) {
    func_0x00010c25ce40(param_1,param_2,&PTR____CFConstantStringClassReference_110f48d18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068e9b5c; end: 1068e9cc3; -[SCDiscoverFeedDataStore onSnapProSubscriptionEvent:] */

/* WARNING: Possible PIC construction at 0x0001068e9f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068e9f90) */

void FUN_1068e9b5c(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfe4460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  puVar5 = puVar1;
  func_0x00010c25bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x00010c080120();
    puVar1 = param_3;
    func_0x00010c080120();
    if ((int)lVar9 != (int)puVar1) {
      param_2 = param_3;
      func_0x00010c080120(param_3);
      lVar9 = lVar8;
      func_0x000107c040bc(lVar8,param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      lVar2 = lVar9;
      func_0x000107bfa524();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c080120(param_3);
      func_0x00010c28a8c0(uVar11);
      _objc_release(lVar2);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c28a480(param_1);
      _objc_release(puVar1);
      _objc_release(lVar9);
    }
  }
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  puVar1 = puVar5;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    _objc_retain(puVar5);
    puVar1 = puVar5;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar5);
        }
        uVar12 = *(undefined8 *)((long)puVar14 * 8);
        uVar13 = *(undefined8 *)(param_3 + 0x98);
        uVar11 = uVar12;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010bf88b60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar3);
        func_0x00010c15ffa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afdc0(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar4);
        _objc_release(uVar11);
        puVar14 = puVar14 + 1;
      } while (puVar1 != puVar14);
      puVar1 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(puVar5 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf8fe20();
  _objc_release();
  if ((int)lVar8 != 0) {
    lVar7 = *(long *)(puVar5 + 0x30);
    func_0x00010c0d3c80();
    lVar6 = *(long *)(puVar5 + 0x30);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        puVar14 = *(undefined **)(lVar10 * 8);
        puVar1 = puVar14;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c2827c0();
        _objc_release(puVar1);
        if (((ulong)puVar3 & 0xfffffffe) == 2) {
          uVar11 = *(undefined8 *)(puVar5 + 0x30);
          param_2 = puVar14;
          goto code_r0x00010c0e00e0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    lVar8 = lVar7;
    func_0x00010bf51e00(lVar7);
    func_0x00010bee0ec0(puVar5);
    _objc_release(lVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = *(undefined8 *)(lVar7 + 0x20);
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar11,PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068e9cc4; end: 1068e9e7b; -[SCDiscoverFeedDataStore _logTakedownSnaps:] */

/* WARNING: Possible PIC construction at 0x0001068e9f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068e9f90) */

void FUN_1068e9cc4(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lVar14 * 8);
        uVar12 = *(undefined8 *)(param_1 + 0x98);
        uVar7 = uVar11;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar11;
        func_0x00010bf88b60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar2);
        func_0x00010c15ffa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afdc0(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar3);
        _objc_release(uVar7);
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_3 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf8fe20();
  _objc_release();
  if ((int)lVar1 != 0) {
    lVar8 = *(long *)(param_3 + 0x30);
    func_0x00010c0d3c80();
    lVar4 = *(long *)(param_3 + 0x30);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(lVar4);
        }
        uVar13 = *(ulong *)(lVar10 * 8);
        uVar5 = uVar13;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c2827c0();
        _objc_release(uVar5);
        if ((uVar6 & 0xfffffffe) == 2) {
          uVar7 = *(undefined8 *)(param_3 + 0x30);
          param_2 = uVar13;
          goto code_r0x00010c0e00e0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    lVar1 = lVar8;
    func_0x00010bf51e00(lVar8);
    func_0x00010bee0ec0(param_3);
    _objc_release(lVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(lVar8 + 0x20);
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068e9e7c; end: 1068ea10f; -[SCDiscoverFeedDataStore _rerankViewedStories] */

/* WARNING: Possible PIC construction at 0x0001068e9f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068e9f90) */

void FUN_1068e9e7c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8fe20();
  _objc_release();
  if ((int)lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c0d3c80();
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar10 = *(ulong *)(lVar9 * 8);
        uVar5 = uVar10;
        func_0x00010bfa4340();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c2827c0();
        _objc_release(uVar5);
        if ((uVar6 & 0xfffffffe) == 2) {
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          param_2 = uVar10;
          goto code_r0x00010c0e00e0;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    lVar3 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010bee0ec0(param_1);
    _objc_release(lVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
code_r0x00010c0e00e0:
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068ea110; end: 1068ea11b;  */

void FUN_1068ea110(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068ea11c; end: 1068ea14b;  */

void FUN_1068ea11c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068ea14c; end: 1068ea25b; -[SCDiscoverFeedDataStore preserveFreshPromotedStories:forFeedType:completion:] */

void FUN_1068ea14c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ea25c; end: 1068ea2af;  */

void FUN_1068ea25c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be7f9e0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068ea2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1068ea2b0; end: 1068ea4ff; -[SCDiscoverFeedDataStore _preserveFreshPromotedStoriesOnPerformer:forFeedType:] */

void FUN_1068ea2b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0d3c80();
    _objc_retain(param_3);
    lVar6 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar3 = lVar9;
        func_0x00010c25b720();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 == 5) {
          func_0x00010c259740(lVar9);
          func_0x00010c0df880(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar2);
          _objc_release(puVar4);
        }
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar8 = uVar2;
    func_0x00010bf51e00(uVar2);
    func_0x00010bee0da0(param_1);
    _objc_release(uVar8);
    if (*(long *)(param_1 + 0x50) == 0) {
      puVar4 = PTR_PTR_1126ced38;
      _objc_alloc_init();
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar4;
      _objc_release(uVar8);
    }
    puVar4 = PTR_PTR_1126ced30;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0126a0();
    _objc_release(puVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cbc0(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c10ff80();
  _objc_release(uVar8);
  if ((int)uVar2 != 0) {
    lVar6 = *(long *)(param_3 + 0x50);
    if (lVar6 == 0) {
      puVar4 = PTR_PTR_1126ced38;
      _objc_alloc_init();
      uVar2 = *(undefined8 *)(param_3 + 0x50);
      *(undefined **)(param_3 + 0x50) = puVar4;
      _objc_release(uVar2);
      lVar6 = *(long *)(param_3 + 0x50);
    }
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    if (*(undefined **)(param_3 + 0x30) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_3 + 0x30);
    }
    puVar5 = PTR____NSDictionary0__struct_11034ab58;
    if (*(undefined **)(param_3 + 0x38) != (undefined *)0x0) {
      puVar5 = *(undefined **)(param_3 + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c28cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar6,PTR_s_updateWithStoryDedupeFpsByFeedId_112680d98,puVar4,puVar5);
    return;
  }
  return;
}



/* Entry: 1068ea500; end: 1068ea59f; -[SCDiscoverFeedDataStore _updatePreservedStories] */

void FUN_1068ea500(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c10ff80();
  _objc_release(uVar2);
  if ((int)uVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126ced38;
      _objc_alloc_init();
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar4;
      _objc_release(uVar5);
      lVar3 = *(long *)(param_1 + 0x50);
    }
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_1 + 0x30);
    }
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
    if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c28cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar3,PTR_s_updateWithStoryDedupeFpsByFeedId_112680d98,puVar4,puVar1);
    return;
  }
  return;
}



/* Entry: 1068ea5a0; end: 1068ea67f; -[SCDiscoverFeedDataStore _preservedStoriesForFeedIdentifier:] */

void FUN_1068ea5a0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xf0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c10ff80();
  _objc_release(uVar1);
  if ((((uVar2 & 1) == 0) || (param_3 == 0)) || (lVar3 = *(long *)(param_1 + 0x50), lVar3 == 0)) {
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c10ff40(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (lVar4 == 0) {
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1068ea680; end: 1068ea757; -[SCDiscoverFeedDataStore markLastEmptySubsSectionFetchedDate:] */

void FUN_1068ea680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068ea758; end: 1068ea78b;  */

void FUN_1068ea758(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea51c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068ea78c; end: 1068ea80b; -[SCDiscoverFeedDataStore _setLastEmptySubsSectionFetchedDate:] */

void FUN_1068ea78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,param_3,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068ea80c; end: 1068ea883; -[SCDiscoverFeedDataStore _getLastEmptySubsSectionFetchedDate] */

void FUN_1068ea80c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf64fa0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068ea884; end: 1068ea88f; -[SCDiscoverFeedDataStore _lastEmptySubsSectionFetchedDateKey] */

undefined ** FUN_1068ea884(void)

{
  return &PTR____CFConstantStringClassReference_110e64578;
}



/* Entry: 1068ea890; end: 1068ea897; -[SCDiscoverFeedDataStore diskCacheLoadingState] */

undefined8 FUN_1068ea890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1068ea898; end: 1068eaa53; -[SCDiscoverFeedDataStore .cxx_destruct] */

void FUN_1068ea898(long param_1)

{
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



/* Entry: 1068eaa54; end: 1068eaa5f;  */

void FUN_1068eaa54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1068eaa60; end: 1068eaa9b;  */

bool FUN_1068eaa60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1068eaa9c; end: 1068eab47;  */

uint FUN_1068eaa9c(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010bf9c800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06bb60(uVar4);
    _objc_release(uVar2);
    uVar3 = (uint)uVar4 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1068eab48; end: 1068eaeab;  */

/* WARNING: Possible PIC construction at 0x0001068eac88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001068eada4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068eac8c) */
/* WARNING: Removing unreachable block (ram,0x0001068eada8) */
/* WARNING: Removing unreachable block (ram,0x0001068eae60) */
/* WARNING: Removing unreachable block (ram,0x0001068eaea8) */
/* WARNING: Removing unreachable block (ram,0x0001068eae88) */

void FUN_1068eab48(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      _objc_release(lVar2);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
      puVar5 = *(undefined **)(param_1 + 0x38);
code_r0x00010befa120:
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_addObject__11259c1f0,puVar5);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar9 = *(undefined8 *)(lVar8 * 8);
      uVar6 = uVar9;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c25e5c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar6);
      if ((int)uVar4 != 0) {
        func_0x00010bf08ca0(*(undefined8 *)(param_1 + 0x20));
        puVar5 = PTR_PTR_1126cc6d0;
        _objc_alloc();
        func_0x00010c29a460(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c250f20(uVar9);
        func_0x00010c25e5e0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010bf08ca0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010c021980();
        lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        uVar6 = *(undefined8 *)(lVar7 + 0x28);
        *(undefined **)(lVar7 + 0x28) = puVar5;
        _objc_release(uVar6);
        _objc_release(param_2);
        puVar5 = PTR_PTR_1126ced58;
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
        func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
        uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf08ca0(uVar6);
        func_0x000108473d8c(param_4,uVar3,(long)(int)uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b5360(puVar5);
        _objc_retainAutoreleasedReturnValue();
        goto code_r0x00010befa120;
      }
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1068eaeac; end: 1068eaebb;  */

void FUN_1068eaeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_addObject__11259c1f0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068eaebc; end: 1068eaf8b;  */

void FUN_1068eaebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ced58;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c259740(uVar1);
  uVar1 = param_4;
  func_0x000108473d8c(param_4,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0b5360(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068eaf8c; end: 1068eaf9b;  */

void FUN_1068eaf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_addObject__11259c1f0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068eaf9c; end: 1068eafff;  */

void FUN_1068eaf9c(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c079c60();
  _objc_release(param_2);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1068eb000; end: 1068eb02f;  */

void FUN_1068eb000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068eb030; end: 1068eb04f;  */

uint FUN_1068eb030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1068eb050; end: 1068eb0eb;  */

void FUN_1068eb050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071f40();
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068eb0ec; end: 1068eb2ab;  */

undefined8 ***
FUN_1068eb0ec(long param_1,undefined8 ***param_2,undefined8 ***param_3,undefined8 param_4,
             undefined8 **param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 ***unaff_x26;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  pppuVar1 = param_2;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = pppuVar1;
  func_0x00010c071f40();
  _objc_release(pppuVar1);
  pppuVar8 = param_2;
  if ((int)pppuVar2 == 0) {
    pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    param_5 = (undefined8 **)0x10;
    pppuVar2 = param_3;
    func_0x00010bf52a60();
    if (pppuVar2 != (undefined8 ***)0x0) {
      unaff_x25 = *plStack_120;
      do {
        unaff_x26 = (undefined8 ***)0x0;
        do {
          if (*plStack_120 != unaff_x25) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x24 = *(undefined8 *)(lStack_128 + (long)unaff_x26 * 8);
          uVar3 = *(ulong *)(param_1 + 0x28);
          func_0x00010bf4b900();
          if ((uVar3 & 1) == 0) {
            func_0x00010befa120(pppuVar1);
          }
          unaff_x26 = (undefined8 ***)((long)unaff_x26 + 1);
        } while (pppuVar2 != unaff_x26);
        param_5 = (undefined8 **)0x10;
        pppuVar2 = param_3;
        func_0x00010bf52a60();
      } while (pppuVar2 != (undefined8 ***)0x0);
    }
    _objc_release(param_3);
    pppuVar2 = pppuVar1;
    func_0x00010bf51e00();
    pppuVar7 = pppuVar2;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(pppuVar2);
    _objc_release(pppuVar1);
  }
  else {
    pppuVar7 = param_3;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  pppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1068eb2ac;
  ppuStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  ppuStack_168 = pppuVar2;
  ppuStack_160 = pppuVar1;
  lStack_158 = param_1;
  ppuStack_150 = param_3;
  ppuStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar7);
  _objc_retain(pppuVar8);
  _objc_retain(param_5);
  puStack_188 = PTR_PTR_1126f3b78;
  pppuVar1 = &ppuStack_190;
  ppuStack_190 = pppuVar4;
  _objc_msgSendSuper2(pppuVar1,PTR_s_init_1125d9248);
  if (pppuVar1 != (undefined8 ***)0x0) {
    _objc_retain(pppuVar8);
    ppuVar5 = pppuVar1[1];
    pppuVar1[1] = pppuVar8;
    _objc_release(ppuVar5);
    _objc_retain(param_5);
    ppuVar5 = pppuVar1[2];
    pppuVar1[2] = param_5;
    _objc_release(ppuVar5);
    _objc_initWeak(auStack_198,pppuVar1);
    pppuVar2 = pppuVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar2;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a0,auStack_198);
    pppuVar6 = pppuVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = pppuVar1[4];
    pppuVar1[4] = pppuVar6;
    _objc_release(ppuVar5);
    _objc_release(pppuVar4);
    _objc_release(pppuVar2);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
  }
  _objc_release(param_5);
  _objc_release(pppuVar8);
  _objc_release(pppuVar7);
  return pppuVar1;
}



/* Entry: 1068eb2ac; end: 1068eb447; -[SCDiscoverFeedMetadataCacheTTLResolver initWithNetworkConnectivityMonitor:storiesConfigProvider:storiesPerformer:] */

undefined8 *
FUN_1068eb2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f3b78;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068eb448; end: 1068eb4a7;  */

void FUN_1068eb448(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5e480(param_2);
  _objc_release(param_2);
  func_0x00010be629c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068eb4a8; end: 1068eb5f7; -[SCDiscoverFeedMetadataCacheTTLResolver defaultTTLInSecondsForQuerySource:] */

double FUN_1068eb4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf82580();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110decf58);
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de6838);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3cd18);
      if ((int)uVar3 == 0) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          uVar3 = uVar4;
          func_0x00010bf71820(uVar4);
          iVar1 = (int)uVar3;
        }
        else {
          uVar3 = uVar4;
          func_0x00010bf71800();
          iVar1 = (int)uVar3;
        }
      }
      else if (*(char *)(param_1 + 0x18) == '\0') {
        uVar3 = uVar4;
        func_0x00010bf717e0(uVar4);
        iVar1 = (int)uVar3;
      }
      else {
        uVar3 = uVar4;
        func_0x00010bf717c0();
        iVar1 = (int)uVar3;
      }
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      uVar3 = uVar4;
      func_0x00010bf71980();
      iVar1 = (int)uVar3;
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf719a0(uVar4);
      iVar1 = (int)uVar3;
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar3 = uVar4;
    func_0x00010bf71840();
    iVar1 = (int)uVar3;
  }
  else {
    uVar3 = uVar4;
    func_0x00010bf71860(uVar4);
    iVar1 = (int)uVar3;
  }
  _objc_release(uVar4);
  _objc_release(param_3);
  return (double)iVar1 / 1000.0;
}



/* Entry: 1068eb5f8; end: 1068eb7bf; -[SCDiscoverFeedMetadataCacheTTLResolver perFeedTTLInSecondsForQuerySource:feedType:] */

double FUN_1068eb5f8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_4 == 3) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf824e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110decf58);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de6838);
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3cd18);
        if ((int)uVar3 == 0) {
          uVar3 = uVar4;
          func_0x00010bf718a0(uVar4);
          iVar1 = (int)uVar3;
        }
        else {
          uVar3 = uVar4;
          func_0x00010bf71880(uVar4);
          iVar1 = (int)uVar3;
        }
      }
      else {
        uVar3 = uVar4;
        func_0x00010bf718e0(uVar4);
        iVar1 = (int)uVar3;
      }
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf718c0(uVar4);
      iVar1 = (int)uVar3;
    }
  }
  else {
    dVar5 = -1.0;
    if (param_4 != 2) goto LAB_1068eb794;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf82ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110decf58);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de6838);
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e3cd18);
        if ((int)uVar3 == 0) {
          uVar3 = uVar4;
          func_0x00010bf71920(uVar4);
          iVar1 = (int)uVar3;
        }
        else {
          uVar3 = uVar4;
          func_0x00010bf71900(uVar4);
          iVar1 = (int)uVar3;
        }
      }
      else {
        uVar3 = uVar4;
        func_0x00010bf71960(uVar4);
        iVar1 = (int)uVar3;
      }
    }
    else {
      uVar3 = uVar4;
      func_0x00010bf71940(uVar4);
      iVar1 = (int)uVar3;
    }
  }
  dVar5 = (double)iVar1;
  _objc_release(uVar4);
LAB_1068eb794:
  _objc_release(param_3);
  return dVar5 / 1000.0;
}



/* Entry: 1068eb7c0; end: 1068eb833; -[SCDiscoverFeedMetadataCacheTTLResolver resolvedTTLInSecondsForQuerySource:feedType:] */

double FUN_1068eb7c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010c0f7ba0(param_2,param_3,param_4,param_5);
  if (param_1 < 0.0) {
    func_0x00010bf6a620(param_2,param_3,param_4);
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1068eb834; end: 1068eb897; -[SCDiscoverFeedMetadataCacheTTLResolver _networkConnectivityStatusDidChange:] */

void FUN_1068eb834(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  uStack_18 = param_3 == 2;
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1068eb898;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_40);
  return;
}



/* Entry: 1068eb898; end: 1068eb8a7;  */

void FUN_1068eb898(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 1068eb8a8; end: 1068eb8e3; -[SCDiscoverFeedMetadataCacheTTLResolver .cxx_destruct] */

void FUN_1068eb8a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068eb8e4; end: 1068eb967; -[SCDiscoverFeedPreservedStoryStore init] */

undefined1 * FUN_1068eb8e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3b80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ced30;
    _objc_alloc();
    func_0x00010c0126a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1068eb968; end: 1068ebb5b; -[SCDiscoverFeedPreservedStoryStore initWithFeedIdentifier:preservedStories:] */

undefined8 * FUN_1068eb968(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 *puStack_158;
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
  undefined *puStack_f0;
  long lStack_68;
  
  puVar6 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_f0 = PTR_PTR_1126f3b80;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == (undefined8 *)0x0) {
      puVar3 = PTR_PTR_1126ced30;
      _objc_alloc();
      func_0x00010c0126a0();
      uVar2 = puVar1[1];
      puVar1[1] = puVar3;
    }
    else {
      _objc_retain(param_3);
      uVar2 = puVar1[1];
      puVar1[1] = param_3;
    }
    _objc_release(uVar2);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_4);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar8 = *plStack_130;
      do {
        lVar9 = 0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(param_4);
          }
          lVar7 = *(long *)(lStack_138 + lVar9 * 8);
          if ((lVar7 != 0) && (func_0x00010c25b720(), lVar7 == 5)) {
            func_0x00010befa120(unaff_x22);
          }
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = param_4;
        puVar6 = &uStack_140;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(param_4);
    puVar3 = unaff_x22;
    func_0x00010bf51e00();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(unaff_x22);
    puVar5 = puVar6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  pcStack_148 = FUN_1068ebb5c;
  puStack_170 = unaff_x22;
  puStack_168 = puVar1;
  lStack_160 = param_4;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x1068ebc0c;
  puStack_180 = &UNK_1108f1040;
  puStack_178 = puVar3;
  _objc_retain();
  puVar1 = puVar5;
  func_0x0001006372a4(puVar5,&puStack_198);
  _objc_release(puVar5);
  _objc_release(puStack_178);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 1068ebb5c; end: 1068ebcaf; +[SCDiscoverFeedPreservedStoryStore arrayByPurgingExpiredStoriesFromArray:] */

void FUN_1068ebb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1068ebc0c;
  puStack_40 = &UNK_1108f1040;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068ebcb0; end: 1068ebeab; -[SCDiscoverFeedPreservedStoryStore updateWithStoryDedupeFpsByFeedIdentifier:storiesByStoryDedupeFp:] */

void FUN_1068ebcb0(long param_1,undefined **param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    param_2 = &PTR___NSConcreteGlobalBlock_110948f80;
    func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_110948f80);
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d3c80();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = puVar4;
        func_0x00010bf4b900();
        if (((ulong)puVar5 & 1) == 0) {
          lVar6 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((lVar6 != 0) && (lVar7 = lVar6, func_0x00010c25b720(), lVar7 == 5)) {
            func_0x00010befa120(uVar3);
          }
          _objc_release(lVar6);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar8 = uVar3;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068ebeac; end: 1068ebedb;  */

void FUN_1068ebeac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068ebedc; end: 1068ec117; -[SCDiscoverFeedPreservedStoryStore updateWithPromotedStoriesByFeedIdentifier:] */

/* WARNING: Possible PIC construction at 0x0001068ec008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001068ec048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001068ec00c) */
/* WARNING: Removing unreachable block (ram,0x0001068ec034) */
/* WARNING: Removing unreachable block (ram,0x0001068ec04c) */

void FUN_1068ebedc(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    param_2 = &PTR___NSConcreteGlobalBlock_110948fa0;
    func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_110948fa0);
    func_0x00010c225c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d3c80();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar11 = *(undefined ***)(lVar10 * 8);
        if ((ppuVar11 != (undefined **)0x0) &&
           (ppuVar5 = ppuVar11, func_0x00010c25b720(), puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570
           , ppuVar5 == (undefined **)0x5)) {
          func_0x00010c259740(ppuVar11);
          param_2 = ppuVar11;
          goto code_r0x00010c0df880;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar6 = uVar3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
code_r0x00010c0df880:
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068ec118; end: 1068ec147;  */

void FUN_1068ec118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 1068ec148; end: 1068ec29f; -[SCDiscoverFeedPreservedStoryStore purgeExpiredStories] */

void FUN_1068ec148(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1068ec1fc;
  puStack_40 = &UNK_1108f1040;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x0001006372a4(uVar4,&puStack_58);
  uVar2 = uVar4;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068ec2a0; end: 1068ec2ff; -[SCDiscoverFeedPreservedStoryStore preservedStoriesForFeedIdentifier:] */

void FUN_1068ec2a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((param_3 != 0) &&
     (lVar1 = param_3, func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 8)),
     puVar2 = PTR____NSArray0__struct_11034ab48, (int)lVar1 != 0)) {
    puVar2 = *(undefined **)(param_1 + 0x10);
    _objc_retain(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068ec300; end: 1068ec367; -[SCDiscoverFeedPreservedStoryStore copyWithZone:] */

undefined * FUN_1068ec300(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ced38;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 1068ec368; end: 1068ec36f; -[SCDiscoverFeedPreservedStoryStore feedIdentifier] */

undefined8 FUN_1068ec368(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068ec370; end: 1068ec39f; -[SCDiscoverFeedPreservedStoryStore .cxx_destruct] */

void FUN_1068ec370(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068ec3a0; end: 1068ec4c7; -[SCDiscoverFeedCachedStream initWithCoder:] */

undefined1 * FUN_1068ec3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3b88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ec4c8; end: 1068ec5ff; -[SCDiscoverFeedCachedStream initWithFeedIdentifiers:storyDedupeFpsByFeedIdentifier:sectionMetadataByFeedIdentifier:sectionDataModelsByFeedIdentifier:storiesByStoryDedupeFp:] */

undefined1 *
FUN_1068ec4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3b88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068ec600; end: 1068ec623; -[SCDiscoverFeedCachedStream copyWithZone:] */

undefined8 FUN_1068ec600(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068ec624; end: 1068ec6bf; -[SCDiscoverFeedCachedStream encodeWithCoder:] */

void FUN_1068ec624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e64598);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e645b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e645d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e645f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e64618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068ec6c0; end: 1068ec757; -[SCDiscoverFeedCachedStream hash] */

undefined8 * FUN_1068ec6c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1068ec820:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1068ec82c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_1068ec82c;
              }
              goto LAB_1068ec820;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1068ec82c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1068ec758; end: 1068ec847; -[SCDiscoverFeedCachedStream isEqual:] */

long FUN_1068ec758(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068ec820:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ec82c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_1068ec82c;
              }
              goto LAB_1068ec820;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1068ec82c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068ec848; end: 1068ec84f; -[SCDiscoverFeedCachedStream feedIdentifiers] */

undefined8 FUN_1068ec848(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068ec850; end: 1068ec857; -[SCDiscoverFeedCachedStream storyDedupeFpsByFeedIdentifier] */

undefined8 FUN_1068ec850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068ec858; end: 1068ec85f; -[SCDiscoverFeedCachedStream sectionMetadataByFeedIdentifier] */

undefined8 FUN_1068ec858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068ec860; end: 1068ec867; -[SCDiscoverFeedCachedStream sectionDataModelsByFeedIdentifier] */

undefined8 FUN_1068ec860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068ec868; end: 1068ec86f; -[SCDiscoverFeedCachedStream storiesByStoryDedupeFp] */

undefined8 FUN_1068ec868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068ec870; end: 1068ec8c3; -[SCDiscoverFeedCachedStream .cxx_destruct] */

void FUN_1068ec870(long param_1)

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



/* Entry: 1068ec8c4; end: 1068ec98b;  */

undefined1 *
FUN_1068ec8c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f3b90;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1068ec98c; end: 1068ec9af; -[SCContentFeedDatabaseCard copyWithZone:] */

undefined8 FUN_1068ec98c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068ec9b0; end: 1068eca3b; -[SCContentFeedDatabaseCard hash] */

long * FUN_1068ec9b0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  plVar2 = &lStack_48;
  func_0x000100505190(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
LAB_1068ecadc:
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1068ecae8;
    plVar5 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar3 & 1) != 0) && ((plVar2[1] == param_3[1] && (plVar2[3] == param_3[3])))) {
      lVar4 = plVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        plVar5 = (long *)plVar2[4];
        if (plVar5 != (long *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_1068ecae8;
        }
        goto LAB_1068ecadc;
      }
    }
    plVar5 = (long *)0x0;
  }
LAB_1068ecae8:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 1068eca3c; end: 1068ecb03; -[SCContentFeedDatabaseCard isEqual:] */

long FUN_1068eca3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068ecadc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068ecae8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1068ecae8;
        }
        goto LAB_1068ecadc;
      }
    }
    lVar3 = 0;
  }
LAB_1068ecae8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068ecb04; end: 1068ecb33;  */

undefined8 FUN_1068ecb04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1068ecb34; end: 1068ecb63; -[SCContentFeedDatabaseCard .cxx_destruct] */

void FUN_1068ecb34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068ecb64; end: 1068ecc27;  */

undefined1 *
FUN_1068ecb64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1126f3b98;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
      *(undefined8 *)((long)plVar1 + 0x30) = param_1;
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
    }
  }
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 1068ecc28; end: 1068ecc4b; -[SCContentFeedDatabaseFeedCardRank copyWithZone:] */

undefined8 FUN_1068ecc28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


