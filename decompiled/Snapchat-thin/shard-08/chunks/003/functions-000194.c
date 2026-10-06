/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f64cb0; end: 105f652fb;  */

ulong FUN_105f64cb0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  double dVar25;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CACurrentMediaTime();
  uVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar4);
    lVar6 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar20 = *(undefined8 *)(lVar19 * 8);
        lVar7 = *(long *)(uVar3 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        dVar25 = 0.0;
        _objc_retain(lVar8);
        lVar7 = lVar8;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar21 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar23 = *(long *)(lVar21 * 8);
            lVar9 = lVar23;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            fVar24 = SUB84(dVar25,0);
            if (lVar9 != 0) {
              lVar9 = lVar23;
              func_0x00010c241220();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = *(undefined8 *)(uVar3 + 0x68);
              func_0x00010c269d40(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc10a0();
              lVar11 = lVar9;
              func_0x000106d7a74c();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
              func_0x00010c26e480();
              puVar12 = PTR_PTR_1126c6628;
              _objc_alloc();
              uVar10 = uVar20;
              func_0x00010bf97200(uVar20);
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar11;
              func_0x00010beec820(lVar11);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
              uVar15 = uVar20;
              func_0x00010bf59960(uVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f260(puVar14);
              dVar25 = (double)(long)puVar14;
              func_0x00010b5fa088();
              func_0x00010bfbdda0();
              func_0x00010b5fa33c();
              func_0x00010bf8b160(lVar23);
              func_0x00010c010300(dVar25,(double)(fVar24 * 1000.0));
              _objc_release(uVar15);
              _objc_release(lVar13);
              _objc_release(uVar10);
              lVar13 = lVar23;
              func_0x00010bf313a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
              puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if (lVar13 != 0) {
                func_0x00010bf313a0(lVar23);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f260(puVar16);
                func_0x00010c0df7c0(puVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179300(puVar12);
                _objc_release(puVar14);
                _objc_release(lVar23);
              }
              func_0x00010c103ce0(PTR_PTR_1126c6678);
              uVar10 = *(undefined8 *)(uVar3 + 0x58);
              func_0x00010c269d40(uVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(puVar12);
              func_0x00010c135bc0(uVar10);
              _objc_release(uVar10);
              if (*(char *)(uVar3 + 0x70) == '\x01') {
                lVar23 = *(long *)(uVar3 + 0x48);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar23 == 0) {
                  puVar14 = PTR_PTR_1126c6688;
                  _objc_alloc(PTR_PTR_1126c6688);
                  func_0x00010c04fde0();
                  func_0x00010c1d0640(*(undefined8 *)(uVar3 + 0x48));
                  _objc_release(puVar14);
                }
                uVar15 = *(undefined8 *)(uVar3 + 0x48);
                func_0x00010c0e00e0(uVar15);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar15;
                func_0x00010c0e06c0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c210d40(puVar12);
                _objc_release(uVar10);
                _objc_release(uVar15);
              }
              func_0x00010befa120(puVar5);
              _objc_release(puVar12);
              _objc_release(puVar12);
              _objc_release(lVar11);
              _objc_release(lVar9);
            }
            lVar21 = lVar21 + 1;
          } while (lVar7 != lVar21);
          lVar7 = lVar8;
          func_0x00010bf52a60();
        }
        _objc_release(lVar8);
        _objc_release(lVar8);
        lVar19 = lVar19 + 1;
      } while (lVar19 != lVar6);
      lVar6 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar14 = puVar5;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed30c0(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(uVar3 + 0x38));
    uVar20 = *(undefined8 *)(uVar3 + 0x40);
    puVar16 = PTR_PTR_1126c6690;
    _objc_alloc(PTR_PTR_1126c6690);
    func_0x00010c02aea0();
    func_0x00010c0d9840(uVar20);
    _objc_release(puVar16);
    _CACurrentMediaTime();
    _objc_release(puVar14);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return uVar3;
  }
  ___stack_chk_fail();
  uVar17 = param_2;
  _objc_retain();
  lVar18 = *(long *)(*(long *)(uVar3 + 0x20) + 0x78);
  if (lVar18 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = param_2;
    if (lVar18 == 1) {
      func_0x00010b5f6ea4(param_2);
    }
    else {
      func_0x00010b6fb1b4();
      if (uVar17 == 2) {
        uVar3 = param_2;
        func_0x00010bfbdda0(param_2);
        func_0x00010b5fa33c();
        uVar22 = (ulong)(uVar3 == 8);
      }
      else if (*(long *)(*(long *)(uVar3 + 0x20) + 0x78) == 3) {
        func_0x00010b5f6e4c();
      }
      else {
        func_0x00010b5f6de4(param_2);
      }
    }
  }
  _objc_release(param_2);
  return uVar22;
}



/* Entry: 105f652fc; end: 105f6539f;  */

ulong FUN_105f652fc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  _objc_retain();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    if (lVar2 == 1) {
      func_0x00010b5f6ea4(param_2);
    }
    else {
      func_0x00010b6fb1b4();
      if (uVar1 == 2) {
        uVar1 = param_2;
        func_0x00010bfbdda0(param_2);
        func_0x00010b5fa33c();
        uVar3 = (ulong)(uVar1 == 8);
      }
      else if (*(long *)(*(long *)(param_1 + 0x20) + 0x78) == 3) {
        func_0x00010b5f6e4c();
      }
      else {
        func_0x00010b5f6de4(param_2);
      }
    }
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105f653a0; end: 105f6542f;  */

