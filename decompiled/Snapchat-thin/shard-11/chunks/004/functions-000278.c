/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108556f54; end: 108556fd7;  */

void FUN_108556f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b26d8;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d71e0(param_2);
  _objc_release(param_2);
  func_0x00010bf97980(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108556fd8; end: 1085571ab; -[SnapVideoFilter _consistentWatermarkDrawCommandTransformProvidersWithType:] */

void FUN_108556fd8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x328);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a2a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  if (param_4 == 1) {
    func_0x00010be97540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar18 = *(double *)(param_2 + 0x358);
    param_1 = param_1 / dVar18;
    func_0x00010c23d0a0(lVar1);
    dVar15 = *(double *)(param_2 + 0x360);
    dVar18 = dVar18 / dVar15;
    puVar9 = PTR_PTR_1126b2700;
    _objc_alloc();
    func_0x00010c0db4e0(lVar2);
    puVar14 = &uStack_60;
  }
  else {
    func_0x00010be49f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar18 = *(double *)(param_2 + 0x358);
    param_1 = param_1 / dVar18;
    func_0x00010c23d0a0(lVar1);
    dVar15 = *(double *)(param_2 + 0x360);
    dVar18 = dVar18 / dVar15;
    puVar9 = PTR_PTR_1126b2700;
    _objc_alloc();
    func_0x00010c0db5c0(lVar2);
    puVar14 = &uStack_68;
  }
  func_0x00010c055500();
  puVar3 = PTR_PTR_1126da0a8;
  _objc_alloc();
  func_0x00010bf9f660(lVar2);
  func_0x00010c01ce80(param_1,dVar18,0,dVar15,0x7fefffffffffffff,puVar3,param_3,puVar9);
  *puVar14 = puVar3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,puVar14,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_78 = FUN_1085571ac;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = *(long *)(lVar2 + 0x328);
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c2a2a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010be49f80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010be97540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(lVar5);
    dVar19 = *(double *)(lVar2 + 0x358);
    param_1 = param_1 / dVar19;
    func_0x00010c23d0a0(lVar5);
    dVar16 = *(double *)(lVar2 + 0x360);
    dVar19 = dVar19 / dVar16;
    func_0x00010c23d0a0(lVar6);
    dVar20 = *(double *)(lVar2 + 0x358);
    dVar16 = dVar16 / dVar20;
    func_0x00010c23d0a0(lVar6);
    dVar17 = *(double *)(lVar2 + 0x360);
    dVar20 = dVar20 / dVar17;
    puVar9 = PTR_PTR_1126b2700;
    _objc_alloc();
    func_0x00010c0db5c0(lVar1);
    func_0x00010c055500();
    puVar3 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c0db4e0(lVar1);
    func_0x00010c055500(puVar3);
    puVar7 = PTR_PTR_1126da0a8;
    _objc_alloc();
    func_0x00010bf9f660(lVar1);
    dVar15 = dVar17;
    func_0x00010bf9f660(lVar1);
    dVar18 = dVar15;
    func_0x00010c0d19a0(lVar1);
    func_0x00010c01ce80(param_1,dVar19,0,dVar17,dVar15 + dVar18,puVar7,param_3,puVar9);
    puVar8 = PTR_PTR_1126da0a8;
    _objc_alloc();
    func_0x00010bf9f660(lVar1);
    dVar15 = param_1;
    func_0x00010c0d19a0(lVar1);
    param_1 = param_1 + dVar15;
    func_0x00010bf9f660(lVar1);
    func_0x00010c01ce80(dVar16,dVar20,param_1,dVar15,0x7fefffffffffffff,puVar8,param_3,puVar3);
    ppuVar12 = &puStack_108;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_108 = puVar7;
    puStack_100 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,ppuVar12,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar2 = lVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      pcStack_118 = FUN_10855741c;
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_130 = lVar5;
      lStack_128 = lVar1;
      ppuStack_120 = &puStack_80;
      if (ppuVar12 == (undefined **)0x1) {
        func_0x00010be97540();
        _objc_retainAutoreleasedReturnValue();
        plVar13 = &lStack_140;
        lStack_140 = lVar2;
      }
      else {
        func_0x00010be49f80();
        _objc_retainAutoreleasedReturnValue();
        plVar13 = &lStack_148;
        lStack_148 = lVar2;
      }
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,plVar13,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
        ___stack_chk_fail();
        puVar9 = *(undefined **)(lVar2 + 0x328);
        func_0x00010c269d40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(lVar2 + 0xf0);
        func_0x00010c2a2a20(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(lVar2 + 0xf0);
        func_0x00010c2a2a40(uVar11);
        puVar4 = puVar9;
        func_0x00010bfc0700(*(undefined8 *)(lVar2 + 0x358),*(undefined8 *)(lVar2 + 0x360),puVar9,
                            param_3,0,uVar10,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(puVar9);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085571ac; end: 10855741b; -[SnapVideoFilter _watermarkDrawCommandTransformProviders] */

void FUN_1085571ac(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x328);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a2a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010be97540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(lVar1);
  dVar17 = *(double *)(param_2 + 0x358);
  param_1 = param_1 / dVar17;
  func_0x00010c23d0a0(lVar1);
  dVar13 = *(double *)(param_2 + 0x360);
  dVar17 = dVar17 / dVar13;
  func_0x00010c23d0a0(lVar3);
  dVar18 = *(double *)(param_2 + 0x358);
  dVar13 = dVar13 / dVar18;
  func_0x00010c23d0a0(lVar3);
  dVar14 = *(double *)(param_2 + 0x360);
  dVar18 = dVar18 / dVar14;
  puVar8 = PTR_PTR_1126b2700;
  _objc_alloc();
  func_0x00010c0db5c0(lVar2);
  func_0x00010c055500();
  puVar4 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c0db4e0(lVar2);
  func_0x00010c055500(puVar4);
  puVar5 = PTR_PTR_1126da0a8;
  _objc_alloc();
  func_0x00010bf9f660(lVar2);
  dVar15 = dVar14;
  func_0x00010bf9f660(lVar2);
  dVar16 = dVar15;
  func_0x00010c0d19a0(lVar2);
  func_0x00010c01ce80(param_1,dVar17,0,dVar14,dVar15 + dVar16,puVar5,param_3,puVar8);
  puVar6 = PTR_PTR_1126da0a8;
  _objc_alloc();
  func_0x00010bf9f660(lVar2);
  dVar15 = param_1;
  func_0x00010c0d19a0(lVar2);
  param_1 = param_1 + dVar15;
  func_0x00010bf9f660(lVar2);
  func_0x00010c01ce80(dVar13,dVar18,param_1,dVar15,0x7fefffffffffffff,puVar6,param_3,puVar4);
  ppuVar11 = &puStack_98;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar5;
  puStack_90 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,ppuVar11,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    pcStack_a8 = FUN_10855741c;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_c0 = lVar1;
    lStack_b8 = lVar2;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (ppuVar11 == (undefined **)0x1) {
      func_0x00010be97540();
      _objc_retainAutoreleasedReturnValue();
      plVar12 = &lStack_d0;
      lStack_d0 = lVar3;
    }
    else {
      func_0x00010be49f80();
      _objc_retainAutoreleasedReturnValue();
      plVar12 = &lStack_d8;
      lStack_d8 = lVar3;
    }
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,plVar12,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      puVar8 = *(undefined **)(lVar3 + 0x328);
      func_0x00010c269d40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(lVar3 + 0xf0);
      func_0x00010c2a2a20(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(lVar3 + 0xf0);
      func_0x00010c2a2a40(uVar10);
      puVar7 = puVar8;
      func_0x00010bfc0700(*(undefined8 *)(lVar3 + 0x358),*(undefined8 *)(lVar3 + 0x360),puVar8,
                          param_3,0,uVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(puVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10855741c; end: 1085574cb; -[SnapVideoFilter _watermarkImageWithLayout:] */

void FUN_10855741c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 1) {
    func_0x00010be97540();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = &lStack_30;
    lStack_30 = param_1;
  }
  else {
    func_0x00010be49f80();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = &lStack_38;
    lStack_38 = param_1;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,plVar5,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = *(undefined **)(param_1 + 0x328);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c2a2a20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c2a2a40(uVar4);
    puVar1 = puVar2;
    func_0x00010bfc0700(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360),puVar2,
                        param_2,0,uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085574cc; end: 10855755b; -[SnapVideoFilter _leftWatermarkImage] */

void FUN_1085574cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x328);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c2a2a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c2a2a40(uVar3);
  uVar4 = uVar1;
  func_0x00010bfc0700(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360),uVar1,
                      param_2,0,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10855755c; end: 1085575eb; -[SnapVideoFilter _rightWatermarkImage] */

void FUN_10855755c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x328);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c2a2a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c2a2a40(uVar3);
  uVar4 = uVar1;
  func_0x00010bfc0700(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360),uVar1,
                      param_2,1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085575ec; end: 108557bbb; -[SnapVideoFilter _generateCommandsForAnimatedImage] */

void FUN_1085575ec(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_1 + 0x1c8) == 0) || (lVar9 = param_1, func_0x00010c07f100(), (int)lVar9 == 0)
     ) {
    bVar3 = *(long *)(param_1 + 0x1d0) == 0;
  }
  else {
    bVar3 = false;
  }
  func_0x00010c14c720(puVar4);
  if ((*(long *)(param_1 + 0x1c8) != 0) && (lVar9 = param_1, func_0x00010c07f100(), (int)lVar9 != 0)
     ) {
    uVar6 = *(undefined8 *)(param_1 + 0x158);
    func_0x00010bfe7180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c720(puVar4);
    _objc_release(uVar6);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x2a0);
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    lVar15 = *(long *)(param_1 + 0x2a0);
    _objc_retain(lVar15);
    lVar9 = lVar15;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar15);
        }
        uVar17 = *(undefined8 *)(lVar16 * 8);
        uVar6 = uVar17;
        func_0x00010c27a460(uVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar8);
        _objc_retain(puVar8);
        func_0x00010c0c0400(uVar6);
        _objc_release(uVar6);
        func_0x00010bfe6ac0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c720(puVar7);
        _objc_release(uVar17);
        _objc_release(puVar8);
        _objc_release(puVar8);
        lVar16 = lVar16 + 1;
      } while (lVar9 != lVar16);
      lVar9 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
  }
  lVar9 = *(long *)(param_1 + 0x2a0);
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    puVar11 = PTR_PTR_1126b26f0;
    _objc_alloc(PTR_PTR_1126b26f0);
    uVar6 = *(undefined8 *)(param_1 + 0x240);
    lVar9 = param_1;
    func_0x00010bdf62a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d120(uVar6,puVar11);
    func_0x00010befa120(puVar4);
    _objc_release(puVar11);
    _objc_release(lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x210);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x148);
    func_0x00010bdc1020();
    if (cVar2 == '\x01') {
      func_0x00010b690c88(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360));
      puVar11 = PTR_PTR_1126bf498;
    }
    else {
      _CGImageRetain();
      puVar11 = PTR_PTR_1126bf488;
    }
    func_0x00010bf41dc0(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360),puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar11);
  }
  if (bVar3) {
    lVar10 = *(long *)(param_1 + 0x2a0);
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      puVar11 = PTR_PTR_1126da098;
      _objc_alloc(PTR_PTR_1126da098);
      lVar10 = param_1;
      func_0x00010bdf62a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d100(puVar11);
      func_0x00010befa120(puVar5);
      _objc_release(puVar11);
      _objc_release(lVar10);
    }
    if ((lVar9 != 0) && (*(long *)(param_1 + 0x210) != 0)) {
      ppuVar1 = &PTR_PTR_1126bf4a0;
      if (*(char *)(param_1 + 0x148) == '\0') {
        ppuVar1 = &PTR_PTR_1126bf490;
      }
      puVar11 = *ppuVar1;
      func_0x00010bf41dc0(*(undefined8 *)(param_1 + 0x358),*(undefined8 *)(param_1 + 0x360),puVar11)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar11);
    }
    lVar10 = param_1;
    func_0x00010c0d7540();
    if ((int)lVar10 != 0) {
      uVar17 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x238);
      func_0x00010c299740(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar17;
      func_0x00010c299700(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(uVar6);
      _objc_release(uVar12);
      _objc_release(uVar17);
    }
  }
  if (lVar9 != 0) {
    _CGImageRelease(lVar9);
  }
  lVar9 = param_1;
  func_0x00010c0d7540();
  if ((int)lVar9 != 0) {
    uVar17 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x238);
    func_0x00010c299740(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar17;
    func_0x00010c299720(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar17);
  }
  puVar13 = puVar4;
  func_0x00010bf529e0();
  puVar11 = (undefined *)0x0;
  if (puVar13 != (undefined *)0x0) {
    puVar11 = puVar4;
  }
  _objc_retain(puVar11);
  uVar6 = *(undefined8 *)(param_1 + 0x330);
  *(undefined **)(param_1 + 0x330) = puVar11;
  _objc_release(uVar6);
  puVar13 = puVar5;
  func_0x00010bf529e0();
  puVar11 = (undefined *)0x0;
  if (puVar13 != (undefined *)0x0) {
    puVar11 = puVar5;
  }
  _objc_retain(puVar11);
  uVar6 = *(undefined8 *)(param_1 + 0x338);
  *(undefined **)(param_1 + 0x338) = puVar11;
  _objc_release(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b2708;
  uVar6 = *(undefined8 *)(puVar4 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar5);
  func_0x00010c0db660(*(undefined8 *)(puVar4 + 0x28));
  func_0x00010c01ce60(puVar5);
  _objc_release(param_2);
  func_0x00010befa120(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108557bbc; end: 108557cdf;  */

void FUN_108557bbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2708;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0db660(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c01ce60(puVar1);
  _objc_release(param_2);
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108557ce0; end: 108557d33; -[SnapVideoFilter _prepareOutputURL] */

void FUN_108557ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c26ad80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be78d80(param_1,param_2,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108557d34; end: 108557e3f; -[SnapVideoFilter _prepareOutputURLFromTempFileURL:addToActivePath:] */

void FUN_108557d34(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010c25ce40(param_3,param_2,&PTR____CFConstantStringClassReference_110df60d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0f5800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    func_0x00010c12cc60(puVar2,param_2,puVar1,0);
  }
  if (param_4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x158);
    puVar3 = puVar1;
    func_0x00010c0899c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900(uVar5,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108557e40; end: 108557f97; -[SnapVideoFilter _transcodeVideoWithOutputBitrate:videoTargetSize:skipTranscodingIfPossible:] */

void FUN_108557e40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  ppuVar4 = &puStack_b0;
  uVar1 = *(undefined8 *)(param_3 + 0x1e0);
  func_0x00010bf43280(uVar1,param_4,&PTR___NSConcreteGlobalBlock_110a55028);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0xd8);
  _objc_retain(uVar5);
  func_0x00010c2a6ea0(uVar5,param_4,uVar1);
  puVar3 = PTR_PTR_1126ae790;
  lVar2 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar3,param_4,0x19,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_108557fa0;
  puStack_98 = &UNK_110a55078;
  lStack_90 = param_3;
  uStack_88 = uVar5;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_5;
  uStack_68 = param_6;
  _objc_retain(uVar5);
  _objc_retainBlock(&puStack_b0);
  func_0x00010be96900(param_3,param_4,puVar3,1,ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(uStack_88);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 108557f98; end: 108557f9f;  */

void FUN_108557f98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 108557fa0; end: 10855828f;  */

void FUN_108557fa0(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined1 *)0x12c;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  *(undefined1 **)(*(long *)(param_1 + 0x20) + 0x228) = puVar1;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108558290;
  puStack_88 = &UNK_110853c90;
  lVar7 = *(long *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  ppuVar2 = &puStack_a0;
  uStack_80 = uVar12;
  lStack_78 = lVar7;
  _objc_retainBlock();
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar7 + 0x180) == 0) {
    if ((*(long *)(lVar7 + 0x1a8) == 0) && (*(long *)(lVar7 + 0x1b0) == 0)) {
      ppuVar10 = *(undefined ***)(param_1 + 0x40);
      func_0x00010be96200(lVar7);
      func_0x00010bece6c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar7);
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x178);
      _objc_retain(lVar7);
      lVar6 = *(long *)(param_1 + 0x20);
      lVar8 = *(long *)(lVar6 + 0x290);
      if (lVar8 != 0) {
        _objc_retain(lVar8);
        _objc_release(lVar7);
        lVar6 = *(long *)(param_1 + 0x20);
        lVar7 = lVar8;
      }
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      puVar9 = *(undefined **)(lVar6 + 0x260);
      if (puVar9 == (undefined *)0x0) {
        func_0x00010c299d80(lVar7);
        _CMTimeMakeWithSeconds(auStack_128,600);
        uStack_138 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_140 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_130 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        param_2 = auStack_128;
        _CMTimeRangeMake(&uStack_110,&uStack_140);
        func_0x00010c297240();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar3;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      else {
        _objc_retain(puVar9);
      }
      ppuVar4 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x78);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar2);
      _objc_retain(puVar9);
      ppuVar10 = ppuVar4;
      func_0x00010c0d9520(lVar7);
      _objc_release(ppuVar4);
      _objc_release(ppuVar2);
      _objc_release(puVar9);
      _objc_release(puVar9);
      _objc_release(lVar7);
    }
  }
  else {
    func_0x00010c07f100();
    if ((int)lVar7 == 0) {
      uStack_108 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
      uStack_110 = *(undefined8 *)PTR__CGSizeZero_110347620;
    }
    else {
      uStack_108 = *(undefined8 *)(param_1 + 0x38);
      uStack_110 = *(undefined8 *)(param_1 + 0x30);
    }
    lStack_c0 = *(long *)(param_1 + 0x20);
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108558470;
    puStack_c8 = &UNK_11084e430;
    uStack_b8 = *(undefined8 *)(param_1 + 0x40);
    ppuVar10 = &puStack_e0;
    uStack_b0 = uStack_110;
    uStack_a8 = uStack_108;
    func_0x00010c0f7fc0(*(undefined8 *)(lStack_c0 + 0x78));
  }
  _objc_release(ppuVar2);
  lVar7 = lStack_78;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar10);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar12 = *(undefined8 *)(lVar7 + 0x28);
  uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x78);
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_10855842c;
  puStack_210 = &UNK_110842e18;
  _objc_retain(uVar12);
  uStack_208 = uVar12;
  func_0x00010c0f7fc0(uVar11);
  if ((param_2 == (undefined1 *)0x0) || (ppuVar10 != (undefined **)0x0)) {
    func_0x00010bee8e40(*(undefined8 *)(lVar7 + 0x20));
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    if (puVar9 == (undefined *)0x0) {
      func_0x00010bee8e40(uVar12);
    }
    else {
      puVar5 = PTR_PTR_1126b1358;
      func_0x00010bf5a440(PTR_PTR_1126b1358);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde3880(uVar12);
      _objc_release(puVar5);
      puStack_258 = puVar3;
      uStack_250 = 0xc2000000;
      pcStack_248 = FUN_108558434;
      puStack_240 = &UNK_110841f80;
      uStack_238 = *(undefined8 *)(lVar7 + 0x20);
      _objc_retain(puVar9);
      puStack_230 = puVar9;
      func_0x000107c312d0("APPSTORE",&puStack_258);
      _objc_release(puStack_230);
    }
    _objc_release(puVar9);
  }
  _objc_release(uStack_208);
  _objc_release(ppuVar10);
  _objc_release(param_2);
  return;
}



