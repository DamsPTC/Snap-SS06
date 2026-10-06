/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109124030; end: 1091241e3; +[SCSnapDocGridUtil decodeUIntArraysFromEncodedArray:originalUnit:encodeUnit:] */

void FUN_109124030(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar10 = 0;
  uVar7 = 0;
  do {
    uVar6 = param_4;
    func_0x00010bf529e0();
    if (uVar6 + 1 <= uVar7) {
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
      return;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar6 = param_4;
    func_0x00010bf529e0();
    if (uVar7 < uVar6) {
      uVar6 = param_4;
      func_0x00010c296de0(param_4,param_2,uVar7);
      uVar6 = uVar6 & 0xffffffff;
LAB_1091240f0:
      lVar9 = 0;
      lVar8 = uVar6 + 1;
      lVar11 = lVar10;
      do {
        uVar4 = param_3;
        func_0x00010c296de0(param_3,param_2,lVar11);
        uVar1 = 0;
        if (param_6 != 0) {
          uVar1 = (uVar4 & 0xffffffff) / param_6;
        }
        lVar9 = lVar9 + uVar1 * param_5;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,puVar5);
        _objc_release(puVar5);
        lVar11 = lVar11 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      uVar6 = param_3;
      func_0x00010bf529e0();
      uVar6 = uVar6 + ~uVar7;
      if (uVar6 != 0xffffffffffffffff) goto LAB_1091240f0;
    }
    func_0x00010befa120(puVar2,param_2,puVar3);
    lVar10 = uVar6 + lVar10;
    _objc_release(puVar3);
    uVar7 = uVar7 + 1;
  } while( true );
}



/* Entry: 1091241e4; end: 109124537; +[SCSnapDocGridUtil encodePaths:xOriginalUnit:xEncodeUnit:yOriginalUnit:yEncodeUnit:] */

void FUN_1091241e4(undefined8 param_1,double param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined *puStack_200;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar26 = param_2;
  _objc_retain(param_5);
  puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar27 = 0.0;
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(param_5);
      }
      uVar20 = *(ulong *)(lVar17 * 8);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar20;
      func_0x00010bf529e0();
      if (uVar22 != 0) {
        uVar22 = 0;
        dVar25 = dVar27;
        do {
          dVar27 = dVar26;
          uVar5 = uVar20;
          func_0x00010c0dfd40(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1060();
          dVar26 = dVar27;
          _objc_release(uVar5);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(dVar25,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar6);
          uVar5 = uVar20;
          func_0x00010bf529e0();
          uVar22 = uVar22 + 1;
          dVar25 = dVar27;
        } while (uVar22 < uVar5);
      }
      func_0x00010befa120(puVar19);
      func_0x00010befa120(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar2);
    lVar2 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126dd680;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126bcef8;
  func_0x00010bf92f20(param_1);
  lVar14 = param_4;
  func_0x00010c2276a0(puVar3);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c18bb00(puVar3);
  }
  puVar6 = PTR_PTR_1126bcef8;
  func_0x00010bf92f20(param_2);
  puVar15 = puVar6;
  func_0x00010c227860(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar14);
  _objc_retain(puVar3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(lVar14);
    _objc_release(puVar4);
    _objc_release(param_4);
    __Unwind_Resume(param_5);
    dVar27 = param_2;
    _objc_retain(puVar15);
    puVar1 = puVar15;
    func_0x00010c2beb60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010bf6d400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126bcef8;
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar1);
      _objc_release(puVar4);
      puVar19 = (undefined *)0x0;
    }
    else {
      func_0x00010bf66e20(param_2);
      _objc_retainAutoreleasedReturnValue();
      dVar27 = param_2;
    }
    puVar6 = puVar15;
    func_0x00010c2bed80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010bf6d400();
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = PTR_PTR_1126bcef8;
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    if (puStack_200 == (undefined *)0x0) {
      _objc_release(puVar6);
      _objc_release(puVar7);
      puStack_200 = (undefined *)0x0;
    }
    else {
      func_0x00010bf66e20(dVar26);
      _objc_retainAutoreleasedReturnValue();
      dVar27 = dVar26;
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    for (puVar21 = (undefined *)0x0; puVar18 = puVar19, func_0x00010bf529e0(), puVar21 < puVar18;
        puVar21 = puVar21 + 1) {
      puVar8 = puVar19;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puStack_200;
      func_0x00010c0dfd40(puStack_200);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = (undefined *)0x0;
      while( true ) {
        puVar11 = puVar8;
        func_0x00010bf529e0();
        puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        fVar23 = SUB84(dVar27,0);
        if (puVar11 <= puVar18) break;
        puVar11 = puVar8;
        func_0x00010c0dfd40(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        puVar12 = puVar9;
        fVar24 = fVar23;
        func_0x00010c0dfd40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar27 = (double)fVar23;
        func_0x00010c297180(dVar27,(double)fVar24,puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar18 = puVar18 + 1;
      }
      func_0x00010befa120(puVar3);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(puStack_200);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar19);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109124538; end: 10912489f; +[SCSnapDocGridUtil decodePaths:xOriginalUnit:xEncodeUnit:yOriginalUnit:yEncodeUnit:] */

void FUN_109124538(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  float fVar15;
  float fVar16;
  double dVar17;
  undefined *puStack_80;
  
  dVar17 = param_1;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c2beb60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf6d400();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bcef8;
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(uVar1);
    _objc_release(uVar2);
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x00010bf66e20(param_1,puVar13,param_4,uVar1,uVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
    dVar17 = param_1;
  }
  uVar3 = param_5;
  func_0x00010c2bed80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf6d400();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR_PTR_1126bcef8;
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  if (puStack_80 == (undefined *)0x0) {
    _objc_release(uVar3);
    _objc_release(uVar4);
    puStack_80 = (undefined *)0x0;
  }
  else {
    func_0x00010bf66e20(param_2,puStack_80,param_4,uVar3,uVar4,param_7);
    _objc_retainAutoreleasedReturnValue();
    dVar17 = param_2;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  for (puVar14 = (undefined *)0x0; puVar12 = puVar13, func_0x00010bf529e0(), puVar14 < puVar12;
      puVar14 = puVar14 + 1) {
    puVar6 = puVar13;
    func_0x00010c0dfd40(puVar13,param_4,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_80;
    func_0x00010c0dfd40(puStack_80,param_4,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)0x0;
    while( true ) {
      puVar9 = puVar6;
      func_0x00010bf529e0();
      puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      fVar15 = SUB84(dVar17,0);
      if (puVar9 <= puVar12) break;
      puVar9 = puVar6;
      func_0x00010c0dfd40(puVar6,param_4,puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      puVar10 = puVar7;
      fVar16 = fVar15;
      func_0x00010c0dfd40(puVar7,param_4,puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar17 = (double)fVar15;
      func_0x00010c297180(dVar17,(double)fVar16,puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8,param_4,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar12 = puVar12 + 1;
    }
    func_0x00010befa120(puVar5,param_4,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puStack_80);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar13);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091248a0; end: 109124f03; +[SCSnapDocGridUtil encodeTransforms:xEncodeUnit:yEncodeUnit:] */

void FUN_1091248a0(undefined8 param_1,double param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
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
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_5);
  lVar5 = param_5;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar18 = *plStack_160;
    do {
      lVar19 = 0;
      do {
        dVar22 = param_2;
        if (*plStack_160 != lVar18) {
          _objc_enumerationMutation(param_5);
          dVar22 = param_2;
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar21 = *(long *)(lStack_168 + lVar19 * 8);
        lVar6 = lVar21;
        func_0x00010c27a460(lVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        func_0x00010c0df720(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar20);
        _objc_release(puVar7);
        _objc_release(lVar6);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar6 = lVar21;
        func_0x00010c27a460(lVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27ada0();
        func_0x00010c0df720(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar7);
        _objc_release(lVar6);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar6 = lVar21;
        func_0x00010c27a460(lVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27ada0();
        param_2 = dVar22;
        func_0x00010c0df720(dVar22,puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar7);
        _objc_release(lVar6);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        lVar6 = lVar21;
        func_0x00010c27a460(lVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141a80();
        func_0x00010c0df720(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar7);
        _objc_release(lVar6);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar21 == 0) {
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
        }
        else {
          func_0x00010c26f000(&uStack_188,lVar21);
        }
        _CMTimeGetSeconds(&uStack_188);
        func_0x00010c0df720(dVar22 * 1000.0,puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar7);
        lVar19 = lVar19 + 1;
      } while (lVar5 != lVar19);
      lVar5 = param_5;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_5);
  puVar8 = PTR_PTR_1126dd688;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126bcef8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92f20(0x3f800000);
  puVar11 = param_4;
  _objc_release(puVar9);
  _objc_retain(puVar7);
  _objc_retain(param_4);
  func_0x00010c1f6180(puVar8);
  puVar9 = PTR_PTR_1126bcef8;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92f20(0x3f800000,puVar9);
  puVar12 = puVar11;
  func_0x00010c227560(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar9 = PTR_PTR_1126bcef8;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_118 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92f20(0x3f800000);
  puVar14 = puVar12;
  func_0x00010c227700(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar10);
  puVar9 = PTR_PTR_1126bcef8;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf92f20(0x40c90fdb);
  puVar13 = puVar14;
  _objc_release(puVar11);
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  puVar17 = puVar12;
  func_0x00010c1ee900(puVar8);
  puVar10 = PTR_PTR_1126bcef8;
  if (puVar4 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_128 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93260();
    _objc_release(puVar9);
    _objc_retain(puVar10);
    _objc_retain(puVar13);
    puVar17 = puVar10;
    func_0x00010c216000(puVar8);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar13);
    puVar9 = puVar10;
    puVar11 = puVar13;
  }
  _objc_retain(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar14);
    _objc_release(puVar7);
    _objc_release(param_4);
    __Unwind_Resume(param_5);
    _objc_retain(puVar17);
    puVar1 = puVar17;
    func_0x00010c14e7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126bcef8;
    _objc_retain();
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar1);
    }
    else {
      func_0x00010bf66e20(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar3 = puVar17;
    func_0x00010c2be940();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126bcef8;
    _objc_retain();
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar3);
      puVar20 = (undefined *)0x0;
    }
    else {
      func_0x00010bf66e20(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar7 = puVar17;
    func_0x00010c2bebc0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126bcef8;
    _objc_retain();
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar7);
      puVar20 = (undefined *)0x0;
    }
    else {
      func_0x00010bf66e20(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar10 = puVar17;
    func_0x00010c141d80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126bcef8;
    _objc_retain();
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    else {
      func_0x00010bf66e20(0x40c90fdb);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar11 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar12 = puVar17;
    func_0x00010c270d00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126bcef8;
    _objc_retain();
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar12);
      puVar20 = (undefined *)0x0;
    }
    else {
      func_0x00010bf672c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = puVar20;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar14 = puVar2;
    func_0x00010bf529e0();
    puVar20 = puVar4;
    func_0x00010bf529e0();
    puVar8 = puVar11;
    func_0x00010bf529e0();
    if (puVar20 <= puVar8) {
      puVar20 = puVar8;
    }
    if (puVar14 <= puVar20) {
      puVar14 = puVar20;
    }
    uStack_258 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar23 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_250 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_260 = uVar23;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      uVar25 = *(undefined8 *)PTR__CGPointZero_110347540;
      uVar28 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
      uVar26 = 0;
      uVar27 = 0;
      do {
        puVar15 = puVar2;
        func_0x00010bf529e0();
        uVar24 = uVar23;
        if (puVar20 < puVar15) {
          puVar15 = puVar2;
          func_0x00010c0dfd40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar24 = uVar23;
          _objc_release(puVar15);
          uVar26 = uVar23;
        }
        puVar15 = puVar4;
        func_0x00010bf529e0();
        uVar23 = uVar24;
        if (puVar20 < puVar15) {
          puVar15 = puVar4;
          func_0x00010c0dfd40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          puVar16 = puVar9;
          uVar28 = uVar24;
          func_0x00010c0dfd40(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          uVar23 = uVar28;
          _objc_release(puVar16);
          _objc_release(puVar15);
          uVar25 = uVar24;
        }
        puVar15 = puVar11;
        func_0x00010bf529e0();
        if (puVar20 < puVar15) {
          puVar15 = puVar11;
          func_0x00010c0dfd40(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(puVar15);
          uVar27 = uVar23;
        }
        puVar15 = puVar13;
        func_0x00010bf529e0();
        if (puVar20 < puVar15) {
          puVar15 = puVar13;
          func_0x00010c0dfd40(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          _CMTimeMake(&uStack_280);
          uStack_258 = uStack_278;
          uStack_260 = uStack_280;
          uStack_250 = uStack_270;
          _objc_release(puVar15);
        }
        puVar15 = PTR_PTR_1126b2700;
        _objc_alloc(PTR_PTR_1126b2700);
        func_0x00010c055500(uVar25,uVar28,uVar26,uVar27);
        puVar16 = PTR_PTR_1126bb2a8;
        _objc_alloc(PTR_PTR_1126bb2a8);
        uStack_278 = uStack_258;
        uStack_280 = uStack_260;
        uStack_270 = uStack_250;
        uVar23 = uStack_260;
        func_0x00010c052280();
        func_0x00010befa120(puVar8);
        _objc_release(puVar16);
        _objc_release(puVar15);
        puVar20 = puVar20 + 1;
      } while (puVar14 != puVar20);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar17);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 109124f04; end: 1091254b7; +[SCSnapDocGridUtil decodeTransforms:xEncodeUnit:yEncodeUnit:] */

void FUN_109124f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c14e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126bcef8;
  _objc_retain();
  if (puVar14 == (undefined *)0x0) {
    _objc_release(uVar1);
  }
  else {
    func_0x00010bf66e20(0x3f800000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar3 = param_3;
  func_0x00010c2be940();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126bcef8;
  _objc_retain();
  if (puVar14 == (undefined *)0x0) {
    _objc_release(uVar3);
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010bf66e20(0x3f800000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar5 = param_3;
  func_0x00010c2bebc0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126bcef8;
  _objc_retain();
  if (puVar14 == (undefined *)0x0) {
    _objc_release(uVar5);
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010bf66e20(0x3f800000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar7 = param_3;
  func_0x00010c141d80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126bcef8;
  _objc_retain();
  if (puVar14 == (undefined *)0x0) {
    _objc_release(uVar7);
  }
  else {
    func_0x00010bf66e20(0x40c90fdb);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = puVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  uVar9 = param_3;
  func_0x00010c270d00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126bcef8;
  _objc_retain();
  if (puVar14 == (undefined *)0x0) {
    _objc_release(uVar9);
    puVar14 = (undefined *)0x0;
  }
  else {
    func_0x00010bf672c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = puVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar11 = puVar2;
  func_0x00010bf529e0();
  puVar14 = puVar4;
  func_0x00010bf529e0();
  puVar15 = puVar8;
  func_0x00010bf529e0();
  if (puVar14 <= puVar15) {
    puVar14 = puVar15;
  }
  if (puVar11 <= puVar14) {
    puVar11 = puVar14;
  }
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar16 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_a0 = uVar16;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    uVar18 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar21 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uVar19 = 0;
    uVar20 = 0;
    do {
      puVar12 = puVar2;
      func_0x00010bf529e0();
      uVar17 = uVar16;
      if (puVar15 < puVar12) {
        puVar12 = puVar2;
        func_0x00010c0dfd40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar17 = uVar16;
        _objc_release(puVar12);
        uVar19 = uVar16;
      }
      puVar12 = puVar4;
      func_0x00010bf529e0();
      uVar16 = uVar17;
      if (puVar15 < puVar12) {
        puVar12 = puVar4;
        func_0x00010c0dfd40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        puVar13 = puVar6;
        uVar21 = uVar17;
        func_0x00010c0dfd40(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar16 = uVar21;
        _objc_release(puVar13);
        _objc_release(puVar12);
        uVar18 = uVar17;
      }
      puVar12 = puVar8;
      func_0x00010bf529e0();
      if (puVar15 < puVar12) {
        puVar12 = puVar8;
        func_0x00010c0dfd40(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(puVar12);
        uVar20 = uVar16;
      }
      puVar12 = puVar10;
      func_0x00010bf529e0();
      if (puVar15 < puVar12) {
        puVar12 = puVar10;
        func_0x00010c0dfd40(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        _CMTimeMake(&uStack_c0);
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        uStack_90 = uStack_b0;
        _objc_release(puVar12);
      }
      puVar12 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      func_0x00010c055500(uVar18,uVar21,uVar19,uVar20);
      puVar13 = PTR_PTR_1126bb2a8;
      _objc_alloc(PTR_PTR_1126bb2a8);
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
      uStack_b0 = uStack_90;
      uVar16 = uStack_a0;
      func_0x00010c052280();
      func_0x00010befa120(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar15 = puVar15 + 1;
    } while (puVar11 != puVar15);
  }
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1091254b8; end: 109125593;  */

undefined ** FUN_1091254b8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3f95e3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c640(ppuVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111837d0;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_1111837d0,param_2,ppuVar4);
  _objc_release(ppuVar4);
  return ppuVar1;
}



/* Entry: 109125594; end: 1091255f3;  */

undefined ** FUN_109125594(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_1111837d0;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_1111837d0,param_2,uVar1);
  _objc_release(uVar1);
  return ppuVar2;
}



/* Entry: 1091255f4; end: 109125647; +[SCVideoTranscodingConcurrencyCounterImpl sharedInstance] */

void FUN_1091255f4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730a40 != -1) {
    func_0x000107c27d9c(0x113730a40,&PTR___NSConcreteGlobalBlock_110add490);
  }
  uVar1 = uRam0000000113730a48;
  _objc_retain(uRam0000000113730a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109125648; end: 109125677;  */

void FUN_109125648(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bf760;
  _objc_alloc();
  func_0x00010bfef1e0();
  uVar1 = puRam0000000113730a48;
  puRam0000000113730a48 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109125678; end: 10912571b; -[SCVideoTranscodingConcurrencyCounterImpl initPrivate] */

undefined1 * FUN_109125678(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112700750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10912571c; end: 10912574f; -[SCVideoTranscodingConcurrencyCounterImpl count] */

undefined8 FUN_10912571c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return uVar1;
}



/* Entry: 109125750; end: 1091257b7; -[SCVideoTranscodingConcurrencyCounterImpl increment] */

void FUN_109125750(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8) + 1;
  *(long *)(param_1 + 8) = lVar1;
  _os_unfair_lock_unlock(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091257b8; end: 109125827; -[SCVideoTranscodingConcurrencyCounterImpl decrement] */

void FUN_1091257b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar2 = 1;
  }
  *(long *)(param_1 + 8) = lVar2 + -1;
  _os_unfair_lock_unlock(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 + -1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109125828; end: 10912584f; -[SCVideoTranscodingConcurrencyCounterImpl observable] */

void FUN_109125828(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109125850; end: 10912585b; -[SCVideoTranscodingConcurrencyCounterImpl .cxx_destruct] */

void FUN_109125850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10912585c; end: 109125907; -[SCAVAssetDataContent initWithData:contentType:] */

undefined1 *
FUN_10912585c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700758;
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



/* Entry: 109125908; end: 10912590f; -[SCAVAssetDataContent data] */

undefined8 FUN_109125908(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109125910; end: 109125917; -[SCAVAssetDataContent contentType] */

undefined8 FUN_109125910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109125918; end: 109125947; -[SCAVAssetDataContent .cxx_destruct] */

void FUN_109125918(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109125948; end: 10912599b; +[SCAVAssetDataContentSharedLoader sharedInstance] */

void FUN_109125948(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730a50 != -1) {
    func_0x000107c27d9c(0x113730a50,&PTR___NSConcreteGlobalBlock_110add4b0);
  }
  uVar1 = uRam0000000113730a58;
  _objc_retain(uRam0000000113730a58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10912599c; end: 1091259c7;  */

void FUN_10912599c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd690;
  _objc_alloc_init();
  uVar1 = puRam0000000113730a58;
  puRam0000000113730a58 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091259c8; end: 109125a33; -[SCAVAssetDataContentSharedLoader init] */

undefined1 * FUN_1091259c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109125a34; end: 109125b1b; -[SCAVAssetDataContentSharedLoader dataContent:forAsset:] */

void FUN_109125a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c13b360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c13b360(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c13b360(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126dd690;
    func_0x00010c22ba80(PTR_PTR_1126dd690);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b640(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109125b1c; end: 109125d07; -[SCAVAssetDataContentSharedLoader resourceLoader:shouldWaitForLoadingOfRequestedResource:] */

undefined8 FUN_109125b1c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_getAssociatedObject(param_3,&UNK_10f55273a);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf4c7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf64280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar3 = param_3;
    func_0x00010bf4dac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a00(lVar1);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c182140(lVar1);
    _objc_release(uVar3);
    func_0x00010c174ca0(lVar1);
  }
  if (lVar2 != 0) {
    lVar4 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1372a0();
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010bf64280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c137280();
    _objc_release(lVar4);
    uVar3 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    uVar3 = lVar6 + lVar5;
    if (uVar7 <= (ulong)(lVar6 + lVar5)) {
      uVar3 = uVar7;
    }
    if ((long)(uVar3 - lVar5) < 0) {
      uVar8 = 0;
      goto LAB_109125ccc;
    }
    uVar3 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c13b6c0(lVar2);
    _objc_release(uVar7);
  }
  func_0x00010bfaf920(param_4);
  uVar8 = 1;
LAB_109125ccc:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return uVar8;
}



/* Entry: 109125d08; end: 109125d1b; -[SCAVAssetDataContentSharedLoader .cxx_destruct] */

void FUN_109125d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109125d1c; end: 109125e6f;  */

long FUN_109125d1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_5;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f22118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c057ae0(param_1,param_2,puVar3,param_5);
  _objc_release(param_5);
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126dd698;
    _objc_alloc(PTR_PTR_1126dd698);
    func_0x00010c0082a0();
    puVar4 = PTR_PTR_1126dd690;
    func_0x00010c22ba80(PTR_PTR_1126dd690);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf636e0();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 109125e70; end: 109125f47;  */

void FUN_109125e70(float param_1,double *param_2,long *param_3,long *param_4,ulong *param_5)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  
  _objc_retain();
  pdVar1 = param_2;
  func_0x00010bfb5b00();
  _objc_retainAutoreleasedReturnValue();
  pdVar2 = pdVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(pdVar1);
  if ((pdVar2 == (double *)0x0) ||
     (_CMAudioFormatDescriptionGetStreamBasicDescription(), pdVar2 == (double *)0x0)) {
    uVar3 = 0;
  }
  else {
    if (param_4 != (long *)0x0) {
      func_0x00010bf99700(param_2);
      *param_4 = (long)param_1;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = (long)*pdVar2;
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = (ulong)*(uint *)((long)pdVar2 + 0x1c);
    }
    uVar3 = (ulong)*(uint *)(pdVar2 + 1);
    FUN_109127900(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109125f48; end: 109126017;  */

ulong FUN_109125f48(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  _objc_retain();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfb5b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      func_0x00010c0da9e0(param_2);
    }
    else {
      _CMFormatDescriptionGetExtension
                (uVar2,*(undefined8 *)PTR__kCVImageBufferFieldCountKey_11034a2e8);
      fVar3 = (float)param_1;
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c067fc0();
      if ((long)uVar1 < 2) {
        uVar1 = 1;
      }
      func_0x00010c0da9e0(param_2);
      param_1 = (ulong)(uint)(fVar3 * (float)uVar1);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 109126018; end: 109126077; +[SCVideoAssetUtils videoDurationForURL:] */

undefined8 FUN_109126018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299e00(param_2,param_3,puVar1,0,0);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 109126078; end: 10912607f; +[SCVideoAssetUtils videoSizeForAsset:] */

void FUN_109126078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_videoSizeForAsset_waitWhileLoadi_1126846b0,param_3,0);
  return;
}



/* Entry: 109126080; end: 109126087; +[SCVideoAssetUtils videoSizeForURL:] */

void FUN_109126080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_videoSizeForURL_waitWhileLoading_1126846c0,param_3,0);
  return;
}



/* Entry: 109126088; end: 10912619f; +[SCVideoAssetUtils videoSizeForAsset:waitWhileLoadingTracksIfNeeded:] */

undefined1  [16]
FUN_109126088(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auStack_80 [16];
  double dStack_70;
  double dStack_68;
  undefined8 uStack_48;
  
  func_0x00010c279200(param_5,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  dVar5 = (double)func_0x00010c0d5d20(lVar4);
  if (dVar5 == 0.0) {
    if (param_6 == 0) goto LAB_10912612c;
  }
  else {
    func_0x00010c0d5d20(lVar4);
    if ((param_6 == 0) || (param_2 != 0.0)) goto LAB_10912612c;
  }
  uStack_48 = 0;
  func_0x00010c266c80(param_3,param_4,&PTR__OBJC_CLASS___NSConstantArray_1111837e8,lVar4,&uStack_48)
  ;
LAB_10912612c:
  dVar5 = (double)func_0x00010c0d5d20(lVar4);
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    dStack_70 = 0.0;
    dStack_68 = 0.0;
  }
  else {
    func_0x00010c106f40(auStack_80,lVar4);
    uVar17 = (undefined1)auStack_80._8_8_;
    uVar18 = SUB81(auStack_80._8_8_,1);
    uVar19 = SUB81(auStack_80._8_8_,2);
    uVar20 = SUB81(auStack_80._8_8_,3);
    uVar21 = SUB81(auStack_80._8_8_,4);
    uVar22 = SUB81(auStack_80._8_8_,5);
    uVar23 = SUB81(auStack_80._8_8_,6);
    uVar24 = SUB81(auStack_80._8_8_,7);
    uVar9 = (undefined1)auStack_80._0_8_;
    uVar10 = SUB81(auStack_80._0_8_,1);
    uVar11 = SUB81(auStack_80._0_8_,2);
    uVar12 = SUB81(auStack_80._0_8_,3);
    uVar13 = SUB81(auStack_80._0_8_,4);
    uVar14 = SUB81(auStack_80._0_8_,5);
    uVar15 = SUB81(auStack_80._0_8_,6);
    uVar16 = SUB81(auStack_80._0_8_,7);
  }
  dVar7 = dStack_70 * param_2 +
          (double)CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar9))))))) *
          dVar5;
  dVar8 = dStack_68 * param_2 +
          (double)CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17))))))) *
          dVar5;
  auVar6._0_8_ = -(ulong)(dVar7 < 0.0);
  auVar6._8_8_ = -(ulong)(dVar8 < 0.0);
  dVar5 = -dVar8;
  auVar1._8_8_ = dVar8;
  auVar1._0_8_ = dVar7;
  auVar3[8] = SUB81(dVar5,0);
  auVar3._0_8_ = -dVar7;
  auVar3[9] = (char)((ulong)dVar5 >> 8);
  auVar3[10] = (char)((ulong)dVar5 >> 0x10);
  auVar3[0xb] = (char)((ulong)dVar5 >> 0x18);
  auVar3[0xc] = (char)((ulong)dVar5 >> 0x20);
  auVar3[0xd] = (char)((ulong)dVar5 >> 0x28);
  auVar3[0xe] = (char)((ulong)dVar5 >> 0x30);
  auVar3[0xf] = (char)((ulong)dVar5 >> 0x38);
  auVar2._8_8_ = dVar8;
  auVar2._0_8_ = dVar7;
  _objc_release(lVar4);
  return auVar2 ^ (auVar1 ^ auVar3) & auVar6;
}



/* Entry: 1091261a0; end: 10912620f; +[SCVideoAssetUtils videoSizeForURL:waitWhileLoadingTracksIfNeeded:] */

undefined1  [16]
FUN_1091261a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29b220(param_3,param_4,puVar1,param_6);
  _objc_release(puVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 109126210; end: 1091262ff; +[SCVideoAssetUtils videoDurationForAsset:waitWhileLoadingTracksIfNeeded:error:] */

double FUN_109126210(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
                    undefined8 param_5)

{
  double dVar1;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    dStack_60 = 0.0;
    uStack_58 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_60,param_3);
  }
  uStack_78 = uStack_58;
  dStack_80 = dStack_60;
  uStack_70 = uStack_50;
  dVar1 = dStack_60;
  _CMTimeGetSeconds(&dStack_80);
  if ((param_4 != 0) && (dVar1 == 0.0)) {
    func_0x00010c266c80(param_1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183800,param_3,param_5
                       );
    if (param_3 == 0) {
      dStack_80 = 0.0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&dStack_80,param_3);
    }
    uStack_58 = uStack_78;
    dStack_60 = dStack_80;
    uStack_50 = uStack_70;
    dVar1 = dStack_80;
    _CMTimeGetSeconds(&dStack_80);
  }
  _objc_release(param_3);
  return dVar1;
}



/* Entry: 109126300; end: 10912681f; +[SCVideoAssetUtils synchronouslyLoadAttributes:forAssetTrack:timeout:error:] */

ulong FUN_109126300(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                   undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  double dVar13;
  undefined *puStack_288;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_5 == 0) {
    puStack_288 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uVar12 = 0;
    *param_6 = puVar4;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        _objc_release(0);
        lVar3 = param_5;
        func_0x00010c2533c0();
        _objc_retain(0);
        if (lVar3 != 2) {
          func_0x00010befa120(puVar1);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    puStack_288 = (undefined *)0x0;
    _objc_release(param_4);
    puVar5 = puVar1;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      dVar13 = 60.0;
      if (param_1 <= 60.0) {
        dVar13 = param_1;
      }
      _dispatch_group_create();
      _dispatch_group_enter();
      _objc_retain(puVar5);
      func_0x00010c09c640(param_5);
      uVar6 = 0;
      _dispatch_time(0,(long)(dVar13 * 1000000000.0));
      puVar7 = puVar5;
      _dispatch_group_wait(puVar5,uVar6);
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar7 != (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(0);
        _objc_release(puVar7);
        func_0x00010c1d0640(puVar4);
        puStack_288 = puVar11;
      }
      _objc_release(puVar5);
      _objc_release(puVar5);
    }
    _objc_retain(puVar1);
    puVar5 = puVar1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar1);
        }
        _objc_release(puStack_288);
        puStack_288 = (undefined *)0x0;
        lVar8 = param_5;
        func_0x00010c2533c0();
        _objc_retain(0);
        if (lVar8 != 2) {
          func_0x00010c1d0640(puVar4);
        }
        puVar11 = puVar11 + 1;
      } while (puVar5 != puVar11);
      puVar5 = puVar1;
      func_0x00010bf52a60();
      puStack_288 = (undefined *)0x0;
    }
    _objc_release(puVar1);
    puVar11 = puVar4;
    func_0x00010bf529e0();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_6 != (undefined8 *)0x0) && (puVar11 != (undefined *)0x0)) {
      puVar11 = puVar4;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_6 = puVar5;
      _objc_release(puVar7);
      _objc_release(puVar11);
    }
    puVar5 = puVar4;
    func_0x00010bf529e0(puVar4);
    uVar12 = (ulong)(puVar5 == (undefined *)0x0);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puStack_288);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    uVar12 = *(ulong *)(param_4 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_11034c080)(uVar12);
    return uVar12;
  }
  return uVar12;
}



/* Entry: 109126820; end: 109126827;  */

void FUN_109126820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109126828; end: 1091268ab; +[SCVideoAssetUtils synchronouslyLoadAttributes:forVideo:error:] */

undefined8
FUN_109126828(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c266c60((double)uVar1 * 0.2,param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1091268ac; end: 109126a87;  */

long FUN_1091268ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
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
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar5 = param_1;
    func_0x00010bfb5b00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar9 = *plStack_120;
      uVar7 = *(undefined8 *)PTR__kCVImageBufferTransferFunction_ITU_R_2100_HLG_11034a320;
      uVar8 = *(undefined8 *)PTR__kCVImageBufferTransferFunction_SMPTE_ST_2084_PQ_11034a338;
      do {
        lVar4 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar5);
          }
          uVar1 = *(ulong *)(lStack_128 + lVar4 * 8);
          _CMFormatDescriptionGetExtensions();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0720c0();
          if ((((uVar3 & 1) != 0) ||
              (uVar3 = uVar2, func_0x00010c0720c0(uVar2,param_2,uVar7), (uVar3 & 1) != 0)) ||
             (uVar3 = uVar2, func_0x00010c0720c0(uVar2,param_2,uVar8), (uVar3 & 1) != 0)) {
            _objc_release(uVar2);
            _objc_release(uVar1);
            lVar6 = 1;
            goto LAB_109126a38;
          }
          _objc_release(uVar2);
          _objc_release(uVar1);
          lVar4 = lVar4 + 1;
        } while (lVar6 != lVar4);
        lVar6 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar6 != 0);
      lVar6 = 0;
    }
LAB_109126a38:
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar6;
      FUN_1091268ac(lVar6);
    }
    _objc_release(lVar6);
    return lVar5;
  }
  return lVar6;
}



/* Entry: 109126a88; end: 109126b2f;  */

long FUN_109126a88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1091268ac(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 109126b30; end: 109126d53;  */

/* WARNING: Removing unreachable block (ram,0x000109126cec) */
/* WARNING: Removing unreachable block (ram,0x000109126c40) */

ulong FUN_109126b30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = PTR_PTR_1126b0010;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266c60(0x3ff0000000000000,puVar5);
  _objc_retain(0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126b0010;
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266c60(0x3ff0000000000000,puVar1);
    _objc_retain(0);
    _objc_release(puVar2);
    _objc_release(puVar5);
    func_0x00010bf99700(lVar4);
  }
  uVar6 = 0;
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    if (uVar6 == 0) {
      uVar8 = 0;
    }
    else {
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf529e0();
      uVar8 = (ulong)(uVar8 != 0);
      _objc_release(uVar6);
    }
    return uVar8;
  }
  return uVar6;
}



