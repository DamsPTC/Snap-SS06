/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108003fe0; end: 1080041df; -[SCBatchCaptureStateHandler configureEphemeralMedias:configuration:multiSnapDrawingCache:] */

void FUN_108003fe0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c09e080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c07d220();
  if (iVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c1583c0(uVar4);
    uVar9 = param_4;
    func_0x00010c1585e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar7,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde45a0(param_1,param_2,param_3,0,uVar6,uVar7,uVar2,param_5);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  else {
    uVar9 = param_4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf529e0();
    _objc_release(uVar9);
    if (uVar6 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        uVar6 = param_4;
        func_0x00010c1585e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0dfd40(uVar4,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bde45a0(param_1,param_2,param_3,lVar8,uVar3,uVar4,uVar2,param_5);
        lVar8 = lVar5 + lVar8;
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar9 = uVar9 + 1;
        uVar6 = param_4;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010bf529e0();
        _objc_release(uVar6);
      } while (uVar9 < uVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080041e0; end: 10800441f; -[SCBatchCaptureStateHandler maxUniqueStickerId] */

long FUN_1080041e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  long lVar13;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lStack_2b8 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_230,auStack_f0,0x10);
  lVar8 = 0;
  if (lStack_2b8 != 0) {
    lVar5 = *plStack_220;
    do {
      lVar12 = 0;
      do {
        if (*plStack_220 != lVar5) {
          _objc_enumerationMutation(lVar6);
        }
        lVar1 = *(long *)(lStack_228 + lVar12 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        func_0x00010c09df80();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf52a60();
        if (lVar2 != 0) {
          lVar13 = *plStack_260;
          do {
            lVar7 = 0;
            do {
              if (*plStack_260 != lVar13) {
                _objc_enumerationMutation(lVar1);
              }
              lVar3 = *(long *)(lStack_268 + lVar7 * 8);
              lStack_2a8 = 0;
              uStack_2b0 = 0;
              uStack_298 = 0;
              plStack_2a0 = (long *)0x0;
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              func_0x00010c2553e0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010bf52a60();
              if (lVar4 != 0) {
                lVar11 = *plStack_2a0;
                do {
                  lVar10 = 0;
                  lVar9 = lVar8;
                  do {
                    if (*plStack_2a0 != lVar11) {
                      _objc_enumerationMutation(lVar3);
                    }
                    lVar8 = *(long *)(lStack_2a8 + lVar10 * 8);
                    func_0x00010c280560();
                    if (lVar8 <= lVar9) {
                      lVar8 = lVar9;
                    }
                    lVar10 = lVar10 + 1;
                    lVar9 = lVar8;
                  } while (lVar4 != lVar10);
                  lVar4 = lVar3;
                  func_0x00010bf52a60(lVar3,param_2,&uStack_2b0,auStack_1f0,0x10);
                } while (lVar4 != 0);
              }
              _objc_release(lVar3);
              lVar7 = lVar7 + 1;
            } while (lVar7 != lVar2);
            lVar2 = lVar1;
            func_0x00010bf52a60(lVar1,param_2,&uStack_270,auStack_170,0x10);
          } while (lVar2 != 0);
        }
        _objc_release(lVar1);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lStack_2b8);
      lStack_2b8 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_230,auStack_f0,0x10);
    } while (lStack_2b8 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar8;
  }
  ___stack_chk_fail();
  lVar6 = lVar6 + 0x88;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010bf8c820();
  _objc_release(lVar6);
  return lVar8;
}



/* Entry: 108004420; end: 108004457; -[SCBatchCaptureStateHandler editingIndex] */

long FUN_108004420(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf8c820();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108004458; end: 1080044c7; -[SCBatchCaptureStateHandler drawingView:addedStroke:] */

void FUN_108004458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a2e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080044c8; end: 108004537; -[SCBatchCaptureStateHandler drawingView:removedStroke:] */

void FUN_1080044c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a340();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108004538; end: 108004587; -[SCBatchCaptureStateHandler didChangeStaticCaption:] */

void FUN_108004538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf736c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108004588; end: 1080045e7; -[SCBatchCaptureStateHandler didChangeTrackingCaption:atIndex:] */

void FUN_108004588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73780();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080045e8; end: 108004637; -[SCBatchCaptureStateHandler didChangeAutoCaptionsState:] */

void FUN_1080045e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf5f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73060();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108004638; end: 10800466f; -[SCBatchCaptureStateHandler didDeleteSegmentAtIndex:] */

void FUN_108004638(undefined8 param_1)

{
  func_0x00010bf5f520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf746c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108004670; end: 1080046d7; -[SCBatchCaptureStateHandler currentMultiSnapStateHandler] */

void FUN_108004670(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8c7e0();
  _objc_release(lVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + 8),param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080046d8; end: 10800476f; -[SCBatchCaptureStateHandler _currentEditingSegment] */

void FUN_1080046d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8c7e0();
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108004770; end: 108004953; -[SCBatchCaptureStateHandler _createMultiSnapStateHandlerForSegment:] */

undefined * FUN_108004770(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_3 == (undefined *)0x0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_a0,param_3);
  }
  func_0x00010c297240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126c4788;
  _objc_alloc();
  puVar15 = *(undefined **)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar7 = *(undefined **)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uStack_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x70);
  uStack_b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_a8 = 1;
  puVar9 = puVar15;
  uVar10 = uVar8;
  puVar11 = puVar7;
  uVar12 = uVar16;
  puStack_d0 = puVar2;
  func_0x00010c02cb20(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  _objc_release(puVar2);
  puVar5 = param_3;
  func_0x00010c095740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR_PTR_1126b0008;
  puVar14 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    puVar15 = param_3;
    func_0x00010c095740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    param_1 = puVar6;
    func_0x00010bf73080(puVar4);
    _objc_release(puVar6);
    puVar14 = puVar6;
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  uStack_130 = 1;
  pcStack_d8 = FUN_108004954;
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = puVar2;
  uStack_120 = uVar16;
  puStack_118 = puVar7;
  uStack_110 = uVar8;
  puStack_108 = puVar15;
  puStack_100 = puVar14;
  puStack_f8 = puVar4;
  puStack_f0 = puVar3;
  puStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(param_1);
  _objc_retain(puVar9);
  _objc_retain(uVar12);
  _objc_retain(puVar11);
  _objc_retain(uVar10);
  puVar7 = puVar9;
  func_0x00010c083320();
  puVar2 = PTR_PTR_1126c4280;
  if ((int)puVar7 == 0) {
    puVar2 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_148 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_150 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar9);
    _objc_opt_class(puVar2);
    puVar7 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar2);
    puVar2 = puVar9;
    if (((ulong)puVar7 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar9);
    puVar3 = PTR_PTR_1126affb0;
    _objc_alloc(PTR_PTR_1126affb0);
    func_0x00010bffe1e0();
    puVar4 = puVar2;
    func_0x00010bf8c620(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126affb8;
    _objc_alloc();
    if (puVar2 == (undefined *)0x0) {
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
    }
    else {
      func_0x00010c09d840(&uStack_180,puVar9);
      func_0x00010c09e0e0(&uStack_1b0,puVar9);
    }
    puVar7 = puVar2;
    func_0x00010c26db80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0525a0();
    _objc_release(puVar7);
    func_0x00010bef9e40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfb4f60(puVar2);
    puVar7 = param_1;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar11;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar3 = puVar7;
  func_0x00010bf46e80(uVar10);
  _objc_release(uVar12);
  _objc_release(uVar10);
  puVar4 = PTR_PTR_1126c4270;
  _objc_retain(puVar9);
  _objc_opt_class(puVar4);
  puVar5 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar4);
  puVar2 = puVar9;
  if (((ulong)puVar5 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar9);
  if (puVar2 != (undefined *)0x0) {
    puVar5 = puVar9;
    func_0x00010bfd4120();
    puVar3 = (undefined *)0x2;
    if ((int)puVar5 == 0) {
      puVar3 = (undefined *)0x0;
    }
    puVar5 = puVar7;
    func_0x00010bfb1920(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar5);
  }
  puVar5 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar7;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bfc1440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar7);
      puVar2 = puVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar7);
          }
          uVar8 = *(undefined8 *)((long)puVar15 * 8);
          func_0x00010bfaee40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a2c80();
          _objc_release(uVar8);
          puVar15 = puVar15 + 1;
        } while (puVar2 != puVar15);
        puVar2 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar7);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010bfaee40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar4);
  return (undefined *)(ulong)(puVar7 == (undefined *)0x0);
}



/* Entry: 108004954; end: 108004ce7; -[SCBatchCaptureStateHandler _configEphemeralMedias:startAtIndex:forSegment:stateHandler:allMediaTimeRanges:multiSnapDrawingCache:] */

undefined *
FUN_108004954(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
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
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  puVar2 = param_5;
  func_0x00010c083320();
  puVar6 = PTR_PTR_1126c4280;
  if ((int)puVar2 == 0) {
    puVar6 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = param_7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    _objc_opt_class(puVar6);
    puVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    puVar6 = param_5;
    if (((ulong)puVar2 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(param_5);
    puVar3 = PTR_PTR_1126affb0;
    _objc_alloc(PTR_PTR_1126affb0);
    func_0x00010bffe1e0();
    puVar4 = puVar6;
    func_0x00010bf8c620(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126affb8;
    _objc_alloc();
    if (puVar6 == (undefined *)0x0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010c09d840(&uStack_b0,param_5);
      func_0x00010c09e0e0(&uStack_e0,param_5);
    }
    puVar2 = puVar6;
    func_0x00010c26db80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0525a0();
    _objc_release(puVar2);
    func_0x00010bef9e40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bfb4f60(puVar6);
    puVar2 = param_3;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_7;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
  puVar3 = puVar2;
  func_0x00010bf46e80(param_6);
  _objc_release(param_8);
  _objc_release(param_6);
  puVar4 = PTR_PTR_1126c4270;
  _objc_retain(param_5);
  _objc_opt_class(puVar4);
  puVar5 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar4);
  puVar6 = param_5;
  if (((ulong)puVar5 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(param_5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = param_5;
    func_0x00010bfd4120();
    puVar3 = (undefined *)0x2;
    if ((int)puVar5 == 0) {
      puVar3 = (undefined *)0x0;
    }
    puVar5 = puVar2;
    func_0x00010bfb1920(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar5);
  }
  puVar5 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar6 = puVar3;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar3;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfc1440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      _objc_retain(puVar2);
      puVar6 = puVar2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar6 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          uVar8 = *(undefined8 *)((long)puVar10 * 8);
          func_0x00010bfaee40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a2c80();
          _objc_release(uVar8);
          puVar10 = puVar10 + 1;
        } while (puVar6 != puVar10);
        puVar6 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010bfaee40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  _objc_release(puVar4);
  return (undefined *)(ulong)(puVar2 == (undefined *)0x0);
}



/* Entry: 108004ce8; end: 108004eef; -[SCBatchCaptureStateHandler _addExportableGeoFiltersIfNecessaryToSnapState:] */

ulong FUN_108004ce8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c09df80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bfaee40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfc1440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010bf529e0();
    if (uVar1 != 0) {
      _objc_retain(uVar2);
      uVar1 = uVar2;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (uVar1 != 0) {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(uVar2);
          }
          uVar5 = *(undefined8 *)(uVar8 * 8);
          func_0x00010bfaee40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a2c80();
          _objc_release(uVar5);
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar8);
        uVar1 = uVar2;
        func_0x00010bf52a60();
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bfaee40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(param_2);
  return (ulong)(lVar6 == 0);
}



/* Entry: 108004ef0; end: 108004fb7;  */

bool FUN_108004ef0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfaee40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 == 0;
}



/* Entry: 108004fb8; end: 108004ff7; -[SCBatchCaptureStateHandler batchCaptureConfiguration:didAddSegment:] */

void FUN_108004fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf03c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108004ff8; end: 10800503b; -[SCBatchCaptureStateHandler batchCaptureConfiguration:didDeleteSegment:atIndex:] */

void FUN_108004ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dfd40(uVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10800503c; end: 1080050e7; -[SCBatchCaptureStateHandler batchCaptureConfiguration:didDeleteSnapAtIndexPath:] */

void FUN_10800503c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010bf746c0(lVar4,param_2,uVar1);
  lVar2 = lVar4;
  func_0x00010c09df80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1080050e8; end: 1080050eb; -[SCBatchCaptureStateHandler batchCaptureConfiguration:didSplitSnapAtIndexPath:splitTime:] */

void FUN_1080050e8(void)

{
  return;
}



/* Entry: 1080050ec; end: 1080050f3; -[SCBatchCaptureStateHandler batchCaptureConfigurationWillDeleteAllSegments:] */

void FUN_1080050ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1080050f4; end: 1080050f7; -[SCBatchCaptureStateHandler batchCaptureConfigurationDidDeleteAllSegments:] */

void FUN_1080050f4(void)

{
  return;
}



/* Entry: 1080050f8; end: 10800510f; -[SCBatchCaptureStateHandler indexProvider] */

void FUN_1080050f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108005110; end: 10800511b; -[SCBatchCaptureStateHandler setIndexProvider:] */

void FUN_108005110(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10800511c; end: 1080051db; -[SCBatchCaptureStateHandler .cxx_destruct] */

void FUN_10800511c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080051dc; end: 108005333; -[SCPreviewGallerySaveSnapDocProvider initWithSnapDocManagerLazy:snapDocConverter:snapDocEditor:performer:fileManager:mixedAudioEnabled:] */

undefined1 *
FUN_1080051dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fc188;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108005334; end: 10800574f; -[SCPreviewGallerySaveSnapDocProvider createTimelineSnapDocWithBaseMediaURLs:timeRanges:segmentCreativeEditTags:localSOJUEdits:localOverlayFormats:globalSOJUEdits:globalOverlayFormat:globalMediaAssets:globalMediaRenderEffects:localMediaAssets:createTimeUtc:isInfiniteDuration:location:baseMediaRenderEffect:mediaOrigin:completionBlock:] */

void FUN_108005334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined **param_19)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
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
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110a16ec8;
  if (param_19 != (undefined **)0x0) {
    ppuVar1 = param_19;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf926c0();
  if (iVar2 == 0) {
    _objc_initWeak(auStack_70,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_80,auStack_70);
    uStack_78 = param_14;
    _objc_retain(param_13);
    _objc_retain(param_16);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(ppuVar1);
    _objc_retain(param_17);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_12);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_18);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_18);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_12);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_17);
    _objc_release(ppuVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_16);
    _objc_release(param_13);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  else {
    func_0x00010bdf3740(param_1);
  }
  _objc_release(ppuVar1);
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
  return;
}