/* Entry: 108558290; end: 10855842b;  */

void FUN_108558290(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10855842c;
  puStack_70 = &UNK_110842e18;
  _objc_retain(uVar5);
  uStack_68 = uVar5;
  func_0x00010c0f7fc0(uVar4);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bee8e40(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010bee8e40(uVar5);
    }
    else {
      puVar3 = PTR_PTR_1126b1358;
      func_0x00010bf5a440(PTR_PTR_1126b1358);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde3880(uVar5);
      _objc_release(puVar3);
      puStack_b8 = puVar1;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_108558434;
      puStack_a0 = &UNK_110841f80;
      uStack_98 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(puVar2);
      puStack_90 = puVar2;
      func_0x000107c312d0("APPSTORE",&puStack_b8);
      _objc_release(puStack_90);
    }
    _objc_release(puVar2);
  }
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10855842c; end: 108558433;  */

void FUN_10855842c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didEndTranscodingVideo_1125bb0d0);
  return;
}



/* Entry: 108558434; end: 10855846f;  */

void FUN_108558434(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108558470; end: 10855847f;  */

void FUN_108558470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bece690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),PTR_s__transcodeInputAnimatedImageWith_112591348,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108558480; end: 1085585b7;  */

void FUN_108558480(undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be96200(uVar1);
    func_0x00010bece760(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar1);
    _objc_release(param_2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be78d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar3 + 0x20),PTR_s__prepareOutputURL_11257bcf8);
  return;
}



/* Entry: 1085585b8; end: 1085585bf;  */

void FUN_1085585b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__prepareOutputURL_11257bcf8);
  return;
}



/* Entry: 1085585c0; end: 10855944b; -[SnapVideoFilter _transcodeInputAnimatedImageWithOutputBitrate:videoTargetSize:] */

void FUN_1085585c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *unaff_x26;
  undefined *puVar13;
  double dVar14;
  double *pdVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined1 auStack_298 [8];
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  ulong uStack_270;
  undefined *puStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  double *pdStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  double dStack_210;
  double *pdStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  double dStack_1e0;
  double *pdStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  double dStack_1b0;
  double *pdStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  double *pdStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_3 + 0x50);
  func_0x00010c296d80();
  if (iVar1 < 1) {
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uVar6 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf17d00();
    _objc_release(uVar6);
    uStack_2d0 = param_3;
    uStack_c8 = uVar10;
    func_0x00010bde4100();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uStack_2d0;
    func_0x00010c2791a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2c0 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uStack_e8 = 0xffffffffffffffff;
    if (uStack_2c0 != 0) {
      func_0x000109125e70(uStack_2c0,0,0,&uStack_e8);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uStack_2c8 = *(undefined8 *)(param_3 + 0x1e0);
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x90);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4a00();
    uVar6 = *(undefined8 *)(param_3 + 0x2d8);
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    dVar14 = *(double *)PTR__CGSizeZero_110347620;
    dVar17 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    pdStack_118 = *(double **)(PTR__kCMTimeRangeZero_110348668 + 8);
    dStack_120 = *(double *)PTR__kCMTimeRangeZero_110348668;
    uStack_108 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    dStack_110 = *(double *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_f8 = *(ulong *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    uStack_100 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    func_0x00010c24e340(dVar14,dVar17,0x3ff0000000000000,0,uVar10);
    _objc_release(uVar6);
    _objc_release(uVar10);
    uVar2 = param_3;
    func_0x00010c07f100();
    if ((int)uVar2 == 0) {
      func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x180));
      dVar19 = dVar14;
      func_0x00010c14e120(*(undefined8 *)(param_3 + 0x180));
      dVar14 = dVar14 * dVar19;
      dVar17 = dVar17 * dVar19;
      func_0x00010b690b78(dVar14,dVar17,0x500);
    }
    else {
      func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x180));
    }
    puStack_2d8 = PTR_PTR_1126da0b0;
    _objc_alloc();
    func_0x00010b68e0e4(dVar14,dVar17,param_1,param_2,0,0,0,0);
    puStack_2e0 = PTR_PTR_1126bc3e0;
    _objc_opt_new();
    puStack_2e8 = PTR_PTR_1126da0b8;
    _objc_alloc();
    puVar13 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040e80();
    _objc_release(puVar13);
    unaff_x26 = puStack_2e0;
    func_0x00010c29bac0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x26 == (undefined *)0x0) goto LAB_10855937c;
    uVar10 = 1;
    if (*(long *)(unaff_x26 + 0x30) != 1) goto LAB_108558980;
    uVar10 = 2;
    goto LAB_108558980;
  }
  func_0x00010bee8e20(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bf75cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0xd8),PTR_s_didEndTranscodingVideo_1125bb0d0);
    return;
  }
  do {
    ___stack_chk_fail();
LAB_10855937c:
    uVar10 = 1;
LAB_108558980:
    *(undefined8 *)(param_3 + 0x298) = uVar10;
    iVar1 = (int)*(undefined8 *)(param_3 + 0x158);
    func_0x00010bfd94e0();
    puVar13 = PTR__CGAffineTransformIdentity_110347008;
    if ((iVar1 != 0) && (*(long *)(param_3 + 0x1c8) != 0)) {
      uVar10 = 0;
      _dispatch_semaphore_create();
      puVar3 = PTR_PTR_1126b26d8;
      func_0x00010bf97920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b26e0;
      func_0x00010bfe8940(PTR_PTR_1126b26e0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_3 + 0x158);
      func_0x00010bf41e60();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar5;
      func_0x00010bf529e0();
      if (lVar11 != 0) {
        uVar6 = *(undefined8 *)(param_3 + 0x180);
        func_0x00010bfe9820();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_3 + 0x180);
        *(undefined8 *)(param_3 + 0x180) = uVar6;
        _objc_release(uVar9);
        puVar7 = PTR_PTR_1126bf508;
        _objc_alloc(PTR_PTR_1126bf508);
        puVar8 = PTR_PTR_1126bf4d0;
        func_0x00010c22bec0(PTR_PTR_1126bf4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x180));
        pdStack_118 = *(double **)(puVar13 + 8);
        dStack_120 = *(double *)puVar13;
        uStack_108 = *(undefined8 *)(puVar13 + 0x18);
        dStack_110 = *(double *)(puVar13 + 0x10);
        uStack_f8 = *(ulong *)(puVar13 + 0x28);
        uStack_100 = *(undefined8 *)(puVar13 + 0x20);
        func_0x00010c03c680(puVar7);
        _objc_release(puVar8);
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0xc2000000;
        pcStack_140 = FUN_108559454;
        puStack_138 = &UNK_1108be268;
        uStack_130 = param_3;
        _objc_retain(uVar10);
        pdStack_118 = *(double **)(PTR__kCMTimeZero_110348670 + 8);
        dStack_120 = *(double *)PTR__kCMTimeZero_110348670;
        dStack_110 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
        uStack_128 = uVar10;
        func_0x00010c2505e0(puVar7);
        _dispatch_semaphore_wait(uVar10,0xffffffffffffffff);
        _objc_release(uStack_128);
        _objc_release(puVar7);
      }
      _objc_release(lVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar10);
    }
    if (unaff_x26 == (undefined *)0x0) {
      uVar10 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x26 + 0x58);
      uVar10 = *(undefined8 *)(unaff_x26 + 0x50);
    }
    *(undefined8 *)(param_3 + 0x360) = uVar6;
    *(undefined8 *)(param_3 + 0x358) = uVar10;
    puVar3 = PTR_PTR_1126da0c0;
    _objc_alloc(PTR_PTR_1126da0c0);
    pdVar15 = *(double **)(puVar13 + 8);
    dVar14 = *(double *)puVar13;
    uVar6 = *(undefined8 *)(puVar13 + 0x18);
    dVar17 = *(double *)(puVar13 + 0x10);
    uVar16 = *(ulong *)(puVar13 + 0x28);
    uVar10 = *(undefined8 *)(puVar13 + 0x20);
    puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    dStack_120 = dVar14;
    pdStack_118 = pdVar15;
    dStack_110 = dVar17;
    uStack_108 = uVar6;
    uStack_100 = uVar10;
    uStack_f8 = uVar16;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_3 + 0x188));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfacb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e1e0(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar13);
    iVar1 = (int)*(undefined8 *)(param_3 + 0x158);
    func_0x00010bfd94e0();
    if (iVar1 != 0) {
      uVar9 = 0;
      _dispatch_semaphore_create();
      *(undefined1 *)(param_3 + 0x148) = 0;
      uVar12 = *(undefined8 *)(param_3 + 0x158);
      func_0x00010c0c4a00(param_3);
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_1085594ac;
      puStack_168 = &UNK_110a54ee8;
      uStack_160 = param_3;
      _objc_retain(uVar9);
      uStack_158 = uVar9;
      func_0x00010bfbfd80(*(undefined8 *)(param_3 + 0x358),*(undefined8 *)(param_3 + 0x360),
                          *(undefined8 *)(param_3 + 0x358),*(undefined8 *)(param_3 + 0x360),
                          0x3ff0000000000000,uVar12);
      _dispatch_semaphore_wait(uVar9,0xffffffffffffffff);
      _objc_release(uStack_158);
      _objc_release(uVar9);
    }
    if ((*(long *)(param_3 + 0x210) == 0) && (*(long *)(param_3 + 0x218) != 0)) {
      puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_3 + 0x210);
      *(undefined **)(param_3 + 0x210) = puVar13;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_3 + 0x218);
      *(undefined8 *)(param_3 + 0x218) = 0;
      _objc_release(uVar9);
    }
    func_0x00010be1ad20(param_3);
    if (*(char *)(param_3 + 0x14c) == '\x01') {
      uVar9 = *(undefined8 *)(param_3 + 0x210);
      *(undefined8 *)(param_3 + 0x210) = 0;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_3 + 0x218);
      *(undefined8 *)(param_3 + 0x218) = 0;
      _objc_release(uVar9);
    }
    if (((*(long *)(param_3 + 0x338) == 0) && (*(long *)(param_3 + 0x330) == 0)) &&
       ((uVar2 = param_3, func_0x00010c07f100(), (int)uVar2 == 0 ||
        (*(long *)(param_3 + 0x268) == 0)))) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar2 = param_3;
      dStack_1b0 = dVar14;
      pdStack_1a8 = pdVar15;
      dStack_1a0 = dVar17;
      uStack_198 = uVar6;
      uStack_190 = uVar10;
      uStack_188 = uVar16;
      dStack_120 = dVar14;
      pdStack_118 = pdVar15;
      dStack_110 = dVar17;
      uStack_108 = uVar6;
      uStack_100 = uVar10;
      uStack_f8 = uVar16;
      func_0x00010c07f100();
      if ((((uVar2 & 1) != 0) || (*(long *)(param_3 + 0x1d0) != 0)) &&
         (*(long *)(param_3 + 0x268) != 0)) {
        func_0x00010c0c2640(PTR_PTR_1126bf720);
        dVar20 = *(double *)(param_3 + 0x270);
        dVar19 = 0.0;
        dVar21 = dVar17;
        if (((dVar20 != 0.0) && (dVar19 = dVar14, dVar21 = 0.0, dVar20 != INFINITY)) &&
           (dVar19 = dVar17 * dVar20, dVar21 = dVar17, dVar14 <= dVar17 * dVar20)) {
          dVar19 = dVar14;
          dVar21 = dVar14 / dVar20;
        }
        if (*(long *)(param_3 + 0x268) == 0) {
          lVar11 = 0;
          uStack_1c8 = 0;
          dStack_1d0 = 0.0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          pdStack_1d8 = (double *)0x0;
          dStack_1e0 = 0.0;
        }
        else {
          func_0x00010bf27a80(&dStack_1e0,dVar20,dVar14,dVar17,dVar19,dVar21);
          lVar11 = *(long *)(param_3 + 0x268);
          dVar20 = *(double *)(param_3 + 0x270);
        }
        pdStack_118 = pdStack_1d8;
        dStack_120 = dStack_1e0;
        uStack_108 = uStack_1c8;
        dStack_110 = dStack_1d0;
        uStack_f8 = uStack_1b8;
        uStack_100 = uStack_1c0;
        uVar2 = param_3;
        uVar10 = uStack_1c0;
        dVar18 = dStack_1d0;
        func_0x00010c241520(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0();
        uVar16 = param_3;
        func_0x00010c241520(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe8380();
        if (lVar11 == 0) {
          uStack_1c8 = 0;
          dStack_1d0 = 0.0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          pdStack_1d8 = (double *)0x0;
          dStack_1e0 = 0.0;
        }
        else {
          func_0x00010bf27840(&dStack_1e0,dVar20,dVar14,dVar17,dVar19,dVar21,uVar10,dVar18,lVar11);
        }
        pdStack_1a8 = pdStack_1d8;
        dStack_1b0 = dStack_1e0;
        uStack_198 = uStack_1c8;
        dStack_1a0 = dStack_1d0;
        uStack_188 = uStack_1b8;
        uStack_190 = uStack_1c0;
        _objc_release(uVar16);
        _objc_release(uVar2);
      }
      puVar13 = PTR_PTR_1126da0c8;
      _objc_alloc(PTR_PTR_1126da0c8);
      puVar4 = PTR_PTR_1126bf4d0;
      func_0x00010c22bec0(PTR_PTR_1126bf4d0);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x26 == (undefined *)0x0) {
        uVar10 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x26 + 0x50);
        uVar10 = *(undefined8 *)(unaff_x26 + 0x58);
      }
      uStack_1c8 = uStack_108;
      dStack_1d0 = dStack_110;
      uStack_1b8 = uStack_f8;
      uStack_1c0 = uStack_100;
      pdStack_208 = pdStack_1a8;
      dStack_210 = dStack_1b0;
      uStack_1f8 = uStack_198;
      dStack_200 = dStack_1a0;
      uStack_1e8 = uStack_188;
      uStack_1f0 = uStack_190;
      pdStack_1d8 = pdStack_118;
      dStack_1e0 = dStack_120;
      func_0x00010c01cd40(uVar6,uVar10,puVar13);
      _objc_release(puVar4);
    }
    iVar1 = (int)*(undefined8 *)(param_3 + 0x50);
    func_0x00010c296d80();
    if (iVar1 < 1) {
      uVar2 = param_3;
      func_0x00010be78d60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126da0d0;
      _objc_alloc();
      uVar10 = *(undefined8 *)(param_3 + 0x90);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01e080();
      uVar6 = *(undefined8 *)(param_3 + 0x48);
      *(undefined **)(param_3 + 0x48) = puVar4;
      _objc_release(uVar6);
      _objc_release(uVar10);
      uVar6 = *(undefined8 *)(param_3 + 0xd8);
      _objc_retain(uVar6);
      uVar9 = *(undefined8 *)(param_3 + 0x78);
      _objc_retain(uVar9);
      pdStack_118 = &dStack_120;
      dStack_120 = 0.0;
      dStack_110 = 1.02270250269256e-312;
      uStack_108 = 0x108559598;
      uStack_100 = 0x1085595a8;
      _objc_retain(param_3);
      uStack_f8 = param_3;
      _objc_initWeak(&dStack_1b0,param_3);
      uVar10 = *(undefined8 *)(param_3 + 0x90);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _CACurrentMediaTime();
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb4e0(uVar10);
      _objc_release(puVar4);
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(param_3 + 0x48);
      puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_288 = 0xc2000000;
      pcStack_280 = FUN_1085595b0;
      puStack_278 = &UNK_1109776c8;
      pdStack_248 = &dStack_120;
      _objc_retain(uVar2);
      uStack_270 = uVar2;
      _objc_retain(unaff_x26);
      puStack_240 = &uStack_e0;
      puStack_268 = unaff_x26;
      uStack_260 = param_3;
      _objc_retain(uVar9);
      uStack_258 = uVar9;
      _objc_retain(uVar6);
      uStack_250 = uVar6;
      _objc_copyWeak(auStack_298,&dStack_1b0);
      uVar16 = param_3;
      func_0x00010bea17c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2505c0(uVar10);
      _objc_release(uVar16);
      iVar1 = (int)*(undefined8 *)(param_3 + 0x50);
      func_0x00010c296d80();
      if (0 < iVar1) {
        func_0x00010bf2efa0(*(undefined8 *)(param_3 + 0x48));
      }
      _objc_destroyWeak(auStack_298);
      _objc_release(uStack_250);
      _objc_release(uStack_258);
      _objc_release(puStack_268);
      _objc_release(uStack_270);
      _objc_destroyWeak(&dStack_1b0);
      __Block_object_dispose(&dStack_120,8);
      _objc_release(uStack_f8);
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    else {
      func_0x00010bee8e20(param_3);
      uVar10 = *(undefined8 *)(param_3 + 0x98);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94260();
      _objc_release(uVar10);
      puStack_d8[3] = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
      puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_230 = 0xc2000000;
      pcStack_228 = FUN_10855958c;
      puStack_220 = &UNK_110842e18;
      uStack_218 = param_3;
      func_0x00010c0f7fc0(*(undefined8 *)(param_3 + 0x78));
    }
    _objc_release(puVar13);
    _objc_release(puVar3);
    _objc_release(unaff_x26);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2e0);
    _objc_release(puStack_2d8);
    _objc_release(uStack_2c8);
    _objc_release(uStack_2c0);
    _objc_release(uStack_2d0);
    __Block_object_dispose(&uStack_e0,8);
  } while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8);
  return;
}



