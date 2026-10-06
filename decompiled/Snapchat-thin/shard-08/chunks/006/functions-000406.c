/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106341f8c; end: 10634259b; -[SCOperaPageViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106341f8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  long lStack_350;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 0.0;
  lVar11 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar11);
      }
      uVar1 = *(undefined8 *)(lVar16 * 8);
      func_0x00010bf60c40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar13);
      _objc_release(uVar1);
      lVar16 = lVar16 + 1;
    } while (lVar14 != lVar16);
    lVar14 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  if (*(long *)(param_1 + _DAT_112745df0) != 0) {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bfbbde0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar2);
  }
  lVar14 = (long)_DAT_112745d18;
  func_0x00010beed820(*(undefined8 *)(param_1 + lVar14));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (dVar19 != 0.0) {
    func_0x00010beed820(*(undefined8 *)(param_1 + lVar14));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126b2348;
    func_0x00010c0f62c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar18);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar14 = (long)_DAT_112745d24;
  func_0x00010c2a2520(*(undefined8 *)(param_1 + lVar14));
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9a20;
  func_0x00010c09d1c0(PTR_PTR_1126c9a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar13);
  _objc_release(puVar18);
  _objc_release(puVar2);
  lVar11 = *(long *)(param_1 + lVar14);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(lVar11);
  lVar14 = lVar11;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar11);
      }
      lVar15 = *(long *)(lVar16 * 8);
      _objc_retain(lVar15);
      puVar18 = PTR_PTR_1126c9df8;
      _objc_opt_new(PTR_PTR_1126c9df8);
      func_0x00010bf8d140(lVar15);
      func_0x00010c193ea0(puVar18);
      func_0x00010c09ea00(lVar15);
      func_0x00010c1bf6c0(puVar18);
      func_0x00010c09cdc0(lVar15);
      func_0x00010c1bebe0(puVar18);
      lVar17 = lVar15;
      func_0x00010bf862c0();
      if (0 < lVar17) {
        func_0x00010bf862c0(lVar15);
        func_0x00010c18fe60(puVar18);
      }
      lVar17 = lVar15;
      func_0x00010bfe26e0();
      if (0 < lVar17) {
        func_0x00010bfe26e0(lVar15);
        func_0x00010c1a8300(puVar18);
      }
      _objc_release(lVar15);
      func_0x00010befa120(puVar2);
      _objc_release(puVar18);
      lVar16 = lVar16 + 1;
    } while (lVar14 != lVar16);
    lVar14 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar18 = puVar2;
  func_0x00010bf529e0();
  if (puVar18 != (undefined *)0x0) {
    puVar18 = PTR_PTR_1126c9680;
    func_0x00010c09d020(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(puVar18);
    lVar16 = param_1;
    func_0x00010be4da40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar16;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar16);
        }
        lVar15 = lVar16;
        func_0x00010c0e00e0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar13);
        _objc_release(lVar15);
        lVar17 = lVar17 + 1;
      } while (lVar14 != lVar17);
      lVar14 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
  }
  lVar14 = lVar11;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 != 0) {
    func_0x00010bfe26e0(lVar14);
  }
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9680;
  func_0x00010bf9bbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar13);
  _objc_release(puVar3);
  _objc_release(puVar18);
  _objc_release(lVar14);
  _objc_release(puVar2);
  _objc_release(lVar11);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be3e340(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9a20;
  func_0x00010c06c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1d0640(puVar13);
  _objc_release(puVar18);
  _objc_release(puVar2);
  puVar2 = puVar13;
  func_0x00010bf51e00();
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  lStack_350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar13 = puVar3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  dVar19 = 0.0;
  puVar2 = puVar13;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  if (puVar2 == (undefined *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    dVar22 = 0.0;
    do {
      puVar18 = (undefined *)0x0;
      lVar11 = lVar12;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(puVar13);
        }
        lVar12 = *(long *)((long)puVar18 * 8);
        if (lVar11 == 0) {
          func_0x00010c09cdc0(lVar12);
          _objc_retain(lVar12);
        }
        else {
          func_0x00010bf8d140(lVar11);
          dVar21 = dVar19;
          func_0x00010c09cdc0(lVar11);
          dVar23 = dVar19 + dVar21;
          func_0x00010bf8d140(lVar12);
          dVar19 = dVar21;
          func_0x00010c09cdc0(lVar12);
          dVar21 = dVar21 + dVar19;
          func_0x00010c09cdc0(lVar12);
          if (dVar23 < dVar21) {
            func_0x00010bf8d140(lVar12);
            dVar19 = dVar23 - dVar19;
            if (0.0 <= dVar19) {
              dVar21 = dVar22 + dVar19;
            }
            else {
              dVar23 = ABS(dVar19);
              dVar20 = dVar23 * 2.220446049250313e-16;
              if (dVar20 <= 2.2250738585072014e-308) {
                dVar20 = 2.2250738585072014e-308;
              }
              dVar19 = dVar22 + dVar19;
              dVar21 = dVar19;
              if (dVar20 <= dVar23) {
                dVar21 = dVar22;
              }
            }
            _objc_retain(lVar12);
            _objc_release(lVar11);
            dVar22 = dVar21;
          }
          else {
            lVar12 = lVar11;
            dVar22 = dVar22 + dVar19;
          }
        }
        puVar18 = puVar18 + 1;
        lVar11 = lVar12;
      } while (puVar2 != puVar18);
      puVar2 = puVar13;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    dVar19 = dVar22 * 1000.0;
  }
  puVar18 = PTR_PTR_1126c9680;
  func_0x00010c09cf40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9680;
  puStack_3e8 = puVar4;
  func_0x00010c09cfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9680;
  puStack_3e0 = puVar6;
  func_0x00010c09d060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &puStack_3e8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3d8 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar18);
  _objc_release(lVar12);
  _objc_release(puVar13);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_350) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar9);
  func_0x00010bf8d140(param_2);
  dVar22 = dVar19;
  func_0x00010bf8d140(ppuVar9);
  if (dVar19 <= dVar22) {
    func_0x00010bf8d140(param_2);
    dVar19 = dVar22;
    func_0x00010bf8d140(ppuVar9);
    if (dVar22 < dVar19) {
      puVar13 = (undefined *)0xffffffffffffffff;
      goto LAB_106342988;
    }
    func_0x00010c09cdc0(param_2);
    dVar22 = dVar19;
    func_0x00010c09cdc0(ppuVar9);
    if (dVar19 <= dVar22) {
      func_0x00010c09cdc0(param_2);
      dVar19 = dVar22;
      func_0x00010c09cdc0(ppuVar9);
      puVar13 = (undefined *)-(ulong)(dVar22 < dVar19);
      goto LAB_106342988;
    }
  }
  puVar13 = (undefined *)0x1;
LAB_106342988:
  _objc_release(ppuVar9);
  _objc_release(param_2);
  return puVar13;
}



/* Entry: 10634259c; end: 1063428db; -[SCOperaPageViewController _loadIndicatorParameters:] */

undefined * FUN_10634259c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 0.0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    dVar18 = 0.0;
    do {
      lVar14 = 0;
      lVar12 = lVar11;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar11 = *(long *)(lVar14 * 8);
        if (lVar12 == 0) {
          func_0x00010c09cdc0(lVar11);
          _objc_retain(lVar11);
        }
        else {
          func_0x00010bf8d140(lVar12);
          dVar17 = dVar15;
          func_0x00010c09cdc0(lVar12);
          dVar19 = dVar15 + dVar17;
          func_0x00010bf8d140(lVar11);
          dVar15 = dVar17;
          func_0x00010c09cdc0(lVar11);
          dVar17 = dVar17 + dVar15;
          func_0x00010c09cdc0(lVar11);
          if (dVar19 < dVar17) {
            func_0x00010bf8d140(lVar11);
            dVar15 = dVar19 - dVar15;
            if (0.0 <= dVar15) {
              dVar17 = dVar18 + dVar15;
            }
            else {
              dVar19 = ABS(dVar15);
              dVar16 = dVar19 * 2.220446049250313e-16;
              if (dVar16 <= 2.2250738585072014e-308) {
                dVar16 = 2.2250738585072014e-308;
              }
              dVar15 = dVar18 + dVar15;
              dVar17 = dVar15;
              if (dVar16 <= dVar19) {
                dVar17 = dVar18;
              }
            }
            _objc_retain(lVar11);
            _objc_release(lVar12);
            dVar18 = dVar17;
          }
          else {
            lVar11 = lVar12;
            dVar18 = dVar18 + dVar15;
          }
        }
        lVar14 = lVar14 + 1;
        lVar12 = lVar11;
      } while (lVar3 != lVar14);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    dVar15 = dVar18 * 1000.0;
  }
  puVar13 = PTR_PTR_1126c9680;
  func_0x00010c09cf40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9680;
  puStack_128 = puVar4;
  func_0x00010c09cfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9680;
  puStack_120 = puVar6;
  func_0x00010c09d060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_128;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_118 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar10);
  func_0x00010bf8d140(param_2);
  dVar18 = dVar15;
  func_0x00010bf8d140(ppuVar10);
  if (dVar15 <= dVar18) {
    func_0x00010bf8d140(param_2);
    dVar15 = dVar18;
    func_0x00010bf8d140(ppuVar10);
    if (dVar18 < dVar15) {
      puVar13 = (undefined *)0xffffffffffffffff;
      goto LAB_106342988;
    }
    func_0x00010c09cdc0(param_2);
    dVar18 = dVar15;
    func_0x00010c09cdc0(ppuVar10);
    if (dVar15 <= dVar18) {
      func_0x00010c09cdc0(param_2);
      dVar15 = dVar18;
      func_0x00010c09cdc0(ppuVar10);
      puVar13 = (undefined *)-(ulong)(dVar18 < dVar15);
      goto LAB_106342988;
    }
  }
  puVar13 = (undefined *)0x1;
LAB_106342988:
  _objc_release(ppuVar10);
  _objc_release(param_2);
  return puVar13;
}



/* Entry: 1063428dc; end: 1063429af;  */

long FUN_1063428dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf8d140(param_3);
  dVar2 = param_1;
  func_0x00010bf8d140(param_4);
  if (param_1 <= dVar2) {
    func_0x00010bf8d140(param_3);
    dVar3 = dVar2;
    func_0x00010bf8d140(param_4);
    if (dVar2 < dVar3) {
      lVar1 = -1;
      goto LAB_106342988;
    }
    func_0x00010c09cdc0(param_3);
    dVar2 = dVar3;
    func_0x00010c09cdc0(param_4);
    if (dVar3 <= dVar2) {
      func_0x00010c09cdc0(param_3);
      dVar3 = dVar2;
      func_0x00010c09cdc0(param_4);
      lVar1 = -(ulong)(dVar2 < dVar3);
      goto LAB_106342988;
    }
  }
  lVar1 = 1;
LAB_106342988:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1063429b0; end: 106342b43; -[SCOperaPageViewController _layerVCForLayer:inLayerVCs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1063429b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar2 = param_3;
        func_0x00010c27dd80();
        lVar3 = lVar7;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        lVar5 = param_3;
        if (lVar2 == 0x19) {
          _objc_opt_class();
          _objc_opt_class();
        }
        else {
          func_0x00010c27dd80();
          func_0x00010c27dd80();
        }
        _objc_release(lVar3);
        if (lVar4 == lVar5) {
          _objc_retain(lVar7);
          goto LAB_106342aec;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  lVar7 = 0;
LAB_106342aec:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return lVar7;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + _DAT_112745d10);
  func_0x00010be36bc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c0f13c0(lVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(lVar1);
  return lVar8;
}



/* Entry: 106342b44; end: 106342bb7; -[SCOperaPageViewController pageIsFullyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106342b44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0f13c0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 106342bb8; end: 106342c2b; -[SCOperaPageViewController pageIsPartiallyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106342bb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0f13e0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 106342c2c; end: 106342c9f; -[SCOperaPageViewController relativePositionForPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106342c2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c128180(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 106342ca0; end: 106342cb7; -[SCOperaPageViewController safeInsetsForPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106342ca0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745e10);
}



/* Entry: 106342cb8; end: 106342cf3; -[SCOperaPageViewController currentDataSaverModeStrategy] */

undefined8 FUN_106342cb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5e5c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106342cf4; end: 106342d9b; -[SCOperaPageViewController preloadVideoPlayer] */

void FUN_106342cf4(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c29ace0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108b80();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106342d9c; end: 106342e43; -[SCOperaPageViewController releaseVideoPlayer] */

void FUN_106342d9c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c29ace0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1287a0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106342e44; end: 106342f33; -[SCOperaPageViewController rotateBasedOnOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106342e44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c141940(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar7 != lVar6);
    lVar7 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745df0);
  *(undefined **)(param_1 + _DAT_112745df0) = PTR____kCFBooleanTrue_11034ab68;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745cf8);
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf8e240();
  _objc_release(uVar3);
  lVar7 = (long)_DAT_112745d00;
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    puVar4 = PTR_PTR_1126b2638;
    func_0x00010c2a6840(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar2);
    _objc_release(puVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010bf112e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar2);
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745e14);
  *(undefined8 *)(param_1 + _DAT_112745e14) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_112745e18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf73690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745ddc),PTR_s_didChangeState__1125ba748,2);
  return;
}