/* Entry: 109126d54; end: 109126e67;  */

bool FUN_109126d54(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf529e0();
    bVar1 = lVar2 != 0;
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 109126e68; end: 109126fdb;  */

void FUN_109126e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain();
  func_0x000109126dac(param_1,param_2,param_3,param_5);
  func_0x00010c219980(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 109126fdc; end: 109127017;  */

void FUN_109126fdc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_20 = param_2[2];
  FUN_109127018(param_1,&uStack_30,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109127018; end: 1091270b7;  */

void FUN_109127018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  _objc_retain();
  if (param_5 < 1) {
    param_5 = 0x1e;
  }
  _CMTimeMake(auStack_58,1,param_5);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  uVar1 = param_3;
  FUN_1091270b8(param_1,param_2,param_3,&uStack_70,auStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091270b8; end: 109127287;  */

void FUN_1091270b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_178;
  int iStack_170;
  uint uStack_16c;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar2 = PTR__OBJC_CLASS___AVMutableVideoCompositionInstruction_1126d7d10;
  puVar8 = &uStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c299860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar2);
  _objc_release(puVar3);
  uStack_d8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_e0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_d0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_a8 = param_4[1];
  lStack_b0 = *param_4;
  lStack_a0 = param_4[2];
  plVar7 = &lStack_b0;
  _CMTimeRangeMake(&uStack_90,&uStack_e0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010c214ec0(puVar2);
  func_0x00010c1b9960(puVar2);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___AVMutableVideoComposition_1126d7d20;
  func_0x00010c299820();
  _objc_retainAutoreleasedReturnValue();
  iVar9 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adc60(puVar3);
  _objc_release(puVar4);
  uVar11 = param_2;
  func_0x00010c1ea8e0(param_1,param_2,puVar3);
  uStack_d8 = param_5[1];
  uVar10 = *param_5;
  uStack_d0 = param_5[2];
  uStack_e0 = uVar10;
  func_0x00010c19f2e0(puVar3);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  puVar6 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_e8 = FUN_109127288;
    uStack_120 = param_1;
    uStack_118 = param_2;
    puStack_110 = puVar4;
    puStack_108 = puVar3;
    puStack_100 = puVar5;
    puStack_f8 = puVar2;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain();
    if (iVar9 < 1) {
      iVar9 = 0x1e;
    }
    _CMTimeMake(&lStack_178,1,iVar9);
    if (((int)puVar8 < 1) || ((uStack_16c & 0x1d) != 1 || iStack_170 == (int)puVar8)) {
      lStack_158 = CONCAT44(uStack_16c,iStack_170);
      lStack_160 = lStack_178;
    }
    else {
      lStack_140 = lStack_178;
      lStack_130 = lStack_168;
      _CMTimeGetSeconds(&lStack_140);
      _CMTimeMakeWithSeconds(&lStack_140,puVar8);
      plVar1 = &lStack_178;
      if (0 < lStack_140) {
        plVar1 = &lStack_140;
      }
      lStack_158 = plVar1[1];
      lStack_160 = *plVar1;
      lStack_168 = plVar1[2];
    }
    lStack_138 = plVar7[1];
    lStack_140 = *plVar7;
    lStack_130 = plVar7[2];
    puVar5 = puVar6;
    lStack_150 = lStack_168;
    FUN_1091270b8(uVar10,uVar11,puVar6,&lStack_140,&lStack_160);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109127288; end: 1091274ab;  */

void FUN_109127288(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,int param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_98;
  int iStack_90;
  uint uStack_8c;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  _objc_retain();
  if (param_6 < 1) {
    param_6 = 0x1e;
  }
  _CMTimeMake(&lStack_98,1,param_6);
  if (((int)param_5 < 1) || ((uStack_8c & 0x1d) != 1 || iStack_90 == (int)param_5)) {
    lStack_78 = CONCAT44(uStack_8c,iStack_90);
    lStack_80 = lStack_98;
  }
  else {
    lStack_60 = lStack_98;
    lStack_50 = lStack_88;
    _CMTimeGetSeconds(&lStack_60);
    _CMTimeMakeWithSeconds(&lStack_60,param_5);
    plVar1 = &lStack_98;
    if (0 < lStack_60) {
      plVar1 = &lStack_60;
    }
    lStack_78 = plVar1[1];
    lStack_80 = *plVar1;
    lStack_88 = plVar1[2];
  }
  lStack_58 = param_4[1];
  lStack_60 = *param_4;
  lStack_50 = param_4[2];
  uVar2 = param_3;
  lStack_70 = lStack_88;
  FUN_1091270b8(param_1,param_2,param_3,&lStack_60,&lStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091274ac; end: 10912757f;  */

void FUN_1091274ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__AVVideoColorPrimaries_ITU_R_709_2_110348140;
  _objc_retain();
  func_0x00010c17e9a0(param_1,param_2,uVar1);
  func_0x00010c17ea60(param_1,param_2,
                      *(undefined8 *)PTR__AVVideoTransferFunction_ITU_R_709_2_110348198);
  func_0x00010c17eb20(param_1,param_2,*(undefined8 *)PTR__AVVideoYCbCrMatrix_ITU_R_709_2_1103481a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109127580; end: 10912774b;  */

void FUN_109127580(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *puVar7;
  undefined *unaff_x24;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar7 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  func_0x00010bf8d3c0();
  if (((int)puVar7 == 0) || (lVar1 = param_3, FUN_109126a88(), (int)lVar1 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    unaff_x21 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
    func_0x00010c299880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f60();
    func_0x000109126dac(&uStack_90,param_1,param_2,unaff_x20);
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c219980(unaff_x21);
    param_4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = unaff_x21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_90,param_3);
    }
    unaff_x24 = param_4;
    FUN_109126fdc(param_1,param_2,param_4,&uStack_90);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = unaff_x24;
    func_0x00010c0d3c80();
    _objc_release(unaff_x24);
    _objc_release(param_4);
    FUN_1091274ac(puVar7);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_10912774c;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_f0 = unaff_x24;
    puStack_e8 = puVar7;
    puStack_e0 = param_4;
    puStack_d8 = unaff_x21;
    lStack_d0 = unaff_x20;
    lStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar7 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
    func_0x00010bf8d3c0();
    if (((int)puVar7 == 0) || (lVar2 = lVar1, FUN_109126a88(), (int)lVar2 == 0)) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar4 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
      func_0x00010c2998a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_130 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_120 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_110 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      func_0x00010c219980();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_130,lVar1);
      }
      func_0x00010c0d5d20(lVar3);
      puVar6 = puVar5;
      FUN_109126fdc(puVar5,&uStack_130);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      _objc_release(puVar5);
      FUN_1091274ac(puVar7);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c25d0a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10912774c; end: 1091278ff;  */

void FUN_10912774c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar6 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  func_0x00010bf8d3c0();
  if (((int)puVar6 == 0) || (lVar1 = param_1, FUN_109126a88(), (int)lVar1 == 0)) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
    func_0x00010c2998a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219980();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_80,param_1);
    }
    func_0x00010c0d5d20(lVar2);
    puVar5 = puVar4;
    FUN_109126fdc(puVar4,&uStack_80);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    FUN_1091274ac(puVar6);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c25d0a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109127900; end: 1091279a7;  */

void FUN_109127900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f221d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d0a0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091279a8; end: 109127a37;  */

undefined8 FUN_1091279a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010bde1b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110f221f8);
    if ((uVar1 & 1) != 0) {
      uVar2 = 1;
      goto LAB_109127a20;
    }
    uVar1 = param_1;
    func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110f22218);
    if ((uVar1 & 1) != 0) {
      uVar2 = 2;
      goto LAB_109127a20;
    }
    uVar1 = param_1;
    func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110f215f8);
    if ((uVar1 & 1) != 0) {
      uVar2 = 3;
      goto LAB_109127a20;
    }
  }
  uVar2 = 0;