/* Entry: 10855944c; end: 108559453;  */

void FUN_10855944c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 108559454; end: 1085594ab;  */

void FUN_108559454(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x180);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x180) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085594ac; end: 10855958b;  */

void FUN_1085594ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x210);
  *(undefined8 *)(lVar3 + 0x210) = param_2;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x220);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x220) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x218);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x218) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10855958c; end: 1085595af;  */

void FUN_10855958c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8),
             PTR_s_didEndTranscodingVideo_1125bb0d0);
  return;
}



/* Entry: 1085595b0; end: 1085599ab;  */

void FUN_1085595b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) + 0x48);
  func_0x00010c252d60();
  if (lVar1 == 4) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    fVar7 = -1.0;
    if (0.0 < *(double *)(lVar1 + 0x188)) {
      lVar1 = *(long *)(lVar1 + 0x48);
      func_0x00010bfb6e80(lVar1);
      fVar7 = (float)((double)lVar1 /
                     *(double *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) + 0x188)
                     );
    }
    FUN_1085599ac(*(undefined8 *)(param_1 + 0x20),auStack_88,auStack_90);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    uVar2 = uVar6;
    func_0x00010be37600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x50);
      uVar9 = *(undefined8 *)(lVar1 + 0x58);
    }
    func_0x00010c0eeda0();
    func_0x00010be51480(uVar8,uVar9,fVar7,uVar6);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    puVar4 = PTR_PTR_1126b1358;
    func_0x00010bf5a440(PTR_PTR_1126b1358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3880(uVar2);
  }
  else {
    lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) + 0x48);
    func_0x00010c252d60();
    if (lVar1 == 3) {
      func_0x00010bee8e20();
      goto LAB_1085598c0;
    }
    puVar3 = *(undefined **)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) + 0x48);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c252d60();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = puVar5;
    }
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    func_0x00010be960a0(uVar2);
    func_0x00010bee8e40(uVar2);
  }
  _objc_release(puVar4);
LAB_1085598c0:
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) + 0x98);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) =
       *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar6);
  return;
}



/* Entry: 1085599ac; end: 108559b13;  */

void FUN_1085599ac(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      func_0x00010c26f620(auStack_70,puVar3);
      uStack_88 = uStack_50;
      dStack_90 = dStack_58;
      uStack_80 = uStack_48;
      dVar6 = dStack_58;
      _CMTimeGetSeconds(&dStack_90);
      lVar5 = (long)(dVar6 * 1000.0);
    }
    *param_2 = lVar5;
    if (puVar4 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      func_0x00010c26f620(auStack_70,puVar4);
      uStack_88 = uStack_50;
      dStack_90 = dStack_58;
      uStack_80 = uStack_48;
      _CMTimeGetSeconds(&dStack_90);
      lVar5 = (long)(dStack_58 * 1000.0);
    }
    *param_3 = lVar5;
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108559b14; end: 108559b1b;  */

void FUN_108559b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didEndTranscodingVideo_1125bb0d0);
  return;
}



/* Entry: 108559b1c; end: 108559ba3;  */