/* Entry: 106342f34; end: 10634304b; -[SCOperaPageViewController autoAdvanceTimerDidFire] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106342f34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745df0);
  *(undefined **)(param_1 + _DAT_112745df0) = PTR____kCFBooleanTrue_11034ab68;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745cf8);
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf8e240();
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112745d00;
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c2a6840(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar1);
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010bf112e0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar1);
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745e14);
  *(undefined8 *)(param_1 + _DAT_112745e14) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112745e18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf73690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745ddc),PTR_s_didChangeState__1125ba748,2);
  return;
}



/* Entry: 10634304c; end: 10634322b; -[SCOperaPageViewController shareableMedias] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634304c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 unaff_x21;
  undefined *puVar11;
  undefined *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar12;
  long unaff_x25;
  undefined **unaff_x26;
  ulong uVar13;
  undefined **unaff_x27;
  long lVar14;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_s_setupTableView_112668000;
    unaff_x27 = &PTR_DAT_1126a5000;
    do {
      unaff_x22 = PTR_s_shareableMediaArray_112668788;
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        puVar11 = PTR_DAT_1126a5360;
        uVar12 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        _objc_retain(uVar12);
        uVar5 = uVar12;
        func_0x00010010fab4(uVar12,puVar11);
        unaff_x23 = uVar12;
        if ((int)uVar5 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(uVar12);
        uVar5 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        unaff_x24 = unaff_x23;
        if ((uVar5 & 1) == 0) {
          func_0x00010c22b560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          if (unaff_x24 != 0) {
            func_0x00010befa120(puVar4);
          }
        }
        else {
          func_0x00010c22b580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          func_0x00010befa160(puVar4);
        }
        _objc_release(unaff_x24);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar14 != unaff_x28);
      lVar14 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar14 != 0);
  }
  _objc_release(param_1);
  puVar11 = puVar4;
  func_0x00010bf51e00();
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10634322c;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    ppuStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    puStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    puStack_150 = puVar11;
    puStack_148 = puVar4;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_260;
    puVar11 = puVar6;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      lVar14 = *plStack_250;
      do {
        puVar2 = PTR_s_supportsShareableMediaSnapshot_112676928;
        puVar1 = PTR_s_shareableMediaSnapshotWithPerfor_1126687a0;
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar14) {
            _objc_enumerationMutation(puVar6);
          }
          puVar3 = PTR_DAT_1126a5360;
          uVar13 = *(ulong *)(lStack_258 + (long)puVar10 * 8);
          _objc_retain(uVar13);
          uVar12 = uVar13;
          func_0x00010010fab4(uVar13,puVar3);
          uVar5 = uVar13;
          if ((int)uVar12 == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar13);
          uVar12 = uVar5;
          _objc_opt_respondsToSelector(uVar5,puVar2);
          if ((((uVar12 & 1) != 0) &&
              (uVar12 = uVar5, _objc_opt_respondsToSelector(uVar5,puVar1), (uVar12 & 1) != 0)) &&
             (uVar12 = uVar5, func_0x00010c263c00(), (int)uVar12 != 0)) {
            uVar12 = uVar5;
            func_0x00010c22b5e0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar12 != 0) {
              func_0x00010befa120(puVar4);
            }
            _objc_release(uVar12);
          }
          _objc_release(uVar5);
          puVar10 = puVar10 + 1;
        } while (puVar11 != puVar10);
        puVar9 = &uStack_260;
        puVar11 = puVar6;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    puVar11 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar4 = PTR_PTR_1126c9dd0;
      lVar14 = (long)_DAT_112745e1c;
      puVar11 = *(undefined **)((long)puVar7 + lVar14);
      if (puVar11 == (undefined *)0x0) {
        _objc_retain(puVar9);
        _objc_alloc();
        func_0x00010c001640();
        _objc_release(puVar9);
        uVar8 = *(undefined8 *)((long)puVar7 + lVar14);
        *(undefined **)((long)puVar7 + lVar14) = puVar4;
        _objc_release(uVar8);
        func_0x00010bed26a0(puVar7);
        puVar11 = *(undefined **)((long)puVar7 + lVar14);
      }
      _objc_retain(puVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10634322c; end: 10634341f; -[SCOperaPageViewController shareableMediaSnapshotsWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634322c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
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
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  lVar10 = param_1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar12 = *plStack_120;
    do {
      puVar2 = PTR_s_supportsShareableMediaSnapshot_112676928;
      puVar9 = PTR_s_shareableMediaSnapshotWithPerfor_1126687a0;
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_DAT_1126a5360;
        uVar11 = *(ulong *)(lStack_128 + lVar8 * 8);
        _objc_retain(uVar11);
        uVar5 = uVar11;
        func_0x00010010fab4(uVar11,puVar3);
        uVar1 = uVar11;
        if ((int)uVar5 == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar11);
        uVar5 = uVar1;
        _objc_opt_respondsToSelector(uVar1,puVar2);
        if ((((uVar5 & 1) != 0) &&
            (uVar5 = uVar1, _objc_opt_respondsToSelector(uVar1,puVar9), (uVar5 & 1) != 0)) &&
           (uVar5 = uVar1, func_0x00010c263c00(), (int)uVar5 != 0)) {
          uVar5 = uVar1;
          func_0x00010c22b5e0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 != 0) {
            func_0x00010befa120(puVar4);
          }
          _objc_release(uVar5);
        }
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar10 != lVar8);
      puVar7 = &uStack_130;
      lVar10 = param_1;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_1);
  puVar9 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126c9dd0;
    lVar10 = (long)_DAT_112745e1c;
    puVar9 = *(undefined **)(param_3 + lVar10);
    if (puVar9 == (undefined *)0x0) {
      _objc_retain(puVar7);
      _objc_alloc();
      func_0x00010c001640();
      _objc_release(puVar7);
      uVar6 = *(undefined8 *)(param_3 + lVar10);
      *(undefined **)(param_3 + lVar10) = puVar4;
      _objc_release(uVar6);
      func_0x00010bed26a0(param_3);
      puVar9 = *(undefined **)(param_3 + lVar10);
    }
    _objc_retain(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106343420; end: 1063434a7; -[SCOperaPageViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c9dd0;
  lVar4 = (long)_DAT_112745e1c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c001640();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010bed26a0(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1063434a8; end: 10634355f; -[SCOperaPageViewController shouldHideActionBar] */

byte FUN_1063434a8(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = param_1;
  func_0x00010be3e340();
  if ((uVar1 & 1) == 0) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010be0ac00(param_1);
    bVar2 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 106343560; end: 1063435bb;  */

void FUN_106343560(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_shouldHideActionBar_112669cf8);
  if (((uVar1 & 1) != 0) && (uVar1 = param_2, func_0x00010c230b40(), (int)uVar1 != 0)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063435bc; end: 106343663; -[SCOperaPageViewController _isAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1063435bc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0f2520(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112745d10);
    func_0x00010be36bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f13a0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106343664; end: 106343813; -[SCOperaPageViewController _isExtendedAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343664(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010be3e340();
  if ((int)uVar2 != 0) {
    lVar7 = (long)_DAT_112745cf0;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar7));
    uVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf20c00();
    iVar1 = (int)uVar3;
    _CGRectEqualToRect();
    if (iVar1 == 0) {
      uVar3 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf20c00();
      _CGRectEqualToRect();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar7));
        lVar5 = *(long *)(param_1 + lVar7);
        func_0x00010bf9daa0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          uVar6 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010bf9daa0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc2aa0();
          _objc_release(uVar6);
        }
        _objc_release(lVar5);
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _objc_release(param_1);
      }
    }
    else {
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 106343814; end: 1063438d3; -[SCOperaPageViewController _updateActionBarContentViews] */

/* WARNING: Possible PIC construction at 0x0001063438bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063438c0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343814(undefined *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112745e1c;
  if (*(long *)(param_1 + lVar4) == 0) {
    return;
  }
  func_0x00010c230b40();
  func_0x00010c2006e0(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c230b40();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((uVar1 & 1) == 0) {
    func_0x00010bf46560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bdc4200(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c284970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_updateContentViews__11267ec80,puVar3);
  return;
}



/* Entry: 1063438d4; end: 10634399f; -[SCOperaPageViewController _actionBarContentViewsForLayerVCsForConfiguration:] */

void FUN_1063438d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1063439a0;
  puStack_50 = &UNK_11091cb88;
  uStack_48 = param_3;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010be0ac00(param_1,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063439a0; end: 1063439e7;  */

void FUN_1063439a0(long param_1,long param_2)

{
  func_0x00010beeddc0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063439e8; end: 106343b4f; -[SCOperaPageViewController _enumerateActionBarContentProviders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063439e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
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
  long lStack_68;
  
  puVar6 = &uStack_130;
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
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        puVar2 = PTR_DAT_1126a5368;
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        _objc_retain(lVar7);
        lVar4 = lVar7;
        func_0x00010010fab4(lVar7,puVar2);
        lVar1 = lVar7;
        if ((int)lVar4 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar7);
        if (lVar1 != 0) {
          (**(code **)(param_3 + 0x10))(param_3,lVar7);
        }
        _objc_release(lVar1);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar5 = (undefined1 *)puVar6;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x00010c2a6740(puVar6);
    puVar5 = (undefined1 *)puVar6;
    func_0x00010c29bf00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(puVar5);
    func_0x00010c12c8e0(puVar6);
    func_0x00010c26ac80(*(undefined8 *)(param_3 + _DAT_112745d08));
  }
  func_0x00010c12d360(*(undefined8 *)(param_3 + _DAT_112745dec));
  if ((*(byte *)(param_3 + _DAT_112745e0c) & 1) == 0) {
    func_0x00010bed26a0(param_3);
    func_0x00010becff60(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106343b50; end: 106343c1b; -[SCOperaPageViewController blockingViewWasHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343b50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c2a6740(param_3,param_2,0);
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
    func_0x00010c12c8e0(param_3);
    func_0x00010c26ac80(*(undefined8 *)(param_1 + _DAT_112745d08),param_2,param_3);
  }
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112745dec),param_2,param_3);
  if ((*(byte *)(param_1 + _DAT_112745e0c) & 1) == 0) {
    func_0x00010bed26a0(param_1);
    func_0x00010becff60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106343c1c; end: 106343ca3; -[SCOperaPageViewController blockingViewDidStartHiding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343c1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0f13c0();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c29e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewWillFullyAppear_112685468);
    return;
  }
  return;
}



/* Entry: 106343ca4; end: 106343dd7; -[SCOperaPageViewController blockingLayerIsBlockingOtherLayersFromDisplaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106343ca4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x21;
  undefined *puVar15;
  long unaff_x22;
  long unaff_x23;
  long lVar16;
  undefined *unaff_x24;
  long lVar17;
  long lVar18;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined1 auStack_430 [128];
  long lStack_3b0;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined *puStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
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
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar13 = *(long *)(param_1 + _DAT_112745dec);
  _objc_retain(lVar13);
  lVar17 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar17 != 0) {
    unaff_x23 = *plStack_110;
    unaff_x24 = &DAT_112745000;
    unaff_x21 = lVar17;
    do {
      lVar17 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar13);
        }
        unaff_x22 = *(long *)(lStack_118 + lVar17 * 8);
        lVar2 = unaff_x22;
        func_0x00010c22e540(unaff_x22,param_2,*(undefined8 *)(param_1 + _DAT_112745d10));
        if (((int)lVar2 != 0) && (lVar2 = unaff_x22, func_0x00010c06d1a0(), (int)lVar2 == 0)) {
          puVar14 = (undefined *)0x1;
          goto LAB_106343d94;
        }
        lVar17 = lVar17 + 1;
      } while (unaff_x21 != lVar17);
      unaff_x21 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_120,auStack_d8,0x10);
    } while (unaff_x21 != 0);
  }
  puVar14 = (undefined *)0x0;
LAB_106343d94:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106343dd8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar13 = *(long *)(lVar13 + _DAT_112745dec);
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(lVar13);
  lVar17 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,&uStack_230,auStack_1e8,0x10);
  puVar14 = (undefined *)0x0;
  if (lVar17 != 0) {
    unaff_x21 = *plStack_220;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_220 != unaff_x21) {
          _objc_enumerationMutation(lVar13);
        }
        uVar1 = *(ulong *)(lStack_228 + unaff_x22 * 8);
        func_0x00010c06d5e0();
        if ((uVar1 & 1) != 0) {
          puVar14 = (undefined *)0x1;
          goto LAB_106343ea0;
        }
        unaff_x22 = unaff_x22 + 1;
      } while (lVar17 != unaff_x22);
      lVar17 = lVar13;
      func_0x00010bf52a60(lVar13,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar17 != 0);
    puVar14 = (undefined *)0x0;
  }
LAB_106343ea0:
  lVar17 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_340;
  pcStack_238 = FUN_106343ee0;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lVar2 = *(long *)(lVar17 + _DAT_112745dec);
  puStack_270 = unaff_x24;
  lStack_268 = unaff_x23;
  lStack_260 = unaff_x22;
  lStack_258 = unaff_x21;
  puStack_250 = puVar14;
  lStack_248 = lVar13;
  ppuStack_240 = &puStack_130;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar13 = *plStack_330;
    do {
      lVar16 = 0;
      do {
        if (*plStack_330 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        puVar15 = *(undefined **)(lStack_338 + lVar16 * 8);
        puVar14 = puVar15;
        func_0x00010c06d5e0();
        if (((ulong)puVar14 & 1) != 0) {
          _objc_retain(puVar15);
          goto LAB_106343fb8;
        }
        lVar16 = lVar16 + 1;
      } while (lVar17 != lVar16);
      lVar17 = lVar2;
      puVar11 = &uStack_340;
      func_0x00010bf52a60(lVar2,param_2,&uStack_340,auStack_2f8,0x10);
    } while (lVar17 != 0);
  }
  puVar15 = (undefined *)0x0;
LAB_106343fb8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    lStack_3b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar14 = *(undefined **)(lVar2 + _DAT_112745dec);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dca0();
    if (puVar14 == (undefined *)0x0) {
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      lStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      plStack_490 = (long *)0x0;
      lVar17 = lVar2;
      func_0x00010be48b00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar17;
      func_0x00010bf52a60();
      if (lVar13 != 0) {
        lVar16 = *plStack_490;
        do {
          lVar18 = 0;
          do {
            if (*plStack_490 != lVar16) {
              _objc_enumerationMutation(lVar17);
            }
            func_0x00010bf7dca0(*(undefined8 *)(lStack_498 + lVar18 * 8),param_2,puVar11);
            lVar18 = lVar18 + 1;
          } while (lVar13 != lVar18);
          lVar13 = lVar17;
          func_0x00010bf52a60(lVar17,param_2,&uStack_4a0,auStack_430,0x10);
        } while (lVar13 != 0);
      }
      _objc_release(lVar17);
    }
    uVar12 = *(undefined8 *)(lVar2 + _DAT_112745d00);
    puVar15 = PTR_PTR_1126b2638;
    func_0x00010bf7dc80(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6008;
    func_0x00010c128140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_460 = puVar3;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6008;
    puStack_448 = puVar4;
    func_0x00010bf1d980();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_458 = puVar5;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar14 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b6008;
    puStack_440 = puVar6;
    func_0x00010bf1d9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    puStack_450 = puVar7;
    if (puVar14 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = puVar8;
    _objc_opt_class();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_438 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_448,&puStack_460,3
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar12,param_2,puVar15,lVar2,puVar10);
    _objc_release(puVar10);
    if (puVar14 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar15);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b0) {
      return puVar14;
    }
    ___stack_chk_fail();
    puVar15 = *(undefined **)(puVar14 + _DAT_112745d80);
    _objc_retain(puVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return puVar15;
}



/* Entry: 106343dd8; end: 106343edf; -[SCOperaPageViewController blockingLayerIsBlocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106343dd8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined1 auStack_310 [128];
  long lStack_290;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar14 = *(long *)(param_1 + _DAT_112745dec);
  _objc_retain(lVar14);
  lVar1 = lVar14;
  func_0x00010bf52a60(lVar14,param_2,&uStack_110,auStack_c8,0x10);
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar15 = *plStack_100;
    do {
      lVar17 = 0;
      do {
        if (*plStack_100 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar17 * 8);
        func_0x00010c06d5e0();
        if ((uVar2 & 1) != 0) {
          puVar3 = (undefined *)0x1;
          goto LAB_106343ea0;
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    puVar3 = (undefined *)0x0;
  }
LAB_106343ea0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar14 = *(long *)(lVar14 + _DAT_112745dec);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar15 = *plStack_210;
    do {
      lVar17 = 0;
      do {
        if (*plStack_210 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        puVar16 = *(undefined **)(lStack_218 + lVar17 * 8);
        puVar3 = puVar16;
        func_0x00010c06d5e0();
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar16);
          goto LAB_106343fb8;
        }
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = lVar14;
      puVar12 = &uStack_220;
      func_0x00010bf52a60(lVar14,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar1 != 0);
  }
  puVar16 = (undefined *)0x0;
LAB_106343fb8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = *(undefined **)(lVar14 + _DAT_112745dec);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dca0();
    if (puVar3 == (undefined *)0x0) {
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      lStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      plStack_370 = (long *)0x0;
      lVar1 = lVar14;
      func_0x00010be48b00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar1;
      func_0x00010bf52a60();
      if (lVar15 != 0) {
        lVar17 = *plStack_370;
        do {
          lVar18 = 0;
          do {
            if (*plStack_370 != lVar17) {
              _objc_enumerationMutation(lVar1);
            }
            func_0x00010bf7dca0(*(undefined8 *)(lStack_378 + lVar18 * 8),param_2,puVar12);
            lVar18 = lVar18 + 1;
          } while (lVar15 != lVar18);
          lVar15 = lVar1;
          func_0x00010bf52a60(lVar1,param_2,&uStack_380,auStack_310,0x10);
        } while (lVar15 != 0);
      }
      _objc_release(lVar1);
    }
    uVar13 = *(undefined8 *)(lVar14 + _DAT_112745d00);
    puVar16 = PTR_PTR_1126b2638;
    func_0x00010bf7dc80(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(lVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6008;
    func_0x00010c128140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_340 = puVar4;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6008;
    puStack_328 = puVar5;
    func_0x00010bf1d980();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_338 = puVar6;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b6008;
    puStack_320 = puVar7;
    func_0x00010bf1d9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_330 = puVar8;
    if (puVar3 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = puVar9;
    _objc_opt_class();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_318 = puVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_328,&puStack_340,3
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar13,param_2,puVar16,lVar14,puVar11);
    _objc_release(puVar11);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar14);
    _objc_release(puVar16);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar16 = *(undefined **)(puVar3 + _DAT_112745d80);
    _objc_retain(puVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 106343ee0; end: 106343ff7; -[SCOperaPageViewController _topMostBlockingLayerVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343ee0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [128];
  long lStack_180;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar14 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + _DAT_112745dec);
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar17 = *plStack_100;
    do {
      lVar18 = 0;
      do {
        if (*plStack_100 != lVar17) {
          _objc_enumerationMutation(lVar1);
        }
        uVar16 = *(ulong *)(lStack_108 + lVar18 * 8);
        uVar3 = uVar16;
        func_0x00010c06d5e0();
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar16);
          goto LAB_106343fb8;
        }
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = lVar1;
      puVar14 = &uStack_110;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  uVar16 = 0;
LAB_106343fb8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = *(undefined **)(lVar1 + _DAT_112745dec);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dca0();
    if (puVar4 == (undefined *)0x0) {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      lVar2 = lVar1;
      func_0x00010be48b00();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar2;
      func_0x00010bf52a60();
      if (lVar17 != 0) {
        lVar18 = *plStack_260;
        do {
          lVar19 = 0;
          do {
            if (*plStack_260 != lVar18) {
              _objc_enumerationMutation(lVar2);
            }
            func_0x00010bf7dca0(*(undefined8 *)(lStack_268 + lVar19 * 8),param_2,puVar14);
            lVar19 = lVar19 + 1;
          } while (lVar17 != lVar19);
          lVar17 = lVar2;
          func_0x00010bf52a60(lVar2,param_2,&uStack_270,auStack_200,0x10);
        } while (lVar17 != 0);
      }
      _objc_release(lVar2);
    }
    uVar15 = *(undefined8 *)(lVar1 + _DAT_112745d00);
    puVar5 = PTR_PTR_1126b2638;
    func_0x00010bf7dc80(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6008;
    func_0x00010c128140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_230 = puVar6;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b6008;
    puStack_218 = puVar7;
    func_0x00010bf1d980();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_228 = puVar8;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b6008;
    puStack_210 = puVar9;
    func_0x00010bf1d9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    puStack_220 = puVar10;
    if (puVar4 == (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = puVar11;
    _objc_opt_class();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_208 = puVar12;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_218,&puStack_230,3
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar15,param_2,puVar5,lVar1,puVar13);
    _objc_release(puVar13);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar11);
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
      return;
    }
    ___stack_chk_fail();
    uVar16 = *(ulong *)(puVar4 + _DAT_112745d80);
    _objc_retain(uVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar16);
  return;
}



/* Entry: 106343ff8; end: 1063442b3; -[SCOperaPageViewController didTryPagingWhenPagingDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106343ff8(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_112745dec);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dca0();
  if (puVar1 == (undefined *)0x0) {
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    lVar2 = param_1;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar14 = *plStack_150;
      do {
        lVar15 = 0;
        do {
          if (*plStack_150 != lVar14) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010bf7dca0(*(undefined8 *)(lStack_158 + lVar15 * 8),param_2,param_3);
          lVar15 = lVar15 + 1;
        } while (lVar3 != lVar15);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_160,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  uVar13 = *(undefined8 *)(param_1 + _DAT_112745d00);
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010bf7dc80(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b6008;
  func_0x00010c128140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_120 = puVar5;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b6008;
  puStack_108 = puVar6;
  func_0x00010bf1d980();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar7;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1 != (undefined *)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b6008;
  puStack_100 = puVar8;
  func_0x00010bf1d9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_110 = puVar9;
  if (puVar1 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = puVar10;
  _objc_opt_class();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,&puStack_120,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar13,param_2,puVar4,param_1,puVar12);
  _objc_release(puVar12);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(puVar1 + _DAT_112745d80);
  _objc_retain(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  return;
}



/* Entry: 1063442b4; end: 1063442e3; -[SCOperaPageViewController viewForZoomingInScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063442b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745d80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063442e4; end: 1063444f7; -[SCOperaPageViewController scrollViewDidZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063442e4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010beccfe0(param_2);
  uVar8 = *(undefined8 *)(param_2 + _DAT_112745d00);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c2bf2c0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2e48;
  func_0x00010c2bf2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2bf2a0(param_4);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7e0(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((*(char *)(param_2 + _DAT_112745db8) == '\x01') &&
     (lVar5 = param_4, func_0x00010bf20a40(), (int)lVar5 != 0)) {
    lVar5 = param_4;
    func_0x00010c0fc240();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c252440();
    _objc_release(lVar5);
    if (lVar6 - 3U < 3) {
      func_0x00010c2bf2a0(param_4);
      dVar9 = param_1;
      func_0x00010c0ce7a0(param_4);
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      if (dVar9 < param_1) {
        _objc_retain(param_4);
        func_0x00010bf03400(0x3fb999999999999a,puVar3);
        _objc_release(param_4);
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0ce7a0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar8,PTR_s_setZoomScale_animated__112667958,0);
  return;
}



/* Entry: 1063444f8; end: 106344523;  */

void FUN_1063444f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ce7a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setZoomScale_animated__112667958,0);
  return;
}