/* Entry: 108005750; end: 108005753;  */

void FUN_108005750(void)

{
  return;
}



/* Entry: 108005754; end: 10800684b;  */

void FUN_108005754(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  code *pcVar24;
  bool bVar25;
  undefined *puVar26;
  undefined *puStack_1c8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar1 = param_1 + 0x98;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_1080067b8;
  puVar2 = PTR_PTR_1126b25b8;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011280();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b25c0;
  _objc_opt_new();
  func_0x00010c1d0640(*(undefined8 *)(uVar1 + 0x28));
  puVar4 = PTR_PTR_1126b25e0;
  _objc_opt_new();
  uVar5 = (ulong)*(byte *)(param_1 + 0xa0);
  FUN_108068fc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500(puVar4);
  _objc_release(uVar5);
  func_0x00010c1dd3e0(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  FUN_108069120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216040(puVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010806918c(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf6c0(puVar3);
  _objc_release(uVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010c1dd6c0(puVar4);
  func_0x00010c1dd6a0(puVar4);
  puVar8 = PTR_PTR_1126becb8;
  _objc_opt_new();
  func_0x00010c1c4660(puVar4);
  puVar9 = PTR_PTR_1126becc0;
  _objc_opt_new();
  func_0x00010c1b98c0(puVar8);
  func_0x00010c218fe0(puVar9);
  puVar10 = PTR_PTR_1126bce80;
  _objc_opt_new();
  puVar11 = PTR_PTR_1126bcea8;
  _objc_opt_new();
  puVar12 = PTR_PTR_1126bceb0;
  _objc_opt_new();
  func_0x00010c1f6740();
  puVar26 = puVar11;
  func_0x00010c12fb00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar26);
  if (*(char *)(uVar1 + 0x38) == '\x01') {
    puStack_1c8 = PTR_PTR_1126bceb8;
    _objc_opt_new();
    puVar26 = puVar12;
    func_0x00010c12f9a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar26);
  }
  else {
    puStack_1c8 = (undefined *)0x0;
  }
  lVar13 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  puVar26 = (undefined *)0x0;
  if (lVar13 != 0) {
    uVar5 = 0;
    puVar16 = puVar26;
    do {
      puVar14 = PTR_PTR_1126bce88;
      _objc_opt_new();
      lVar13 = *(long *)(param_1 + 0x40);
      if (lVar13 != 0) {
        puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar26);
        if (lVar13 != 0) {
          func_0x00010c1857c0(puVar14);
        }
        _objc_release(lVar13);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = *(long *)(param_1 + 0x38);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff5e0(puVar4);
      func_0x00010c1dd6a0(puVar4);
      lVar13 = lVar15;
      func_0x00010bf4d860();
      _objc_retainAutoreleasedReturnValue();
      if (lVar13 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_b0,lVar13);
      }
      uStack_e8 = uStack_90;
      uStack_f0 = uStack_98;
      uStack_e0 = uStack_88;
      uVar21 = uVar1;
      puStack_b8 = puVar16;
      func_0x00010bdf18e0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puStack_b8;
      _objc_retain(puStack_b8);
      _objc_release(puVar16);
      _objc_release(lVar13);
      puVar16 = PTR_PTR_1126d4c18;
      if (uVar21 == 0) {
        (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
        bVar25 = false;
      }
      else {
        if ((*(long *)(param_1 + 0x48) != 0) && (puStack_1c8 != (undefined *)0x0)) {
          func_0x00010c0ff5c0(uVar21);
          func_0x00010bdc7fe0(puVar16);
        }
        func_0x00010befa120(puVar7);
        puVar16 = puVar14;
        func_0x00010c0ff660(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc800();
        _objc_release(puVar16);
        if (lVar15 != 0) {
          lVar13 = lVar15;
          func_0x00010c27c940();
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_b0,lVar13);
          }
          _objc_release(lVar13);
          lVar13 = lVar15;
          func_0x00010bf4d860();
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 == 0) {
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_f0,lVar13);
          }
          _objc_release(lVar13);
          puVar16 = PTR_PTR_1126afff0;
          _objc_alloc_init(PTR_PTR_1126afff0);
          func_0x00010c21a4e0(puVar14);
          _objc_release(puVar16);
          uStack_128 = uStack_a8;
          uStack_130 = uStack_b0;
          uStack_120 = uStack_a0;
          uStack_148 = uStack_e8;
          uStack_150 = uStack_f0;
          uStack_140 = uStack_e0;
          _CMTimeSubtract(&uStack_110,&uStack_130,&uStack_150);
          _CMTimeGetSeconds(&uStack_110);
          puVar16 = puVar14;
          func_0x00010c27c540(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c209a20();
          _objc_release(puVar16);
          uStack_108 = uStack_90;
          uStack_110 = uStack_98;
          uStack_100 = uStack_88;
          _CMTimeGetSeconds(&uStack_110);
          puVar16 = puVar14;
          func_0x00010c27c540(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c192d40();
          _objc_release(puVar16);
        }
        uVar17 = *(ulong *)(param_1 + 0x50);
        func_0x00010bf529e0();
        if (uVar5 < uVar17) {
          uVar18 = *(ulong *)(param_1 + 0x50);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
          _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
          uVar17 = uVar18;
          _objc_opt_isKindOfClass(uVar18,puVar16);
          _objc_release(uVar18);
          if ((uVar17 & 1) != 0) goto LAB_108005d54;
          func_0x00010c0ff5e0(puVar4);
          func_0x00010c1dd6a0(puVar4);
          uVar20 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c0dfd40(uVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar1;
          func_0x00010bdf18c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar26);
          _objc_release(puVar26);
          _objc_release(uVar20);
          if (uVar17 != 0) {
            func_0x00010befa120(puVar7);
            puVar16 = puVar14;
            func_0x00010c0ff660(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc800();
            _objc_release(puVar16);
            _objc_release(uVar17);
            goto LAB_108005d54;
          }
LAB_108006030:
          (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
        }
        else {
LAB_108005d54:
          uVar17 = *(ulong *)(param_1 + 0x58);
          func_0x00010bf529e0();
          if (uVar17 <= uVar5) {
LAB_108005e6c:
            lVar13 = *(long *)(param_1 + 0x60);
            puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar16);
            if (lVar13 != 0) {
              uVar20 = *(undefined8 *)(param_1 + 0x60);
              puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(uVar20);
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar1;
              func_0x00010bdf18a0();
              _objc_retain(puVar26);
              _objc_release(puVar26);
              _objc_release(uVar20);
              _objc_release(puVar16);
              if ((uVar17 & 1) == 0) goto LAB_108006030;
            }
            puVar16 = puVar10;
            func_0x00010c2787a0(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar16);
            bVar25 = true;
            goto LAB_108006074;
          }
          puVar19 = *(undefined **)(param_1 + 0x58);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar19);
          if (puVar19 == puVar16) goto LAB_108005e6c;
          func_0x00010c0ff5e0(puVar4);
          func_0x00010c1dd6a0(puVar4);
          uVar20 = *(undefined8 *)(param_1 + 0x58);
          func_0x00010c0dfd40(uVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar1;
          func_0x00010bdf1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar26);
          _objc_release(puVar26);
          _objc_release(uVar20);
          if (uVar17 != 0) {
            func_0x00010befa120(puVar7);
            puVar16 = puVar14;
            func_0x00010c0ff660(puVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befc800();
            _objc_release(puVar16);
            _objc_release(uVar17);
            goto LAB_108005e6c;
          }
          (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
        }
        bVar25 = false;
      }
LAB_108006074:
      _objc_release(uVar21);
      _objc_release(lVar15);
      _objc_release(uVar6);
      _objc_release(puVar14);
      if (!bVar25) goto LAB_108006760;
      uVar5 = uVar5 + 1;
      uVar21 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf529e0();
      puVar16 = puVar26;
    } while (uVar5 < uVar21);
  }
  func_0x00010c2191c0(puVar10);
  func_0x00010c1b1880(puVar10);
  func_0x00010c277f20(puVar9);
  func_0x00010c218fe0(puVar9);
  func_0x00010c218fc0(puVar10);
  puVar16 = puVar9;
  func_0x00010c2791c0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126bce80;
  _objc_opt_new(PTR_PTR_1126bce80);
  puVar14 = PTR_PTR_1126bce88;
  _objc_opt_new();
  uVar5 = *(ulong *)(param_1 + 0x68);
  if (uVar5 == 0) {
LAB_108006200:
    puVar19 = *(undefined **)(param_1 + 0x70);
    if (puVar19 == (undefined *)0x0) {
LAB_1080062c8:
      uVar5 = uVar1;
      func_0x00010be241e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar1;
      func_0x00010bdf18a0();
      _objc_retain(puVar26);
      _objc_release(puVar26);
      _objc_release(uVar5);
      if ((uVar21 & 1) == 0) goto LAB_108006474;
      puVar19 = puVar14;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar19;
      func_0x00010bf529e0();
      _objc_release(puVar19);
      if (puVar22 != (undefined *)0x0) {
        puVar19 = puVar16;
        func_0x00010c2787a0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar19);
        func_0x00010c2191c0(puVar16);
        func_0x00010c1b1880(puVar16);
        func_0x00010c277f20(puVar9);
        func_0x00010c218fe0(puVar9);
        func_0x00010c218fc0(puVar16);
        puVar19 = puVar9;
        func_0x00010c2791c0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar19);
      }
      if (*(char *)(uVar1 + 0x38) == '\x01') {
        uVar5 = uVar1;
        func_0x00010be5e440();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar5;
        func_0x00010bf529e0();
        if ((uVar21 != 0) && (puStack_1c8 != (undefined *)0x0)) {
          uVar21 = uVar1;
          func_0x00010bdc7e20();
          _objc_retain(puVar26);
          _objc_release(puVar26);
          if ((uVar21 & 1) == 0) {
            (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
            _objc_release(uVar5);
            goto LAB_10800674c;
          }
        }
        uVar21 = uVar1;
        func_0x00010be5e440();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar21;
        func_0x00010bf529e0();
        if ((uVar17 != 0) && (puStack_1c8 != (undefined *)0x0)) {
          uVar17 = uVar1;
          func_0x00010bdc7e20();
          _objc_retain(puVar26);
          _objc_release(puVar26);
          if ((uVar17 & 1) == 0) {
            (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
            _objc_release(uVar21);
            _objc_release(uVar5);
            goto LAB_10800674c;
          }
        }
        uVar17 = uVar1;
        func_0x00010be5e440();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar17;
        func_0x00010bf529e0();
        if ((uVar18 != 0) && (puStack_1c8 != (undefined *)0x0)) {
          uVar18 = uVar1;
          func_0x00010bdc7e20();
          _objc_retain(puVar26);
          _objc_release(puVar26);
          if ((int)uVar18 == 0) {
            (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
            _objc_release(uVar17);
            _objc_release(uVar21);
            _objc_release(uVar5);
            goto LAB_10800674c;
          }
        }
        puVar19 = puVar11;
        func_0x00010c12faa0();
        if ((int)puVar19 != 0) {
          puVar19 = puVar3;
          func_0x00010c0fee00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar19;
          func_0x00010c0c4c40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ea760();
          _objc_release(puVar22);
          _objc_release(puVar19);
        }
        _objc_release(uVar17);
        _objc_release(uVar21);
        _objc_release(uVar5);
      }
      func_0x00010bedb480(uVar1);
      func_0x00010bedb5c0(uVar1);
      puVar19 = PTR_PTR_1126c7c50;
      _objc_alloc(PTR_PTR_1126c7c50);
      func_0x00010c0c46a0(puVar2);
      func_0x00010c029140(puVar19);
      puVar22 = puVar19;
      func_0x00010bf220e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = puVar3;
      FUN_108022988(puVar3,puVar22);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      lVar13 = *(long *)(param_1 + 0x90);
      if (puVar19 == (undefined *)0x0) {
        if (lVar13 != 0) {
          pcVar24 = *(code **)(lVar13 + 0x10);
          puVar23 = (undefined *)0x0;
          puVar26 = puVar3;
          goto LAB_108006710;
        }
      }
      else if (lVar13 != 0) {
        pcVar24 = *(code **)(lVar13 + 0x10);
        puVar26 = (undefined *)0x0;
        puVar23 = puVar19;
LAB_108006710:
        (*pcVar24)(lVar13,puVar26,0,puVar23);
      }
      _objc_release(puVar22);
      puVar26 = puVar19;
    }
    else {
      puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar19 == puVar22) goto LAB_1080062c8;
      func_0x00010c0ff5e0(puVar4);
      func_0x00010c1dd6a0(puVar4);
      uVar5 = uVar1;
      func_0x00010bdf1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar26);
      _objc_release(puVar26);
      if (uVar5 != 0) {
        func_0x00010befa120(puVar7);
        puVar19 = puVar14;
        func_0x00010c0ff660(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc800();
        _objc_release(puVar19);
        _objc_release(uVar5);
        goto LAB_1080062c8;
      }
      (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
    }
  }
  else {
    puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_opt_isKindOfClass(uVar5,puVar19);
    if ((uVar5 & 1) != 0) goto LAB_108006200;
    func_0x00010c0ff5e0(puVar4);
    func_0x00010c1dd6a0(puVar4);
    uVar5 = uVar1;
    func_0x00010bdf18c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar26);
    _objc_release(puVar26);
    if (uVar5 != 0) {
      func_0x00010befa120(puVar7);
      puVar19 = puVar14;
      func_0x00010c0ff660(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar19);
      _objc_release(uVar5);
      goto LAB_108006200;
    }
LAB_108006474:
    (**(code **)(*(long *)(param_1 + 0x90) + 0x10))(*(long *)(param_1 + 0x90),0,0,puVar26);
  }
LAB_10800674c:
  _objc_release(puVar14);
  _objc_release(puVar16);
LAB_108006760:
  _objc_release(puStack_1c8);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar26);
LAB_1080067b8:
  _objc_release(uVar1);
  return;
}



/* Entry: 10800684c; end: 108006c73; -[SCPreviewGallerySaveSnapDocProvider _addPlaybackLayersAndEffectsForAudioAssets:trackSegment:assetType:tagFeatureType:globalMediaRenderEffects:snapDoc:snapDocKey:playback:layerComposition:playbackLayers:renderEffectScenes:effectScene:audioMixingRenderEffectDAG:error:] */

undefined **
FUN_10800684c(undefined8 param_1,long param_2,undefined **param_3,undefined **param_4,
             undefined8 param_5,undefined *param_6,long param_7,undefined8 param_8,
             undefined **param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             long param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,long param_18)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_3;
  uStack_b0 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  puVar2 = PTR_PTR_1126bce98;
  if (param_18 == 0) {
    ppuVar13 = (undefined **)0x0;
    param_9 = param_4;
  }
  else {
    uStack_c8 = param_17;
    uStack_c0 = param_14;
    ppuStack_d8 = param_3;
    lStack_b8 = param_7;
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_opt_new();
    puVar3 = PTR_PTR_1126bce90;
    _objc_opt_new();
    uStack_e4 = SUB84(param_6,0);
    func_0x00010c185920();
    func_0x00010c211840(puVar3);
    puVar4 = puVar2;
    func_0x00010bfa2d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_e0 = param_5;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_d0 = puVar2;
    puStack_80 = puVar4;
    puStack_78 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuStack_d8;
    lStack_f8 = param_18;
    uVar12 = uStack_b0;
    ppuVar10 = ppuStack_d8;
    ppuStack_100 = param_4;
    func_0x00010bdf18a0();
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_release(ppuVar13);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if ((int)uVar12 == 0) {
      ppuVar13 = (undefined **)0x0;
      param_14 = uStack_c0;
      param_17 = uStack_c8;
      param_7 = lStack_b8;
      puVar2 = puStack_d0;
    }
    else {
      param_9 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      param_7 = lStack_b8;
      lVar6 = lStack_b8;
      ppuVar10 = ppuVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar13);
      if (lVar6 == 0) {
        ppuVar13 = (undefined **)0x1;
        param_14 = uStack_c0;
        param_17 = uStack_c8;
        puVar2 = puStack_d0;
      }
      else {
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc0000000;
        pcStack_98 = FUN_108006c74;
        puStack_90 = &UNK_1108e6248;
        uStack_88 = uStack_e4;
        ppuVar10 = &puStack_a8;
        lVar6 = param_13;
        func_0x00010bfb2040();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puStack_d0;
        if (lVar6 == 0) {
          ppuVar13 = (undefined **)0x0;
          param_14 = uStack_c0;
          param_17 = uStack_c8;
        }
        else {
          puVar4 = PTR_PTR_1126bcd38;
          _objc_opt_new(PTR_PTR_1126bcd38);
          func_0x00010c0ff5c0(lVar6);
          func_0x00010c1dd680(puVar4);
          puVar5 = PTR_PTR_1126bcd28;
          _objc_opt_new(PTR_PTR_1126bcd28);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lStack_b8;
          func_0x00010c0e00e0(lStack_b8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ea620(puVar5);
          _objc_release(lVar8);
          _objc_release(puVar7);
          func_0x00010c1857c0(puVar5);
          puVar7 = puVar5;
          func_0x00010c066480(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar7);
          param_17 = uStack_c8;
          uVar12 = uStack_c8;
          func_0x00010c12fa40(uStack_c8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(uVar12);
          param_14 = uStack_c0;
          uVar12 = uStack_c0;
          func_0x00010c12faa0();
          ppuVar10 = (undefined **)(ulong)((int)uVar12 + 1);
          func_0x00010c1ea720(param_14);
          param_7 = lStack_b8;
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(lVar6);
          ppuVar13 = (undefined **)0x1;
        }
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_6 = puVar3;
  }
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  lVar6 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_220;
  lStack_120 = param_13;
  pcStack_108 = FUN_108006c74;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = param_8;
  ppuStack_148 = param_9;
  puStack_140 = param_6;
  lStack_138 = param_7;
  ppuStack_130 = ppuVar13;
  uStack_128 = param_17;
  uStack_118 = param_14;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010bfd5ec0();
  if ((int)lVar8 == 0) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    puStack_220 = (undefined *)0x0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    lVar8 = param_2;
    func_0x00010bf5ac00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfa2d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar9;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar14 = *plStack_210;
      do {
        lVar15 = 0;
        do {
          if (*plStack_210 != lVar14) {
            _objc_enumerationMutation(lVar9);
          }
          iVar1 = (int)*(undefined8 *)(lStack_218 + lVar15 * 8);
          func_0x00010bf5ae20();
          if (iVar1 == *(int *)(lVar6 + 0x20)) {
            ppuVar13 = (undefined **)0x1;
            goto LAB_108006d88;
          }
          lVar15 = lVar15 + 1;
        } while (lVar8 != lVar15);
        lVar8 = lVar9;
        ppuVar11 = &puStack_220;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    ppuVar13 = (undefined **)0x0;
LAB_108006d88:
    _objc_release(lVar9);
    ppuVar10 = ppuVar11;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    _objc_retain(ppuVar10);
    func_0x00010c0f7fc0(uVar12);
    _objc_release(ppuVar10);
    _objc_release(ppuVar10);
    return ppuVar10;
  }
  return ppuVar13;
}



/* Entry: 108006c74; end: 108006dd3;  */

undefined1 * FUN_108006c74(long param_1,long param_2,undefined1 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfd5ec0();
  if ((int)lVar2 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar2 = param_2;
    func_0x00010bf5ac00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa2d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar3);
          }
          iVar1 = (int)*(undefined8 *)(lStack_118 + lVar8 * 8);
          func_0x00010bf5ae20();
          if (iVar1 == *(int *)(param_1 + 0x20)) {
            puVar5 = (undefined1 *)0x1;
            goto LAB_108006d88;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar3;
        puVar4 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    puVar5 = (undefined1 *)0x0;
LAB_108006d88:
    _objc_release(lVar3);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(param_3);
  _objc_release(param_3);
  return param_3;
}



/* Entry: 108006dd4; end: 108006f1b; -[SCPreviewGallerySaveSnapDocProvider purgeAllMediaForSnapDoc:] */

void FUN_108006dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108006e64;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 108006f1c; end: 108007023; +[SCPreviewGallerySaveSnapDocProvider _addRenderEffectsForBaseMediaWithRenderEffectScenes:effectScene:baseMediaRenderEffect:renderDAG:index:] */

void FUN_108006f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bcd38;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1dd680();
  puVar2 = PTR_PTR_1126bcd28;
  _objc_opt_new(PTR_PTR_1126bcd28);
  func_0x00010c1ea620();
  _objc_release(param_5);
  puVar3 = puVar2;
  func_0x00010c066480(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  uVar4 = param_6;
  func_0x00010c12fa40(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010befa120(uVar4,param_2,puVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c12faa0(param_3);
  func_0x00010c1ea720(param_3,param_2,(int)uVar4 + 1);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108007024; end: 10800723b; -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerForMediaAssets:creativeEditTags:snapDoc:snapDocKey:playback:playbackLayers:trackSegment:error:] */

bool FUN_108007024(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long *param_10)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_10 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10800723c;
    uStack_70 = 0x10800724c;
    uStack_68 = 0;
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _objc_retain(param_7);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_4);
      _objc_retain(param_8);
      _objc_retain(param_9);
      func_0x00010bf97ce0(param_3);
      _objc_release(param_9);
      _objc_release(param_8);
      _objc_release(param_4);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_7);
    }
    lVar2 = puStack_88[5];
    bVar1 = lVar2 == 0;
    if (lVar2 != 0) {
      _objc_retainAutorelease();
      *param_10 = lVar2;
    }
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10800723c; end: 108007253;  */

void FUN_10800723c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108007254; end: 10800752f;  */

void FUN_108007254(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = uVar5;
  func_0x00010c0ff5e0();
  func_0x00010c1dd6a0(uVar5);
  lVar3 = param_2;
  iStack_70 = (int)uVar4 + 1;
  func_0x00010c067fc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar3 < 4) {
    if ((lVar3 != 1) && (lVar3 != 2)) goto LAB_108007468;
  }
  else if ((lVar3 != 4) && ((lVar3 != 8 && (lVar3 != 0x11)))) {
LAB_108007468:
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110ecefb8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar4);
    goto LAB_108007418;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  _objc_retain(param_2);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  func_0x00010c0bc920(param_3);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
LAB_108007418:
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar4 = 8;
    __Block_object_dispose(&uStack_88,8);
    __Unwind_Resume();
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010bf0b0c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_2 + 0x60) + 8);
    uVar6 = *(undefined8 *)(lVar8 + 0x28);
    func_0x00010bdf1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1857c0(lVar3);
    _objc_release(uVar4);
    if (lVar3 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x48));
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c0ff660(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
    return;
  }
  return;
}



