/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ccd340; end: 107ccd40f; -[SCStoriesThumbnailCoordinator retrieveThumbnailFromContentDelivery:completion:] */

void FUN_107ccd340(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4cd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010be96cc0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be96ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ccd410; end: 107ccd69f; -[SCStoriesThumbnailCoordinator _retrieveThumbnailUsingUrlFromContentDelivery:completion:] */

void FUN_107ccd410(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined2 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010900c274();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1060;
  lStack_78 = lVar1;
  _objc_alloc();
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  puStack_80 = puVar2;
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puStack_90 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  uStack_98 = uVar5;
  func_0x00010900c16c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar7;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde7ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar1 = lStack_78;
  puVar3 = puStack_80;
  puVar2 = puStack_90;
  uStack_b0 = 0;
  lVar15 = lVar6;
  lVar16 = lStack_78;
  lStack_a8 = param_1;
  func_0x00010c1267e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar5;
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lStack_88);
  _objc_release(lVar6);
  _objc_release(uStack_98);
  _objc_release(puVar2);
  _objc_release(puVar3);
  lVar12 = lVar1;
  _objc_release();
  uVar5 = uStack_a0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puStack_100 = puVar2;
    lStack_e0 = lVar1;
    puStack_d8 = puVar3;
    pcStack_b8 = FUN_107ccd6a0;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_110 = lVar7;
    lStack_108 = lVar6;
    lStack_f8 = param_1;
    lStack_f0 = lVar11;
    lStack_e8 = lVar10;
    lStack_d0 = lVar9;
    lStack_c8 = lVar8;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(lVar16);
    _objc_retain(lVar15);
    lVar1 = lVar15;
    func_0x00010bf88ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf4cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar15;
    func_0x00010900c16c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1060;
    lStack_130 = lVar1;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    puStack_128 = puVar2;
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(lVar1);
    func_0x00010c108220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar12 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    _objc_release(lVar15);
    lVar6 = lStack_130;
    uStack_148 = 2;
    uStack_150 = 0;
    uVar5 = uVar13;
    lVar1 = lStack_130;
    lVar11 = lVar8;
    puStack_140 = puVar3;
    lStack_138 = lVar12;
    func_0x00010bf88980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar13);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_128);
    _objc_release(lVar6);
    lVar8 = lVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      lStack_180 = lVar6;
      pcStack_158 = FUN_107ccd940;
      lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_190 = lVar10;
      lStack_188 = lVar9;
      uStack_178 = uVar5;
      lStack_170 = lVar12;
      lStack_168 = lVar7;
      ppuStack_160 = &puStack_c0;
      _objc_retain(lVar1);
      _objc_retain(lVar11);
      puVar2 = PTR_PTR_1126b1060;
      _objc_alloc();
      puVar3 = PTR_PTR_1126b19f8;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1a0 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c032f60();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_initWeak(auStack_1a8,lVar8);
      uVar5 = *(undefined8 *)(lVar8 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010900c16c();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = auStack_1a8;
      _objc_copyWeak(auStack_1b0,puVar14);
      _objc_retain(lVar1);
      _objc_retain(lVar11);
      lVar7 = lVar6;
      func_0x00010c13e480(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(lVar11);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_1b0);
      _objc_destroyWeak(auStack_1a8);
      _objc_release(puVar2);
      _objc_release(lVar11);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
        ___stack_chk_fail();
        _objc_destroyWeak(auStack_1b0);
        _objc_destroyWeak(auStack_1a8);
        __Unwind_Resume();
        _objc_retain(puVar14);
        func_0x00010c09c1e0(lVar7);
        lVar1 = lVar1 + 0x30;
        _objc_loadWeakRetained(lVar1);
        func_0x00010be71900();
        _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107ccd6a0; end: 107ccd93f; -[SCStoriesThumbnailCoordinator _retrieveThumbnailUsingContentObjectFromContentDelivery:completion:] */

void FUN_107ccd6a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4cd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010900c16c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1060;
  lStack_80 = lVar1;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  puStack_78 = puVar3;
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(lVar1);
  func_0x00010c108220(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar11 = lStack_80;
  uStack_98 = 2;
  uStack_a0 = 0;
  uVar10 = uVar6;
  lVar1 = lStack_80;
  lVar13 = lVar7;
  puStack_90 = puVar4;
  lStack_88 = param_1;
  func_0x00010bf88980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_78);
  _objc_release(lVar11);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  lStack_d0 = lVar11;
  pcStack_a8 = FUN_107ccd940;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e0 = lVar9;
  lStack_d8 = lVar8;
  uStack_c8 = uVar10;
  lStack_c0 = param_1;
  lStack_b8 = lVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar1);
  _objc_retain(lVar13);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_initWeak(auStack_f8,lVar7);
  uVar10 = *(undefined8 *)(lVar7 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010900c16c();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_f8;
  _objc_copyWeak(auStack_100,puVar12);
  _objc_retain(lVar1);
  _objc_retain(lVar13);
  lVar2 = lVar11;
  func_0x00010c13e480(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  _objc_retain(puVar12);
  func_0x00010c09c1e0(lVar2);
  lVar1 = lVar1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be71900();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ccd940; end: 107ccdb3b; -[SCStoriesThumbnailCoordinator _retrieveContentDataForThumbnailInfo:completion:] */

void FUN_107ccd940(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010900c16c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60,puVar6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = lVar5;
  func_0x00010c13e480(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar6);
  func_0x00010c09c1e0(lVar7);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be71900();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ccdb3c; end: 107ccdbb7;  */

void FUN_107ccdb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  func_0x00010c09c1e0(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccdbb8; end: 107ccdd5b; -[SCStoriesThumbnailCoordinator removeThumbnailsForSnapMediaCacheKey:] */

void FUN_107ccdbb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ccdd5c;
  puStack_68 = &UNK_1108a77e8;
  _objc_retain();
  puStack_60 = puVar1;
  _objc_retain(param_3);
  lVar4 = 1;
  uStack_58 = param_3;
  do {
    (*pcStack_70)(&puStack_80,lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  _objc_initWeak(auStack_88,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_3);
  func_0x00010bf6c360(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccdd5c; end: 107ccdd97;  */

void FUN_107ccdd5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010900c0a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ccdd98; end: 107ccde4b;  */

void FUN_107ccdd98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107ccde4c;
  puStack_38 = &UNK_1108510e8;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  lVar2 = 1;
  uStack_30 = uVar1;
  do {
    (*pcStack_40)(&puStack_50,lVar2);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 6);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107ccde4c; end: 107ccde93;  */

void FUN_107ccde4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccde94; end: 107ccdf93; -[SCStoriesThumbnailCoordinator removeAllThumbnailsWithCompletion:] */

void FUN_107ccde94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf6b4e0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccdf94; end: 107ccdfc7;  */

void FUN_107ccdf94(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ee60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccdfc8; end: 107cce14f; -[SCStoriesThumbnailCoordinator _removeAllThumbnailContentWithCompletion:] */

void FUN_107ccdfc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107cce150;
  puStack_60 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  func_0x00010c12abe0(uVar3);
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x107cce158;
  puStack_88 = &UNK_110842e18;
  uStack_80 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c12abe0(uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x107cce160;
  puStack_b0 = &UNK_110849530;
  uStack_a8 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,uVar3,&puStack_c8);
  _objc_release(uVar3);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107cce150; end: 107cce16b;  */

void FUN_107cce150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cce16c; end: 107cce1cb; -[SCStoriesThumbnailCoordinator _handleRemovedAllMediaFromCacheWithCompletion:] */

void FUN_107cce16c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf2dd40(*(undefined8 *)(param_1 + 0x60));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cce1cc; end: 107cce2f7; -[SCStoriesThumbnailCoordinator _boltContentDeliveryDownloadCallback:completion:] */

void FUN_107cce1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107cce2ac;
  puStack_58 = &UNK_1108603e0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cce2f8; end: 107cce3d7; -[SCStoriesThumbnailCoordinator _contentDeliveryRetrieveCallback:completion:] */

void FUN_107cce2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107cce3d8;
  puStack_58 = &UNK_110899ae8;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cce3d8; end: 107cce443;  */

void FUN_107cce3d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cce444; end: 107cce467; -[SCStoriesThumbnailCoordinator _performContentDeliveryRetrieveCallbackForThumbnailInfo:data:success:isFromCache:completion:] */

void FUN_107cce444(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  ,undefined8 param_6,long param_7)

{
  if ((param_5 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000107cce45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_7 + 0x10))(param_7,param_4,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be27650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleContentDeliveryFailureCal_112567730,param_3,param_7);
  return;
}



/* Entry: 107cce468; end: 107cce47b; -[SCStoriesThumbnailCoordinator _handleContentDeliveryFailureCallbackForThumbnailInfo:completion:] */

void FUN_107cce468(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x000107cce478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3,0,0);
  return;
}



/* Entry: 107cce47c; end: 107cce537; -[SCStoriesThumbnailCoordinator _mediaDownloadCallback:] */

void FUN_107cce47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107cce538;
  puStack_50 = &UNK_110a07090;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107cce538; end: 107cce5bb;  */

void FUN_107cce538(undefined8 param_1,long param_2,long param_3,long param_4)

{
  _objc_retain(param_4);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  if ((param_3 == 4) && (param_4 != 0)) {
    func_0x00010be315e0(param_1,param_2);
  }
  else {
    func_0x00010be29420(param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107cce5bc; end: 107cce8d3; -[SCStoriesThumbnailCoordinator _handleSuccessCallbackForThumbnailInfo:responseData:serverExpirationTime:] */

void FUN_107cce5bc(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(param_5);
  lVar1 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  lVar5 = param_5;
  if (lVar3 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = lVar2;
      func_0x00010c086560(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c085300(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c156c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar5 == 0) {
        _objc_retain(param_5);
        lVar5 = param_5;
      }
      goto LAB_107cce700;
    }
  }
  func_0x00010c26e380(param_4);
LAB_107cce700:
  if (param_1 <= 0.0) {
    param_1 = 86400.0;
  }
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(param_1,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4072c00000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c132f80(*(undefined8 *)(param_2 + 0x50));
    func_0x00010c0a1d00(*(undefined8 *)(param_2 + 0x48));
  }
  lVar1 = param_4;
  func_0x00010900c0f8(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  _objc_retain(lVar5);
  func_0x00010c1c4740(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107cce8d4; end: 107cce917;  */

void FUN_107cce8d4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cce918; end: 107cce9c3; -[SCStoriesThumbnailCoordinator _handlePutThumbnailResponse:thumbnailData:success:] */

void FUN_107cce918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 2;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bedb6c0(param_1,param_2,param_3,uVar1);
  uVar1 = param_3;
  func_0x00010bf88ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c26e3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3dc00(param_1,param_2,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cce9c4; end: 107ccea4f; -[SCStoriesThumbnailCoordinator _handleFailureCallbackForThumbnailInfo:] */

void FUN_107cce9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bedb6c0(param_1,param_2,param_3,0);
  uVar1 = param_3;
  func_0x00010bf88ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c26e3a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3dc00(param_1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ccea50; end: 107cceb6f; -[SCStoriesThumbnailCoordinator _invokeCompletionBlocksForThumbnailURL:thumbnailData:] */

void FUN_107ccea50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf286e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = *(long *)(lStack_108 + lVar10 * 8);
        (**(code **)(lVar2 + 0x10))(lVar2,param_4,0);
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = lVar1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = (undefined1 *)puVar6;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_107ccecd0;
    puStack_180 = &UNK_110a070c0;
    lStack_178 = param_4;
    _objc_retain(puVar6);
    puStack_170 = (undefined1 *)puVar6;
    _objc_retain(puVar4);
    lVar8 = 1;
    puStack_168 = puVar4;
    do {
      (*pcStack_188)(&puStack_198,lVar8);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 6);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      uVar9 = *(undefined8 *)(param_4 + 0x20);
      _objc_retain(puVar6);
      _objc_retain(puVar4);
      func_0x00010c0f7fc0(uVar9);
      _objc_release(puVar4);
      _objc_release(puVar6);
    }
    _objc_release(puStack_168);
    _objc_release(puStack_170);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 107cceb70; end: 107cceccf; -[SCStoriesThumbnailCoordinator _createThumbnailsIfMissing:] */

void FUN_107cceb70(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107ccecd0;
    puStack_70 = &UNK_110a070c0;
    lStack_68 = param_1;
    _objc_retain(param_3);
    lStack_60 = param_3;
    _objc_retain(puVar1);
    lVar3 = 1;
    puStack_58 = puVar1;
    do {
      (*pcStack_78)(&puStack_88,lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 6);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(param_3);
      _objc_retain(puVar1);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(puVar1);
      _objc_release(param_3);
    }
    _objc_release(puStack_58);
    _objc_release(lStack_60);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ccecd0; end: 107ccedb3;  */

void FUN_107ccecd0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf267e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb3e60();
  _objc_release(uVar3);
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107ccedb4; end: 107ccee33; -[SCStoriesThumbnailCoordinator _shouldGenerateThumbnailForMedia:thumbnailType:] */

uint FUN_107ccedb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  if (param_4 == 4) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010900c0a0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf264c0(uVar2);
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107ccee34; end: 107ccf01b; -[SCStoriesThumbnailCoordinator addThumbnail:thumbnailMedia:expirationDate:completionBlock:] */

void FUN_107ccee34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c26e380();
  if (lVar2 != 4) {
    lVar2 = param_3;
    func_0x00010900c0f8();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf264c0();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_68,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_107ccf01c;
      puStack_90 = &UNK_1108a0570;
      _objc_retain(lVar2);
      lStack_88 = lVar2;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      lStack_80 = param_3;
      _objc_retain(param_6);
      ppuVar3 = &puStack_a8;
      lStack_78 = param_6;
      _objc_retainBlock(ppuVar3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4740(uVar5);
      _objc_release(uVar4);
      _objc_release(ppuVar3);
      _objc_release(lStack_78);
      _objc_release(lStack_80);
      _objc_destroyWeak(auStack_70);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_68);
    }
    else if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccf01c; end: 107ccf087;  */

void FUN_107ccf01c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedb6c0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ccf074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107ccf088; end: 107ccf1df; -[SCStoriesThumbnailCoordinator addThumbnailFromImage:thumbnailInfo:expirationDate:completionBlock:] */

void FUN_107ccf088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccf1e0; end: 107ccf277;  */

void FUN_107ccf1e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26e380(uVar1);
  func_0x00010900c398(lVar2,0,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0 || lVar3 == 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
  }
  else {
    func_0x00010befbec0(lVar3);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ccf278; end: 107ccf443; -[SCStoriesThumbnailCoordinator addThumbnailContent:thumbnailMedia:expirationDate:completionBlock:] */

void FUN_107ccf278(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar4 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010900c16c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11d220();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
    uVar5 = param_3;
    func_0x00010bf26940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c26e380(param_3);
    func_0x00010bdcc140(param_1,param_2,uVar5,uVar6,2);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107ccf444;
    puStack_78 = &UNK_1108843d8;
    _objc_retain(uVar1);
    uStack_70 = uVar1;
    lStack_68 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_6);
    lStack_58 = param_6;
    _objc_retainBlock(&puStack_90);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14a860();
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    uVar5 = uStack_70;
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccf444; end: 107ccf4c7;  */

void FUN_107ccf444(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf26940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e380(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bdcc140(uVar1);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ccf4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107ccf4c8; end: 107ccf543; -[SCStoriesThumbnailCoordinator _updateMediaStateForThumbnail:mediaState:] */

void FUN_107ccf4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf26940(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c26e380(param_3);
  _objc_release(param_3);
  func_0x00010bedb6a0(param_1,param_2,uVar1,uVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ccf544; end: 107ccf633; -[SCStoriesThumbnailCoordinator _updateMediaStateForMediaCacheKey:thumbnailType:mediaState:] */

void FUN_107ccf544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010900c0a0(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (param_5 == 0) goto LAB_107ccf600;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c067fc0();
    if (lVar3 == param_5) goto LAB_107ccf600;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar4);
  func_0x00010bdcc140(param_1);
LAB_107ccf600:
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ccf634; end: 107ccf71f; -[SCStoriesThumbnailCoordinator _announceMediaStateForMediaCacheKey:thumbnailType:mediaState:] */

void FUN_107ccf634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107ccf720; end: 107ccf77f;  */

void FUN_107ccf720(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126d7628;
    _objc_alloc(PTR_PTR_1126d7628);
    func_0x00010bffa8a0();
    func_0x00010bf7e840(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ccf780; end: 107ccf7e7; -[SCStoriesThumbnailCoordinator didUpdateStoriesMediaAddedRequest:] */

void FUN_107ccf780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c230980();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c0c5340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf4ba0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ccf7e8; end: 107ccf7ef; -[SCStoriesThumbnailCoordinator thumbnailGenerator] */

undefined8 FUN_107ccf7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ccf7f0; end: 107ccf81f; -[SCStoriesThumbnailCoordinator setThumbnailGenerator:] */

void FUN_107ccf7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ccf820; end: 107ccf827; -[SCStoriesThumbnailCoordinator mediaDownloader] */

undefined8 FUN_107ccf820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107ccf828; end: 107ccf857; -[SCStoriesThumbnailCoordinator setMediaDownloader:] */

void FUN_107ccf828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ccf858; end: 107ccf927; -[SCStoriesThumbnailCoordinator .cxx_destruct] */

void FUN_107ccf858(long param_1)

{
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



/* Entry: 107ccf928; end: 107ccf9d7; -[SCMyStoriesMediaDocumentStoreEntry initWithCoder:] */

undefined1 * FUN_107ccf928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa708;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ccf9d8; end: 107ccfa83; -[SCMyStoriesMediaDocumentStoreEntry initWithDateAdded:media:] */

undefined1 *
FUN_107ccf9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa708;
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



/* Entry: 107ccfa84; end: 107ccfaa7; -[SCMyStoriesMediaDocumentStoreEntry copyWithZone:] */

undefined8 FUN_107ccfa84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ccfaa8; end: 107ccfb07; -[SCMyStoriesMediaDocumentStoreEntry encodeWithCoder:] */

void FUN_107ccfaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eb6cb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eb6cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ccfb08; end: 107ccfb7b; -[SCMyStoriesMediaDocumentStoreEntry hash] */

undefined8 * FUN_107ccfb08(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107ccfbfc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107ccfc08;
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
          goto LAB_107ccfc08;
        }
        goto LAB_107ccfbfc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107ccfc08:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107ccfb7c; end: 107ccfc23; -[SCMyStoriesMediaDocumentStoreEntry isEqual:] */

long FUN_107ccfb7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ccfbfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ccfc08;
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
          goto LAB_107ccfc08;
        }
        goto LAB_107ccfbfc;
      }
    }
    lVar3 = 0;
  }
LAB_107ccfc08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ccfc24; end: 107ccfc2b; -[SCMyStoriesMediaDocumentStoreEntry dateAdded] */

undefined8 FUN_107ccfc24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ccfc2c; end: 107ccfc33; -[SCMyStoriesMediaDocumentStoreEntry media] */

undefined8 FUN_107ccfc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ccfc34; end: 107ccfc63; -[SCMyStoriesMediaDocumentStoreEntry .cxx_destruct] */

void FUN_107ccfc34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ccfc64; end: 107ccfcff; -[SCStoriesMediaDataWrapper initWithCoder:] */

undefined1 * FUN_107ccfc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ccfd00; end: 107ccfd87; -[SCStoriesMediaDataWrapper initWithData:isEncrypted:] */

undefined1 *
FUN_107ccfd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fa710;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ccfd88; end: 107ccfdab; -[SCStoriesMediaDataWrapper copyWithZone:] */

undefined8 FUN_107ccfd88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ccfdac; end: 107ccfe0b; -[SCStoriesMediaDataWrapper encodeWithCoder:] */

void FUN_107ccfdac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eb6cf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110eb6d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ccfe0c; end: 107ccfe77; -[SCStoriesMediaDataWrapper hash] */

undefined8 * FUN_107ccfe0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107ccfefc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107ccfefc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107ccfefc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107ccfefc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107ccfe78; end: 107ccff17; -[SCStoriesMediaDataWrapper isEqual:] */

long FUN_107ccfe78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ccfefc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107ccfefc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107ccfefc;
    }
  }
  lVar3 = 1;
LAB_107ccfefc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107ccff18; end: 107ccff1f; -[SCStoriesMediaDataWrapper data] */

undefined8 FUN_107ccff18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ccff20; end: 107ccff27; -[SCStoriesMediaDataWrapper isEncrypted] */

undefined1 FUN_107ccff20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ccff28; end: 107ccff33; -[SCStoriesMediaDataWrapper .cxx_destruct] */

void FUN_107ccff28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ccff34; end: 107ccffbb; -[SCStoriesGeneratedThumbnail initWithThumbnailType:thumbnailData:] */

undefined1 *
FUN_107ccff34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ccffbc; end: 107ccffdf; -[SCStoriesGeneratedThumbnail copyWithZone:] */

undefined8 FUN_107ccffbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ccffe0; end: 107cd003f; -[SCStoriesGeneratedThumbnail hash] */

undefined8 * FUN_107ccffe0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107cd00c4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107cd00c4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107cd00c4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107cd00c4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107cd0040; end: 107cd00df; -[SCStoriesGeneratedThumbnail isEqual:] */

long FUN_107cd0040(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cd00c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107cd00c4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107cd00c4;
    }
  }
  lVar3 = 1;
LAB_107cd00c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cd00e0; end: 107cd00e7; -[SCStoriesGeneratedThumbnail thumbnailType] */

undefined8 FUN_107cd00e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cd00e8; end: 107cd00ef; -[SCStoriesGeneratedThumbnail thumbnailData] */

undefined8 FUN_107cd00e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cd00f0; end: 107cd00fb; -[SCStoriesGeneratedThumbnail .cxx_destruct] */

void FUN_107cd00f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cd00fc; end: 107cd026f;  */

/* WARNING: Removing unreachable block (ram,0x000107cd04f8) */

void FUN_107cd00fc(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a07110;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_88 = FUN_107cd0270;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    _objc_retain(param_4);
    if (puVar2 != (undefined *)0x0) {
      plVar6 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f45258c;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_120,puVar2);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f45258c;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_108,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f45258c;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      puVar3 = &UNK_110a07160;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a07160,&uStack_140,param_5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar7 = 0;
      do {
        if ((&cStack_d9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar7 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar4);
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_120);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      __Unwind_Resume();
      puStack_168 = (undefined1 *)&uStack_180;
      pcStack_148 = FUN_107cd0530;
      if (puVar2 != (undefined *)0x0) {
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        puStack_160 = puVar4;
        puStack_158 = puVar1;
        ppuStack_150 = &puStack_90;
        (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                  (*(long **)(puVar2 + 8),&UNK_110a071b0,&uStack_180,puVar3);
        func_0x00010007e5dc(&puStack_168);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107cd0270; end: 107cd052f;  */

/* WARNING: Removing unreachable block (ram,0x000107cd04f8) */

void FUN_107cd0270(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a07160;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a07160,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_107cd0530;
    if (puVar2 != (undefined *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_e0 = param_3;
      puStack_d8 = param_2;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_110a071b0,&uStack_100,puVar1);
      func_0x00010007e5dc(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 107cd0530; end: 107cd05a7;  */

void FUN_107cd0530(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a071b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107cd05a8; end: 107cd061f;  */

void FUN_107cd05a8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a07200,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107cd0620; end: 107cd0953;  */

/* WARNING: Removing unreachable block (ram,0x000107cd0914) */

void FUN_107cd0620(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x25;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_110a07250;
    unaff_x25 = &uStack_d8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110a07250,&uStack_d8,param_6);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_108 = (undefined1 *)&uStack_120;
    pcStack_e8 = FUN_107cd0954;
    if (puVar2 != (undefined *)0x0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      puStack_100 = param_3;
      puStack_f8 = param_2;
      puStack_f0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_110a072a0,&uStack_120,puVar1);
      func_0x00010007e5dc(&puStack_108);
    }
    return;
  }
  return;
}



/* Entry: 107cd0954; end: 107cd09cb;  */

void FUN_107cd0954(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a072a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107cd09cc; end: 107cd0c8b;  */

/* WARNING: Removing unreachable block (ram,0x000107cd0c54) */

undefined *
FUN_107cd09cc(double param_1,long param_2,undefined *param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *unaff_x24;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar16 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar4 = &UNK_10f45258c;
    }
    else {
      puVar4 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,puVar4);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar4 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar4 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar4);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar4 = &UNK_10f45258c;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar4 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,puVar4);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a072f0,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar15 = 0;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c23d0a0(puVar4);
    fVar19 = ABS((float)param_1);
    dVar21 = (double)(ulong)(uint)fVar19;
    fVar17 = ABS((float)param_1 + 0.0) * 1.1920929e-07;
    bVar3 = true;
    if ((1.1754944e-38 <= fVar19) && (bVar3 = false, !NAN(fVar19) && !NAN(fVar17))) {
      bVar3 = fVar19 < fVar17;
    }
    if (!bVar3) {
      puVar5 = puVar4;
      func_0x00010c23d0a0(puVar4);
      fVar19 = ABS((float)dVar21);
      fVar17 = ABS((float)dVar21 + 0.0) * 1.1920929e-07;
      bVar3 = true;
      if ((1.1754944e-38 <= fVar19) && (bVar3 = false, !NAN(fVar19) && !NAN(fVar17))) {
        bVar3 = fVar19 < fVar17;
      }
      if (!bVar3) {
        _objc_autoreleasePoolPush();
        puVar6 = puVar4;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetDataProvider();
        _CGDataProviderCopyData();
        if (puVar6 == (undefined *)0x0) {
LAB_107cd0f0c:
          uVar14 = 0;
        }
        else {
          puVar7 = puVar6;
          _CFDataGetBytePtr();
          puVar8 = puVar6;
          _CFDataGetLength();
          if ((puVar7 == (undefined *)0x0) || (puVar8 == (undefined *)0x0)) {
            _CFRelease(puVar6);
            goto LAB_107cd0f0c;
          }
          puVar9 = puVar4;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _CGImageGetWidth();
          puVar10 = puVar4;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _CGImageGetHeight();
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc1020();
          _CGImageGetBitsPerComponent();
          puVar11 = puVar4;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _CGImageGetBitsPerPixel();
          dVar21 = (double)puVar9;
          lVar15 = 10;
          do {
            _arc4random();
            uVar2 = (ulong)puVar11 & 0xffffffff;
            _arc4random();
            dVar18 = (double)NEON_ucvtf((long)(((double)((ulong)puVar11 & 0xffffffff) / 4294967295.0
                                               ) * (double)puVar10));
            dVar20 = (double)NEON_ucvtf((long)(((double)uVar2 / 4294967295.0) * dVar21));
            lVar13 = (long)(int)((dVar20 + dVar18 * dVar21) * 4.0);
            lVar1 = lVar13 + 2;
            if (((long)puVar8 <= lVar1) ||
               ((2 < (byte)puVar7[lVar13] || 2 < (byte)(puVar7 + lVar13)[1]) ||
                2 < (byte)puVar7[lVar1])) {
              uVar14 = 0;
              goto LAB_107cd0f18;
            }
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          uStack_150 = 0;
          uStack_140 = 0x2020000000;
          uStack_138 = 1;
          uVar12 = 9;
          puStack_148 = &uStack_150;
          func_0x0001000819a8(9,0);
          _objc_retainAutoreleasedReturnValue();
          lStack_168 = (long)(dVar21 * (double)puVar10);
          puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_107cd0f44;
          puStack_178 = &UNK_110a073f0;
          puStack_170 = &uStack_150;
          puStack_160 = puVar8;
          puStack_158 = puVar7;
          _dispatch_apply(lStack_168,uVar12,&puStack_190);
          _objc_release(uVar12);
          uVar14 = (uint)*(byte *)(puStack_148 + 3);
          __Block_object_dispose(&uStack_150,8);
LAB_107cd0f18:
          _CFRelease(puVar6);
        }
        _objc_autoreleasePoolPop(puVar5);
        goto LAB_107cd0d2c;
      }
    }
  }
  uVar14 = 0;
LAB_107cd0d2c:
  _objc_release(puVar4);
  return (undefined *)(ulong)(uVar14 & 1);
}



/* Entry: 107cd0c8c; end: 107cd0f43;  */

byte FUN_107cd0c8c(double param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain();
  if (param_2 != 0) {
    func_0x00010c23d0a0(param_2);
    fVar17 = ABS((float)param_1);
    dVar19 = (double)(ulong)(uint)fVar17;
    fVar15 = ABS((float)param_1 + 0.0) * 1.1920929e-07;
    bVar3 = true;
    if ((1.1754944e-38 <= fVar17) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar15))) {
      bVar3 = fVar17 < fVar15;
    }
    if (!bVar3) {
      uVar4 = param_2;
      func_0x00010c23d0a0(param_2);
      fVar17 = ABS((float)dVar19);
      fVar15 = ABS((float)dVar19 + 0.0) * 1.1920929e-07;
      bVar3 = true;
      if ((1.1754944e-38 <= fVar17) && (bVar3 = false, !NAN(fVar17) && !NAN(fVar15))) {
        bVar3 = fVar17 < fVar15;
      }
      if (!bVar3) {
        _objc_autoreleasePoolPush();
        uVar5 = param_2;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetDataProvider();
        _CGDataProviderCopyData();
        if (uVar5 == 0) {
LAB_107cd0f0c:
          bVar13 = 0;
        }
        else {
          uVar6 = uVar5;
          _CFDataGetBytePtr();
          uVar7 = uVar5;
          _CFDataGetLength();
          if ((uVar6 == 0) || (uVar7 == 0)) {
            _CFRelease(uVar5);
            goto LAB_107cd0f0c;
          }
          uVar8 = param_2;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _CGImageGetWidth();
          uVar9 = param_2;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _CGImageGetHeight();
          _objc_retainAutorelease(param_2);
          func_0x00010bdc1020();
          _CGImageGetBitsPerComponent();
          uVar10 = param_2;
          _objc_retainAutorelease();
          func_0x00010bdc1020();
          _CGImageGetBitsPerPixel();
          dVar19 = (double)uVar8;
          lVar14 = 10;
          do {
            _arc4random();
            uVar8 = uVar10 & 0xffffffff;
            _arc4random();
            dVar16 = (double)NEON_ucvtf((long)(((double)(uVar10 & 0xffffffff) / 4294967295.0) *
                                              (double)uVar9));
            dVar18 = (double)NEON_ucvtf((long)(((double)uVar8 / 4294967295.0) * dVar19));
            lVar12 = (long)(int)((dVar18 + dVar16 * dVar19) * 4.0);
            lVar1 = lVar12 + 2;
            if (((long)uVar7 <= lVar1) ||
               (pbVar2 = (byte *)(uVar6 + lVar12),
               (2 < *pbVar2 || 2 < pbVar2[1]) || 2 < *(byte *)(uVar6 + lVar1))) {
              bVar13 = 0;
              goto LAB_107cd0f18;
            }
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          uStack_90 = 0;
          uStack_80 = 0x2020000000;
          uStack_78 = 1;
          uVar11 = 9;
          puStack_88 = &uStack_90;
          func_0x0001000819a8(9,0);
          _objc_retainAutoreleasedReturnValue();
          lStack_a8 = (long)(dVar19 * (double)uVar9);
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0xc2000000;
          pcStack_c0 = FUN_107cd0f44;
          puStack_b8 = &UNK_110a073f0;
          puStack_b0 = &uStack_90;
          uStack_a0 = uVar7;
          uStack_98 = uVar6;
          _dispatch_apply(lStack_a8,uVar11,&puStack_d0);
          _objc_release(uVar11);
          bVar13 = *(byte *)(puStack_88 + 3);
          __Block_object_dispose(&uStack_90,8);
LAB_107cd0f18:
          _CFRelease(uVar5);
        }
        _objc_autoreleasePoolPop(uVar4);
        goto LAB_107cd0d2c;
      }
    }
  }
  bVar13 = 0;
LAB_107cd0d2c:
  _objc_release(param_2);
  return bVar13 & 1;
}



/* Entry: 107cd0f44; end: 107cd0fa7;  */

void FUN_107cd0f44(long param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(char *)(lVar5 + 0x18) == '\x01') {
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar1 = param_2 + (uVar3 >> 1);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar1 / uVar3;
    }
    lVar6 = uVar1 - uVar4 * uVar3;
    uVar1 = lVar6 * 4 | 2;
    if ((*(long *)(param_1 + 0x30) <= (long)uVar1) ||
       (pbVar2 = (byte *)(*(long *)(param_1 + 0x38) + lVar6 * 4),
       (2 < *pbVar2 || 2 < pbVar2[1]) || 2 < *(byte *)(*(long *)(param_1 + 0x38) + uVar1))) {
      *(undefined1 *)(lVar5 + 0x18) = 0;
    }
  }
  return;
}



/* Entry: 107cd0fa8; end: 107cd0ff3; -[SCPlaybackMediaIdentifier toContentBundle] */

void FUN_107cd0fa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010becc720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cd0ff4; end: 107cd103f; -[SCPlaybackMediaIdentifier toHLSOnlyContentBundle] */

void FUN_107cd0ff4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010becc720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cd1040; end: 107cd1123; -[SCPlaybackMediaIdentifier _toContentBundle] */

void FUN_107cd1040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cd1124;
  uStack_30 = 0x107cd1134;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107cd113c;
  puStack_60 = &UNK_110842b58;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x107cd117c;
  puStack_88 = &UNK_11084c9b0;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0c1120(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cd1124; end: 107cd113b;  */

void FUN_107cd1124(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cd113c; end: 107cd11bb;  */

void FUN_107cd113c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010b0eebac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cd11bc; end: 107cd1203;  */

void FUN_107cd11bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e48,
             &PTR____CFConstantStringClassReference_110f68bf8,param_2,param_1,0);
  return;
}



/* Entry: 107cd1204; end: 107cd132b;  */

void FUN_107cd1204(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **unaff_x20;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1;
  if (param_1 != (undefined **)0x0) {
    _objc_retain(param_1);
    _objc_alloc();
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98940();
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuVar7 = param_1;
    func_0x00010bf98a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_50 = ppuVar7;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_1 = ppuVar1;
    func_0x00010c00e2e0();
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    _objc_release();
    unaff_x20 = ppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_107cd132c;
    lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain();
    ppuVar1 = ppuVar2;
    func_0x00010bf529e0();
    if (ppuVar1 == (undefined **)0x0) {
      param_1 = (undefined **)0x0;
    }
    else {
      ppuVar1 = ppuVar2;
      func_0x00010bf529e0();
      param_1 = ppuVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = (undefined **)0x1;
      if (ppuVar1 != (undefined **)0x1) {
        unaff_x20 = param_1;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        ppuVar1 = ppuVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar1;
        func_0x00010bf3ec40();
        _objc_release(ppuVar1);
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        lStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        plStack_180 = (long *)0x0;
        _objc_retain(ppuVar2);
        ppuVar1 = ppuVar2;
        func_0x00010bf52a60();
        if (ppuVar1 != (undefined **)0x0) {
          lVar9 = *plStack_180;
          do {
            ppuVar10 = (undefined **)0x0;
            ppuVar6 = unaff_x20;
            do {
              if (*plStack_180 != lVar9) {
                _objc_enumerationMutation(ppuVar2);
              }
              ppuVar8 = *(undefined ***)(lStack_188 + (long)ppuVar10 * 8);
              ppuVar4 = ppuVar8;
              func_0x00010bf87dc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar4;
              func_0x00010c0720c0();
              if ((int)ppuVar5 == 0) {
                _objc_release(ppuVar4);
              }
              else {
                ppuVar5 = ppuVar8;
                func_0x00010bf3ec40();
                _objc_release(ppuVar4);
                if (ppuVar5 == (undefined **)0x5) {
                  unaff_x20 = ppuVar8;
                  func_0x00010bf87dc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  func_0x00010bf3ec40(ppuVar8);
                  goto LAB_107cd1548;
                }
              }
              ppuVar4 = ppuVar8;
              func_0x00010bf87dc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = ppuVar4;
              func_0x00010c0720c0();
              if ((int)ppuVar5 == 0) {
                _objc_release(ppuVar4);
LAB_107cd14d0:
                _objc_retain(&PTR____CFConstantStringClassReference_110f68bf8);
                _objc_release(ppuVar6);
                ppuVar7 = (undefined **)0x618;
                unaff_x20 = &PTR____CFConstantStringClassReference_110f68bf8;
              }
              else {
                func_0x00010bf3ec40();
                _objc_release(ppuVar4);
                unaff_x20 = ppuVar6;
                if (ppuVar8 != ppuVar7) goto LAB_107cd14d0;
              }
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
              ppuVar6 = unaff_x20;
            } while (ppuVar1 != ppuVar10);
            ppuVar1 = ppuVar2;
            func_0x00010bf52a60();
          } while (ppuVar1 != (undefined **)0x0);
        }
LAB_107cd1548:
        _objc_release(ppuVar2);
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560();
        param_1 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(unaff_x20);
      }
    }
    ppuVar1 = ppuVar2;
    _objc_release(ppuVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d0) {
      ___stack_chk_fail();
      pcStack_198 = FUN_107cd15f8;
      ppuStack_1b0 = unaff_x20;
      ppuStack_1a8 = ppuVar2;
      ppuStack_1a0 = &puStack_70;
      _objc_retain();
      puStack_1d8 = &uStack_1e0;
      uStack_1e0 = 0;
      uStack_1d0 = 0x3032000000;
      pcStack_1c8 = FUN_107cd1700;
      uStack_1c0 = 0x107cd1710;
      uStack_1b8 = 0;
      func_0x00010c0c1140(ppuVar1);
      param_1 = (undefined **)puStack_1d8[5];
      _objc_retain(param_1);
      __Block_object_dispose(&uStack_1e0,8);
      _objc_release(uStack_1b8);
      _objc_release(ppuVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107cd132c; end: 107cd15f7;  */

void FUN_107cd132c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **unaff_x20;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar5 = param_1;
  func_0x00010bf529e0();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    ppuVar6 = param_1;
    func_0x00010bf529e0();
    ppuVar5 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = (undefined **)0x1;
    if (ppuVar6 != (undefined **)0x1) {
      unaff_x20 = ppuVar5;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      ppuVar5 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf3ec40();
      _objc_release(ppuVar5);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_1);
      ppuVar5 = param_1;
      func_0x00010bf52a60();
      if (ppuVar5 != (undefined **)0x0) {
        lVar8 = *plStack_120;
        do {
          ppuVar9 = (undefined **)0x0;
          ppuVar4 = unaff_x20;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(param_1);
            }
            ppuVar7 = *(undefined ***)(lStack_128 + (long)ppuVar9 * 8);
            ppuVar1 = ppuVar7;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar1;
            func_0x00010c0720c0();
            if ((int)ppuVar2 == 0) {
              _objc_release(ppuVar1);
            }
            else {
              ppuVar2 = ppuVar7;
              func_0x00010bf3ec40();
              _objc_release(ppuVar1);
              if (ppuVar2 == (undefined **)0x5) {
                unaff_x20 = ppuVar7;
                func_0x00010bf87dc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar4);
                func_0x00010bf3ec40(ppuVar7);
                goto LAB_107cd1548;
              }
            }
            ppuVar1 = ppuVar7;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar1;
            func_0x00010c0720c0();
            if ((int)ppuVar2 == 0) {
              _objc_release(ppuVar1);
LAB_107cd14d0:
              _objc_retain(&PTR____CFConstantStringClassReference_110f68bf8);
              _objc_release(ppuVar4);
              ppuVar6 = (undefined **)0x618;
              unaff_x20 = &PTR____CFConstantStringClassReference_110f68bf8;
            }
            else {
              func_0x00010bf3ec40();
              _objc_release(ppuVar1);
              unaff_x20 = ppuVar4;
              if (ppuVar7 != ppuVar6) goto LAB_107cd14d0;
            }
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
            ppuVar4 = unaff_x20;
          } while (ppuVar5 != ppuVar9);
          ppuVar5 = param_1;
          func_0x00010bf52a60();
        } while (ppuVar5 != (undefined **)0x0);
      }
LAB_107cd1548:
      _objc_release(param_1);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(unaff_x20);
    }
  }
  ppuVar6 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_107cd15f8;
    ppuStack_150 = unaff_x20;
    ppuStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    pcStack_168 = FUN_107cd1700;
    uStack_160 = 0x107cd1710;
    uStack_158 = 0;
    func_0x00010c0c1140(ppuVar6);
    ppuVar5 = (undefined **)puStack_178[5];
    _objc_retain(ppuVar5);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 107cd15f8; end: 107cd16ff;  */

void FUN_107cd15f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cd1700;
  uStack_30 = 0x107cd1710;
  uStack_28 = 0;
  func_0x00010c0c1140(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cd1700; end: 107cd171b;  */

void FUN_107cd1700(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cd171c; end: 107cd179b;  */

void FUN_107cd171c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010b7f5498();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cd179c; end: 107cd179f;  */

void FUN_107cd179c(void)

{
  return;
}



/* Entry: 107cd17a0; end: 107cd17d7;  */

void FUN_107cd17a0(long param_1,undefined8 param_2)

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



/* Entry: 107cd17d8; end: 107cd193f;  */

void FUN_107cd17d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107cd1940;
  uStack_40 = 0x107cd1950;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar2 = param_1;
  puStack_38 = puVar1;
  func_0x00010bf007e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  FUN_107cd132c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d7630;
  _objc_alloc(PTR_PTR_1126d7630);
  func_0x00010c003bc0();
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cd1940; end: 107cd1957;  */

void FUN_107cd1940(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cd1958; end: 107cd1a5b;  */

void FUN_107cd1958(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c1140(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107cd1a5c; end: 107cd1ac3;  */

void FUN_107cd1a5c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010c08fa60();
  if (param_2 != 0) {
    return;
  }
  uVar1 = 1;
  FUN_107cd11bc(1,&PTR____CFConstantStringClassReference_110eb6a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cd1ac4; end: 107cd1c2b;  */

void FUN_107cd1ac4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4aec0();
  if (4 < uVar1 || (1L << (uVar1 & 0x3f) & 0x15U) == 0) {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    if (lVar2 - 1U < 4) {
      uVar1 = *(ulong *)(&UNK_10dee5600 + (lVar2 - 1U) * 8);
    }
    else {
      uVar1 = 0;
    }
    uVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) - 1;
    if (uVar6 < 4) {
      uVar6 = *(ulong *)(&UNK_10dee5600 + uVar6 * 8);
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 < uVar1) {
      lVar2 = param_2;
      func_0x00010bfcaaa0();
      *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar2;
      lVar2 = param_2;
      func_0x00010bfc79a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010b7f5498();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      if (lVar4 == 0) {
        uVar5 = 4;
        FUN_107cd11bc(4,&PTR____CFConstantStringClassReference_110eb6d38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(uVar5);
      }
      else {
        func_0x00010befa120(uVar7);
      }
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cd1c2c; end: 107cd1c2f;  */

void FUN_107cd1c2c(void)

{
  return;
}



/* Entry: 107cd1c30; end: 107cd1d33;  */

void FUN_107cd1c30(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4aec0();
  if (4 < uVar1 || (1L << (uVar1 & 0x3f) & 0x15U) == 0) {
    lVar4 = param_2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0720c0();
    if ((int)lVar2 == 0) {
      _objc_release(lVar4);
      uVar1 = 3;
      uVar3 = 4;
    }
    else {
      lVar2 = param_2;
      func_0x00010bf3ec40();
      _objc_release(lVar4);
      uVar3 = 3;
      if (lVar2 != 5) {
        uVar3 = 4;
      }
      uVar1 = 3;
      if (lVar2 == 5) {
        uVar1 = 4;
      }
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(long *)(lVar4 + 0x18) - 1;
    if (uVar5 < 4) {
      uVar5 = *(ulong *)(&UNK_10dee5600 + uVar5 * 8);
    }
    else {
      uVar5 = 0;
    }
    if (uVar5 < uVar1) {
      *(undefined8 *)(lVar4 + 0x18) = uVar3;
    }
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cd1d34; end: 107cd1d5b;  */

bool FUN_107cd1d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bcb78;
  func_0x00010c2610a0(PTR_PTR_1126bcb78,param_2,param_1);
  return puVar1 != (undefined *)0x0;
}