LAB_109127a20:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 109127a38; end: 109127c43;  */

undefined8 FUN_109127a38(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x00010bde1b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
LAB_109127b6c:
    uVar1 = 0;
  }
  else {
    uVar1 = 0x61616368;
    FUN_109127900(0x61616368);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf4bb00(param_1,param_2,uVar1);
    if ((int)uVar2 == 0) {
      uVar3 = 0x61616370;
      FUN_109127900(0x61616370);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf4bb00(param_1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110f22238);
        if ((uVar2 & 1) != 0) {
          uVar1 = 1;
          goto LAB_109127b70;
        }
        uVar1 = 0x2e6d7033;
        FUN_109127900(0x2e6d7033);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010bf4bb00(param_1,param_2,uVar1);
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          uVar1 = 4;
          goto LAB_109127b70;
        }
        uVar1 = 0x6c70636d;
        FUN_109127900(0x6c70636d);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010bf4bb00(param_1,param_2,uVar1);
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          uVar1 = 3;
          goto LAB_109127b70;
        }
        goto LAB_109127b6c;
      }
    }
    else {
      _objc_release(uVar1);
    }
    uVar1 = 2;
  }
LAB_109127b70:
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109127c44; end: 109127d0b;  */

undefined8 FUN_109127c44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c279200(param_1,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c299760(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 109127d0c; end: 109127d27;  */

void FUN_109127d0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f22258,0,0);
  return;
}