/* Entry: 108007530; end: 10800764b;  */

void FUN_108007530(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf0b0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010bdf1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1857c0(lVar1);
  _objc_release(uVar2);
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0ff660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10800764c; end: 10800764f;  */

void FUN_10800764c(void)

{
  return;
}



/* Entry: 108007650; end: 1080079a7; -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithSnapDoc:contentDuration:snapDocKey:baseMediaURL:playbackLayerIndex:error:] */

void FUN_108007650(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *unaff_x25;
  undefined8 uVar23;
  undefined1 auStack_298 [8];
  undefined1 uStack_290;
  undefined1 auStack_288 [8];
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_5;
  puVar14 = param_6;
  puVar4 = param_7;
  puVar19 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = (undefined8 *)param_1[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined8 *)0x22;
  puVar3 = puVar2;
  puVar7 = param_8;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar2 = param_6;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c08fa60();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x25 = param_1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110ecefd8;
      param_4 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined8 *)0x0;
      puVar8 = unaff_x25;
      puVar15 = param_4;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar9 = (undefined8 *)0x0;
      *param_8 = puVar5;
LAB_108007930:
      _objc_release(param_4);
      _objc_release(unaff_x25);
    }
    else {
      uStack_94 = (uint)param_7;
      unaff_x25 = (undefined8 *)param_1[6];
      puVar9 = puVar3;
      func_0x00010bfc5880();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      puVar7 = puVar9;
      puVar15 = param_8;
      func_0x00010c099740();
      _objc_release(puVar9);
      if (((ulong)unaff_x25 & 1) != 0) {
        unaff_x25 = (undefined8 *)PTR_PTR_1126b25d0;
        _objc_opt_new();
        puVar8 = param_6;
        func_0x00010c074fe0();
        if ((int)puVar8 == 0) {
          param_4 = param_6;
          FUN_1080694e0(param_6,0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined8 *)param_1[2];
          func_0x00010c269d40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = (undefined8 *)0x3;
        }
        else {
          uStack_88 = param_4[1];
          uStack_90 = *param_4;
          uStack_80 = param_4[2];
          param_4 = param_6;
          FUN_1080691fc(param_6,&uStack_90);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined8 *)param_1[2];
          func_0x00010c269d40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = (undefined8 *)0x2;
        }
        puVar9 = puVar4;
        puVar7 = param_3;
        puVar15 = puVar3;
        func_0x00010bef9ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010c1c4880(param_4);
        _objc_release(puVar9);
        _objc_release(puVar4);
        puVar4 = param_4;
        func_0x00010bf7ee20(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a5040();
        puVar11 = param_4;
        func_0x00010bf7ee20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe0640();
        _objc_release(puVar11);
        _objc_release(puVar4);
        puVar4 = param_4;
        func_0x00010bfd8fc0();
        if ((int)puVar4 == 0) {
          puVar9 = (undefined8 *)0x0;
          puVar4 = param_8;
          param_8 = puVar11;
        }
        else {
          func_0x00010c1c4020(unaff_x25);
          puVar8 = (undefined8 *)(ulong)uStack_94;
          func_0x00010c1dd680(unaff_x25);
          _objc_retain(unaff_x25);
          puVar4 = param_8;
          puVar9 = unaff_x25;
          param_8 = puVar11;
        }
        goto LAB_108007930;
      }
      puVar9 = (undefined8 *)0x0;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar11 = param_3;
  _objc_release();
  puVar22 = puVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  pcStack_a8 = FUN_1080079a8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = puVar9;
  puStack_d8 = puVar2;
  puStack_d0 = puVar3;
  puStack_c8 = param_6;
  puStack_c0 = param_5;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010c271c60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  puVar12 = (undefined8 *)0x0;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar2 = puVar6;
  func_0x00010c08fa60();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined8 *)0x0) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110eceff8;
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    puVar5 = (undefined *)puVar3;
    puVar8 = puVar11;
    puVar12 = puVar2;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar15 = puVar5;
    _objc_release(puVar2);
    _objc_release(puVar11);
    puVar22 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)PTR_PTR_1126b0cc0;
    _objc_opt_new();
    puVar2 = (undefined8 *)PTR_PTR_1126b37e0;
    _objc_opt_new();
    func_0x00010c1ba560();
    func_0x00010c1c73c0(puVar11);
    puVar22 = (undefined8 *)PTR_PTR_1126b25d0;
    _objc_opt_new();
    func_0x00010c1863a0();
    puVar8 = puVar7;
    func_0x00010c1dd680(puVar22);
    _objc_release(puVar2);
    _objc_release(puVar11);
    puVar3 = puVar7;
  }
  puVar7 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_108 = FUN_108007b6c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puVar15 = puVar14;
  puVar17 = puVar4;
  puStack_160 = param_1;
  puStack_158 = param_4;
  puStack_150 = param_8;
  puStack_148 = unaff_x25;
  puStack_140 = puVar9;
  puStack_138 = puVar2;
  puStack_130 = puVar11;
  puStack_128 = puVar3;
  puStack_120 = puVar22;
  puStack_118 = puVar6;
  ppuStack_110 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(uVar10);
  _objc_retain(puVar12);
  puVar2 = (undefined8 *)puVar7[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined8 *)0x22;
  puVar3 = puVar2;
  puVar11 = puVar4;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    puVar2 = puVar12;
    func_0x00010bf1d1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c08fa60();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar9 == (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_188 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_180 = &PTR____CFConstantStringClassReference_110ecf038;
LAB_108007d90:
      param_4 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined8 *)0x0;
      puVar14 = puVar6;
      puVar9 = puVar7;
      puVar13 = param_4;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar4 = puVar14;
      _objc_release(param_4);
      _objc_release(puVar7);
      puVar22 = (undefined8 *)0x0;
    }
    else {
      puVar9 = puVar3;
      func_0x00010bfc5880(puVar3);
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar2;
      func_0x00010c14e020();
      _objc_release(puVar9);
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
      if (((ulong)param_1 & 1) == 0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_178 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_170 = &PTR____CFConstantStringClassReference_110ecf018;
        goto LAB_108007d90;
      }
      param_4 = (undefined8 *)PTR_PTR_1126b25c8;
      _objc_opt_new();
      func_0x00010c16a960();
      puVar7 = (undefined8 *)puVar7[2];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = (undefined8 *)0xb;
      puVar22 = puVar7;
      puVar11 = puVar8;
      puVar13 = puVar3;
      func_0x00010bef9ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar22;
      func_0x00010c1c4880(param_4);
      _objc_release(puVar22);
      _objc_release(puVar7);
      puVar22 = param_4;
      func_0x00010bfd8fc0();
      if ((int)puVar22 == 0) {
        puVar22 = (undefined8 *)0x0;
        puVar17 = puVar4;
      }
      else {
        puVar22 = (undefined8 *)PTR_PTR_1126b25d0;
        _objc_opt_new();
        func_0x00010c1c4020();
        puVar9 = puVar14;
        func_0x00010c1dd680(puVar22);
        puVar17 = puVar4;
      }
      _objc_release(param_4);
      puVar6 = puVar14;
    }
    _objc_release(puVar2);
    puVar14 = puVar6;
  }
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(uVar10);
  puVar4 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_198 = FUN_108007e54;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar13;
  puVar16 = puVar15;
  puVar18 = puVar17;
  puVar21 = puVar19;
  puStack_1f0 = param_1;
  puStack_1e8 = param_4;
  puStack_1e0 = puVar7;
  puStack_1d8 = puVar14;
  puStack_1d0 = puVar22;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  puStack_1b8 = puVar12;
  uStack_1b0 = uVar10;
  puStack_1a8 = puVar8;
  ppuStack_1a0 = &ppuStack_110;
  _objc_retain(puVar9);
  uVar20 = SUB81(puVar21,0);
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  puVar8 = (undefined8 *)puVar4[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined8 *)0x22;
  puVar2 = puVar8;
  puVar14 = puVar19;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar3 = puVar17;
  if (puVar2 == (undefined8 *)0x0) {
LAB_1080080ac:
    puVar19 = puVar18;
    puVar22 = (undefined8 *)0x0;
  }
  else {
    puVar7 = puVar13;
    func_0x00010c08fa60();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar7 == (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_218 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_210 = &PTR____CFConstantStringClassReference_110ecf078;
LAB_108008064:
      puVar15 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = (undefined8 *)0x0;
      puVar22 = puVar3;
      puVar7 = puVar4;
      puVar6 = puVar15;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar19 = puVar22;
      _objc_release(puVar15);
      _objc_release(puVar4);
      goto LAB_1080080ac;
    }
    puVar8 = puVar2;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar13;
    func_0x00010c14e020();
    _objc_release(puVar8);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (((ulong)param_1 & 1) == 0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_208 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_200 = &PTR____CFConstantStringClassReference_110ecf058;
      goto LAB_108008064;
    }
    puVar8 = (undefined8 *)PTR_PTR_1126b25c8;
    _objc_opt_new();
    func_0x00010c16a960();
    puVar4 = (undefined8 *)puVar4[2];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)0xb;
    puVar3 = puVar4;
    puVar14 = puVar9;
    puVar6 = puVar2;
    func_0x00010bef9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c1c4880(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar8;
    func_0x00010bfd8fc0();
    if ((int)puVar3 == 0) {
      puVar22 = (undefined8 *)0x0;
    }
    else {
      puVar22 = (undefined8 *)PTR_PTR_1126b25d0;
      _objc_opt_new();
      func_0x00010c1c4020();
      puVar7 = puVar17;
      func_0x00010c1dd680(puVar22);
    }
    _objc_release(puVar8);
    puVar3 = puVar17;
  }
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar11);
  puVar12 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    ppuVar1 = ppuStack_210;
    uVar10 = uStack_218;
    pcStack_228 = FUN_108008120;
    puStack_280 = param_1;
    puStack_278 = puVar8;
    puStack_270 = puVar15;
    puStack_268 = puVar4;
    puStack_260 = puVar3;
    puStack_258 = puVar22;
    puStack_250 = puVar2;
    puStack_248 = puVar13;
    puStack_240 = puVar11;
    puStack_238 = puVar9;
    ppuStack_230 = &ppuStack_1a0;
    _objc_retain(puVar7);
    _objc_retain(puVar14);
    _objc_retain(puVar6);
    _objc_retain(puVar16);
    _objc_retain(puVar19);
    _objc_retain(uStack_220);
    _objc_retain(uVar10);
    _objc_retain(ppuVar1);
    _objc_initWeak(auStack_288,puVar12);
    uVar23 = puVar12[1];
    _objc_copyWeak(auStack_298,auStack_288);
    _objc_retain(puVar7);
    _objc_retain(puVar6);
    _objc_retain(ppuVar1);
    _objc_retain(puVar14);
    _objc_retain(puVar16);
    uStack_290 = uVar20;
    _objc_retain(puVar19);
    _objc_retain(uStack_220);
    _objc_retain(uVar10);
    func_0x00010c0f7fc0(uVar23);
    _objc_release(uVar10);
    _objc_release(uStack_220);
    _objc_release(puVar19);
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(ppuVar1);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_298);
    _objc_destroyWeak(auStack_288);
    _objc_release(ppuVar1);
    _objc_release(uVar10);
    _objc_release(uStack_220);
    _objc_release(puVar19);
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar7);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 1080079a8; end: 108007b6b; -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithLegacySOJUEdits:playbackLayerIndex:error:] */