void FUN_108559b1c(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108559ba4;
    puStack_48 = &UNK_110868698;
    lStack_40 = param_2;
    uStack_38 = param_1;
    func_0x000107c312d0("APPSTORE",&puStack_60);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108559ba4; end: 108559bc3;  */

void FUN_108559ba4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x2c0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108559bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 108559bc4; end: 108559d73; -[SnapVideoFilter transcodeVideoURLs:withTimeRanges:videoSourceRenderSize:videoTargetSize:outputURLProviderBlock:completion:] */

void FUN_108559bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR_PTR_1126ae790;
  _objc_retain(param_7);
  uVar1 = param_5;
  _objc_opt_class(param_5);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_6,0x19,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c0b8600(param_7,param_6,&PTR___NSConcreteGlobalBlock_110add340);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_108559d74;
  puStack_c0 = &UNK_110a550c8;
  uStack_b8 = param_5;
  uStack_b0 = uVar1;
  uStack_a8 = param_8;
  uStack_a0 = param_9;
  uStack_98 = param_10;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  func_0x00010be96900(param_5,param_6,puVar2,2,&puStack_d8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 108559d74; end: 108559ddb;  */

void FUN_108559d74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x228) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = uVar1;
  func_0x00010be96200(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bece770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),uVar1,
             PTR_s__transcodeMediaCompositionTrackS_112591380,uVar3,uVar2,uVar4,0,uVar5,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 108559ddc; end: 108559f53; -[SnapVideoFilter transcodeSegmentMedias:withTimeRanges:videoSourceRenderSize:outputURLProviderBlock:completion:] */

void FUN_108559ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126ae790;
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_4,0x19,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108559f54;
  puStack_a0 = &UNK_110a550f8;
  uStack_98 = param_3;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_1;
  uStack_68 = param_2;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010be96900(param_3,param_4,puVar2,2,&puStack_b8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 108559f54; end: 108559fc3;  */

void FUN_108559f54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x228) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = uVar1;
  func_0x00010be96200(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bece770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,uVar1,PTR_s__transcodeMediaCompositionTrackS_112591380,uVar3,uVar2,uVar4,0,uVar5,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 108559fc4; end: 10855adaf; -[SnapVideoFilter _transcodingRequestInputWithSourceMedias:timeRanges:expectedOutputBitrate:audioTargetBitrate:videoSourceRenderSize:videoTargetSize:] */

void FUN_108559fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined *param_9,undefined *param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puStack_180;
  undefined *puStack_160;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_150 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_160 = param_7;
  if (*(long *)(param_5 + 0xe0) == 0) {
    puVar13 = PTR_PTR_1126bf7a8;
    func_0x00010af219f8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar13;
    func_0x00010af22320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af22364();
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(param_5 + 0x168);
      _objc_retain(puVar13);
    }
    _objc_release(puVar13);
    puVar4 = param_5;
    func_0x00010c0c4a00();
    if (puVar13 != (undefined *)0x0) {
      *(undefined **)(puVar13 + 0x10) = puVar4;
      _objc_retain(puVar13);
    }
    _objc_release(puVar13);
    puStack_148 = PTR_PTR_1126bf7b0;
    func_0x00010af20be0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af20c30();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puStack_148;
    func_0x00010af20ce8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af228f4(puVar13,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010af2244c(param_1,param_2,puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af2241c(param_3,param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (puVar13 == (undefined *)0x0) goto LAB_10855ad64;
    *(undefined8 *)(puVar13 + 0xa0) = *(undefined8 *)(param_5 + 0x248);
    _objc_retain(puVar13);
    _objc_release(puVar13);
    *(undefined8 *)(puVar13 + 0xa8) = *(undefined8 *)(param_5 + 0x250);
    _objc_retain(puVar13);
    puStack_150 = puVar13;
    goto LAB_10855a4a0;
  }
  func_0x00010bf529e0(param_7);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_7);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_7;
  func_0x00010bf529e0();
  if (puVar13 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      lVar14 = *(long *)(param_5 + 0xe0);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126bf7a8;
      if (lVar14 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar14 + 8);
      }
      _objc_retain(uVar15);
      func_0x00010af21a18(puVar4,uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      func_0x00010af2244c(param_1,param_2,puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af2241c(param_3,param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        _objc_release();
        _objc_release(0);
        _objc_release(0);
      }
      else {
        *(undefined **)(puVar4 + 0x38) = param_9;
        _objc_retain(puVar4);
        _objc_release(puVar4);
        *(undefined **)(puVar4 + 0x40) = param_10;
        _objc_retain(puVar4);
        _objc_release(puVar4);
        *(undefined8 *)(puVar4 + 0xf8) = 0;
        _objc_retain(puVar4);
        _objc_release(puVar4);
        *(undefined8 *)(puVar4 + 0x70) = *(undefined8 *)(param_5 + 0x228);
        _objc_retain(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010af22820(puVar4,*(undefined8 *)(param_5 + 0x2f0));
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126bf7b8;
      func_0x00010af206f8(PTR_PTR_1126bf7b8,lVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010af22938();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010af207cc(puVar1,puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010af20854();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puStack_150);
      _objc_release(puVar3);
      if (puVar2 == (undefined *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(puVar2 + 0x78);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(uVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puStack_148);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(lVar14);
      puVar13 = puVar13 + 1;
      puVar4 = param_7;
      func_0x00010bf529e0();
    } while (puVar13 < puVar4);
  }
  puVar4 = param_7;
  func_0x00010911ff8c(param_7,param_8,puStack_148);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010911cb4c(&puStack_120);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(param_5 + 0x1b8);
  func_0x00010bf529e0();
  if (lVar14 == 0) {
    param_9 = (undefined *)0x0;
  }
  else {
    puVar13 = param_5;
    func_0x00010bde4100();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_118;
    puStack_d0 = puStack_120;
    uStack_c0 = uStack_110;
    puVar3 = puVar2;
    func_0x00010911d6fc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar13);
    if (*(long *)(param_5 + 0x1a8) == 0) {
      _objc_retain(puVar3);
      param_9 = puVar3;
    }
    else {
      func_0x00010befa120(puVar1);
      param_9 = (undefined *)0x0;
    }
    _objc_release(puVar3);
  }
  lVar14 = *(long *)(param_5 + 0x1c0);
  func_0x00010bf529e0();
  if (lVar14 != 0) {
    uVar16 = 0;
    uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    puStack_160 = *(undefined **)PTR__kCMTimeZero_110348670;
    uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    do {
      uVar5 = *(undefined8 *)(param_5 + 0x1c0);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uStack_118;
      puStack_d0 = puStack_120;
      uStack_c0 = uStack_110;
      uVar6 = uVar5;
      puStack_f0 = puStack_160;
      uStack_e8 = uVar17;
      uStack_e0 = uVar15;
      func_0x00010911d9c8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010befa120(puVar1);
      _objc_release(uVar6);
      uVar16 = uVar16 + 1;
      uVar7 = *(ulong *)(param_5 + 0x1c0);
      func_0x00010bf529e0();
    } while (uVar16 < uVar7);
  }
  puVar2 = puVar4;
  func_0x00010911db9c(puVar4,param_9,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd13c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bf6c0;
  _objc_alloc();
  if (param_5 == (undefined *)0x0) {
    func_0x00010b743b10(puVar13,puVar2,0,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = param_5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b743b10(puVar13,puVar2,0,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bf7c0;
  _objc_alloc();
  func_0x00010af1fd14();
  _objc_release(puVar13);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(puVar1);
  param_10 = puVar4;
  do {
    _objc_release(puVar4);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(param_8);
    _objc_release(param_7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    ___stack_chk_fail();
    param_5 = puVar3;
LAB_10855ad64:
    _objc_release();
    puStack_150 = puVar13;
LAB_10855a4a0:
    _objc_release(puStack_150);
    func_0x00010af22608(puStack_150,*(undefined8 *)(param_5 + 0x268));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (puStack_150 == (undefined *)0x0) {
      _objc_release();
      func_0x00010af22580(0,*(undefined8 *)(param_5 + 0x2a0));
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(0);
      _objc_release(0);
      _objc_release(0);
      _objc_release(0);
    }
    else {
      *(undefined8 *)(puStack_150 + 200) = *(undefined8 *)(param_5 + 0x270);
      _objc_retain(puStack_150);
      _objc_release(puStack_150);
      func_0x00010af22580(puStack_150,*(undefined8 *)(param_5 + 0x2a0));
      _objc_unsafeClaimAutoreleasedReturnValue();
      *(undefined **)(puStack_150 + 0x38) = param_9;
      _objc_retain();
      _objc_release(puStack_150);
      *(undefined **)(puStack_150 + 0x40) = param_10;
      _objc_retain(puStack_150);
      _objc_release(puStack_150);
      *(undefined8 *)(puStack_150 + 0x98) = *(undefined8 *)(param_5 + 0x240);
      _objc_retain(puStack_150);
      _objc_release(puStack_150);
      *(undefined8 *)(puStack_150 + 0x70) = *(undefined8 *)(param_5 + 0x228);
      _objc_retain(puStack_150);
      _objc_release(puStack_150);
      *(undefined8 *)(puStack_150 + 0xf8) = 0;
      _objc_retain(puStack_150);
    }
    _objc_release(puStack_150);
    func_0x00010af22744(puStack_150,*(undefined8 *)(param_5 + 800));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar14 = *(long *)(param_5 + 0x218);
    func_0x00010c08fa60();
    if (lVar14 == 0) {
      lVar14 = *(long *)(param_5 + 0x210);
      if (lVar14 != 0) {
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010af224ac(puStack_150,lVar14);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar14);
      }
    }
    else {
      func_0x00010af224ac(puStack_150,*(undefined8 *)(param_5 + 0x218));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(long *)(param_5 + 0x1b8) != 0) {
      func_0x00010af2268c(puStack_150);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (*(long *)(param_5 + 0x1c0) != 0) {
      func_0x00010af226d0(puStack_150);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    if (puStack_150 != (undefined *)0x0) {
      *(undefined8 *)(puStack_150 + 0x78) = *(undefined8 *)(param_5 + 0x200);
      _objc_retain(puStack_150);
    }
    _objc_release(puStack_150);
    func_0x00010af227cc(puStack_150,*(undefined8 *)(param_5 + 0x158));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af224f0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af225c4();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af2265c(*(undefined8 *)(param_5 + 0x348),*(undefined8 *)(param_5 + 0x350));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af22820();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf7b8;
    func_0x00010af206d8();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puStack_150;
    func_0x00010af22938(puStack_150);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af207cc(puVar4,puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar1 = puStack_150;
    func_0x00010af22938();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af207cc(puVar4,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar13 = param_5;
    func_0x00010be1b2c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af20810(puVar4,puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar13);
    if (puVar1 == (undefined *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(puVar1 + 0x78);
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_7);
    func_0x00010bf0a0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_7;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        func_0x00010befa120(puVar2);
        puVar13 = puVar13 + 1;
        puVar3 = param_7;
        func_0x00010bf529e0();
      } while (puVar13 < puVar3);
    }
    func_0x00010911ff8c(param_7,param_8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_7;
    func_0x000109120338();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010911cb4c(&puStack_d0,puVar9);
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(param_5 + 0x1b8);
    func_0x00010bf529e0();
    if (lVar14 == 0) {
      puStack_180 = (undefined *)0x0;
    }
    else {
      puVar13 = param_5;
      func_0x00010bde4100();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar13;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = uStack_c8;
      puStack_120 = puStack_d0;
      uStack_110 = uStack_c0;
      puVar11 = puVar3;
      func_0x00010911d6fc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar13);
      if (*(long *)(param_5 + 0x1a8) == 0) {
        _objc_retain(puVar11);
        puStack_180 = puVar11;
      }
      else {
        func_0x00010befa120(puVar10);
        puStack_180 = (undefined *)0x0;
      }
      _objc_release(puVar11);
    }
    lVar14 = *(long *)(param_5 + 0x1c0);
    func_0x00010bf529e0();
    if (lVar14 != 0) {
      uVar16 = 0;
      uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      puVar13 = *(undefined **)PTR__kCMTimeZero_110348670;
      uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      do {
        puStack_f0 = puVar13;
        uStack_e8 = uVar17;
        uStack_e0 = uVar15;
        if (*(long *)(param_5 + 0x288) == 0) {
          lVar14 = *(long *)(param_5 + 0x260);
          func_0x00010bf529e0();
          if (lVar14 != 0) {
            lVar14 = *(long *)(param_5 + 0x260);
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            if (lVar14 == 0) {
              uStack_108 = 0;
              uStack_110 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              uStack_118 = 0;
              puStack_120 = (undefined *)0x0;
            }
            else {
              func_0x00010bdc1120(&puStack_120,lVar14);
            }
            _objc_release(lVar14);
            goto LAB_10855aaec;
          }
        }
        else {
          func_0x00010bdc1120(&puStack_120);
LAB_10855aaec:
          uStack_e8 = uStack_118;
          puStack_f0 = puStack_120;
          uStack_e0 = uStack_110;
        }
        uVar5 = *(undefined8 *)(param_5 + 0x1c0);
        func_0x00010c0dfd40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uStack_118 = uStack_c8;
        puStack_120 = puStack_d0;
        uStack_110 = uStack_c0;
        uVar6 = uVar5;
        func_0x00010911d9c8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010befa120(puVar10);
        _objc_release(uVar6);
        uVar16 = uVar16 + 1;
        uVar7 = *(ulong *)(param_5 + 0x1c0);
        func_0x00010bf529e0();
      } while (uVar16 < uVar7);
    }
    puVar11 = puVar9;
    func_0x00010911db9c(puVar9,puStack_180,puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd13c0();
    _objc_retainAutoreleasedReturnValue();
    param_10 = PTR_PTR_1126bf6c0;
    _objc_alloc();
    if (param_5 == (undefined *)0x0) {
      func_0x00010b743b10(param_10,puVar11,0,0);
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = param_5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b743b10(param_10,puVar11,0,puVar13);
      _objc_release(puVar13);
    }
    puVar13 = PTR_PTR_1126bf7c0;
    _objc_alloc();
    puVar12 = puVar4;
    func_0x00010af20854();
    _objc_retainAutoreleasedReturnValue();
    param_9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010af1fd14(puVar13,param_10,param_9);
    _objc_release(param_9);
    _objc_release(puVar12);
    _objc_release(param_10);
    _objc_release(param_5);
    _objc_release(puVar11);
    _objc_release(puStack_180);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar1);
    param_7 = puStack_160;
  } while( true );
}



/* Entry: 10855adb0; end: 10855b0cf; -[SnapVideoFilter _transcodeMediaCompositionTrackSegmentsWithSourceMedias:timeRanges:outputURLProviderBlock:expectedOutputBitrate:audioTargetBitrate:videoSourceRenderSize:videoTargetSize:completion:] */

void FUN_10855adb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar3 = param_5;
  func_0x00010beceae0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_9;
  (**(code **)(param_9 + 0x10))(param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4a88;
  func_0x00010af200a8(PTR_PTR_1126c4a88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010af200fc();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af200c8();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  uStack_a0 = 0x108559598;
  uStack_98 = 0x1085595a8;
  _objc_retain(param_5);
  lStack_90 = param_5;
  _objc_initWeak(auStack_c0,param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(param_5 + 0x1a8) == 0) {
    lVar7 = *(long *)(param_5 + 0x1c0);
    func_0x00010bf529e0();
    if (lVar7 == 0) goto LAB_10855af64;
  }
  if (*(long *)(param_5 + 0x290) != 0) {
    iVar2 = (int)*(undefined8 *)(param_5 + 0x158);
    func_0x00010bfd94e0();
    if (iVar2 != 0) {
      puStack_e8 = puVar1;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_10855b0d0;
      puStack_d0 = &UNK_110a55128;
      _objc_copyWeak(auStack_c8,auStack_c0);
      func_0x00010c1d7480(*(undefined8 *)(param_5 + 0x158));
      _objc_destroyWeak(auStack_c8);
    }
  }
LAB_10855af64:
  uVar8 = *(undefined8 *)(param_5 + 0x80);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10855b2f4;
  puStack_100 = &UNK_110a55158;
  puStack_f0 = &uStack_b8;
  _objc_retain(param_12);
  uStack_f8 = param_12;
  _objc_copyWeak(auStack_120,auStack_c0);
  func_0x00010c25f8e0(uVar8);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_120);
  _objc_release(uStack_f8);
  _objc_destroyWeak(auStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(lStack_90);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10855b0d0; end: 10855b22f;  */

void FUN_10855b0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = param_2;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(lVar1 + 0x14c) == '\x01') {
      _objc_release(uVar3);
      uVar3 = 0;
    }
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x210);
    *(undefined8 *)(lVar1 + 0x210) = param_2;
    _objc_release(uVar2);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x218);
    *(undefined8 *)(lVar1 + 0x218) = uVar3;
    _objc_release(uVar2);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x220);
    *(undefined8 *)(lVar1 + 0x220) = param_2;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar1 + 0x2a0);
    *(undefined8 *)(lVar1 + 0x2a0) = param_3;
    _objc_release(uVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10855b230;
    puStack_58 = &UNK_110841fb0;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    uStack_50 = param_2;
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10855b230; end: 10855b2f3;  */

void FUN_10855b230(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _UIImagePNGRepresentation(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29adc0(lVar5);
    _objc_release(uVar6);
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 10855b2f4; end: 10855b51f;  */

void FUN_10855b2f4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == 2) {
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010be960a0(uVar1);
    func_0x00010bee8e40(uVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_4);
  }
  else {
    if (param_2 == 1) {
      func_0x00010bee8e20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar4);
    }
    else {
      if (param_2 != 0) goto LAB_10855b4cc;
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      uVar1 = *(undefined8 *)(lVar3 + 0x48);
      *(undefined8 *)(lVar3 + 0x48) = 0;
      _objc_release(uVar1);
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      uVar1 = *(undefined8 *)(lVar3 + 0x2c0);
      *(undefined8 *)(lVar3 + 0x2c0) = 0;
      _objc_release(uVar1);
      if (param_3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(param_3 + 0x10);
      }
      _objc_retain(lVar3);
      _objc_release(lVar3);
      if (lVar3 != 0) {
        if (param_3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(param_3 + 0x10);
        }
        _objc_retain(uVar1);
        lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        uVar2 = *(undefined8 *)(lVar3 + 0x218);
        *(undefined8 *)(lVar3 + 0x218) = uVar1;
        _objc_release(uVar2);
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        if (param_3 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(param_3 + 0x10);
        }
        _objc_retain(uVar1);
        func_0x00010c14d040();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
        uVar2 = *(undefined8 *)(lVar3 + 0x210);
        *(undefined **)(lVar3 + 0x210) = puVar4;
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      lVar3 = *(long *)(param_1 + 0x20);
      if (param_3 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = *(undefined **)(param_3 + 8);
      }
      _objc_retain(puVar4);
      (**(code **)(lVar3 + 0x10))(lVar3,puVar4,0);
    }
    _objc_release(puVar4);
  }
LAB_10855b4cc:
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10855b520; end: 10855b5a7;  */

void FUN_10855b520(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10855b5a8;
  puStack_48 = &UNK_11085ae18;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10855b5a8; end: 10855b5eb;  */

void FUN_10855b5a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x2c0) != 0)) {
    (**(code **)(*(long *)(lVar1 + 0x2c0) + 0x10))(*(undefined4 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10855b5ec; end: 10855bef3; -[SnapVideoFilter _transcodeInputVideoWithOutputBitrate:audioTargetBitrate:videoTargetSize:skipTranscodingIfPossible:] */

void FUN_10855b5ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined8 uVar17;
  long lStack_2f8;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)*(undefined8 *)(param_3 + 0x50);
  func_0x00010c296d80();
  if (iVar2 < 1) {
    lStack_2f8 = *(long *)(param_3 + 0x178);
    _objc_retain(lStack_2f8);
    if (lStack_2f8 == 0) {
      lStack_2f8 = *(long *)(param_3 + 0x290);
      if ((lStack_2f8 == 0) || (*(long *)(param_3 + 0x288) == 0)) {
        lStack_2f8 = 0;
      }
      else {
        _objc_retain(lStack_2f8);
        uStack_98 = *(undefined8 *)(param_3 + 0x288);
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_3 + 0x260);
        *(undefined **)(param_3 + 0x260) = puVar3;
        _objc_release(uVar15);
      }
    }
    if ((*(long *)(param_3 + 0x170) == 0) ||
       (*(char *)(*(long *)(param_3 + 0x170) + 0x13) != '\x01')) {
      bVar16 = 0;
    }
    else {
      bVar16 = *(byte *)(param_3 + 0x14b) ^ 1;
    }
    ppuVar4 = *(undefined ***)(param_3 + 0x78);
    _objc_retain();
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    uStack_b0 = 0x108559598;
    uStack_a8 = 0x1085595a8;
    uVar15 = *(undefined8 *)(param_3 + 0x1e0);
    func_0x00010bf51e00();
    ppuVar5 = (undefined **)puStack_c0[5];
    uStack_a0 = uVar15;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c124d20();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x2020000000;
    uStack_d0 = 0;
    lVar7 = *(long *)(param_3 + 0x260);
    func_0x00010bf529e0();
    if (lVar7 == 1) {
      lVar8 = puStack_c0[5];
      func_0x00010bf529e0();
      bVar1 = lVar8 != 0;
    }
    else {
      bVar1 = false;
    }
    uVar17 = *(undefined8 *)(param_3 + 0xd8);
    _objc_initWeak(auStack_f0,uVar17);
    _objc_retain();
    uVar15 = uVar17;
    func_0x00010bf27020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    uStack_108 = 0x108559598;
    uStack_100 = 0x1085595a8;
    puVar9 = auStack_f0;
    _objc_loadWeakRetained();
    puVar10 = puVar9;
    func_0x00010bf27680();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar10;
    _objc_release(puVar9);
    ppuVar11 = ppuVar6;
    func_0x00010c0720c0();
    if (((ulong)ppuVar11 & 1) == 0) {
      puVar10 = auStack_f0;
      _objc_loadWeakRetained(puVar10);
      func_0x00010bf3ad80();
      _objc_release(puVar10);
      uVar17 = puStack_118[5];
      puStack_118[5] = 0;
      _objc_release(uVar17);
      *(byte *)(puStack_e0 + 3) = bVar16 & 1;
    }
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x2020000000;
    uVar12 = *(undefined8 *)(param_3 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010bf17d00();
    _objc_release(uVar12);
    unaff_x20 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    uStack_158 = 0x108559598;
    uStack_150 = 0x1085595a8;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110daafd8;
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_10855bf08;
    puStack_1f8 = &UNK_110a55228;
    uStack_1a0 = 0;
    lStack_1f0 = param_3;
    puStack_168 = &uStack_170;
    uStack_128 = uVar17;
    _objc_copyWeak(auStack_1a8,auStack_f0);
    puStack_1c8 = &uStack_c8;
    puStack_1c0 = &uStack_140;
    puStack_1d0 = &uStack_170;
    uStack_198 = param_1;
    uStack_190 = param_2;
    uStack_188 = param_5;
    uStack_180 = param_6;
    uStack_178 = param_7;
    uStack_177 = bVar1;
    _objc_retain(lStack_2f8);
    lStack_1e8 = lStack_2f8;
    _objc_retain(ppuVar5);
    puStack_1b8 = &uStack_e8;
    puStack_1b0 = &uStack_120;
    ppuStack_1e0 = ppuVar5;
    uStack_176 = lVar7 == 1;
    _objc_retain(ppuVar6);
    ppuVar11 = &puStack_210;
    ppuStack_1d8 = ppuVar6;
    _objc_retainBlock();
    uVar13 = *(ulong *)(param_3 + 0x260);
    func_0x00010bf529e0();
    ppuVar14 = ppuVar6;
    func_0x00010c08fa60();
    unaff_x21 = ppuVar6;
    if ((ppuVar14 == (undefined **)0x0) || (1 < uVar13)) {
      uVar17 = *(undefined8 *)(param_3 + 0x78);
      func_0x00010c11de00(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9520(lStack_2f8);
      _objc_release(uVar17);
    }
    else {
      _objc_initWeak(auStack_218,*(undefined8 *)(param_3 + 0x98));
      _objc_initWeak(auStack_220,param_3);
      lVar7 = puStack_118[5];
      if ((bVar16 & 1) == 0) {
        if (lVar7 == 0) {
          puVar10 = auStack_f0;
          _objc_loadWeakRetained(puVar10);
          func_0x00010bf3ad80();
          _objc_release(puVar10);
          *(undefined1 *)(puStack_e0 + 3) = 0;
          ppuVar14 = ppuVar4;
          func_0x00010c11de00(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9520(lStack_2f8);
          _objc_release(ppuVar14);
        }
        else {
          func_0x00010bfbc3e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_2e8 = (undefined *)unaff_x20;
          uStack_2e0 = 0xc2000000;
          pcStack_2d8 = FUN_10855e634;
          puStack_2d0 = &UNK_110a55288;
          puStack_2a8 = &uStack_c8;
          lStack_2c8 = param_3;
          _objc_retain(ppuVar11);
          unaff_x20 = &puStack_2e8;
          ppuStack_2b0 = ppuVar11;
          _objc_copyWeak(auStack_298,auStack_f0);
          puStack_2a0 = &uStack_e8;
          _objc_retain(lStack_2f8);
          lStack_2c0 = lStack_2f8;
          _objc_retain(ppuVar4);
          ppuStack_2b8 = ppuVar4;
          func_0x00010c297260(lVar7);
          _objc_release(lVar7);
          _objc_release(ppuStack_2b8);
          _objc_release(lStack_2c0);
          _objc_destroyWeak(auStack_298);
          _objc_release(ppuStack_2b0);
          unaff_x21 = ppuVar4;
        }
      }
      else if (lVar7 == 0) {
        puVar3 = PTR_PTR_1126ae560;
        _objc_opt_new(PTR_PTR_1126ae560);
        puVar10 = auStack_f0;
        _objc_loadWeakRetained(puVar10);
        func_0x00010c1755a0();
        _objc_release(puVar10);
        _objc_release(puVar3);
        puVar9 = auStack_f0;
        _objc_loadWeakRetained();
        puVar10 = puVar9;
        func_0x00010bf27680();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = puStack_118[5];
        puStack_118[5] = puVar10;
        _objc_release(uVar17);
        _objc_release(puVar9);
        puVar10 = auStack_f0;
        _objc_loadWeakRetained(puVar10);
        func_0x00010c175380();
        _objc_release(puVar10);
        *(undefined1 *)(puStack_e0 + 3) = 1;
        ppuVar14 = ppuVar4;
        func_0x00010c11de00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9520(lStack_2f8);
        _objc_release(ppuVar14);
      }
      else {
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_290 = (undefined *)unaff_x20;
        uStack_288 = 0xc2000000;
        pcStack_280 = FUN_10855e38c;
        puStack_278 = &UNK_110a55258;
        _objc_copyWeak(auStack_238,auStack_220);
        _objc_copyWeak(auStack_230,auStack_218);
        puStack_250 = &uStack_140;
        unaff_x20 = &puStack_290;
        _objc_copyWeak(auStack_228,auStack_f0);
        puStack_248 = &uStack_120;
        _objc_retain(ppuVar6);
        puStack_240 = &uStack_e8;
        ppuStack_270 = ppuVar6;
        _objc_retain(lStack_2f8);
        lStack_268 = lStack_2f8;
        _objc_retain(ppuVar4);
        ppuStack_260 = ppuVar4;
        _objc_retain(ppuVar11);
        ppuStack_258 = ppuVar11;
        func_0x00010c297260(lVar7);
        _objc_release(lVar7);
        _objc_release(ppuStack_258);
        _objc_release(ppuStack_260);
        _objc_release(lStack_268);
        _objc_release(ppuStack_270);
        _objc_destroyWeak(auStack_228);
        _objc_destroyWeak(auStack_230);
        _objc_destroyWeak(auStack_238);
        unaff_x21 = &puStack_290;
      }
      _objc_destroyWeak(auStack_220);
      _objc_destroyWeak(auStack_218);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuStack_1d8);
    _objc_release(ppuStack_1e0);
    _objc_release(lStack_1e8);
    _objc_destroyWeak(auStack_1a8);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(ppuStack_148);
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(puStack_f8);
    _objc_release(uVar15);
    _objc_destroyWeak(auStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    _objc_release(ppuVar4);
    _objc_release(lStack_2f8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return;
    }
  }
  else {
    func_0x00010bee8e20(param_3);
    lStack_2f8 = *(long *)(param_3 + 0xd8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
                    /* WARNING: Could not recover jumptable at 0x00010bf75cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lStack_2f8,PTR_s_didEndTranscodingVideo_1125bb0d0);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 0xd);
  _objc_destroyWeak(unaff_x21 + 0xc);
  _objc_destroyWeak(unaff_x21 + 0xb);
  _objc_destroyWeak(auStack_220);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1a8);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_destroyWeak(auStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  uVar15 = 8;
  __Block_object_dispose(&uStack_c8,8);
  __Unwind_Resume(lStack_2f8);
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar15,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 10855bef4; end: 10855bf07;  */

void FUN_10855bef4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfadeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterId_1125c9150);
  return;
}



/* Entry: 10855bf08; end: 10855d74b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10855bf08(double param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  double dVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  undefined8 uVar38;
  ulong in_stack_fffffffffffffbd0;
  long lStack_350;
  undefined *puStack_338;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  double *pdStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [8];
  double dStack_228;
  long lStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long alStack_1f0 [2];
  double dStack_1e0;
  double *pdStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  double dStack_1a0;
  double *pdStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  double *pdStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  double *pdStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double *pdStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar14 = param_3;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  if (uVar3 == 0) {
    if ((param_6 != 0) && (lVar18 = param_6, func_0x00010c29bc00(), lVar18 == 0)) {
      func_0x00010bf14ee0();
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee8e40(*(undefined8 *)(param_2 + 0x20));
    param_2 = param_2 + 0x68;
    _objc_loadWeakRetained(param_2);
    func_0x00010bf75ca0();
    _objc_release(param_2);
    _objc_release(puVar5);
    goto LAB_10855d6a8;
  }
  func_0x00010c276aa0();
  uVar14 = param_3;
  func_0x00010c299760();
  uVar4 = uVar14;
  func_0x000109128d28();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(*(long *)(param_2 + 0x40) + 8);
  uVar16 = *(undefined8 *)(lVar18 + 0x28);
  *(ulong *)(lVar18 + 0x28) = uVar4;
  _objc_release(uVar16);
  if (param_3 == 0) {
    dStack_d8 = 0.0;
    pdStack_d0 = (double *)0x0;
    dStack_c8 = 0.0;
  }
  else {
    func_0x00010bf8b160(&dStack_d8,param_3);
  }
  _CMTimeGetSeconds(&dStack_d8);
  dVar24 = *(double *)(*(long *)(param_2 + 0x20) + 0x240);
  dVar28 = -dVar24;
  dVar30 = dVar28;
  if (0.0 <= dVar24) {
    dVar30 = dVar24;
  }
  func_0x00010c106f40(&dStack_d8,uVar3);
  func_0x00010b691288();
  func_0x00010bebc520(*(undefined8 *)(param_2 + 0x20));
  lVar18 = *(long *)(param_2 + 0x20);
  dVar25 = *(double *)(lVar18 + 0x248);
  if (dVar25 == 0.0) {
    dVar25 = 0.0;
    if (dVar24 != 0.0) {
      if (dVar28 == 0.0) {
        dVar25 = INFINITY;
      }
      else {
        dVar25 = dVar24 / dVar28;
      }
    }
    *(double *)(lVar18 + 0x248) = dVar25;
    lVar18 = *(long *)(param_2 + 0x20);
  }
  fVar23 = SUB84(dVar25,0);
  if ((*(long *)(lVar18 + 0x1d0) == 0) || ((*(byte *)(lVar18 + 0x374) & 1) != 0)) {
    uVar16 = 0;
  }
  else {
    func_0x00010c07f100();
    uVar16 = 0x1e;
    if ((int)lVar18 == 0) {
      uVar16 = 0;
    }
  }
  puVar5 = PTR_PTR_1126da0b0;
  _objc_alloc();
  func_0x00010bf99700(uVar3);
  lVar26 = *(long *)(param_2 + 0x88);
  lVar18 = *(long *)(param_2 + 0x20);
  uVar32 = *(undefined8 *)(lVar18 + 0x248);
  uVar35 = *(undefined8 *)(lVar18 + 0x240);
  if (*(long *)(lVar18 + 0x210) == 0) {
    lVar18 = *(long *)(lVar18 + 0x2a0);
    func_0x00010bf529e0(lVar18);
    bVar1 = lVar18 != 0;
    lVar18 = *(long *)(param_2 + 0x20);
  }
  else {
    bVar1 = true;
  }
  func_0x00010b68e0e4(dVar24,dVar28,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80),
                      (double)fVar23,(double)lVar26,param_1 / dVar30,uVar32,puVar5,0,uVar16,bVar1,
                      (*(byte *)(lVar18 + 0x14a) ^ 0xff) & 1,*(undefined8 *)(lVar18 + 0x200),
                      *(undefined8 *)(param_2 + 0x90),*(undefined8 *)(lVar18 + 0x168),uVar35,
                      *(undefined8 *)(lVar18 + 0x170),*(undefined8 *)(lVar18 + 0x228),
                      *(undefined8 *)(lVar18 + 0x238),*(undefined8 *)(lVar18 + 0x2d8),uVar14,
                      in_stack_fffffffffffffbd0 & 0xffffffffffffff00);
  puVar6 = PTR_PTR_1126bc3e0;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126da0b8;
  _objc_alloc();
  puVar8 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040e80();
  _objc_release(puVar8);
  puVar8 = puVar6;
  func_0x00010c29bac0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = *(long *)(param_2 + 0x20);
  if (puVar8 == (undefined *)0x0) {
    uVar16 = 0;
    uVar32 = 0;
  }
  else {
    uVar32 = *(undefined8 *)(puVar8 + 0x58);
    uVar16 = *(undefined8 *)(puVar8 + 0x50);
  }
  *(undefined8 *)(lVar18 + 0x360) = uVar32;
  *(undefined8 *)(lVar18 + 0x358) = uVar16;
  lVar18 = *(long *)(param_2 + 0x20);
  func_0x00010b69119c(&dStack_d8,*(undefined8 *)(lVar18 + 0x358),*(undefined8 *)(lVar18 + 0x360),
                      *(undefined8 *)(lVar18 + 0x250));
  iVar2 = (int)*(undefined8 *)(lVar18 + 0x158);
  func_0x00010bfd94e0();
  if (iVar2 != 0) {
    uVar16 = 0;
    _dispatch_semaphore_create();
    lVar18 = *(long *)(param_2 + 0x20);
    uVar32 = *(undefined8 *)(lVar18 + 0x158);
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(double *)(lVar18 + 0x280) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x240);
    func_0x00010c0c4a00();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10855d74c;
    puStack_f0 = &UNK_110a54ee8;
    uStack_e8 = *(undefined8 *)(param_2 + 0x20);
    uVar31 = *(undefined8 *)(lVar18 + 0x348);
    uVar33 = *(undefined8 *)(lVar18 + 0x350);
    uVar36 = *(undefined8 *)(lVar18 + 0x358);
    uVar38 = *(undefined8 *)(lVar18 + 0x360);
    uStack_e0 = uVar16;
    _objc_retain(uVar16);
    func_0x00010bfbfd80(uVar31,uVar33,uVar36,uVar38,uVar35,uVar32);
    _objc_release(puVar19);
    _dispatch_semaphore_wait(uVar16,0xffffffffffffffff);
    _objc_release(uStack_e0);
    _objc_release(uVar16);
  }
  if ((*(long *)(*(long *)(param_2 + 0x20) + 0x210) == 0) &&
     (*(long *)(*(long *)(param_2 + 0x20) + 0x218) != 0)) {
    puVar19 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x210);
    *(undefined **)(*(long *)(param_2 + 0x20) + 0x210) = puVar19;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x218);
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x218) = 0;
    _objc_release(uVar16);
  }
  uVar4 = param_3;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar9 != 0) {
    func_0x00010c276aa0();
  }
  lVar18 = *(long *)(*(long *)(param_2 + 0x20) + 0x1a0);
  if (lVar18 == 0) {
    _objc_retain(0);
LAB_10855c4a4:
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar18 = *(long *)(lVar18 + 8);
    _objc_retain(lVar18);
    if (lVar18 == 0) goto LAB_10855c4a4;
    lVar26 = *(long *)(*(long *)(param_2 + 0x20) + 0x1b8);
    func_0x00010bf529e0();
    _objc_release(lVar18);
    if (lVar26 != 0) goto LAB_10855c4a4;
    puVar19 = PTR_PTR_1126d24a8;
    _objc_alloc_init();
    lVar18 = *(long *)(*(long *)(param_2 + 0x20) + 0x1a0);
    if (lVar18 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(lVar18 + 8);
    }
    _objc_retain(uVar16);
    func_0x00010c1d8f60(puVar19);
    _objc_release(uVar16);
  }
  pdStack_168 = *(double **)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar25 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar29 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_150 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  lVar18 = *(long *)(param_2 + 0x20);
  dStack_170 = dVar25;
  dStack_160 = dVar29;
  dStack_140 = dVar25;
  pdStack_138 = pdStack_168;
  dStack_130 = dVar29;
  uStack_128 = uStack_158;
  uStack_120 = uStack_150;
  uStack_118 = uStack_148;
  if (*(long *)(lVar18 + 0x268) != 0) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    lVar18 = *(long *)(param_2 + 0x20);
    dVar27 = *(double *)(lVar18 + 0x270);
    dVar34 = 0.0;
    dVar37 = dVar29;
    if (((dVar27 != 0.0) && (dVar34 = dVar25, dVar37 = 0.0, dVar27 != INFINITY)) &&
       (dVar34 = dVar29 * dVar27, dVar37 = dVar29, dVar25 <= dVar34)) {
      dVar34 = dVar25;
      dVar37 = dVar25 / dVar27;
    }
    if (*(long *)(lVar18 + 0x268) == 0) {
      uStack_128 = 0;
      dStack_130 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      pdStack_138 = (double *)0x0;
      dStack_140 = 0.0;
LAB_10855c5e8:
      uStack_188 = 0;
      dStack_190 = 0.0;
      uStack_178 = 0;
      uStack_180 = 0;
      pdStack_198 = (double *)0x0;
      dStack_1a0 = 0.0;
    }
    else {
      func_0x00010bf27a80(&dStack_140,dVar27,dVar25,dVar29,dVar34,dVar37,*(long *)(lVar18 + 0x268));
      lVar18 = *(long *)(param_2 + 0x20);
      if (*(long *)(lVar18 + 0x268) == 0) goto LAB_10855c5e8;
      func_0x00010bf27840(&dStack_1a0,*(undefined8 *)(lVar18 + 0x270),dVar25,dVar29,dVar34,dVar37,
                          dVar24,dVar28,*(long *)(lVar18 + 0x268));
      lVar18 = *(long *)(param_2 + 0x20);
    }
    pdStack_168 = pdStack_198;
    dStack_170 = dStack_1a0;
    uStack_158 = uStack_188;
    dStack_160 = dStack_190;
    uStack_148 = uStack_178;
    uStack_150 = uStack_180;
  }
  func_0x00010bde4100();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126da0d8;
  _objc_alloc();
  func_0x00010c01e1c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x240));
  uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x68);
  *(undefined **)(*(long *)(param_2 + 0x20) + 0x68) = puVar22;
  _objc_release(uVar16);
  lVar26 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  func_0x00010bfbfc00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar26 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(lVar26 + 8);
  }
  _objc_retain(lVar21);
  _objc_release(lVar26);
  puVar17 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lStack_1a8 == 0) {
    lVar26 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar26 + 0x374) & 1) == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = PTR_PTR_1126da0e0;
      _objc_alloc();
      lVar26 = *(long *)(param_2 + 0x20);
      pdStack_198 = *(double **)(lVar26 + 0x370);
      dStack_1a0 = *(double *)(lVar26 + 0x368);
      dStack_190 = *(double *)(lVar26 + 0x378);
      func_0x00010908dc80(*(undefined8 *)(lVar26 + 0x188));
      lVar26 = *(long *)(param_2 + 0x20);
    }
    if (*(long *)(lVar26 + 0x288) == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      func_0x00010bdc1120(&dStack_1a0,*(long *)(lVar26 + 0x288));
      pdStack_1d8 = pdStack_198;
      dStack_1e0 = dStack_1a0;
      dStack_1d0 = dStack_190;
      puVar22 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010beb3680();
    puVar10 = PTR_PTR_1126da0c0;
    _objc_alloc();
    pdStack_198 = pdStack_d0;
    dStack_1a0 = dStack_d8;
    uStack_188 = uStack_c0;
    dStack_190 = dStack_c8;
    uStack_178 = uStack_b0;
    uStack_180 = uStack_b8;
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x240),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bfacb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e1e0();
    _objc_release(uVar16);
    _objc_release(puVar12);
    _objc_release(puVar11);
    func_0x00010be1ad60(dVar24,dVar28,*(undefined8 *)(param_2 + 0x20));
    iVar2 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bdd9aa0();
    lVar26 = *(long *)(param_2 + 0x20);
    if (iVar2 == 0) {
      if ((*(long *)(lVar26 + 0x338) == 0) && (*(long *)(lVar26 + 0x330) == 0)) {
        puStack_338 = (undefined *)0x0;
      }
      else {
        func_0x00010c07f100();
        puStack_338 = PTR_PTR_1126da0c8;
        _objc_alloc();
        puVar11 = PTR_PTR_1126bf4d0;
        func_0x00010c22bec0(PTR_PTR_1126bf4d0);
        _objc_retainAutoreleasedReturnValue();
        pdStack_198 = pdStack_138;
        dStack_1a0 = dStack_140;
        uStack_188 = uStack_128;
        dStack_190 = dStack_130;
        uStack_178 = uStack_118;
        uStack_180 = uStack_120;
        pdStack_1d8 = pdStack_168;
        dStack_1e0 = dStack_170;
        uStack_1c8 = uStack_158;
        dStack_1d0 = dStack_160;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        func_0x00010c01cd40(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x358),
                            *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x360));
        _objc_release(puVar11);
        lVar26 = *(long *)(param_2 + 0x20);
      }
      if (*(char *)(param_2 + 0x98) == '\x01') {
        func_0x00010c121ee0();
        lVar13 = *(long *)(param_2 + 0x20);
        lVar20 = lVar26;
        if ((*(char *)(param_2 + 0x98) == '\x01') && (lVar26 == 0)) {
          *(ulong *)(lVar13 + 0x298) = uVar14;
          func_0x00010be08560(*(undefined8 *)(param_2 + 0x20));
          iVar2 = (int)*(undefined8 *)(param_2 + 0x20);
          func_0x00010be408a0();
          puVar11 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          if (iVar2 == 0) {
            uVar14 = *(ulong *)(param_2 + 0x20);
            func_0x00010be63200(uVar14);
            func_0x00010bf9d2e0(*(undefined8 *)(param_2 + 0x28));
            uVar16 = *(undefined8 *)(param_2 + 0x20);
            puVar11 = PTR_PTR_1126b1358;
            func_0x00010bf5a440(PTR_PTR_1126b1358);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bde3880(uVar16);
          }
          else {
            _objc_retain(param_3);
            _objc_opt_class(puVar11);
            uVar14 = param_3;
            _objc_opt_isKindOfClass(param_3,puVar11);
            uVar4 = param_3;
            if ((uVar14 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain(uVar4);
            _objc_release(param_3);
            uVar14 = uVar4;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            if ((*(char *)(param_2 + 0x99) == '\x01') && (uVar14 != 0)) {
              uVar16 = *(undefined8 *)(param_2 + 0x20);
              puVar11 = PTR_PTR_1126b1358;
              func_0x00010bf5a440(PTR_PTR_1126b1358);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bde3880(uVar16);
            }
            else {
              puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
              func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
              _objc_retainAutoreleasedReturnValue();
              uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98);
              func_0x00010c269d40(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf94260();
              _objc_release(uVar16);
              func_0x00010bee8e40(*(undefined8 *)(param_2 + 0x20));
            }
          }
          _objc_release(puVar11);
          _objc_release(uVar14);
          uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
          func_0x00010c269d40(uVar16);
          _objc_retainAutoreleasedReturnValue();
          if (param_3 == 0) {
            pdStack_198 = (double *)0x0;
            dStack_1a0 = 0.0;
            dStack_190 = 0.0;
          }
          else {
            func_0x00010bf8b160(&dStack_1a0,param_3);
          }
          _CMTimeGetSeconds(&dStack_1a0);
          func_0x00010bf99700(uVar3);
          func_0x00010c0c4a00();
          uVar35 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x240);
          func_0x00010bf99700(uVar9);
          uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x2d8);
          func_0x0001008cc2b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0afac0(dVar24,dVar28,uVar35,uVar16);
          _objc_release(uVar32);
          _objc_release(uVar16);
          param_2 = param_2 + 0x68;
          _objc_loadWeakRetained(param_2);
          func_0x00010bf75ca0();
          _objc_release(param_2);
          goto LAB_10855d640;
        }
      }
      else {
        lVar20 = 0x800;
        lVar13 = lVar26;
      }
      uVar16 = 1;
      if (((0.0 <= *(double *)(lVar13 + 0x240)) && (puVar8 != (undefined *)0x0)) &&
         (uVar16 = 1, *(long *)(puVar8 + 0x30) == 1)) {
        uVar16 = 2;
      }
      *(undefined8 *)(lVar13 + 0x298) = uVar16;
      iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
      func_0x00010c296d80();
      if (iVar2 < 1) {
        if (puVar8 == (undefined *)0x0) {
          lStack_350 = *(long *)(param_2 + 0x20);
LAB_10855cf18:
          func_0x00010be78d60();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126da0d0;
          _objc_alloc();
          uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01e080();
        }
        else {
          lStack_350 = *(long *)(param_2 + 0x20);
          if ((puVar8[0xc] != '\x01') || (*(long *)(lStack_350 + 0x110) == 0)) goto LAB_10855cf18;
          puVar11 = PTR_PTR_1126da0d0;
          _objc_alloc();
          uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01e0a0();
          lStack_350 = 0;
        }
        uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
        *(undefined **)(*(long *)(param_2 + 0x20) + 0x48) = puVar11;
        _objc_release(uVar32);
        _objc_release(uVar16);
        lVar26 = lVar21;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar26;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar26);
        alStack_1f0[1] = 0xffffffffffffffff;
        if (uVar9 != 0) {
          func_0x000109125e70(uVar9,0,0,alStack_1f0 + 1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        lVar26 = lVar18;
        func_0x00010c2791a0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar26;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar26);
        alStack_1f0[0] = -1;
        if (lVar15 != 0) {
          func_0x000109125e70(lVar15,0,0,alStack_1f0);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        lVar26 = *(long *)(*(long *)(param_2 + 0x20) + 0x288);
        uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar26 == 0) {
          if (lVar21 == 0) {
            pdStack_198 = (double *)0x0;
            dStack_1a0 = 0.0;
            dStack_190 = 0.0;
          }
          else {
            func_0x00010bf8b160(&dStack_1a0,lVar21);
          }
          _CMTimeGetSeconds(&dStack_1a0);
          func_0x00010bf99700(uVar3);
          func_0x00010c0c4a00();
          if (lVar21 == 0) {
            pdStack_1d8 = (double *)0x0;
            dStack_1e0 = 0.0;
            dStack_1d0 = 0.0;
          }
          else {
            func_0x00010bf8b160(&dStack_1e0,lVar21);
          }
          uStack_208 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
          uVar32 = *(undefined8 *)PTR__kCMTimeZero_110348670;
          uStack_200 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          uStack_210 = uVar32;
          _CMTimeRangeMake(&dStack_1a0,&uStack_210,&dStack_1e0);
          uVar35 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x240);
          if (uVar9 != 0) {
            func_0x00010bf99700(uVar9);
          }
          func_0x00010c0da9e0(lVar13);
          func_0x000109126a88();
          uVar31 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x2d8);
          func_0x0001008cc2b4();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x280);
          func_0x00010bf99700(uVar3);
          func_0x00010c0c4a00();
          lVar26 = *(long *)(param_2 + 0x20);
          if (*(long *)(lVar26 + 0x288) == 0) {
            uVar32 = 0;
            uStack_188 = 0;
            dStack_190 = 0.0;
            uStack_178 = 0;
            uStack_180 = 0;
            pdStack_198 = (double *)0x0;
            dStack_1a0 = 0.0;
          }
          else {
            func_0x00010bdc1120(&dStack_1a0);
            lVar26 = *(long *)(param_2 + 0x20);
          }
          uVar35 = *(undefined8 *)(lVar26 + 0x240);
          if (uVar9 != 0) {
            func_0x00010bf99700(uVar9);
          }
          func_0x00010c0da9e0(lVar13);
          func_0x000109126a88();
          uVar31 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x2d8);
          func_0x0001008cc2b4();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c24e340(dVar24,dVar28,uVar35,uVar32,uVar16);
        _objc_release(uVar31);
        _objc_release(uVar16);
        pdStack_198 = &dStack_1a0;
        dStack_1a0 = 0.0;
        dStack_190 = 1.02270250269256e-312;
        uStack_188 = 0x108559598;
        uStack_180 = 0x1085595a8;
        uVar16 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(uVar16);
        uStack_178 = uVar16;
        _objc_initWeak(&dStack_1e0,*(undefined8 *)(param_2 + 0x20));
        uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x90);
        func_0x00010c269d40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb4e0(uVar16);
        _objc_release(puVar11);
        _objc_release(uVar16);
        uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
        puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_280 = 0xc2000000;
        pcStack_278 = FUN_10855d938;
        puStack_270 = &UNK_110a551f8;
        pdStack_250 = &dStack_1a0;
        dStack_228 = param_1 / dVar30;
        _objc_retain(lStack_350);
        lStack_268 = lStack_350;
        lStack_220 = lVar20;
        _objc_retain(puVar8);
        uStack_248 = *(undefined8 *)(param_2 + 0x50);
        puStack_260 = puVar8;
        _objc_copyWeak(auStack_230,param_2 + 0x68);
        uStack_218 = *(undefined1 *)(param_2 + 0x9a);
        uStack_238 = *(undefined8 *)(param_2 + 0x60);
        uStack_240 = *(undefined8 *)(param_2 + 0x58);
        uVar16 = *(undefined8 *)(param_2 + 0x38);
        _objc_retain(uVar16);
        uStack_258 = uVar16;
        _objc_copyWeak(auStack_290,&dStack_1e0);
        uVar16 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010bea17c0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2505c0(uVar32);
        _objc_release(uVar16);
        iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
        func_0x00010c296d80();
        if (0 < iVar2) {
          func_0x00010bf2efa0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48));
        }
        _objc_destroyWeak(auStack_290);
        _objc_release(uStack_258);
        _objc_destroyWeak(auStack_230);
        _objc_release(puStack_260);
        _objc_release(lStack_268);
        _objc_destroyWeak(&dStack_1e0);
        __Block_object_dispose(&dStack_1a0,8);
        _objc_release(uStack_178);
        _objc_release(lVar15);
        _objc_release(lVar13);
        _objc_release(lStack_350);
      }
      else {
        lVar26 = param_2 + 0x68;
        _objc_loadWeakRetained(lVar26);
        func_0x00010bf3ad80();
        _objc_release(lVar26);
        func_0x00010bee8e20(*(undefined8 *)(param_2 + 0x20));
        lVar26 = param_2 + 0x68;
        _objc_loadWeakRetained(lVar26);
        func_0x00010bf75ca0();
        _objc_release(lVar26);
        uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x98);
        func_0x00010c269d40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf94260();
        _objc_release(uVar16);
        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x18) =
             *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
      }
    }
    else {
      *(ulong *)(lVar26 + 0x298) = uVar14;
      func_0x00010be08560(0x3ff0000000000000,*(undefined8 *)(param_2 + 0x20));
      func_0x00010bde2c20();
      puStack_338 = (undefined *)(param_2 + 0x68);
      _objc_loadWeakRetained(puStack_338);
      func_0x00010bf75ca0();
    }
LAB_10855d640:
    _objc_release(puStack_338);
    _objc_release(puVar10);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(puVar10);
    func_0x00010bee8e40(*(undefined8 *)(param_2 + 0x20));
    puVar22 = (undefined *)(param_2 + 0x68);
    _objc_loadWeakRetained(puVar22);
    func_0x00010bf75ca0();
  }
  _objc_release(puVar22);
  _objc_release(puVar17);
  _objc_release(lVar21);
  _objc_release(lVar18);
  _objc_release(puVar19);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_10855d6a8:
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10855d74c; end: 10855d8b3;  */

void FUN_10855d74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = param_2;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  lStack_50 = *(long *)(param_1 + 0x20);
  if (*(char *)(lStack_50 + 0x14c) == '\x01') {
    _objc_release(uVar3);
    uVar3 = 0;
    lStack_50 = *(long *)(param_1 + 0x20);
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10855d8b4;
  puStack_58 = &UNK_110841f80;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  func_0x000107c312d0("APPSTORE",&puStack_70);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c07f100();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar4 + 0x210);
    *(undefined8 *)(lVar4 + 0x210) = param_2;
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x218);
    *(undefined8 *)(lVar4 + 0x218) = uVar3;
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x220);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x220) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x2a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar3);
  return;
}



/* Entry: 10855d8b4; end: 10855d937;  */

void FUN_10855d8b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10855d938; end: 10855dfbf;  */

void FUN_10855d938(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x48);
  func_0x00010c252d60();
  lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x48);
  if (lVar1 == 4) {
    func_0x00010bfb6e80();
    fVar9 = (float)((double)lVar2 / *(double *)(param_1 + 0x60));
    if (*(double *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x240) < 0.0) {
      func_0x00010be08560(0x3ff0000000000000);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      uVar7 = uVar6;
      func_0x00010c26ade0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be78d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uStack_b8 = 0;
      uStack_a8 = 0x3032000000;
      uStack_a0 = 0x108559598;
      uStack_98 = 0x1085595a8;
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      puStack_b0 = &uStack_b8;
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      uStack_90 = uVar7;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_10855dfc0;
      puStack_100 = &UNK_110a551c8;
      puStack_e8 = &uStack_b8;
      _objc_retain(uVar6);
      uStack_d0 = *(undefined8 *)(param_1 + 0x68);
      uStack_c8 = *(undefined8 *)(param_1 + 0x60);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      uStack_f8 = uVar6;
      _objc_retain(uVar7);
      uStack_e0 = *(undefined8 *)(param_1 + 0x40);
      uStack_f0 = uVar7;
      fStack_c0 = fVar9;
      _objc_copyWeak(auStack_d8,param_1 + 0x58);
      func_0x00010be97240(uVar8);
      _objc_release(puVar4);
      lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_d8);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      __Block_object_dispose(&uStack_b8,8);
      _objc_release(uStack_90);
      _objc_release(uVar6);
      return;
    }
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f5800(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(puVar4);
    FUN_1085599ac(*(undefined8 *)(param_1 + 0x20),&uStack_b8,auStack_120);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    uVar7 = uVar6;
    func_0x00010be37600(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) {
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x50);
      uVar10 = *(undefined8 *)(lVar1 + 0x58);
    }
    func_0x00010c0eeda0();
    func_0x00010be51480(uVar8,uVar10,fVar9,uVar6);
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126b1358;
    func_0x00010bf5a440(PTR_PTR_1126b1358);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) == '\x01') {
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        puVar4 = PTR_PTR_1126da070;
        func_0x00010bf5a440(PTR_PTR_1126da070);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) != '\x01')
        goto LAB_10855ddc8;
      }
      func_0x00010bf43d60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28));
      lVar1 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c175380();
      _objc_release(lVar1);
    }
LAB_10855ddc8:
    func_0x00010bde3880(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  }
  else {
    func_0x00010c252d60();
    if (lVar2 == 3) {
      lVar1 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf3ad80();
      _objc_release(lVar1);
      func_0x00010bee8e20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
      puVar4 = (undefined *)(param_1 + 0x58);
      _objc_loadWeakRetained(puVar4);
      func_0x00010bf75ca0();
      goto LAB_10855dee4;
    }
    puVar3 = *(undefined **)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x48);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c252d60();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar4 = puVar5;
    }
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3ad80();
    _objc_release(lVar1);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010be960a0(uVar7);
    func_0x00010bee8e40(uVar7);
  }
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf75ca0();
  _objc_release(lVar1);
