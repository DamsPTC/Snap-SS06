/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a13398; end: 104a13607; -[GTLRService handleRequestCompletion:forQuery:] */

void FUN_104a13398(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puStack_368;
  undefined8 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  puVar3 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lVar17 = param_1;
  func_0x00010bdc0d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar17;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c2201e0(param_3);
  }
  func_0x00010befcfe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar20 = *plStack_1a0;
    do {
      lVar22 = 0;
      do {
        if (*plStack_1a0 != lVar20) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = param_1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(param_3);
        _objc_release(lVar2);
        lVar22 = lVar22 + 1;
      } while (lVar1 != lVar22);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = param_4;
  func_0x00010befcfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  ppuStack_1d8 = (undefined **)0x0;
  ppuStack_1e0 = (undefined **)0x0;
  _objc_retain();
  lVar22 = 0x10;
  lVar20 = lVar1;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    puVar21 = *ppuStack_1e0;
    do {
      lVar22 = 0;
      do {
        if (*ppuStack_1e0 != puVar21) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = lVar1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2201e0(param_3);
        _objc_release(lVar2);
        lVar22 = lVar22 + 1;
      } while (lVar20 != lVar22);
      lVar22 = 0x10;
      lVar20 = lVar1;
      puVar3 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar20 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(lVar17);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = ppuStack_1d8;
  ppuVar5 = ppuStack_1e0;
  uVar4 = uStack_1e8;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  ppuStack_2b0 = param_6;
  if (puVar3 == (undefined8 *)0x0) {
    ppuVar19 = (undefined **)0x0;
  }
  else {
    ppuVar19 = ppuVar5;
    func_0x00010bfd6de0();
    if ((int)ppuVar19 == 0) {
      ppuVar18 = (undefined **)0x0;
      ppuVar19 = (undefined **)PTR_PTR_1126ae148;
    }
    else {
      ppuVar18 = ppuVar5;
      func_0x00010bf9b240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)PTR_PTR_1126ae148;
    }
    PTR_PTR_1126ae148 = (undefined *)ppuVar19;
    if (ppuVar6 == (undefined **)0x0) {
      _objc_alloc();
      func_0x00010c044e20();
      func_0x00010c0dd5a0();
      ppuVar6 = ppuVar19;
    }
    ppuVar7 = ppuVar6;
    func_0x00010bdc0d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar7;
    func_0x00010c08fa60();
    puVar21 = (undefined *)puVar3;
    if (ppuVar19 != (undefined **)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126ae140;
      puVar9 = (undefined *)puVar3;
      func_0x00010beec820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc34a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    ppuVar19 = ppuVar5;
    func_0x00010c06d0e0();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)ppuVar19 == 0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e3f958;
    }
    else {
      ppuVar19 = ppuVar5;
      func_0x00010bf20a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar19);
    }
    ppuVar11 = ppuVar5;
    func_0x00010c28e440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar11;
    func_0x00010c235180();
    if ((int)ppuVar19 == 0) {
      puStack_368 = (undefined *)0x0;
    }
    else {
      ppuVar19 = ppuVar11;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010bdc1c20();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar19 == (undefined **)0x0) {
        puStack_368 = (undefined *)0x0;
      }
      else {
        ppuVar13 = ppuVar11;
        func_0x00010c2330e0();
        if ((int)ppuVar13 == 0) {
          puVar8 = PTR_PTR_1126ae150;
          func_0x00010bdc1be0(PTR_PTR_1126ae150);
          _objc_retainAutoreleasedReturnValue();
          if (param_6 != (undefined **)0x0) {
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa600(puVar8);
            _objc_release(puVar9);
          }
          puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa600(puVar8);
          _objc_release(puVar9);
          uStack_2b8 = 0;
          ppuStack_2b0 = (undefined **)0x0;
          func_0x00010bfbf400(puVar8);
          _objc_retain();
          _objc_retain();
          ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          _objc_retain();
          _objc_release(param_6);
          _objc_release(uStack_2b8);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          puStack_368 = puVar9;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          _objc_release(ppuStack_2b0);
        }
        else {
          _objc_retain(ppuVar12);
          _objc_release(ppuVar10);
          ppuStack_2b0 = ppuVar19;
          _objc_retain();
          _objc_release(param_6);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(ppuStack_2b0);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puStack_368 = puVar8;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar8);
        ppuVar10 = ppuVar12;
      }
      _objc_release();
      _objc_release(ppuVar19);
    }
    lVar1 = param_3;
    func_0x00010bdc0d60();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1;
    func_0x00010c08fa60();
    if (lVar20 == 0) {
      ppuVar19 = (undefined **)0x0;
    }
    else {
      ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar12 = ppuVar5;
    func_0x00010befcfe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar19;
    if (ppuVar12 != (undefined **)0x0) {
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar13 = ppuVar12;
        _objc_retain();
      }
      else {
        func_0x00010c0d3c80();
        func_0x00010bef7f60();
        _objc_release(ppuVar19);
      }
    }
    func_0x00010c1df600(ppuVar6);
    func_0x00010c198100(ppuVar6);
    ppuVar14 = ppuVar6;
    func_0x00010c0ed880();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar14 == (undefined **)0x0) {
      ppuVar14 = ppuVar5;
      _objc_retain(ppuVar5);
      func_0x00010c1d6760(ppuVar6);
    }
    _objc_retain();
    uVar15 = uVar4;
    _objc_retain();
    ppuVar16 = ppuVar5;
    _objc_retain();
    _objc_retain();
    func_0x00010c0e01e0(param_3);
    ppuVar19 = ppuVar6;
    _objc_retain(ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(ppuVar16);
    _objc_release(uVar15);
    _objc_release(ppuStack_2b0);
    _objc_release(ppuVar14);
    _objc_release(ppuVar12);
    _objc_release(lVar1);
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    _objc_release(puStack_368);
    _objc_release(ppuVar10);
    _objc_release(ppuVar7);
    _objc_release(ppuVar18);
    _objc_release(puVar21);
    ppuVar6 = ppuVar19;
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(uVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuStack_2b0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar19);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfd1a00(*(undefined8 *)(lVar22 + 0x20));
  return;
}



/* Entry: 104a13608; end: 104a13d47; -[GTLRService fetchObjectWithURL:objectClass:bodyObject:dataToPost:ETag:httpMethod:mayAuthorize:completionHandler:executingQuery:ticket:] */

void FUN_104a13608(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined **param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined **param_12,
                  undefined **param_13)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puStack_178;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  ppuStack_c0 = param_6;
  if (param_3 == (undefined *)0x0) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = param_12;
    func_0x00010bfd6de0();
    if ((int)ppuVar16 == 0) {
      ppuVar15 = (undefined **)0x0;
      ppuVar16 = (undefined **)PTR_PTR_1126ae148;
    }
    else {
      ppuVar15 = param_12;
      func_0x00010bf9b240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = (undefined **)PTR_PTR_1126ae148;
    }
    PTR_PTR_1126ae148 = (undefined *)ppuVar16;
    if (param_13 == (undefined **)0x0) {
      _objc_alloc();
      func_0x00010c044e20();
      func_0x00010c0dd5a0();
      param_13 = ppuVar16;
    }
    ppuVar1 = param_13;
    func_0x00010bdc0d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar1;
    func_0x00010c08fa60();
    puVar4 = param_3;
    if (ppuVar16 != (undefined **)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae140;
      puVar3 = param_3;
      func_0x00010beec820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc34a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    ppuVar16 = param_12;
    func_0x00010c06d0e0();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)ppuVar16 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e3f958;
    }
    else {
      ppuVar16 = param_12;
      func_0x00010bf20a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar16);
    }
    ppuVar6 = param_12;
    func_0x00010c28e440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar6;
    func_0x00010c235180();
    if ((int)ppuVar16 == 0) {
      puStack_178 = (undefined *)0x0;
    }
    else {
      ppuVar16 = ppuVar6;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bdc1c20();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar16 == (undefined **)0x0) {
        puStack_178 = (undefined *)0x0;
      }
      else {
        ppuVar8 = ppuVar6;
        func_0x00010c2330e0();
        if ((int)ppuVar8 == 0) {
          puVar2 = PTR_PTR_1126ae150;
          func_0x00010bdc1be0(PTR_PTR_1126ae150);
          _objc_retainAutoreleasedReturnValue();
          if (param_6 != (undefined **)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa600(puVar2);
            _objc_release(puVar3);
          }
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa600(puVar2);
          _objc_release(puVar3);
          uStack_c8 = 0;
          ppuStack_c0 = (undefined **)0x0;
          func_0x00010bfbf400(puVar2);
          _objc_retain();
          _objc_retain();
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          _objc_retain();
          _objc_release(param_6);
          _objc_release(uStack_c8);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = puVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(ppuStack_c0);
        }
        else {
          _objc_retain(ppuVar7);
          _objc_release(ppuVar5);
          ppuStack_c0 = ppuVar16;
          _objc_retain();
          _objc_release(param_6);
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(ppuStack_c0);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = puVar2;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar2);
        ppuVar5 = ppuVar7;
      }
      _objc_release();
      _objc_release(ppuVar16);
    }
    lVar9 = param_1;
    func_0x00010bdc0d60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08fa60();
    if (lVar10 == 0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar7 = param_12;
    func_0x00010befcfe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar16;
    if (ppuVar7 != (undefined **)0x0) {
      if (ppuVar16 == (undefined **)0x0) {
        ppuVar8 = ppuVar7;
        _objc_retain();
      }
      else {
        func_0x00010c0d3c80();
        func_0x00010bef7f60();
        _objc_release(ppuVar16);
      }
    }
    func_0x00010c1df600(param_13);
    func_0x00010c198100(param_13);
    ppuVar11 = param_13;
    func_0x00010c0ed880();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = param_12;
      _objc_retain(param_12);
      func_0x00010c1d6760(param_13);
    }
    _objc_retain();
    uVar12 = param_11;
    _objc_retain();
    ppuVar13 = param_12;
    _objc_retain();
    _objc_retain();
    func_0x00010c0e01e0(param_1);
    ppuVar16 = param_13;
    _objc_retain(param_13);
    _objc_release(param_13);
    _objc_release(ppuVar13);
    _objc_release(uVar12);
    _objc_release(ppuStack_c0);
    _objc_release(ppuVar11);
    _objc_release(ppuVar7);
    _objc_release(lVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
    _objc_release(puStack_178);
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
    _objc_release(ppuVar15);
    _objc_release(puVar4);
    param_13 = ppuVar16;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuStack_c0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfd1a00(*(undefined8 *)(param_5 + 0x20));
  return;
}



/* Entry: 104a13d48; end: 104a13d7f;  */

void FUN_104a13d48(long param_1,undefined8 param_2)

