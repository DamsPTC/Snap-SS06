/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ff8a40; end: 107ff8ca7;  */

void FUN_107ff8a40(double param_1,double param_2,undefined *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_380;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  puVar3 = param_3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar16 != (undefined *)0x0) {
      puVar3 = param_3;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_107ff8b44;
    }
    plVar14 = (long *)0x0;
  }
  else {
    puVar4 = param_3;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
LAB_107ff8b44:
    plVar5 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    _objc_retain(puVar4);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        uVar15 = *(undefined8 *)((long)puVar16 * 8);
        if (param_5 == (long *)0x0) {
          plVar11 = plVar5;
          func_0x00010bf529e0();
        }
        else {
          plVar11 = (long *)*param_5;
          *param_5 = (long)plVar11 + 1;
        }
        func_0x000108e380fc(uVar15,plVar11,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(plVar5);
        _objc_release(uVar15);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    plVar14 = plVar5;
    func_0x00010bf51e00();
    _objc_release(plVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar20 = param_1;
  dVar19 = param_2;
  _objc_retain();
  puVar3 = param_3;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf8a220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    plVar14 = (long *)0x0;
    if (puVar3 != (undefined *)0x0) goto LAB_107ff8d30;
  }
  else {
    _objc_release();
LAB_107ff8d30:
    puVar3 = param_3;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar3 = param_3;
      func_0x00010bf8a220();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x0) {
        puStack_380 = (undefined *)0x0;
      }
      else {
        puVar3 = param_3;
        func_0x00010bf8a220();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c25dde0();
        _objc_retainAutoreleasedReturnValue();
        puStack_380 = puVar4;
        FUN_107ff7a8c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
    else {
      puVar3 = param_3;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_380 = puVar3;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010bf89ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c23ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    dVar22 = 0.0;
    if (param_1 != 0.0) {
      if (param_2 == 0.0) {
        dVar19 = 0.0;
        dVar22 = dVar20;
      }
      else {
        param_1 = param_1 / param_2;
        if (param_1 != 0.0) {
          dVar18 = dVar20 / param_1;
          dVar21 = dVar20;
          if (param_1 * dVar19 < dVar20) {
            dVar18 = dVar19;
            dVar21 = param_1 * dVar19;
          }
          dVar22 = dVar20;
          if (param_1 != INFINITY) {
            dVar22 = dVar21;
          }
          dVar19 = 0.0;
          if (param_1 != INFINITY) {
            dVar19 = dVar18;
          }
        }
      }
    }
    func_0x00010bf529e0(puStack_380);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    dVar20 = 0.0;
    _objc_retain(puStack_380);
    puVar4 = puStack_380;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puStack_380);
        }
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        lVar13 = *(long *)((long)puVar16 * 8);
        lVar7 = lVar13;
        func_0x00010c102f00(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar13;
        func_0x00010bf41480();
        lVar7 = (long)(int)lVar7;
        func_0x000108cff314();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25dd00(lVar13);
        if (dVar20 == 0.0) {
          dVar20 = 6.0;
        }
        lVar8 = lVar13;
        func_0x00010bf8e2c0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf89e80();
        dVar21 = 0.0;
        func_0x00010c102f00();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar13;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar9 != 0) {
          lVar17 = 0;
          dVar18 = dVar21;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar13);
            }
            uVar15 = *(undefined8 *)(lVar17 * 8);
            func_0x00010c2beb40(uVar15);
            dVar21 = dVar22 * dVar18;
            func_0x00010c2bed60(uVar15);
            puVar10 = PTR_PTR_1126bcf00;
            _objc_alloc(PTR_PTR_1126bcf00);
            func_0x00010c026b40(dVar21,dVar19 * dVar18);
            func_0x00010befa120(puVar6);
            _objc_release(puVar10);
            lVar17 = lVar17 + 1;
            dVar18 = dVar21;
          } while (lVar9 != lVar17);
          lVar9 = lVar13;
          func_0x00010bf52a60();
        }
        _objc_release(lVar13);
        if (plVar11 == (long *)0x0) {
          func_0x00010bf529e0(puVar3);
        }
        else {
          *plVar11 = *plVar11 + 1;
        }
        puVar10 = PTR_PTR_1126bcf08;
        _objc_alloc(PTR_PTR_1126bcf08);
        func_0x00010c026160();
        func_0x00010befa120(puVar3);
        _objc_release(puVar10);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(puVar6);
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar4);
      puVar4 = puStack_380;
      func_0x00010bf52a60();
    }
    _objc_release(puStack_380);
    plVar14 = (long *)PTR_PTR_1126c3d88;
    _objc_alloc();
    func_0x00010c00e5c0();
    _objc_release(puVar3);
    _objc_release(puStack_380);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain();
    puVar3 = param_3;
    func_0x00010c1046e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      puVar3 = param_3;
      func_0x00010c1046e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c104700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(puVar4);
      plVar14 = (long *)PTR_PTR_1126c4340;
      _objc_alloc(PTR_PTR_1126c4340);
      puVar4 = puVar3;
      func_0x00010c094540(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar3;
      func_0x00010c073e60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      puVar6 = puVar3;
      func_0x00010bfddb80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0241a0(plVar14);
      _objc_release(puVar6);
      _objc_release(puVar16);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(param_3);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar14);
  return;
}



/* Entry: 107ff8ca8; end: 107ff9213;  */

void FUN_107ff8ca8(double param_1,double param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_250;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = param_1;
  dVar16 = param_2;
  _objc_retain();
  lVar2 = param_3;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf8a220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar12 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_107ff91c0;
  }
  else {
    _objc_release();
  }
  lVar2 = param_3;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25dde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = param_3;
    func_0x00010bf8a220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      lStack_250 = 0;
    }
    else {
      lVar2 = param_3;
      func_0x00010bf8a220();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c25dde0();
      _objc_retainAutoreleasedReturnValue();
      lStack_250 = lVar3;
      FUN_107ff7a8c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lStack_250 = lVar2;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23ef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar19 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar16 = 0.0;
      dVar19 = dVar17;
    }
    else {
      param_1 = param_1 / param_2;
      if (param_1 != 0.0) {
        dVar15 = dVar17 / param_1;
        dVar18 = dVar17;
        if (param_1 * dVar16 < dVar17) {
          dVar15 = dVar16;
          dVar18 = param_1 * dVar16;
        }
        dVar19 = dVar17;
        if (param_1 != INFINITY) {
          dVar19 = dVar18;
        }
        dVar16 = 0.0;
        if (param_1 != INFINITY) {
          dVar16 = dVar15;
        }
      }
    }
  }
  func_0x00010bf529e0(lStack_250);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  dVar17 = 0.0;
  _objc_retain(lStack_250);
  lVar2 = lStack_250;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lStack_250);
      }
      puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar10 = *(long *)(lVar13 * 8);
      lVar5 = lVar10;
      func_0x00010c102f00(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar10;
      func_0x00010bf41480();
      lVar5 = (long)(int)lVar5;
      func_0x000108cff314();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25dd00(lVar10);
      if (dVar17 == 0.0) {
        dVar17 = 6.0;
      }
      lVar6 = lVar10;
      func_0x00010bf8e2c0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf89e80();
      dVar18 = 0.0;
      func_0x00010c102f00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar14 = 0;
        dVar15 = dVar18;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar10);
          }
          uVar11 = *(undefined8 *)(lVar14 * 8);
          func_0x00010c2beb40(uVar11);
          dVar18 = dVar19 * dVar15;
          func_0x00010c2bed60(uVar11);
          puVar8 = PTR_PTR_1126bcf00;
          _objc_alloc(PTR_PTR_1126bcf00);
          func_0x00010c026b40(dVar18,dVar16 * dVar15);
          func_0x00010befa120(puVar12);
          _objc_release(puVar8);
          lVar14 = lVar14 + 1;
          dVar15 = dVar18;
        } while (lVar7 != lVar14);
        lVar7 = lVar10;
        func_0x00010bf52a60();
      }
      _objc_release(lVar10);
      if (param_4 == (long *)0x0) {
        func_0x00010bf529e0(puVar4);
      }
      else {
        *param_4 = *param_4 + 1;
      }
      puVar8 = PTR_PTR_1126bcf08;
      _objc_alloc(PTR_PTR_1126bcf08);
      func_0x00010c026160();
      func_0x00010befa120(puVar4);
      _objc_release(puVar8);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar12);
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar2);
    lVar2 = lStack_250;
    func_0x00010bf52a60();
  }
  _objc_release(lStack_250);
  puVar12 = PTR_PTR_1126c3d88;
  _objc_alloc();
  func_0x00010c00e5c0();
  _objc_release(puVar4);
  _objc_release(lStack_250);