LAB_10855dee4:
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) + 0x98);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(uVar7);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) =
       *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_release(uVar7);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10855dfc0; end: 10855e24b;  */

void FUN_10855dfc0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f5800(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad040();
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
    FUN_1085599ac(*(undefined8 *)(param_1 + 0x20),auStack_78,auStack_80);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar3 = uVar5;
    func_0x00010be37600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar4 + 0x50);
      uVar7 = *(undefined8 *)(lVar4 + 0x58);
    }
    func_0x00010c0eeda0();
    func_0x00010be51480(uVar6,uVar7,*(undefined4 *)(param_1 + 0x58),uVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    puVar1 = PTR_PTR_1126b1358;
    func_0x00010bf5a440(PTR_PTR_1126b1358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3880(uVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bee8e40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,
                        param_2,1);
  }
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) + 0x98);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(uVar3);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) =
       *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _objc_release(uVar3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10855e24c; end: 10855e2d3;  */

void FUN_10855e24c(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined4 uStack_38;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10855e2d4;
    puStack_48 = &UNK_110868698;
    lStack_40 = param_2;
    uStack_38 = param_1;
    func_0x000107c312d0("APPSTORE",&puStack_60);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10855e2d4; end: 10855e2f3;  */

void FUN_10855e2d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x2c0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010855e2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10855e2f4; end: 10855e38b;  */

void FUN_10855e2f4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 10855e38c; end: 10855e527;  */

void FUN_10855e38c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c079e80();
  if ((int)uVar5 == 0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1755a0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf27680();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x28) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c175380();
    _objc_release(lVar2);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = 1;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9520(uVar5);
    _objc_release(uVar4);
  }
  else {
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bde3880();
    _objc_release(lVar2);
    lVar2 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf75ca0();
    _objc_release(lVar2);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) =
         *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10855e528; end: 10855e633;  */

void FUN_10855e528(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  _objc_copyWeak(param_1 + 0x58,param_2 + 0x58);
  _objc_copyWeak(param_1 + 0x60,param_2 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 10855e634; end: 10855e773;  */

void FUN_10855e634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  if (lVar4 != 0) {
    uVar1 = param_2;
    func_0x00010c079e80();
    if ((int)uVar1 == 0) {
      lVar3 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf3ad80();
      _objc_release(lVar3);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = *(undefined **)(param_1 + 0x30);
      func_0x00010c11de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9520(uVar1);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar1 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined **)(lVar3 + 0x28) = PTR____NSArray0__struct_11034ab48;
      _objc_release(uVar1);
      puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      uVar1 = param_2;
      func_0x00010c28f340(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c057ae0(puVar2);
      _objc_release(uVar1);
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar2,0,0,0);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10855e774; end: 10855e963; -[SnapVideoFilter reasonForTranscodingWithConfigProviderInput:inputOriginalAsset:outputConfig:] */

undefined8
FUN_10855e774(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_6);
  if (*(long *)(param_3 + 0x290) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_3 + 0x288) != 0;
  }
  uVar7 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  _objc_retain(param_7);
  _objc_retain(param_5);
  lVar2 = param_6;
  func_0x00010c279200(param_6,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar7 = *(undefined8 *)(param_3 + 0xf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_6;
  func_0x00010c299760();
  lVar4 = param_6;
  func_0x00010bf0eec0();
  func_0x00010bebc520(param_3,param_4,lVar3);
  if (param_6 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_90,param_6);
  }
  lVar5 = param_6;
  func_0x000109126a88();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  func_0x00010bf529e0();
  uVar6 = uVar7;
  func_0x00010c137540(param_1,param_2,*(undefined8 *)(param_3 + 0x240),uVar7,param_4,bVar1,param_5,
                      param_7,lVar2,lVar4,&uStack_90,(char)lVar5);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(param_6);
  return uVar6;
}



/* Entry: 10855e964; end: 10855e9eb; -[SnapVideoFilter _isForMultiSnapExportWithConfigProviderInput:] */

byte FUN_10855e964(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x290) == 0) || (*(long *)(param_1 + 0x288) == 0)) {
    bVar2 = 0;
    goto LAB_10855e9bc;
  }
  if (param_3 == 0) {
    _objc_retain(0);
    lVar1 = 0;
LAB_10855e9e4:
    bVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_3 + 0x60);
    _objc_retain(lVar1);
    if (lVar1 == 0) goto LAB_10855e9e4;
    bVar2 = *(byte *)(lVar1 + 0x13);
  }
  _objc_release(lVar1);