/* Entry: 109127d28; end: 109127d4f;  */

long FUN_109127d28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110e67338,0,0);
  return (long)(int)param_1;
}



/* Entry: 109127d50; end: 109127dbf;  */

undefined8 FUN_109127d50(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d20b8;
  func_0x00010c067fc0();
  if (ppuVar1 == (undefined **)0x1) {
    uVar2 = 1;
  }
  else if (ppuVar1 == (undefined **)0x0) {
    uVar2 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f22278,0,0);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 109127dc0; end: 109127dd3;  */

void FUN_109127dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f22298,1,0);
  return;
}



/* Entry: 109127dd4; end: 109127f47;  */

undefined8 FUN_109127dd4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam0000000113730a68;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x109127e78;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113730a68,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam0000000113730a60;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109127f48; end: 109127fbb;  */

double FUN_109127f48(double param_1,int param_2,undefined8 param_3)

{
  func_0x00010c067f00(param_2,param_3,&PTR____CFConstantStringClassReference_110f222f8,(int)param_1,
                      0);
  return (double)param_2;
}



/* Entry: 109127fbc; end: 10912802b;  */

undefined8 FUN_109127fbc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d20b8;
  func_0x00010c067fc0();
  if (ppuVar1 == (undefined **)0x1) {
    uVar2 = 1;
  }
  else if (ppuVar1 == (undefined **)0x0) {
    uVar2 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f22338,1,0);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10912802c; end: 109128083;  */