{
  func_0x00010bfd1a00(*(undefined8 *)(param_1 + 0x20),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104a13d80; end: 104a14407; -[GTLRService handleObjectRequestCompletionWithRequest:objectClass:dataToPost:mayAuthorize:completionHandler:executingQuery:ticket:] */

void FUN_104a13d80(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined4 param_6,undefined **param_7,ulong param_8,
                  undefined **param_9)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **unaff_x26;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined1 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  ulong uStack_168;
  undefined **ppuStack_160;
  ulong uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  ulong uStack_118;
  undefined **ppuStack_110;
  ulong uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  uStack_108 = CONCAT44(uStack_108._4_4_,param_6);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = param_4;
  ppuStack_f8 = param_1;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_8;
  func_0x00010c28e440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar2 == (undefined **)0x0) ||
     (ppuVar3 = ppuVar2, func_0x00010bf32ee0(), ppuVar3 == (undefined **)0x0)) {
    unaff_x26 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = unaff_x26;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    _objc_release(unaff_x26);
    if ((param_5 == (undefined **)0x0) && (((undefined **)0x7ff < ppuVar13 && (uVar1 == 0)))) {
      ppuVar3 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar4 = ppuVar13;
      func_0x00010c11f420();
      unaff_x26 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      if (ppuVar4 == (undefined **)0x7fffffffffffffff) {
        param_5 = (undefined **)0x0;
        unaff_x26 = ppuVar3;
      }
      else {
        ppuVar3 = ppuVar13;
        func_0x00010c260c20(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar3 = ppuVar13;
        func_0x00010c260c00();
        _objc_retainAutoreleasedReturnValue();
        if ((unaff_x26 == (undefined **)0x0) ||
           (ppuVar4 = ppuVar3, func_0x00010c08fa60(), ppuVar4 == (undefined **)0x0)) {
          param_5 = (undefined **)0x0;
        }
        else {
          param_5 = ppuVar3;
          func_0x00010bf64920(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = param_3;
          func_0x00010c0d3c80();
          ppuStack_120 = ppuVar3;
          func_0x00010c21afe0();
          func_0x00010c1a4fc0(ppuVar4);
          func_0x00010c2201e0(ppuVar4);
          func_0x00010c2201e0(ppuVar4);
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          ppuStack_110 = unaff_x26;
          func_0x00010c08fa60(param_5);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_128 = ppuVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          param_4 = &PTR____CFConstantStringClassReference_110dd69f8;
          func_0x00010c2201e0(ppuVar4);
          unaff_x26 = ppuStack_110;
          _objc_release(ppuVar3);
          _objc_release(ppuStack_128);
          _objc_release(param_3);
          param_3 = ppuVar4;
          ppuVar3 = ppuStack_120;
        }
        _objc_release(ppuVar3);
        _objc_release(unaff_x26);
      }
      _objc_release(ppuVar13);
    }
  }
  func_0x00010c19b4a0(param_9);
  ppuVar3 = param_9;
  func_0x00010c26b620();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar13 = param_9;
    func_0x00010bfabb40();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = ppuVar13;
    if ((uVar1 == 0) || (uVar5 = uVar1, func_0x00010c235180(), (int)uVar5 != 0)) {
      func_0x00010bfabbe0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = ppuVar13;
      ppuVar13 = param_4;
    }
    else {
      unaff_x26 = ppuStack_f8;
      func_0x00010c28dd60();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar4 = param_9;
    ppuStack_110 = param_7;
    func_0x00010bf011c0();
    if ((int)ppuVar4 != 0) {
      func_0x00010c167180(unaff_x26);
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dc8d58;
      ppuVar13 = (undefined **)0x1;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c167400(unaff_x26);
      _objc_release(puVar9);
    }
    uVar5 = param_8;
    func_0x00010c0b3bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    uVar7 = uVar5;
    if (uVar6 != 0) {
      ppuVar4 = param_9;
      func_0x00010c0f2680();
      if (1 < (long)ppuVar4 + 1U) {
        uStack_130 = (long)ppuVar4 + 1U;
        func_0x00010c25cde0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
      }
      func_0x00010c17ed60(unaff_x26);
    }
    uStack_118 = uVar1;
    if ((uStack_108 & 1) == 0) {
      func_0x00010c16caa0(unaff_x26);
    }
    else {
      ppuVar4 = param_9;
      func_0x00010bf11180(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16caa0(unaff_x26);
      _objc_release(ppuVar4);
    }
    ppuStack_128 = ppuVar2;
    uStack_108 = param_8;
    func_0x00010c07c960(param_9);
    func_0x00010c1eda00(unaff_x26);
    func_0x00010c0c2bc0(param_9);
    func_0x00010c1c35e0(unaff_x26);
    ppuVar2 = param_9;
    func_0x00010c13f400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (ppuVar2 != (undefined **)0x0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104a14408;
      puStack_88 = &UNK_1107be5d0;
      ppuVar2 = param_9;
      _objc_retain();
      ppuStack_80 = ppuVar2;
      func_0x00010c1ed8e0(unaff_x26);
      _objc_release(ppuStack_80);
    }
    func_0x00010c1d06e0(param_9);
    func_0x00010c172d00(unaff_x26);
    ppuVar2 = ppuStack_f8;
    ppuVar4 = ppuStack_f8;
    func_0x00010c0f43e0(ppuStack_f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175be0(unaff_x26);
    _objc_release(ppuVar4);
    func_0x00010bf94240(param_9);
    puStack_f0 = puVar9;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104a1460c;
    puStack_d8 = &UNK_1107be600;
    ppuVar4 = param_9;
    _objc_retain();
    param_8 = uStack_108;
    ppuStack_c8 = ppuVar2;
    uVar1 = uStack_108;
    ppuStack_d0 = ppuVar4;
    ppuStack_c0 = unaff_x26;
    _objc_retain();
    param_7 = ppuStack_110;
    ppuStack_a8 = ppuStack_100;
    ppuVar2 = ppuStack_110;
    uStack_b8 = uVar1;
    _objc_retain();
    ppuStack_b0 = ppuVar2;
    _objc_retain();
    ppuVar4 = &puStack_f0;
    func_0x00010bf18100();
    _objc_release(ppuStack_b0);
    _objc_release(uStack_b8);
    _objc_release(ppuStack_c0);
    _objc_release(ppuStack_d0);
    _objc_release(unaff_x26);
    _objc_release(uVar7);
    _objc_release(ppuStack_120);
    uVar1 = uStack_118;
    ppuVar2 = ppuStack_128;
  }
  else {
    ppuVar4 = param_9;
    ppuVar13 = ppuVar3;
    func_0x00010c23c9c0(ppuStack_f8);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  ppuVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104a14408;
  ppuStack_180 = unaff_x26;
  ppuStack_178 = ppuVar3;
  ppuStack_170 = ppuVar2;
  uStack_168 = uVar1;
  ppuStack_160 = param_9;
  uStack_158 = param_8;
  ppuStack_150 = param_7;
  ppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  puVar9 = ppuVar8[4];
  func_0x00010c13f400();
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 == (undefined *)0x0) {
    (*(code *)ppuVar13[2])(ppuVar13,param_2);
  }
  else {
    puVar10 = ppuVar8[4];
    func_0x00010bf28600(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = ppuVar8[4];
    func_0x00010bf28660(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_104a14570;
    puStack_1b0 = &UNK_1107be5a0;
    puVar12 = ppuVar8[4];
    _objc_retain();
    ppuVar2 = ppuVar13;
    puStack_1a8 = puVar12;
    _objc_retain();
    puVar12 = puVar9;
    ppuStack_198 = ppuVar2;
    _objc_retain();
    uStack_188 = (undefined1)param_2;
    ppuVar2 = ppuVar4;
    puStack_190 = puVar12;
    _objc_retain();
    ppuStack_1a0 = ppuVar2;
    FUN_104c62d88(puVar10,puVar11,&puStack_1c8);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(ppuStack_1a0);
    _objc_release(puStack_190);
    _objc_release(ppuStack_198);
    _objc_release(puStack_1a8);
  }
  _objc_release(puVar9);
  _objc_release(ppuVar13);
  _objc_release(ppuVar4);
  return;
}



/* Entry: 104a14408; end: 104a1456f;  */

void FUN_104a14408(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13f400();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf28600(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf28660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104a14570;
    puStack_80 = &UNK_1107be5a0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain();
    lVar5 = param_4;
    uStack_78 = uVar4;
    _objc_retain();
    lVar6 = lVar1;
    lStack_68 = lVar5;
    _objc_retain();
    uStack_58 = (undefined1)param_2;
    uVar4 = param_3;
    lStack_60 = lVar6;
    _objc_retain();
    uStack_70 = uVar4;
    FUN_104c62d88(uVar2,uVar3,&puStack_98);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_70);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_release(uStack_78);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a14570; end: 104a1460b;  */

void FUN_104a14570(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    (**(code **)(lVar2 + 0x10))
              (lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a145bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar2);
  return;
}



/* Entry: 104a1460c; end: 104a1495b;  */

void FUN_104a1460c(long param_1,long param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  func_0x00010c24df00(*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  puVar2 = param_3;
  if (iVar1 != 0) {
    _objc_release(param_2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_2 = 0;
  }
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c08fa60();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x00010bfd1de0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010c10a160();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf3ec40();
    puVar11 = puVar2;
    if (299 < (long)puVar3) {
      lVar4 = *(long *)(param_1 + 0x30);
      func_0x00010bf892c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c13b8c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        if (param_2 != 0) {
          uVar8 = uVar7;
          func_0x00010bfda7c0();
          if ((int)uVar8 == 0) {
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc();
            func_0x00010c008340();
            puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
LAB_104a148bc:
            _objc_release(puVar2);
          }
          else {
            puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bdc1900();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
            puVar9 = puVar10;
            func_0x00010c075f00();
            puVar3 = puVar10;
            if ((int)puVar9 != 0) {
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
            }
            puVar10 = puVar3;
            func_0x00010c296f60();
            _objc_retainAutoreleasedReturnValue();
            if (puVar10 != (undefined *)0x0) {
              puVar9 = PTR_PTR_1126ae118;
              func_0x00010c0e02c0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar9;
              func_0x00010bfb64e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              puVar2 = puVar9;
              goto LAB_104a148bc;
            }
          }
          _objc_release(puVar10);
          _objc_release(puVar3);
        }
        _objc_release(uVar7);
        _objc_release(uVar6);
      }
      _objc_release(lVar4);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bfd1de0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain();
  _objc_retain(uVar6);
  func_0x00010c15f940();
  lVar15 = lVar5;
  func_0x00010bdc1c20(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bfad160();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar5;
  func_0x00010bfacca0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010c28e120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae158;
  if (lVar14 == 0) {
    func_0x00010c28dd80(PTR_PTR_1126ae158);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar12 == 0) {
      if (lVar4 == 0) {
        if (lVar13 != 0) {
          func_0x00010c21cd20(puVar2);
        }
      }
      else {
        func_0x00010c21cc60(puVar2);
      }
      goto LAB_104a14a90;
    }
  }
  else {
    func_0x00010c28dd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  func_0x00010c21cd60(puVar2);
LAB_104a14a90:
  func_0x00010c28fe40(lVar5);
  func_0x00010c21d5e0(puVar2);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a1495c; end: 104a14b23; -[GTLRService uploadFetcherWithRequest:fetcherService:params:] */

void FUN_104a1495c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010c15f940();
  if (param_1 < 0xc351) {
    param_1 = 50000;
  }
  lVar1 = param_5;
  func_0x00010bdc1c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bfad160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bfacca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c28e120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae158;
  if (lVar5 == 0) {
    func_0x00010c28dd80(PTR_PTR_1126ae158,param_2,param_3,lVar1,param_1,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    if (lVar3 == 0) {
      if (lVar2 == 0) {
        if (lVar4 != 0) {
          func_0x00010c21cd20(puVar6,param_2,lVar4);
        }
      }
      else {
        func_0x00010c21cc60(puVar6,param_2,lVar2);
      }
      goto LAB_104a14a90;
    }
  }
  else {
    func_0x00010c28dd00(PTR_PTR_1126ae158,param_2,lVar5,lVar1,param_1,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  func_0x00010c21cd60(puVar6,param_2,lVar3);
LAB_104a14a90:
  lVar7 = param_5;
  func_0x00010c28fe40(param_5);
  func_0x00010c21d5e0(puVar6,param_2,lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104a14b24; end: 104a152d3; -[GTLRService executeBatchQuery:completionHandler:ticket:] */

void FUN_104a14b24(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  long lVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uStack_1c0;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  ppuVar2 = param_3;
  func_0x00010bf51e00();
  func_0x00010c06a140(param_3);
  ppuVar3 = ppuVar2;
  func_0x00010c11d020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar4 == (undefined **)0x0) {
    param_1 = (undefined **)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae150;
    func_0x00010bdc1be0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar3;
    _objc_retain();
    ppuVar4 = ppuVar20;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar4 != (undefined **)0x0) {
      ppuVar23 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar20);
        }
        lVar24 = *(long *)((long)ppuVar23 * 8);
        lVar8 = lVar24;
        func_0x00010bf1eb20();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bdc18a0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar24;
        func_0x00010c1356e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c08fa60();
        if ((lVar11 == 0) || (puVar25 = puVar5, func_0x00010bf4b900(), ((ulong)puVar25 & 1) != 0)) {
LAB_104a15224:
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          param_1 = (undefined **)0x0;
          goto LAB_104a15240;
        }
        func_0x00010befa120(puVar5);
        ppuVar12 = param_1;
        func_0x00010bdc2f40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
          puVar25 = (undefined *)0x0;
          uStack_1c0 = 0;
        }
        else {
          puVar25 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010bf64b60();
          _objc_retainAutoreleasedReturnValue();
          uStack_1c0 = 0;
          _objc_retain();
          if (puVar25 == (undefined *)0x0) {
            _objc_release();
            _objc_release(ppuVar13);
            _objc_release(ppuVar12);
            goto LAB_104a15224;
          }
        }
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar11 = lVar24;
        func_0x00010bfe4c80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(puVar25);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar15);
        lVar11 = lVar24;
        func_0x00010befcfe0(lVar24);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar11;
        param_2 = ppuVar17;
        FUN_104a152d4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        _objc_release(lVar11);
        puVar15 = PTR_PTR_1126ae150;
        func_0x00010bf64b20(PTR_PTR_1126ae150);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        func_0x00010bf64920(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar16;
        func_0x00010c0d3c80();
        _objc_release(puVar16);
        func_0x00010bf06ae0(puVar19);
        if (puVar25 != (undefined *)0x0) {
          func_0x00010bf06ae0(puVar19);
        }
        puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa600(puVar7);
        lVar11 = lVar24;
        func_0x00010c0b3bc0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 == 0) {
          func_0x00010bf39c40(lVar24);
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar24 = lVar11;
          _objc_retain(lVar11);
        }
        _objc_release(lVar11);
        func_0x00010befa120(puVar6);
        _objc_release(lVar24);
        _objc_release(puVar16);
        _objc_release(puVar19);
        _objc_release(puVar15);
        _objc_release(lVar18);
        _objc_release(puVar14);
        _objc_release(puVar25);
        _objc_release(uStack_1c0);
        _objc_release(ppuVar13);
        _objc_release(ppuVar12);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar4 != ppuVar23);
      ppuVar4 = ppuVar20;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar20);
    func_0x00010bfbf400(puVar7);
    ppuVar20 = (undefined **)0x0;
    _objc_retain(0);
    uVar21 = 0;
    _objc_retain(0);
    func_0x00010c173940(ppuVar2);
    if (ppuVar2 != (undefined **)0x0) {
      func_0x00010c2348c0();
    }
    ppuVar23 = param_1;
    func_0x00010c141740(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_1;
    func_0x00010bf17060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar4 = ppuVar12;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar23;
    func_0x00010c25ce40(ppuVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = param_1;
    func_0x00010befd480();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = param_3;
    func_0x00010befd480();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar4;
    param_2 = ppuVar13;
    FUN_104a152d4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar17;
    func_0x00010bf529e0();
    if (ppuVar4 == (undefined **)0x0) {
      puVar25 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar25 = PTR_PTR_1126ae140;
      func_0x00010bdc34a0(PTR_PTR_1126ae140);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf39c40(PTR_PTR_1126ae0e8);
    func_0x00010bfa8f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    _objc_release(ppuVar17);
    _objc_release(ppuVar12);
    _objc_release(ppuVar23);
    _objc_release(uVar21);
LAB_104a15240:
    _objc_release(ppuVar20);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain();
    param_1 = param_3;
    if ((param_2 == (undefined **)0x0) || (param_1 = param_2, param_3 == (undefined **)0x0)) {
      _objc_retain(param_1);
    }
    else {
      param_1 = param_3;
      func_0x00010c0d3c80(param_3);
      func_0x00010bef7f60();
    }
    _objc_release(param_2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a152d4; end: 104a15353;  */

void FUN_104a152d4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_1;
  if ((param_2 == 0) || (lVar1 = param_2, param_1 == 0)) {
    _objc_retain(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0d3c80(param_1);
    func_0x00010bef7f60();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a15354; end: 104a155b3; -[GTLRService fetchObjectWithURL:objectClass:bodyObject:ETag:httpMethod:mayAuthorize:completionHandler:executingQuery:ticket:] */

void FUN_104a15354(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined *param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  puVar2 = param_5;
  uStack_98 = param_4;
  uStack_8c = param_8;
  lStack_88 = param_1;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = param_10;
  _objc_retain();
  _objc_retain();
  if (param_3 == 0) {
    lVar10 = 0;
    goto LAB_104a1553c;
  }
  if (param_5 == (undefined *)0x0) {
LAB_104a15428:
    param_10 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c28e440();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2330e0();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) != 0) goto LAB_104a15428;
    puVar2 = param_5;
    func_0x00010bdc18a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_a0 = puVar2;
    if (*(char *)(lStack_88 + 0x31) == '\x01') {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dbf1f8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
    }
    else {
      _objc_retain();
    }
    uStack_80 = 0;
    param_10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_80;
    _objc_retain(uStack_80);
    _objc_release(puStack_a0);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  uStack_c0 = (undefined1)uStack_8c;
  lVar10 = lStack_88;
  lVar5 = param_3;
  param_4 = uStack_98;
  puVar2 = param_5;
  uStack_b8 = param_9;
  puStack_b0 = puVar1;
  uStack_a8 = param_11;
  func_0x00010bfa8f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
LAB_104a1553c:
  _objc_release(param_11);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104a155b4;
  puStack_100 = param_10;
  lStack_f8 = lVar10;
  uStack_f0 = param_7;
  uStack_e8 = param_6;
  puStack_e0 = param_5;
  lStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain();
  lVar10 = lVar5;
  func_0x00010c28e4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    lVar6 = lVar5;
    func_0x00010bf28600(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf28660(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_104a156bc;
    puStack_128 = &UNK_1107be630;
    lVar8 = lVar5;
    _objc_retain();
    lVar9 = lVar10;
    lStack_120 = lVar8;
    _objc_retain();
    lStack_118 = lVar9;
    uStack_110 = param_4;
    puStack_108 = puVar2;
    FUN_104c62d88(lVar6,lVar7,&puStack_140);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lStack_118);
    _objc_release(lStack_120);
  }
  _objc_release(lVar10);
  _objc_release(lVar5);
  return;
}



/* Entry: 104a155b4; end: 104a156bb; -[GTLRService invokeProgressCallbackForTicket:deliveredBytes:totalBytes:] */

void FUN_104a155b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c28e4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf28600(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf28660(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104a156bc;
    puStack_68 = &UNK_1107be630;
    lVar4 = param_3;
    _objc_retain();
    lVar5 = lVar1;
    lStack_60 = lVar4;
    _objc_retain();
    lStack_58 = lVar5;
    uStack_50 = param_4;
    uStack_48 = param_5;
    FUN_104c62d88(lVar2,lVar3,&puStack_80);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104a156bc; end: 104a156fb;  */

void FUN_104a156bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a156f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104a156fc; end: 104a1598f; -[GTLRService prepareToParseObjectForFetcher:executingQuery:ticket:error:defaultClass:completionHandler:] */

void FUN_104a156fc(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong unaff_x28;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010c1049c0(param_5,param_2,&PTR____CFConstantStringClassReference_110da6cb8,param_5,0);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  uVar3 = param_4;
  func_0x00010c06d0e0();
  puVar20 = (undefined *)0x0;
  if ((int)uVar3 != 0) {
    unaff_x28 = param_4;
    uStack_158 = param_8;
    puStack_150 = param_6;
    uStack_148 = param_1;
    uStack_140 = param_7;
    puStack_138 = param_3;
    func_0x00010c11d020();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    uVar3 = unaff_x28;
    func_0x00010bf529e0();
    func_0x00010bf71fe0(puVar20,param_2,uVar3);
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
    uVar3 = unaff_x28;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar17 = *plStack_120;
      do {
        uVar18 = 0;
        do {
          if (*plStack_120 != lVar17) {
            _objc_enumerationMutation(unaff_x28);
          }
          uVar16 = *(undefined8 *)(lStack_128 + uVar18 * 8);
          uVar4 = uVar16;
          func_0x00010bf9c2e0(uVar16);
          func_0x00010c1356e0(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(puVar20,param_2,uVar4,uVar16);
          _objc_release(uVar16);
          uVar18 = uVar18 + 1;
        } while (uVar3 != uVar18);
        uVar3 = unaff_x28;
        func_0x00010bf52a60(unaff_x28,param_2,&uStack_130,auStack_f0,0x10);
      } while (uVar3 != 0);
    }
    _objc_release(unaff_x28);
    _objc_release(unaff_x28);
    param_3 = puStack_138;
    param_8 = uStack_158;
    param_7 = uStack_140;
    param_6 = puStack_150;
    param_1 = uStack_148;
  }
  uStack_170 = 1;
  puVar6 = param_3;
  uVar3 = param_4;
  uVar4 = param_5;
  puVar7 = param_6;
  uVar16 = param_7;
  puVar8 = puVar20;
  uStack_168 = param_8;
  func_0x00010c0f4340(param_1);
  _objc_release(puVar20);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = uStack_168;
  uVar1 = uStack_170;
  pcStack_178 = FUN_104a15990;
  uStack_1d0 = unaff_x28;
  puStack_1c8 = puVar20;
  puStack_1c0 = puVar2;
  uStack_1b8 = param_1;
  puStack_1b0 = param_6;
  uStack_1a8 = param_7;
  uStack_1a0 = param_5;
  uStack_198 = param_8;
  uStack_190 = param_4;
  puStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar18 = uVar3;
  func_0x00010c06d0e0();
  if ((uVar18 & 1) == 0) {
    uStack_1e8 = uVar3;
    func_0x00010bf88840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_1e8 = 0;
  }
  puVar20 = puVar6;
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf892c0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar10;
  func_0x00010c08fa60();
  puVar11 = puVar2;
  func_0x00010bfda7c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e01958);
  puVar14 = puVar7;
  if (puVar19 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    goto LAB_104a15ca4;
  }
  uVar12 = uVar4;
  func_0x00010c0dfde0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uStack_1e8;
  func_0x00010c08fa60();
  if ((puVar7 == (undefined *)0x0) && (uVar18 != 0)) {
    puVar19 = PTR_PTR_1126ae160;
    func_0x00010c0dfc60(PTR_PTR_1126ae160);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189480();
    func_0x00010c182a00(puVar19,param_2,puVar2);
    puVar14 = (undefined *)0x0;
  }
  else if ((int)puVar11 == 0) {
    uStack_1e0 = 0;
    puVar11 = puVar5;
    func_0x00010c06f500(puVar5,param_2,puVar2,&uStack_1e0);
    uVar16 = uStack_1e0;
    _objc_retain();
    puVar19 = (undefined *)0x0;
    if ((int)puVar11 != 0) {
      puVar11 = PTR_PTR_1126ae150;
      func_0x00010bdc1c00(PTR_PTR_1126ae150,param_2,uVar16,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c13bb40(puVar5,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar5;
      func_0x00010bf17160(puVar5,param_2,puVar13,puVar8,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar11);
    }
    _objc_release(uVar16);
  }
  else {
    puStack_1d8 = (undefined *)0x0;
    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar10,1,
                        &puStack_1d8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puStack_1d8;
    _objc_retain();
    if (puVar11 == (undefined *)0x0) {
      puVar14 = puVar13;
      _objc_retain();
      puVar19 = (undefined *)0x0;
      puVar15 = puVar7;
LAB_104a15c84:
      _objc_release(puVar15);
    }
    else {
      puVar15 = puVar11;
      if ((puVar5[0x31] & 1) == 0) {
        _objc_retain(puVar11);
LAB_104a15c58:
        puVar19 = PTR_PTR_1126ae0f0;
        func_0x00010c0dfee0(PTR_PTR_1126ae0f0,param_2,puVar15,uVar16,uVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104a15c84;
      }
      func_0x00010c296f60(puVar11,param_2,&PTR____CFConstantStringClassReference_110dbf1f8);
      _objc_retainAutoreleasedReturnValue();
      if (puVar15 != (undefined *)0x0) goto LAB_104a15c58;
      puVar19 = (undefined *)0x0;
    }
    _objc_release(puVar11);
    _objc_release(puVar13);
  }
  _objc_release(uVar12);
LAB_104a15ca4:
  func_0x00010bfd1de0(puVar5,param_2,puVar6,uVar3,uVar4,puVar14,puVar19,uVar1,uVar9);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar20);
  _objc_release(uStack_1e8);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar6);
  return;
}



/* Entry: 104a15990; end: 104a15d47; -[GTLRService parseObjectFromDataOfFetcher:executingQuery:ticket:error:defaultClass:batchClassMap:hasSentParsingStartNotification:completionHandler:] */

void FUN_104a15990(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_4;
  func_0x00010c06d0e0();
  if ((uVar1 & 1) == 0) {
    uStack_78 = param_4;
    func_0x00010bf88840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_78 = 0;
  }
  lVar2 = param_3;
  func_0x00010c13b8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf892c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  lVar6 = lVar3;
  func_0x00010bfda7c0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e01958);
  puVar11 = param_6;
  if (lVar5 == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_104a15ca4;
  }
  uVar7 = param_5;
  func_0x00010c0dfde0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_78;
  func_0x00010c08fa60();
  if ((param_6 == (undefined *)0x0) && (uVar1 != 0)) {
    puVar13 = PTR_PTR_1126ae160;
    func_0x00010c0dfc60(PTR_PTR_1126ae160);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189480();
    func_0x00010c182a00(puVar13,param_2,lVar3);
    puVar11 = (undefined *)0x0;
  }
  else if ((int)lVar6 == 0) {
    uStack_70 = 0;
    puVar8 = param_1;
    func_0x00010c06f500(param_1,param_2,lVar3,&uStack_70);
    uVar9 = uStack_70;
    _objc_retain();
    puVar13 = (undefined *)0x0;
    if ((int)puVar8 != 0) {
      puVar8 = PTR_PTR_1126ae150;
      func_0x00010bdc1c00(PTR_PTR_1126ae150,param_2,uVar9,lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c13bb40(param_1,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1;
      func_0x00010bf17160(param_1,param_2,puVar10,param_8,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar8);
    }
    _objc_release(uVar9);
  }
  else {
    puStack_68 = (undefined *)0x0;
    puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,lVar4,1,&puStack_68)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_68;
    _objc_retain();
    if (puVar8 == (undefined *)0x0) {
      puVar11 = puVar10;
      _objc_retain();
      puVar13 = (undefined *)0x0;
      puVar12 = param_6;
LAB_104a15c84:
      _objc_release(puVar12);
    }
    else {
      puVar12 = puVar8;
      if ((param_1[0x31] & 1) == 0) {
        _objc_retain(puVar8);
LAB_104a15c58:
        puVar13 = PTR_PTR_1126ae0f0;
        func_0x00010c0dfee0(PTR_PTR_1126ae0f0,param_2,puVar12,param_7,uVar7);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104a15c84;
      }
      func_0x00010c296f60(puVar8,param_2,&PTR____CFConstantStringClassReference_110dbf1f8);
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) goto LAB_104a15c58;
      puVar13 = (undefined *)0x0;
    }
    _objc_release(puVar8);
    _objc_release(puVar10);
  }
  _objc_release(uVar7);
LAB_104a15ca4:
  func_0x00010bfd1de0(param_1,param_2,param_3,param_4,param_5,puVar11,puVar13,param_9,param_11);
  _objc_release(puVar13);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uStack_78);
  _objc_release(puVar11);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a15d48; end: 104a1602f; -[GTLRService handleParsedObjectForFetcher:executingQuery:ticket:error:parsedObject:hasSentParsingStartNotification:completionHandler:] */

void FUN_104a15d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,int param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010bf39c40(PTR_PTR_1126ae168);
  uVar1 = param_4;
  func_0x00010c075f00();
  lVar2 = param_5;
  func_0x00010c230500();
  uVar8 = (uint)lVar2 & ((uint)uVar1 ^ 1);
  lVar2 = param_5;
  func_0x00010bfab8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  if ((uVar8 == 1 && param_7 != 0) && lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c0cae40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
  }
  func_0x00010c19b5e0(param_5);
  func_0x00010c19b3c0(param_5);
  if (param_8 != 0) {
    func_0x00010c1049c0(param_5);
  }
  if (param_6 == 0) {
    func_0x00010c0f2680(param_5);
    func_0x00010c1d8b00(param_5);
    if (uVar8 != 0) {
      lVar4 = param_1;
      func_0x00010c0d9ca0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar8 = 1;
      }
      else {
        lVar5 = param_1;
        func_0x00010bfa8e60();
        uVar8 = (uint)lVar5 ^ 1;
      }
      _objc_release(lVar4);
      goto joined_r0x000104a15ed0;
    }
  }
  uVar8 = 1;
joined_r0x000104a15ed0:
  if (lVar2 != 0) {
    func_0x00010c06a140(param_4);
  }
  lVar4 = param_5;
  func_0x00010c0ed880(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198100(param_5);
  _objc_release(lVar4);
  if (uVar8 != 0) {
    lVar4 = param_5;
    func_0x00010bf28600(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    func_0x00010bf28660(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104a16030;
    puStack_90 = &UNK_1107be660;
    lVar6 = param_5;
    _objc_retain();
    lVar7 = lVar3;
    lStack_88 = lVar6;
    _objc_retain();
    lVar6 = param_6;
    lStack_80 = lVar7;
    _objc_retain();
    uVar1 = param_9;
    lStack_78 = lVar6;
    lStack_70 = param_1;
    _objc_retain();
    uStack_68 = uVar1;
    FUN_104c62d88(lVar4,lVar5,&puStack_a8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uStack_68);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_release(lStack_88);
  }
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104a16030; end: 104a16113;  */

void FUN_104a16030(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0ed880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c06d0e0();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010bf44000();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 != 0) {
        (**(code **)(uVar2 + 0x10))
                  (uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30));
      }
      _objc_release(uVar2);
    }
    else {
      func_0x00010c06ac00(*(undefined8 *)(param_1 + 0x38));
    }
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))
                (lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
    }
    func_0x00010c1a5ac0(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010c128700(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf94240(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0dd5a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c06a140(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a16114; end: 104a161ab; -[GTLRService isContentTypeMultipart:boundary:] */

undefined *
FUN_104a16114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14f4e0();
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c14f5e0(puVar1,param_2,puVar2,param_4);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 104a161ac; end: 104a16303; -[GTLRService responsePartsWithMIMEParts:] */

void FUN_104a161ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
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
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar1 = param_3;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar16 = *plStack_110;
    do {
      lVar17 = 0;
      do {
        if (*plStack_110 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_1;
        func_0x00010c13bb20(param_1,param_2,*(undefined8 *)(lStack_118 + lVar17 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar3);
        _objc_release(uVar3);
        lVar17 = lVar17 + 1;
      } while (lVar1 != lVar17);
      lVar1 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain();
    puVar2 = PTR_PTR_1126ae170;
    _objc_alloc(PTR_PTR_1126ae170);
    func_0x00010bfee200();
    puVar5 = (undefined *)puVar4;
    func_0x00010bfe02c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfda7c0();
    puVar9 = puVar6;
    if ((int)puVar7 != 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110da6f38;
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110da6f38);
      func_0x00010c260c00(puVar6,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    func_0x00010c181f20(puVar2,param_2,puVar9);
    puVar6 = (undefined *)puVar4;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_188 = 0;
    func_0x00010c153820(PTR_PTR_1126ae150,param_2,puVar6,&UNK_10f45db86,4,&lStack_188);
    lVar1 = lStack_188;
    _objc_retain();
    lVar16 = lVar1;
    func_0x00010bf529e0();
    if (lVar16 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220();
      func_0x00010c220220(puVar7,param_2,puVar9,&PTR____CFConstantStringClassReference_110da6c38);
      puVar18 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110da6bf8,0xfffffffffffff447,puVar7
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9220(puVar2,param_2,puVar18);
    }
    else {
      puVar19 = puVar6;
      func_0x00010c08fa60();
      lVar16 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c2827c0();
      _objc_release(lVar16);
      puVar7 = puVar6;
      func_0x00010c25eac0(puVar6,param_2,0,lVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = (undefined *)0x0;
      puVar10 = (undefined *)(lVar17 + 4);
      if (puVar10 < puVar19) {
        puVar19 = puVar6;
        func_0x00010c08fa60(puVar6);
        puVar18 = puVar6;
        func_0x00010c25eac0(puVar6,param_2,puVar10,(long)puVar19 - (long)puVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      lStack_190 = lVar1;
      func_0x00010c153820(PTR_PTR_1126ae150,param_2,puVar7,&DAT_10f3dfd0a,2,&lStack_190);
      lVar16 = lStack_190;
      _objc_retain();
      _objc_release(lVar1);
      lVar1 = lVar16;
      func_0x00010bf529e0();
      puVar10 = puVar7;
      if (lVar1 == 0) {
        _objc_retain();
        puVar19 = (undefined *)0x0;
      }
      else {
        lVar1 = lVar16;
        func_0x00010c0dfd40(lVar16,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar1;
        func_0x00010c2827c0();
        _objc_release(lVar1);
        func_0x00010c25eac0(puVar7,param_2,0,lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar16;
        func_0x00010c0dfd40(lVar16,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar1;
        func_0x00010c2827c0();
        puVar20 = (undefined *)(lVar17 + 2);
        _objc_release(lVar1);
        puVar19 = puVar7;
        func_0x00010c08fa60();
        if (puVar19 == puVar20) {
          puVar19 = (undefined *)0x0;
        }
        else {
          puVar11 = puVar7;
          func_0x00010c08fa60(puVar7);
          puVar19 = puVar7;
          func_0x00010c25eac0(puVar7,param_2,puVar20,(long)puVar11 - (long)puVar20);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      uStack_1a0 = 0;
      func_0x00010bfc9a40(param_3,param_2,puVar10,&uStack_198,&uStack_1a0);
      uVar3 = uStack_1a0;
      _objc_retain();
      func_0x00010c20a3c0(puVar2,param_2,uStack_198);
      func_0x00010c20a4c0(puVar2,param_2,uVar3);
      if (puVar19 != (undefined *)0x0) {
        puVar20 = PTR_PTR_1126ae150;
        func_0x00010bfe0300(PTR_PTR_1126ae150,param_2,puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7b40(puVar2,param_2,puVar20);
        _objc_release(puVar20);
      }
      if (puVar18 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puStack_1a8 = (undefined *)0x0;
        puVar20 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar18,1,
                            &puStack_1a8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puStack_1a8;
        _objc_retain();
        if (puVar20 == (undefined *)0x0) {
          if (puVar11 == (undefined *)0x0) {
            puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                                &PTR____CFConstantStringClassReference_110da6bf8,0xfffffffffffff447,
                                0);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          puVar12 = puVar11;
          func_0x00010c292820(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf72020(puVar13,param_2,puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          func_0x00010c220220(puVar13,param_2,puVar6,
                              &PTR____CFConstantStringClassReference_110dc6858);
          func_0x00010c220220(puVar13,param_2,puVar9,
                              &PTR____CFConstantStringClassReference_110da6c38);
          puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
          puVar14 = puVar11;
          func_0x00010bf87dc0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar11;
          func_0x00010bf3ec40(puVar11);
          func_0x00010bf99240(puVar12,param_2,puVar14,puVar15,puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d9220(puVar2,param_2,puVar12);
          _objc_release(puVar12);
          _objc_release(puVar14);
          _objc_release(puVar13);
        }
        _objc_release(puVar11);
      }
      func_0x00010c1b64e0(puVar2,param_2,puVar20);
      _objc_release(puVar20);
      _objc_release(uVar3);
      _objc_release(puVar19);
      _objc_release(puVar10);
      lVar1 = lVar16;
    }
    _objc_release(puVar18);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar1);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a16304; end: 104a16867; -[GTLRService responsePartWithMIMEPart:] */

void FUN_104a16304(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae170;
  _objc_alloc(PTR_PTR_1126ae170);
  func_0x00010bfee200();
  puVar2 = param_3;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfda7c0();
  puVar6 = puVar3;
  if ((int)puVar4 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110da6f38;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110da6f38);
    func_0x00010c260c00(puVar3,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  func_0x00010c181f20(puVar1,param_2,puVar6);
  puVar3 = param_3;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  func_0x00010c153820(PTR_PTR_1126ae150,param_2,puVar3,&UNK_10f45db86,4,&lStack_68);
  lVar7 = lStack_68;
  _objc_retain();
  lVar8 = lVar7;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220();
    func_0x00010c220220(puVar4,param_2,puVar6,&PTR____CFConstantStringClassReference_110da6c38);
    puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110da6bf8,0xfffffffffffff447,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9220(puVar1,param_2,puVar17);
  }
  else {
    puVar18 = puVar3;
    func_0x00010c08fa60();
    lVar8 = lVar7;
    func_0x00010c0dfd40(lVar7,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c2827c0();
    _objc_release(lVar8);
    puVar4 = puVar3;
    func_0x00010c25eac0(puVar3,param_2,0,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined *)0x0;
    puVar10 = (undefined *)(lVar9 + 4);
    if (puVar10 < puVar18) {
      puVar18 = puVar3;
      func_0x00010c08fa60(puVar3);
      puVar17 = puVar3;
      func_0x00010c25eac0(puVar3,param_2,puVar10,(long)puVar18 - (long)puVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    lStack_70 = lVar7;
    func_0x00010c153820(PTR_PTR_1126ae150,param_2,puVar4,&DAT_10f3dfd0a,2,&lStack_70);
    lVar8 = lStack_70;
    _objc_retain();
    _objc_release(lVar7);
    lVar7 = lVar8;
    func_0x00010bf529e0();
    puVar10 = puVar4;
    if (lVar7 == 0) {
      _objc_retain();
      puVar18 = (undefined *)0x0;
    }
    else {
      lVar7 = lVar8;
      func_0x00010c0dfd40(lVar8,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c2827c0();
      _objc_release(lVar7);
      func_0x00010c25eac0(puVar4,param_2,0,lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c0dfd40(lVar8,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c2827c0();
      puVar19 = (undefined *)(lVar9 + 2);
      _objc_release(lVar7);
      puVar18 = puVar4;
      func_0x00010c08fa60();
      if (puVar18 == puVar19) {
        puVar18 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar4;
        func_0x00010c08fa60(puVar4);
        puVar18 = puVar4;
        func_0x00010c25eac0(puVar4,param_2,puVar19,(long)puVar11 - (long)puVar19);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    uStack_80 = 0;
    func_0x00010bfc9a40(param_1,param_2,puVar10,&uStack_78,&uStack_80);
    uVar12 = uStack_80;
    _objc_retain();
    func_0x00010c20a3c0(puVar1,param_2,uStack_78);
    func_0x00010c20a4c0(puVar1,param_2,uVar12);
    if (puVar18 != (undefined *)0x0) {
      puVar19 = PTR_PTR_1126ae150;
      func_0x00010bfe0300(PTR_PTR_1126ae150,param_2,puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7b40(puVar1,param_2,puVar19);
      _objc_release(puVar19);
    }
    if (puVar17 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puStack_88 = (undefined *)0x0;
      puVar19 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar17,1,
                          &puStack_88);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_88;
      _objc_retain();
      if (puVar19 == (undefined *)0x0) {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                              &PTR____CFConstantStringClassReference_110da6bf8,0xfffffffffffff447,0)
          ;
          _objc_retainAutoreleasedReturnValue();
        }
        puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        puVar13 = puVar11;
        func_0x00010c292820(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf72020(puVar14,param_2,puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        func_0x00010c220220(puVar14,param_2,puVar3,&PTR____CFConstantStringClassReference_110dc6858)
        ;
        func_0x00010c220220(puVar14,param_2,puVar6,&PTR____CFConstantStringClassReference_110da6c38)
        ;
        puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
        puVar15 = puVar11;
        func_0x00010bf87dc0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar11;
        func_0x00010bf3ec40(puVar11);
        func_0x00010bf99240(puVar13,param_2,puVar15,puVar16,puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9220(puVar1,param_2,puVar13);
        _objc_release(puVar13);
        _objc_release(puVar15);
        _objc_release(puVar14);
      }
      _objc_release(puVar11);
    }
    func_0x00010c1b64e0(puVar1,param_2,puVar19);
    _objc_release(puVar19);
    _objc_release(uVar12);
    _objc_release(puVar18);
    _objc_release(puVar10);
    lVar7 = lVar8;
  }
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a16868; end: 104a1698b; -[GTLRService getResponseLineFromData:statusCode:statusString:] */

void FUN_104a16868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  *param_4 = 0xffffffffffffffff;
  *param_5 = &PTR____CFConstantStringClassReference_110da6f58;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008340();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c0d96e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    puVar5 = puVar2;
    func_0x00010c14f5e0(puVar2,param_2,puVar3,&uStack_48);
    if (((int)puVar5 != 0) &&
       (puVar5 = puVar2, func_0x00010c14ed40(puVar2,param_2,param_4), (int)puVar5 != 0)) {
      func_0x00010c14f5e0(puVar2,param_2,puVar4,param_5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 104a1698c; end: 104a16e3f; -[GTLRService batchResultWithResponseParts:batchClassMap:objectClassResolver:] */

void FUN_104a1698c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **unaff_x22;
  undefined *puVar17;
  long unaff_x25;
  code *pcVar18;
  undefined8 unaff_x26;
  undefined **unaff_x27;
  undefined *puVar19;
  undefined **unaff_x28;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined8 *puStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  long lStack_200;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  uStack_170 = param_4;
  _objc_retain();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126ae0e8;
  func_0x00010bf39c40(PTR_PTR_1126ae0e8);
  uStack_178 = param_5;
  FUN_104a0ebe4(param_5,puVar17,puVar15);
  _objc_release(puVar17);
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uStack_190 = param_5;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_180 = puVar17;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_148 = puVar17;
  _objc_retain();
  puVar17 = auStack_f0;
  puVar15 = (undefined *)0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lStack_150 = *plStack_130;
    uStack_188 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    lStack_160 = param_3;
    puStack_158 = puVar1;
    do {
      unaff_x25 = 0;
      do {
        if (*plStack_130 != lStack_150) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(undefined ***)(lStack_138 + unaff_x25 * 8);
        ppuVar3 = unaff_x22;
        func_0x00010bf4c6c0(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x22;
        func_0x00010bdc18a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = unaff_x22;
        func_0x00010c0f3fe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x22;
        func_0x00010c252ee0();
        ppuVar5 = unaff_x22;
        func_0x00010bfe02c0(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puStack_148);
        _objc_release(ppuVar5);
        if (ppuVar4 == (undefined **)0x0) {
          ppuVar5 = unaff_x28;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar5 == (undefined **)0x0) {
            if (unaff_x27 + -0x32 < (undefined **)0xffffffffffffff38) {
              func_0x00010c2534a0();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_f8 = &PTR____CFConstantStringClassReference_110dcee98;
              if (unaff_x22 != (undefined **)0x0) {
                ppuStack_f8 = unaff_x22;
              }
              uStack_100 = uStack_188;
              puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = PTR__OBJC_CLASS___NSError_1126ae858;
              puStack_168 = puVar17;
              func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = (undefined **)PTR_PTR_1126ae118;
              func_0x00010c0e02a0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puStack_158;
              func_0x00010c220220(puStack_158);
              _objc_release(unaff_x27);
              _objc_release(puVar15);
              _objc_release(puStack_168);
              param_3 = lStack_160;
            }
            else {
              func_0x00010c0e00e0(uStack_170);
              _objc_unsafeClaimAutoreleasedReturnValue();
              unaff_x22 = (undefined **)PTR_PTR_1126ae0f0;
              ppuVar6 = unaff_x28;
              func_0x00010c0d3c80(unaff_x28);
              func_0x00010c0dfee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar6);
              if (unaff_x22 == (undefined **)0x0) {
                unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
                func_0x00010c0ddbe0();
                _objc_retainAutoreleasedReturnValue();
              }
              func_0x00010c220220(puStack_180);
              puVar1 = puStack_158;
              param_3 = lStack_160;
            }
          }
          else {
            unaff_x22 = (undefined **)PTR_PTR_1126ae118;
            func_0x00010c0e02c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220220(puVar1);
          }
          _objc_release(unaff_x22);
        }
        else {
          ppuVar5 = (undefined **)PTR_PTR_1126ae118;
          func_0x00010c0e02a0(PTR_PTR_1126ae118);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(puVar1);
        }
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(unaff_x28);
        _objc_release(ppuVar3);
        unaff_x25 = unaff_x25 + 1;
      } while (lVar2 != unaff_x25);
      puVar17 = auStack_f0;
      puVar15 = (undefined *)0x10;
      lVar2 = param_3;
      func_0x00010bf52a60();
      unaff_x26 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar8 = puStack_180;
  uVar16 = uStack_190;
  func_0x00010c20f8e0(uStack_190);
  func_0x00010c19a0c0(uVar16);
  puVar9 = puStack_148;
  puVar7 = puStack_148;
  func_0x00010c1ecfe0(uVar16);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_1b8 = puVar9;
    puStack_1b0 = puVar8;
    uStack_1a8 = uVar16;
    pcStack_198 = FUN_104a16e40;
    lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar12 = param_6;
    ppuStack_1f0 = unaff_x28;
    ppuStack_1e8 = unaff_x27;
    uStack_1e0 = unaff_x26;
    lStack_1d8 = unaff_x25;
    lStack_1d0 = param_3;
    puStack_1c8 = puVar1;
    ppuStack_1c0 = unaff_x22;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain();
    _objc_retain();
    puVar1 = param_6;
    _objc_retain();
    puVar8 = puVar15;
    func_0x00010c261c00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    puStack_2e8 = puVar15;
    puStack_2d8 = puVar8;
    func_0x00010bfa02e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    puVar8 = puVar17;
    puStack_2e0 = puVar17;
    puStack_2c8 = puVar9;
    func_0x00010c11d020();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_2c0;
    puVar13 = auStack_280;
    uVar16 = 0x10;
    puVar9 = puVar8;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      param_3 = *plStack_2b0;
      puStack_2d0 = puVar8;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_2b0 != param_3) {
            _objc_enumerationMutation(puVar8);
          }
          param_6 = *(undefined **)(lStack_2b8 + (long)puVar15 * 8);
          puVar10 = param_6;
          func_0x00010bf44000();
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 != (undefined *)0x0) {
            puVar19 = puVar1;
            _objc_retain(puVar1);
            if (puVar1 == (undefined *)0x0) {
              func_0x00010c1356e0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puStack_2c8;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 == (undefined *)0x0) {
                puVar17 = puStack_2d8;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (puVar17 == (undefined *)0x0) {
                  puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  puVar19 = (undefined *)0x0;
                }
              }
              else {
                puVar19 = puVar8;
                func_0x00010bfb64e0(puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = (undefined *)0x0;
              }
              _objc_release(puVar8);
              _objc_release(param_6);
              puVar8 = puStack_2d0;
            }
            else {
              puVar17 = (undefined *)0x0;
            }
            (**(code **)(puVar10 + 0x10))(puVar10,puVar7,puVar17,puVar19);
            _objc_release(puVar19);
            _objc_release(puVar17);
          }
          _objc_release(puVar10);
          puVar15 = puVar15 + 1;
        } while (puVar9 != puVar15);
        puVar11 = &uStack_2c0;
        puVar13 = auStack_280;
        uVar16 = 0x10;
        puVar9 = puVar8;
        func_0x00010bf52a60();
        unaff_x26 = 0;
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    _objc_release(puStack_2c8);
    _objc_release(puStack_2d8);
    _objc_release(puVar1);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2e0);
    puVar9 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_200) {
      ___stack_chk_fail();
      pcStack_2f8 = FUN_104a170f8;
      uStack_340 = unaff_x26;
      puStack_338 = puVar8;
      lStack_330 = param_3;
      puStack_328 = puVar17;
      puStack_320 = puVar1;
      puStack_318 = puVar7;
      puStack_310 = param_6;
      puStack_308 = puVar15;
      ppuStack_300 = &puStack_1a0;
      _objc_retain();
      _objc_retain();
      _objc_retain();
      _objc_retain();
      puVar14 = puVar11;
      func_0x00010c0ed880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c198100(puVar11);
      puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_380 = 0xc2000000;
      pcStack_378 = FUN_104a17254;
      puStack_370 = &UNK_1107be6c0;
      pcVar18 = *(code **)(puVar13 + 0x10);
      puStack_368 = puVar11;
      puStack_360 = puVar9;
      uStack_358 = uVar16;
      puStack_350 = puVar14;
      puStack_348 = puVar12;
      _objc_retain(puVar12);
      _objc_retain(puVar14);
      _objc_retain(uVar16);
      _objc_retain(puVar11);
      (*pcVar18)(puVar13,puVar11,&puStack_388);
      _objc_release(puVar13);
      _objc_release(puStack_348);
      _objc_release(puStack_350);
      _objc_release(uStack_358);
      _objc_release(puStack_368);
      _objc_release(puVar12);
      _objc_release(puVar14);
      _objc_release(uVar16);
      _objc_release(puVar11);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar16);
  return;
}



/* Entry: 104a16e40; end: 104a170f7; -[GTLRService invokeBatchCompletionsWithTicket:batchQuery:batchResult:error:] */

void FUN_104a16e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x24;
  code *pcVar11;
  undefined8 unaff_x26;
  undefined *puVar12;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  puVar7 = param_6;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = param_6;
  _objc_retain();
  puVar2 = param_5;
  func_0x00010c261c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  puStack_158 = param_5;
  puStack_148 = puVar2;
  func_0x00010bfa02e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = param_4;
  puStack_150 = param_4;
  puStack_138 = puVar3;
  func_0x00010c11d020();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &uStack_130;
  puVar8 = auStack_f0;
  uVar10 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x24 = *plStack_120;
    puStack_140 = puVar2;
    do {
      param_5 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(puVar2);
        }
        param_6 = *(undefined **)(lStack_128 + (long)param_5 * 8);
        puVar4 = param_6;
        func_0x00010bf44000();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          puVar12 = puVar1;
          _objc_retain(puVar1);
          if (puVar1 == (undefined *)0x0) {
            func_0x00010c1356e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puStack_138;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 == (undefined *)0x0) {
              param_4 = puStack_148;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              if (param_4 == (undefined *)0x0) {
                puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
                func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar12 = (undefined *)0x0;
              }
            }
            else {
              puVar12 = puVar2;
              func_0x00010bfb64e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              param_4 = (undefined *)0x0;
            }
            _objc_release(puVar2);
            _objc_release(param_6);
            puVar2 = puStack_140;
          }
          else {
            param_4 = (undefined *)0x0;
          }
          (**(code **)(puVar4 + 0x10))(puVar4,param_3,param_4,puVar12);
          _objc_release(puVar12);
          _objc_release(param_4);
        }
        _objc_release(puVar4);
        param_5 = param_5 + 1;
      } while (puVar3 != param_5);
      puVar6 = &uStack_130;
      puVar8 = auStack_f0;
      uVar10 = 0x10;
      puVar3 = puVar2;
      func_0x00010bf52a60();
      unaff_x26 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puStack_138);
  _objc_release(puStack_148);
  _objc_release(puVar1);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  uVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_104a170f8;
  uStack_1b0 = unaff_x26;
  puStack_1a8 = puVar2;
  lStack_1a0 = unaff_x24;
  puStack_198 = param_4;
  puStack_190 = puVar1;
  uStack_188 = param_3;
  puStack_180 = param_6;
  puStack_178 = param_5;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar9 = puVar6;
  func_0x00010c0ed880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198100(puVar6);
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_104a17254;
  puStack_1e0 = &UNK_1107be6c0;
  pcVar11 = *(code **)(puVar8 + 0x10);
  puStack_1d8 = puVar6;
  uStack_1d0 = uVar5;
  uStack_1c8 = uVar10;
  puStack_1c0 = puVar9;
  puStack_1b8 = puVar7;
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  _objc_retain(puVar6);
  (*pcVar11)(puVar8,puVar6,&puStack_1f8);
  _objc_release(puVar8);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(puStack_1d8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(puVar6);
  return;
}



/* Entry: 104a170f8; end: 104a17253; -[GTLRService simulateFetchWithTicket:testBlock:dataToPost:completionHandler:] */

void FUN_104a170f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0ed880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198100(param_3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104a17254;
  puStack_80 = &UNK_1107be6c0;
  pcVar2 = *(code **)(param_4 + 0x10);
  uStack_78 = param_3;
  uStack_70 = param_1;
  uStack_68 = param_5;
  uStack_60 = uVar1;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_3);
  (*pcVar2)(param_4,param_3,&puStack_98);
  _objc_release(param_4);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104a17254; end: 104a17553;  */

void FUN_104a17254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf28600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf28660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104a173a4;
  puStack_80 = &UNK_1107be690;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  uStack_70 = param_3;
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar4;
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  uStack_50 = param_2;
  _objc_retain();
  uStack_48 = uVar4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  FUN_104c62d88(uVar1,uVar2,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 104a17554; end: 104a175ff;  */

void FUN_104a17554(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  return;
}



/* Entry: 104a17600; end: 104a17737; -[GTLRService simulatedUploadLengthForQuery:dataToPost:] */

long FUN_104a17600(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  _objc_retain();
  func_0x00010c08fa60(param_4);
  lVar1 = param_3;
  func_0x00010c28e440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) goto LAB_104a17710;
  lVar2 = lVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = lVar1;
    func_0x00010bfad160();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar5 = lVar1;
      func_0x00010bfacca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c157180();
LAB_104a176f4:
      param_4 = lVar6 + param_4;
    }
    else {
      lStack_58 = 0;
      lStack_60 = 0;
      lVar4 = lVar3;
      func_0x00010bfc99e0(lVar3,param_2,&lStack_58,*(undefined8 *)PTR__NSURLFileSizeKey_11034ab08,
                          &lStack_60);
      lVar6 = lStack_58;
      lVar5 = lStack_60;
      _objc_retain(lStack_60);
      if ((int)lVar4 != 0) {
        func_0x00010c282800(lVar6);
        goto LAB_104a176f4;
      }
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c08fa60(lVar2);
    param_4 = lVar3 + param_4;
  }
  _objc_release(lVar2);
LAB_104a17710:
  _objc_release(lVar1);
  return param_4;
}



/* Entry: 104a17738; end: 104a17a5b; -[GTLRService nextPageQueryForQuery:result:ticket:] */

undefined *
FUN_104a17738(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4,
             undefined *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_4;
  puVar6 = param_5;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar9 = param_3;
  func_0x00010c06d0e0();
  if (((ulong)puVar9 & 1) != 0) {
    puVar10 = param_4;
    _objc_retain();
    puVar3 = puVar10;
    func_0x00010c261c00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = &uStack_130;
    puVar7 = auStack_f0;
    puVar6 = (undefined *)0x10;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 == (undefined8 *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = (undefined *)0x0;
      lVar8 = *plStack_120;
      do {
        puVar7 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar3);
          }
          puVar2 = puVar3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_5;
          func_0x00010c11d480();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_1;
          func_0x00010c0d9ca0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar1 != 0) {
            if (puVar9 == (undefined *)0x0) {
              puVar9 = PTR_PTR_1126ae180;
              func_0x00010bf170a0();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010befac60(puVar9);
          }
          _objc_release(lVar1);
          _objc_release(puVar6);
          _objc_release(puVar2);
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar4 != puVar7);
        puVar2 = &uStack_130;
        puVar7 = auStack_f0;
        puVar6 = (undefined *)0x10;
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar3);
    _objc_release(puVar10);
    goto LAB_104a179f4;
  }
  puVar11 = param_3;
  _objc_retain();
  puVar2 = (undefined8 *)PTR_s_nextPageToken_112544108;
  puVar10 = param_4;
  puVar3 = (undefined8 *)PTR_s_nextPageToken_112544108;
  func_0x00010c13b700();
  if (((int)puVar10 == 0) ||
     (puVar9 = puVar11, puVar3 = (undefined8 *)PTR_s_pageToken_11261a1a0, func_0x00010c13b700(),
     (int)puVar9 == 0)) {
    puVar2 = puVar3;
    puVar10 = (undefined8 *)0x0;
LAB_104a179c4:
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar10 = param_4;
    func_0x00010c0f8ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined8 *)0x0) goto LAB_104a179c4;
    puVar2 = (undefined8 *)PTR_PTR_1126ae178;
    func_0x00010bf39c40();
    puVar3 = param_4;
    func_0x00010c075f00();
    if ((int)puVar3 == 0) goto LAB_104a179c4;
    puVar3 = param_4;
    func_0x00010bf39c40();
    func_0x00010bf3ff20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _NSSelectorFromString();
    puVar4 = param_4;
    func_0x00010c13b700();
    if ((int)puVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar11;
      func_0x00010bf51e00();
      puVar5 = puVar11;
      func_0x00010c1356e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebce0(puVar9);
      _objc_release(puVar5);
      puVar2 = (undefined8 *)PTR_s_setPageToken__112653c18;
      puVar7 = puVar10;
      func_0x00010c0f8f20(puVar9);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar10);
  _objc_release(puVar11);
LAB_104a179f4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    puVar9 = puVar6;
    func_0x00010c0f2680();
    if (puVar9 < (undefined *)0x1a) {
      puVar10 = puVar2;
      func_0x00010c06d0e0();
      puVar9 = param_3;
      if ((int)puVar10 == 0) {
        func_0x00010c2348c0(puVar2);
        puVar11 = param_3;
        func_0x00010bdc2f40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9c2e0(puVar2);
        puVar10 = puVar2;
        func_0x00010bf1eb20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfe4c80(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa8f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar10);
        _objc_release(puVar11);
      }
      else {
        func_0x00010bf9aee0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar11 = (undefined *)(ulong)(puVar9 == puVar6);
      if ((puVar9 != puVar6) && (puVar9 != (undefined *)0x0)) {
        func_0x000104a1ce84(param_2,param_3,puVar9);
      }
      _objc_release(puVar9);
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar2);
    return puVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 104a17a5c; end: 104a17c07; -[GTLRService fetchNextPageWithQuery:completionHandler:ticket:] */

bool FUN_104a17a5c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar2 = param_5;
  func_0x00010c0f2680();
  if (uVar2 < 0x1a) {
    uVar3 = param_3;
    func_0x00010c06d0e0();
    uVar2 = param_1;
    if ((int)uVar3 == 0) {
      func_0x00010c2348c0(param_3);
      uVar4 = param_1;
      func_0x00010bdc2f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c2e0(param_3);
      uVar3 = param_3;
      func_0x00010bf1eb20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010bfe4c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    else {
      func_0x00010bf9aee0();
      _objc_retainAutoreleasedReturnValue();
    }
    bVar1 = uVar2 == param_5;
    if ((!bVar1) && (uVar2 != 0)) {
      func_0x000104a1ce84(param_2,param_1,uVar2);
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104a17c08; end: 104a180bf; -[GTLRService mergedNewResultObject:oldResultObject:forQuery:ticket:] */

void FUN_104a17c08(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  int param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_3;
  ppuVar10 = param_4;
  iVar17 = param_5;
  _objc_retain();
  iVar16 = (int)ppuVar10;
  _objc_retain();
  _objc_retain();
  func_0x00010c06d0e0();
  ppuVar10 = param_4;
  if (param_5 == 0) {
    ppuVar7 = param_4;
    func_0x00010bf39c40();
    func_0x00010bf3ff20();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      _objc_retain();
    }
    else {
      ppuVar8 = param_4;
      func_0x00010c296f60(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_3;
      func_0x00010c296f60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      ppuVar3 = ppuVar9;
      ppuVar2 = ppuVar7;
      func_0x00010c220220(param_3);
      iVar16 = (int)ppuVar2;
      _objc_release(ppuVar9);
      _objc_release(ppuVar10);
      ppuVar10 = param_3;
      param_3 = ppuVar8;
    }
    _objc_release(param_3);
    _objc_retain();
    _objc_release(ppuVar7);
    param_3 = ppuVar10;
  }
  else {
    _objc_retain();
    _objc_retain();
    ppuVar7 = param_3;
    func_0x00010c261c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010bf529e0();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar8 = ppuVar10;
      func_0x00010c261c00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c0d3c80();
      ppuVar2 = ppuVar7;
      _objc_retain();
      iVar16 = (int)auStack_f0;
      iVar17 = 0x10;
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar3 != (undefined **)0x0) {
        ppuVar20 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar2);
          }
          ppuVar19 = ppuVar2;
          func_0x00010c0dff20(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar8;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_6;
          func_0x00010c11d480();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c0cae40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(ppuVar9);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(ppuVar4);
          _objc_release(ppuVar19);
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar3 != ppuVar20);
        iVar16 = (int)auStack_f0;
        iVar17 = 0x10;
        ppuVar3 = ppuVar2;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar2);
      ppuVar3 = ppuVar9;
      func_0x00010c20f8e0(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
    }
    ppuVar8 = param_3;
    func_0x00010bfa02e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bf529e0();
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar3 = ppuVar10;
      func_0x00010c261c00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar3;
      func_0x00010c0d3c80();
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar10;
      func_0x00010bfa02e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar3;
      func_0x00010c0d3c80();
      _objc_release(ppuVar3);
      ppuVar20 = ppuVar8;
      _objc_retain();
      iVar16 = (int)auStack_170;
      iVar17 = 0x10;
      ppuVar3 = ppuVar20;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar3 != (undefined **)0x0) {
        ppuVar19 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar20);
          }
          ppuVar4 = ppuVar20;
          func_0x00010c0dff20(ppuVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(ppuVar2);
          func_0x00010c12d3e0(ppuVar9);
          _objc_release(ppuVar4);
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (ppuVar3 != ppuVar19);
        iVar16 = (int)auStack_170;
        iVar17 = 0x10;
        ppuVar3 = ppuVar20;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar20);
      func_0x00010c19a0c0(ppuVar10);
      ppuVar3 = ppuVar9;
      func_0x00010c20f8e0(ppuVar10);
      _objc_release(ppuVar2);
      _objc_release(ppuVar9);
    }
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  ppuVar7 = param_3;
  func_0x00010c141740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40(PTR_PTR_1126ae168);
  ppuVar10 = ppuVar3;
  func_0x00010c075f00();
  if ((int)ppuVar10 == 0) {
    ppuVar2 = ppuVar3;
    func_0x00010bdc18a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined **)PTR_PTR_1126ae188;
    ppuVar10 = ppuVar3;
    func_0x00010c0f5a00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9bf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    ppuVar10 = param_3;
    func_0x00010c15f7e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar8 = ppuVar10;
    }
    _objc_retain();
    _objc_release(ppuVar10);
    ppuVar20 = ppuVar3;
    func_0x00010c28e440();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar20 == (undefined **)0x0) {
      ppuVar19 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar10 = ppuVar20;
      func_0x00010c235180();
      ppuVar4 = ppuVar3;
      if (((ulong)ppuVar10 & 1) == 0) {
        func_0x00010c13d1a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c23c8a0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar10 = ppuVar4;
      func_0x00010c08fa60();
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar10 = ppuVar20;
        func_0x00010c235180();
        ppuVar11 = param_3;
        if ((int)ppuVar10 == 0) {
          func_0x00010c13d180();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c23c880();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar19 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar19 = ppuVar11;
        }
        _objc_retain();
      }
      else {
        ppuVar10 = (undefined **)PTR_PTR_1126ae188;
        func_0x00010bf9bf40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        ppuVar19 = &PTR____CFConstantStringClassReference_110daafd8;
        ppuVar11 = ppuVar8;
        ppuVar8 = ppuVar19;
        ppuVar9 = ppuVar10;
      }
      _objc_release(ppuVar11);
      _objc_release(ppuVar4);
    }
    ppuVar10 = ppuVar3;
    func_0x00010c290440();
    if ((int)ppuVar10 != 0) {
      ppuVar10 = ppuVar3;
      func_0x00010bf88840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(ppuVar10);
    }
    iVar18 = (int)ppuVar20;
    if (iVar16 != 0) {
      _objc_release(ppuVar7);
      ppuVar7 = &PTR____CFConstantStringClassReference_110dacf38;
    }
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x00010c0f59c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar11;
    func_0x00010bf529e0();
    if (ppuVar10 != (undefined **)0x0) {
      func_0x00010c12d4a0(ppuVar4);
    }
    func_0x00010c235180();
    if (iVar18 != 0) {
      func_0x00010c2330e0();
      func_0x00010c1d0560(ppuVar4);
    }
    ppuVar13 = ppuVar3;
    func_0x00010bf88840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar13;
    func_0x00010c08fa60();
    if (ppuVar10 != (undefined **)0x0) {
      func_0x00010c1d0560(ppuVar4);
    }
    ppuVar10 = ppuVar3;
    func_0x00010befd480(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar4;
    FUN_104a152d4(ppuVar4,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    ppuVar15 = ppuVar14;
    if (iVar17 != 0) {
      func_0x00010befd480(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = param_3;
      FUN_104a152d4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      _objc_release(param_3);
    }
    ppuVar10 = (undefined **)PTR_PTR_1126ae140;
    func_0x00010bdc34a0(PTR_PTR_1126ae140);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    _objc_release(ppuVar4);
    _objc_release(puVar12);
    _objc_release(ppuVar20);
    _objc_release(ppuVar19);
LAB_104a18550:
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
LAB_104a18564:
    _objc_release(ppuVar2);
  }
  else {
    ppuVar8 = ppuVar3;
    func_0x00010c13b4a0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar8;
    if (iVar17 != 0) {
      func_0x00010befd480();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = param_3;
      func_0x00010bf529e0();
      ppuVar20 = (undefined **)PTR_PTR_1126ae140;
      ppuVar2 = param_3;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar9 = ppuVar8;
        func_0x00010beec820(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc34a0(ppuVar20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar20;
        goto LAB_104a18550;
      }
      goto LAB_104a18564;
    }
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 104a180c0; end: 104a1859f; -[GTLRService URLFromQueryObject:usePartialPaths:includeServiceURLQueryParams:] */

void FUN_104a180c0(undefined **param_1,undefined8 param_2,undefined **param_3,int param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int iVar13;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c141740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40(PTR_PTR_1126ae168);
  ppuVar2 = param_3;
  func_0x00010c075f00();
  if ((int)ppuVar2 == 0) {
    ppuVar3 = param_3;
    func_0x00010bdc18a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR_PTR_1126ae188;
    ppuVar2 = param_3;
    func_0x00010c0f5a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9bf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar5 = param_1;
    func_0x00010c15f7e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar2 = ppuVar5;
    }
    _objc_retain();
    _objc_release(ppuVar5);
    ppuVar5 = param_3;
    func_0x00010c28e440();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = ppuVar5;
      func_0x00010c235180();
      ppuVar7 = param_3;
      if (((ulong)ppuVar6 & 1) == 0) {
        func_0x00010c13d1a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c23c8a0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar6 = ppuVar7;
      func_0x00010c08fa60();
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar6 = ppuVar5;
        func_0x00010c235180();
        ppuVar9 = param_1;
        if ((int)ppuVar6 == 0) {
          func_0x00010c13d180();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c23c880();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar9 != (undefined **)0x0) {
          ppuVar6 = ppuVar9;
        }
        _objc_retain();
      }
      else {
        ppuVar8 = (undefined **)PTR_PTR_1126ae188;
        func_0x00010bf9bf40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
        ppuVar9 = ppuVar2;
        ppuVar2 = ppuVar6;
        ppuVar4 = ppuVar8;
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar7);
    }
    ppuVar7 = param_3;
    func_0x00010c290440();
    if ((int)ppuVar7 != 0) {
      ppuVar7 = param_3;
      func_0x00010bf88840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(ppuVar7);
    }
    iVar13 = (int)ppuVar5;
    if (param_4 != 0) {
      _objc_release(ppuVar1);
      ppuVar1 = &PTR____CFConstantStringClassReference_110dacf38;
    }
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_3;
    func_0x00010c0f59c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010bf529e0();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x00010c12d4a0(ppuVar7);
    }
    func_0x00010c235180();
    if (iVar13 != 0) {
      func_0x00010c2330e0();
      func_0x00010c1d0560(ppuVar7);
    }
    ppuVar8 = param_3;
    func_0x00010bf88840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar8;
    func_0x00010c08fa60();
    if (ppuVar11 != (undefined **)0x0) {
      func_0x00010c1d0560(ppuVar7);
    }
    ppuVar11 = param_3;
    func_0x00010befd480(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar7;
    FUN_104a152d4(ppuVar7,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar12;
    if (param_5 != 0) {
      func_0x00010befd480(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = param_1;
      FUN_104a152d4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(param_1);
    }
    ppuVar12 = (undefined **)PTR_PTR_1126ae140;
    func_0x00010bdc34a0(PTR_PTR_1126ae140);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
    _objc_release(ppuVar7);
    _objc_release(puVar10);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
LAB_104a18550:
    _objc_release(ppuVar2);
    _objc_release(ppuVar4);
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c13b4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar2;
    if (param_5 == 0) goto LAB_104a1856c;
    func_0x00010befd480();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010bf529e0();
    ppuVar5 = (undefined **)PTR_PTR_1126ae140;
    ppuVar3 = param_1;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = ppuVar2;
      func_0x00010beec820(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc34a0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar5;
      goto LAB_104a18550;
    }
  }
  _objc_release(ppuVar3);
LAB_104a1856c:
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 104a185a0; end: 104a1879b; -[GTLRService executeQuery:delegate:didFinishSelector:] */

void FUN_104a185a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_3);
  FUN_104a4d134(param_4,param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104a18690;
  puStack_48 = &UNK_1107be6f0;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  ppuVar1 = &puStack_60;
  _objc_retainBlock(ppuVar1);
  func_0x00010bf9afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a1879c; end: 104a18ac7; -[GTLRService executeQuery:completionHandler:] */

void FUN_104a1879c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

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
  long lVar10;
  undefined *puVar11;
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
  _objc_retain();
  _objc_retain();
  puVar1 = param_3;
  func_0x00010c06d0e0();
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010bf51e00();
    func_0x00010c06a140(param_3);
    puVar2 = param_1;
    func_0x00010c110180();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x00010bf88840();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR_PTR_1126ae168;
        func_0x00010bf39c40(PTR_PTR_1126ae168);
        puVar6 = puVar1;
        func_0x00010c075f00(puVar1,param_2,puVar5);
        _objc_release(puVar4);
        if (((ulong)puVar6 & 1) == 0) {
          puVar4 = puVar1;
          func_0x00010befd480();
          _objc_retainAutoreleasedReturnValue();
          lStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          puVar5 = puVar2;
          _objc_retain();
          puVar6 = puVar5;
          func_0x00010bf52a60();
          if (puVar6 != (undefined *)0x0) {
            lVar10 = *plStack_120;
            do {
              puVar11 = (undefined *)0x0;
              do {
                if (*plStack_120 != lVar10) {
                  _objc_enumerationMutation(puVar5);
                }
                puVar7 = puVar4;
                func_0x00010c0dff20(puVar4,param_2,*(undefined8 *)(lStack_128 + (long)puVar11 * 8));
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar7 != (undefined *)0x0) goto LAB_104a189a0;
                puVar11 = puVar11 + 1;
              } while (puVar6 != puVar11);
              puVar6 = puVar5;
              func_0x00010bf52a60(puVar5,param_2,&uStack_130,auStack_f0,0x10);
            } while (puVar6 != (undefined *)0x0);
          }
          _objc_release(puVar5);
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560();
          func_0x00010c165b80(puVar1,param_2,puVar5);
LAB_104a189a0:
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
      }
      else {
        _objc_release(puVar4);
      }
    }
    puVar4 = puVar1;
    func_0x00010c2348c0(puVar1);
    puVar5 = param_1;
    func_0x00010bdc2f40(param_1,param_2,puVar1,0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf9c2e0(puVar1);
    puVar11 = puVar1;
    func_0x00010bf1eb20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bfe4c80();
    _objc_retainAutoreleasedReturnValue();
    param_6 = 0;
    puVar8 = puVar5;
    puVar9 = puVar11;
    func_0x00010bfa8f60(param_1,param_2,puVar5,puVar6,puVar11,0,puVar7,(uint)puVar4 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar9 = (undefined *)0x0;
    puVar8 = param_3;
    puVar6 = param_4;
    func_0x00010bf9aee0(param_1,param_2,param_3,param_4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126ae168;
    _objc_retain(param_6);
    _objc_retain(puVar9);
    func_0x00010c11db60(puVar1,param_2,puVar8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198120();
    _objc_release(puVar9);
    func_0x00010bf9afe0(param_3,param_2,puVar1,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar1);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a18ac8; end: 104a18b7b; -[GTLRService fetchObjectWithURL:objectClass:executionParameters:completionHandler:] */

void FUN_104a18ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae168;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c11db60(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198120();
  _objc_release(param_5);
  func_0x00010bf9afe0(param_1,param_2,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a18b7c; end: 104a18b83; -[GTLRService userAgent] */

void FUN_104a18b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a18b84; end: 104a18bb3; -[GTLRService setExactUserAgent:] */

void FUN_104a18b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a18bb4; end: 104a18bf3; -[GTLRService setUserAgent:] */

void FUN_104a18bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104a579bc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197e20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a18bf4; end: 104a18c23; -[GTLRService overrideRequestUserAgent:] */

void FUN_104a18bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a18c24; end: 104a18c53; -[GTLRService setServiceProperties:] */

void FUN_104a18c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a18c54; end: 104a18c6b; -[GTLRService serviceProperties] */

void FUN_104a18c54(long param_1)

{
  _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104a18c6c; end: 104a18cbb; -[GTLRService setAuthorizer:] */

void FUN_104a18c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfabb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16caa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a18cbc; end: 104a18cff; -[GTLRService authorizer] */

void FUN_104a18cbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfabb40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf11180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a18d00; end: 104a18d07; +[GTLRService defaultServiceUploadChunkSize] */

undefined8 FUN_104a18d00(void)

{
  return 0x400000;
}



/* Entry: 104a18d08; end: 104a18d2b; -[GTLRService serviceUploadChunkSize] */

long FUN_104a18d08(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(long *)(param_1 + 0x20);
  }
  func_0x00010bf39c40();
                    /* WARNING: Could not recover jumptable at 0x00010bf6a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 104a18d2c; end: 104a18d33; -[GTLRService setServiceUploadChunkSize:] */

void FUN_104a18d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 104a18d34; end: 104a18dbb; -[GTLRService setSurrogates:] */

void FUN_104a18d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c087100();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae138;
  func_0x00010c13b240(PTR_PTR_1126ae138,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d06c0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a18dbc; end: 104a190c3; +[GTLRService URLWithString:queryParameters:] */

void FUN_104a18dbc(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
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
  _objc_retain();
  _objc_retain();
  puVar9 = param_3;
  func_0x00010c08fa60();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar1 = param_4;
    func_0x00010bf529e0();
    if (uVar1 == 0) {
      puVar7 = param_3;
      _objc_retain(param_3);
    }
    else {
      uVar1 = param_4;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c246d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      ppuVar3 = &PTR____CFConstantStringClassReference_110def438;
      func_0x00010c0d3c80(&PTR____CFConstantStringClassReference_110def438);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      uVar1 = uVar2;
      func_0x00010bf52a60();
      if (uVar1 != 0) {
        lVar11 = *plStack_120;
        do {
          uVar8 = 0;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(uVar2);
            }
            uVar10 = *(undefined8 *)(lStack_128 + uVar8 * 8);
            func_0x00010bf06ba0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110da7038);
            uVar4 = param_4;
            func_0x00010c0dff20(param_4,param_2,uVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
            uVar5 = uVar4;
            func_0x00010c075f00(uVar4,param_2,puVar9);
            if ((uVar5 & 1) == 0) {
              puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              uVar5 = uVar4;
              func_0x00010c075f00(uVar4,param_2,puVar9);
              if ((int)uVar5 != 0) goto LAB_104a18f30;
            }
            else {
LAB_104a18f30:
              func_0x00010bf070e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dae918);
            }
            _objc_release(uVar4);
            uVar8 = uVar8 + 1;
          } while (uVar1 != uVar8);
          uVar1 = uVar2;
          func_0x00010bf52a60(uVar2,param_2,&uStack_130,auStack_f0,0x10);
        } while (uVar1 != 0);
      }
      _objc_release(uVar2);
      func_0x00010bf070e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110def478);
      puVar9 = PTR_PTR_1126ae188;
      func_0x00010bf9bf40(PTR_PTR_1126ae188,param_2,ppuVar3,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010c260c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110dbff78);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110da7058);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(ppuVar3);
      _objc_release(uVar2);
    }
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 104a190c4; end: 104a190cf; -[GTLRService additionalHTTPHeaders] */

void FUN_104a190c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 104a190d0; end: 104a190d7; -[GTLRService setAdditionalHTTPHeaders:] */

void FUN_104a190d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a190d8; end: 104a190e3; -[GTLRService additionalURLQueryParameters] */

void FUN_104a190d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 104a190e4; end: 104a190eb; -[GTLRService setAdditionalURLQueryParameters:] */

void FUN_104a190e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a190ec; end: 104a190f3; -[GTLRService allowInsecureQueries] */

undefined1 FUN_104a190ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 104a190f4; end: 104a190fb; -[GTLRService setAllowInsecureQueries:] */

void FUN_104a190f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 104a190fc; end: 104a19103; -[GTLRService callbackQueue] */

undefined8 FUN_104a190fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104a19104; end: 104a1910f; -[GTLRService setCallbackQueue:] */

void FUN_104a19104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 104a19110; end: 104a19117; -[GTLRService APIKey] */

undefined8 FUN_104a19110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104a19118; end: 104a1911f; -[GTLRService setAPIKey:] */

void FUN_104a19118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a19120; end: 104a19127; -[GTLRService APIKeyRestrictionBundleID] */

undefined8 FUN_104a19120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104a19128; end: 104a1912f; -[GTLRService setAPIKeyRestrictionBundleID:] */

void FUN_104a19128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a19130; end: 104a19137; -[GTLRService batchPath] */

undefined8 FUN_104a19130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104a19138; end: 104a1913f; -[GTLRService isDataWrapperRequired] */

undefined1 FUN_104a19138(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 104a19140; end: 104a19147; -[GTLRService setDataWrapperRequired:] */

void FUN_104a19140(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 104a19148; end: 104a1914f; -[GTLRService fetcherService] */

undefined8 FUN_104a19148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104a19150; end: 104a1915b; -[GTLRService setFetcherService:] */

void FUN_104a19150(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 104a1915c; end: 104a19163; -[GTLRService maxRetryInterval] */

undefined8 FUN_104a1915c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104a19164; end: 104a1916b; -[GTLRService setMaxRetryInterval:] */

void FUN_104a19164(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 104a1916c; end: 104a19173; -[GTLRService parseQueue] */

undefined8 FUN_104a1916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104a19174; end: 104a1917f; -[GTLRService setParseQueue:] */

void FUN_104a19174(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 104a19180; end: 104a19187; -[GTLRService prettyPrintQueryParameterNames] */

undefined8 FUN_104a19180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104a19188; end: 104a1918f; -[GTLRService resumableUploadPath] */

undefined8 FUN_104a19188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 104a19190; end: 104a19197; -[GTLRService setResumableUploadPath:] */

void FUN_104a19190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a19198; end: 104a191a3; -[GTLRService retryBlock] */

void FUN_104a19198(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 104a191a4; end: 104a191ab; -[GTLRService setRetryBlock:] */

void FUN_104a191a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 104a191ac; end: 104a191b3; -[GTLRService isRetryEnabled] */

undefined1 FUN_104a191ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x32);
}



/* Entry: 104a191b4; end: 104a191bb; -[GTLRService setRetryEnabled:] */

void FUN_104a191b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 104a191bc; end: 104a191c3; -[GTLRService rootURLString] */

undefined8 FUN_104a191bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104a191c4; end: 104a191cb; -[GTLRService servicePath] */

undefined8 FUN_104a191c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 104a191cc; end: 104a191d3; -[GTLRService setServicePath:] */

void FUN_104a191cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a191d4; end: 104a191db; -[GTLRService shouldFetchNextPages] */

undefined1 FUN_104a191d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x33);
}



/* Entry: 104a191dc; end: 104a191e3; -[GTLRService setShouldFetchNextPages:] */

void FUN_104a191dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
  return;
}



/* Entry: 104a191e4; end: 104a191eb; -[GTLRService simpleUploadPath] */

undefined8 FUN_104a191e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 104a191ec; end: 104a191f3; -[GTLRService setSimpleUploadPath:] */

void FUN_104a191ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a191f4; end: 104a191fb; -[GTLRService objectClassResolver] */

undefined8 FUN_104a191f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104a191fc; end: 104a19207; -[GTLRService setObjectClassResolver:] */

void FUN_104a191fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 104a19208; end: 104a1920f; -[GTLRService testBlock] */

undefined8 FUN_104a19208(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 104a19210; end: 104a19217; -[GTLRService setTestBlock:] */

void FUN_104a19210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a19218; end: 104a1921f; -[GTLRService uploadProgressBlock] */

undefined8 FUN_104a19218(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 104a19220; end: 104a19227; -[GTLRService setUploadProgressBlock:] */

void FUN_104a19220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a19228; end: 104a1922f; -[GTLRService userAgentAddition] */

undefined8 FUN_104a19228(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 104a19230; end: 104a19237; -[GTLRService setUserAgentAddition:] */

void FUN_104a19230(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a19238; end: 104a19357; -[GTLRService .cxx_destruct] */

void FUN_104a19238(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a19358; end: 104a19433; +[GTLRService mockServiceWithFakedObject:fakedError:] */

void FUN_104a19358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_PTR_1126ae140;
  _objc_alloc(PTR_PTR_1126ae140);
  func_0x00010bfee200();
  func_0x00010c1ee6a0();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104a19434;
  puStack_48 = &UNK_1107be720;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c212ee0(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a19434; end: 104a19447;  */

void FUN_104a19434(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104a19444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))
            (param_3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104a19448; end: 104a1946f;  */

void FUN_104a19448(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 104a19470; end: 104a195a7; -[GTLRService waitForTicket:timeout:] */

undefined8 FUN_104a19470(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  while( true ) {
    uVar2 = param_4;
    func_0x00010bf28600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    _dispatch_time(0,100000000);
    uVar4 = uVar2;
    _dispatch_group_wait(uVar2,uVar3);
    _objc_release(uVar2);
    if ((uVar4 == 0) &&
       ((uVar2 = param_4, func_0x00010bfd4fa0(), (uVar2 & 1) != 0 ||
        (uVar2 = param_4, func_0x00010c06e0e0(), (uVar2 & 1) != 0)))) break;
    func_0x00010c26f3a0(puVar1);
    if (param_1 <= 0.0) {
      uVar3 = 0;
LAB_104a1957c:
      _objc_release(puVar1);
      _objc_release(param_4);
      return uVar3;
    }
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    param_1 = 0.001;
    func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142a80();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  uVar3 = 1;
  goto LAB_104a1957c;
}



/* Entry: 104a195a8; end: 104a19a8f; -[GTLRServiceTicket initWithService:executionParameters:] */

undefined1 *
FUN_104a195a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  lVar1 = param_4;
  _objc_retain();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e34f0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 8),param_4);
    lVar3 = lVar1;
    func_0x00010bfabb40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x78);
    *(long *)((long)puVar2 + 0x78) = lVar3;
    _objc_release(uVar8);
    lVar3 = lVar1;
    func_0x00010bf11180();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x38);
    *(long *)((long)puVar2 + 0x38) = lVar3;
    _objc_release(uVar8);
    lVar3 = lVar1;
    func_0x00010c15f820();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_5;
    func_0x00010c26e780(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_104a152d4(lVar3,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x10);
    *(long *)((long)puVar2 + 0x10) = lVar4;
    _objc_release(uVar8);
    _objc_release(lVar9);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c0dfde0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010c0dfde0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar9 = lVar3;
      _objc_retain();
    }
    uVar8 = *(undefined8 *)((long)puVar2 + 0xb0);
    *(long *)((long)puVar2 + 0xb0) = lVar9;
    _objc_release(uVar8);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c07c960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010c07c960();
      *(char *)((long)puVar2 + 0x24) = (char)lVar9;
    }
    else {
      lVar9 = param_5;
      func_0x00010c07c960();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 0x24) = (char)lVar4;
      _objc_release(lVar9);
    }
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c0c2bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010c0c2bc0(lVar1);
      *(undefined8 *)((long)puVar2 + 0x80) = param_1;
    }
    else {
      lVar9 = param_5;
      func_0x00010c0c2bc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      *(undefined8 *)((long)puVar2 + 0x80) = param_1;
      _objc_release(lVar9);
    }
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c230500();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010c230500();
      *(char *)((long)puVar2 + 0x25) = (char)lVar9;
    }
    else {
      lVar9 = param_5;
      func_0x00010c230500();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 0x25) = (char)lVar4;
      _objc_release(lVar9);
    }
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c28e4c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010c28e4c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      _objc_retainBlock();
      _objc_release(lVar9);
    }
    else {
      lVar4 = lVar3;
      _objc_retainBlock();
    }
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x18);
    *(long *)((long)puVar2 + 0x18) = lVar3;
    _objc_release(uVar8);
    lVar3 = param_5;
    func_0x00010c13f400();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010c13f400();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar9;
      _objc_retainBlock();
      _objc_release(lVar9);
    }
    else {
      lVar5 = lVar3;
      _objc_retainBlock();
    }
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar2 + 0xa8);
    *(long *)((long)puVar2 + 0xa8) = lVar3;
    _objc_release(uVar8);
    if (*(long *)((long)puVar2 + 0xa8) != 0) {
      *(undefined1 *)((long)puVar2 + 0x24) = 1;
    }
    lVar3 = param_5;
    func_0x00010c26b620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010c26b620();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar9;
      _objc_retainBlock();
      uVar8 = *(undefined8 *)((long)puVar2 + 0xb8);
      *(long *)((long)puVar2 + 0xb8) = lVar6;
      _objc_release(uVar8);
    }
    else {
      lVar6 = lVar3;
      _objc_retainBlock();
      lVar9 = *(long *)((long)puVar2 + 0xb8);
      *(long *)((long)puVar2 + 0xb8) = lVar6;
    }
    _objc_release(lVar9);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bf28660();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar9 = lVar1;
      func_0x00010bf28660();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar9 = lVar3;
      _objc_retain();
    }
    uVar8 = *(undefined8 *)((long)puVar2 + 0x48);
    *(long *)((long)puVar2 + 0x48) = lVar9;
    _objc_release(uVar8);
    _objc_release();
    _dispatch_group_create();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x40);
    *(long *)((long)puVar2 + 0x40) = lVar3;
    _objc_release(uVar8);
    lVar3 = lVar1;
    func_0x00010bdc0d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x28);
    *(long *)((long)puVar2 + 0x28) = lVar9;
    _objc_release(uVar8);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bdc0d60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x30);
    *(long *)((long)puVar2 + 0x30) = lVar9;
    _objc_release(uVar8);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bf011c0();
    *(char *)((long)puVar2 + 0x21) = (char)lVar3;
    *(undefined8 *)((long)puVar2 + 0xc0) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined **)((long)puVar2 + 0x50) = puVar7;
    _objc_release(uVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_5);
  _objc_release(lVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104a19a90; end: 104a19bef; -[GTLRServiceTicket description] */

void FUN_104a19a90(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da7098);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da70b8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0dfe40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf11180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da70d8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40();
  func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da70f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104a19bf0; end: 104a19cff; -[GTLRServiceTicket postNotificationOnMainThreadWithName:object:userInfo:] */

void FUN_104a19bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010bf28600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104a19d00;
  puStack_50 = &UNK_1107be750;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_104c62d88(param_1,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a19d00; end: 104a19da3;  */

void FUN_104a19d00(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a19da4; end: 104a19de7; -[GTLRServiceTicket pauseUpload] */

void FUN_104a19da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0dfe40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13b700();
  if ((int)uVar1 != 0) {
    func_0x00010c0f5d40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