LAB_10855e9bc:
  _objc_release(param_3);
  return bVar2 & 1;
}



/* Entry: 10855e9ec; end: 10855eb37; -[SnapVideoFilter _logCameraVideoTranscodingSuccessWithTaskId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputFrameRate:] */

void FUN_10855e9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,char param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_12);
  func_0x00010be5d480(param_4,param_5,param_6);
  uVar1 = *(undefined8 *)(param_4 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_4 + 0x2e8);
  uVar2 = *(undefined8 *)(param_4 + 0x48);
  func_0x00010bfe86e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f540();
  func_0x00010c255ca0(param_1,param_2,param_3,uVar1,param_5,param_6,uVar3,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15 != '\0');
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10855eb38; end: 10855ebe7; -[SnapVideoFilter _canExportRawSpectaclesVideoTrack:outputBitrate:] */

byte FUN_10855eb38(float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c07f100();
  if (((((int)uVar1 == 0) || (uVar1 = param_2, func_0x00010bfd68c0(), (uVar1 & 1) != 0)) ||
      (uVar1 = param_2, func_0x00010c0d7540(), (uVar1 & 1) != 0)) ||
     ((*(long *)(param_2 + 0x260) != 0 ||
      (uVar1 = param_2, func_0x00010be3f720(param_2,param_3,param_4), (uVar1 & 1) != 0)))) {
    bVar2 = 0;
  }
  else {
    func_0x00010bf99700(param_4);
    bVar2 = *(byte *)(param_2 + 0x14b) | param_1 * 0.97 <= (float)param_5;
  }
  _objc_release(param_4);
  return bVar2 & 1;
}



/* Entry: 10855ebe8; end: 10855ec47; -[SnapVideoFilter _isCustomVideoTargetSizeDifferentFromVideoTrackSize:] */

bool FUN_10855ebe8(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_1 + 0x358);
  dVar3 = *(double *)(param_1 + 0x360);
  bVar1 = false;
  if ((dVar2 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(dVar3) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = dVar3 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) {
    func_0x00010bebc520();
    return *(double *)(param_1 + 0x360) != dVar3 || *(double *)(param_1 + 0x358) != dVar2;
  }
  return false;
}



/* Entry: 10855ec48; end: 10855ecd7; -[SnapVideoFilter _sizeOfVideoTrack:] */