undefined8 FUN_10912802c(void)

{
  return 0;
}



/* Entry: 109128084; end: 109128153;  */

undefined1  [16] FUN_109128084(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x00010c0b5020(uVar2,param_2,&PTR____CFConstantStringClassReference_110f223b8,0x2d000000500,0
                     );
  dVar4 = (double)uVar2;
  dVar1 = (double)uVar3;
  if (0xec0 < uVar2 - 0x140 || 0xec0 < uVar3 - 0x140) {
    dVar4 = 1280.0;
    dVar1 = 720.0;
  }
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = dVar1;
  return auVar5;
}



/* Entry: 109128154; end: 10912817b;  */

void FUN_109128154(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f223f8,0,0);
  return;
}



/* Entry: 10912817c; end: 10912820b;  */

long FUN_10912817c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f22438,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10912820c; end: 109128243;  */

undefined8 FUN_10912820c(void)

{
  return 0;
}



/* Entry: 109128244; end: 109128553;  */

long FUN_109128244(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_290;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar7 = 0;
  if (param_1 == 0) goto LAB_1091284e0;
  if ((param_2 & param_3 & 1) != 0) goto LAB_1091284e0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  if (lVar7 == 0) goto LAB_10912852c;
  lVar4 = *(long *)(lVar7 + 8);
  do {
    _objc_retain(lVar4);
    _objc_release(lVar7);
    lStack_290 = lVar4;
    func_0x00010bf52a60();
    if (lStack_290 != 0) {
      lVar7 = *plStack_1b0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_1b0 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          lVar2 = *(long *)(lStack_1b8 + lVar6 * 8);
          if ((lVar2 != 0) && (*(long *)(lVar2 + 8) == 1)) {
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            lStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            plStack_1f0 = (long *)0x0;
            lVar9 = *(long *)(lVar2 + 0x20);
            _objc_retain(lVar9);
            lVar2 = lVar9;
            func_0x00010bf52a60();
            if (lVar2 != 0) {
              lVar5 = *plStack_1f0;
              do {
                lVar8 = 0;
                do {
                  if (*plStack_1f0 != lVar5) {
                    _objc_enumerationMutation(lVar9);
                  }
                  lVar3 = *(long *)(lStack_1f8 + lVar8 * 8);
                  uStack_220 = 0;
                  uStack_210 = 0x2020000000;
                  uStack_208 = 0;
                  if (lVar3 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = *(undefined8 *)(lVar3 + 8);
                  }
                  puStack_218 = &uStack_220;
                  _objc_retain(uVar10);
                  func_0x00010c0bc940(uVar10);
                  _objc_release(uVar10);
                  bVar1 = *(byte *)(puStack_218 + 3);
                  __Block_object_dispose(&uStack_220,8);
                  if ((bVar1 & 1) != 0) {
                    _objc_release(lVar9);
                    lVar7 = 1;
                    goto LAB_1091284d8;
                  }
                  lVar8 = lVar8 + 1;
                } while (lVar2 != lVar8);
                lVar2 = lVar9;
                func_0x00010bf52a60();
              } while (lVar2 != 0);
            }
            _objc_release(lVar9);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != lStack_290);
        lStack_290 = lVar4;
        func_0x00010bf52a60();
      } while (lStack_290 != 0);
    }
    lVar7 = 0;
LAB_1091284d8:
    _objc_release(lVar4);
LAB_1091284e0:
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return lVar7;
    }
    ___stack_chk_fail();