void FUN_105f653a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6680;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bf51c80(param_4);
  func_0x00010bf51c80(param_4);
  _objc_release(param_4);
  func_0x00010c021a60(param_1,param_2,puVar1);
  func_0x00010c1bf6c0(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f65430; end: 105f655a3;  */

long FUN_105f65430(double param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf59920(param_3);
  dVar4 = param_1;
  func_0x00010bf59920(param_4);
  if (param_1 <= dVar4) {
    func_0x00010bf59920(param_3);
    dVar5 = dVar4;
    func_0x00010bf59920(param_4);
    if (dVar5 <= dVar4) {
      lVar1 = param_3;
      func_0x00010bf31360();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        lVar2 = param_4;
        func_0x00010bf31360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 != 0) {
          lVar1 = param_4;
          func_0x00010bf31360();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010bf31360(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar1;
          func_0x00010bf433a0();
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar3 != 0) goto LAB_105f65578;
        }
      }
      lVar1 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      func_0x00010c241220(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf433a0(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = -1;
  }
LAB_105f65578:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f655a4; end: 105f6567b; -[SCMemoriesSnapStore _updateAndMarhsallItems:] */

void FUN_105f655a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105f6567c; end: 105f656cb;  */

void FUN_105f6567c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
    func_0x00010be5da40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f656cc; end: 105f6576b; -[SCMemoriesSnapStore _marshallUpdatedItems] */

void FUN_105f656cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  func_0x00010be883e0(param_1);
  func_0x00010bedb2a0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c6640;
  _objc_alloc(PTR_PTR_1126c6640);
  func_0x00010c055cc0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be4e200(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105f6576c; end: 105f657ab; -[SCMemoriesSnapStore _updateMarshallRange] */

undefined1  [16] FUN_105f6576c(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar2 <= uVar3) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0(uVar3);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}



/* Entry: 105f657ac; end: 105f65853; -[SCMemoriesSnapStore _loadNextPage] */

void FUN_105f657ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f65854; end: 105f658e3;  */

void FUN_105f65854(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _CACurrentMediaTime();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be63a00(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25e980(uVar1);
    _objc_retainAutoreleasedReturnValue();
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
    func_0x00010be883e0(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    _CACurrentMediaTime();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f658e4; end: 105f65953; -[SCMemoriesSnapStore _nextMarshallRange] */

void FUN_105f658e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar3 < uVar2) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (uVar3 < lVar1 + 0x32U) {
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}



/* Entry: 105f65954; end: 105f65987; -[SCMemoriesSnapStore _refreshCachedHasReachedLastPage] */

void FUN_105f65954(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x81) = uVar2 <= uVar1;
  return;
}



/* Entry: 105f65988; end: 105f65a6b; -[SCMemoriesSnapStore _hasReachedLastPage] */

byte FUN_105f65988(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x81);
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006eaa4();
    _objc_release(uVar2);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  return bVar1 & 1;
}



/* Entry: 105f65a6c; end: 105f65aa7;  */

void FUN_105f65a6c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2 <= uVar1;
  return;
}



/* Entry: 105f65aa8; end: 105f65b47; -[SCMemoriesSnapStore _getCGSizeForThumbnail] */

undefined1  [16] FUN_105f65aa8(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar3 = (double)(long)((param_3 + 1.0) / 99.0);
  dVar4 = 0.0;
  if (0.0 <= dVar3) {
    dVar4 = dVar3;
  }
  uVar2 = (ulong)dVar4;
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  dVar4 = (param_3 - (double)(uVar2 - 1)) / (double)uVar2;
  _objc_release(puVar1);
  auVar5._8_8_ = dVar4 * 1.6666666666666667;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 105f65b48; end: 105f65bef; -[SCMemoriesSnapStore .cxx_destruct] */

void FUN_105f65b48(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f65bf0; end: 105f65c17; -[SCMemoriesSnapStore _gridItemsSubjectForTesting] */

void FUN_105f65bf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f65c18; end: 105f65dff; -[SCMemoriesSnapSyncStateListener initWithSyncStatusGenerator:gallerySnap:galleryEntry:] */

undefined8 *
FUN_105f65c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee4a0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf23980();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar5);
    func_0x00010c18b5e0(puVar1[1]);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105f65e00;
    puStack_60 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = puVar1[2];
    func_0x00010c252d60(puVar1[1]);
    func_0x00010be239e0(puVar1);
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar2);
    _objc_release(puStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f65e00; end: 105f65e0b;  */

void FUN_105f65e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_startGeneratingUpdates_112671590);
  return;
}



/* Entry: 105f65e0c; end: 105f65e13; -[SCMemoriesSnapSyncStateListener observe] */

void FUN_105f65e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105f65e14; end: 105f65e6b; -[SCMemoriesSnapSyncStateListener syncStatusGenerator:didUpdateStatus:] */

void FUN_105f65e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105f65e6c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 105f65e6c; end: 105f65ec3;  */

void FUN_105f65e6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010be239e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0df760(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105f65ec4; end: 105f65ee7; -[SCMemoriesSnapSyncStateListener _getUploadStatesFromSyncStatus:] */

undefined4 FUN_105f65ec4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined4 *)(&UNK_10ddd1af0 + (param_3 - 1U) * 4);
  }
  return 5;
}