undefined1  [16]
FUN_10855ec48(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 uVar8;
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
  undefined1 auStack_60 [16];
  double dStack_50;
  double dStack_48;
  
  _objc_retain(param_5);
  dVar4 = (double)func_0x00010c0d5d20(param_5);
  if (param_5 == 0) {
    uVar8 = 0;
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
    dStack_50 = 0.0;
    dStack_48 = 0.0;
  }
  else {
    func_0x00010c106f40(auStack_60,param_5);
    uVar16 = (undefined1)auStack_60._8_8_;
    uVar17 = SUB81(auStack_60._8_8_,1);
    uVar18 = SUB81(auStack_60._8_8_,2);
    uVar19 = SUB81(auStack_60._8_8_,3);
    uVar20 = SUB81(auStack_60._8_8_,4);
    uVar21 = SUB81(auStack_60._8_8_,5);
    uVar22 = SUB81(auStack_60._8_8_,6);
    uVar23 = SUB81(auStack_60._8_8_,7);
    uVar8 = (undefined1)auStack_60._0_8_;
    uVar9 = SUB81(auStack_60._0_8_,1);
    uVar10 = SUB81(auStack_60._0_8_,2);
    uVar11 = SUB81(auStack_60._0_8_,3);
    uVar12 = SUB81(auStack_60._0_8_,4);
    uVar13 = SUB81(auStack_60._0_8_,5);
    uVar14 = SUB81(auStack_60._0_8_,6);
    uVar15 = SUB81(auStack_60._0_8_,7);
  }
  dVar6 = dStack_50 * param_2 +
          (double)CONCAT17(uVar15,CONCAT16(uVar14,CONCAT15(uVar13,CONCAT14(uVar12,CONCAT13(uVar11,
                                                  CONCAT12(uVar10,CONCAT11(uVar9,uVar8))))))) *
          dVar4;
  dVar7 = dStack_48 * param_2 +
          (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))))) *
          dVar4;
  auVar5._0_8_ = -(ulong)(dVar6 < 0.0);
  auVar5._8_8_ = -(ulong)(dVar7 < 0.0);
  dVar4 = -dVar7;
  auVar1._8_8_ = dVar7;
  auVar1._0_8_ = dVar6;
  auVar3[8] = SUB81(dVar4,0);
  auVar3._0_8_ = -dVar6;
  auVar3[9] = (char)((ulong)dVar4 >> 8);
  auVar3[10] = (char)((ulong)dVar4 >> 0x10);
  auVar3[0xb] = (char)((ulong)dVar4 >> 0x18);
  auVar3[0xc] = (char)((ulong)dVar4 >> 0x20);
  auVar3[0xd] = (char)((ulong)dVar4 >> 0x28);
  auVar3[0xe] = (char)((ulong)dVar4 >> 0x30);
  auVar3[0xf] = (char)((ulong)dVar4 >> 0x38);
  auVar2._8_8_ = dVar7;
  auVar2._0_8_ = dVar6;
  _objc_release(param_5);
  return auVar2 ^ (auVar1 ^ auVar3) & auVar5;
}



/* Entry: 10855ecd8; end: 10855ece3; -[SnapVideoFilter filterVideoWithOutputBitrate:videoTargetSize:completion:] */

void FUN_10855ecd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_filterVideoWithOutputBitrate_vid_1125c93a0,param_3,1,param_4);
  return;
}



/* Entry: 10855ece4; end: 10855ed57; -[SnapVideoFilter filterVideoWithOutputBitrate:videoTargetSize:skipTranscodingIfPossible:completion:] */

void FUN_10855ece4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_3 + 0x40) = param_7;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x110);
  *(undefined8 *)(param_3 + 0x110) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bece9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__transcodeVideoWithOutputBitrate_112591410,param_5,
             param_6);
  return;
}



/* Entry: 10855ed58; end: 10855ee0b; -[SnapVideoFilter filterVideoCompletion:] */

void FUN_10855ed58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10855ee0c;
  puStack_40 = &UNK_110952760;
  uStack_38 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  func_0x00010bfae7e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_1,param_2,0,1,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10855ee0c; end: 10855ee1b;  */

void FUN_10855ee0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010855ee18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_4);
  return;
}



/* Entry: 10855ee1c; end: 10855eecb; -[SnapVideoFilter filterVideoFragmentedWithOutputBitrate:videoTargetSize:segmentOutputBlock:completion:] */

void FUN_10855ee1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_6 != 0) && (param_7 != 0)) {
    _objc_retain(param_7);
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_3 + 0x110);
    *(long *)(param_3 + 0x110) = param_6;
    _objc_release(uVar2);
    lVar1 = param_7;
    _objc_retainBlock();
    _objc_release(param_7);
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    *(long *)(param_3 + 0x40) = lVar1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bece9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,PTR_s__transcodeVideoWithOutputBitrate_112591410,param_5,0);
    return;
  }
  return;
}



/* Entry: 10855eecc; end: 10855f043; -[SnapVideoFilter generateStaticImageAtTime:completion:] */

void FUN_10855eecc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x330);
  func_0x00010bf529e0();
  if ((lVar1 == 0) || ((*(long *)(param_1 + 0x210) != 0 && (*(char *)(param_1 + 0x148) == '\x01'))))
  {
    *(undefined1 *)(param_1 + 0x148) = 0;
    func_0x00010be1ad20(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010bfe9820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar4 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c23d0a0(uVar2);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c03c680(puVar3,param_2,puVar4,uVar2,0,*(undefined8 *)(param_1 + 0x330),0,&uStack_70);
  _objc_release(puVar4);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10855f044;
  puStack_80 = &UNK_1108bd2a0;
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_78 = param_4;
  _objc_retain(param_4);
  func_0x00010c2505e0(puVar3,param_2,&puStack_98,&uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(puVar3);
  return;
}



/* Entry: 10855f044; end: 10855f04f;  */

void FUN_10855f044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010855f04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10855f050; end: 10855f0ef; -[SnapVideoFilter configureAsAnimatableImagePreview] */

void FUN_10855f050(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  double extraout_d1;
  double extraout_d1_00;
  undefined1 auVar7 [16];
  double dVar8;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x180));
  dVar8 = (double)CONCAT44(uVar5,uVar3);
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x180));
  dVar8 = dVar8 * (double)CONCAT44(uVar5,uVar3);
  func_0x00010b690b78(SUB84(dVar8,0),extraout_d1 * (double)CONCAT44(uVar5,uVar3),0x500);
  auVar7 = NEON_fmov(0x3fe0000000000000,8);
  fVar4 = (float)(int)(dVar8 * auVar7._0_8_);
  fVar6 = (float)(int)(extraout_d1_00 * auVar7._8_8_);
  *(double *)(param_2 + 0x360) = (double)(fVar6 + fVar6);
  *(double *)(param_2 + 0x358) = (double)(fVar4 + fVar4);
  lVar1 = param_2;
  func_0x00010c07f100();
  if ((int)lVar1 == 0) {
    if (*(long *)(param_2 + 0x1d0) == 0) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0x1e;
    }
  }
  else {
    uVar2 = 0x3c;
  }
  *(undefined8 *)(param_2 + 400) = uVar2;
  return;
}



/* Entry: 10855f0f0; end: 10855f657; -[SnapVideoFilter configureClipEditingConfigurationAtIndex:filterName:lensCommand:videoPlaybackRate:croppingState:croppingAspectRatio:targetAspectRatio:overlayImage:videoTrackedImages:] */