LAB_10912852c:
    lVar4 = 0;
  } while( true );
}



/* Entry: 109128554; end: 1091285bf;  */

void FUN_109128554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ba150;
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22e440();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091285c0; end: 1091285ff;  */

void FUN_1091285c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010c22e440(PTR_PTR_1126ba150,param_2,param_2,*(undefined1 *)(param_1 + 0x28),
                      *(undefined1 *)(param_1 + 0x29));
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)puVar1;
  return;
}



/* Entry: 109128600; end: 109128633;  */

void FUN_109128600(void)

{
  return;
}



/* Entry: 109128634; end: 10912865f;  */

long FUN_109128634(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f224b8,4000000,0);
  return (long)(int)param_1;
}



/* Entry: 109128660; end: 109128737;  */

undefined8 FUN_109128660(void)

{
  return 0;
}



/* Entry: 109128738; end: 1091288e3; -[SCVideoTranscodingParameterProvider averageTranscodingBitRate:isRecording:highQuality:duration:iFrameOnly:originalVideoBitRate:overlayImageFileSizeBits:videoPlaybackRate:isLagunaVideo:hasOverlayToBlend:isHighFrameRate:] */

long FUN_109128738(double param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,int param_8,int param_9,int param_10,
                  long param_11,int param_12,int param_13,byte param_14)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  if (param_12 == 0) {
    dVar6 = -param_5;
    if (0.0 <= param_5) {
      dVar6 = param_5;
    }
    dVar5 = 1.0;
    if (0.2 <= dVar6) {
      dVar5 = dVar6;
    }
    dVar6 = param_1 * param_2;
    if (1969920.0 <= dVar6) {
      dVar6 = 3.62;
    }
    else if (dVar6 < 875520.0) {
      lVar1 = 8;
      if (291840.0 <= dVar6) {
        lVar1 = 0;
      }
      dVar6 = *(double *)(&UNK_10df9fa10 + lVar1);
    }
    else {
      dVar6 = 5.43;
    }
    if ((param_14 & 1) == 0) {
      if (param_8 == 0 && param_9 == 0) {
        dVar6 = 2.9;
      }
      dVar6 = (double)NEON_fminnm(param_2 * param_1 * dVar6,0x415e848000000000);
      if (dVar6 <= 1300000.0) {
        dVar6 = 1300000.0;
      }
      if (1.0 < dVar5) {
        dVar5 = SQRT(dVar5);
      }
      dVar5 = dVar5 * (double)(long)dVar6;
    }
    else {
      dVar6 = (double)NEON_fminnm(param_2 * param_1 * dVar6,0x416e848000000000);
      if (dVar6 <= 1300000.0) {
        dVar6 = 1300000.0;
      }
      dVar5 = (double)(long)dVar6;
    }
    dVar6 = (double)(long)dVar5 * 5.0;
    if (param_10 == 0) {
      dVar6 = dVar5;
    }
    return (long)dVar6;
  }
  lVar1 = 0x5000000;
  if (param_9 == 0) {
    lVar1 = 0x3000000;
  }
  uVar2 = lVar1 - param_11;
  if ((long)uVar2 < 0x800001) {
    uVar2 = 0x800000;
  }
  if (param_3 <= 0.0) {
    param_3 = 10.0;
  }
  if (param_4 <= 1.1920928955078125e-07) {
    param_13 = 1;
  }
  if ((double)(float)((double)uVar2 / param_3) < param_4) {
    param_13 = 1;
  }
  fVar3 = (float)((double)uVar2 / param_3);
  if (param_13 == 0) {
    fVar3 = (float)param_4;
  }
  fVar4 = (float)NEON_fminnm(fVar3,0x4b000000);
  fVar3 = fVar4 * 5.0;
  if (param_10 == 0) {
    fVar3 = fVar4;
  }
  return (long)fVar3;
}