/* Entry: 106344524; end: 1063446b7; -[SCOperaPageViewController scrollViewDidEndZooming:withView:atScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106344524(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = (long)_DAT_112745db8;
  if (((*(char *)(param_2 + lVar4) == '\x01') &&
      (func_0x00010c288e20(param_2,param_3,0), *(char *)(param_2 + lVar4) == '\x01')) &&
     (func_0x00010c0ce7a0(param_4), puVar2 = PTR__OBJC_CLASS___UIView_1126aec20, param_1 != dVar6))
  {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1063446b8;
    puStack_60 = &UNK_110842e18;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010bf03400(0x3fb999999999999a,puVar2,param_3,&puStack_78);
    uVar3 = uStack_58;
  }
  else {
    lVar5 = (long)_DAT_112745d74;
    if (*(long *)(param_2 + lVar5) < 1) goto LAB_10634468c;
    func_0x00010c0ce7a0(param_4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    bVar1 = *(byte *)(param_2 + lVar4);
    lVar4 = *(long *)(param_2 + lVar5);
    uStack_a0 = 0xc2000000;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x1063446e4;
    puStack_90 = &UNK_110845ce0;
    _objc_retain(param_4);
    uStack_88 = param_4;
    bStack_80 = bVar1 ^ 1;
    func_0x00010bf03400((double)lVar4 / 1000.0,puVar2,param_3,&puStack_a8);
    uVar3 = uStack_88;
  }
  _objc_release(uVar3);
LAB_10634468c:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1063446b8; end: 106344713;  */

void FUN_1063446b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ce7a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setZoomScale_animated__112667958,0);
  return;
}



/* Entry: 106344714; end: 106344733; -[SCOperaPageViewController scrollViewWillBeginZooming:withView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106344714(long param_1)

{
  if (*(char *)(param_1 + _DAT_112745db8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c288e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updatePropertiesWithLooping__11267fdb0,1);
    return;
  }
  return;
}



/* Entry: 106344734; end: 1063449a3; -[SCOperaPageViewController _toggleVisibilityOfMediaContent:] */