void FUN_1080079a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  undefined *puVar20;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar21;
  undefined1 auStack_1f8 [8];
  undefined1 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c271c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  puVar13 = (undefined8 *)0x0;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar6;
  func_0x00010c08fa60();
  puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined8 *)0x0) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110eceff8;
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    param_4 = param_1;
    puVar13 = puVar2;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_5 = puVar20;
    _objc_release(puVar2);
    _objc_release(param_1);
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b0cc0;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126b37e0;
    _objc_opt_new();
    func_0x00010c1ba560();
    func_0x00010c1c73c0(puVar3);
    puVar20 = PTR_PTR_1126b25d0;
    _objc_opt_new();
    func_0x00010c1863a0();
    func_0x00010c1dd680(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_68 = FUN_108007b6c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar13;
  puVar16 = param_6;
  puVar7 = param_7;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(uVar10);
  _objc_retain(puVar13);
  puVar5 = (undefined8 *)puVar6[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined8 *)0x22;
  puVar2 = puVar5;
  puVar11 = param_7;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar2 == (undefined8 *)0x0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar13;
    func_0x00010bf1d1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c08fa60();
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar9 == (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110ecf038;
LAB_108007d90:
      unaff_x27 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined8 *)0x0;
      puVar12 = puVar8;
      puVar9 = puVar6;
      puVar14 = unaff_x27;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = puVar12;
      _objc_release(unaff_x27);
      _objc_release(puVar6);
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar2;
      func_0x00010bfc5880(puVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = puVar5;
      func_0x00010c14e020();
      _objc_release(puVar9);
      puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
      if (((ulong)unaff_x28 & 1) == 0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_d8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_d0 = &PTR____CFConstantStringClassReference_110ecf018;
        goto LAB_108007d90;
      }
      unaff_x27 = (undefined8 *)PTR_PTR_1126b25c8;
      _objc_opt_new();
      func_0x00010c16a960();
      puVar6 = (undefined8 *)puVar6[2];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = (undefined8 *)0xb;
      puVar7 = puVar6;
      puVar11 = param_4;
      puVar14 = puVar2;
      func_0x00010bef9ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c1c4880(unaff_x27);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar7 = unaff_x27;
      func_0x00010bfd8fc0();
      if ((int)puVar7 == 0) {
        puVar20 = (undefined *)0x0;
        puVar7 = param_7;
      }
      else {
        puVar20 = PTR_PTR_1126b25d0;
        _objc_opt_new();
        func_0x00010c1c4020();
        puVar9 = param_6;
        func_0x00010c1dd680(puVar20);
        puVar7 = param_7;
      }
      _objc_release(unaff_x27);
      puVar8 = param_6;
    }
    _objc_release(puVar5);
    param_6 = puVar8;
  }
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar10);
  puVar8 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_f8 = FUN_108007e54;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar14;
  puVar17 = puVar16;
  puVar18 = puVar7;
  puVar12 = param_8;
  puStack_150 = unaff_x28;
  puStack_148 = unaff_x27;
  puStack_140 = puVar6;
  puStack_138 = param_6;
  puStack_130 = puVar20;
  puStack_128 = puVar5;
  puStack_120 = puVar2;
  puStack_118 = puVar13;
  uStack_110 = uVar10;
  puStack_108 = param_4;
  ppuStack_100 = &puStack_70;
  _objc_retain(puVar9);
  uVar19 = SUB81(puVar12,0);
  _objc_retain(puVar11);
  _objc_retain(puVar14);
  puVar13 = (undefined8 *)puVar8[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined8 *)0x22;
  puVar2 = puVar13;
  puVar12 = param_8;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar6 = puVar7;
  if (puVar2 == (undefined8 *)0x0) {
LAB_1080080ac:
    param_8 = puVar18;
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar14;
    func_0x00010c08fa60();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar5 == (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_178 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110ecf078;
LAB_108008064:
      puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined8 *)0x0;
      puVar7 = puVar6;
      puVar5 = puVar8;
      puVar15 = puVar16;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_8 = puVar7;
      _objc_release(puVar16);
      _objc_release(puVar8);
      goto LAB_1080080ac;
    }
    puVar13 = puVar2;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = puVar14;
    func_0x00010c14e020();
    _objc_release(puVar13);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (((ulong)unaff_x28 & 1) == 0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_168 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_160 = &PTR____CFConstantStringClassReference_110ecf058;
      goto LAB_108008064;
    }
    puVar13 = (undefined8 *)PTR_PTR_1126b25c8;
    _objc_opt_new();
    func_0x00010c16a960();
    puVar8 = (undefined8 *)puVar8[2];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined8 *)0xb;
    puVar6 = puVar8;
    puVar12 = puVar9;
    puVar15 = puVar2;
    func_0x00010bef9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c1c4880(puVar13);
    _objc_release(puVar6);
    _objc_release(puVar8);
    puVar6 = puVar13;
    func_0x00010bfd8fc0();
    if ((int)puVar6 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126b25d0;
      _objc_opt_new();
      func_0x00010c1c4020();
      puVar5 = puVar7;
      func_0x00010c1dd680(puVar20);
    }
    _objc_release(puVar13);
    puVar6 = puVar7;
  }
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar11);
  puVar7 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    ppuVar1 = ppuStack_170;
    uVar10 = uStack_178;
    pcStack_188 = FUN_108008120;
    puStack_1e0 = unaff_x28;
    puStack_1d8 = puVar13;
    puStack_1d0 = puVar16;
    puStack_1c8 = puVar8;
    puStack_1c0 = puVar6;
    puStack_1b8 = puVar20;
    puStack_1b0 = puVar2;
    puStack_1a8 = puVar14;
    puStack_1a0 = puVar11;
    puStack_198 = puVar9;
    ppuStack_190 = &ppuStack_100;
    _objc_retain(puVar5);
    _objc_retain(puVar12);
    _objc_retain(puVar15);
    _objc_retain(puVar17);
    _objc_retain(param_8);
    _objc_retain(uStack_180);
    _objc_retain(uVar10);
    _objc_retain(ppuVar1);
    _objc_initWeak(auStack_1e8,puVar7);
    uVar21 = puVar7[1];
    _objc_copyWeak(auStack_1f8,auStack_1e8);
    _objc_retain(puVar5);
    _objc_retain(puVar15);
    _objc_retain(ppuVar1);
    _objc_retain(puVar12);
    _objc_retain(puVar17);
    uStack_1f0 = uVar19;
    _objc_retain(param_8);
    _objc_retain(uStack_180);
    _objc_retain(uVar10);
    func_0x00010c0f7fc0(uVar21);
    _objc_release(uVar10);
    _objc_release(uStack_180);
    _objc_release(param_8);
    _objc_release(puVar17);
    _objc_release(puVar12);
    _objc_release(ppuVar1);
    _objc_release(puVar15);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_1f8);
    _objc_destroyWeak(auStack_1e8);
    _objc_release(ppuVar1);
    _objc_release(uVar10);
    _objc_release(uStack_180);
    _objc_release(param_8);
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(puVar12);
    _objc_release(puVar5);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 108007b6c; end: 108007e53; -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithSnapDoc:snapDocKey:overlayFormat:playbackLayerIndex:error:] */