/* Entry: 105f65ee8; end: 105f65f23; -[SCMemoriesSnapSyncStateListener .cxx_destruct] */

void FUN_105f65ee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f65f24; end: 105f66047; -[SCMemoriesPickerImporterImpl initWithUserSession:cameraConfigurationServices:temporaryFileWriterServices:mediaVideoImportServices:contentDeliveryServices:] */

undefined1 *
FUN_105f65f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ee4a8;
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



/* Entry: 105f66048; end: 105f6604b; -[SCMemoriesPickerImporterImpl transcodeMediaSegments:] */

void FUN_105f66048(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bece790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transcodeMediaSegments__112591388);
  return;
}



/* Entry: 105f6604c; end: 105f6604f; -[SCMemoriesPickerImporterImpl transcodeImageSegmentWithImage:asset:trimmedTimeRangeValue:] */

void FUN_105f6604c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bece610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transcodeImageSegmentWithImage__112591328);
  return;
}



/* Entry: 105f66050; end: 105f66053; -[SCMemoriesPickerImporterImpl transcodeVideoSegmentWithVideoAVAsset:asset:trimmedTimeRangeValue:] */

void FUN_105f66050(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bece950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transcodeVideoSegmentWithVideoA_1125913f8);
  return;
}



/* Entry: 105f66054; end: 105f66057; -[SCMemoriesPickerImporterImpl imageOutputURLForUUID:] */

void FUN_105f66054(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be37570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__imageOutputURLForUUID__11256b6f8);
  return;
}



/* Entry: 105f66058; end: 105f6605b; -[SCMemoriesPickerImporterImpl videoOutputURLForUUID:] */

void FUN_105f66058(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee8cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__videoOutputURLForUUID__112597cd0);
  return;
}



/* Entry: 105f6605c; end: 105f660ef; -[SCMemoriesPickerImporterImpl _isCameraRollImportWithContentManagerEnabled] */

undefined8 FUN_105f6605c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c270180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26fe80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105f660f0; end: 105f66183; -[SCMemoriesPickerImporterImpl _enable1080pVideoImporting] */

undefined8 FUN_105f660f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf291c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8ef40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105f66184; end: 105f6622b; -[SCMemoriesPickerImporterImpl _transcodeMediaSegments:] */