/* Entry: 1091288e4; end: 109128b57; -[SCVideoTranscodingParameterProvider hevcCapturedVideoBitrateWithFrameSize:config:] */

ulong FUN_1091288e4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  
  _objc_retain(param_5);
  dVar12 = -param_1;
  if (0.0 <= param_1) {
    dVar12 = param_1;
  }
  dVar10 = -param_2;
  if (0.0 <= param_2) {
    dVar10 = param_2;
  }
  if (dVar10 <= dVar12) {
    dVar12 = dVar10;
  }
  uVar7 = (ulong)dVar12;
  uVar2 = param_5;
  func_0x00010bfe10a0();
  uVar3 = param_5;
  func_0x00010bfe10c0();
  uVar4 = param_5;
  func_0x00010bfe10e0();
  uVar5 = param_5;
  func_0x00010bfe1080(param_5);
  func_0x00010bfe10e0(param_5);
  uVar6 = param_5;
  if (0x168 < (long)uVar7) {
    fVar8 = (float)(long)uVar7;
    fVar9 = ABS(fVar8 + -360.0);
    fVar11 = ABS(fVar8 + 360.0) * 1.1920929e-07;
    bVar1 = true;
    if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar11))) {
      bVar1 = fVar9 < fVar11;
    }
    if (!bVar1) {
      dVar12 = (double)uVar3;
      if (uVar7 < 0x1e1) {
LAB_109128a08:
        dVar12 = (double)uVar2 + ((double)uVar7 + -360.0) * ((dVar12 - (double)uVar2) / 120.0);
      }
      else {
        fVar9 = ABS(fVar8 + -480.0);
        fVar11 = ABS(fVar8 + 480.0) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar11))) {
          bVar1 = fVar9 < fVar11;
        }
        if (bVar1) goto LAB_109128a08;
        if (uVar7 < 0x2d1) {
LAB_109128ac0:
          dVar12 = dVar12 + ((double)uVar7 + -480.0) * (((double)uVar4 - dVar12) / 240.0);
        }
        else {
          fVar9 = ABS(fVar8 + -720.0);
          fVar11 = ABS(fVar8 + 720.0) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar11))) {
            bVar1 = fVar9 < fVar11;
          }
          if (bVar1) goto LAB_109128ac0;
          if (0x438 < uVar7) {
            fVar9 = ABS(fVar8 + -1080.0);
            fVar8 = ABS(fVar8 + 1080.0) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
              bVar1 = fVar9 < fVar8;
            }
            if (!bVar1) {
              func_0x00010bfe1080();
              goto LAB_109128a34;
            }
          }
          dVar12 = 720.0;
          func_0x00010b6913b0(0x4086800000000000,(double)uVar4,0x4090e00000000000,(double)uVar5,
                              (double)uVar7);
        }
      }
      uVar6 = (ulong)dVar12;
      goto LAB_109128a34;
    }
  }
  func_0x00010bfe10a0();
LAB_109128a34:
  if (uVar6 < 0xaae61) {
    uVar6 = 700000;
  }
  if (44999999 < uVar6) {
    uVar6 = 45000000;
  }
  _objc_release(param_5);
  return uVar6;
}



/* Entry: 109128b58; end: 109128b7f; -[SCVideoTranscodingParameterProvider avcCapturedVideoBitrateWithFrameSize:config:] */

long FUN_109128b58(ulong param_1)

{
  func_0x00010bfe1100();
  return (long)((double)param_1 / 0.85);
}



/* Entry: 109128b80; end: 109128c23; -[SCVideoTranscodingParameterProvider deviceMeetsRequirementsForContentAdaptiveVideoEncoding] */