void FUN_108007b6c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined *puVar18;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar19;
  undefined1 auStack_198 [8];
  undefined1 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_5;
  puVar14 = param_6;
  puVar5 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined8 *)param_1[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined8 *)0x22;
  puVar4 = puVar3;
  puVar10 = param_7;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar3 = param_5;
    func_0x00010bf1d1a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c08fa60();
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar8 == (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110ecf038;
LAB_108007d90:
      unaff_x27 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined8 *)0x0;
      puVar6 = puVar7;
      puVar8 = param_1;
      puVar12 = unaff_x27;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = puVar6;
      _objc_release(unaff_x27);
      _objc_release(param_1);
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar4;
      func_0x00010bfc5880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = puVar3;
      func_0x00010c14e020();
      _objc_release(puVar8);
      puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
      if (((ulong)unaff_x28 & 1) == 0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_70 = &PTR____CFConstantStringClassReference_110ecf018;
        goto LAB_108007d90;
      }
      unaff_x27 = (undefined8 *)PTR_PTR_1126b25c8;
      _objc_opt_new();
      func_0x00010c16a960();
      param_1 = (undefined8 *)param_1[2];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = (undefined8 *)0xb;
      puVar5 = param_1;
      puVar10 = param_3;
      puVar12 = puVar4;
      func_0x00010bef9ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c1c4880(unaff_x27);
      _objc_release(puVar5);
      _objc_release(param_1);
      puVar5 = unaff_x27;
      func_0x00010bfd8fc0();
      if ((int)puVar5 == 0) {
        puVar18 = (undefined *)0x0;
        puVar5 = param_7;
      }
      else {
        puVar18 = PTR_PTR_1126b25d0;
        _objc_opt_new();
        func_0x00010c1c4020();
        puVar8 = param_6;
        func_0x00010c1dd680(puVar18);
        puVar5 = param_7;
      }
      _objc_release(unaff_x27);
      puVar7 = param_6;
    }
    _objc_release(puVar3);
    param_6 = puVar7;
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_98 = FUN_108007e54;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  puVar15 = puVar14;
  puVar16 = puVar5;
  puVar6 = param_8;
  puStack_f0 = unaff_x28;
  puStack_e8 = unaff_x27;
  puStack_e0 = param_1;
  puStack_d8 = param_6;
  puStack_d0 = puVar18;
  puStack_c8 = puVar3;
  puStack_c0 = puVar4;
  puStack_b8 = param_5;
  uStack_b0 = param_4;
  puStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  uVar17 = SUB81(puVar6,0);
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  puVar6 = (undefined8 *)puVar7[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined8 *)0x22;
  puVar3 = puVar6;
  puVar11 = param_8;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar4 = puVar5;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1080080ac:
    param_8 = puVar16;
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar12;
    func_0x00010c08fa60();
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar9 == (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_110 = &PTR____CFConstantStringClassReference_110ecf078;
LAB_108008064:
      puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined8 *)0x0;
      puVar5 = puVar4;
      puVar9 = puVar7;
      puVar13 = puVar14;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_8 = puVar5;
      _objc_release(puVar14);
      _objc_release(puVar7);
      goto LAB_1080080ac;
    }
    puVar6 = puVar3;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = puVar12;
    func_0x00010c14e020();
    _objc_release(puVar6);
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (((ulong)unaff_x28 & 1) == 0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110ecf058;
      goto LAB_108008064;
    }
    puVar6 = (undefined8 *)PTR_PTR_1126b25c8;
    _objc_opt_new();
    func_0x00010c16a960();
    puVar7 = (undefined8 *)puVar7[2];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = (undefined8 *)0xb;
    puVar4 = puVar7;
    puVar11 = puVar8;
    puVar13 = puVar3;
    func_0x00010bef9ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c1c4880(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar7);
    puVar4 = puVar6;
    func_0x00010bfd8fc0();
    if ((int)puVar4 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = PTR_PTR_1126b25d0;
      _objc_opt_new();
      func_0x00010c1c4020();
      puVar9 = puVar5;
      func_0x00010c1dd680(puVar18);
    }
    _objc_release(puVar6);
    puVar4 = puVar5;
  }
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar10);
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    ppuVar2 = ppuStack_110;
    uVar1 = uStack_118;
    pcStack_128 = FUN_108008120;
    puStack_180 = unaff_x28;
    puStack_178 = puVar6;
    puStack_170 = puVar14;
    puStack_168 = puVar7;
    puStack_160 = puVar4;
    puStack_158 = puVar18;
    puStack_150 = puVar3;
    puStack_148 = puVar12;
    puStack_140 = puVar10;
    puStack_138 = puVar8;
    ppuStack_130 = &puStack_a0;
    _objc_retain(puVar9);
    _objc_retain(puVar11);
    _objc_retain(puVar13);
    _objc_retain(puVar15);
    _objc_retain(param_8);
    _objc_retain(uStack_120);
    _objc_retain(uVar1);
    _objc_retain(ppuVar2);
    _objc_initWeak(auStack_188,puVar5);
    uVar19 = puVar5[1];
    _objc_copyWeak(auStack_198,auStack_188);
    _objc_retain(puVar9);
    _objc_retain(puVar13);
    _objc_retain(ppuVar2);
    _objc_retain(puVar11);
    _objc_retain(puVar15);
    uStack_190 = uVar17;
    _objc_retain(param_8);
    _objc_retain(uStack_120);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar19);
    _objc_release(uVar1);
    _objc_release(uStack_120);
    _objc_release(param_8);
    _objc_release(puVar15);
    _objc_release(puVar11);
    _objc_release(ppuVar2);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_198);
    _objc_destroyWeak(auStack_188);
    _objc_release(ppuVar2);
    _objc_release(uVar1);
    _objc_release(uStack_120);
    _objc_release(param_8);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar9);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108007e54; end: 10800811f; -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithSnapDoc:snapDocKey:assetData:assetType:playbackLayerIndex:error:] */

void FUN_108007e54(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  undefined *puVar13;
  undefined *unaff_x28;
  undefined8 uVar14;
  undefined1 auStack_108 [8];
  undefined1 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  puVar11 = param_6;
  puVar8 = param_7;
  puVar6 = param_8;
  _objc_retain(param_3);
  uVar12 = SUB81(puVar6,0);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined *)param_1[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined8 *)0x22;
  puVar4 = puVar3;
  puVar10 = param_8;
  func_0x00010bf55620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar6 = param_7;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = param_5;
    func_0x00010c08fa60();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar5 == (undefined *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110ecf078;
    }
    else {
      puVar3 = puVar4;
      func_0x00010bfc5880();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = param_5;
      func_0x00010c14e020();
      _objc_release(puVar3);
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
      if (((ulong)unaff_x28 & 1) != 0) {
        puVar3 = PTR_PTR_1126b25c8;
        _objc_opt_new();
        func_0x00010c16a960();
        param_1 = (undefined8 *)param_1[2];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined *)0xb;
        puVar6 = param_1;
        puVar10 = param_3;
        puVar5 = puVar4;
        func_0x00010bef9ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010c1c4880(puVar3);
        _objc_release(puVar6);
        _objc_release(param_1);
        puVar13 = puVar3;
        func_0x00010bfd8fc0();
        if ((int)puVar13 == 0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar13 = PTR_PTR_1126b25d0;
          _objc_opt_new();
          func_0x00010c1c4020();
          puVar9 = param_7;
          func_0x00010c1dd680(puVar13);
        }
        _objc_release(puVar3);
        puVar6 = param_7;
        goto LAB_1080080b0;
      }
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110ecf058;
    }
    param_6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)0x0;
    puVar7 = puVar6;
    puVar9 = param_1;
    puVar5 = param_6;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_8 = puVar7;
    _objc_release(param_6);
    _objc_release(param_1);
  }
  param_8 = puVar8;
  puVar13 = (undefined *)0x0;
LAB_1080080b0:
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = ppuStack_80;
  uVar1 = uStack_88;
  pcStack_98 = FUN_108008120;
  puStack_f0 = unaff_x28;
  puStack_e8 = puVar3;
  puStack_e0 = param_6;
  puStack_d8 = param_1;
  puStack_d0 = puVar6;
  puStack_c8 = puVar13;
  puStack_c0 = puVar4;
  puStack_b8 = param_5;
  uStack_b0 = param_4;
  puStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  _objc_retain(param_8);
  _objc_retain(uStack_90);
  _objc_retain(uVar1);
  _objc_retain(ppuVar2);
  _objc_initWeak(auStack_f8,puVar8);
  uVar14 = puVar8[1];
  _objc_copyWeak(auStack_108,auStack_f8);
  _objc_retain(puVar9);
  _objc_retain(puVar5);
  _objc_retain(ppuVar2);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  uStack_100 = uVar12;
  _objc_retain(param_8);
  _objc_retain(uStack_90);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar14);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(ppuVar2);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_f8);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 108008120; end: 108008333; -[SCPreviewGallerySaveSnapDocProvider _createSnapDocWithLocalSOJUEdits:localOverlayFormats:globalSOJUEdits:globalOverlayFormat:createTimeUtc:isInfiniteDuration:location:mediaOrigin:completion:] */

void FUN_108008120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_11);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uStack_70 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108008334; end: 10800898f;  */

void FUN_108008334(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined *puStack_d8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar2 = (undefined *)(param_1 + 0x60);
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(ulong *)(puVar2 + 0x20);
    func_0x00010c09dea0();
    if (uVar3 != 0xffffffffffffffff) {
      uVar17 = 0;
      do {
        if (uVar17 < uVar3) {
          puStack_d8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          if (puStack_d8 == (undefined *)0x0) goto LAB_108008428;
          puVar15 = PTR_PTR_1126affe8;
          func_0x00010c09e180(PTR_PTR_1126affe8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6c5c0(*(undefined8 *)(puVar2 + 0x20));
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar4 = *(ulong *)(param_1 + 0x20);
          func_0x00010bf529e0();
          if (uVar4 <= uVar17) {
            bVar12 = false;
            uVar4 = 0;
            goto LAB_108008468;
          }
          uVar4 = *(ulong *)(param_1 + 0x20);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          bVar12 = false;
        }
        else {
LAB_108008428:
          puVar15 = PTR_PTR_1126affe8;
          func_0x00010bfccec0(PTR_PTR_1126affe8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6c5c0(*(undefined8 *)(puVar2 + 0x20));
          _objc_unsafeClaimAutoreleasedReturnValue();
          puStack_d8 = (undefined *)0x0;
          uVar4 = *(ulong *)(param_1 + 0x28);
          bVar12 = true;
LAB_108008468:
          _objc_retain(uVar4);
        }
        puVar5 = PTR_PTR_1126bcdd8;
        _objc_opt_class(PTR_PTR_1126bcdd8);
        uVar6 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar5);
        uVar1 = uVar4;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        if (uVar1 != 0) {
          uVar6 = uVar4;
          func_0x00010c271c60(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
          func_0x00010c082de0();
          if (((ulong)puVar5 & 1) == 0) {
            lVar18 = *(long *)(param_1 + 0x58);
            puVar5 = puVar2;
            func_0x00010be0b340(puVar2);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar18 + 0x10))(lVar18,0,0,puVar5);
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x00010bf64b60();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010c08fa60();
            if (puVar7 != (undefined *)0x0) {
              puVar7 = PTR_PTR_1126b37e0;
              _objc_opt_new(PTR_PTR_1126b37e0);
              func_0x00010c1ba560();
              puVar8 = PTR_PTR_1126b0cc0;
              _objc_opt_new(PTR_PTR_1126b0cc0);
              func_0x00010c1c73c0();
              puVar9 = PTR_PTR_1126b25d0;
              _objc_opt_new(PTR_PTR_1126b25d0);
              func_0x00010c1863a0();
              func_0x00010befa9a0(*(undefined8 *)(puVar2 + 0x20));
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar5);
              _objc_release(uVar6);
              goto LAB_10800857c;
            }
            lVar18 = *(long *)(param_1 + 0x58);
            puVar7 = puVar2;
            func_0x00010be0b340(puVar2);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar18 + 0x10))(lVar18,0,0,puVar7);
            _objc_release(puVar7);
          }
          _objc_release(puVar5);
          _objc_release(uVar6);
LAB_10800893c:
          _objc_release(uVar4);
          _objc_release(puVar15);
          goto LAB_10800894c;
        }