void FUN_106344734(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c2bf2a0(param_4);
  dVar9 = 0.0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        _objc_retain(uVar7);
        uVar3 = uVar7;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        _objc_opt_respondsToSelector();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          _objc_release();
LAB_10634487c:
          func_0x00010c0ce7a0(param_4);
          func_0x00010c29bf00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          if (param_1 == dVar9) {
            func_0x00010c1a7f60();
            _objc_release(uVar7);
          }
          else {
            func_0x00010c1a7f60();
            _objc_release(uVar7);
          }
          dVar9 = 0.1;
          func_0x00010bf03400(PTR__OBJC_CLASS___UIView_1126aec20);
        }
        else {
          uVar3 = uVar7;
          func_0x00010c08c0e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c08c2a0();
          _objc_release(uVar3);
          _objc_release(uVar7);
          if (uVar4 != 1) goto LAB_10634487c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1063449a4; end: 106344a13;  */

void FUN_1063449a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106344a14; end: 106344e8b; -[SCOperaPageViewController didUpdateViewProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106344a14(double param_1,double param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x21;
  undefined8 *puVar13;
  undefined8 *unaff_x22;
  long lVar14;
  undefined8 *unaff_x23;
  undefined8 *puVar15;
  undefined **unaff_x24;
  undefined8 *puVar16;
  undefined1 in_b0;
  undefined1 uVar17;
  undefined1 in_register_00005001;
  undefined1 uVar18;
  undefined1 in_register_00005002;
  undefined1 uVar19;
  undefined1 in_register_00005003;
  undefined1 uVar20;
  undefined1 in_register_00005004;
  undefined1 uVar21;
  undefined1 in_register_00005005;
  undefined1 uVar22;
  undefined1 in_register_00005006;
  undefined1 uVar23;
  undefined1 in_register_00005007;
  undefined1 uVar24;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  undefined1 in_b1;
  undefined1 in_register_00005021;
  undefined1 in_register_00005022;
  undefined1 in_register_00005023;
  undefined1 in_register_00005024;
  undefined1 in_register_00005025;
  undefined1 in_register_00005026;
  undefined1 in_register_00005027;
  undefined1 in_register_00005028;
  undefined1 in_register_00005029;
  undefined1 in_register_0000502a;
  undefined1 in_register_0000502b;
  undefined1 in_register_0000502c;
  undefined1 in_register_0000502d;
  undefined1 in_register_0000502e;
  undefined1 in_register_0000502f;
  undefined8 in_register_00005048;
  double unaff_d8;
  double unaff_d9;
  undefined8 uVar25;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [128];
  undefined1 auStack_488 [128];
  long lStack_408;
  double dStack_400;
  undefined8 uStack_3f8;
  undefined **ppuStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined1 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  double dStack_290;
  undefined8 uStack_288;
  double dStack_280;
  double dStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_5;
  puVar12 = param_5;
  _objc_retain();
  puVar13 = param_5;
  if (param_5 != (undefined8 *)0x0) {
    unaff_x24 = &PTR__OBJC_CLASS___CAMetalLayer_1126c9000;
    puVar12 = (undefined8 *)PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar12);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined8 *)0x0) {
LAB_106344ba8:
      _objc_release(puVar12);
    }
    else {
      unaff_x23 = param_3;
      func_0x00010beb59c0();
      _objc_release(puVar6);
      _objc_release(puVar12);
      if ((int)unaff_x23 != 0) {
        puVar7 = PTR_PTR_1126c9410;
        func_0x00010c0c5840(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_5;
        func_0x00010c0e00e0(param_5,param_4,puVar7);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = puVar12;
        func_0x00010bf1f3c0();
        _objc_release(puVar12);
        _objc_release(puVar7);
        puVar12 = param_5;
        func_0x00010c0d3c80();
        if ((int)unaff_x23 == 0) {
          func_0x00010be95bc0(param_3);
          uVar25 = *(undefined8 *)((long)param_3 + (long)_DAT_112745e18);
          in_b0 = (undefined1)uVar25;
          in_register_00005001 = (undefined1)((ulong)uVar25 >> 8);
          in_register_00005002 = (undefined1)((ulong)uVar25 >> 0x10);
          in_register_00005003 = (undefined1)((ulong)uVar25 >> 0x18);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = (undefined8 *)PTR_PTR_1126c9410;
          func_0x00010c2708c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12,param_4,puVar7,unaff_x23);
          _objc_release(unaff_x23);
        }
        else {
          func_0x00010be70c40();
          puVar7 = PTR_PTR_1126c9410;
          func_0x00010c270780(PTR_PTR_1126c9410);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12,param_4,PTR____kCFBooleanTrue_11034ab68,puVar7);
        }
        _objc_release(puVar7);
        puVar13 = puVar12;
        func_0x00010bf51e00();
        _objc_release(param_5);
        goto LAB_106344ba8;
      }
    }
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c23b380(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010c0e00e0(puVar13,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    if (puVar12 != (undefined8 *)0x0) {
      puVar7 = PTR_PTR_1126c9410;
      func_0x00010c23b380(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010c0e00e0(puVar13,param_4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      unaff_d8 = (double)(float)CONCAT13(in_register_00005003,
                                         CONCAT12(in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)));
      _objc_release(puVar12);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c9410;
      func_0x00010c23b3a0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010c0e00e0(puVar13,param_4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      unaff_d9 = (double)(float)CONCAT13(in_register_00005003,
                                         CONCAT12(in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)));
      uVar25 = 0;
      _objc_release(puVar12);
      _objc_release(puVar7);
      in_register_00005028 = (undefined1)uVar25;
      in_register_00005029 = (undefined1)((ulong)uVar25 >> 8);
      in_register_0000502a = (undefined1)((ulong)uVar25 >> 0x10);
      in_register_0000502b = (undefined1)((ulong)uVar25 >> 0x18);
      in_register_0000502c = (undefined1)((ulong)uVar25 >> 0x20);
      in_register_0000502d = (undefined1)((ulong)uVar25 >> 0x28);
      in_register_0000502e = (undefined1)((ulong)uVar25 >> 0x30);
      in_register_0000502f = (undefined1)((ulong)uVar25 >> 0x38);
      in_b1 = SUB81(unaff_d9,0);
      in_register_00005021 = (undefined1)((ulong)unaff_d9 >> 8);
      in_register_00005022 = (undefined1)((ulong)unaff_d9 >> 0x10);
      in_register_00005023 = (undefined1)((ulong)unaff_d9 >> 0x18);
      in_register_00005024 = (undefined1)((ulong)unaff_d9 >> 0x20);
      in_register_00005025 = (undefined1)((ulong)unaff_d9 >> 0x28);
      in_register_00005026 = (undefined1)((ulong)unaff_d9 >> 0x30);
      in_register_00005027 = (undefined1)((ulong)unaff_d9 >> 0x38);
      func_0x00010bebbea0(param_3);
    }
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c0b4de0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010c0e00e0(puVar13,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    if (puVar12 != (undefined8 *)0x0) {
      puVar7 = PTR_PTR_1126c9410;
      func_0x00010c0b4de0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010c0e00e0(puVar13,param_4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bf1f3c0();
      *(char *)((long)param_3 + (long)_DAT_112745dd4) = (char)puVar6;
      _objc_release(puVar12);
      _objc_release(puVar7);
    }
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    in_register_00005008 = 0;
    in_register_00005009 = 0;
    in_register_0000500a = 0;
    in_register_0000500b = 0;
    in_register_0000500c = 0;
    in_register_0000500d = 0;
    in_register_0000500e = 0;
    in_register_0000500f = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    puVar12 = param_3;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)*puStack_120;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if ((undefined8 *)*puStack_120 != unaff_x23) {
            _objc_enumerationMutation(puVar12);
          }
          func_0x00010bf79560(*(undefined8 *)(lStack_128 + (long)puVar16 * 8),param_4,puVar13);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar6 != puVar16);
        puVar6 = puVar12;
        func_0x00010bf52a60(puVar12,param_4,&uStack_130,auStack_e8,0x10);
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(puVar12);
    unaff_x21 = puVar13;
    func_0x00010c0d3c80();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c1406c0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(unaff_x21,param_4,0,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c1406e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)0x0;
    func_0x00010c1d0640(unaff_x21,param_4,0,puVar7);
    _objc_release(puVar7);
    unaff_x22 = unaff_x21;
    func_0x00010bf51e00();
    _objc_release(puVar13);
    puVar6 = unaff_x22;
    func_0x00010bf51e00();
    uVar25 = *(undefined8 *)((long)param_3 + (long)_DAT_112745dd8);
    *(undefined8 **)((long)param_3 + (long)_DAT_112745dd8) = puVar6;
    _objc_release(uVar25);
    _objc_release(unaff_x21);
    puVar6 = unaff_x22;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106344e8c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)(long)_DAT_112745cf4;
  puVar16 = puVar12;
  ppuStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = puVar13;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c0eb1c0(*(undefined8 *)((long)puVar6 + (long)puVar15));
  uStack_268 = CONCAT17(in_register_0000500f,
                        CONCAT16(in_register_0000500e,
                                 CONCAT15(in_register_0000500d,
                                          CONCAT14(in_register_0000500c,
                                                   CONCAT13(in_register_0000500b,
                                                            CONCAT12(in_register_0000500a,
                                                                     CONCAT11(in_register_00005009,
                                                                              in_register_00005008))
                                                           )))));
  dStack_270 = (double)CONCAT17(in_register_00005007,
                                CONCAT16(in_register_00005006,
                                         CONCAT15(in_register_00005005,
                                                  CONCAT14(in_register_00005004,
                                                           CONCAT13(in_register_00005003,
                                                                    CONCAT12(in_register_00005002,
                                                                             CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  uStack_288 = CONCAT17(in_register_0000502f,
                        CONCAT16(in_register_0000502e,
                                 CONCAT15(in_register_0000502d,
                                          CONCAT14(in_register_0000502c,
                                                   CONCAT13(in_register_0000502b,
                                                            CONCAT12(in_register_0000502a,
                                                                     CONCAT11(in_register_00005029,
                                                                              in_register_00005028))
                                                           )))));
  dStack_290 = (double)CONCAT17(in_register_00005027,
                                CONCAT16(in_register_00005026,
                                         CONCAT15(in_register_00005025,
                                                  CONCAT14(in_register_00005024,
                                                           CONCAT13(in_register_00005023,
                                                                    CONCAT12(in_register_00005022,
                                                                             CONCAT11(
                                                  in_register_00005021,in_b1)))))));
  puVar13 = puVar6;
  dStack_280 = param_2;
  dStack_260 = param_1;
  uStack_258 = in_register_00005048;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar13;
  func_0x00010c0da1c0();
  puVar9 = puVar13;
  if (puVar8 == (undefined8 *)0x0) {
    _objc_release();
  }
  else {
    unaff_x22 = puVar6;
    func_0x00010c230b40();
    _objc_release();
    if (((ulong)unaff_x22 & 1) == 0) {
      puVar9 = *(undefined8 **)((long)puVar6 + (long)puVar15);
      func_0x00010c0f0c40();
      dStack_260 = dStack_260 +
                   (double)CONCAT17(in_register_00005007,
                                    CONCAT16(in_register_00005006,
                                             CONCAT15(in_register_00005005,
                                                      CONCAT14(in_register_00005004,
                                                               CONCAT13(in_register_00005003,
                                                                        CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
      uStack_258 = 0;
    }
  }
  pdVar1 = (double *)((long)puVar6 + (long)_DAT_112745e10);
  dVar3 = pdVar1[1];
  dVar2 = *pdVar1;
  uVar17 = SUB81(dVar2,0);
  uVar18 = (undefined1)((ulong)dVar2 >> 8);
  uVar19 = (undefined1)((ulong)dVar2 >> 0x10);
  uVar20 = (undefined1)((ulong)dVar2 >> 0x18);
  uVar21 = (undefined1)((ulong)dVar2 >> 0x20);
  uVar22 = (undefined1)((ulong)dVar2 >> 0x28);
  uVar23 = (undefined1)((ulong)dVar2 >> 0x30);
  uVar24 = (undefined1)((ulong)dVar2 >> 0x38);
  dVar5 = pdVar1[3];
  dVar4 = pdVar1[2];
  *pdVar1 = dStack_270;
  pdVar1[1] = dStack_290;
  pdVar1[2] = dStack_260;
  pdVar1[3] = dStack_280;
  if ((int)puVar12 != 0) {
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar17 = 0;
    if ((byte)((~-(dStack_270 == dVar2) & 1U) + (~-(dStack_290 == dVar3) & 2U) +
              (~-(dStack_260 == dVar4) & 4U) + (~-(dStack_280 == dVar5) & 8U)) != '\0') {
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      lStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      puStack_230 = (undefined8 *)0x0;
      func_0x00010be48b00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = &uStack_240;
      puVar8 = puVar6;
      func_0x00010bf52a60();
      if (puVar8 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)*puStack_230;
        do {
          unaff_x22 = (undefined8 *)0x0;
          do {
            if ((undefined8 *)*puStack_230 != puVar13) {
              _objc_enumerationMutation(puVar6);
            }
            func_0x00010c0f1c00(*(undefined8 *)(lStack_238 + (long)unaff_x22 * 8));
            unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
          } while (puVar8 != unaff_x22);
          puVar16 = &uStack_240;
          puVar8 = puVar6;
          func_0x00010bf52a60();
          puVar12 = (undefined8 *)0x0;
        } while (puVar8 != (undefined8 *)0x0);
      }
      puVar9 = puVar6;
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_3b0;
  pcStack_298 = FUN_10634504c;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_2e0 = unaff_d9;
  dStack_2d8 = unaff_d8;
  ppuStack_2d0 = unaff_x24;
  puStack_2c8 = puVar15;
  puStack_2c0 = unaff_x22;
  puStack_2b8 = puVar13;
  puStack_2b0 = puVar12;
  puStack_2a8 = puVar6;
  ppuStack_2a0 = &puStack_140;
  if (-1 < *(long *)((long)puVar9 + (long)_DAT_112745d5c)) {
    func_0x00010bdced60(puVar9,param_4,puVar16);
  }
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  puStack_3a0 = (undefined8 *)0x0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf52a60();
  if (puVar12 != (undefined8 *)0x0) {
    unaff_x22 = (undefined8 *)*puStack_3a0;
    do {
      puVar15 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_3a0 != unaff_x22) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c28c0e0(*(undefined8 *)(lStack_3a8 + (long)puVar15 * 8),param_4,puVar16);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar12 != puVar15);
      puVar12 = puVar9;
      puVar8 = &uStack_3b0;
      func_0x00010bf52a60();
      puVar13 = (undefined8 *)0x0;
    } while (puVar12 != (undefined8 *)0x0);
  }
  puVar12 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_3b8 = FUN_10634517c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)((long)puVar12 + (long)_DAT_112745cf0);
  dStack_400 = unaff_d9;
  uStack_3f8 = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
  ppuStack_3f0 = unaff_x24;
  puStack_3e8 = puVar15;
  puStack_3e0 = unaff_x22;
  puStack_3d8 = puVar13;
  puStack_3d0 = puVar9;
  puStack_3c8 = puVar16;
  pppuStack_3c0 = &ppuStack_2a0;
  func_0x00010c2bf0e0();
  if ((uVar10 & 1) == 0) {
    uVar10 = *(ulong *)((long)puVar12 + (long)_DAT_112745d10);
    func_0x00010c0f1520();
    if (((uVar10 & 1) == 0) && (*(char *)((long)puVar12 + (long)_DAT_112745db8) != '\x01'))
    goto LAB_106345224;
  }
  uVar25 = *(undefined8 *)((long)puVar12 + (long)_DAT_112745d94);
  func_0x00010c0fc240(uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar25);
LAB_106345224:
  if (*(char *)((long)puVar12 + (long)_DAT_112745d68) == '\x01') {
    func_0x00010bee3e00(puVar12,param_4,puVar8);
    puVar6 = puVar12;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010c06b7e0();
    _objc_release(puVar6);
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    lStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    plStack_540 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar14 = *plStack_540;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_540 != lVar14) {
            _objc_enumerationMutation(puVar12);
          }
          if ((int)puVar13 != 0) {
            func_0x00010bf7a4c0(*(undefined8 *)(lStack_548 + (long)puVar16 * 8));
          }
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar6 != puVar16);
        puVar6 = puVar12;
        func_0x00010bf52a60(puVar12,param_4,&uStack_550,auStack_488,0x10);
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  else {
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    lStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    plStack_580 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar12;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar14 = *plStack_580;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_580 != lVar14) {
            _objc_enumerationMutation(puVar12);
          }
          func_0x00010c28c080(*(undefined8 *)(lStack_588 + (long)puVar13 * 8),param_4,puVar8);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar6 != puVar13);
        puVar6 = puVar12;
        func_0x00010bf52a60(puVar12,param_4,&uStack_590,auStack_508,0x10);
      } while (puVar6 != (undefined8 *)0x0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return puVar12;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)((long)puVar12 + (long)_DAT_112745dcc);
  func_0x00010c0b4e40(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c252440();
  _objc_release(lVar11);
  return (undefined8 *)(ulong)(lVar14 - 1U < 3);
}



/* Entry: 106344e8c; end: 10634504b; -[SCOperaPageViewController _updatePageSafeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106344e8c(double param_1,double param_2,ulong param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_b1;
  undefined1 in_register_00005021;
  undefined1 in_register_00005022;
  undefined1 in_register_00005023;
  undefined1 in_register_00005024;
  undefined1 in_register_00005025;
  undefined1 in_register_00005026;
  undefined1 in_register_00005027;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3d8 [128];
  undefined1 auStack_358 [128];
  long lStack_2d8;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_1b8;
  double dStack_130;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112745cf4;
  puVar11 = param_5;
  func_0x00010c0eb1c0(*(undefined8 *)(param_3 + lVar14));
  dVar2 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  dVar5 = (double)CONCAT17(in_register_00005027,
                           CONCAT16(in_register_00005026,
                                    CONCAT15(in_register_00005025,
                                             CONCAT14(in_register_00005024,
                                                      CONCAT13(in_register_00005023,
                                                               CONCAT12(in_register_00005022,
                                                                        CONCAT11(
                                                  in_register_00005021,in_b1)))))));
  uVar8 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010c0da1c0();
  dStack_130 = param_1;
  if (uVar13 == 0) {
    _objc_release();
  }
  else {
    uVar13 = param_3;
    func_0x00010c230b40();
    _objc_release();
    if ((uVar13 & 1) == 0) {
      uVar8 = *(ulong *)(param_3 + lVar14);
      func_0x00010c0f0c40();
      dStack_130 = param_1 + (double)CONCAT17(in_register_00005007,
                                              CONCAT16(in_register_00005006,
                                                       CONCAT15(in_register_00005005,
                                                                CONCAT14(in_register_00005004,
                                                                         CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                             );
    }
  }
  pdVar1 = (double *)(param_3 + (long)_DAT_112745e10);
  dVar4 = pdVar1[1];
  dVar3 = *pdVar1;
  dVar7 = pdVar1[3];
  dVar6 = pdVar1[2];
  *pdVar1 = dVar2;
  pdVar1[1] = dVar5;
  pdVar1[2] = dStack_130;
  pdVar1[3] = param_2;
  if (((int)param_5 != 0) &&
     ((byte)((~-(dVar2 == dVar3) & 1U) + (~-(dVar5 == dVar4) & 2U) +
            (~-(dStack_130 == dVar6) & 4U) + (~-(param_2 == dVar7) & 8U)) != '\0')) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_110;
    uVar8 = param_3;
    func_0x00010bf52a60();
    if (uVar8 != 0) {
      lVar14 = *plStack_100;
      do {
        uVar13 = 0;
        do {
          if (*plStack_100 != lVar14) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010c0f1c00(*(undefined8 *)(lStack_108 + uVar13 * 8));
          uVar13 = uVar13 + 1;
        } while (uVar8 != uVar13);
        puVar11 = &uStack_110;
        uVar8 = param_3;
        func_0x00010bf52a60();
      } while (uVar8 != 0);
    }
    _objc_release();
    uVar8 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar8;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_280;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (-1 < *(long *)(uVar8 + (long)_DAT_112745d5c)) {
    func_0x00010bdced60(uVar8,param_4,puVar11);
  }
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010bf52a60();
  if (uVar13 != 0) {
    lVar14 = *plStack_270;
    do {
      uVar15 = 0;
      do {
        if (*plStack_270 != lVar14) {
          _objc_enumerationMutation(uVar8);
        }
        func_0x00010c28c0e0(*(undefined8 *)(lStack_278 + uVar15 * 8),param_4,puVar11);
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
      uVar13 = uVar8;
      puVar12 = &uStack_280;
      func_0x00010bf52a60();
    } while (uVar13 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return uVar8;
  }
  ___stack_chk_fail();
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(ulong *)(uVar8 + (long)_DAT_112745cf0);
  func_0x00010c2bf0e0();
  if ((uVar13 & 1) == 0) {
    uVar13 = *(ulong *)(uVar8 + (long)_DAT_112745d10);
    func_0x00010c0f1520();
    if (((uVar13 & 1) == 0) && (*(char *)(uVar8 + (long)_DAT_112745db8) != '\x01'))
    goto LAB_106345224;
  }
  uVar9 = *(undefined8 *)(uVar8 + (long)_DAT_112745d94);
  func_0x00010c0fc240(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar9);
LAB_106345224:
  if (*(char *)(uVar8 + (long)_DAT_112745d68) == '\x01') {
    func_0x00010bee3e00(uVar8,param_4,puVar12);
    uVar13 = uVar8;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c06b7e0();
    _objc_release(uVar13);
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    lStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    plStack_410 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010bf52a60();
    if (uVar13 != 0) {
      lVar14 = *plStack_410;
      do {
        uVar16 = 0;
        do {
          if (*plStack_410 != lVar14) {
            _objc_enumerationMutation(uVar8);
          }
          if ((int)uVar15 != 0) {
            func_0x00010bf7a4c0(*(undefined8 *)(lStack_418 + uVar16 * 8));
          }
          uVar16 = uVar16 + 1;
        } while (uVar13 != uVar16);
        uVar13 = uVar8;
        func_0x00010bf52a60(uVar8,param_4,&uStack_420,auStack_358,0x10);
      } while (uVar13 != 0);
    }
  }
  else {
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    plStack_450 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010bf52a60();
    if (uVar13 != 0) {
      lVar14 = *plStack_450;
      do {
        uVar15 = 0;
        do {
          if (*plStack_450 != lVar14) {
            _objc_enumerationMutation(uVar8);
          }
          func_0x00010c28c080(*(undefined8 *)(lStack_458 + uVar15 * 8),param_4,puVar12);
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
        uVar13 = uVar8;
        func_0x00010bf52a60(uVar8,param_4,&uStack_460,auStack_3d8,0x10);
      } while (uVar13 != 0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(uVar8 + (long)_DAT_112745dcc);
  func_0x00010c0b4e40(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar10;
  func_0x00010c252440();
  _objc_release(lVar10);
  return (ulong)(lVar14 - 1U < 3);
}



/* Entry: 10634504c; end: 10634517b; -[SCOperaPageViewController pageDidScrollToVerticalOffset:relativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10634504c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [128];
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (-1 < *(long *)(param_2 + (long)_DAT_112745d5c)) {
    func_0x00010bdced60(param_1,param_2,param_3,param_4);
  }
  uVar8 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      uVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = param_1;
        func_0x00010c28c0e0(*(undefined8 *)(lStack_118 + uVar6 * 8),param_3,param_4);
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
      uVar1 = param_2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_2 + (long)_DAT_112745cf0);
  func_0x00010c2bf0e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + (long)_DAT_112745d10);
    func_0x00010c0f1520();
    if (((uVar1 & 1) == 0) && (*(char *)(param_2 + (long)_DAT_112745db8) != '\x01'))
    goto LAB_106345224;
  }
  uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112745d94);
  func_0x00010c0fc240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
LAB_106345224:
  if (*(char *)(param_2 + (long)_DAT_112745d68) == '\x01') {
    func_0x00010bee3e00(uVar8,param_2,param_3,puVar4);
    uVar1 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c06b7e0();
    _objc_release(uVar1);
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar5 = *plStack_2b0;
      do {
        uVar7 = 0;
        do {
          if (*plStack_2b0 != lVar5) {
            _objc_enumerationMutation(param_2);
          }
          if ((int)uVar6 != 0) {
            func_0x00010bf7a4c0(uVar8,*(undefined8 *)(lStack_2b8 + uVar7 * 8));
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
        uVar1 = param_2;
        func_0x00010bf52a60(param_2,param_3,&uStack_2c0,auStack_1f8,0x10);
      } while (uVar1 != 0);
    }
  }
  else {
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    lStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar5 = *plStack_2f0;
      do {
        uVar6 = 0;
        do {
          if (*plStack_2f0 != lVar5) {
            _objc_enumerationMutation(param_2);
          }
          func_0x00010c28c080(uVar8,*(undefined8 *)(lStack_2f8 + uVar6 * 8),param_3,puVar4);
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        uVar1 = param_2;
        func_0x00010bf52a60(param_2,param_3,&uStack_300,auStack_278,0x10);
      } while (uVar1 != 0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_2 + (long)_DAT_112745dcc);
  func_0x00010c0b4e40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  return (ulong)(lVar5 - 1U < 3);
}



/* Entry: 10634517c; end: 1063453df; -[SCOperaPageViewController pageDidScrollToHorizontalOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10634517c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_2 + (long)_DAT_112745cf0);
  func_0x00010c2bf0e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + (long)_DAT_112745d10);
    func_0x00010c0f1520();
    if (((uVar1 & 1) == 0) && (*(char *)(param_2 + (long)_DAT_112745db8) != '\x01'))
    goto LAB_106345224;
  }
  uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112745d94);
  func_0x00010c0fc240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
LAB_106345224:
  if (*(char *)(param_2 + (long)_DAT_112745d68) == '\x01') {
    func_0x00010bee3e00(param_1,param_2,param_3,param_4);
    uVar1 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c06b7e0();
    _objc_release(uVar1);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar4 = *plStack_190;
      do {
        uVar5 = 0;
        do {
          if (*plStack_190 != lVar4) {
            _objc_enumerationMutation(param_2);
          }
          if ((int)uVar6 != 0) {
            func_0x00010bf7a4c0(param_1,*(undefined8 *)(lStack_198 + uVar5 * 8));
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
        uVar1 = param_2;
        func_0x00010bf52a60(param_2,param_3,&uStack_1a0,auStack_d8,0x10);
      } while (uVar1 != 0);
    }
  }
  else {
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar4 = *plStack_1d0;
      do {
        uVar6 = 0;
        do {
          if (*plStack_1d0 != lVar4) {
            _objc_enumerationMutation(param_2);
          }
          func_0x00010c28c080(param_1,*(undefined8 *)(lStack_1d8 + uVar6 * 8),param_3,param_4);
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        uVar1 = param_2;
        func_0x00010bf52a60(param_2,param_3,&uStack_1e0,auStack_158,0x10);
      } while (uVar1 != 0);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_2 + (long)_DAT_112745dcc);
  func_0x00010c0b4e40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252440();
  _objc_release(lVar3);
  return (ulong)(lVar4 - 1U < 3);
}



/* Entry: 1063453e0; end: 10634542f; -[SCOperaPageViewController isLongPressGestureRecognized] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1063453e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112745dcc);
  func_0x00010c0b4e40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_release(lVar1);
  return lVar2 - 1U < 3;
}



/* Entry: 106345430; end: 1063454a3; -[SCOperaPageViewController timeSinceMostRecentPageOpenEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106345430(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_2 + _DAT_112745de8) == 0) {
    param_1 = 0xbff0000000000000;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 1063454a4; end: 1063454f7; -[SCOperaPageViewController _shouldSetupAutoAdvanceTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063454a4(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745d10;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar2);
  func_0x00010bf11280();
  if ((iVar1 != 0) && (func_0x00010bf11300(*(undefined8 *)(param_2 + lVar2)), param_1 != 0.0)) {
    func_0x00010bf1d940(param_2);
  }
  return;
}



/* Entry: 1063454f8; end: 106345563; -[SCOperaPageViewController _pauseAutoAdvanceTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063454f8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745e14;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar3);
  func_0x00010c082b20();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bfb0120(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    *(undefined8 *)(param_2 + _DAT_112745e18) = param_1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bddf550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__cleanupAutoAdvanceTimer_1125556f0);
    return;
  }
  return;
}



/* Entry: 106345564; end: 1063455bf; -[SCOperaPageViewController _resumeAutoAdvanceTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106345564(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb59c0();
  if (((int)lVar1 != 0) && (lVar1 = (long)_DAT_112745e18, *(double *)(param_1 + lVar1) != 0.0)) {
    func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112745e14));
                    /* WARNING: Could not recover jumptable at 0x00010bdeb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),param_1,
               PTR_s__createAutoAdvanceTimerWithInter_1125585f8);
    return;
  }
  return;
}



/* Entry: 1063455c0; end: 1063455f7; -[SCOperaPageViewController restartTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063455c0(undefined8 param_1,long param_2)

{
  func_0x00010bf11300(*(undefined8 *)(param_2 + _DAT_112745d10));
  *(undefined8 *)(param_2 + _DAT_112745e18) = param_1;
  return;
}



/* Entry: 1063455f8; end: 106345683; -[SCOperaPageViewController _setupAutoAdvanceTimerIfEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063455f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + _DAT_112745e14) == 0) &&
     (lVar1 = param_1, func_0x00010beb59c0(), (int)lVar1 != 0)) {
    if ((*(byte *)(param_1 + _DAT_112745de0) & 1) == 0) {
      *(undefined8 *)(param_1 + _DAT_112745e18) = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112745df0);
    *(undefined **)(param_1 + _DAT_112745df0) = PTR____kCFBooleanFalse_11034ab60;
    _objc_release(uVar2);
    func_0x00010bf11300(*(undefined8 *)(param_1 + _DAT_112745d10));
                    /* WARNING: Could not recover jumptable at 0x00010bdeb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createAutoAdvanceTimerWithInter_1125585f8)
    ;
    return;
  }
  return;
}



/* Entry: 106345684; end: 106345717; -[SCOperaPageViewController _createAutoAdvanceTimerWithInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106345684(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s_autoAdvanceTimerDidFire_1125305a8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745e14);
  *(undefined **)(param_1 + _DAT_112745e14) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106345718; end: 10634574b; -[SCOperaPageViewController _cleanupAutoAdvanceTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106345718(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745e14;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10634574c; end: 10634577f; -[SCOperaPageViewController _cleanupProgressUpdatesObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634574c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745d7c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106345780; end: 1063458ab; -[SCOperaPageViewController updatePropertiesWithLooping:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106345780(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 uVar37;
  long lVar38;
  
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c0c5840();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010c2708e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf7e940(param_1);
  uVar37 = SUB81(puVar5,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar38) {
    return;
  }
  ___stack_chk_fail();
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4[_DAT_112745e04] = uVar37;
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c29efc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  func_0x00010bf7e940(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar38) {
    return;
  }
  ___stack_chk_fail();
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined **)(puVar2 + _DAT_112745cf0);
  func_0x00010beeeb00();
  if ((int)puVar5 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010beeea20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297120();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010bf0a240();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9410;
    func_0x00010bf39400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9410;
    func_0x00010c283060();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c9410;
    func_0x00010c132360();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c9410;
    func_0x00010c273720();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c9410;
    func_0x00010c29f0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126c9410;
    func_0x00010c2708e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c9410;
    func_0x00010c0fc2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126c9410;
    func_0x00010c074000();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR_PTR_1126c9410;
    func_0x00010c26cc80();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR_PTR_1126c9410;
    func_0x00010c26cca0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR_PTR_1126c9410;
    func_0x00010c25a2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR_PTR_1126c9410;
    func_0x00010c0b5540();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR_PTR_1126c9410;
    func_0x00010c112080();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = puVar5;
    func_0x00010c0d3c80();
    uVar35 = *(undefined8 *)(puVar2 + _DAT_112745d10);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar35;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar35);
    uVar35 = uVar36;
    func_0x00010bf4b900();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    if ((int)uVar35 == 0) {
      func_0x00010c270900(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c26e620();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c235980(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c238dc0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c23a4e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c237680(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c0683e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf51e00();
    func_0x00010bf7e940(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar36);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar38) {
    return;
  }
  ___stack_chk_fail();
  uVar35 = *(undefined8 *)(puVar5 + _DAT_112745d94);
  func_0x00010c0ce7a0(uVar35);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar35,PTR_s_setZoomScale_animated__112667958,1);
  return;
}



/* Entry: 1063458ac; end: 106345997; -[SCOperaPageViewController updatePropertiesWithViewerIsDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063458ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 uVar37;
  
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + _DAT_112745e04) = param_3;
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c29efc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  func_0x00010bf7e940(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar36) {
    return;
  }
  ___stack_chk_fail();
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined **)(puVar2 + _DAT_112745cf0);
  func_0x00010beeeb00();
  if ((int)puVar3 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010beeea20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297120();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010bf0a240();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c9410;
    func_0x00010bf39400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9410;
    func_0x00010c283060();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126c9410;
    func_0x00010c132360();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126c9410;
    func_0x00010c273720();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c9410;
    func_0x00010c29f0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126c9410;
    func_0x00010c2708e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126c9410;
    func_0x00010c0fc2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126c9410;
    func_0x00010c074000();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR_PTR_1126c9410;
    func_0x00010c26cc80();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR_PTR_1126c9410;
    func_0x00010c26cca0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR_PTR_1126c9410;
    func_0x00010c25a2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR_PTR_1126c9410;
    func_0x00010c0b5540();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR_PTR_1126c9410;
    func_0x00010c112080();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c0d3c80();
    uVar35 = *(undefined8 *)(puVar2 + _DAT_112745d10);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar35;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar35);
    uVar35 = uVar37;
    func_0x00010bf4b900();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    if ((int)uVar35 == 0) {
      func_0x00010c270900(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c26e620();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c235980(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c238dc0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c23a4e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c237680(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c0683e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010bf51e00();
    func_0x00010bf7e940(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar37);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar36) {
    return;
  }
  ___stack_chk_fail();
  uVar37 = *(undefined8 *)(puVar3 + _DAT_112745d94);
  func_0x00010c0ce7a0(uVar37);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar37,PTR_s_setZoomScale_animated__112667958,1);
  return;
}



/* Entry: 106345998; end: 10634614b; -[SCOperaPageViewController _updatePropertiesWithPageDidShrink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106345998(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_112745cf0);
  func_0x00010beeeb00();
  if ((int)puVar1 != 0) {
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010beeec40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010beeea20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297120();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9410;
    func_0x00010bf0a240();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c9410;
    func_0x00010bf39400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9410;
    func_0x00010c283060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126c9410;
    func_0x00010c132360();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126c9410;
    func_0x00010c273720();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126c9410;
    func_0x00010c29f0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126c9410;
    func_0x00010c2708e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR_PTR_1126c9410;
    func_0x00010c0fc2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126c9410;
    func_0x00010c074000();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR_PTR_1126c9410;
    func_0x00010c26cc80();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR_PTR_1126c9410;
    func_0x00010c26cca0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR_PTR_1126c9410;
    func_0x00010c25a2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = PTR_PTR_1126c9410;
    func_0x00010c0b5540();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR_PTR_1126c9410;
    func_0x00010c112080();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c0d3c80();
    uVar34 = *(undefined8 *)(param_1 + _DAT_112745d10);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar34;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar34);
    uVar34 = uVar35;
    func_0x00010bf4b900();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    if ((int)uVar34 == 0) {
      func_0x00010c270900(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c26e620();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c235980(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c238dc0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c23a4e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c237680(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9410;
    func_0x00010c0683e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf51e00();
    func_0x00010bf7e940(param_1);
    _objc_release(puVar2);
    _objc_release(uVar35);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar36) {
    return;
  }
  ___stack_chk_fail();
  uVar34 = *(undefined8 *)(puVar1 + _DAT_112745d94);
  func_0x00010c0ce7a0(uVar34);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar34,PTR_s_setZoomScale_animated__112667958,1);
  return;
}



/* Entry: 10634614c; end: 10634617f; -[SCOperaPageViewController _resetZoomToMinimumIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634614c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745d94);
  func_0x00010c0ce7a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c227cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setZoomScale_animated__112667958,1);
  return;
}



/* Entry: 106346180; end: 106346183; -[SCOperaPageViewController _currentTimeStamp] */

double FUN_106346180(long param_1)

{
  ulong uVar1;
  
  func_0x000107c6106c();
  if (lRam00000001138473a0 != -1) {
    func_0x00010002a2fc(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 106346184; end: 1063461ef; -[SCOperaPageViewController _layersContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106346184(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745d80;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_112745d94);
  if (lVar1 != lVar2) {
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063461f0; end: 106346243; -[SCOperaPageViewController _pageGestureContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063461f0(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112745d78) & 1) == 0) {
    param_1 = *(long *)(param_1 + _DAT_112745d80);
    _objc_retain(param_1);
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106346244; end: 106346357; -[SCOperaPageViewController _updateFloatingLayersForCurrentDisplayingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106346244(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010be6f380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb2da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bed8260(param_1);
        puVar12 = puVar12 + 1;
      } while (puVar1 != puVar12);
      puVar1 = puVar2;
      puVar8 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c27dd80(puVar8);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112745e00;
    puVar1 = puVar2 + lVar13;
    _objc_loadWeakRetained();
    puVar12 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar12 == (undefined1 *)0x0) {
      uVar10 = *(undefined8 *)(puVar2 + _DAT_112745d00);
      puVar5 = PTR_PTR_1126b2638;
      func_0x00010bef85c0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b6008;
      func_0x00010bfb2d80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    else {
      puVar1 = puVar2;
      func_0x00010beb6e20();
      if (((int)puVar1 != 0) &&
         (puVar1 = (undefined1 *)puVar8, func_0x00010c27dd80(), puVar1 == (undefined1 *)0x12)) {
        uVar10 = *(undefined8 *)(puVar2 + _DAT_112745d00);
        puVar5 = PTR_PTR_1126b2638;
        func_0x00010c285da0(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b6008;
        func_0x00010bfb2d80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar10);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      puVar1 = puVar2 + lVar13;
      _objc_loadWeakRetained();
      puVar12 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar12;
      _objc_opt_respondsToSelector();
      _objc_release(puVar12);
      _objc_release(puVar1);
      if (((ulong)puVar4 & 1) != 0) {
        puVar1 = puVar2 + lVar13;
        _objc_loadWeakRetained(puVar1);
        puVar12 = puVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e5120();
        _objc_release(puVar12);
        _objc_release(puVar1);
      }
      puVar1 = puVar2 + lVar13;
      _objc_loadWeakRetained(puVar1);
      puVar12 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b98a0();
      _objc_release(puVar12);
      _objc_release(puVar1);
    }
    puVar1 = puVar2 + lVar13;
    _objc_loadWeakRetained();
    puVar12 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    _objc_opt_respondsToSelector();
    _objc_release(puVar12);
    _objc_release(puVar1);
    if (((ulong)puVar4 & 1) != 0) {
      puVar2 = puVar2 + lVar13;
      _objc_loadWeakRetained();
      puVar1 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5120();
      _objc_release(puVar1);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      lVar11 = (long)_DAT_112745d10;
      lVar13 = *(long *)((long)puVar8 + lVar11);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar13);
      if (lVar9 == 0) {
        lVar13 = *(long *)((long)puVar8 + lVar11);
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar13);
        if (lVar9 == 0) {
          return (undefined1 *)0x0;
        }
        lVar9 = 0;
      }
      else {
        lVar9 = 2;
      }
      lVar13 = *(long *)((long)puVar8 + (long)_DAT_112745cfc);
      func_0x00010beeebe0(lVar13);
      return (undefined1 *)(ulong)(lVar13 == lVar9);
    }
    return (undefined1 *)puVar8;
  }
  return puVar2;
}



/* Entry: 106346358; end: 1063466df; -[SCOperaPageViewController _updateFloatingLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106346358(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27dd80(param_3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112745e00;
  lVar10 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar8 = lVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar10);
  if (lVar8 == 0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112745d00);
    puVar5 = PTR_PTR_1126b2638;
    func_0x00010bef85c0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b6008;
    func_0x00010bfb2d80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    lVar10 = param_1;
    func_0x00010beb6e20();
    if (((int)lVar10 != 0) && (uVar2 = param_3, func_0x00010c27dd80(), uVar2 == 0x12)) {
      uVar11 = *(undefined8 *)(param_1 + _DAT_112745d00);
      puVar5 = PTR_PTR_1126b2638;
      func_0x00010c285da0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b6008;
      func_0x00010bfb2d80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar11);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    uVar2 = param_1 + lVar12;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      lVar10 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar10);
      lVar8 = lVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5120();
      _objc_release(lVar8);
      _objc_release(lVar10);
    }
    lVar10 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar10);
    lVar8 = lVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b98a0();
    _objc_release(lVar8);
    _objc_release(lVar10);
  }
  uVar2 = param_1 + lVar12;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    param_1 = param_1 + lVar12;
    _objc_loadWeakRetained();
    lVar10 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5120();
    _objc_release(lVar10);
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar9 = (long)_DAT_112745d10;
    lVar8 = *(long *)(param_3 + lVar9);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar8);
    if (lVar10 == 0) {
      lVar8 = *(long *)(param_3 + lVar9);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar8);
      if (lVar10 == 0) {
        return 0;
      }
      lVar10 = 0;
    }
    else {
      lVar10 = 2;
    }
    lVar8 = *(long *)(param_3 + (long)_DAT_112745cfc);
    func_0x00010beeebe0(lVar8);
    return (ulong)(lVar8 == lVar10);
  }
  return param_3;
}



/* Entry: 1063466e0; end: 1063467b7; -[SCOperaPageViewController _shouldUpdateActionMenuStyleVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1063466e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745d10;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return false;
    }
    lVar2 = 0;
  }
  else {
    lVar2 = 2;
  }
  lVar1 = *(long *)(param_1 + _DAT_112745cfc);
  func_0x00010beeebe0(lVar1);
  return lVar1 == lVar2;
}



/* Entry: 1063467b8; end: 106346893; -[SCOperaPageViewController _shouldSetPinchGestureTargetForLayer:viewController:] */

undefined4 FUN_1063467b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c27dd80();
  if ((((lVar2 == 5) || (lVar2 = param_3, func_0x00010c27dd80(), lVar2 == 2)) ||
      (lVar2 = param_3, func_0x00010c27dd80(), lVar2 == 0x14)) ||
     (lVar2 = param_3, func_0x00010c27dd80(), lVar2 == 0x15)) {
    uVar3 = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010c27dd80();
    puVar1 = PTR_DAT_1126a5370;
    if (lVar2 == 0x19) {
      _objc_retain(param_4);
      lVar2 = param_4;
      func_0x00010010fab4(param_4,puVar1);
      _objc_release(param_4);
      uVar3 = 0;
      if (param_4 != 0) {
        uVar3 = (undefined4)lVar2;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106346894; end: 10634696f; -[SCOperaPageViewController _layerVCsOnPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106346894(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745e00;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bf38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
  else {
    lVar2 = param_1;
    func_0x00010bee7960();
    lVar1 = param_1;
    func_0x00010bf38f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar2 != 0) {
      param_1 = param_1 + lVar3;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf09f80(lVar1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(lVar1);
      lVar1 = lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106346970; end: 106346a0f; -[SCOperaPageViewController _validateFloatingLayerVCs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106346970(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + _DAT_112745e00;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf00320(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = lVar3;
  func_0x00010bf529e0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar4 == 0;
}



/* Entry: 106346a10; end: 106346a6f; -[SCOperaPageViewController _notifyLayerOfViewWillFullyAppearIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106346a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112745d1c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010c29e900(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106346a70; end: 106346acf; -[SCOperaPageViewController _notifyLayerOfViewDidFullyAppearIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106346a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112745d20;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010c29c980(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106346ad0; end: 106346c7b; -[SCOperaPageViewController _showBlur] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106346ad0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112745db0;
  lVar6 = *(long *)(param_1 + lVar9);
  if (lVar6 == 0) {
    lVar6 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    if ((int)lVar3 == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = &PTR____CFConstantStringClassReference_110e4b6d8;
      func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e4b6d8,
                          &PTR____CFConstantStringClassReference_110e34d78,0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126c9dd8;
    _objc_alloc(PTR_PTR_1126c9dd8);
    func_0x00010c051480();
    puVar5 = PTR_PTR_1126c9de0;
    _objc_alloc();
    func_0x00010c001640();
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar5;
    _objc_release(uVar7);
    if (*(char *)(param_1 + _DAT_112745d64) == '\x01') {
      func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_112745d80));
    }
    else {
      lVar6 = (long)_DAT_112745d94;
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
      _CGRectGetWidth();
      func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
      _CGRectGetHeight();
    }
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar9));
    _objc_release(puVar4);
    _objc_release(ppuVar8);
    lVar6 = *(long *)(param_1 + lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745d80),PTR_s_addSubview__11259c880,lVar6);
  return;
}



/* Entry: 106346c7c; end: 106346c8b; -[SCOperaPageViewController _hideBlur] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106346c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745db0),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 106346c8c; end: 10634715f; -[SCOperaPageViewController hideChrome:] */

void FUN_106346c8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf0a240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c0683e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c2708e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9410;
  func_0x00010c26e620();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9410;
  func_0x00010c23a4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9410;
  func_0x00010c23a500();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c9410;
  func_0x00010c237660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9410;
  func_0x00010c2376a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9410;
  func_0x00010c238da0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126c9410;
  func_0x00010c238de0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9410;
  func_0x00010c29f0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9410;
  func_0x00010c236900();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c9410;
  func_0x00010c236920();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126c9410;
  func_0x00010c235920();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126c9410;
  func_0x00010c2359a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126c9410;
  func_0x00010c25a2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126c9410;
  func_0x00010c25a2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(puVar29);
  func_0x00010bf03400(0x3fd3333340000000,puVar1);
  _objc_release(puVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf7e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar29 + 0x20),PTR_s_didUpdateViewProperties__1125bd3f8,
             *(undefined8 *)(puVar29 + 0x28));
  return;
}



/* Entry: 106347160; end: 10634716b;  */

void FUN_106347160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didUpdateViewProperties__1125bd3f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10634716c; end: 1063471cb; -[SCOperaPageViewController overridePauseStateToPause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634716c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112745df4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112745df4) = 1;
  lVar1 = param_1;
  func_0x00010be48b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 1063471cc; end: 1063471d3;  */

void FUN_1063471cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_overridePauseStateToPause_112619ae8);
  return;
}



/* Entry: 1063471d4; end: 106347233; -[SCOperaPageViewController overridePauseStateToResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063471d4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_112745df4) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112745df4) = 0;
    lVar1 = param_1;
    func_0x00010be48b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resume_11262ce90);
    return;
  }
  return;
}



/* Entry: 106347234; end: 10634723b;  */

void FUN_106347234(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_overridePauseStateToResume_112619af0);
  return;
}



/* Entry: 10634723c; end: 10634735f; -[SCOperaPageViewController seekTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10634723c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c157340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar1;
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  puStack_68 = puVar2;
  func_0x00010c157380();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5980;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_68,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c9de8;
  _objc_alloc_init();
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112745ddc);
  *(undefined **)(puVar1 + _DAT_112745ddc) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126c9df0;
  _objc_alloc();
  func_0x00010c04c0c0();
  uVar5 = *(undefined8 *)(puVar1 + _DAT_112745df8);
  *(undefined **)(puVar1 + _DAT_112745df8) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106347360; end: 1063473cf; -[SCOperaPageViewController _setupProgressUpdateTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106347360(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9de8;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745ddc);
  *(undefined **)(param_1 + _DAT_112745ddc) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c9df0;
  _objc_alloc();
  func_0x00010c04c0c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745df8);
  *(undefined **)(param_1 + _DAT_112745df8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1063473d0; end: 10634745f; -[SCOperaPageViewController _cleanupProgressUpdateTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063473d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745de0;
  uVar1 = 1;
  if (*(char *)(param_1 + lVar2) == '\0') {
    uVar1 = 2;
  }
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_112745ddc),param_2,uVar1);
  if ((*(byte *)(param_1 + lVar2) & 1) != 0) {
    return;
  }
  lVar2 = (long)_DAT_112745e24;
  func_0x00010c229220(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c218330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_112745df8),PTR_s_setTotalDuration__112663af0);
  return;
}



/* Entry: 106347460; end: 10634759f; -[SCOperaPageViewController _setPlaybackAnalyticsTrackerForLayers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106347460(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *unaff_x21;
  undefined **unaff_x22;
  long lVar9;
  undefined **unaff_x23;
  undefined **ppuVar10;
  undefined **unaff_x24;
  undefined1 *unaff_x25;
  long lVar11;
  undefined **unaff_x26;
  undefined *unaff_x27;
  undefined1 *puVar12;
  undefined1 *unaff_x28;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_3e8;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined1 *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 *puStack_398;
  undefined1 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2c0;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined1 *puStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined **ppuStack_180;
  undefined1 *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_120;
    unaff_x26 = &PTR_s_setWidthValue__112667000;
    unaff_x27 = &DAT_112745000;
    do {
      unaff_x22 = (undefined **)PTR_s_setupPlaybackAnalyticsTracker__112667e68;
      unaff_x28 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        ppuVar10 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,unaff_x22);
        if (((ulong)ppuVar10 & 1) != 0) {
          unaff_x24 = (undefined **)(param_1 + _DAT_112745d28);
          _objc_loadWeakRetained();
          func_0x00010c229100(unaff_x23);
          _objc_release(unaff_x24);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar2 != unaff_x28);
      puVar2 = param_3;
      func_0x00010bf52a60();
      unaff_x21 = (undefined *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  pcStack_138 = FUN_1063475a0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  ppuStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  ppuStack_170 = unaff_x24;
  ppuStack_168 = unaff_x23;
  ppuStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    unaff_x23 = (undefined **)*puStack_240;
    unaff_x24 = &PTR_s_setWidthValue__112667000;
    do {
      unaff_x21 = PTR_s_setupPlaybackAnalyticsTracker__112667e68;
      unaff_x25 = (undefined1 *)0x0;
      do {
        if ((undefined **)*puStack_240 != unaff_x23) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = *(undefined ***)(lStack_248 + (long)unaff_x25 * 8);
        ppuVar10 = unaff_x22;
        _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
        if (((ulong)ppuVar10 & 1) != 0) {
          func_0x00010c229100(unaff_x22);
        }
        unaff_x25 = unaff_x25 + 1;
      } while (puVar12 != unaff_x25);
      puVar12 = puVar2;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
      param_1 = 0;
    } while (puVar12 != (undefined1 *)0x0);
  }
  puVar12 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_380;
  pcStack_258 = FUN_1063476b8;
  lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)puVar6;
  puStack_2b0 = unaff_x28;
  puStack_2a8 = unaff_x27;
  ppuStack_2a0 = unaff_x26;
  puStack_298 = unaff_x25;
  ppuStack_290 = unaff_x24;
  ppuStack_288 = unaff_x23;
  ppuStack_280 = unaff_x22;
  puStack_278 = unaff_x21;
  lStack_270 = param_1;
  puStack_268 = puVar2;
  ppuStack_260 = &puStack_140;
  _objc_retain(puVar6);
  puVar2 = (undefined1 *)puVar6;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    puVar2 = puVar12;
    func_0x00010beb59c0();
    if ((int)puVar2 != 0) {
      unaff_x21 = &DAT_112745d10;
      func_0x00010bf11300(*(undefined8 *)(puVar12 + _DAT_112745d10));
      func_0x00010c218320(*(undefined8 *)(puVar12 + _DAT_112745df8));
    }
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    puStack_370 = (undefined8 *)0x0;
    _objc_retain(puVar6);
    puVar2 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      unaff_x25 = (undefined1 *)*puStack_370;
      unaff_x26 = (undefined **)&DAT_112745000;
      unaff_x27 = &DAT_112745ddc;
      do {
        unaff_x28 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_370 != unaff_x25) {
            _objc_enumerationMutation(puVar6);
          }
          ppuVar10 = *(undefined ***)(lStack_378 + (long)unaff_x28 * 8);
          func_0x00010c229120(ppuVar10);
          unaff_x22 = ppuVar10;
          func_0x00010c08c3c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar10;
          if (unaff_x22 != (undefined **)0x0) {
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar10;
            func_0x00010c27dd80();
            _objc_release(ppuVar10);
            unaff_x24 = ppuVar10;
            if ((unaff_x23 < (undefined **)0x21 &&
                 (1L << ((ulong)unaff_x23 & 0x3f) & 0x100000060U) != 0) ||
               (*(long *)(puVar12 + _DAT_112745e24) == 0 &&
                (unaff_x23 == (undefined **)0x1 || unaff_x23 == (undefined **)0x2))) {
              unaff_x23 = (undefined **)(long)_DAT_112745e24;
              func_0x00010c229220(*(undefined8 *)(puVar12 + (long)unaff_x23));
              _objc_retain(unaff_x22);
              uVar3 = *(undefined8 *)(puVar12 + (long)unaff_x23);
              *(undefined ***)(puVar12 + (long)unaff_x23) = unaff_x22;
              _objc_release(uVar3);
              func_0x00010c229220(*(undefined8 *)(puVar12 + (long)unaff_x23));
            }
          }
          _objc_release(unaff_x22);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar2 != unaff_x28);
        puVar2 = (undefined1 *)puVar6;
        puVar7 = &uStack_380;
        func_0x00010bf52a60();
        unaff_x21 = (undefined *)0x0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar6);
    puVar5 = (undefined1 *)puVar7;
  }
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c0) {
    ___stack_chk_fail();
    puVar7 = &uStack_4b0;
    pcStack_388 = FUN_1063478d8;
    lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar5;
    puStack_3e0 = unaff_x28;
    puStack_3d8 = unaff_x27;
    ppuStack_3d0 = unaff_x26;
    puStack_3c8 = unaff_x25;
    ppuStack_3c0 = unaff_x24;
    ppuStack_3b8 = unaff_x23;
    ppuStack_3b0 = unaff_x22;
    puStack_3a8 = unaff_x21;
    puStack_3a0 = puVar12;
    puStack_398 = (undefined1 *)puVar6;
    pppuStack_390 = &ppuStack_260;
    _objc_retain(puVar5);
    if ((*(long *)(puVar2 + _DAT_112745d04) != 0) &&
       (puVar2 = puVar5, func_0x00010bf529e0(), puVar2 != (undefined1 *)0x0)) {
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      lStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      plStack_4a0 = (long *)0x0;
      _objc_retain(puVar5);
      puVar2 = puVar5;
      func_0x00010bf52a60();
      if (puVar2 != (undefined1 *)0x0) {
        lVar11 = *plStack_4a0;
        do {
          puVar12 = (undefined1 *)0x0;
          do {
            if (*plStack_4a0 != lVar11) {
              _objc_enumerationMutation(puVar5);
            }
            puVar1 = PTR_DAT_1126a5378;
            lVar9 = *(long *)(lStack_4a8 + (long)puVar12 * 8);
            _objc_retain(lVar9);
            lVar4 = lVar9;
            func_0x00010010fab4(lVar9,puVar1);
            _objc_release(lVar9);
            if ((int)lVar4 != 0 && lVar9 != 0) {
              func_0x00010c1979a0(lVar9);
            }
            puVar12 = puVar12 + 1;
          } while (puVar2 != puVar12);
          puVar2 = puVar5;
          puVar7 = &uStack_4b0;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined1 *)0x0);
      }
      _objc_release(puVar5);
      puVar8 = (undefined1 *)puVar7;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010beebf60((double)((ulong)puVar8 & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010c223810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar5 + _DAT_112745da8),
               PTR_s_setVisible_animated_completion__112666828,(uint)puVar8 ^ 1,1,0);
    return;
  }
  return;
}



/* Entry: 1063475a0; end: 1063476b7; -[SCOperaPageViewController _clearPlaybackAnalyticsTrackerForAllLayers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063475a0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *unaff_x21;
  undefined **unaff_x22;
  long lVar8;
  undefined **unaff_x23;
  undefined **ppuVar9;
  undefined **unaff_x24;
  long unaff_x25;
  long lVar10;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined1 *puVar11;
  undefined1 *unaff_x28;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x23 = (undefined **)*puStack_110;
    unaff_x24 = &PTR_s_setWidthValue__112667000;
    do {
      unaff_x21 = PTR_s_setupPlaybackAnalyticsTracker__112667e68;
      unaff_x25 = 0;
      do {
        if ((undefined **)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(undefined ***)(lStack_118 + unaff_x25 * 8);
        ppuVar9 = unaff_x22;
        _objc_opt_respondsToSelector(unaff_x22,unaff_x21);
        if (((ulong)ppuVar9 & 1) != 0) {
          func_0x00010c229100(unaff_x22);
        }
        unaff_x25 = unaff_x25 + 1;
      } while (lVar10 != unaff_x25);
      lVar10 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_250;
  pcStack_128 = FUN_1063476b8;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)puVar6;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar2 = (undefined1 *)puVar6;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = param_1;
    func_0x00010beb59c0();
    if ((int)lVar10 != 0) {
      unaff_x21 = &DAT_112745d10;
      func_0x00010bf11300(*(undefined8 *)(param_1 + _DAT_112745d10));
      func_0x00010c218320(*(undefined8 *)(param_1 + _DAT_112745df8));
    }
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    _objc_retain(puVar6);
    puVar2 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      unaff_x25 = *plStack_240;
      unaff_x26 = &DAT_112745000;
      unaff_x27 = &DAT_112745ddc;
      do {
        unaff_x28 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != unaff_x25) {
            _objc_enumerationMutation(puVar6);
          }
          ppuVar9 = *(undefined ***)(lStack_248 + (long)unaff_x28 * 8);
          func_0x00010c229120(ppuVar9);
          unaff_x22 = ppuVar9;
          func_0x00010c08c3c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar9;
          if (unaff_x22 != (undefined **)0x0) {
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = ppuVar9;
            func_0x00010c27dd80();
            _objc_release(ppuVar9);
            unaff_x24 = ppuVar9;
            if ((unaff_x23 < (undefined **)0x21 &&
                 (1L << ((ulong)unaff_x23 & 0x3f) & 0x100000060U) != 0) ||
               (*(long *)(param_1 + _DAT_112745e24) == 0 &&
                (unaff_x23 == (undefined **)0x1 || unaff_x23 == (undefined **)0x2))) {
              unaff_x23 = (undefined **)(long)_DAT_112745e24;
              func_0x00010c229220(*(undefined8 *)(param_1 + (long)unaff_x23));
              _objc_retain(unaff_x22);
              uVar3 = *(undefined8 *)(param_1 + (long)unaff_x23);
              *(undefined ***)(param_1 + (long)unaff_x23) = unaff_x22;
              _objc_release(uVar3);
              func_0x00010c229220(*(undefined8 *)(param_1 + (long)unaff_x23));
            }
          }
          _objc_release(unaff_x22);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar2 != unaff_x28);
        puVar2 = (undefined1 *)puVar6;
        puVar7 = &uStack_250;
        func_0x00010bf52a60();
        unaff_x21 = (undefined *)0x0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar6);
    puVar5 = (undefined1 *)puVar7;
  }
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
    ___stack_chk_fail();
    puVar7 = &uStack_380;
    pcStack_258 = FUN_1063478d8;
    lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar5;
    puStack_2b0 = unaff_x28;
    puStack_2a8 = unaff_x27;
    puStack_2a0 = unaff_x26;
    lStack_298 = unaff_x25;
    ppuStack_290 = unaff_x24;
    ppuStack_288 = unaff_x23;
    ppuStack_280 = unaff_x22;
    puStack_278 = unaff_x21;
    lStack_270 = param_1;
    puStack_268 = (undefined1 *)puVar6;
    ppuStack_260 = &puStack_130;
    _objc_retain(puVar5);
    if ((*(long *)(puVar2 + _DAT_112745d04) != 0) &&
       (puVar2 = puVar5, func_0x00010bf529e0(), puVar2 != (undefined1 *)0x0)) {
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      lStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      plStack_370 = (long *)0x0;
      _objc_retain(puVar5);
      puVar2 = puVar5;
      func_0x00010bf52a60();
      if (puVar2 != (undefined1 *)0x0) {
        lVar10 = *plStack_370;
        do {
          puVar11 = (undefined1 *)0x0;
          do {
            if (*plStack_370 != lVar10) {
              _objc_enumerationMutation(puVar5);
            }
            puVar1 = PTR_DAT_1126a5378;
            lVar8 = *(long *)(lStack_378 + (long)puVar11 * 8);
            _objc_retain(lVar8);
            lVar4 = lVar8;
            func_0x00010010fab4(lVar8,puVar1);
            _objc_release(lVar8);
            if ((int)lVar4 != 0 && lVar8 != 0) {
              func_0x00010c1979a0(lVar8);
            }
            puVar11 = puVar11 + 1;
          } while (puVar2 != puVar11);
          puVar2 = puVar5;
          puVar7 = &uStack_380;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined1 *)0x0);
      }
      _objc_release(puVar5);
      puVar11 = (undefined1 *)puVar7;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010beebf60((double)((ulong)puVar11 & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010c223810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar5 + _DAT_112745da8),
               PTR_s_setVisible_animated_completion__112666828,(uint)puVar11 ^ 1,1,0);
    return;
  }
  return;
}



/* Entry: 1063476b8; end: 1063478d7; -[SCOperaPageViewController _setupTrackableLayerWithLayerVCs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063476b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *unaff_x21;
  ulong unaff_x22;
  long lVar7;
  ulong unaff_x23;
  ulong uVar8;
  ulong unaff_x24;
  long unaff_x25;
  long lVar9;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined1 *puVar10;
  undefined1 *unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
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
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = param_1;
    func_0x00010beb59c0();
    if ((int)lVar9 != 0) {
      unaff_x21 = &DAT_112745d10;
      func_0x00010bf11300(*(undefined8 *)(param_1 + _DAT_112745d10));
      func_0x00010c218320(*(undefined8 *)(param_1 + _DAT_112745df8));
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      unaff_x25 = *plStack_120;
      unaff_x26 = &DAT_112745000;
      unaff_x27 = &DAT_112745ddc;
      do {
        unaff_x28 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != unaff_x25) {
            _objc_enumerationMutation(param_3);
          }
          uVar8 = *(ulong *)(lStack_128 + (long)unaff_x28 * 8);
          func_0x00010c229120(uVar8);
          unaff_x22 = uVar8;
          func_0x00010c08c3c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = uVar8;
          if (unaff_x22 != 0) {
            func_0x00010c08c0e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = uVar8;
            func_0x00010c27dd80();
            _objc_release(uVar8);
            unaff_x24 = uVar8;
            if ((unaff_x23 < 0x21 && (1L << (unaff_x23 & 0x3f) & 0x100000060U) != 0) ||
               (*(long *)(param_1 + _DAT_112745e24) == 0 && (unaff_x23 == 1 || unaff_x23 == 2))) {
              unaff_x23 = (ulong)_DAT_112745e24;
              func_0x00010c229220(*(undefined8 *)(param_1 + unaff_x23));
              _objc_retain(unaff_x22);
              uVar3 = *(undefined8 *)(param_1 + unaff_x23);
              *(ulong *)(param_1 + unaff_x23) = unaff_x22;
              _objc_release(uVar3);
              func_0x00010c229220(*(undefined8 *)(param_1 + unaff_x23));
            }
          }
          _objc_release(unaff_x22);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar2 != unaff_x28);
        puVar2 = param_3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x21 = (undefined *)0x0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar5 = (undefined1 *)puVar6;
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = &uStack_260;
    pcStack_138 = FUN_1063478d8;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar5;
    puStack_190 = unaff_x28;
    puStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    puStack_158 = unaff_x21;
    lStack_150 = param_1;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    if ((*(long *)(puVar2 + _DAT_112745d04) != 0) &&
       (puVar2 = puVar5, func_0x00010bf529e0(), puVar2 != (undefined1 *)0x0)) {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      _objc_retain(puVar5);
      puVar2 = puVar5;
      func_0x00010bf52a60();
      if (puVar2 != (undefined1 *)0x0) {
        lVar9 = *plStack_250;
        do {
          puVar10 = (undefined1 *)0x0;
          do {
            if (*plStack_250 != lVar9) {
              _objc_enumerationMutation(puVar5);
            }
            puVar1 = PTR_DAT_1126a5378;
            lVar7 = *(long *)(lStack_258 + (long)puVar10 * 8);
            _objc_retain(lVar7);
            lVar4 = lVar7;
            func_0x00010010fab4(lVar7,puVar1);
            _objc_release(lVar7);
            if ((int)lVar4 != 0 && lVar7 != 0) {
              func_0x00010c1979a0(lVar7);
            }
            puVar10 = puVar10 + 1;
          } while (puVar2 != puVar10);
          puVar2 = puVar5;
          puVar6 = &uStack_260;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined1 *)0x0);
      }
      _objc_release(puVar5);
      puVar10 = (undefined1 *)puVar6;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010beebf60((double)((ulong)puVar10 & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010c223810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar5 + _DAT_112745da8),
               PTR_s_setVisible_animated_completion__112666828,(uint)puVar10 ^ 1,1,0);
    return;
  }
  return;
}



/* Entry: 1063478d8; end: 106347a43; -[SCOperaPageViewController _setupEventPublisherWithLayerVCs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063478d8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if ((*(long *)(param_1 + _DAT_112745d04) != 0) &&
     (puVar7 = param_3, func_0x00010bf529e0(), puVar7 != (undefined1 *)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar6 = *plStack_120;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          puVar1 = PTR_DAT_1126a5378;
          lVar5 = *(long *)(lStack_128 + (long)puVar7 * 8);
          _objc_retain(lVar5);
          lVar3 = lVar5;
          func_0x00010010fab4(lVar5,puVar1);
          _objc_release(lVar5);
          if ((int)lVar3 != 0 && lVar5 != 0) {
            func_0x00010c1979a0(lVar5);
          }
          puVar7 = puVar7 + 1;
        } while (puVar2 != puVar7);
        puVar2 = param_3;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010beebf60((double)((ulong)puVar2 & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010c223810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_112745da8),
             PTR_s_setVisible_animated_completion__112666828,(uint)puVar2 ^ 1,1,0);
  return;
}



/* Entry: 106347a44; end: 106347a87; -[SCOperaPageViewController zoomScrollView:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106347a44(long param_1,undefined8 param_2,uint param_3)

{
  func_0x00010beebf60((double)param_3,param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c223810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745da8),
             PTR_s_setVisible_animated_completion__112666828,param_3 ^ 1,1,0);
  return;
}



/* Entry: 106347a88; end: 106347b7b; -[SCOperaPageViewController _setupScrollViewForZoomIfNeededWithPercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106347a88(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  if (param_1 == 0.0) {
    lVar3 = (long)_DAT_112745d94;
    func_0x00010c1c3d60(0x3ff0000000000000,*(undefined8 *)(param_5 + lVar3));
  }
  else {
    lVar4 = (long)_DAT_112745d80;
    lVar2 = *(long *)(param_5 + lVar4);
    dVar6 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)_DAT_112745d94;
    lVar5 = *(long *)(param_5 + lVar3);
    _objc_release();
    pdVar1 = (double *)(param_5 + _DAT_112745e20);
    if (lVar2 == lVar5) {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
      *pdVar1 = dVar6;
      pdVar1[1] = param_2;
      pdVar1[2] = param_3;
      pdVar1[3] = param_4;
    }
    else {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
      *pdVar1 = dVar6;
      pdVar1[1] = param_2;
      pdVar1[2] = param_3;
      pdVar1[3] = param_4;
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + lVar3),PTR_s_setClipsToBounds__11263cf50,param_1 == 1.0);
  return;
}



/* Entry: 106347b7c; end: 106347f97; -[SCOperaPageViewController _zoomScrollViewWithPercent:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106347b7c(double param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  double dStack_88;
  double dStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + _DAT_112745cfc);
  func_0x00010beeebe0();
  if (lVar1 == 2) {
    func_0x00010beaf8c0(param_1,param_2);
    func_0x00010beebf80(param_1,param_2);
  }
  else {
    dVar11 = -0.17100000000000004;
    dVar13 = param_1 * -0.17100000000000004 + 1.0;
    lVar1 = (long)_DAT_112745d94;
    func_0x00010c2bf2a0(*(undefined8 *)(param_2 + lVar1));
    if (dVar13 != dVar11) {
      func_0x00010c1c8480(0x3fea872b020c49ba,*(undefined8 *)(param_2 + lVar1));
      func_0x00010c1c3d60(0x3fea872b020c49ba,*(undefined8 *)(param_2 + lVar1));
      dVar11 = param_1;
      func_0x00010beaf8c0(param_1,param_2);
      uVar2 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf525a0();
      _objc_release(uVar2);
      puVar6 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
      dVar12 = param_1 * 12.0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      if ((param_4 & 1) == 0) {
        func_0x00010bf040a0(0,puVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar5 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        func_0x00010bf040a0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c19bc40(puVar6);
      func_0x00010c1ea580(puVar6);
      uVar2 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + lVar1);
      func_0x00010c08c0e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar12);
      _objc_release(uVar2);
      uVar7 = *(undefined8 *)(param_2 + _DAT_112745d10);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      _objc_release(uVar7);
      if ((int)uVar8 != 0) {
        dVar12 = 1.0;
        if (dVar13 == 1.0) {
          func_0x00010be35460();
        }
        else {
          func_0x00010beb8100(param_2);
        }
      }
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106347f98;
      puStack_98 = &UNK_110875e90;
      uStack_78 = (undefined1)param_4;
      ppuVar9 = &puStack_b0;
      lStack_90 = param_2;
      dStack_88 = dVar13;
      dStack_80 = param_1;
      _objc_retainBlock();
      puStack_e8 = puVar3;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_106348184;
      puStack_d0 = &UNK_1108d3770;
      lStack_c8 = param_2;
      dStack_b8 = param_1;
      _objc_retain(param_5);
      ppuVar10 = &puStack_e8;
      uStack_c0 = param_5;
      _objc_retainBlock();
      *(undefined1 *)(param_2 + _DAT_112745d90) = 1;
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      if (param_4 == 0) {
        (*(code *)ppuVar9[2])(ppuVar9);
        (*(code *)ppuVar10[2])(ppuVar10,1);
      }
      else {
        lVar1 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        lVar5 = param_2;
        dVar11 = dVar12;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24c9a0();
        func_0x00010bf03460(dVar12,0,dVar11,0,puVar3);
        _objc_release(lVar5);
        _objc_release(lVar1);
        func_0x00010bede1a0(param_2);
      }
      _objc_release(ppuVar10);
      _objc_release(uStack_c0);
      _objc_release(ppuVar9);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106347f98; end: 106348183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106347f98(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(double *)(param_1 + 0x28) == 1.0) {
    if ((*(char *)(param_1 + 0x38) == '\x01') &&
       (*(double *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745e28) == 0.829)) {
      func_0x00010c227ca0(0x3ff0000000000000,
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d94));
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745e20);
    func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d80));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d94));
    _objc_release(uVar2);
  }
  else {
    lVar3 = (long)_DAT_112745d94;
    func_0x00010c227ca0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    _CGRectGetHeight();
    func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    _CGRectGetWidth();
    func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    _CGRectGetMidY();
    func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    _CGRectGetHeight();
    func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    func_0x00010bc85160();
    func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    _objc_release(uVar2);
    func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
    func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d80));
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745e28) =
       *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 106348184; end: 1063482c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106348184(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(double *)(param_1 + 0x30) == 0.0) {
    uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745cf0);
    func_0x00010c2bf0e0();
    lVar4 = *(long *)(param_1 + 0x20);
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(lVar4 + _DAT_112745d10);
      func_0x00010c0f1520();
      lVar4 = *(long *)(param_1 + 0x20);
      if (((uVar3 & 1) == 0) && (*(char *)(lVar4 + _DAT_112745db8) != '\x01')) {
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f80();
        _objc_release(lVar4);
        goto joined_r0x0001063482b0;
      }
    }
    puVar1 = (undefined8 *)(lVar4 + _DAT_112745e20);
    lVar5 = (long)_DAT_112745d94;
    func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined8 *)(lVar4 + lVar5));
    func_0x00010c1c8480(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d10);
    func_0x00010c0f1520();
    uVar6 = 0x4008000000000000;
    if (iVar2 == 0) {
      uVar6 = 0x4000000000000000;
    }
    func_0x00010c1c3d60(uVar6,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  }
joined_r0x0001063482b0:
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106348274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1063482c4; end: 106348517; -[SCOperaPageViewController _zoomToActionMenuV2WithPercent:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063482c4(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined **param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  double *pdVar1;
  undefined *puVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_8);
  dVar8 = param_1;
  func_0x00010be5e560(param_5);
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  dVar9 = 1.0;
  if (dVar8 <= 1.0) {
    dVar9 = dVar8;
  }
  func_0x00010bdd00e0(param_5);
  pdVar1 = (double *)((long)param_5 + (long)_DAT_112745e20);
  bVar3 = true;
  if ((!NAN(*pdVar1)) && (bVar3 = true, !NAN(pdVar1[1]))) {
    bVar3 = false;
  }
  if (!bVar3) {
    dVar10 = pdVar1[2];
    dVar8 = pdVar1[3];
    bVar3 = true;
    if ((!NAN(dVar8)) && (bVar3 = true, !NAN(dVar10))) {
      bVar3 = false;
    }
    if (!bVar3) {
      ppuVar4 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      if ((!NAN(dVar8)) && (!NAN(dVar10))) {
        _objc_release(ppuVar4);
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        if ((NAN(param_4)) || (NAN(param_3))) goto LAB_1063484ec;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106348518;
        puStack_90 = &UNK_110858dc0;
        ppuVar4 = &puStack_a8;
        ppuStack_88 = param_5;
        dStack_80 = dVar9;
        dStack_78 = param_1;
        _objc_retainBlock();
        puStack_e8 = puVar2;
        uStack_e0 = 0xc2000000;
        pcStack_d8 = FUN_106348720;
        puStack_d0 = &UNK_11091cc18;
        uStack_b0 = (undefined1)param_7;
        ppuStack_c8 = param_5;
        dStack_b8 = param_1;
        _objc_retain(param_8);
        ppuVar5 = &puStack_e8;
        uStack_c0 = param_8;
        _objc_retainBlock();
        *(undefined1 *)((long)param_5 + (long)_DAT_112745d90) = 1;
        puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
        if (param_7 == 0) {
          (*(code *)ppuVar4[2])(ppuVar4);
          (*(code *)ppuVar5[2])(ppuVar5,1);
        }
        else {
          ppuVar6 = param_5;
          func_0x00010bf46560(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beee8c0();
          ppuVar7 = param_5;
          dVar9 = dVar8;
          func_0x00010bf46560(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24c9a0();
          func_0x00010bf03460(dVar8,0,dVar9,0,puVar2);
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
          func_0x00010bede1a0(param_5);
        }
        _objc_release(ppuVar5);
        _objc_release(uStack_c0);
      }
      _objc_release(ppuVar4);
    }
  }
LAB_1063484ec:
  _objc_release(param_8);
  return;
}



/* Entry: 106348518; end: 10634871f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106348518(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
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
  
  _CGAffineTransformMakeScale
            (&uStack_90,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  lVar5 = (long)_DAT_112745d94;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5),param_2,&uStack_c0);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745e20);
  _CGRectGetHeight(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  func_0x00010bdc44a0();
  func_0x00010c0eb1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745cf4));
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745cf0);
  func_0x00010c2bf0e0();
  lVar3 = *(long *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar3 + _DAT_112745d10);
    func_0x00010c0f1520();
    lVar3 = *(long *)(param_1 + 0x20);
    if (((uVar2 & 1) == 0) && (*(char *)(lVar3 + _DAT_112745db8) != '\x01')) goto LAB_10634861c;
  }
  func_0x00010c227ca0(0x3ff0000000000000,*(undefined8 *)(lVar3 + lVar5));
  lVar3 = *(long *)(param_1 + 0x20);
LAB_10634861c:
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  _objc_release(lVar3);
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d80));
  dVar6 = *(double *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar6 * 18.0);
  _objc_release(uVar4);
  dVar6 = *(double *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745e2c);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar6 * 18.0);
  _objc_release(uVar4);
  return;
}



/* Entry: 106348720; end: 106348823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106348720(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*(double *)(param_1 + 0x30) != 0.0) || (*(char *)(param_1 + 0x38) != '\x01'))
  goto LAB_1063487f4;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745e20);
  lVar5 = (long)_DAT_112745d94;
  func_0x00010c19f0e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745cf0);
  func_0x00010c2bf0e0();
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112745d10);
    func_0x00010c0f1520();
    if (iVar2 != 0) goto LAB_1063487a4;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80();
    _objc_release(uVar4);
  }
  else {
LAB_1063487a4:
    func_0x00010c1c3d60(0x4008000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  }
  func_0x00010be8b360(*(undefined8 *)(param_1 + 0x20));
LAB_1063487f4:
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106348810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106348824; end: 106348943; -[SCOperaPageViewController _mediaContentScaleWithPercentInActionMenu:] */

double FUN_106348824(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = param_1;
  func_0x00010c0c7140();
  uVar1 = param_5;
  dVar3 = dVar7;
  func_0x00010be43580();
  dVar4 = dVar3;
  if ((int)uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    uVar2 = param_5;
    param_4 = dVar3;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar7 = 0.0;
    dVar4 = param_4;
    _objc_release(uVar2);
    _objc_release(uVar1);
    param_2 = 0.0;
    param_3 = dVar3;
  }
  func_0x00010bdc44a0(param_5);
  dVar3 = dVar7;
  dVar6 = param_2;
  _CGRectGetWidth(dVar7,param_2,param_3,param_4);
  func_0x00010bdc44a0(param_5);
  _CGRectGetHeight(dVar7,param_2,param_3,param_4);
  dVar5 = dVar4 / dVar3;
  if (dVar6 / dVar7 <= dVar4 / dVar3) {
    dVar5 = dVar6 / dVar7;
  }
  return param_1 * (dVar5 + -1.0) + 1.0;
}



/* Entry: 106348944; end: 1063489b7; -[SCOperaPageViewController _isRotationMediaContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106348944(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1063489b8; end: 106348a2f; -[SCOperaPageViewController _removeActionMenuMaskViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063489b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745e2c;
  if (*(long *)(param_1 + lVar2) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112745d94);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106348a30; end: 106348b7f; -[SCOperaPageViewController _attachActionMenuMaskViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106348a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_5;
  func_0x00010be43580();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0c7140(param_5);
    uVar1 = param_5;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf20c00();
    _CGRectEqualToRect();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(param_1,param_2,param_3,param_4);
      lVar6 = (long)_DAT_112745e2c;
      uVar5 = *(undefined8 *)(param_5 + lVar6);
      *(undefined **)(param_5 + lVar6) = puVar3;
      _objc_release(uVar5);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_5 + lVar6),param_6,puVar3);
      _objc_release(puVar3);
      uVar5 = *(undefined8 *)(param_5 + lVar6);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + (long)_DAT_112745d94);
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 106348b80; end: 106348ce3; -[SCOperaPageViewController _actionMenuOptionsNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106348b80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010be6f380();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb2da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        lVar4 = *(long *)(lStack_108 + lVar6 * 8);
        lVar3 = lVar4;
        func_0x00010c27dd80();
        if (lVar3 == 0x12) {
          _objc_retain(lVar4);
          _objc_release();
          if (lVar4 != 0) {
            lVar1 = lVar4;
            func_0x00010bf92ac0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar1;
            func_0x00010bf529e0();
            _objc_release(lVar1);
            lVar1 = lVar4;
            goto LAB_106348c9c;
          }
          lVar5 = 0;
          goto LAB_106348cac;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
    lVar5 = 0;
  }
LAB_106348c9c:
  _objc_release();
LAB_106348cac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  lVar2 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010bdc4500(lVar1);
  lVar6 = (long)_DAT_112745cf4;
  func_0x00010c0eb1c0(*(undefined8 *)(lVar1 + lVar6));
  func_0x00010c0eb1c0(*(undefined8 *)(lVar1 + lVar6));
  _objc_release(lVar2);
  _objc_release(lVar5);
  return lVar5;
}



/* Entry: 106348ce4; end: 106348dbb; -[SCOperaPageViewController _actionMenuContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106348ce4(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar5 = param_1 + -48.0;
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  lVar3 = param_4;
  func_0x00010bdc4500(param_4);
  dVar4 = param_1 + (double)lVar3 * -50.0 + -48.0;
  dVar6 = dVar4 + -80.0;
  lVar3 = (long)_DAT_112745cf4;
  func_0x00010c0eb1c0(*(undefined8 *)(param_4 + lVar3));
  func_0x00010c0eb1c0(*(undefined8 *)(param_4 + lVar3));
  _objc_release(lVar2);
  _objc_release(lVar1);
  auVar7._8_8_ = (dVar6 - dVar4) - param_3;
  auVar7._0_8_ = dVar5;
  return auVar7;
}



/* Entry: 106348dbc; end: 106348eb7; -[SCOperaPageViewController visiblityInView:] */

double FUN_106348dbc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  dVar4 = -1.0;
  if ((uVar2 & 1) == 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = *(double *)PTR__CGPointZero_110347540;
    dVar7 = *(double *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010bf51200(dVar3,dVar7,param_3,param_2,param_1);
    dVar4 = dVar3;
    _objc_release(param_1);
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    dVar3 = dVar3 / dVar4;
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    fVar5 = (float)dVar3;
    fVar6 = ABS(fVar5 + 0.0) * 1.1920929e-07;
    if (fVar6 <= 1.1754944e-38) {
      fVar6 = 1.1754944e-38;
    }
    dVar4 = dVar7 / dVar4;
    if (fVar6 <= ABS(fVar5)) {
      dVar4 = dVar3;
    }
  }
  _objc_release(param_3);
  return dVar4;
}



/* Entry: 106348eb8; end: 106348f5b; -[SCOperaPageViewController sendViewCloseEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106348eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + _DAT_112745e30) & 1) != 0) {
    return;
  }
  func_0x00010c18dcc0(param_1,param_2,1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112745d00);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112745d10);
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar2,param_2,puVar1,uVar3,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106348f5c; end: 106348fef; -[SCOperaPageViewController fromView:convertPointToContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106348f5c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2,param_5,param_4,lVar1);
  _objc_release(param_5);
  _objc_release(lVar1);
  auVar2._8_8_ = param_2 - *(double *)(param_3 + _DAT_112745dac);
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 106348ff0; end: 1063490fb; -[SCOperaPageViewController fromView:edgeInsetsForPointToPageViewBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106348ff0(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010be48b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,param_5,param_4,lVar1);
  _objc_release(param_5);
  dVar2 = *(double *)(param_3 + _DAT_112745dac);
  func_0x00010bf20c00(lVar1);
  _CGRectGetHeight();
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010bf20c00(lVar1);
  _CGRectGetHeight();
  func_0x00010bf20c00(lVar1);
  _CGRectGetWidth();
  _objc_release(param_3);
  _objc_release(lVar1);
  return param_2 + dVar2;
}