void FUN_10855f0f0(undefined8 param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (*(long *)(param_4 + 0xe0) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_4 + 0xe0);
    *(undefined **)(param_4 + 0xe0) = puVar1;
    _objc_release(uVar8);
  }
  dVar9 = ABS(param_3 + 0.0) * 2.220446049250313e-16;
  if (dVar9 <= 2.2250738585072014e-308) {
    dVar9 = 2.2250738585072014e-308;
  }
  if (((param_9 != 0) && (ABS(param_3) < dVar9)) && (param_3 = param_2, param_2 == INFINITY)) {
    param_3 = 0.0;
    if (*(double *)(param_4 + 0x348) != 0.0) {
      if (*(double *)(param_4 + 0x350) == 0.0) {
        param_3 = INFINITY;
      }
      else {
        param_3 = *(double *)(param_4 + 0x348) / *(double *)(param_4 + 0x350);
      }
    }
  }
  puVar1 = PTR_PTR_1126bf7a8;
  func_0x00010af219f8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010af22320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af22364();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_4 + 0x168);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  lVar3 = param_4;
  func_0x00010c0c4a00();
  if (puVar1 != (undefined *)0x0) {
    *(long *)(puVar1 + 0x10) = lVar3;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126bf7b0;
  func_0x00010af20be0(PTR_PTR_1126bf7b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010af20c30();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af20ce8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af228f4(puVar1,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(0);
  }
  else {
    *(undefined8 *)(puVar1 + 0xa8) = *(undefined8 *)(param_4 + 0x250);
    _objc_retain(puVar1);
    _objc_release(puVar1);
    *(double *)(puVar1 + 0xa0) = param_3;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  func_0x00010af22608(puVar1,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release();
  }
  else {
    *(double *)(puVar1 + 200) = param_2;
    _objc_retain(puVar1);
    _objc_release(puVar1);
    *(undefined8 *)(puVar1 + 0x98) = param_1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  func_0x00010af227cc(puVar1,*(undefined8 *)(param_4 + 0x158));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af224f0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af225c4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af2265c(*(undefined8 *)(param_4 + 0x348),*(undefined8 *)(param_4 + 0x350));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release();
  }
  else {
    *(undefined8 *)(puVar1 + 0xf8) = 0;
    _objc_retain(puVar1);
    _objc_release(puVar1);
    puVar1[0x100] = 1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  if (param_10 != 0) {
    lVar3 = param_10;
    _UIImagePNGRepresentation(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af224ac(puVar1,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  if (param_11 != 0) {
    func_0x00010af22580(puVar1,param_11);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_4 + 0x1b8) != 0) {
    func_0x00010af2268c(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126bf7b8;
  func_0x00010af206d8(PTR_PTR_1126bf7b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010af22938(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af207cc(puVar4,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c4a90;
  func_0x00010af23194();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010af231e4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    _objc_release();
    func_0x00010af2338c(0,param_8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af234ac(0,*(undefined8 *)(param_4 + 0x158));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar5[8] = 0;
    _objc_retain(puVar5);
    _objc_release(puVar5);
    func_0x00010af2338c(puVar5,param_8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010af234ac();
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined8 *)(puVar5 + 0x38) = param_1;
    _objc_retain();
  }
  _objc_release(puVar5);
  puVar6 = puVar5;
  func_0x00010af23338(puVar5,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af2326c();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010af23500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af20810(puVar4,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_4 + 0xe0);
  puVar6 = puVar4;
  func_0x00010af20854(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10855f658; end: 10855f693; -[SnapVideoFilter cancelProcessing] */

void FUN_10855f658(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bf2efa0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010be08570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s__emitTranscodeStatusWithPhase_pr_11255faf8,9);
  return;
}



/* Entry: 10855f694; end: 10855f82b; -[SnapVideoFilter hasEdits] */

uint FUN_10855f694(double param_1,double param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  
  uVar1 = (uint)&uStack_a0;
  if ((*(long *)(param_3 + 0x210) == 0) && (*(long *)(param_3 + 0x1c8) == 0)) {
    lVar2 = *(long *)(param_3 + 0x2a0);
    func_0x00010bf529e0();
    if ((lVar2 == 0) && (*(long *)(param_3 + 0x1d0) == 0)) {
      lVar2 = *(long *)(param_3 + 0x1d8);
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        lVar2 = *(long *)(param_3 + 0x1e0);
        func_0x00010bf529e0(lVar2);
        uVar6 = (uint)(lVar2 != 0);
        goto LAB_10855f6e4;
      }
    }
  }
  uVar6 = 1;
LAB_10855f6e4:
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  if (*(long *)(param_3 + 0x268) == 0) {
    uVar5 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    dVar7 = *(double *)(param_3 + 0x270);
    dVar9 = 0.0;
    dVar8 = param_2;
    if (((dVar7 != 0.0) && (dVar9 = param_1, dVar8 = 0.0, dVar7 != INFINITY)) &&
       (dVar9 = dVar7 * param_2, dVar8 = param_2, param_1 <= dVar9)) {
      dVar9 = param_1;
      dVar8 = param_1 / dVar7;
    }
    func_0x00010bf27a80(&uStack_70,dVar7,param_1,param_2,dVar9,dVar8,*(long *)(param_3 + 0x268),
                        param_4,0);
    uVar5 = 0;
    if (*(long *)(param_3 + 0x268) != 0) {
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_78 = uStack_48;
      uStack_80 = uStack_50;
      _CGAffineTransformIsIdentity(&uStack_a0);
      uVar5 = uVar1 ^ 1;
    }
  }
  dVar9 = *(double *)(param_3 + 0x240);
  dVar8 = ABS(dVar9 + 1.0) * 2.220446049250313e-16;
  if (dVar8 <= 2.2250738585072014e-308) {
    dVar8 = 2.2250738585072014e-308;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x238);
  func_0x00010c299740(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1303e0();
  _objc_release(uVar3);
  uVar1 = uVar5 | uVar6 | (uint)uVar4;
  if (dVar8 <= ABS(1.0 - dVar9)) {
    uVar1 = 1;
  }
  if (*(long *)(param_3 + 0x1f0) != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10855f82c; end: 10855f867; -[SnapVideoFilter _croppingStateForVideoTrackedImages] */

void FUN_10855f82c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c07f100();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x268);
  }
  else {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10855f868; end: 10855f8cb; -[SnapVideoFilter needsVideoCircleRendererOrCropping] */

bool FUN_10855f868(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c0d7540();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0c4a00();
    if (uVar2 == 2) {
      func_0x00010bdf62a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 != 0;
      _objc_release();
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10855f8cc; end: 10855f94f; -[SnapVideoFilter needsVideoCircleRenderer] */

void FUN_10855f8cc(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c07f100();
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x238);
    func_0x00010c299740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 != 0) && (uVar1 = param_1, func_0x00010bfd68c0(), (uVar1 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x238);
      func_0x00010c299740(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1303e0();
      _objc_release(uVar3);
    }
  }
  return;
}



/* Entry: 10855f950; end: 10855fa23; -[SnapVideoFilter _emitTranscodeStatusWithPhase:progress:] */

void FUN_10855f950(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_2 + 0x2c8);
  _objc_retainBlock();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126da000;
    _objc_alloc(PTR_PTR_1126da000);
    func_0x00010c13f540(*(undefined8 *)(param_2 + 0x48));
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    func_0x00010c035860(param_1,puVar2);
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10855fa24; end: 10855fabb; -[SnapVideoFilter _sessionStatusBlock] */

void FUN_10855fa24(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10855fabc;
    puStack_38 = &UNK_110984388;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retainBlock(&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10855fabc; end: 10855fb3f;  */

void FUN_10855fabc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010c0fa9c0(), uVar1 < 6)) {
    lVar2 = *(long *)(param_1 + 0x2c8);
    _objc_retainBlock();
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10855fb40; end: 10855fc57; -[SnapVideoFilter _videoProcessingDidCancel] */

void FUN_10855fb40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110f53438,
                      &PTR____CFConstantStringClassReference_110ee27b8,0xffffffffffffd8f7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5d480(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = param_1;
  func_0x00010be37600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255c60(uVar2,param_2,uVar4,lVar3,puVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010bde3880(param_1,param_2,0,0,puVar1);
  lVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ada0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10855fc58; end: 10855fc6f; -[SnapVideoFilter _propagateNonRetriableEnabled] */

void FUN_10855fc58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 200),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ee2698,0,0);
  return;
}



/* Entry: 10855fc70; end: 10855fccf; -[SnapVideoFilter _retriableForTranscodingSessionError:] */

bool FUN_10855fc70(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be833a0();
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126da0e8;
    func_0x00010bf66860(PTR_PTR_1126da0e8,param_2,param_3);
    bVar1 = puVar2 != (undefined *)0x2;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10855fcd0; end: 10855fda7; -[SnapVideoFilter _markFrameStatisticsForTaskId:] */

void FUN_10855fcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfb6e80(uVar1);
    func_0x00010c0df7a0(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0d4440(uVar1);
    func_0x00010c0df7c0(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb660(uVar4,param_2,param_3,puVar2,puVar3);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10855fda8; end: 10855fed3; -[SnapVideoFilter _videoProcessingDidFailWithError:retriable:] */

void FUN_10855fda8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010be5d480(param_1,param_2,*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  lVar2 = param_1;
  func_0x00010be37600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfe86e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c13f540(uVar4);
  func_0x00010c255c80(uVar1,param_2,uVar5,lVar2,param_3,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010bde3880(param_1,param_2,0,param_4,param_3);
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ada0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10855fed4; end: 108560083; -[SnapVideoFilter _completeWithURL:retriable:error:] */

void FUN_10855fed4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar5 = 0x3ff0000000000000;
  }
  else {
    lVar2 = param_5;
    func_0x00010bf3ec40();
    if (lVar2 == -0x2709) {
      lVar2 = param_5;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      if ((int)lVar1 != 0) {
        uVar5 = 0;
        goto LAB_10855ff80;
      }
    }
    uVar5 = 0;
  }
LAB_10855ff80:
  func_0x00010be08560(uVar5,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar5);
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_4,param_5);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 == 0) {
    lVar2 = param_1;
    func_0x00010c26ad80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x158);
    puVar4 = puVar3;
    func_0x00010c0899c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f0c0(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108560084; end: 10856026f; -[SnapVideoFilter _completeExportWithAsset:contentCreateTimeUtc:] */

void FUN_108560084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff4280();
  uVar2 = param_1;
  func_0x00010be78d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7200(puVar1,param_2,uVar2);
  func_0x00010c1d6fc0(puVar1,param_2,*(undefined8 *)PTR__AVFileTypeMPEG4_110348008);
  uVar3 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1c73c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
  func_0x00010c0cc520(PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40();
  func_0x00010c1b6ce0(puVar4,param_2,*(undefined8 *)PTR__AVMetadataKeySpaceCommon_1103480a8);
  uVar3 = param_4;
  func_0x00010bdc17a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c220160(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  puVar5 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108560270;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf9cee0(puVar1,param_2,&puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108560270; end: 108560303;  */

void FUN_108560270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126b1358;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ef100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5a440(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf987e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3880(uVar1,param_2,puVar3,1,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108560304; end: 108560397; -[SnapVideoFilter _shouldEnableContentAdaptiveVideoExportWithVideoAsset:rawDataURL:] */

bool FUN_108560304(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf70a80();
  if ((((int)uVar2 != 0) && ((*(byte *)(param_1 + 0x149) & 1) == 0)) &&
     (uVar3 = param_1, func_0x00010c07f100(), (uVar3 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x2a0);
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      bVar5 = false;
      if (0.0 < *(double *)(param_1 + 0x240)) {
        bVar5 = param_4 != 0 && param_3 != 0;
      }
      goto LAB_108560360;
    }
  }
  bVar5 = false;
LAB_108560360:
  _objc_release(uVar1);
  return bVar5;
}



/* Entry: 108560398; end: 108560497; -[SnapVideoFilter _createdShiftedImageProcessProviderWithDisparityXOffset:forVideoTrackedImage:staticTransform:] */

void FUN_108560398(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c27ada0(param_5);
  dVar5 = (double)SUB84(param_1,0);
  dVar6 = dVar3 + dVar5;
  func_0x00010c27ada0(param_5);
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c14e120(param_5);
  dVar4 = dVar3;
  func_0x00010c141a80(param_5);
  _objc_release(param_5);
  func_0x00010c055500(dVar6,dVar5,dVar3,dVar4,puVar1);
  puVar2 = PTR_PTR_1126b2708;
  _objc_alloc(PTR_PTR_1126b2708);
  func_0x00010c0db660(param_4);
  _objc_release(param_4);
  func_0x00010c01ce60(dVar6,dVar5,puVar2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108560498; end: 10856095b; -[SnapVideoFilter _reverseAssetWithOriginalAudio:outputURL:completion:] */

void FUN_108560498(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  puVar11 = PTR_PTR_1126da0f0;
  _objc_alloc();
  func_0x00010c060bc0();
  puVar10 = (undefined8 *)(param_1 + 0x60);
  uVar7 = *puVar10;
  *puVar10 = puVar11;
  _objc_release(uVar7);
  lStack_e8 = 0;
  func_0x00010c24da40(*puVar10);
  lVar8 = lStack_e8;
  _objc_retain(lStack_e8);
  if (lVar8 == 0) {
    puVar11 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    lStack_f0 = 0;
    func_0x00010bff4200();
    lVar2 = lStack_f0;
    _objc_retain(lStack_f0);
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar11;
    _objc_release(uVar7);
    puVar11 = param_3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar11;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    if ((puVar4 == (undefined *)0x0) || (*(char *)(param_1 + 0x14a) != '\x01')) {
      puVar11 = (undefined *)0x0;
      *(undefined1 *)(puStack_b8 + 3) = 1;
    }
    else {
      uStack_a0 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
      ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfc10;
      uStack_98 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
      lVar8 = param_1;
      func_0x00010be654e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_88 = lVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      puVar11 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
      func_0x00010bf0b5e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa4c0(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar5);
    }
    func_0x00010c250140(*(undefined8 *)(param_1 + 8));
    puVar5 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
    _objc_alloc();
    lStack_f8 = lVar2;
    func_0x00010c057a20();
    lVar8 = lStack_f8;
    _objc_retain(lStack_f8);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar7);
    func_0x00010beb1920(param_1);
    func_0x00010beb18c0(param_1);
    func_0x00010c251d20(*(undefined8 *)(param_1 + 0x10));
    uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c2508a0(*(undefined8 *)(param_1 + 0x10));
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_10856095c;
    puStack_140 = &UNK_11084be40;
    puStack_120 = &uStack_e0;
    puStack_118 = &uStack_c0;
    lStack_138 = param_1;
    _objc_retain(param_3);
    puStack_130 = param_3;
    _objc_retain(param_5);
    lStack_128 = param_5;
    func_0x00010c135d80(uVar7);
    if ((puVar4 != (undefined *)0x0) && (*(char *)(param_1 + 0x14a) == '\x01')) {
      puVar6 = puVar11;
      func_0x00010bf52120();
      *(undefined **)(param_1 + 0x38) = puVar6;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puStack_1a8 = puVar5;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_108560ad0;
      puStack_190 = &UNK_110953708;
      puStack_168 = &uStack_c0;
      lStack_188 = param_1;
      _objc_retain(puVar11);
      puStack_160 = &uStack_e0;
      puStack_180 = puVar11;
      _objc_retain(param_3);
      puStack_178 = param_3;
      _objc_retain(param_5);
      lStack_170 = param_5;
      func_0x00010c135d80(uVar7);
      _objc_release(lStack_170);
      _objc_release(puStack_178);
      _objc_release(puStack_180);
    }
    _objc_release(lStack_128);
    _objc_release(puStack_130);
    _objc_release(puVar11);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar4);
  }
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(lVar8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  puVar11 = param_3;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10856095c;
  bVar1 = *(byte *)(*(long *)(*(long *)(puVar11 + 0x38) + 8) + 0x18);
  puStack_1c0 = &stack0xfffffffffffffff0;
  puStack_1c8 = param_3;
  lStack_1d8 = param_5;
  uStack_1d0 = param_4;
  lStack_1e0 = param_1;
  do {
    if ((bVar1 & 1) != 0) {
LAB_108560a40:
      if (*(char *)(*(long *)(*(long *)(puVar11 + 0x40) + 8) + 0x18) == '\x01') {
        uVar7 = *(undefined8 *)(puVar11 + 0x20);
        uVar9 = *(undefined8 *)(puVar11 + 0x30);
        _objc_retain(uVar9);
        func_0x00010be175a0(uVar7);
        _objc_release(uVar9);
      }
      return;
    }
    iVar3 = (int)*(undefined8 *)(*(long *)(puVar11 + 0x20) + 0x18);
    func_0x00010c07bca0();
    if (iVar3 == 0) {
      if (*(char *)(*(long *)(*(long *)(puVar11 + 0x38) + 8) + 0x18) != '\x01') {
        return;
      }
      goto LAB_108560a40;
    }
    lVar8 = *(long *)(puVar11 + 0x20);
    if (*(long *)(lVar8 + 0x60) == 0) {
      uStack_1f0 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
LAB_1085609f0:
      lVar8 = *(long *)(lVar8 + 0x10);
      func_0x00010c252d60();
      if (lVar8 == 1) {
        func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(puVar11 + 0x20) + 0x18));
      }
      *(undefined1 *)(*(long *)(*(long *)(puVar11 + 0x38) + 8) + 0x18) = 1;
    }
    else {
      func_0x00010beeccc0(&uStack_210);
      lVar2 = lStack_1f8;
      lVar8 = *(long *)(puVar11 + 0x20);
      if (lStack_1f8 == 0) goto LAB_1085609f0;
      func_0x00010bf06f60(*(undefined8 *)(lVar8 + 0x28));
      _CVBufferRelease(lVar2);
    }
    bVar1 = *(byte *)(*(long *)(*(long *)(puVar11 + 0x38) + 8) + 0x18);
  } while( true );
}



/* Entry: 10856095c; end: 108560abf;  */

void FUN_10856095c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  do {
    if ((bVar3 & 1) != 0) {
LAB_108560a40:
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_108560ac0;
        puStack_90 = &UNK_110849530;
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar7);
        uStack_88 = uVar7;
        func_0x00010be175a0(uVar1,param_2,uVar2,&puStack_a8);
        _objc_release(uStack_88);
      }
      return;
    }
    iVar5 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c07bca0();
    if (iVar5 == 0) {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) != '\x01') {
        return;
      }
      goto LAB_108560a40;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar6 + 0x60) == 0) {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
LAB_1085609f0:
      lVar6 = *(long *)(lVar6 + 0x10);
      func_0x00010c252d60();
      if (lVar6 == 1) {
        func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
    }
    else {
      func_0x00010beeccc0(&uStack_60);
      lVar4 = lStack_48;
      lVar6 = *(long *)(param_1 + 0x20);
      if (lStack_48 == 0) goto LAB_1085609f0;
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_70 = uStack_50;
      func_0x00010bf06f60(*(undefined8 *)(lVar6 + 0x28),param_2,lStack_48,&uStack_80);
      _CVBufferRelease(lVar4);
    }
    bVar3 = *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  } while( true );
}



/* Entry: 108560ac0; end: 108560acf;  */

void FUN_108560ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108560acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108560ad0; end: 108560c4f;  */

void FUN_108560ad0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) == 0) {
    while( true ) {
      iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c07bca0();
      if (iVar2 == 0) break;
      if (*(long *)(*(long *)(param_1 + 0x20) + 0x38) == 0) {
LAB_108560b7c:
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) == 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
          func_0x00010c252d60();
          if (lVar3 == 1) {
            func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
          }
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
        }
        break;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c252d60();
      if (lVar3 != 1) goto LAB_108560b7c;
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c252d60();
      if (lVar3 != 1) goto LAB_108560b7c;
      func_0x00010bf06fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
      _CFRelease(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf52120();
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar4;
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') break;
    }
  }
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) == '\x01') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01')) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108560c50;
    puStack_40 = &UNK_110849530;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x00010be175a0(uVar5,param_2,uVar4,&puStack_58);
    _objc_release(uStack_38);
  }
  return;
}



/* Entry: 108560c50; end: 108560c5f;  */

void FUN_108560c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108560c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108560c60; end: 108560e0b; -[SnapVideoFilter _finishWritingWithAsset:completion:] */

void FUN_108560c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x108560d18;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfaff80(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108560e0c; end: 108561217; -[SnapVideoFilter _setupWriterVideoInputForAsset:] */

void FUN_108560e0c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined1 *)(param_2 + 0x149);
  if (param_4 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_160,param_4);
  }
  _CMTimeGetSeconds(&uStack_160);
  uVar14 = *(undefined8 *)(param_2 + 0x200);
  uVar15 = *(undefined8 *)(param_2 + 0x240);
  lVar6 = param_2;
  func_0x00010c07f100(param_2);
  if (*(long *)(param_2 + 0x210) == 0) {
    lVar7 = *(long *)(param_2 + 0x2a0);
    func_0x00010bf529e0(lVar7);
    bVar3 = lVar7 != 0;
  }
  else {
    bVar3 = true;
  }
  uVar8 = uVar5;
  func_0x00010bf134e0(*(undefined8 *)(param_2 + 0x358),*(undefined8 *)(param_2 + 0x360),param_1,0,
                      uVar15,uVar5,param_3,0,uVar2,0,uVar14,lVar6,bVar3,0);
  _objc_release(uVar5);
  uStack_c8 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
  uStack_a0 = *(undefined8 *)PTR__AVVideoCodecTypeH264_110348128;
  uStack_c0 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
  uStack_f8 = *(undefined8 *)PTR__AVVideoProfileLevelKey_110348180;
  uStack_e0 = *(undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178;
  uStack_f0 = *(undefined8 *)PTR__AVVideoMaxKeyFrameIntervalKey_110348170;
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfc28;
  uStack_e8 = *(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_d0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_e0,&uStack_f8,3);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar10;
  func_0x00010c0df720(*(undefined8 *)(param_2 + 0x358));
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar11;
  func_0x00010c0df720(*(undefined8 *)(param_2 + 0x360));
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__AVVideoScalingModeKey_110348188;
  uStack_80 = *(undefined8 *)PTR__AVVideoScalingModeResizeAspectFill_110348190;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar12;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_a0,&uStack_c8,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
  _objc_alloc();
  func_0x00010c02a040();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined **)(param_2 + 0x18) = puVar9;
  _objc_release(uVar5);
  func_0x00010c198a40(*(undefined8 *)(param_2 + 0x18),param_3,0);
  func_0x00010b69119c(&uStack_128,*(undefined8 *)(param_2 + 0x358),*(undefined8 *)(param_2 + 0x360),
                      *(undefined8 *)(param_2 + 0x250));
  uStack_158 = uStack_120;
  uStack_160 = uStack_128;
  uStack_148 = uStack_110;
  uStack_150 = uStack_118;
  uStack_138 = uStack_100;
  uStack_140 = uStack_108;
  func_0x00010c219960(*(undefined8 *)(param_2 + 0x18),param_3,&uStack_160);
  puVar9 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
  _objc_alloc();
  func_0x00010bff46a0();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar9;
  _objc_release(uVar5);
  func_0x00010bef93a0(*(undefined8 *)(param_2 + 0x10),param_3,*(undefined8 *)(param_2 + 0x18));
  if (*(long *)(param_2 + 0x230) != 0) {
    puVar9 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
    func_0x00010c0cc520(PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40();
    func_0x00010c1b6ce0(puVar9,param_3,*(undefined8 *)PTR__AVMetadataKeySpaceCommon_1103480a8);
    uVar5 = *(undefined8 *)(param_2 + 0x230);
    func_0x00010bdc17a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar9,param_3,uVar5);
    _objc_release(uVar5);
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0cc0c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar14;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0(*(undefined8 *)(param_2 + 0x10),param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(puVar9);
  }
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  iVar4 = (int)*(undefined8 *)(param_4 + 200);
  func_0x000109127d0c();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfc40;
  if (iVar4 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfbf8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108561218; end: 10856125b; -[SnapVideoFilter _numberOfAudioChannels] */

void FUN_108561218(long param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 200);
  func_0x000109127d0c();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfc40;
  if (iVar2 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfbf8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10856125c; end: 1085613db; -[SnapVideoFilter _setupWriterAudioInputForAsset:] */

void FUN_10856125c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c279200(param_3,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x14a) == '\x01')) {
    lVar2 = param_1;
    func_0x00010be654e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar4;
    _objc_release(uVar6);
    func_0x00010c198a40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c7860;
  uVar7 = *(undefined8 *)(lVar1 + 200);
  uVar6 = *(undefined8 *)(lVar1 + 0x2d8);
  func_0x0001085916c4(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bfa5170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar3,PTR_s_fetchAudioBitrateWithCircumstanc_1125c6e00,uVar7,uVar6);
  return;
}



/* Entry: 1085613dc; end: 108561413; -[SnapVideoFilter _retrieveAudioBitrate] */

void FUN_1085613dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c7860;
  uVar3 = *(undefined8 *)(param_1 + 200);
  uVar2 = *(undefined8 *)(param_1 + 0x2d8);
  func_0x0001085916c4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfa5170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_fetchAudioBitrateWithCircumstanc_1125c6e00,uVar3,uVar2);
  return;
}



/* Entry: 108561414; end: 1085615e7; -[SnapVideoFilter _hasTimedEdits] */

undefined8 * FUN_108561414(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x2a0);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar5 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = 0;
    lVar6 = *(long *)(param_1 + 0x2a0);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar3 = *(undefined8 *)(lVar7 * 8);
        func_0x00010c27a460(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c0400();
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    uVar5 = (uint)*(byte *)(puStack_118 + 3);
    puVar4 = &uStack_120;
    __Block_object_dispose(puVar4,8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (undefined8 *)(ulong)(uVar5 & 1);
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume(puVar4);
  return puVar4;
}



/* Entry: 1085615e8; end: 1085615eb;  */

void FUN_1085615e8(void)

{
  return;
}



/* Entry: 1085615ec; end: 108561637;  */

void FUN_1085615ec(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c27a600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108561638; end: 1085618e7; -[SnapVideoFilter _retrieveMediaUploadQuality:captureMode:completion:] */

void FUN_108561638(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  int iStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar6 = param_1;
  func_0x00010c0c4a00();
  if (lVar6 == 2) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1085618e8;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_58 = param_5;
    func_0x00010c0f7fc0(param_3,param_2,&puStack_78);
    puVar2 = puStack_58;
    goto LAB_1085618b8;
  }
  if (*(long *)(param_1 + 200) == 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10856190c;
    puStack_b8 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_b0 = param_5;
    func_0x00010c0f7fc0(param_3,param_2,&puStack_d0);
    puVar2 = puStack_b0;
    goto LAB_1085618b8;
  }
  puVar2 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  if (*(long *)(param_1 + 0x168) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010c067f20(uVar3,param_2,&PTR____CFConstantStringClassReference_110ee2658,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    _objc_release(uVar3);
    if ((int)uVar4 < 1) {
      uVar4 = 3;
      goto LAB_1085617d4;
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x1085618f8;
    puStack_90 = &UNK_110890350;
    _objc_retain(param_5);
    puStack_88 = param_5;
    iStack_80 = (int)uVar4;
    func_0x00010c0f7fc0(param_3,param_2,&puStack_a8);
    puVar5 = puStack_88;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x2d8);
LAB_1085617d4:
    FUN_1085915d4(uVar4);
    func_0x00010c2056c0(puVar2,param_2,uVar4);
    puVar5 = PTR_PTR_1126d34d0;
    _objc_alloc_init(PTR_PTR_1126d34d0);
    func_0x00010c179060();
    func_0x00010c177100(puVar2,param_2,puVar5);
    lVar6 = *(long *)(param_1 + 0x2a0);
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x158);
      func_0x00010bfd94e0();
      if (iVar1 != 0) {
        func_0x00010bf4bb60(*(undefined8 *)(param_1 + 0x158));
      }
    }
    puVar7 = PTR_PTR_1126d34d8;
    _objc_alloc_init(PTR_PTR_1126d34d8);
    func_0x00010c225c00();
    lVar6 = param_1;
    func_0x00010be34900(param_1);
    func_0x00010c227040(puVar7,param_2,lVar6);
    func_0x00010c185ac0(puVar2,param_2,puVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11cee0();
    _objc_release(uVar4);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
LAB_1085618b8:
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