LAB_10800857c:
        if (bVar12) {
          lVar18 = *(long *)(param_1 + 0x38);
LAB_1080085c0:
          _objc_retain(lVar18);
        }
        else {
          uVar4 = *(ulong *)(param_1 + 0x30);
          func_0x00010bf529e0();
          if (uVar4 <= uVar17) {
            lVar18 = 0;
            goto LAB_1080085c0;
          }
          lVar18 = *(long *)(param_1 + 0x30);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar10 = lVar18;
        func_0x00010010fab4(lVar18,PTR_DAT_1126a5938);
        lVar14 = lVar18;
        if ((int)lVar10 == 0) {
          lVar14 = 0;
        }
        _objc_retain(lVar14);
        _objc_release(lVar18);
        if (lVar14 != 0) {
          lVar10 = lVar18;
          func_0x00010bf1d1a0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          if (lVar11 == 0) {
            lVar14 = *(long *)(param_1 + 0x58);
            puVar5 = puVar2;
            func_0x00010be0b340(puVar2);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar14 + 0x10))(lVar14,0,0,puVar5);
            _objc_release(puVar5);
            _objc_release(lVar10);
            _objc_release(lVar18);
            uVar4 = uVar1;
            goto LAB_10800893c;
          }
          puVar5 = PTR_PTR_1126b25c8;
          _objc_alloc_init(PTR_PTR_1126b25c8);
          func_0x00010c16a960();
          uVar16 = *(undefined8 *)(puVar2 + 0x20);
          puVar7 = PTR_PTR_1126b3080;
          func_0x00010bf64b00(PTR_PTR_1126b3080);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c265b80(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c4880(puVar5);
          _objc_release(uVar16);
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126b25d0;
          _objc_opt_new(PTR_PTR_1126b25d0);
          func_0x00010c1c4020();
          func_0x00010befa9a0(*(undefined8 *)(puVar2 + 0x20));
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar5);
          _objc_release(lVar10);
        }
        _objc_release(lVar14);
        _objc_release(uVar1);
        _objc_release(puVar15);
        _objc_release(puStack_d8);
        uVar17 = uVar17 + 1;
      } while (uVar3 + 1 != uVar17);
    }
    uVar3 = (ulong)*(byte *)(param_1 + 0x68);
    FUN_108068fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500(*(undefined8 *)(puVar2 + 0x20));
    _objc_release(uVar3);
    func_0x00010c185560(*(undefined8 *)(puVar2 + 0x20));
    func_0x00010c1bf6c0(*(undefined8 *)(puVar2 + 0x20));
    uVar16 = *(undefined8 *)(puVar2 + 0x18);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ce40();
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(puVar2 + 0x20);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108008a54;
    puStack_88 = &UNK_11084e070;
    puVar15 = *(undefined **)(param_1 + 0x50);
    puStack_80 = puVar2;
    _objc_retain(puVar15);
    puStack_78 = puVar15;
    func_0x00010c28a040(uVar16);
    uVar16 = *(undefined8 *)(puVar2 + 0x20);
    func_0x00010c296780(uVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,param_1 + 0x60);
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar13);
    func_0x00010c297260(uVar16);
    _objc_release(uVar16);
    _objc_release(uVar13);
    _objc_destroyWeak(auStack_a8);
    puStack_d8 = puStack_78;
LAB_10800894c:
    _objc_release(puStack_d8);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 108008990; end: 108008a53;  */