void FUN_105f66184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f6622c;
  puStack_40 = &UNK_1108fddf0;
  uVar1 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0b8780(param_3,param_2,&puStack_58,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f6622c; end: 105f6628b;  */

void FUN_105f6622c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f6628c;
  puStack_20 = &UNK_1108fddc0;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2660(param_2,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f6628c; end: 105f664c3;  */

void FUN_105f6628c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105f664c4;
  uStack_70 = 0x105f664d4;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105f664c4;
  uStack_a0 = 0x105f664d4;
  uStack_98 = 0;
  uVar1 = param_2;
  func_0x00010c0c5900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcda0();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfea600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0be500(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f664c4; end: 105f664db;  */

void FUN_105f664c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105f664dc; end: 105f66513;  */

void FUN_105f664dc(long param_1,undefined8 param_2)

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



/* Entry: 105f66514; end: 105f666db;  */

void FUN_105f66514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ae558;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c27c940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bece600();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f666dc; end: 105f66723;  */

void FUN_105f666dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f66724; end: 105f6689b; -[SCMemoriesPickerImporterImpl _transcodeImageSegmentWithImage:asset:trimmedTimeRangeValue:] */

void FUN_105f66724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aff30;
  func_0x00010bfe94a0(PTR_PTR_1126aff30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be37560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000108eb5cc8(param_3,0x5a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14e060(uVar3);
  puVar4 = PTR_PTR_1126aff28;
  func_0x00010bf2a9a0(PTR_PTR_1126aff28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126aff40;
  _objc_alloc(PTR_PTR_1126aff40);
  func_0x00010c01d3c0();
  _objc_release(param_5);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f6689c; end: 105f66bc7; -[SCMemoriesPickerImporterImpl _transcodeVideoSegmentWithVideoAVAsset:asset:trimmedTimeRangeValue:] */

void FUN_105f6689c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aff30;
  func_0x00010c29be40(PTR_PTR_1126aff30,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bee8ca0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3070;
  _objc_alloc(PTR_PTR_1126b3070);
  uVar5 = uVar3;
  func_0x00010c0f5800(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060d60(puVar4,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010be089a0(param_1);
  func_0x00010c1ab060(puVar4,param_2,uVar5);
  uVar5 = param_1;
  func_0x00010c0c7080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c29a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf165a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c0c7080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c29a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_a0,param_5);
  }
  uVar7 = uVar6;
  func_0x00010bf9d400(uVar6,param_2,param_3,&uStack_a0,puVar4,uVar8,lVar1,
                      &PTR____CFConstantStringClassReference_110e33b78,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  uVar5 = uVar7;
  func_0x00010bfbc3e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105f66bc8;
  puStack_d8 = &UNK_1108fde20;
  uStack_d0 = param_4;
  uStack_c8 = uVar3;
  uStack_c0 = uVar7;
  lStack_b8 = lVar1;
  puStack_b0 = puVar2;
  lStack_a8 = param_5;
  _objc_retain(param_5);
  _objc_retain(puVar2);
  _objc_retain(lVar1);
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  uVar6 = uVar5;
  func_0x00010c0b8600(uVar5,param_2,&puStack_f0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_a8);
  _objc_release(puStack_b0);
  _objc_release(lStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105f66bc8; end: 105f66c77;  */

void FUN_105f66bc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar5 = PTR_PTR_1126aff28;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf9e3a0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf8dc60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a9a0(puVar5,param_2,uVar1,uVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126aff40;
  _objc_alloc(PTR_PTR_1126aff40);
  func_0x00010c01d3c0();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f66c78; end: 105f66d27; -[SCMemoriesPickerImporterImpl _imageOutputURLForUUID:] */

void FUN_105f66c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25ce20(param_3,param_2,&PTR____CFConstantStringClassReference_110dc13b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be3ea40();
  if ((int)uVar1 == 0) {
    func_0x00010c26b2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0b8020(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    func_0x00010becb0c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f66d28; end: 105f66dd7; -[SCMemoriesPickerImporterImpl _videoOutputURLForUUID:] */

void FUN_105f66d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25ce20(param_3,param_2,&PTR____CFConstantStringClassReference_110dbab38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be3ea40();
  if ((int)uVar1 == 0) {
    func_0x00010c26b340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0b8020(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    func_0x00010becb0c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f66dd8; end: 105f66ea3; -[SCMemoriesPickerImporterImpl _tempFileWriterPathForFileName:] */

void FUN_105f66dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010c26b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfacf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f66ea4; end: 105f66f07; -[SCMemoriesPickerImporterImpl temporaryVideoDatastore] */

void FUN_105f66ea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c26b240(uVar1,param_2,&PTR____CFConstantStringClassReference_110e33bd8,1,0x1e);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f66f08; end: 105f66f6b; -[SCMemoriesPickerImporterImpl temporaryImageDataStore] */

void FUN_105f66f08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c26b240(uVar1,param_2,&PTR____CFConstantStringClassReference_110e33bf8,1,0x1e);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f66f6c; end: 105f66f73; -[SCMemoriesPickerImporterImpl userSession] */

undefined8 FUN_105f66f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f66f74; end: 105f66fa3; -[SCMemoriesPickerImporterImpl setUserSession:] */

void FUN_105f66f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f66fa4; end: 105f66fab; -[SCMemoriesPickerImporterImpl cameraConfigurationServices] */

undefined8 FUN_105f66fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f66fac; end: 105f66fdb; -[SCMemoriesPickerImporterImpl setCameraConfigurationServices:] */

void FUN_105f66fac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f66fdc; end: 105f66fe3; -[SCMemoriesPickerImporterImpl temporaryFileWriterServices] */

undefined8 FUN_105f66fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f66fe4; end: 105f67013; -[SCMemoriesPickerImporterImpl setTemporaryFileWriterServices:] */

void FUN_105f66fe4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f67014; end: 105f6701b; -[SCMemoriesPickerImporterImpl mediaVideoImportServices] */

undefined8 FUN_105f67014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f6701c; end: 105f6704b; -[SCMemoriesPickerImporterImpl setMediaVideoImportServices:] */

void FUN_105f6701c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f6704c; end: 105f67053; -[SCMemoriesPickerImporterImpl contentDeliveryServices] */

undefined8 FUN_105f6704c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f67054; end: 105f67083; -[SCMemoriesPickerImporterImpl setContentDeliveryServices:] */

void FUN_105f67054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f67084; end: 105f6708b; -[SCMemoriesPickerImporterImpl temporaryImageDatastore] */

undefined8 FUN_105f67084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f6708c; end: 105f670bb; -[SCMemoriesPickerImporterImpl setTemporaryImageDatastore:] */

void FUN_105f6708c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f670bc; end: 105f670eb; -[SCMemoriesPickerImporterImpl setTemporaryVideoDatastore:] */

void FUN_105f670bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f670ec; end: 105f67157; -[SCMemoriesPickerImporterImpl .cxx_destruct] */

void FUN_105f670ec(long param_1)

{
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



/* Entry: 105f67158; end: 105f671eb; -[SCMemoriesPickerUtilServiceProvider provide] */

void FUN_105f67158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105f671ec;
  puStack_30 = &UNK_1108fde50;
  puVar1 = PTR_PTR_1126ae720;
  uStack_28 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c66a0;
  _objc_alloc(PTR_PTR_1126c66a0);
  func_0x00010c01d3e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f671ec; end: 105f67347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f671ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c6698;
  _objc_alloc(PTR_PTR_1126c6698);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20) + (long)_DAT_11273b238;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c293740(lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
LAB_105f67330:
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_11273b23c;
    _objc_loadWeakRetained(lVar4);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_105f67330;
    lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_11273b240;
    _objc_loadWeakRetained(lVar5);
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20) + (long)_DAT_11273b244;
      _objc_loadWeakRetained(lVar7);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar6 = *(long *)(param_1 + 0x20) + (long)_DAT_11273b248;
        _objc_loadWeakRetained(lVar6);
        goto LAB_105f672b8;
      }
    }
  }
  lVar6 = 0;
LAB_105f672b8:
  func_0x00010c05d100(puVar1,param_2,lVar2,lVar4,lVar5,lVar7,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f67348; end: 105f673a3; -[SCMemoriesPickerUtilServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f67348(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273b248);
  _objc_destroyWeak(param_1 + _DAT_11273b244);
  _objc_destroyWeak(param_1 + _DAT_11273b240);
  _objc_destroyWeak(param_1 + _DAT_11273b23c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273b238);
  return;
}



/* Entry: 105f673a4; end: 105f674cb; -[SCMemoriesPickerV2EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f673a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273b24c;
  lVar4 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c233ce0();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNativePicker_11257cc88);
    return;
  }
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273b2c4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar4;
  func_0x00010c0c7640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar5;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar3 = lVar1;
  func_0x00010c233ba0();
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMemTwoPicker_11257cb40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMemoriesPicker_11257cb50);
  return;
}



/* Entry: 105f674cc; end: 105f67643; -[SCMemoriesPickerV2EntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f674cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = (long)_DAT_11273b250;
  if (*(long *)(param_1 + lVar5) == 0) {
    lVar5 = param_1 + _DAT_11273b24c;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar2 == 0) {
      puStack_48 = PTR_PTR_1126ee4b0;
      plVar4 = &lStack_50;
      lStack_50 = param_1;
      _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      plVar3 = (long *)PTR_PTR_1126afc98;
      func_0x00010bf0c040();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11273b254;
      _objc_retain();
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      *(long **)(param_1 + lVar5) = plVar3;
      _objc_release(uVar1);
      _objc_retain(plVar3);
      func_0x00010bf6f440(lVar2);
      plVar4 = plVar3;
      func_0x00010c117720(plVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar3);
      _objc_release(plVar3);
    }
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar1);
    puStack_38 = PTR_PTR_1126ee4b0;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105f67644; end: 105f6764b;  */

void FUN_105f67644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105f6764c; end: 105f67733; -[SCMemoriesPickerV2EntryPoint _presentNativePicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f6764c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c66a8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273b24c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1;
  func_0x00010bdea3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11273b25c;
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = lVar7;
  func_0x00010c0fb4c0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02aaa0();
  lVar6 = (long)_DAT_11273b258;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c10d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar6),PTR_s_presentNativePhotoLibrary_112620ed8);
  return;
}



/* Entry: 105f67734; end: 105f677cb; -[SCMemoriesPickerV2EntryPoint _presentMemTwoPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f67734(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11273b2c0;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  FUN_105f677cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf23820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11273b250;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar5),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105f677cc; end: 105f677ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f677cc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273b24c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f677f0; end: 105f682bb; -[SCMemoriesPickerV2EntryPoint _presentMemoriesPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f677f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puStack_140;
  undefined *puStack_130;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar25 = (long)_DAT_11273b25c;
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105f682bc;
  puStack_98 = &UNK_1108fdea0;
  _objc_copyWeak(auStack_88,auStack_80);
  lStack_90 = lVar2;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c6638;
  _objc_alloc();
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11273b24c;
  lVar6 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01380();
  lVar27 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar8 = lVar27;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01660();
  lVar9 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235b80();
  lVar28 = param_1 + _DAT_11273b26c;
  _objc_loadWeakRetained();
  lVar11 = lVar28;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520();
  lVar29 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar14 = lVar29;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf2a7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035ca0();
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar29);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar28);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar27);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar16 = PTR_PTR_1126c66b0;
  _objc_alloc();
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar6);
  lVar28 = lVar6;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01380();
  lVar27 = param_1 + lVar26;
  _objc_loadWeakRetained(lVar27);
  lVar12 = lVar27;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01660();
  func_0x00010c02a4c0();
  _objc_release(lVar12);
  _objc_release(lVar27);
  _objc_release(lVar28);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar6;
  func_0x00010c23a060();
  if ((int)lVar27 != 0) {
    lVar27 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar9 = lVar27;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520();
    _objc_release(lVar9);
    _objc_release(lVar27);
  }
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar6;
  func_0x00010c23a060();
  if ((int)lVar27 == 0) {
    puStack_130 = (undefined *)0x0;
  }
  else {
    puStack_130 = PTR_PTR_1126c6668;
    _objc_alloc();
    lVar27 = param_1;
    FUN_105f68468();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar27;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar28 = 0;
    }
    else {
      lVar28 = param_1 + _DAT_11273b2a0;
      _objc_loadWeakRetained(lVar28);
    }
    lVar12 = lVar28;
    func_0x00010c2666c0(lVar28);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = param_1 + _DAT_11273b2b4;
      _objc_loadWeakRetained(lVar29);
    }
    lVar5 = lVar29;
    func_0x00010c0c8880(lVar29);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x000105f6848c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b200();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar29);
    _objc_release(lVar12);
    _objc_release(lVar28);
    _objc_release(lVar9);
    _objc_release(lVar27);
  }
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar17 = PTR_PTR_1126c66b8;
  _objc_alloc();
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035ce0();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar6;
  func_0x00010c237800();
  if ((int)lVar27 == 0) {
    puStack_140 = (undefined *)0x0;
  }
  else {
    puStack_140 = PTR_PTR_1126c66c0;
    _objc_alloc();
    if (param_1 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = param_1 + _DAT_11273b2c8;
      _objc_loadWeakRetained(lVar27);
    }
    lVar9 = lVar27;
    func_0x00010c0c8b40(lVar27);
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1;
    FUN_105f68468(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar28;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a7a0();
    _objc_release(lVar12);
    _objc_release(lVar28);
    _objc_release(lVar9);
    _objc_release(lVar27);
  }
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar18 = PTR_PTR_1126c66c8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11273b270;
  _objc_loadWeakRetained();
  lVar29 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar8 = lVar26;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bdea3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273b274;
  _objc_loadWeakRetained();
  lVar11 = lVar6;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11273b278;
  _objc_loadWeakRetained();
  lVar13 = lVar27;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11273b27c;
  _objc_loadWeakRetained();
  lVar15 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec0e00();
  lVar19 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ec0e14();
  lVar20 = param_1;
  func_0x00010bdf1b40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar21 = lVar25;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11273b284;
  _objc_loadWeakRetained();
  lVar22 = lVar28;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11273b2b0;
  _objc_loadWeakRetained();
  lVar23 = lVar12;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273b260;
  _objc_loadWeakRetained();
  lVar24 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040c20();
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(lVar12);
  _objc_release(lVar22);
  _objc_release(lVar28);
  _objc_release(lVar21);
  _objc_release(lVar25);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar15);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar27);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar26);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar29);
  _objc_release(lVar1);
  func_0x00010c18b5e0(puVar17);
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(puVar18);
  func_0x00010c10a440(puVar18);
  _objc_release(puVar18);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar18);
  _objc_release(puStack_140);
  _objc_release(puVar17);
  _objc_release(puStack_130);
  _objc_release(puVar16);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar2);
  return;
}



/* Entry: 105f682bc; end: 105f68437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f682bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + _DAT_11273b260;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar10 = PTR_PTR_1126b2670;
    _objc_alloc(PTR_PTR_1126b2670);
    lVar2 = lVar1 + _DAT_11273b25c;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c0fb4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = lVar1 + _DAT_11273b264;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + _DAT_11273b268;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035d40(puVar10,param_2,lVar5,uVar9,lVar6,lVar8,lVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105f68438; end: 105f68467;  */

void FUN_105f68438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105f68468; end: 105f684af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f68468(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273b290);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f684b0; end: 105f68523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f684b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11273b24c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f68524; end: 105f689ab; -[SCMemoriesPickerV2EntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f68524(undefined *param_1,undefined8 param_2)

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
  undefined8 uVar12;
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
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uStack_f8;
  undefined *puStack_88;
  
  puVar29 = param_1;
  FUN_105f677cc();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar29;
  func_0x00010bf61140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_1;
    FUN_105f677cc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf68b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    _objc_release(puVar29);
    if (puVar2 == (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      goto LAB_105f68940;
    }
  }
  else {
    _objc_release();
    _objc_release(puVar29);
  }
  puVar1 = param_1;
  FUN_105f677cc();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf61140();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar29 = PTR_PTR_1126c66d0;
    _objc_alloc();
    puVar3 = param_1;
    FUN_105f677cc();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf68b80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x000105f6848c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar23 = param_1 + _DAT_11273b294;
      _objc_loadWeakRetained();
    }
    puVar7 = puVar23;
    func_0x00010bf93a20();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      puStack_88 = param_1 + _DAT_11273b29c;
      _objc_loadWeakRetained();
    }
    puVar8 = param_1;
    func_0x000105f68468();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = param_1 + _DAT_11273b2ac;
      _objc_loadWeakRetained();
    }
    puVar10 = puVar24;
    func_0x00010c23ffe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      puVar28 = (undefined *)0x0;
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar28 = param_1 + _DAT_11273b2a4;
      _objc_loadWeakRetained();
      puVar25 = param_1 + _DAT_11273b2a8;
      _objc_loadWeakRetained();
    }
    puVar11 = puVar25;
    func_0x00010bf8cbe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      uStack_f8 = 0;
      uVar12 = 0;
    }
    else {
      uStack_f8 = *(undefined8 *)(param_1 + _DAT_11273b2cc);
      _objc_retain();
      uVar12 = *(undefined8 *)(param_1 + _DAT_11273b2d0);
    }
    lVar27 = (long)_DAT_11273b284;
    _objc_retain();
    puVar13 = param_1 + lVar27;
    _objc_loadWeakRetained();
    puVar14 = puVar13;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined *)0x0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar26 = param_1 + _DAT_11273b2b8;
      _objc_loadWeakRetained();
    }
    puVar15 = puVar26;
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    FUN_105f677cc();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c247520();
    puVar19 = param_1;
    FUN_105f677cc();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c10ff00();
    if (param_1 == (undefined *)0x0) {
      param_1 = (undefined *)0x0;
    }
    else {
      param_1 = param_1 + _DAT_11273b2bc;
      _objc_loadWeakRetained();
    }
    puVar22 = param_1;
    func_0x00010c15a860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00a640(puVar29,param_2,puVar4,puVar6,puVar7,puStack_88,puVar9,puVar10,puVar28,
                        puVar11,uStack_f8,uVar12,puVar14,puVar15,puVar18,(char)puVar21);
    _objc_release(uVar12);
    _objc_release(puVar22);
    _objc_release(param_1);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar26);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uStack_f8);
    _objc_release(puVar11);
    _objc_release(puVar25);
    _objc_release(puVar28);
    _objc_release(puVar10);
    _objc_release(puVar24);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puStack_88);
    _objc_release(puVar7);
    _objc_release(puVar23);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
    puVar29 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_105f68940:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 105f689ac; end: 105f68b8f; -[SCMemoriesPickerV2EntryPoint _createPostArchiveConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f689ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar1 = param_1;
  FUN_105f677cc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c239320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11273b284;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108f277a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar9 = PTR_PTR_1126c66d8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11273b288;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d8300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf162c0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c150960(lVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_105f677cc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c239320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f820(0x4038000000000000,puVar9,param_2,lVar4,lVar5,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f68b90; end: 105f68d5f; -[SCMemoriesPickerV2EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f68b90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b2d0,0);
  _objc_storeStrong(param_1 + _DAT_11273b2cc,0);
  _objc_storeStrong(param_1 + _DAT_11273b280,0);
  _objc_destroyWeak(param_1 + _DAT_11273b2c8);
  _objc_destroyWeak(param_1 + _DAT_11273b2c4);
  _objc_destroyWeak(param_1 + _DAT_11273b2c0);
  _objc_destroyWeak(param_1 + _DAT_11273b2bc);
  _objc_destroyWeak(param_1 + _DAT_11273b2b8);
  _objc_destroyWeak(param_1 + _DAT_11273b2b4);
  _objc_destroyWeak(param_1 + _DAT_11273b2b0);
  _objc_destroyWeak(param_1 + _DAT_11273b2ac);
  _objc_destroyWeak(param_1 + _DAT_11273b2a8);
  _objc_destroyWeak(param_1 + _DAT_11273b2a4);
  _objc_destroyWeak(param_1 + _DAT_11273b284);
  _objc_destroyWeak(param_1 + _DAT_11273b288);
  _objc_destroyWeak(param_1 + _DAT_11273b2a0);
  _objc_destroyWeak(param_1 + _DAT_11273b26c);
  _objc_destroyWeak(param_1 + _DAT_11273b260);
  _objc_destroyWeak(param_1 + _DAT_11273b29c);
  _objc_destroyWeak(param_1 + _DAT_11273b298);
  _objc_destroyWeak(param_1 + _DAT_11273b294);
  _objc_destroyWeak(param_1 + _DAT_11273b290);
  _objc_destroyWeak(param_1 + _DAT_11273b264);
  _objc_destroyWeak(param_1 + _DAT_11273b27c);
  _objc_destroyWeak(param_1 + _DAT_11273b278);
  _objc_destroyWeak(param_1 + _DAT_11273b25c);
  _objc_destroyWeak(param_1 + _DAT_11273b274);
  _objc_destroyWeak(param_1 + _DAT_11273b270);
  _objc_destroyWeak(param_1 + _DAT_11273b28c);
  _objc_destroyWeak(param_1 + _DAT_11273b268);
  _objc_destroyWeak(param_1 + _DAT_11273b24c);
  _objc_storeStrong(param_1 + _DAT_11273b250,0);
  _objc_storeStrong(param_1 + _DAT_11273b254,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b258,0);
  return;
}



/* Entry: 105f68d60; end: 105f68ed7; -[SCMemoriesPickerV2NativePhotoLibraryRouter initWithMemoriesPickerV2Scope:actionHandler:photoPermissionCoordinator:] */

undefined1 *
FUN_105f68d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee4b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdf1440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c10f380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f68ed8; end: 105f68f6f; -[SCMemoriesPickerV2NativePhotoLibraryRouter presentNativePhotoLibrary] */

void FUN_105f68ed8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x3) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000108dfd77c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1184e0(uVar2,param_2,0,uVar3,0,0);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f68f70; end: 105f69123; -[SCMemoriesPickerV2NativePhotoLibraryRouter _createPhotoLibraryController] */

void FUN_105f68f70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878;
  _objc_alloc(PTR__OBJC_CLASS___PHPickerConfiguration_1126bd878);
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035c80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf012a0();
  func_0x00010c1fb9a0(puVar1,param_2,(uint)uVar4 ^ 1);
  _objc_release(uVar3);
  func_0x00010c1dfe20(puVar1,param_2,1);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf01380();
  if ((uVar6 & 1) == 0) {
    _objc_release(uVar5);
LAB_105f6906c:
    puVar8 = *(undefined **)(param_1 + 8);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf01380();
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf01660();
      _objc_release(uVar3);
      _objc_release(puVar8);
      if ((int)uVar4 == 0) goto LAB_105f690e4;
      puVar8 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
      func_0x00010c29bee0(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105f690cc;
    }
  }
  else {
    uVar7 = *(ulong *)(param_1 + 8);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf01660();
    _objc_release(uVar7);
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) goto LAB_105f6906c;
    puVar8 = PTR__OBJC_CLASS___PHPickerFilter_1126bd880;
    func_0x00010bfe9960(PTR__OBJC_CLASS___PHPickerFilter_1126bd880);
    _objc_retainAutoreleasedReturnValue();
LAB_105f690cc:
    func_0x00010c19bd60(puVar1,param_2,puVar8);
  }
  _objc_release(puVar8);
LAB_105f690e4:
  puVar2 = PTR__OBJC_CLASS___PHPickerViewController_1126bd888;
  _objc_alloc(PTR__OBJC_CLASS___PHPickerViewController_1126bd888);
  func_0x00010c001640();
  func_0x00010c18b5e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f69124; end: 105f6917b; -[SCMemoriesPickerV2NativePhotoLibraryRouter _onCancel] */

void FUN_105f69124(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f6917c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105f6917c; end: 105f691c7;  */

void FUN_105f6917c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0c92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_memoriesPickerV2DidDismiss_11260fec0);
  return;
}



/* Entry: 105f691c8; end: 105f692a3; -[SCMemoriesPickerV2NativePhotoLibraryRouter _selectAsset:] */

void FUN_105f691c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f692a4; end: 105f693b3;  */

void FUN_105f692a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x000107fe9894(*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_105f60ed0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010be68260(lVar1);
    }
    else {
      puVar3 = PTR_PTR_1126c66e0;
      _objc_alloc();
      func_0x00010c055880();
      func_0x00010c1c4a20();
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      param_4 = 1;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e4b00(uVar5,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__UIImagePickerControllerPHAsset_110345cc8);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010be68260(lVar1);
  }
  else {
    func_0x00010be9d7a0(lVar1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f693b4; end: 105f6940f; -[SCMemoriesPickerV2NativePhotoLibraryRouter imagePickerController:didFinishPickingMediaWithInfo:] */

void FUN_105f693b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__UIImagePickerControllerPHAsset_110345cc8);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010be68260(param_1);
  }
  else {
    func_0x00010be9d7a0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f69410; end: 105f6958f; -[SCMemoriesPickerV2NativePhotoLibraryRouter picker:didFinishPicking:] */

void FUN_105f69410(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010be68260(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf0b2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    lVar3 = lVar1;
    func_0x00010c0849c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar2);
    func_0x00010c09bd40(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f69590; end: 105f6969b;  */

/* WARNING: Possible PIC construction at 0x000105f69658: Changing call to branch */

void FUN_105f69590(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010be68260(lVar1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa50e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) goto code_r0x00010be68260;
      func_0x00010be9d7a0(lVar1);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010be68260:
                    /* WARNING: Could not recover jumptable at 0x00010be68270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f6969c; end: 105f6969f; -[SCMemoriesPickerV2NativePhotoLibraryRouter presentationControllerDidDismiss:] */

void FUN_105f6969c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onCancel_112577a38);
  return;
}



/* Entry: 105f696a0; end: 105f696f3; -[SCMemoriesPickerV2NativePhotoLibraryRouter .cxx_destruct] */

void FUN_105f696a0(long param_1)

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



/* Entry: 105f696f4; end: 105f69b1b; -[SCMemoriesPickerV2ViewController initWithRuntime:config:actionHandler:composerBlizzardLogger:memoriesCameraRollProvider:memoriesSnapStore:composerApplication:emptyStateController:composerCoreUIServices:memoriesCameraRollPaginator:memoriesCameraRollAlbumPickerScopeExposer:usePaginatorForCameraRoll:usePaginatorForMemoriesSnap:postArchiveConfiguration:photoPermissionCoordinator:circumstanceEngine:cloudSync:memoriesExperimentService:featuredStoryProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105f696f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126ee4c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11273b2e8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b2ec;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b2f0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b2f4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b2f8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b2fc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b300;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b304;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b308;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b30c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b310;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273b314) = (undefined1)param_14;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273b318) = param_14._1_1_;
    lVar3 = (long)_DAT_11273b31c;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b320;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b324;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b328;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b32c;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273b330;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar1;
}



/* Entry: 105f69b1c; end: 105f69ba3; -[SCMemoriesPickerV2ViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69b1c(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  func_0x00010c0c92a0(*(undefined8 *)(param_1 + _DAT_11273b2f0));
  puStack_38 = PTR_PTR_1126ee4c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105f69ba4; end: 105f69ba7; -[SCMemoriesPickerV2ViewController preferredStatusBarStyle] */

undefined8 FUN_105f69ba4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105f69ba8; end: 105f69bd7; -[SCMemoriesPickerV2ViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69ba8(long param_1)

{
  func_0x00010be4cee0();
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11273b338));
  return;
}



/* Entry: 105f69bd8; end: 105f69d17; -[SCMemoriesPickerV2ViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69bd8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ee4c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11273b334) = puVar3;
  _objc_release(puVar2);
  lVar5 = (long)_DAT_11273b2f0;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_opt_respondsToSelector(uVar4,PTR_s_setPickerViewController__112654828);
  if ((uVar4 & 1) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain();
    func_0x00010c1db800(uVar6);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_48);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273b324);
  func_0x000108f484c0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    _objc_alloc(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
    func_0x00010c050900();
    func_0x00010c18e180();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 105f69d18; end: 105f69dd3; -[SCMemoriesPickerV2ViewController viewWillAppear:] */

void FUN_105f69d18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ee4c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c106ee0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f69dd4; end: 105f69e6b; -[SCMemoriesPickerV2ViewController prepareWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be4cee0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273b338);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105f69e6c;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a1520(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105f69e6c; end: 105f69e7f;  */

void FUN_105f69e6c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f69e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105f69e80; end: 105f69edf; -[SCMemoriesPickerV2ViewController handleSwipeDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69e80(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0c92b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273b2f0),PTR_s_memoriesPickerV2DidDismiss_11260fec0);
  return;
}



/* Entry: 105f69ee0; end: 105f69f2b; -[SCMemoriesPickerV2ViewController onBackPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f69ee0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273b2ec);
  func_0x00010c22f100();
  if (iVar1 != 0) {
    func_0x00010bf84b00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273b2f0),PTR_s_onBackPressed_1126164a0);
  return;
}