LAB_107ff91c0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain();
    lVar2 = param_3;
    func_0x00010c1046e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar2 = param_3;
      func_0x00010c1046e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c104700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(lVar9);
      puVar12 = PTR_PTR_1126c4340;
      _objc_alloc(PTR_PTR_1126c4340);
      lVar9 = lVar2;
      func_0x00010c094540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c073e60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      lVar13 = lVar2;
      func_0x00010bfddb80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c0241a0(puVar12);
      _objc_release(lVar13);
      _objc_release(lVar3);
      _objc_release(lVar9);
      _objc_release(lVar2);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107ff9214; end: 107ff935f;  */

void FUN_107ff9214(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c1046e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1046e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c104700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2827c0();
    if (lVar3 - 1U < 4) {
      uVar7 = *(undefined8 *)(&UNK_10deec878 + (lVar3 - 1U) * 8);
    }
    else {
      uVar7 = 0;
    }
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126c4340;
    _objc_alloc(PTR_PTR_1126c4340);
    lVar2 = lVar1;
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c073e60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    lVar5 = lVar1;
    func_0x00010bfddb80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    func_0x00010c0241a0(puVar8,param_2,lVar2,uVar7,lVar4,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ff9360; end: 107ff952f;  */

void FUN_107ff9360(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,ulong param_7,uint param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
    puVar1 = PTR_PTR_1126d8d70;
    _objc_alloc(PTR_PTR_1126d8d70);
    puVar2 = PTR_PTR_1126c20c0;
    _objc_alloc(PTR_PTR_1126c20c0);
    func_0x00010c040460(0,0x3ff0000000000000,0,0,param_5,param_6);
    goto LAB_107ff94e0;
  }
  if (param_3 == 0.0) {
    param_3 = 0.0;
LAB_107ff9398:
    bVar3 = true;
    dVar5 = INFINITY;
    dVar6 = param_5;
LAB_107ff93a8:
    dVar7 = 1.0;
    if ((((param_7 & 1) == 0) && (param_2 <= param_1)) && ((param_8 & 1) == 0)) {
      dVar4 = 0.0;
      if (((!bVar3) && (dVar4 = param_5, param_3 != INFINITY)) &&
         (dVar4 = param_6 * param_3, param_5 <= param_6 * param_3)) {
        dVar4 = param_5;
      }
LAB_107ff949c:
      dVar7 = dVar4 / dVar6;
    }
  }
  else {
    dVar5 = param_6;
    if (param_4 != 0.0) {
      param_3 = param_3 / param_4;
      if (param_3 == 0.0) goto LAB_107ff9398;
      dVar6 = INFINITY;
      if (param_3 == INFINITY) {
        param_3 = INFINITY;
      }
      else {
        dVar6 = param_3 * param_6;
        bVar3 = false;
        if (dVar6 < param_5) {
          dVar5 = param_5 / param_3;
          dVar6 = param_5;
          goto LAB_107ff93a8;
        }
      }
      bVar3 = false;
      goto LAB_107ff93a8;
    }
    dVar7 = 1.0;
    dVar6 = INFINITY;
    if ((((param_7 & 1) == 0) && (param_2 <= param_1)) && (dVar4 = param_5, (param_8 & 1) == 0))
    goto LAB_107ff949c;
  }
  puVar2 = PTR_PTR_1126c20c0;
  _objc_alloc(PTR_PTR_1126c20c0);
  func_0x00010c040460(0,dVar7,0,0,dVar6,dVar5);
  puVar1 = PTR_PTR_1126d8d70;
  _objc_alloc(PTR_PTR_1126d8d70);
LAB_107ff94e0:
  func_0x00010c055fe0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ff9530; end: 107ff976f;  */

undefined1  [16] FUN_107ff9530(undefined8 param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = *(double *)PTR__CGSizeZero_110347620;
  dVar15 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  dVar12 = 0.0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar2 != 0) {
    bVar10 = false;
    do {
      lVar11 = 0;
      dVar13 = dVar14;
      dVar16 = dVar15;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(ulong *)(lVar11 * 8);
        uVar3 = uVar9;
        func_0x00010c08c3a0();
        dVar14 = dVar13;
        dVar15 = dVar16;
        if ((int)uVar3 == 1) {
          uVar3 = uVar9;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf0b760();
          _objc_release(uVar3);
          if ((int)uVar4 == 5) {
            uVar3 = uVar9;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c2a5040();
            dVar14 = (double)(uVar5 & 0xffffffff);
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar9;
            func_0x00010bf7ee20();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bfe0640();
            dVar15 = (double)(uVar6 & 0xffffffff);
            _objc_release(uVar5);
            _objc_release(uVar9);
            _objc_release(uVar4);
            _objc_release(uVar3);
            if (bVar10) {
              bVar10 = dVar13 != dVar14;
              dVar14 = dVar13;
              if (bVar10 || dVar16 != dVar15) {
                dVar14 = 720.0;
              }
              dVar12 = 1280.0;
              if (bVar10 || dVar16 != dVar15) {
                dVar16 = 1280.0;
              }
              bVar10 = true;
              dVar15 = dVar16;
            }
            else {
              bVar10 = true;
            }
          }
        }
        lVar11 = lVar11 + 1;
        dVar13 = dVar14;
        dVar16 = dVar15;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar17._8_8_ = dVar15;
    auVar17._0_8_ = dVar14;
    return auVar17;
  }
  ___stack_chk_fail();
  dVar14 = dVar12;
  dVar13 = param_2;
  _objc_retain(param_4);
  FUN_107ff9530(lVar1);
  lVar7 = param_4;
  func_0x00010bf5c920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar15 = dVar14;
  dVar16 = dVar13;
  if (lVar7 == 0) {
    dVar15 = *(double *)PTR__CGSizeZero_110347620;
    dVar16 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar10 = dVar13 != dVar16;
    if (dVar14 != dVar15 || bVar10) {
      dVar16 = 1280.0;
    }
    if (dVar14 != dVar15 || bVar10) {
      dVar15 = 720.0;
    }
  }
  lVar7 = param_4;
  FUN_107ff985c(dVar15,dVar16,dVar14,dVar13,dVar12,param_2,param_4,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  auVar18._8_8_ = dVar16;
  auVar18._0_8_ = dVar15;
  return auVar18;
}



/* Entry: 107ff9770; end: 107ff985b;  */

void FUN_107ff9770(double param_1,double param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_1;
  dVar5 = param_2;
  _objc_retain(param_4);
  FUN_107ff9530(param_3);
  lVar2 = param_4;
  func_0x00010bf5c920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar4 = dVar3;
  dVar6 = dVar5;
  if (lVar2 == 0) {
    dVar4 = *(double *)PTR__CGSizeZero_110347620;
    dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar1 = dVar5 != dVar6;
    if (dVar3 != dVar4 || bVar1) {
      dVar6 = 1280.0;
    }
    if (dVar3 != dVar4 || bVar1) {
      dVar4 = 720.0;
    }
  }
  lVar2 = param_4;
  FUN_107ff985c(dVar4,dVar6,dVar3,dVar5,param_1,param_2,param_4,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ff985c; end: 107ff9b23;  */

void FUN_107ff985c(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7,undefined8 param_8,int param_9,int param_10,
                  undefined *param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain();
  lVar1 = param_7;
  func_0x00010bf5c920();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar1 == 0) || (param_1 <= 0.0)) || (param_2 <= 0.0)) {
    _objc_release();
  }
  else {
    _objc_release();
    if ((param_9 == 0) || (param_10 != 0)) {
      dVar7 = param_5;
      if (param_3 == 0.0) {
LAB_107ff98e4:
        dVar6 = INFINITY;
        dVar5 = 0.0;
        dVar8 = param_5;
joined_r0x000107ff9960:
        dVar4 = dVar5;
        if (dVar8 != 0.0) {
          dVar5 = dVar7 / dVar6;
          dVar4 = 0.0;
          if (((dVar5 != 0.0) && (dVar4 = param_5, dVar5 != INFINITY)) &&
             (dVar4 = param_6 * dVar5, param_5 <= param_6 * dVar5)) {
            dVar4 = param_5;
          }
        }
      }
      else {
        dVar5 = param_5;
        if (param_4 == 0.0) {
LAB_107ff9940:
          dVar7 = INFINITY;
          dVar6 = param_6;
          dVar8 = param_6;
          goto joined_r0x000107ff9960;
        }
        param_3 = param_3 / param_4;
        if (param_3 == 0.0) goto LAB_107ff98e4;
        if (param_3 == INFINITY) goto LAB_107ff9940;
        dVar6 = param_5 / param_3;
        if (param_5 <= param_3 * param_6) {
          dVar6 = param_6;
          dVar7 = param_3 * param_6;
        }
        dVar4 = 0.0;
        dVar8 = dVar6;
        if (dVar7 != 0.0) goto joined_r0x000107ff9960;
      }
      dVar4 = dVar4 / dVar7;
      func_0x00010bfc9ac0(dVar4,0x3ff0000000000000,PTR_PTR_1126bf720);
      lVar1 = param_7;
      dVar5 = dVar4;
      func_0x00010bf5c920(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27ae00();
      dVar8 = dVar4 * dVar5;
      _objc_release(lVar1);
      lVar1 = param_7;
      func_0x00010bf5c920(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27ae40();
      dVar9 = dVar4 * dVar5;
      _objc_release(lVar1);
      lVar1 = param_7;
      func_0x00010bf5c920(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e4c0();
      dVar4 = dVar4 * dVar5;
      _objc_release(lVar1);
      lVar1 = param_7;
      func_0x00010bf5c920(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c141a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126c20c0;
      _objc_alloc(PTR_PTR_1126c20c0);
      func_0x00010c040460(dVar5,dVar4,dVar8,dVar9,dVar7,dVar6);
      param_11 = PTR_PTR_1126d8d70;
      _objc_alloc(PTR_PTR_1126d8d70);
      func_0x00010c055fe0();
      _objc_release(puVar3);
      goto LAB_107ff9af8;
    }
  }
  FUN_107ff9360(param_1,param_2,param_3,param_4,param_5,param_6,param_11,param_8);
  _objc_retainAutoreleasedReturnValue();
LAB_107ff9af8:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_11);
  return;
}



/* Entry: 107ff9b24; end: 107ff9c0b;  */

void FUN_107ff9b24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c2a5040(param_3);
  lVar2 = param_3;
  func_0x00010bfe0640(param_3);
  func_0x000109023974(param_3);
  uVar6 = param_1;
  uVar7 = param_2;
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  lVar3 = param_3;
  func_0x00010bf2a8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = (ulong)(lVar3 != 0);
  lVar4 = param_3;
  func_0x000109023b28(param_3);
  _objc_release(param_3);
  FUN_107ff9360((double)(int)lVar1,(double)(int)lVar2,param_1,param_2,uVar6,uVar7,uVar5,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107ff9c0c; end: 107ff9c7f;  */

void FUN_107ff9c0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf720;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0c2640(puVar1);
  uVar2 = param_1;
  FUN_107ff9c80(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ff9c80; end: 107ff9dd7;  */

void FUN_107ff9c80(double param_1,double param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar9 = param_1;
  dVar11 = param_2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_4;
  func_0x00010c2a5040(param_4);
  lVar3 = param_4;
  func_0x00010bfe0640(param_4);
  func_0x000109023974(param_4);
  dVar10 = *(double *)PTR__CGSizeZero_110347620;
  dVar12 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((param_1 == dVar10) && (bVar1 = false, !NAN(param_2) && !NAN(dVar12))) {
    bVar1 = param_2 == dVar12;
  }
  if (bVar1) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    param_2 = dVar12;
    param_1 = dVar10;
  }
  lVar4 = param_4;
  func_0x00010bf2a8a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010b5fa088(param_4);
  lVar6 = param_4;
  func_0x000109024028(param_4);
  lVar7 = param_4;
  func_0x000109023b28(param_4);
  uVar8 = param_3;
  FUN_107ff985c((double)(int)lVar2,(double)(int)lVar3,dVar9,dVar11,param_1,param_2,param_3,
                lVar4 != 0,lVar5 - 2U < 0xb,lVar6,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107ff9dd8; end: 107ff9fdf;  */

void FUN_107ff9dd8(double param_1,double param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain();
  puVar1 = param_3;
  func_0x00010b5fa760();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_3;
    FUN_107ff9b24(param_3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107ff9f88;
  }
  func_0x00010b5fa99c(param_3);
  if (param_1 == 0.0) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
LAB_107ff9e2c:
    dVar7 = param_1;
    dVar8 = param_1;
    dVar9 = INFINITY;
  }
  else if (param_2 == 0.0) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    dVar7 = param_1;
    dVar8 = INFINITY;
    dVar9 = param_2;
  }
  else {
    dVar10 = param_1 / param_2;
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    if (dVar10 == 0.0) goto LAB_107ff9e2c;
    dVar7 = INFINITY;
    dVar8 = dVar7;
    dVar9 = param_2;
    if ((dVar10 != INFINITY) && (dVar7 = dVar10 * param_2, dVar8 = dVar7, dVar7 < param_1)) {
      dVar8 = param_1;
      dVar9 = param_1 / dVar10;
    }
  }
  func_0x00010b5fa99c(param_3);
  dVar3 = dVar7;
  dVar10 = param_2;
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  dVar4 = dVar3;
  if (1 < param_4 - 3U) {
    dVar4 = dVar10;
    dVar10 = dVar3;
  }
  if (dVar7 == 0.0) {
    dVar3 = 0.0;
  }
  else if (param_2 == 0.0) {
LAB_107ff9eb0:
    dVar4 = 0.0;
    dVar3 = dVar10;
  }
  else {
    dVar7 = dVar7 / param_2;
    dVar3 = 0.0;
    if (dVar7 != 0.0) {
      if (dVar7 == INFINITY) goto LAB_107ff9eb0;
      dVar3 = dVar7 * dVar4;
      if (dVar10 <= dVar7 * dVar4) {
        dVar4 = dVar10 / dVar7;
        dVar3 = dVar10;
      }
    }
  }
  dVar10 = dVar4 / dVar9;
  if (dVar3 / dVar8 <= dVar4 / dVar9) {
    dVar10 = dVar3 / dVar8;
  }
  puVar2 = PTR_PTR_1126c20c0;
  _objc_alloc(PTR_PTR_1126c20c0);
  uVar5 = 0x3ff921fb54442d18;
  if (param_4 != 3) {
    uVar5 = 0;
  }
  uVar6 = 0xbff921fb54442d18;
  if (param_4 != 4) {
    uVar6 = uVar5;
  }
  func_0x00010c040460(uVar6,dVar10,0,0,dVar8,dVar9);
  puVar1 = PTR_PTR_1126d8d70;
  _objc_alloc(PTR_PTR_1126d8d70);
  func_0x00010c055fe0();
  _objc_release(puVar2);
LAB_107ff9f88:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ff9fe0; end: 107ffa0b7;  */

void FUN_107ff9fe0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_2;
  func_0x000109023c14();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_2;
    FUN_107ff9b24(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126c20c0;
    _objc_alloc(PTR_PTR_1126c20c0);
    func_0x000109023c78(param_2);
    puVar1 = param_2;
    func_0x00010c2a5040(param_2);
    puVar3 = param_2;
    func_0x00010bfe0640(param_2);
    func_0x00010c040460(0,param_1,0,0,(double)(int)puVar1,(double)(int)puVar3,puVar2);
    puVar1 = PTR_PTR_1126d8d70;
    _objc_alloc(PTR_PTR_1126d8d70);
    func_0x00010c055fe0();
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ffa0b8; end: 107ffa11b;  */

bool FUN_107ffa0b8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf3ec40();
    if (lVar2 == -0x2e1f) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010bf3ec40(param_1);
      bVar1 = lVar2 == 0x280;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107ffa11c; end: 107ffa18f;  */

void FUN_107ffa11c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bf720;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0c2640(puVar1);
  uVar2 = param_1;
  FUN_107ffa190(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ffa190; end: 107ffa35b;  */

void FUN_107ffa190(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b5fa088();
  if (lVar1 != 8) {
    func_0x00010b5fa088(param_3);
  }
  uVar2 = param_4;
  func_0x00010c0ef4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_107ff9c80(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bf6c8;
  _objc_alloc(PTR_PTR_1126bf6c8);
  lVar1 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c26fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5fa088(param_3);
  lVar7 = param_3;
  func_0x00010c2a5040(param_3);
  lVar8 = param_3;
  func_0x00010bfe0640(param_3);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8b160(param_3);
  func_0x00010c0df740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0472e0((double)(int)lVar7,(double)(int)lVar8,puVar4);
  _objc_release(puVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ffa35c; end: 107ffaa17;  */

void FUN_107ffa35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c4908;
  _objc_retain(in_stack_00000010);
  _objc_retain(param_7);
  _objc_alloc();
  lVar2 = param_7;
  func_0x00010c27c940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_b0,lVar2);
  }
  func_0x00010c0522a0();
  _objc_release(lVar2);
  puVar3 = param_9;
  func_0x000108e35f68(param_9,in_stack_00000010,param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000010);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = puVar3;
    func_0x00010c0d3c80(puVar3);
  }
  func_0x00010c178c80(puVar1);
  _objc_release(puVar4);
  puVar4 = param_9;
  func_0x00010bf8a040(param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  func_0x00010c191a20(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = param_5;
    FUN_107ff8ca8(param_1,param_2,param_5,param_12);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c191a20(puVar1);
    }
    else {
      puVar5 = puVar4;
      func_0x00010bf8a020(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0d3c80();
      func_0x00010c191a20(puVar1);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  uVar7 = param_6;
  FUN_107ff9770(param_3,param_4,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c130740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186260(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar4 = param_9;
  func_0x000108eb6800(param_9,param_8,param_10,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar6 = puVar4;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = param_5;
    FUN_107ff86c4(param_5,param_8,0,param_11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = puVar6;
  func_0x00010c0d3c80();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bc80(puVar1);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c20bc80(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ffaa18; end: 107ffaa8b; -[SCMemoriesReverseAudioCacheServices initWithReverseAudioCache:] */

undefined1 * FUN_107ffaa18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc0e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffaa8c; end: 107ffaa93; -[SCMemoriesReverseAudioCacheServices reverseAudioCache] */

undefined8 FUN_107ffaa8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffaa94; end: 107ffaa9f; -[SCMemoriesReverseAudioCacheServices .cxx_destruct] */

void FUN_107ffaa94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffaaa0; end: 107ffab27; +[SCMemoriesLegacySOJUEditsParser isReversePlayback:] */

undefined8 FUN_107ffaaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c140120();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c140160();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107ffab28; end: 107ffabbb; +[SCMemoriesLegacySOJUEditsParser containsColorFilter:] */

bool FUN_107ffab28(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a0480();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ffabbc; end: 107ffac93; +[SCMemoriesLegacySOJUEditsParser scMotionFilterPlaybackRate:] */

undefined4 FUN_107ffabbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c249da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0x3f800000;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c249dc0();
    _objc_release(lVar1);
    uVar3 = 0x40000000;
    if (lVar2 == 0x7b2e3000) {
      uVar3 = 0x40800000;
    }
    uVar4 = 0x3f800000;
    if (lVar2 != 0) {
      uVar4 = uVar3;
    }
    uVar3 = 0x3f000000;
    if (lVar2 != -0x6e0993d9) {
      uVar3 = uVar4;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107ffac94; end: 107ffacfb; +[SCCameosBloopsStickerAsset descriptor] */

void FUN_107ffac94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b91df0,
                        &PTR____CFConstantStringClassReference_110ecee58,&PTR_DAT_11324fb70,
                        &PTR_s_id_p_11324fba8,2,0x18,0x1c);
    puRam0000000113728ad8 = puVar1;
  }
  return;
}



/* Entry: 107ffacfc; end: 107ffad63; +[SCCameosBloopsStickerAssetPack descriptor] */

void FUN_107ffacfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b91e40,
                        &PTR____CFConstantStringClassReference_110ecee78,&PTR_DAT_11324fb70,
                        &PTR_DAT_11324fb88,1,0x10,0x1c);
    puRam0000000113728ae0 = puVar1;
  }
  return;
}



/* Entry: 107ffad64; end: 107ffb20b; -[SCOperaRotatingViewTransformManipulator initWithView:containerView:layerView:bounds:] */

/* WARNING: Possible PIC construction at 0x000107ffb244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ffb248) */
/* WARNING: Removing unreachable block (ram,0x00010bed62a0) */

undefined8 *
FUN_107ffad64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_e8 = PTR_PTR_1126fc0f0;
  puVar2 = &uStack_f0;
  uStack_f0 = param_5;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[3] = 0x3ff0000000000000;
    _objc_retain(param_9);
    uVar3 = puVar2[1];
    puVar2[1] = param_9;
    _objc_release(uVar3);
    puVar2[8] = param_1;
    puVar2[9] = param_2;
    puVar2[10] = param_3;
    puVar2[0xb] = param_4;
    uVar3 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    uVar5 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    puVar2[0xc] = uVar3;
    puVar2[0xd] = uVar5;
    func_0x00010c219b60(param_9);
    func_0x00010c219b60(param_8);
    uVar3 = param_8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_7;
    func_0x00010bf34860(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_7;
    func_0x00010bf348e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    uVar7 = uVar3;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar2[0xe];
    puVar2[0xe] = uVar7;
    _objc_release(uVar13);
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    uVar7 = uVar3;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar2[0xf];
    puVar2[0xf] = uVar7;
    _objc_release(uVar13);
    _objc_release(uVar3);
    uVar3 = param_9;
    func_0x00010c262ca0(param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar2[1];
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c08de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar9 = puVar2[1];
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c2793a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar9);
    uVar10 = puVar2[1];
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar10);
    uVar11 = puVar2[1];
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar11);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_d0 = puVar2[0xe];
    uStack_c8 = puVar2[0xf];
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e0 = uVar5;
    uStack_d8 = uVar6;
    uStack_c0 = uVar13;
    uStack_b8 = uVar8;
    uStack_b0 = uVar9;
    uStack_a8 = uVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar2;
  }
  ___stack_chk_fail();
  param_7[0x10] = puVar4;
  if ((undefined *)0x2 < (undefined *)((long)puVar4 + -3)) {
    if (puVar4 == (undefined8 *)0x2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_7,PTR_s__applyCircularFormatWithMediaSca_1125510f0);
      return param_7;
    }
    if (puVar4 != (undefined8 *)0x1) {
      return param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be93110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_7,PTR_s__resetLayerMask_1125825e0);
  return param_7;
}



/* Entry: 107ffb20c; end: 107ffb2d3; -[SCOperaRotatingViewTransformManipulator configureWithFormat:config:] */

/* WARNING: Possible PIC construction at 0x000107ffb244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ffb248) */
/* WARNING: Removing unreachable block (ram,0x00010bed62a0) */

void FUN_107ffb20c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  *(long *)(param_2 + 0x80) = param_4;
  if (param_4 - 3U < 3) {
    param_1 = 0x3ff5555555555555;
  }
  else {
    if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcdd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s__applyCircularFormatWithMediaSca_1125510f0);
      return;
    }
    if (param_4 != 1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be93110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s__resetLayerMask_1125825e0);
  return;
}



/* Entry: 107ffb2d4; end: 107ffb31f; -[SCOperaRotatingViewTransformManipulator resetTargetViewTransform] */

void FUN_107ffb2d4(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(long *)(param_1 + 0x18) = auVar1._8_8_;
  *(long *)(param_1 + 0x10) = auVar1._0_8_;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  func_0x00010c219960(*(undefined8 *)(param_1 + 8),param_2,&uStack_40);
  return;
}



/* Entry: 107ffb320; end: 107ffb327; -[SCOperaRotatingViewTransformManipulator resetTrackingParams] */

void FUN_107ffb320(long param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 107ffb328; end: 107ffb35f; -[SCOperaRotatingViewTransformManipulator updateTargetViewWithRotation:animatedIfPossible:] */

void FUN_107ffb328(double param_1,long param_2)

{
  if ((ABS(param_1 - *(double *)(param_2 + 0x20)) * 180.0) / 3.141592653589793 < 0.10000000149011612
     ) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb51b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_forceUpdateTargetViewWithRotatio_1125cae10);
  return;
}



/* Entry: 107ffb360; end: 107ffb45b; -[SCOperaRotatingViewTransformManipulator forceUpdateTargetViewWithRotation:animatedIfPossible:] */

void FUN_107ffb360(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_2 + 0x20);
  if (param_1 != dVar4) {
    *(double *)(param_2 + 0x20) = param_1;
    func_0x00010bedb340();
    lVar3 = *(long *)(param_2 + 0x80);
    if (lVar3 - 1U < 2) {
      uVar1 = *(undefined8 *)(param_2 + 8);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220240(uVar1);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    if (lVar3 - 4U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (dVar4,param_1,param_2,PTR_s__updateAffineTransformForTraditi_112592508,param_4);
      return;
    }
    if (lVar3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bed2d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,PTR_s__updateAffineTransformForDynamic_112592500);
      return;
    }
  }
  return;
}



/* Entry: 107ffb45c; end: 107ffb54b; -[SCOperaRotatingViewTransformManipulator updateTargetViewWithTranslation:] */

void FUN_107ffb45c(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_3 + 0x38);
  if (0.0 < dVar3) {
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 8));
    _CGRectGetWidth();
    func_0x00010be224c0(param_3);
    param_1 = param_1 * dVar3;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 8));
    _CGRectGetHeight();
    func_0x00010be224c0(param_3);
    param_2 = param_2 * dVar3;
    if ((param_1 != *(double *)(param_3 + 0x28)) || (param_2 != *(double *)(param_3 + 0x30))) {
      *(double *)(param_3 + 0x28) = param_1;
      *(double *)(param_3 + 0x30) = param_2;
      uVar1 = *(undefined8 *)(param_3 + 8);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971e0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220240(uVar1,param_4,puVar2,&PTR____CFConstantStringClassReference_110ecee98);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107ffb54c; end: 107ffb5ef; -[SCOperaRotatingViewTransformManipulator updateTargetViewWithPinchScale:] */

void FUN_107ffb54c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_1 != *(double *)(param_2 + 0x10)) {
    if (*(long *)(param_2 + 0x80) == 3) {
      param_1 = param_1 * *(double *)(param_2 + 0x18);
    }
    if (param_1 != *(double *)(param_2 + 0x10)) {
      *(double *)(param_2 + 0x10) = param_1;
      uVar1 = *(undefined8 *)(param_2 + 8);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(undefined8 *)(param_2 + 0x10),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220240(uVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110dc8938);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107ffb5f0; end: 107ffb6cf; -[SCOperaRotatingViewTransformManipulator _updateAffineTransformForDynamicScalingViewingWithRotation:] */

void FUN_107ffb5f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_60 = uStack_90;
  uStack_58 = uStack_88;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  _CGAffineTransformRotate(&uStack_60,param_1,&uStack_90);
  dVar2 = *(double *)(param_2 + 0x48);
  FUN_107ffbdb4(*(undefined8 *)(param_2 + 0x40),dVar2,*(undefined8 *)(param_2 + 0x50),
                *(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60),
                *(undefined8 *)(param_2 + 0x68),param_1);
  dVar2 = dVar2 / *(double *)(param_2 + 0x68);
  if (*(double *)(param_2 + 0x68) <= 0.0) {
    dVar2 = 1.0;
  }
  *(double *)(param_2 + 0x18) = dVar2;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  _CGAffineTransformScale(&uStack_c0,dVar2,dVar2,&uStack_90);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  func_0x00010c166440();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ffb6d0; end: 107ffb77f; -[SCOperaRotatingViewTransformManipulator _resetLayerMask] */

/* WARNING: Possible PIC construction at 0x000107ffb760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ffb764) */

void FUN_107ffb6d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _CGRectGetWidth(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 107ffb780; end: 107ffb963; -[SCOperaRotatingViewTransformManipulator _applyCircularFormatWithMediaScaleFactor:] */

void FUN_107ffb780(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != *(double *)(param_2 + 0x38)) {
    *(double *)(param_2 + 0x38) = param_1;
    dVar5 = *(double *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    uVar8 = *(undefined8 *)(param_2 + 0x50);
    uVar9 = *(undefined8 *)(param_2 + 0x58);
    dVar4 = dVar5;
    _CGRectGetHeight(dVar5,uVar6,uVar8,uVar9);
    _CGRectGetWidth(dVar5,uVar6,uVar8,uVar9);
    dVar5 = SQRT(dVar5 * dVar5 + dVar4 * dVar4);
    dVar4 = dVar5;
    func_0x00010be224c0(dVar5,param_1,param_2);
    dVar7 = (dVar4 - dVar5) * 0.5;
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(dVar7,dVar7,dVar5,dVar5,dVar5 * 0.5,PTR__OBJC_CLASS___UIBezierPath_1126aec18
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar1,param_3,puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar1,param_3,puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(puVar1,param_3,puVar3);
    _objc_release(puVar2);
    func_0x00010c1bdd00(0,puVar1);
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar6);
    func_0x00010c181140(dVar4,*(undefined8 *)(param_2 + 0x70));
    func_0x00010c181140(dVar4,*(undefined8 *)(param_2 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107ffb964; end: 107ffb9c7; -[SCOperaRotatingViewTransformManipulator _updateMaxAndMinRollDegree] */

void FUN_107ffb964(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(long)((*(double *)(param_1 + 0x20) / -3.141592653589793) * 180.0 * 10.0) / 10.0;
  if (5.0 <= ABS(dVar1)) {
    dVar2 = *(double *)(param_1 + 0x90);
    *(ulong *)(param_1 + 0x90) =
         (ulong)dVar2 ^ ((ulong)dVar2 ^ (ulong)dVar1) & -(ulong)(dVar2 < dVar1);
    *(ulong *)(param_1 + 0x88) =
         (ulong)dVar1 ^
         ((ulong)dVar1 ^ (ulong)*(double *)(param_1 + 0x88)) &
         -(ulong)(*(double *)(param_1 + 0x88) < dVar1);
  }
  return;
}



/* Entry: 107ffb9c8; end: 107ffb9cf; -[SCOperaRotatingViewTransformManipulator _getScaledLength:mediaScaleFactor:] */

double FUN_107ffb9c8(double param_1,double param_2)

{
  return param_1 * param_2;
}



/* Entry: 107ffb9d0; end: 107ffbbc3; -[SCOperaRotatingViewTransformManipulator _updateAffineTransformForTraditionalViewingFromRotation:toRotation:animated:] */

void FUN_107ffb9d0(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  bool bVar2;
  double *pdVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  bVar1 = ABS(param_2) <= 0.7853981633974483;
  bVar5 = 2.356194490192345 <= ABS(param_2);
  pdVar3 = (double *)(param_3 + 0x60);
  if (!bVar5 && !bVar1) {
    pdVar3 = (double *)(param_3 + 0x68);
  }
  dVar11 = *(double *)(param_3 + 0x50) / *pdVar3;
  if (*(double *)(param_3 + 0x10) == dVar11) {
    dVar10 = ABS(param_1);
    bVar6 = false;
    bVar7 = false;
    if (dVar10 < 2.356194490192345) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(dVar10)) {
        bVar6 = dVar10 == 0.7853981633974483;
        bVar7 = 0.7853981633974483 <= dVar10;
      }
    }
    bVar4 = !bVar5 && !bVar1;
    bVar2 = 0.0 < param_1 != param_2 <= 0.0 && bVar4;
    if (!bVar7 || bVar6) {
      bVar2 = bVar5 || bVar1;
    }
    if (bVar2) goto LAB_107ffbba0;
  }
  else {
    bVar4 = !bVar5 && !bVar1;
  }
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uVar8 = 0;
  if (0.0 < param_2 && (!bVar5 && !bVar1)) {
    uVar8 = 0x3ff921fb54442d18;
  }
  uVar9 = 0xbff921fb54442d18;
  if (!(bool)(param_2 <= 0.0 & bVar4)) {
    uVar9 = uVar8;
  }
  uStack_70 = uStack_a0;
  uStack_68 = uStack_98;
  uStack_60 = uStack_90;
  uStack_58 = uStack_88;
  uStack_50 = uStack_80;
  uStack_48 = uStack_78;
  _CGAffineTransformRotate(&uStack_70,uVar9,&uStack_a0);
  *(double *)(param_3 + 0x10) = dVar11;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  _CGAffineTransformScale(&uStack_a0,dVar11,dVar11,&uStack_d0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  if ((param_5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_3 + 8);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166440();
    _objc_release(uVar8);
  }
  else {
    uStack_120 = 0xc2000000;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_118 = FUN_107ffbbc4;
    puStack_110 = &UNK_1108700e8;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    lStack_108 = param_3;
    func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_4,&puStack_128,0
                       );
  }
LAB_107ffbba0:
  func_0x00010bed62a0(dVar11,param_3);
  return;
}



/* Entry: 107ffbbc4; end: 107ffbc1f;  */

void FUN_107ffbbc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166440();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ffbc20; end: 107ffbce7; -[SCOperaRotatingViewTransformManipulator _updateCornerRadiusForScale:] */

void FUN_107ffbc20(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  if ((*(ulong *)(param_2 + 0x80) & 0xfffffffffffffffe) == 4) {
    dVar3 = 16.0 / param_1;
    dVar2 = 0.0;
    if (param_1 <= 0.0) {
      dVar3 = 0.0;
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    _objc_release(uVar1);
    if (dVar3 != dVar2) {
      uVar1 = *(undefined8 *)(param_2 + 8);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_2 + 8);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107ffbce8; end: 107ffbd33; -[SCOperaRotatingViewTransformManipulator _configureTargetViewIfNeeded] */

void FUN_107ffbce8(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  
  if (*(long *)(param_1 + 0x80) == 5) {
    dVar4 = ABS(*(double *)(param_1 + 0x20));
    bVar2 = false;
    bVar3 = false;
    if (dVar4 < 2.356194490192345) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar4)) {
        bVar2 = dVar4 == 0.7853981633974483;
        bVar3 = 0.7853981633974483 <= dVar4;
      }
    }
    lVar1 = 0x68;
    if (!bVar3 || bVar2) {
      lVar1 = 0x60;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c28ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(double *)(param_1 + 0x50) / *(double *)(param_1 + lVar1),param_1,
               PTR_s_updateTargetViewWithPinchScale__112680528);
    return;
  }
  return;
}



/* Entry: 107ffbd34; end: 107ffbd3b; -[SCOperaRotatingViewTransformManipulator minRollDegree] */

undefined8 FUN_107ffbd34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107ffbd3c; end: 107ffbd43; -[SCOperaRotatingViewTransformManipulator maxRollDegree] */

undefined8 FUN_107ffbd3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107ffbd44; end: 107ffbd4b; -[SCOperaRotatingViewTransformManipulator lastRotation] */

undefined8 FUN_107ffbd44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ffbd4c; end: 107ffbd53; -[SCOperaRotatingViewTransformManipulator lastScale] */

undefined8 FUN_107ffbd4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ffbd54; end: 107ffbd5f; -[SCOperaRotatingViewTransformManipulator bounds] */

undefined8 FUN_107ffbd54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ffbd60; end: 107ffbd67; -[SCOperaRotatingViewTransformManipulator viewportSize] */

undefined1  [16] FUN_107ffbd60(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 107ffbd68; end: 107ffbd6f; -[SCOperaRotatingViewTransformManipulator lastMediaScaleFactor] */

undefined8 FUN_107ffbd68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ffbd70; end: 107ffbd77; -[SCOperaRotatingViewTransformManipulator manipulatorFormat] */

undefined8 FUN_107ffbd70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107ffbd78; end: 107ffbdb3; -[SCOperaRotatingViewTransformManipulator .cxx_destruct] */

void FUN_107ffbd78(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffbdb4; end: 107ffbef7;  */

undefined1  [16]
FUN_107ffbdb4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,double param_5,
             double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar1 = param_1;
  _CGRectGetHeight();
  dVar2 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar3 = SQRT(dVar2 * dVar2 + dVar1 * dVar1) * 0.5;
  dVar1 = param_1;
  dVar2 = param_2;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar1 = (dVar1 * 0.5) / dVar3;
  _asin();
  dVar1 = param_7 + dVar1;
  ___sincos_stret();
  dVar4 = ABS(dVar3 * dVar1) + ABS(dVar3 * dVar1);
  dVar5 = ABS(dVar3 * dVar2) + ABS(dVar3 * dVar2);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar1 = (param_1 * 0.5) / dVar3;
  _asin();
  dVar2 = 3.141592653589793;
  param_7 = param_7 + (3.141592653589793 - dVar1);
  ___sincos_stret();
  dVar1 = ABS(dVar3 * param_7) + ABS(dVar3 * param_7);
  if (dVar1 <= dVar4) {
    dVar1 = dVar4;
  }
  dVar2 = ABS(dVar3 * dVar2) + ABS(dVar3 * dVar2);
  if (dVar2 <= dVar5) {
    dVar2 = dVar5;
  }
  dVar3 = (param_5 * dVar1) / param_6;
  if (dVar3 < dVar2) {
    dVar1 = (param_6 * dVar2) / param_5;
    dVar3 = dVar2;
  }
  auVar6._8_8_ = dVar1;
  auVar6._0_8_ = dVar3;
  return auVar6;
}



/* Entry: 107ffbef8; end: 107ffbf0f;  */

long FUN_107ffbef8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf4b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_containsBeatSyncTemplate__1125b0738,param_1);
    return param_2;
  }
  return 0;
}



/* Entry: 107ffbf10; end: 107ffbf83; -[SCPreviewFeatureDialogCoordinatorServices initWithDialogCoordinator:] */

undefined1 * FUN_107ffbf10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc0f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffbf84; end: 107ffbf8b; -[SCPreviewFeatureDialogCoordinatorServices dialogCoordinator] */

undefined8 FUN_107ffbf84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffbf8c; end: 107ffbf97; -[SCPreviewFeatureDialogCoordinatorServices .cxx_destruct] */

void FUN_107ffbf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffbf98; end: 107ffc00b; -[SCPreviewFeatureLensExplorerServices initWithLensExplorer:] */

undefined1 * FUN_107ffbf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc100;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffc00c; end: 107ffc013; -[SCPreviewFeatureLensExplorerServices lensExplorer] */

undefined8 FUN_107ffc00c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffc014; end: 107ffc01f; -[SCPreviewFeatureLensExplorerServices .cxx_destruct] */

void FUN_107ffc014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffc020; end: 107ffc06b; +[SCPreviewFeatureLensExplorerEvent didDismiss] */

void FUN_107ffc020(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8d78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ffc06c; end: 107ffc0b3; +[SCPreviewFeatureLensExplorerEvent willPresent] */

void FUN_107ffc06c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8d78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ffc0b4; end: 107ffc0d7; -[SCPreviewFeatureLensExplorerEvent copyWithZone:] */

undefined8 FUN_107ffc0b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ffc0d8; end: 107ffc0df; -[SCPreviewFeatureLensExplorerEvent hash] */

undefined8 FUN_107ffc0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffc0e0; end: 107ffc123; -[SCPreviewFeatureLensExplorerEvent internalInit] */

void FUN_107ffc0e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc108;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffc124; end: 107ffc1ab; -[SCPreviewFeatureLensExplorerEvent isEqual:] */

bool FUN_107ffc124(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107ffc1ac; end: 107ffc223; -[SCPreviewFeatureLensExplorerEvent matchWillPresent:didDismiss:] */

void FUN_107ffc1ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_107ffc1f4;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_107ffc1f4;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_107ffc1f4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ffc224; end: 107ffc3cf;  */

undefined1  [16] FUN_107ffc224(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    dVar7 = *(double *)PTR__CGSizeZero_110347620;
    dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar1 = param_1;
    func_0x00010c0ff640();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      dVar7 = *(double *)PTR__CGSizeZero_110347620;
      dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2a5040();
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfe0640();
      _objc_release(uVar3);
      if (((int)uVar4 == 0) || ((int)uVar5 == 0)) {
        uVar3 = uVar1;
        func_0x00010c0c3fe0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf7ee20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c2a5040();
        _objc_release(uVar5);
        _objc_release(uVar3);
        uVar3 = uVar1;
        func_0x00010c0c3fe0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf7ee20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010bfe0640();
        _objc_release(uVar6);
        _objc_release(uVar3);
      }
      dVar7 = (double)(uVar4 & 0xffffffff);
      dVar8 = (double)(uVar5 & 0xffffffff);
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_1);
  auVar9._8_8_ = dVar8;
  auVar9._0_8_ = dVar7;
  return auVar9;
}



/* Entry: 107ffc3d0; end: 107ffc413;  */

bool FUN_107ffc3d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 107ffc414; end: 107ffc4af;  */

void FUN_107ffc414(void)

{
  FUN_107ffc224();
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  return;
}



/* Entry: 107ffc4b0; end: 107ffc76f;  */

void FUN_107ffc4b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR_PTR_1126c20c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_107ffc224(param_3,param_4);
  dVar3 = param_1;
  dVar4 = param_2;
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  dVar5 = 1.0;
  if ((param_1 != 0.0) && (param_2 != 0.0)) {
    param_1 = param_1 / param_2;
    dVar5 = 0.0;
    dVar6 = dVar4;
    if ((param_1 != 0.0) &&
       ((dVar5 = dVar3, dVar6 = 0.0, param_1 != INFINITY &&
        (dVar5 = param_1 * dVar4, dVar6 = dVar4, dVar3 <= dVar5)))) {
      dVar5 = dVar3;
      dVar6 = dVar3 / param_1;
    }
    dVar2 = dVar4 / dVar6;
    if (dVar4 / dVar6 <= dVar3 / dVar5) {
      dVar2 = dVar3 / dVar5;
    }
    dVar4 = 1.0;
    dVar3 = 1.0 / dVar2;
    func_0x00010bfc9ac0(dVar3,PTR_PTR_1126bf720);
    dVar5 = dVar3;
  }
  FUN_107ffc414(param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c040460(0,dVar5,0,0,dVar3,dVar4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ffc770; end: 107ffc993;  */

void FUN_107ffc770(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar12 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126d8d80;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 + -0.5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c219bc0(puVar2,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2 + -0.5,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c219be0(puVar4,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    func_0x00010c0df720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c1ee7a0(puVar6,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar9 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c14e120(lVar9);
    func_0x00010c0df720(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c1f5fe0(puVar8,param_4,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107ffc994; end: 107ffcb23;  */

void FUN_107ffc994(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    _objc_release(lVar1);
    dVar6 = 0.0;
    if (0.01 <= ABS(param_1 + -0.5)) {
      dVar6 = param_1 + -0.5;
    }
    lVar1 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    dVar7 = param_2 + -0.5;
    _objc_release(lVar1);
    dVar4 = ABS(dVar7);
    dVar8 = 0.0;
    if (0.01 <= dVar4) {
      dVar8 = dVar7;
    }
    puVar3 = PTR_PTR_1126c20c0;
    _objc_alloc(PTR_PTR_1126c20c0);
    lVar1 = param_3;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    lVar2 = param_3;
    dVar7 = dVar4;
    func_0x00010c27a460(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c14e120(lVar2);
    dVar5 = dVar7;
    FUN_107ffc414(param_4,param_5);
    _objc_release(param_5);
    _objc_release(param_4);
    func_0x00010c040460(dVar4,dVar7,dVar6,dVar8,dVar5,param_2,puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ffcb24; end: 107ffcc7b;  */

void FUN_107ffcb24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar4 = param_1;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c0ff640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1;
      func_0x00010bf67240();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar2;
        FUN_107ffc994(lVar2,param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107ffcc7c; end: 107ffcd07;  */

undefined8 FUN_107ffcc7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdd960();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107ffcd08; end: 107ffd157;  */

ulong FUN_107ffcd08(ulong param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_1f0;
  undefined *puStack_1c8;
  undefined1 auStack_128 [152];
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar6 == 0) {
    puStack_1c8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = param_2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c09dea0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        puVar7 = PTR_PTR_1126affe8;
        func_0x00010c09e180(PTR_PTR_1126affe8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar7);
        uVar6 = uVar6 + 1;
        uVar2 = param_1;
        func_0x00010c09dea0();
      } while (uVar6 < uVar2);
    }
    puStack_1c8 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
  }
  _objc_retain(param_3);
  if ((param_3 == 0) || (dVar8 = (double)func_0x00010c14e120(param_3), dVar8 <= 0.0)) {
    _objc_release(param_3);
  }
  else {
    uVar9 = func_0x00010c14e120(param_3);
    dVar8 = (double)func_0x00010c27ade0(param_3);
    dVar10 = (double)func_0x00010c27ae20(param_3);
    auVar12 = NEON_fmov(0x3fe0000000000000,8);
    dVar8 = dVar8 + auVar12._0_8_;
    dVar10 = dVar10 + auVar12._8_8_;
    auVar13 = NEON_fmov(0xbfe0000000000000,8);
    auVar14._0_8_ = -(ulong)(ABS(dVar8 + auVar13._0_8_) < 0.01);
    auVar14._8_8_ = -(ulong)(ABS(dVar10 + auVar13._8_8_) < 0.01);
    auVar13._8_8_ = dVar10;
    auVar13._0_8_ = dVar8;
    auVar12 = auVar12 ^ (auVar12 ^ auVar13) & ~auVar14;
    puVar1 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    uVar11 = func_0x00010c141a80(param_3);
    func_0x00010c055500(auVar12._0_8_,auVar12._8_8_,uVar9,uVar11,puVar1);
    puStack_1f0 = PTR_PTR_1126bb2a8;
    _objc_alloc();
    uVar4 = 1000;
    _CMTimeMake(auStack_128,0);
    func_0x00010c052280();
    _objc_release(puVar1);
    _objc_release(param_3);
    if (puStack_1f0 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puStack_1f0;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010bf931e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_107ffcf8c;
    }
  }
  puStack_1f0 = (undefined *)0x0;
  uVar6 = 0;
LAB_107ffcf8c:
  _objc_retain(puStack_1c8);
  puVar1 = puStack_1c8;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puStack_1c8);
      }
      _objc_retain(uVar6);
      uVar2 = param_1;
      func_0x00010c0ff580();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        _objc_retain(uVar6);
        func_0x00010c288840(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar6);
      }
      _objc_release(uVar3);
      _objc_release(uVar6);
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
    puVar1 = puStack_1c8;
    func_0x00010bf52a60();
  }
  _objc_release(puStack_1c8);
  _objc_release(puStack_1f0);
  _objc_release(uVar6);
  _objc_release(puStack_1c8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  uVar6 = uVar4;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf0b760();
  _objc_release(uVar6);
  if ((int)uVar2 == 5) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar2 = uVar4;
    func_0x00010c118b40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uVar6 = uVar2;
      func_0x00010bfdd960();
    }
    else {
      uVar3 = uVar2;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(lVar5);
      uVar6 = (ulong)((uint)lVar5 ^ 1);
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar4);
  return uVar6;
}



/* Entry: 107ffd158; end: 107ffd21f;  */

ulong FUN_107ffd158(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf0b760();
  _objc_release(uVar4);
  if ((int)uVar1 == 5) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar4 = uVar1;
      func_0x00010bfdd960();
    }
    else {
      uVar2 = uVar1;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(lVar3);
      uVar4 = (ulong)((uint)lVar3 ^ 1);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 107ffd220; end: 107ffd25b;  */

void FUN_107ffd220(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2199c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ffd25c; end: 107ffd2cf; -[SCPreviewFeatureTimelineServices initWithTimeline:] */

undefined1 * FUN_107ffd25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffd2d0; end: 107ffd2d7; -[SCPreviewFeatureTimelineServices timeline] */

undefined8 FUN_107ffd2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffd2d8; end: 107ffd2e3; -[SCPreviewFeatureTimelineServices .cxx_destruct] */

void FUN_107ffd2d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffd2e4; end: 107ffd357; -[SCPreviewFeatureTooltipPresenterServices initWithTooltipPresenter:] */

undefined1 * FUN_107ffd2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ffd358; end: 107ffd35f; -[SCPreviewFeatureTooltipPresenterServices tooltipPresenter] */

undefined8 FUN_107ffd358(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffd360; end: 107ffd36b; -[SCPreviewFeatureTooltipPresenterServices .cxx_destruct] */

void FUN_107ffd360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffd36c; end: 107ffd373; -[SCTemplateServices experiments] */

undefined8 FUN_107ffd36c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffd374; end: 107ffd37b; -[SCTemplateServices helper] */

undefined8 FUN_107ffd374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ffd37c; end: 107ffd383; -[SCTemplateServices snapDocFactory] */

undefined8 FUN_107ffd37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ffd384; end: 107ffd3bf; -[SCTemplateServices .cxx_destruct] */

void FUN_107ffd384(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffd3c0; end: 107ffd46b; -[SCTemplate initWithTemplateId:templateMetadata:] */

undefined1 *
FUN_107ffd3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc128;
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



/* Entry: 107ffd46c; end: 107ffd48f; -[SCTemplate copyWithZone:] */

undefined8 FUN_107ffd46c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ffd490; end: 107ffd503; -[SCTemplate hash] */

undefined8 * FUN_107ffd490(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107ffd584:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107ffd590;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107ffd590;
        }
        goto LAB_107ffd584;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107ffd590:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107ffd504; end: 107ffd5ab; -[SCTemplate isEqual:] */

long FUN_107ffd504(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ffd584:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ffd590;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107ffd590;
        }
        goto LAB_107ffd584;
      }
    }
    lVar3 = 0;
  }
LAB_107ffd590:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ffd5ac; end: 107ffd5b3; -[SCTemplate templateId] */

undefined8 FUN_107ffd5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffd5b4; end: 107ffd5bb; -[SCTemplate templateMetadata] */

undefined8 FUN_107ffd5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ffd5bc; end: 107ffd5eb; -[SCTemplate .cxx_destruct] */

void FUN_107ffd5bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ffd5ec; end: 107ffd7a3; -[SCDirectorModeScope initWithPresentingUIContainer:sourcePageType:directorModeSource:replyConfiguration:scopeDelegate:draftDelegate:sendSnapDelegate:transitionDelegate:shortcutContextAction:mediaProvider:spotlightPostingConfiguration:] */

undefined8 *
FUN_107ffd5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fc130;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_storeWeak(puVar1 + 7,param_8);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107ffd7a4; end: 107ffd7ab; -[SCDirectorModeScope uiContainer] */

undefined8 FUN_107ffd7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ffd7ac; end: 107ffd7b3; -[SCDirectorModeScope snapDocEditor] */

undefined8 FUN_107ffd7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ffd7b4; end: 107ffd7e3; -[SCDirectorModeScope setSnapDocEditor:] */

void FUN_107ffd7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ffd7e4; end: 107ffd7eb; -[SCDirectorModeScope sourcePageType] */

undefined8 FUN_107ffd7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ffd7ec; end: 107ffd7f3; -[SCDirectorModeScope directorModeSource] */

undefined8 FUN_107ffd7ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ffd7f4; end: 107ffd7fb; -[SCDirectorModeScope replyConfiguration] */

undefined8 FUN_107ffd7f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