bool FUN_108008990(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08eee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf0b760();
    bVar1 = (int)lVar6 == 6;
    _objc_release(lVar5);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108008a54; end: 108008aa3;  */

void FUN_108008a54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bedb480(uVar1);
  func_0x00010bedb5c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108008aa4; end: 108008bff;  */

void FUN_108008aa4(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_3 == 0) && (uVar2 = param_2, func_0x00010bf1f3c0(), (uVar2 & 1) != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c0c5200(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      func_0x00010bf97ce0(uVar4);
      _objc_release(uVar4);
      lVar5 = *(long *)(param_1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c23fe00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,uVar4,puVar3,0);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(puVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108008c00; end: 108008c6b;  */

void FUN_108008c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcf20;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c4aa0();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108008c6c; end: 108008fab; -[SCPreviewGallerySaveSnapDocProvider _updateMediaOriginForSnapDoc:mediaOrigin:] */

void FUN_108008c6c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  bool bVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  long lVar22;
  undefined **unaff_x24;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined **ppuVar26;
  undefined8 uStack_6b8;
  undefined *puStack_6b0;
  long lStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined1 **ppuStack_670;
  code *pcStack_668;
  undefined *puStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  long lStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  ulong *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [128];
  undefined1 auStack_420 [128];
  undefined1 auStack_3a0 [128];
  undefined1 auStack_320 [128];
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar26 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = param_3;
  _objc_retain(param_4);
  ppuVar19 = param_3;
  if ((param_3 != (undefined **)0x0) && (param_4 != (undefined **)0x0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = param_3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    ppuVar18 = ppuVar19;
    func_0x00010bf52a60();
    if (ppuVar18 != (undefined **)0x0) {
      lVar24 = *plStack_120;
      do {
        ppuVar26 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar24) {
            _objc_enumerationMutation(ppuVar19);
          }
          unaff_x22 = *(undefined ***)(lStack_128 + (long)ppuVar26 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010bf0b760();
          _objc_release(unaff_x23);
          if ((int)unaff_x24 == 5) {
            ppuVar3 = param_4;
            func_0x00010c0c5b40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            unaff_x23 = param_4;
            if (ppuVar3 == (undefined **)0x0) {
              ppuVar3 = param_4;
              func_0x00010c0c5b80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar3 == (undefined **)0x0) {
                ppuVar3 = param_4;
                func_0x00010c0c5be0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar3 == (undefined **)0x0) {
                  ppuVar3 = param_4;
                  func_0x00010c0c5c00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar3 == (undefined **)0x0) {
                    ppuVar3 = param_4;
                    func_0x00010c0c5b20();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (ppuVar3 == (undefined **)0x0) {
                      ppuVar3 = param_4;
                      func_0x00010bf8a6c0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      unaff_x23 = (undefined **)0x0;
                      if (ppuVar3 == (undefined **)0x0) goto LAB_108008f38;
                      unaff_x23 = param_4;
                      func_0x00010bf8a6c0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c191d40();
                    }
                    else {
                      func_0x00010c0c5b20();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1c4ce0();
                    }
                  }
                  else {
                    func_0x00010c0c5c00();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1c4da0();
                  }
                }
                else {
                  func_0x00010c0c5be0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1c4d80();
                }
              }
              else {
                func_0x00010c0c5b80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1c4d40();
              }
            }
            else {
              func_0x00010c0c5b40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c4d00();
            }
            _objc_release(unaff_x22);
            _objc_release(unaff_x23);
          }
LAB_108008f38:
          ppuVar26 = (undefined **)((long)ppuVar26 + 1);
        } while (ppuVar18 != ppuVar26);
        ppuVar18 = ppuVar19;
        ppuVar26 = &puStack_130;
        func_0x00010bf52a60();
      } while (ppuVar18 != (undefined **)0x0);
    }
    _objc_release(ppuVar19);
    ppuVar18 = ppuVar26;
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108008fac;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = ppuVar18;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar18);
  if (ppuVar18 != (undefined **)0x0) {
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    lStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    plStack_4d0 = (long *)0x0;
    ppuStack_650 = ppuVar18;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar18;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar19;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar26;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar26);
    _objc_release(ppuVar19);
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar3;
    func_0x00010bf52a60(ppuVar3,param_2,&uStack_4e0,auStack_220,0x10);
    if (ppuVar18 != (undefined **)0x0) {
      lVar24 = *plStack_4d0;
      do {
        ppuVar19 = (undefined **)0x0;
        do {
          if (*plStack_4d0 != lVar24) {
            _objc_enumerationMutation(ppuVar3);
          }
          unaff_x23 = *(undefined ***)(lStack_4d8 + (long)ppuVar19 * 8);
          ppuVar26 = unaff_x23;
          func_0x00010c074780();
          if ((((ulong)ppuVar26 & 1) == 0) &&
             (ppuVar26 = unaff_x23, func_0x00010c278a40(), (int)ppuVar26 == 1)) {
            ppuStack_658 = unaff_x23;
            _objc_retain(unaff_x23);
            goto LAB_1080090f8;
          }
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (ppuVar18 != ppuVar19);
        ppuVar18 = ppuVar3;
        func_0x00010bf52a60(ppuVar3,param_2,&uStack_4e0,auStack_220,0x10);
      } while (ppuVar18 != (undefined **)0x0);
    }
    ppuStack_658 = (undefined **)0x0;
LAB_1080090f8:
    _objc_release(ppuVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    plStack_510 = (long *)0x0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    ppuVar18 = ppuStack_650;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar18;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar19;
    func_0x00010bf52a60(ppuVar19,param_2,&uStack_520,auStack_2a0,0x10);
    if (ppuVar18 != (undefined **)0x0) {
      lVar24 = *plStack_510;
      do {
        ppuVar26 = (undefined **)0x0;
        do {
          if (*plStack_510 != lVar24) {
            _objc_enumerationMutation(ppuVar19);
          }
          uVar17 = *(undefined8 *)(lStack_518 + (long)ppuVar26 * 8);
          uVar16 = uVar17;
          func_0x00010c0ff5c0(uVar17);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4,param_2,uVar17,puVar5);
          _objc_release(puVar5);
          ppuVar26 = (undefined **)((long)ppuVar26 + 1);
        } while (ppuVar18 != ppuVar26);
        ppuVar18 = ppuVar19;
        func_0x00010bf52a60(ppuVar19,param_2,&uStack_520,auStack_2a0,0x10);
        unaff_x23 = (undefined **)0x0;
      } while (ppuVar18 != (undefined **)0x0);
    }
    _objc_release(ppuVar19);
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    lStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    plStack_550 = (long *)0x0;
    ppuVar18 = ppuStack_658;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar18;
    func_0x00010bf52a60();
    ppuStack_638 = ppuVar19;
    if (ppuVar19 == (undefined **)0x0) {
      _objc_release(ppuVar18);
      unaff_x22 = (undefined **)0x1;
    }
    else {
      ppuStack_628 = (undefined **)((ulong)ppuStack_628 & 0xffffffff00000000);
      bVar1 = false;
      lVar24 = 0;
      lStack_640 = *plStack_550;
      ppuStack_648 = ppuVar18;
      do {
        ppuVar18 = (undefined **)0x0;
        do {
          if (*plStack_550 != lStack_640) {
            _objc_enumerationMutation(ppuStack_648);
          }
          uVar23 = *(ulong *)(lStack_558 + (long)ppuVar18 * 8);
          uVar25 = uVar23;
          ppuStack_630 = ppuVar18;
          func_0x00010c0ff680();
          if (uVar25 != 0) {
            uVar25 = 0;
            do {
              uVar6 = uVar23;
              func_0x00010c0ff660(uVar23);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c296de0();
              _objc_release(uVar6);
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar4;
              func_0x00010c0e00e0(puVar4,param_2,puVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              puVar5 = puVar8;
              func_0x00010c08c3a0();
              if ((int)puVar5 == 4) {
                lVar24 = lVar24 + 1;
              }
              else {
                puVar5 = puVar8;
                func_0x00010c08c3a0();
                if ((int)puVar5 == 1) {
                  puVar5 = puVar8;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar5;
                  func_0x00010bf0b760();
                  if ((int)puVar9 == 5) {
                    puVar9 = puVar8;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    func_0x00010c27dd80();
                    bVar2 = (int)puVar10 == 0;
                    _objc_release(puVar9);
                  }
                  else {
                    bVar2 = false;
                  }
                  _objc_release(puVar5);
                  puVar5 = puVar8;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar5;
                  func_0x00010bf0b760();
                  if ((int)puVar9 != 0) {
                    puVar9 = puVar8;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    func_0x00010bf0b760();
                    _objc_release(puVar9);
                    ppuStack_628 = (undefined **)
                                   CONCAT44(ppuStack_628._4_4_,
                                            (int)puVar10 != 5 | (uint)ppuStack_628);
                  }
                  bVar1 = (bool)(bVar1 | bVar2);
                  _objc_release(puVar5);
                }
              }
              _objc_release(puVar8);
              uVar25 = uVar25 + 1;
              uVar6 = uVar23;
              func_0x00010c0ff680();
            } while (uVar25 < uVar6);
          }
          unaff_x23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          ppuVar18 = (undefined **)((long)ppuStack_630 + 1);
        } while (ppuVar18 != ppuStack_638);
        ppuVar18 = ppuStack_648;
        func_0x00010bf52a60(ppuStack_648,param_2,&uStack_560,auStack_320,0x10);
        ppuStack_638 = ppuVar18;
      } while (ppuVar18 != (undefined **)0x0);
      _objc_release(ppuStack_648);
      ppuVar18 = (undefined **)0x3;
      if (lVar24 == 0 && ((ulong)ppuStack_628 & 1) == 0) {
        ppuVar18 = (undefined **)0x1;
      }
      unaff_x22 = (undefined **)((ulong)ppuVar18 | 8);
      if (!bVar1) {
        unaff_x22 = ppuVar18;
      }
    }
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    lStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    ppuVar18 = ppuStack_650;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = ppuVar18;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = unaff_x24;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar19;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar19);
    _objc_release(unaff_x24);
    _objc_release(ppuVar18);
    ppuStack_630 = ppuVar26;
    func_0x00010bf52a60(ppuVar26,param_2,&uStack_5a0,auStack_3a0,0x10);
    puStack_660 = puVar4;
    if (ppuVar26 != (undefined **)0x0) {
      bVar1 = false;
      lVar24 = *plStack_590;
      lStack_640 = lVar24;
      do {
        unaff_x23 = (undefined **)0x0;
        ppuStack_638 = ppuVar26;
        do {
          if (*plStack_590 != lVar24) {
            _objc_enumerationMutation(ppuStack_630);
          }
          if (bVar1) {
            bVar1 = true;
          }
          else {
            lVar11 = *(long *)(lStack_598 + (long)unaff_x23 * 8);
            lStack_5d8 = 0;
            uStack_5e0 = 0;
            uStack_5c8 = 0;
            puStack_5d0 = (ulong *)0x0;
            uStack_5b8 = 0;
            uStack_5c0 = 0;
            uStack_5a8 = 0;
            uStack_5b0 = 0;
            ppuStack_628 = unaff_x23;
            func_0x00010c12f9a0();
            _objc_retainAutoreleasedReturnValue();
            lVar24 = lVar11;
            func_0x00010bf52a60();
            if (lVar24 == 0) {
              bVar1 = false;
            }
            else {
              bVar1 = false;
              unaff_x24 = (undefined **)*puStack_5d0;
              do {
                lVar21 = 0;
                do {
                  if ((undefined **)*puStack_5d0 != unaff_x24) {
                    _objc_enumerationMutation(lVar11);
                  }
                  if (bVar1) {
                    bVar1 = true;
                  }
                  else {
                    lVar12 = *(long *)(lStack_5d8 + lVar21 * 8);
                    lStack_618 = 0;
                    uStack_620 = 0;
                    uStack_608 = 0;
                    plStack_610 = (long *)0x0;
                    uStack_5f8 = 0;
                    uStack_600 = 0;
                    uStack_5e8 = 0;
                    uStack_5f0 = 0;
                    func_0x00010c12fa40();
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar12;
                    func_0x00010bf52a60();
                    if (lVar13 != 0) {
                      lVar20 = *plStack_610;
                      do {
                        lVar22 = 0;
                        do {
                          if (*plStack_610 != lVar20) {
                            _objc_enumerationMutation(lVar12);
                          }
                          uVar17 = *(undefined8 *)(lStack_618 + lVar22 * 8);
                          uVar16 = uVar17;
                          func_0x00010bf8cec0();
                          if ((int)uVar16 == 1) {
                            func_0x00010bf5cc00();
                            _objc_retainAutoreleasedReturnValue();
                            uVar16 = uVar17;
                            func_0x00010c0840e0();
                            _objc_retainAutoreleasedReturnValue();
                            uVar14 = uVar16;
                            func_0x00010bf96da0();
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = uVar14;
                            func_0x00010bf96ee0();
                            _objc_release(uVar14);
                            _objc_release(uVar16);
                            _objc_release(uVar17);
                            uVar25 = 0x30;
                            if ((int)uVar15 != 0x10) {
                              uVar25 = 0x10;
                            }
                            unaff_x22 = (undefined **)(uVar25 | (ulong)unaff_x22);
                            bVar1 = true;
                            goto LAB_1080096ac;
                          }
                          lVar22 = lVar22 + 1;
                        } while (lVar13 != lVar22);
                        lVar13 = lVar12;
                        func_0x00010bf52a60(lVar12,param_2,&uStack_620,auStack_4a0,0x10);
                      } while (lVar13 != 0);
                    }
                    bVar1 = false;
LAB_1080096ac:
                    _objc_release(lVar12);
                  }
                  lVar21 = lVar21 + 1;
                } while (lVar21 != lVar24);
                lVar24 = lVar11;
                func_0x00010bf52a60(lVar11,param_2,&uStack_5e0,auStack_420,0x10);
              } while (lVar24 != 0);
            }
            _objc_release(lVar11);
            lVar24 = lStack_640;
            ppuVar26 = ppuStack_638;
            unaff_x23 = ppuStack_628;
          }
          unaff_x23 = (undefined **)((long)unaff_x23 + 1);
        } while (unaff_x23 != ppuVar26);
        ppuVar26 = ppuStack_630;
        func_0x00010bf52a60(ppuStack_630,param_2,&uStack_5a0,auStack_3a0,0x10);
      } while (ppuVar26 != (undefined **)0x0);
    }
    _objc_release(ppuStack_630);
    ppuVar18 = ppuStack_650;
    param_4 = ppuStack_650;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = param_4;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = unaff_x22;
    func_0x00010c1c4640();
    _objc_release(ppuVar19);
    _objc_release(param_4);
    _objc_release(puStack_660);
    _objc_release(ppuStack_658);
  }
  ppuVar3 = ppuVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    pcStack_668 = FUN_1080097b8;
    lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_6a0 = unaff_x24;
    ppuStack_698 = unaff_x23;
    ppuStack_690 = unaff_x22;
    ppuStack_688 = ppuVar18;
    ppuStack_680 = ppuVar19;
    ppuStack_678 = param_4;
    ppuStack_670 = &puStack_140;
    _objc_retain(ppuVar26);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_6b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar26);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar26);
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_6b0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_6b0,&uStack_6b8,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0;
    ppuVar18 = ppuVar3;
    func_0x00010bf99240(puVar4,param_2,ppuVar3,0,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(ppuVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
      ___stack_chk_fail();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_retain(ppuVar18);
      func_0x00010bf71e20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar18;
      func_0x00010c0e00e0(ppuVar18,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar18);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4,param_2,ppuVar19,puVar8);
      _objc_release(puVar8);
      _objc_release(ppuVar19);
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 108008fac; end: 1080097b7; -[SCPreviewGallerySaveSnapDocProvider _updateMediaEffectCapabilitiesForSnapDoc:] */

void FUN_108008fac(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **unaff_x19;
  long lVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **unaff_x20;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  undefined **unaff_x22;
  undefined **unaff_x23;
  long lVar23;
  undefined **unaff_x24;
  ulong uVar24;
  undefined **ppuVar25;
  ulong uVar26;
  undefined8 uStack_588;
  undefined *puStack_580;
  long lStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined1 *puStack_540;
  code *pcStack_538;
  undefined *puStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  long lStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  ulong *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  undefined1 auStack_2f0 [128];
  undefined1 auStack_270 [128];
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined **)0x0) {
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    ppuStack_520 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = param_3;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar19;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar20;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(ppuVar19);
    _objc_release(param_3);
    ppuVar19 = ppuVar25;
    func_0x00010bf52a60(ppuVar25,param_2,&uStack_3b0,auStack_f0,0x10);
    if (ppuVar19 != (undefined **)0x0) {
      lVar17 = *plStack_3a0;
      do {
        ppuVar20 = (undefined **)0x0;
        do {
          if (*plStack_3a0 != lVar17) {
            _objc_enumerationMutation(ppuVar25);
          }
          unaff_x23 = *(undefined ***)(lStack_3a8 + (long)ppuVar20 * 8);
          ppuVar3 = unaff_x23;
          func_0x00010c074780();
          if ((((ulong)ppuVar3 & 1) == 0) &&
             (ppuVar3 = unaff_x23, func_0x00010c278a40(), (int)ppuVar3 == 1)) {
            ppuStack_528 = unaff_x23;
            _objc_retain(unaff_x23);
            goto LAB_1080090f8;
          }
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar19 != ppuVar20);
        ppuVar19 = ppuVar25;
        func_0x00010bf52a60(ppuVar25,param_2,&uStack_3b0,auStack_f0,0x10);
      } while (ppuVar19 != (undefined **)0x0);
    }
    ppuStack_528 = (undefined **)0x0;
LAB_1080090f8:
    _objc_release(ppuVar25);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    ppuVar19 = ppuStack_520;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar19;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar20;
    func_0x00010bf52a60(ppuVar20,param_2,&uStack_3f0,auStack_170,0x10);
    if (ppuVar19 != (undefined **)0x0) {
      lVar17 = *plStack_3e0;
      do {
        ppuVar25 = (undefined **)0x0;
        do {
          if (*plStack_3e0 != lVar17) {
            _objc_enumerationMutation(ppuVar20);
          }
          uVar18 = *(undefined8 *)(lStack_3e8 + (long)ppuVar25 * 8);
          uVar16 = uVar18;
          func_0x00010c0ff5c0(uVar18);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4,param_2,uVar18,puVar5);
          _objc_release(puVar5);
          ppuVar25 = (undefined **)((long)ppuVar25 + 1);
        } while (ppuVar19 != ppuVar25);
        ppuVar19 = ppuVar20;
        func_0x00010bf52a60(ppuVar20,param_2,&uStack_3f0,auStack_170,0x10);
        unaff_x23 = (undefined **)0x0;
      } while (ppuVar19 != (undefined **)0x0);
    }
    _objc_release(ppuVar20);
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    ppuVar19 = ppuStack_528;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar19;
    func_0x00010bf52a60();
    ppuStack_508 = ppuVar20;
    if (ppuVar20 == (undefined **)0x0) {
      _objc_release(ppuVar19);
      unaff_x22 = (undefined **)0x1;
    }
    else {
      ppuStack_4f8 = (undefined **)((ulong)ppuStack_4f8 & 0xffffffff00000000);
      bVar1 = false;
      lVar17 = 0;
      lStack_510 = *plStack_420;
      ppuStack_518 = ppuVar19;
      do {
        ppuVar19 = (undefined **)0x0;
        do {
          if (*plStack_420 != lStack_510) {
            _objc_enumerationMutation(ppuStack_518);
          }
          uVar24 = *(ulong *)(lStack_428 + (long)ppuVar19 * 8);
          uVar26 = uVar24;
          ppuStack_500 = ppuVar19;
          func_0x00010c0ff680();
          if (uVar26 != 0) {
            uVar26 = 0;
            do {
              uVar6 = uVar24;
              func_0x00010c0ff660(uVar24);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar6;
              func_0x00010c296de0();
              _objc_release(uVar6);
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar4;
              func_0x00010c0e00e0(puVar4,param_2,puVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              puVar5 = puVar8;
              func_0x00010c08c3a0();
              if ((int)puVar5 == 4) {
                lVar17 = lVar17 + 1;
              }
              else {
                puVar5 = puVar8;
                func_0x00010c08c3a0();
                if ((int)puVar5 == 1) {
                  puVar5 = puVar8;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar5;
                  func_0x00010bf0b760();
                  if ((int)puVar9 == 5) {
                    puVar9 = puVar8;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    func_0x00010c27dd80();
                    bVar2 = (int)puVar10 == 0;
                    _objc_release(puVar9);
                  }
                  else {
                    bVar2 = false;
                  }
                  _objc_release(puVar5);
                  puVar5 = puVar8;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar5;
                  func_0x00010bf0b760();
                  if ((int)puVar9 != 0) {
                    puVar9 = puVar8;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar10 = puVar9;
                    func_0x00010bf0b760();
                    _objc_release(puVar9);
                    ppuStack_4f8 = (undefined **)
                                   CONCAT44(ppuStack_4f8._4_4_,
                                            (int)puVar10 != 5 | (uint)ppuStack_4f8);
                  }
                  bVar1 = (bool)(bVar1 | bVar2);
                  _objc_release(puVar5);
                }
              }
              _objc_release(puVar8);
              uVar26 = uVar26 + 1;
              uVar6 = uVar24;
              func_0x00010c0ff680();
            } while (uVar26 < uVar6);
          }
          unaff_x23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          ppuVar19 = (undefined **)((long)ppuStack_500 + 1);
        } while (ppuVar19 != ppuStack_508);
        ppuVar19 = ppuStack_518;
        func_0x00010bf52a60(ppuStack_518,param_2,&uStack_430,auStack_1f0,0x10);
        ppuStack_508 = ppuVar19;
      } while (ppuVar19 != (undefined **)0x0);
      _objc_release(ppuStack_518);
      ppuVar19 = (undefined **)0x3;
      if (lVar17 == 0 && ((ulong)ppuStack_4f8 & 1) == 0) {
        ppuVar19 = (undefined **)0x1;
      }
      unaff_x22 = (undefined **)((ulong)ppuVar19 | 8);
      if (!bVar1) {
        unaff_x22 = ppuVar19;
      }
    }
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    ppuVar19 = ppuStack_520;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = ppuVar19;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = unaff_x24;
    func_0x00010c12fae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar20;
    func_0x00010c12fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(unaff_x24);
    _objc_release(ppuVar19);
    ppuStack_500 = ppuVar25;
    func_0x00010bf52a60(ppuVar25,param_2,&uStack_470,auStack_270,0x10);
    puStack_530 = puVar4;
    if (ppuVar25 != (undefined **)0x0) {
      bVar1 = false;
      lVar17 = *plStack_460;
      lStack_510 = lVar17;
      do {
        unaff_x23 = (undefined **)0x0;
        ppuStack_508 = ppuVar25;
        do {
          if (*plStack_460 != lVar17) {
            _objc_enumerationMutation(ppuStack_500);
          }
          if (bVar1) {
            bVar1 = true;
          }
          else {
            lVar11 = *(long *)(lStack_468 + (long)unaff_x23 * 8);
            lStack_4a8 = 0;
            uStack_4b0 = 0;
            uStack_498 = 0;
            puStack_4a0 = (ulong *)0x0;
            uStack_488 = 0;
            uStack_490 = 0;
            uStack_478 = 0;
            uStack_480 = 0;
            ppuStack_4f8 = unaff_x23;
            func_0x00010c12f9a0();
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar11;
            func_0x00010bf52a60();
            if (lVar17 == 0) {
              bVar1 = false;
            }
            else {
              bVar1 = false;
              unaff_x24 = (undefined **)*puStack_4a0;
              do {
                lVar22 = 0;
                do {
                  if ((undefined **)*puStack_4a0 != unaff_x24) {
                    _objc_enumerationMutation(lVar11);
                  }
                  if (bVar1) {
                    bVar1 = true;
                  }
                  else {
                    lVar12 = *(long *)(lStack_4a8 + lVar22 * 8);
                    lStack_4e8 = 0;
                    uStack_4f0 = 0;
                    uStack_4d8 = 0;
                    plStack_4e0 = (long *)0x0;
                    uStack_4c8 = 0;
                    uStack_4d0 = 0;
                    uStack_4b8 = 0;
                    uStack_4c0 = 0;
                    func_0x00010c12fa40();
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar12;
                    func_0x00010bf52a60();
                    if (lVar13 != 0) {
                      lVar21 = *plStack_4e0;
                      do {
                        lVar23 = 0;
                        do {
                          if (*plStack_4e0 != lVar21) {
                            _objc_enumerationMutation(lVar12);
                          }
                          uVar18 = *(undefined8 *)(lStack_4e8 + lVar23 * 8);
                          uVar16 = uVar18;
                          func_0x00010bf8cec0();
                          if ((int)uVar16 == 1) {
                            func_0x00010bf5cc00();
                            _objc_retainAutoreleasedReturnValue();
                            uVar16 = uVar18;
                            func_0x00010c0840e0();
                            _objc_retainAutoreleasedReturnValue();
                            uVar14 = uVar16;
                            func_0x00010bf96da0();
                            _objc_retainAutoreleasedReturnValue();
                            uVar15 = uVar14;
                            func_0x00010bf96ee0();
                            _objc_release(uVar14);
                            _objc_release(uVar16);
                            _objc_release(uVar18);
                            uVar26 = 0x30;
                            if ((int)uVar15 != 0x10) {
                              uVar26 = 0x10;
                            }
                            unaff_x22 = (undefined **)(uVar26 | (ulong)unaff_x22);
                            bVar1 = true;
                            goto LAB_1080096ac;
                          }
                          lVar23 = lVar23 + 1;
                        } while (lVar13 != lVar23);
                        lVar13 = lVar12;
                        func_0x00010bf52a60(lVar12,param_2,&uStack_4f0,auStack_370,0x10);
                      } while (lVar13 != 0);
                    }
                    bVar1 = false;
LAB_1080096ac:
                    _objc_release(lVar12);
                  }
                  lVar22 = lVar22 + 1;
                } while (lVar22 != lVar17);
                lVar17 = lVar11;
                func_0x00010bf52a60(lVar11,param_2,&uStack_4b0,auStack_2f0,0x10);
              } while (lVar17 != 0);
            }
            _objc_release(lVar11);
            lVar17 = lStack_510;
            ppuVar25 = ppuStack_508;
            unaff_x23 = ppuStack_4f8;
          }
          unaff_x23 = (undefined **)((long)unaff_x23 + 1);
        } while (unaff_x23 != ppuVar25);
        ppuVar25 = ppuStack_500;
        func_0x00010bf52a60(ppuStack_500,param_2,&uStack_470,auStack_270,0x10);
      } while (ppuVar25 != (undefined **)0x0);
    }
    _objc_release(ppuStack_500);
    param_3 = ppuStack_520;
    unaff_x19 = ppuStack_520;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x19;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = unaff_x22;
    func_0x00010c1c4640();
    _objc_release(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(puStack_530);
    _objc_release(ppuStack_528);
  }
  ppuVar20 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    pcStack_538 = FUN_1080097b8;
    lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_570 = unaff_x24;
    ppuStack_568 = unaff_x23;
    ppuStack_560 = unaff_x22;
    ppuStack_558 = param_3;
    ppuStack_550 = unaff_x20;
    ppuStack_548 = unaff_x19;
    puStack_540 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar19);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_588 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar19);
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_580 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_580,&uStack_588,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0;
    ppuVar19 = ppuVar20;
    func_0x00010bf99240(puVar4,param_2,ppuVar20,0,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(ppuVar20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_578) {
      ___stack_chk_fail();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_retain(ppuVar19);
      func_0x00010bf71e20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar19;
      func_0x00010c0e00e0(ppuVar19,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar19);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4,param_2,ppuVar20,puVar8);
      _objc_release(puVar8);
      _objc_release(ppuVar20);
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1080097b8; end: 1080098eb; -[SCPreviewGallerySaveSnapDocProvider _errorWithMessage:] */

void FUN_1080097b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  uVar5 = param_1;
  func_0x00010bf99240(puVar3,param_2,param_1,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(uVar5);
    func_0x00010bf71e20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0e00e0(uVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,uVar4,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080098ec; end: 1080099bf; -[SCPreviewGallerySaveSnapDocProvider _mediaAssetsFromMediaAssets:withType:] */

void FUN_1080098ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080099c0; end: 108009a77; -[SCPreviewGallerySaveSnapDocProvider _globalTrackMediaAssets:] */

void FUN_1080099c0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108009a78;
    puStack_30 = &UNK_11098e418;
    _objc_retain();
    puStack_28 = puVar1;
    func_0x00010bf97ce0(param_3,param_2,&puStack_48);
    _objc_release(puStack_28);
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108009a78; end: 108009aff;  */

void FUN_108009a78(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c067fc0();
  if (((lVar1 != 2) && (lVar1 = param_2, func_0x00010c067fc0(), lVar1 != 8)) &&
     (lVar1 = param_2, func_0x00010c067fc0(), lVar1 != 0x11)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108009b00; end: 108009b5f; -[SCPreviewGallerySaveSnapDocProvider .cxx_destruct] */

void FUN_108009b00(long param_1)

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



/* Entry: 108009b60; end: 108009c83; -[SCGalleryDayStorySnapPlaceholder initWithCreationSnap:lagunaContent:location:overlay:mockDataURL:] */

undefined1 *
FUN_108009b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fc190;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108009c84; end: 108009c8b; -[SCGalleryDayStorySnapPlaceholder key] */

void FUN_108009c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_key_1125ff368);
  return;
}



/* Entry: 108009c8c; end: 108009c93; -[SCGalleryDayStorySnapPlaceholder IV] */

void FUN_108009c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_IV_11254dfa0);
  return;
}



/* Entry: 108009c94; end: 108009cf3; -[SCGalleryDayStorySnapPlaceholder data] */

void FUN_108009c94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = uVar2;
    func_0x00010c137620(uVar2);
    func_0x00010bf63a60(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(long *)(param_1 + 0x10),1,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108009cf4; end: 108009d1b; -[SCGalleryDayStorySnapPlaceholder lagunaContent] */

void FUN_108009cf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108009d1c; end: 108009d23; -[SCGalleryDayStorySnapPlaceholder location] */

undefined8 FUN_108009d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108009d24; end: 108009d2b; -[SCGalleryDayStorySnapPlaceholder overlay] */

undefined8 FUN_108009d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108009d2c; end: 108009d33; -[SCGalleryDayStorySnapPlaceholder creationSnap] */

undefined8 FUN_108009d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108009d34; end: 108009d87; -[SCGalleryDayStorySnapPlaceholder .cxx_destruct] */

void FUN_108009d34(long param_1)

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



/* Entry: 108009d88; end: 108009d8f; -[SCMemoriesDataMutatingServices addSnapMutating] */

undefined8 FUN_108009d88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108009d90; end: 108009d97; -[SCMemoriesDataMutatingServices autoSaveMutating] */

undefined8 FUN_108009d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108009d98; end: 108009d9f; -[SCMemoriesDataMutatingServices deletionMutating] */

undefined8 FUN_108009d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108009da0; end: 108009da7; -[SCMemoriesDataMutatingServices editMutating] */

undefined8 FUN_108009da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108009da8; end: 108009daf; -[SCMemoriesDataMutatingServices meoMutating] */

undefined8 FUN_108009da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108009db0; end: 108009db7; -[SCMemoriesDataMutatingServices multiSnapMutating] */

undefined8 FUN_108009db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108009db8; end: 108009dbf; -[SCMemoriesDataMutatingServices storyMutating] */

undefined8 FUN_108009db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108009dc0; end: 108009dc7; -[SCMemoriesDataMutatingServices sharedStoryMutating] */

undefined8 FUN_108009dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108009dc8; end: 108009dcf; -[SCMemoriesDataMutatingServices batchCaptureMutating] */

undefined8 FUN_108009dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108009dd0; end: 108009dd7; -[SCMemoriesDataMutatingServices reorderMutating] */

undefined8 FUN_108009dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108009dd8; end: 108009ddf; -[SCMemoriesDataMutatingServices favoriteMutating] */

undefined8 FUN_108009dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108009de0; end: 108009de7; -[SCMemoriesDataMutatingServices retryMutating] */

undefined8 FUN_108009de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108009de8; end: 108009def; -[SCMemoriesDataMutatingServices highlightMutating] */

undefined8 FUN_108009de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108009df0; end: 108009df7; -[SCMemoriesDataMutatingServices snapDocMutating] */

undefined8 FUN_108009df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108009df8; end: 108009ec3; -[SCMemoriesDataMutatingServices .cxx_destruct] */

void FUN_108009df8(long param_1)

{
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



/* Entry: 108009ec4; end: 108009ecb; -[SCMemoriesDataMutationInfo quotaUsage] */

undefined8 FUN_108009ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108009ecc; end: 108009ed3; -[SCMemoriesDataMutationInfo setQuotaUsage:] */

void FUN_108009ecc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108009ed4; end: 108009edb; -[SCMemoriesDataMutationInfo autosave] */

undefined1 FUN_108009ed4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108009edc; end: 108009ee3; -[SCMemoriesDataMutationInfo setAutosave:] */

void FUN_108009edc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108009ee4; end: 108009eeb; -[SCMemoriesDataMutationInfo badMedia] */

undefined1 FUN_108009ee4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108009eec; end: 108009ef3; -[SCMemoriesDataMutationInfo setBadMedia:] */

void FUN_108009eec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108009ef4; end: 108009efb; -[SCMemoriesDataMutationInfo approximateTotalMediaSizeInBytes] */

undefined8 FUN_108009ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108009efc; end: 108009f03; -[SCMemoriesDataMutationInfo setApproximateTotalMediaSizeInBytes:] */

void FUN_108009efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108009f04; end: 108009f0f; -[SCMemoriesDataMutationInfo error] */

void FUN_108009f04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 108009f10; end: 108009f17; -[SCMemoriesDataMutationInfo setError:] */

void FUN_108009f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108009f18; end: 108009f23; -[SCMemoriesDataMutationInfo .cxx_destruct] */

void FUN_108009f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108009f24; end: 108009fd7; -[SCMemoriesSegmentedPHAssetDataModel initWithPhAsset:urls:orientation:] */

undefined1 *
FUN_108009f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc1a0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108009fd8; end: 108009ffb; -[SCMemoriesSegmentedPHAssetDataModel copyWithZone:] */

undefined8 FUN_108009fd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108009ffc; end: 10800a07b; -[SCMemoriesSegmentedPHAssetDataModel hash] */

undefined8 * FUN_108009ffc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10800a10c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10800a118;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10800a118;
        }
        goto LAB_10800a10c;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10800a118:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10800a07c; end: 10800a133; -[SCMemoriesSegmentedPHAssetDataModel isEqual:] */

long FUN_10800a07c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10800a10c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10800a118;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10800a118;
        }
        goto LAB_10800a10c;
      }
    }
    lVar3 = 0;
  }
LAB_10800a118:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10800a134; end: 10800a13b; -[SCMemoriesSegmentedPHAssetDataModel phAsset] */

undefined8 FUN_10800a134(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10800a13c; end: 10800a143; -[SCMemoriesSegmentedPHAssetDataModel urls] */

undefined8 FUN_10800a13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800a144; end: 10800a14b; -[SCMemoriesSegmentedPHAssetDataModel orientation] */

undefined8 FUN_10800a144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10800a14c; end: 10800a17b; -[SCMemoriesSegmentedPHAssetDataModel .cxx_destruct] */

void FUN_10800a14c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10800a17c; end: 10800a1e7; +[SCMemoriesDataMutatorSnapAssetMedia assetCloudFileWithAssetCloudFile:] */

void FUN_10800a17c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10800a1e8; end: 10800a24b; +[SCMemoriesDataMutatorSnapAssetMedia assetDataPackageWithAssetDataPackage:] */

void FUN_10800a1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10800a24c; end: 10800a26f; -[SCMemoriesDataMutatorSnapAssetMedia copyWithZone:] */

undefined8 FUN_10800a24c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