uint FUN_109128b80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  if ((int)puVar2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1a0();
    if ((int)puVar3 == 0) {
      uVar5 = 0;
    }
    else {
      puVar3 = PTR_PTR_1126b2930;
      func_0x00010bf5e640(PTR_PTR_1126b2930);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c07e220();
      uVar5 = (uint)puVar4 ^ 1;
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return uVar5;
}



/* Entry: 109128c24; end: 109128c2b; -[SCVideoTranscodingParameterProvider enabledPlaybackDebugView] */

undefined8 FUN_109128c24(void)

{
  return 0;
}



/* Entry: 109128c2c; end: 109128d27;  */

uint FUN_109128c2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  if ((int)puVar2 == 0) {
    uVar5 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1e0();
    if ((int)puVar3 == 0) {
      uVar5 = 1;
    }
    else {
      puVar3 = PTR_PTR_1126b2930;
      func_0x00010bf5e640(PTR_PTR_1126b2930);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c07e220();
      uVar5 = (uint)puVar4;
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  if ((int)puVar2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1c0();
    uVar5 = (uint)puVar3 & uVar5;
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return uVar5;
}



/* Entry: 109128d28; end: 109128d4f;  */

undefined ** FUN_109128d28(long param_1)

{
  if (param_1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110add550)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ee6f38;
}



/* Entry: 109128d50; end: 109128e17;  */

void FUN_109128d50(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f22638,0,0);
  uVar1 = (uint)param_1;
  puVar2 = PTR_PTR_1126d5ff8;
  _objc_opt_new(PTR_PTR_1126d5ff8);
  func_0x00010c2ad140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a81a0(puVar2,param_2,uVar1 >> 1 & 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a81c0(puVar2,param_2,uVar1 >> 2 & 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6b40(puVar2,param_2,uVar1 >> 3 & 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109128e18; end: 109128f03;  */

void FUN_109128e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d5ff8;
  _objc_opt_new(PTR_PTR_1126d5ff8);
  func_0x00010c2ad140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a81a0(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a81c0(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6b40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109128f04; end: 109128f87;  */

void FUN_109128f04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf885b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantDoubleNumber_111185f20,PTR_s_doubleValue_1125bfb10);
  return;
}



/* Entry: 109128f88; end: 109128fcb; -[SCBadFrameRateStatsTracker dealloc] */

void FUN_109128f88(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddb020();
  puStack_28 = PTR_PTR_112700768;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109128fcc; end: 109128fd3; -[SCBadFrameRateStatsTracker totalBadFrameCount] */

undefined8 FUN_109128fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109128fd4; end: 109128fdf; -[SCBadFrameRateStatsTracker pauseDisplay] */

void FUN_109128fd4(long param_1)

{
  *(undefined1 *)(param_1 + 0x81) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bddb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelWatchdogTimer_1125545a8);
  return;
}



/* Entry: 109128fe0; end: 109128ff7; -[SCBadFrameRateStatsTracker frameDurationBuckets] */

void FUN_109128fe0(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109128ff8; end: 109128fff; -[SCBadFrameRateStatsTracker totalFrameCount] */

undefined8 FUN_109128ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109129000; end: 109129013; -[SCBadFrameRateStatsTracker totalBadFrameDurationMs] */

double FUN_109129000(long param_1)

{
  return *(double *)(param_1 + 0x28) * 1000.0;
}



/* Entry: 109129014; end: 109129027; -[SCBadFrameRateStatsTracker hangThresholdMs] */

double FUN_109129014(long param_1)

{
  return *(double *)(param_1 + 0x50) * 1000.0;
}



/* Entry: 109129028; end: 10912902f; -[SCBadFrameRateStatsTracker totalHangsCount] */

undefined8 FUN_109129028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109129030; end: 109129043; -[SCBadFrameRateStatsTracker totalHangFrameDurationMs] */

double FUN_109129030(long param_1)

{
  return *(double *)(param_1 + 0x30) * 1000.0;
}



/* Entry: 109129044; end: 109129177; -[SCBadFrameRateStatsTracker _setBadFrameBucket:] */

void FUN_109129044(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  if (param_1 < 0.01667) {
    return;
  }
  if (0.03334 <= param_1) {
    if (0.08 <= param_1) {
      if (0.2 <= param_1) {
        dVar5 = (param_1 + -0.2) / 0.1 + 3.0;
        puVar1 = PTR_PTR_1126dd6a0;
        func_0x00010c0861a0();
        if ((double)(long)(puVar1 + -1) <= dVar5) {
          dVar5 = (double)(long)(puVar1 + -1);
        }
        lVar4 = (long)dVar5;
        if (lVar4 < 0) {
          return;
        }
      }
      else {
        lVar4 = 2;
      }
    }
    else {
      lVar4 = 1;
    }
  }
  else {
    lVar4 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c0dfd40(lVar2,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar1,param_3,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_2 + 8),param_3,puVar1,lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 109129178; end: 10912922b; -[SCBadFrameRateStatsTracker _insertTraceSpanWithFrameInterval:] */

void FUN_109129178(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60700();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd6a0;
  func_0x00010bdc14e0(PTR_PTR_1126dd6a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0665e0(puVar1,param_3,(long)puVar2 - (long)(param_1 * 1000000.0),puVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10912922c; end: 1091292df; -[SCBadFrameRateStatsTracker _insertJankSpanWithFrameInterval:] */

void FUN_10912922c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60700();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dd6a0;
  func_0x00010bdc1a20(PTR_PTR_1126dd6a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0665e0(puVar1,param_3,(long)puVar2 - (long)(param_1 * 1000000.0),puVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091292e0; end: 10912930b;  */

void FUN_1091292e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddde60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10912930c; end: 109129347; -[SCBadFrameRateStatsTracker _cancelWatchdogTimer] */

void FUN_10912930c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 109129348; end: 1091293cb; -[SCBadFrameRateStatsTracker _checkMainThreadResponsiveness] */

void FUN_109129348(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  
  if (*(char *)(param_2 + 0x48) == '\x01') {
    _CACurrentMediaTime();
    dVar2 = *(double *)(param_2 + 0x50);
    if (dVar2 < param_1 - *(double *)(param_2 + 0x40)) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8fae0(dVar2,param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 1091293cc; end: 1091294af; -[SCBadFrameRateStatsTracker _reportHangNonFatalErrorWithHangDuration:timestamp:] */

void FUN_1091293cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f226b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3e90;
  _objc_opt_new(PTR_PTR_1126b3e90);
  func_0x00010c1da700();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be33a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar4,param_2,puVar2,0,puVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091294b0; end: 1091294ef; -[SCBadFrameRateStatsTracker _hangNonFatalThreadCaptureOption] */

void FUN_1091294b0(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    func_0x00010c0b6d20(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf00c00(PTR_PTR_1126b3e98,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091294f0; end: 10912954f; -[SCBadFrameRateStatsTracker .cxx_destruct] */

void FUN_1091294f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109129550; end: 10912982f; -[SCFrameRateLogger toDict] */

void FUN_109129550(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar10 = PTR____NSDictionary0__struct_11034ab58;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    dVar12 = *(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50);
    dVar11 = -1.0;
    if (0.0 < dVar12) {
      dVar11 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x20));
      dVar11 = dVar11 / dVar12;
    }
    dVar13 = *(double *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110ee3d38;
    lVar1 = param_1;
    func_0x00010be18d00(dVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110dd00b8;
    lVar2 = param_1;
    lStack_c0 = lVar1;
    func_0x00010be18d00(dVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110e15918;
    lVar3 = param_1;
    lStack_b8 = lVar2;
    func_0x00010be18d00(*(undefined8 *)(param_1 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110e15938;
    lVar4 = param_1;
    lStack_b0 = lVar3;
    func_0x00010be18d00(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f226d8;
    lVar5 = param_1;
    lStack_a8 = lVar4;
    func_0x00010be18d00(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    dVar11 = (double)NEON_ucvtf(uVar14);
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f226f8;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110e2a5b8;
    lVar6 = param_1;
    lStack_a0 = lVar5;
    func_0x00010be18d00(dVar13 / dVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f22718;
    lVar7 = param_1;
    lStack_108 = lVar6;
    func_0x00010be18d00(*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f22738;
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lStack_100 = lVar7;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_f8 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_108,&ppuStack_120,3
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_98 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_c0,&ppuStack_f0,6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_sync_enter(lVar1);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x58);
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_sync_exit(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


