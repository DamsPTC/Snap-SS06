/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061163e4; end: 10611668f; -[SCPreviewPresenterImpl _updateGenAIMediaOrigin:] */

void FUN_1061163e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puStack_338;
  undefined8 uStack_330;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = lVar2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar2);
      }
      puVar16 = *(undefined **)(lVar18 * 8);
      puVar3 = puVar16;
      func_0x00010c08c3a0();
      if ((int)puVar3 == 1) {
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar16;
        func_0x00010bf0b760();
        if ((int)puVar3 == 5) {
          puVar3 = puVar16;
          func_0x00010c0ed200();
          if ((int)puVar3 == 0) {
            puVar3 = PTR_PTR_1126c8210;
            _objc_alloc_init(PTR_PTR_1126c8210);
            func_0x00010c1c4ce0(puVar16);
            _objc_release(puVar3);
          }
          puVar3 = puVar16;
          func_0x00010befd2c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf52a60();
          lVar5 = lRam0000000000000000;
          if (puVar4 == (undefined *)0x0) goto LAB_1061165e0;
          goto LAB_106116564;
        }
        _objc_release(puVar16);
      }
      lVar18 = lVar18 + 1;
    } while (lVar5 != lVar18);
    lVar5 = lVar2;
    func_0x00010bf52a60();
  }
  goto LAB_106116650;
LAB_106116564:
  do {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(puVar3);
      }
      iVar17 = (int)*(undefined8 *)((long)puVar19 * 8);
      iVar1 = iVar17;
      func_0x00010c0ed200();
      if (((iVar1 == 5) || (iVar1 = iVar17, func_0x00010c0ed200(), iVar1 == 6)) ||
         (func_0x00010c0ed200(), iVar17 == 7)) goto LAB_106116640;
      puVar19 = puVar19 + 1;
    } while (puVar4 != puVar19);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  } while (puVar4 != (undefined *)0x0);
LAB_1061165e0:
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126affc8;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126c8210;
  _objc_alloc_init(PTR_PTR_1126c8210);
  func_0x00010c1c4ce0(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar16;
  func_0x00010befd2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
LAB_106116640:
  _objc_release(puVar3);
  _objc_release(puVar16);
LAB_106116650:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(lVar2 + 0x1a8);
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar15;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar15);
      }
      uVar6 = *(undefined8 *)(lVar20 * 8);
      func_0x00010bef0a60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar3);
      _objc_release(uVar6);
      lVar20 = lVar20 + 1;
    } while (lVar5 != lVar20);
    lVar5 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  lVar5 = *(long *)(lVar2 + 0x1d0);
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar5 == 0) && (puVar16 = puVar3, func_0x00010bf529e0(), puVar16 == (undefined *)0x0)) {
    puStack_338 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar2 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bfc1f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar6;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c094540(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0720c0();
    _objc_release(lVar8);
    _objc_release(uVar7);
    if ((int)uVar9 == 0) {
      uStack_330 = 0;
    }
    else {
      uStack_330 = uVar6;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar8 = lVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      lVar15 = *(long *)(lVar2 + 0x140);
      lVar8 = lVar5;
      func_0x00010c094540(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcc020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      if ((lVar15 == 0) || (lVar8 = lVar2, func_0x00010be41700(), (int)lVar8 == 0)) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar15);
    }
    puStack_338 = PTR_PTR_1126c8218;
    _objc_alloc();
    uVar7 = *(undefined8 *)(lVar2 + 0x1d0);
    func_0x00010bf5f220();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar8;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar2 + 0x1d0);
    func_0x00010bf09180();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar2 + 0x1d0);
    func_0x00010bf09160();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + 0x1d0);
    func_0x00010c0972c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb200();
    func_0x00010bf13980();
    func_0x00010bf5f200();
    func_0x00010c091fc0();
    uVar12 = *(undefined8 *)(lVar2 + 0x1d0);
    func_0x00010c08fde0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar2 + 0x1c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5f260();
    uVar14 = *(undefined8 *)(lVar2 + 0x1c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c096ca0();
    func_0x00010bf2a040();
    func_0x00010c0971e0();
    func_0x00010c0228a0();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar15);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(puVar16);
    _objc_release(uVar6);
    _objc_release(uStack_330);
  }
  _objc_release(lVar5);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_338);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be7fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106116690; end: 106116b37; -[SCPreviewPresenterImpl _lensPreviewConfiguration] */

void FUN_106116690(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_158;
  undefined8 uStack_150;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x1a8);
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar13;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar13);
      }
      uVar3 = *(undefined8 *)(lVar15 * 8);
      func_0x00010bef0a60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar1);
      _objc_release(uVar3);
      lVar15 = lVar15 + 1;
    } while (lVar2 != lVar15);
    lVar2 = lVar13;
    func_0x00010bf52a60();
  }
  _objc_release(lVar13);
  lVar2 = *(long *)(param_1 + 0x1d0);
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) && (puVar14 = puVar1, func_0x00010bf529e0(), puVar14 == (undefined *)0x0)) {
    puStack_158 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfc1f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c094540(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0();
    _objc_release(lVar5);
    _objc_release(uVar4);
    if ((int)uVar6 == 0) {
      uStack_150 = 0;
    }
    else {
      uStack_150 = uVar3;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      lVar13 = *(long *)(param_1 + 0x140);
      lVar5 = lVar2;
      func_0x00010c094540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcc020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if ((lVar13 == 0) || (lVar5 = param_1, func_0x00010be41700(), (int)lVar5 == 0)) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar13);
    }
    puStack_158 = PTR_PTR_1126c8218;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf5f220();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf09180();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf09160();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010c0972c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb200();
    func_0x00010bf13980();
    func_0x00010bf5f200();
    func_0x00010c091fc0();
    uVar9 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010c08fde0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5f260();
    uVar11 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c096ca0();
    func_0x00010bf2a040();
    func_0x00010c0971e0();
    func_0x00010c0228a0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar13);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(puVar14);
    _objc_release(uVar3);
    _objc_release(uStack_150);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_158);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be7fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106116b38; end: 106116b3f; -[SCPreviewPresenterImpl _previewFilterDataProviderForMediaTypeContext:] */

void FUN_106116b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__previewFilterDataProviderForMed_11257d8f8,param_3,0);
  return;
}



/* Entry: 106116b40; end: 106116ba3; -[SCPreviewPresenterImpl _isMusicApplied] */

bool FUN_106116b40(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x1a8);
  func_0x00010c0d32a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x1a8);
    func_0x00010bf16100(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106116ba4; end: 106116de7; -[SCPreviewPresenterImpl _previewFilterDataProviderForMediaTypeContext:initialInfoStickerData:] */

void FUN_106116ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lStack_70;
  long lStack_68;
  
  puVar3 = PTR_PTR_1126b38a8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c131e40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
    _objc_retainAutoreleasedReturnValue();
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bfbabe0();
  uVar8 = 1;
  if (iVar2 == 0) {
    uVar8 = 2;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c078020();
  func_0x00010be420a0();
  func_0x00010c03e620(puVar3,param_2,uVar4,puVar11,uVar8,param_3,0,0,uVar6,puVar7,uVar1);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar5);
  if (lVar9 != 0) {
    _objc_release(puVar11);
  }
  _objc_release(uVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c243400();
  func_0x00010c242400(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010901d924(*(undefined8 *)(param_1 + 8));
  uVar8 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010bfbbbe0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5ae0(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010bfc58e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  uVar8 = *(undefined8 *)(puVar3 + 0x40);
  *(undefined8 *)(puVar3 + 0x40) = uVar4;
  _objc_retain(uVar4);
  _objc_release(uVar8);
  func_0x00010c0d9840(*(undefined8 *)(puVar3 + 0x38),param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106116de8; end: 106116e3f; -[SCPreviewPresenterImpl setCaptureDiscardRelatedData:] */

void FUN_106116de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106116e40; end: 106116f8f; -[SCPreviewPresenterImpl logDirectSnapCreateForBatchCaptureWithBatchCaptureSessionID:mediaType:] */

void FUN_106116e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdeb360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3b00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4140(lVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0260(lVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be4b840(param_1,param_2,lVar1,1);
  lVar2 = lVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  *(long *)(param_1 + 0x178) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x1a8);
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4fc0(uVar3,param_2,lVar2,puVar5);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c0a4fc0(uVar3,param_2,lVar2,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106116f90; end: 1061170b7; -[SCPreviewPresenterImpl logDirectSnapCreateForContinuousCaptureWithCaptureSessionID:] */

void FUN_106116f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdeb360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0460(lVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  *(long *)(param_1 + 0x178) = lVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x1a8);
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4fc0(uVar3,param_2,lVar2,puVar5);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c0a4fc0(uVar3,param_2,lVar2,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061170b8; end: 1061170bf; -[SCPreviewPresenterImpl setMusicPickerSelection:] */

void FUN_1061170b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setMusicPickerSelection__112650218);
  return;
}



/* Entry: 1061170c0; end: 1061171bb; -[SCPreviewPresenterImpl setMusicSourcePageType:] */

void FUN_1061170c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010c1ca2a0(*(undefined8 *)(param_1 + 0x1a8));
  if (param_3 == 0xcb) {
    func_0x00010c1b2ae0(*(undefined8 *)(param_1 + 0x1a8),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c27d8a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08f360();
    func_0x00010c202080(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar2);
    _objc_release(uVar1);
    lVar3 = *(long *)(param_1 + 0xf8);
    func_0x00010c0b84a0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e41f58,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010c2085c0(*(undefined8 *)(param_1 + 0x1a8),param_2,1);
    }
    else {
      lVar5 = lVar3;
      func_0x00010c296d80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1f3c0();
      func_0x00010c2085c0(*(undefined8 *)(param_1 + 0x1a8),param_2,lVar6);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1061171bc; end: 1061171c3; -[SCPreviewPresenterImpl setMusicRecommendation:] */

void FUN_1061171bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bc350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setLensMusicRecommendation__11264caf8);
  return;
}



/* Entry: 1061171c4; end: 1061171cb; -[SCPreviewPresenterImpl setMusicSessionId:] */

void FUN_1061171c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ca230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_setMusicSessionId__1126502b0);
  return;
}



/* Entry: 1061171cc; end: 1061172b7; -[SCPreviewPresenterImpl prepareTimelineLoggingWithConfiguration:managedCapturerState:captionManager:snapReplyFeature:remixFeature:lensPreviewActionFeature:multiCamModeFeature:greenScreenModeFeature:zoomFeature:screenBrightnessHandler:cameraHardwareServicesAPI:captureDeviceManager:nightModeServices:] */

void FUN_1061171cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  _objc_retain(param_3);
  func_0x00010bde4ee0(param_1,param_2,param_4,param_5,param_3,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,1);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x1a8),param_2,1);
  func_0x00010c1e8f00(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c1dcbe0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  func_0x00010c215940(*(undefined8 *)(param_1 + 0x1a8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061172b8; end: 1061175a7; -[SCPreviewPresenterImpl logDirectSnapCreateForTimelineOrDMWithSessionID:] */

void FUN_1061172b8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x1a8);
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x1a8);
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar7 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x1a8);
      func_0x00010c26fea0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar9);
      _objc_release(uVar4);
    }
  }
  lVar2 = param_1;
  func_0x00010bdeb360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0f7a0();
  func_0x00010c2b3b00(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x1a8);
  func_0x00010c242400();
  if (lVar5 != 8) {
    lVar5 = *(long *)(param_1 + 0x1a8);
    func_0x00010c242400();
    if (lVar5 != 0x5f) {
      lVar5 = *(long *)(param_1 + 0x1a8);
      func_0x00010c242400();
      if (lVar5 != 0x60) goto LAB_106117468;
    }
    lVar5 = 0;
    func_0x00010bb1394c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b3a40(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    _objc_release(lVar5);
  }
LAB_106117468:
  func_0x00010c2b4140(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1860(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb2c0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be4b840(param_1);
  lVar5 = lVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x178);
  *(long *)(param_1 + 0x178) = lVar5;
  _objc_retain();
  _objc_release(uVar9);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4fc0();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4f40();
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x178) != 0) {
    return;
  }
  lVar2 = param_3;
  func_0x00010bebd260();
  if (lVar2 != 0x24) {
    uVar7 = *(ulong *)(param_3 + 0x1a8);
    func_0x00010c073e40();
    if ((uVar7 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + 0x1a8);
      func_0x00010c07e620();
      if (iVar1 != 0) {
        func_0x00010bf0f7a0();
        func_0x00010c075080();
        lVar8 = *(long *)(param_3 + 0x1a8);
        func_0x00010c243320();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar8;
        func_0x00010c08fa60();
        _objc_release(lVar8);
        if (lVar2 == 0) {
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c205640(param_3);
          _objc_release(lVar8);
        }
        lVar2 = param_3;
        func_0x00010bdeb360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b3b00();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010be4b840(param_3);
        lVar8 = lVar2;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_3 + 0x178);
        *(long *)(param_3 + 0x178) = lVar8;
        _objc_release(uVar9);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(lVar2);
        func_0x00010bdf6880(param_3);
        _objc_release(puVar6);
        _objc_release(lVar2);
        _objc_release(puVar6);
        _objc_release(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1061175a8; end: 1061177cb; -[SCPreviewPresenterImpl logDirectSnapCreateForSingleCaptureIfNeeded] */

void FUN_1061175a8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x178) != 0) {
    return;
  }
  lVar2 = param_1;
  func_0x00010bebd260(param_1,param_2,*(undefined8 *)(param_1 + 0x150));
  if (lVar2 != 0x24) {
    uVar3 = *(ulong *)(param_1 + 0x1a8);
    func_0x00010c073e40();
    if ((uVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
      func_0x00010c07e620();
      if (iVar1 != 0) {
        func_0x00010bf0f7a0();
        func_0x00010c075080();
        lVar4 = *(long *)(param_1 + 0x1a8);
        func_0x00010c243320();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        if (lVar2 == 0) {
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c205640(param_1,param_2,lVar4);
          _objc_release(lVar4);
        }
        lVar2 = param_1;
        func_0x00010bdeb360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b3b00();
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010be4b840(param_1,param_2,lVar2,1);
        lVar4 = lVar2;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x178);
        *(long *)(param_1 + 0x178) = lVar4;
        _objc_release(uVar6);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        uStack_58 = 0x106117750;
        puStack_50 = &UNK_110906090;
        lStack_48 = lVar2;
        lStack_40 = param_1;
        puStack_38 = puVar5;
        _objc_retain();
        _objc_retain(lVar2);
        func_0x00010bdf6880(param_1,param_2,&puStack_68);
        _objc_release(puStack_38);
        _objc_release(lStack_48);
        _objc_release(puVar5);
        _objc_release(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1061177cc; end: 106117847; -[SCPreviewPresenterImpl _isBatchCapture] */

bool FUN_1061177cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30e80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (int)uVar4 == 0;
}



/* Entry: 106117848; end: 10611787b; -[SCPreviewPresenterImpl _baseMediaMusicSelectionForLensMusicTrackMetadata:] */

void FUN_106117848(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0d3760(PTR_PTR_1126b0008,param_2,param_3,4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10611787c; end: 1061179b7; -[SCPreviewPresenterImpl _baseMediaMusicSelectionForImportedTimelineSegments:] */

void FUN_10611787c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
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
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar11 = auStack_d8;
  uVar12 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar14 = 0;
  if (lVar1 != 0) {
    lVar15 = *plStack_110;
    do {
      lVar16 = 0;
      do {
        if (*plStack_110 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_118 + lVar16 * 8);
        lVar2 = lVar14;
        func_0x00010bf16100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          func_0x00010bf16100();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10611796c;
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      puVar11 = auStack_d8;
      uVar12 = 0x10;
      lVar1 = param_3;
      puVar10 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar14 = 0;
  }
LAB_10611796c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar12);
  _objc_retain(param_6);
  lVar14 = param_3 + 0x88;
  _objc_loadWeakRetained();
  lVar1 = lVar14;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(ulong *)(param_3 + 0xc0);
    func_0x00010c27d8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c0cfdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar13;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c22ef20();
    _objc_release(uVar17);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar14);
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar13 = *(undefined8 *)(param_3 + 0x30);
      *(undefined **)(param_3 + 0x30) = puVar6;
      _objc_release(uVar13);
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar13 = *(undefined8 *)(param_3 + 0x38);
      *(undefined **)(param_3 + 0x38) = puVar6;
      _objc_release(uVar13);
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar13 = *(undefined8 *)(param_3 + 0x50);
      *(undefined **)(param_3 + 0x50) = puVar6;
      _objc_release(uVar13);
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar13 = *(undefined8 *)(param_3 + 0x48);
      *(undefined **)(param_3 + 0x48) = puVar6;
      _objc_release(uVar13);
      puVar6 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar13 = *(undefined8 *)(param_3 + 0x28);
      *(undefined **)(param_3 + 0x28) = puVar6;
      _objc_release(uVar13);
      puVar6 = PTR_PTR_1126c8220;
      _objc_alloc(PTR_PTR_1126c8220);
      uVar4 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010bfbc3e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010c0cfdc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar13;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c039780(puVar6);
      _objc_release(uVar17);
      _objc_release(uVar13);
      _objc_release(uVar7);
      _objc_release(uVar4);
      puVar8 = PTR_PTR_1126c8228;
      func_0x00010c110460(PTR_PTR_1126c8228);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar13 = *(undefined8 *)(param_3 + 0x90);
      *(undefined **)(param_3 + 0x90) = puVar9;
      _objc_release(uVar13);
      _objc_initWeak(auStack_188,param_3);
      puVar9 = PTR_PTR_1126c8230;
      _objc_alloc();
      _objc_copyWeak(auStack_190,auStack_188);
      func_0x00010c038880();
      uVar13 = *(undefined8 *)(param_3 + 0xa0);
      *(undefined **)(param_3 + 0xa0) = puVar9;
      _objc_release(uVar13);
      puVar9 = PTR_PTR_1126c4f00;
      _objc_alloc();
      func_0x00010c0564a0();
      uVar13 = *(undefined8 *)(param_3 + 0x98);
      *(undefined **)(param_3 + 0x98) = puVar9;
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010bf23a00(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_3 + 0x90);
      puVar9 = PTR_PTR_1126c33e0;
      _objc_alloc(PTR_PTR_1126c33e0);
      func_0x00010c033480();
      func_0x00010c0d9840(uVar17);
      _objc_release(puVar9);
      lVar14 = param_3 + 0x88;
      _objc_loadWeakRetained(lVar14);
      func_0x00010bf9d620();
      _objc_release(lVar14);
      if (param_6 != 0) {
        func_0x00010c18a960(*(undefined8 *)(param_3 + 0x1a8));
      }
      _objc_release(uVar13);
      _objc_destroyWeak(auStack_190);
      _objc_destroyWeak(auStack_188);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
  }
  else {
    _objc_release();
    _objc_release(lVar14);
  }
  _objc_release(param_6);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 1061179b8; end: 106117de7; -[SCPreviewPresenterImpl _preloadSendFlowScopeFromPreviewDelegte:sendflowDelegate:cameraPreviewDelegate:deeplinkMetadata:sendFlowSource:] */

void FUN_1061179b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + 0xc0);
    func_0x00010c27d8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0cfdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c22ef20();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar6;
      _objc_release(uVar10);
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar6;
      _objc_release(uVar10);
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar6;
      _objc_release(uVar10);
      puVar6 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar6;
      _objc_release(uVar10);
      puVar6 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar6;
      _objc_release(uVar10);
      puVar6 = PTR_PTR_1126c8220;
      _objc_alloc(PTR_PTR_1126c8220);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfbc3e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0cfdc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c039780(puVar6);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar7);
      _objc_release(uVar4);
      puVar8 = PTR_PTR_1126c8228;
      func_0x00010c110460(PTR_PTR_1126c8228);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar10 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar9;
      _objc_release(uVar10);
      _objc_initWeak(auStack_68,param_1);
      puVar9 = PTR_PTR_1126c8230;
      _objc_alloc();
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c038880();
      uVar10 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined **)(param_1 + 0xa0) = puVar9;
      _objc_release(uVar10);
      puVar9 = PTR_PTR_1126c4f00;
      _objc_alloc();
      func_0x00010c0564a0();
      uVar10 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar9;
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf23a00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x90);
      puVar9 = PTR_PTR_1126c33e0;
      _objc_alloc(PTR_PTR_1126c33e0);
      func_0x00010c033480();
      func_0x00010c0d9840(uVar11);
      _objc_release(puVar9);
      lVar1 = param_1 + 0x88;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf9d620();
      _objc_release(lVar1);
      if (param_6 != 0) {
        func_0x00010c18a960(*(undefined8 *)(param_1 + 0x1a8));
      }
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
  }
  else {
    _objc_release();
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106117de8; end: 106117e8f;  */

void FUN_106117de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7d8e0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106117e90; end: 106117f8b; -[SCPreviewPresenterImpl _resetSendFlowIfNeeded] */

void FUN_106117e90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27be60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010c27c360();
    if (lVar1 != 3) {
      func_0x00010c128720(*(undefined8 *)(param_1 + 0x98));
      param_1 = param_1 + 0x88;
      _objc_loadWeakRetained(param_1);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 106117f8c; end: 106118153; -[SCPreviewPresenterImpl _configureLensPreviewConfigFieldsWithSessionId:swipeId:lensId:] */

void FUN_106117f8c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) &&
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1 + 0xb0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0cfdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    lVar1 = param_1;
    func_0x00010c2a67c0(param_1);
    func_0x00010bf47300(lVar3,param_2,uVar7,param_3,param_4,param_5,uVar5,lVar1,0);
    lVar1 = param_1 + 0x198;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4e480();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c2a67c0(param_1);
    func_0x00010bf46dc0(lVar6,param_2,uVar7,uVar5,param_1,param_5);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106118154; end: 106118553; -[SCPreviewPresenterImpl _createBaseLoggingParamsBuilder] */

void FUN_106118154(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x0001008e4748();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107176780(*(undefined8 *)(param_1 + 0x1b0),lVar2);
  lVar5 = param_1;
  func_0x00010c094e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c960(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c073e40(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010c2b6ac0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c284120(lVar2);
  func_0x00010c284180(lVar2);
  func_0x00010c286760(lVar2);
  func_0x00010c2892c0(lVar2);
  func_0x00010c28a020(lVar2);
  func_0x00010c28a760(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c075060();
  if (iVar1 != 0) {
    func_0x00010c2b0e40(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf09180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8720(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf09160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8700(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076e40();
  func_0x00010c2bcfc0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0x1a8);
  func_0x00010c14f120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c14f120(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b79a0(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  func_0x00010c0c6840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c0c6840(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3a40(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  lVar6 = *(long *)(param_1 + 0x1a8);
  func_0x00010c134300();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c1343c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c134300(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1343c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7060(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  func_0x00010c0956e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c0956e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3440(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c0956e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9b00(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  func_0x00010bf429e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010bf429e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c4a0();
    func_0x00010c2bbc40(lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  func_0x00010c076240(*(undefined8 *)(param_1 + 0x160));
  func_0x00010c2b15c0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106118554; end: 1061187fb; -[SCPreviewPresenterImpl _currentCellViewPosition:] */

void FUN_106118554(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x160);
  func_0x00010bf343e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x160);
    func_0x00010bf343e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = lVar2;
    func_0x00010c067fc0();
    (**(code **)(param_3 + 0x10))(param_3,param_2);
    goto LAB_1061187b4;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x160);
  func_0x00010c077de0();
  if (iVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x170);
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 == 0) {
LAB_10611876c:
      lVar3 = *(long *)(param_1 + 0x168);
      func_0x00010bfa4100();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10611879c;
    }
    lVar3 = *(long *)(param_1 + 0x160);
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126b01c0;
    if (lVar4 == 0) goto LAB_10611876c;
    uVar5 = *(undefined8 *)(param_1 + 0x160);
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x11;
    param_2 = 0;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf504e0(lVar2);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    lVar3 = param_3;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x160);
    func_0x00010c1322e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x168);
    func_0x00010bfa4100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
LAB_10611879c:
    func_0x00010bfc3880();
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
LAB_1061187b4:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x168);
  _objc_retain(param_2);
  func_0x00010bfa4100(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfc3880(uVar5);
  _objc_release(lVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1061187fc; end: 1061188a7;  */

void FUN_1061187fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168);
  _objc_retain(param_2);
  func_0x00010bfa4100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfc3880(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061188a8; end: 106118bc7; -[SCPreviewPresenterImpl _lensPlusParamsUpdateCommonLoggingParamsBuilder:isLensUsed:] */

void FUN_1061188a8(long param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
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
  uVar6 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar7 = uVar6;
  func_0x00010c091c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar11 = *plStack_120;
    do {
      uVar10 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(uVar7);
        }
        uVar12 = *(undefined8 *)(lStack_128 + uVar10 * 8);
        uVar5 = uVar12;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010c094540(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c0720c0(uVar5,param_2,uVar2);
        _objc_release(uVar2);
        _objc_release(uVar5);
        if ((int)uVar4 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x188);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010c07ed60(uVar12);
          uVar4 = uVar12;
          func_0x00010c094540(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar3;
          func_0x00010c0766a0(uVar3,param_2,uVar5,uVar4);
          func_0x00010c2b0ce0(param_3,param_2,uVar8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_1 + 0x188);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010c07ed60(uVar12);
          uVar4 = uVar12;
          func_0x00010c094540(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar3;
          func_0x00010c094e40(uVar3,param_2,uVar5,param_4,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b2a20(param_3,param_2,uVar8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(uVar4);
          _objc_release(uVar3);
          uVar4 = *(undefined8 *)(param_1 + 0x188);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bfc1f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar4 = uVar5;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar4;
          func_0x00010c0720c0(uVar4,param_2,uVar12);
          _objc_release(uVar12);
          _objc_release(uVar4);
          if ((int)uVar8 != 0) {
            uVar4 = uVar5;
            func_0x00010bfceb20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2ae680(param_3,param_2,uVar4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar4);
          }
          _objc_release(uVar5);
          goto LAB_106118b74;
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
      uVar1 = uVar7;
      func_0x00010bf52a60(uVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar1 != 0);
  }
LAB_106118b74:
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar6 = param_3;
    func_0x00010be3e5a0();
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_3 + 0x150) == 0) {
        uVar6 = *(ulong *)(param_3 + 0x1a8);
        func_0x00010c083340();
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((uVar6 & 1) == 0) {
          uVar7 = *(ulong *)(param_3 + 0xc0);
          func_0x00010c27d8a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010bfe8dc0();
          if ((uVar6 & 1) == 0) {
            func_0x00010c0df760(ppuVar9,param_2,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            uVar8 = *(undefined8 *)(param_3 + 0x18);
            func_0x00010c0cfdc0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar8;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar5;
            func_0x00010c240000();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar4;
            func_0x00010bf30e80();
            func_0x00010c0df760(ppuVar9,param_2,(int)uVar12 == 2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar5);
            _objc_release(uVar8);
          }
          _objc_release(uVar7);
        }
        else {
          ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4a50;
        }
      }
      else {
        uVar6 = param_3;
        func_0x00010be43360();
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar6 == 0) {
          ppuVar9 = (undefined **)0x0;
        }
        else {
          uVar5 = *(undefined8 *)(param_3 + 0x1a8);
          func_0x00010c083340(uVar5);
          func_0x00010c0df760(ppuVar9,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
    else {
      ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4a68;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return;
  }
  return;
}



/* Entry: 106118bc8; end: 106118d1f; -[SCPreviewPresenterImpl _snapEditorEditMode] */

void FUN_106118bc8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  uVar2 = param_1;
  func_0x00010be3e5a0();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x150) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x1a8);
      func_0x00010c083340();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((uVar2 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0xc0);
        func_0x00010c27d8a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bfe8dc0();
        if ((uVar2 & 1) == 0) {
          func_0x00010c0df760(ppuVar7,param_2,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c0cfdc0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar1;
          func_0x00010c240000();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf30e80();
          func_0x00010c0df760(ppuVar7,param_2,(int)uVar6 == 2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar1);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
      }
      else {
        ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4a50;
      }
    }
    else {
      uVar2 = param_1;
      func_0x00010be43360();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar2 == 0) {
        ppuVar7 = (undefined **)0x0;
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x1a8);
        func_0x00010c083340(uVar1);
        func_0x00010c0df760(ppuVar7,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else {
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4a68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 106118d20; end: 106118eaf; -[SCPreviewPresenterImpl _spotlightTileBytesFromStoryIds:] */

void FUN_106118d20(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined1 *puVar10;
  long unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf52a60();
  puVar3 = (undefined *)0x0;
  if (lVar9 != 0) {
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x21 = *(undefined **)(lStack_128 + unaff_x26 * 8);
        puVar3 = unaff_x21;
        func_0x00010c27dd80();
        if ((int)puVar3 == 2) {
          unaff_x22 = unaff_x21;
          func_0x00010c26e920();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x22;
          func_0x00010c130480();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c08fa60();
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
          if (unaff_x24 != (undefined *)0x0) {
            func_0x00010c26e920();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x21;
            func_0x00010c130480();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x21);
            goto LAB_106118e60;
          }
        }
        unaff_x26 = unaff_x26 + 1;
      } while (lVar9 != unaff_x26);
      lVar9 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
    puVar3 = (undefined *)0x0;
  }
LAB_106118e60:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar8 = &uStack_250;
    pcStack_138 = FUN_106118eb0;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_180 = unaff_x26;
    lStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = unaff_x22;
    puStack_158 = unaff_x21;
    puStack_150 = puVar3;
    lStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(puVar6);
    puVar5 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
    if (puVar5 != (undefined1 *)0x0) {
      lVar9 = *plStack_240;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != lVar9) {
            _objc_enumerationMutation(puVar6);
          }
          iVar2 = (int)*(undefined8 *)(lStack_248 + (long)puVar10 * 8);
          func_0x00010c27dd80();
          uVar1 = iVar2 - 1;
          if ((uVar1 < 6) && ((0x2fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
            func_0x00010befa120(puVar4,param_2,(&PTR_PTR_11090f6c8)[uVar1]);
          }
          puVar10 = puVar10 + 1;
        } while (puVar5 != puVar10);
        puVar5 = (undefined1 *)puVar6;
        puVar8 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined1 *)0x0);
    }
    _objc_release(puVar6);
    puVar3 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_retain(puVar8);
      uVar7 = *(undefined8 *)((long)puVar6 + 0x1b0);
      *(undefined8 **)((long)puVar6 + 0x1b0) = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106118eb0; end: 106119013; -[SCPreviewPresenterImpl _sendflowApiStoryIdsToUnifiedProfileStoryTypes:] */

void FUN_106118eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        iVar2 = (int)*(undefined8 *)(lStack_118 + lVar9 * 8);
        func_0x00010c27dd80();
        uVar1 = iVar2 - 1;
        if ((uVar1 < 6) && ((0x2fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          func_0x00010befa120(puVar3,param_2,(&PTR_PTR_11090f6c8)[uVar1]);
        }
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_3;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar6 = *(undefined8 *)(param_3 + 0x1b0);
  *(undefined8 **)(param_3 + 0x1b0) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106119014; end: 106119043; -[SCPreviewPresenterImpl setLoggingParams:] */

void FUN_106119014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106119044; end: 10611904b; -[SCPreviewPresenterImpl recordingMetadataProvider] */

undefined8 FUN_106119044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 10611904c; end: 10611907b; -[SCPreviewPresenterImpl setRecordingMetadataProvider:] */

void FUN_10611904c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611907c; end: 106119083; -[SCPreviewPresenterImpl lensLogger] */

undefined8 FUN_10611907c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 106119084; end: 1061190b3; -[SCPreviewPresenterImpl setLensLogger:] */

void FUN_106119084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061190b4; end: 1061190bb; -[SCPreviewPresenterImpl coreCameraLogger] */

undefined8 FUN_1061190b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 1061190bc; end: 1061190eb; -[SCPreviewPresenterImpl setCoreCameraLogger:] */

void FUN_1061190bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061190ec; end: 1061190f3; -[SCPreviewPresenterImpl previewLensesInfoProvider] */

undefined8 FUN_1061190ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 1061190f4; end: 106119123; -[SCPreviewPresenterImpl setPreviewLensesInfoProvider:] */

void FUN_1061190f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106119124; end: 106119383; -[SCPreviewPresenterImpl .cxx_destruct] */

void FUN_106119124(long param_1)

{
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_destroyWeak(param_1 + 0x198);
  _objc_destroyWeak(param_1 + 400);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_destroyWeak(param_1 + 0xf0);
  _objc_destroyWeak(param_1 + 0xe8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106119384; end: 106119427; -[SCPreviewTransitionController _previewViewControllerForTransitionContext:] */

void FUN_106119384(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c07ab40();
  lVar1 = param_3;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010010fab4(lVar1,PTR_DAT_1126a5110);
  if ((int)lVar2 == 0 || lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106119428; end: 10611945b; -[SCPreviewTransitionController _animatorShouldUseLightTransitionReplyCameraBehavior:] */

void FUN_106119428(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c290380();
  if ((int)uVar1 != 0) {
    func_0x00010bf31760(param_1);
  }
  return;
}



/* Entry: 10611945c; end: 106119533; -[SCPreviewTransitionController animator:willStartTransition:] */

void FUN_10611945c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2b960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe1b80();
  _objc_release(lVar1);
  uVar4 = param_3;
  func_0x00010c07ab40();
  _objc_release(param_3);
  if ((int)uVar4 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
    lVar1 = param_1;
    func_0x00010bf2b960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2a1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x48),PTR_s_setUserInteractionEnabled__112665468,0);
    return;
  }
  return;
}



/* Entry: 106119534; end: 1061195d7; -[SCPreviewTransitionController animator:willFinishTransition:] */

void FUN_106119534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2b960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2366a0();
  _objc_release(lVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x48));
  uVar2 = param_3;
  func_0x00010c07ab40();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    func_0x00010be7ffa0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1119a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061195d8; end: 1061195df; -[SCPreviewTransitionController animator:shouldAnimate:] */

undefined8 FUN_1061195d8(void)

{
  return 0;
}



/* Entry: 1061195e0; end: 106119647; -[SCPreviewTransitionController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_1061195e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf611a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1e1480(*(undefined8 *)(param_1 + 8),param_2,1);
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_1);
  }
  else {
    func_0x00010bf611a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106119648; end: 1061196af; -[SCPreviewTransitionController animationControllerForDismissedController:] */

void FUN_106119648(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf61180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1e1480(*(undefined8 *)(param_1 + 8),param_2,0);
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_1);
  }
  else {
    func_0x00010bf61180(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061196b0; end: 1061196b3; -[SCPreviewTransitionController interactionControllerForDismissal:] */

void FUN_1061196b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf61770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_customInteractiveTransitioningDi_1125b5f80);
  return;
}



/* Entry: 1061196b4; end: 1061196b7; -[SCPreviewTransitionController interactionControllerForPresentation:] */

void FUN_1061196b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf61790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_customInteractiveTransitioningPr_1125b5f88);
  return;
}



/* Entry: 1061196b8; end: 10611976b; -[SCPreviewTransitionController startCamera] */

void FUN_1061196b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bf2b960();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252400();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e240(lVar2,param_2,param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10611976c; end: 106119847; -[SCPreviewTransitionController resetCamera] */

void FUN_10611976c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar1 = param_1;
    func_0x00010bf2b960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010bf2b960(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27d4c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bf2b960(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ade0();
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106119848; end: 10611985f; -[SCPreviewTransitionController cameraViewController] */

void FUN_106119848(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106119860; end: 10611986b; -[SCPreviewTransitionController setCameraViewController:] */

void FUN_106119860(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10611986c; end: 106119873; -[SCPreviewTransitionController isAsync] */

undefined1 FUN_10611986c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106119874; end: 10611987b; -[SCPreviewTransitionController setIsAsync:] */

void FUN_106119874(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10611987c; end: 106119883; -[SCPreviewTransitionController isZeroAnimationDuration] */

undefined1 FUN_10611987c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106119884; end: 10611988b; -[SCPreviewTransitionController setIsZeroAnimationDuration:] */

void FUN_106119884(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10611988c; end: 106119893; -[SCPreviewTransitionController capturedMediaType] */

undefined8 FUN_10611988c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106119894; end: 10611989b; -[SCPreviewTransitionController setCapturedMediaType:] */

void FUN_106119894(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10611989c; end: 1061198b3; -[SCPreviewTransitionController customAnimatedTransitioningPresentationAnimator] */

void FUN_10611989c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061198b4; end: 1061198bf; -[SCPreviewTransitionController setCustomAnimatedTransitioningPresentationAnimator:] */

void FUN_1061198b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1061198c0; end: 1061198d7; -[SCPreviewTransitionController customAnimatedTransitioningDismissalAnimator] */

void FUN_1061198c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061198d8; end: 1061198e3; -[SCPreviewTransitionController setCustomAnimatedTransitioningDismissalAnimator:] */

void FUN_1061198d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1061198e4; end: 1061198fb; -[SCPreviewTransitionController customInteractiveTransitioningPresentationAnimator] */

void FUN_1061198e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061198fc; end: 106119907; -[SCPreviewTransitionController setCustomInteractiveTransitioningPresentationAnimator:] */

void FUN_1061198fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106119908; end: 10611991f; -[SCPreviewTransitionController customInteractiveTransitioningDismissalAnimator] */

void FUN_106119908(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106119920; end: 10611992b; -[SCPreviewTransitionController setCustomInteractiveTransitioningDismissalAnimator:] */

void FUN_106119920(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10611992c; end: 106119933; -[SCPreviewTransitionController useLightPreviewReplyCameraBehavior] */

undefined1 FUN_10611992c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 106119934; end: 10611993b; -[SCPreviewTransitionController setUseLightPreviewReplyCameraBehavior:] */

void FUN_106119934(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 10611993c; end: 106119943; -[SCPreviewTransitionController cameraTimer] */

undefined8 FUN_10611993c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106119944; end: 10611999b; -[SCPreviewTransitionController .cxx_destruct] */

void FUN_106119944(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10611999c; end: 106119a57; -[SCPreviewTransitionDefaultAnimator animateTransition:] */

void FUN_10611999c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bdcb280(param_1,param_2,param_3);
  _objc_release(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95360();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106119a58; end: 106119adf; -[SCPreviewTransitionDefaultAnimator _animateTransition:] */

void FUN_106119a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf041e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 == 0) {
    func_0x00010bdcab80(param_1,param_2,param_3);
  }
  else {
    func_0x00010bdcb020(param_1,param_2,param_3);
  }
  func_0x00010bf43bc0(param_3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106119ae0; end: 106119ae7; -[SCPreviewTransitionDefaultAnimator transitionDuration:] */

undefined8 FUN_106119ae0(void)

{
  return 0;
}



/* Entry: 106119ae8; end: 106119af3; -[SCPreviewTransitionDefaultAnimator cameraTimerAnimationDuration] */

undefined8 FUN_106119ae8(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 106119af4; end: 10611a133; -[SCPreviewTransitionDefaultAnimator _animatePresentationTransitionWithTransitioningContext:] */

void FUN_106119af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4a40;
  _objc_opt_class(PTR_PTR_1126c4a40);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010beddcc0(param_5);
  uVar5 = uVar1;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  func_0x00010bf20c00(uVar2);
  func_0x00010c19f0e0(uVar3);
  if (uVar5 != 0) {
    uVar6 = param_5 + 8;
    _objc_loadWeakRetained();
    uVar7 = uVar6;
    func_0x00010bf041a0();
    _objc_release(uVar6);
    if ((uVar7 & 1) != 0) {
      func_0x00010c07ab40();
      lVar13 = param_5 + 0x10;
      _objc_loadWeakRetained();
      lVar8 = lVar13;
      func_0x00010bf2b960();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c29cee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar13);
      lVar13 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar13);
      lVar8 = lVar13;
      func_0x00010bf2b960();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb6c40();
      uVar14 = param_1;
      uVar16 = param_2;
      uVar17 = param_3;
      uVar18 = param_4;
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar13);
      lVar13 = param_5 + 0x10;
      _objc_loadWeakRetained();
      lVar8 = lVar13;
      func_0x00010bf2b960();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf29620();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c230460();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar13);
      func_0x00010c1cbe20(uVar1);
      func_0x00010c08cdc0(uVar1);
      func_0x00010befbb60(uVar2);
      func_0x00010c1a7f60(lVar12);
      uVar6 = uVar5;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar13);
      lVar8 = lVar13;
      func_0x00010bf2b960();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b2e0();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar13);
      uVar15 = uVar14;
      _CGRectGetMidX(uVar14,uVar16,uVar17,uVar18);
      _CGRectGetMidY(uVar14,uVar16,uVar17,uVar18);
      func_0x00010bf512a0(uVar15,uVar14,uVar3);
      lVar13 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar13);
      lVar8 = lVar13;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      uVar17 = uVar14;
      func_0x00010c17a6a0(uVar15,uVar14);
      _objc_release(lVar8);
      _objc_release(lVar13);
      lVar13 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar13);
      lVar8 = lVar13;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(uVar6);
      _objc_release(lVar8);
      _objc_release(lVar13);
      func_0x00010bf345e0(uVar5);
      func_0x00010c17a6a0(uVar15,uVar14,uVar5);
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4,lVar12);
      uVar7 = uVar1;
      func_0x00010c15b700(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(uVar7);
      func_0x00010beddce0(param_5);
      func_0x00010b816b5c();
      param_5 = param_5 + 0x10;
      _objc_loadWeakRetained(param_5);
      lVar13 = param_5;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar1);
      _objc_retain(lVar12);
      _objc_retain(param_7);
      _objc_retain(uVar2);
      _objc_retain(uVar1);
      _objc_retain(lVar12);
      func_0x00010bf031e0(uVar16,uVar17,lVar13);
      _objc_release(lVar13);
      _objc_release(param_5);
      _objc_release(lVar12);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(param_7);
      _objc_release(lVar12);
      _objc_release(uVar1);
      _objc_release(lVar12);
      _objc_release(uVar6);
      goto LAB_10611a0dc;
    }
  }
  lVar13 = param_5 + 8;
  _objc_loadWeakRetained(lVar13);
  func_0x00010bf041c0();
  _objc_release(lVar13);
  func_0x00010beddcc0(param_5);
LAB_10611a0dc:
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 10611a134; end: 10611a213;  */

void FUN_10611a134(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf2b260(*(undefined8 *)(param_2 + 0x20));
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10611a214;
  puStack_88 = &UNK_11090f6f8;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  _objc_retain(uVar2);
  uStack_60 = *(undefined8 *)(param_2 + 0x40);
  uStack_68 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined8 *)(param_2 + 0x50);
  uStack_58 = *(undefined8 *)(param_2 + 0x48);
  uStack_48 = *(undefined1 *)(param_2 + 0x58);
  uStack_70 = uVar2;
  func_0x00010bf03440(param_1,0,puVar1,param_3,2,&puStack_a0,0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  return;
}



/* Entry: 10611a214; end: 10611a2fb;  */

void FUN_10611a214(long param_1,undefined8 param_2)

{
  func_0x00010beddce0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_1 + 0x30),PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 10611a2fc; end: 10611a78f; -[SCPreviewTransitionDefaultAnimator _animateDismissalTransitionWithTransitioningContext:] */

void FUN_10611a2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c29ce60(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4a40;
  _objc_opt_class(PTR_PTR_1126c4a40);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010beddcc0(param_5);
  uVar6 = uVar1;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_7;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaef80(param_7);
  func_0x00010c19f0e0(uVar3);
  if (uVar6 != 0) {
    uVar8 = param_5 + 8;
    _objc_loadWeakRetained();
    uVar9 = uVar8;
    func_0x00010bf041a0();
    _objc_release(uVar8);
    if ((uVar9 & 1) != 0) {
      uVar8 = uVar6;
      func_0x00010c245f60();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = 0;
      func_0x00010c1677c0(0,uVar6);
      func_0x00010befbb60(uVar2);
      lVar12 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar12);
      lVar10 = lVar12;
      func_0x00010bf2b960();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b2e0();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar12);
      uVar14 = uVar13;
      _CGRectGetMidX(uVar13,param_2,param_3,param_4);
      _CGRectGetMidY(uVar13,param_2,param_3,param_4);
      uVar9 = uVar6;
      uVar15 = uVar13;
      func_0x00010c262ca0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf345e0(uVar6);
      func_0x00010bf512a0(uVar9);
      _objc_release(uVar9);
      lVar12 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar12);
      lVar10 = lVar12;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a6a0(uVar15,param_2);
      _objc_release(lVar10);
      _objc_release(lVar12);
      func_0x00010c17a6a0(uVar15,param_2,uVar8);
      lVar12 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar12);
      lVar10 = lVar12;
      func_0x00010bf2b960();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf2a1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar12);
      func_0x00010befbb60(uVar3);
      lVar12 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar12);
      lVar10 = lVar12;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(uVar3);
      _objc_release(lVar10);
      _objc_release(lVar12);
      param_5 = param_5 + 0x10;
      _objc_loadWeakRetained(param_5);
      lVar12 = param_5;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      _objc_retain(uVar1);
      _objc_retain(uVar8);
      func_0x00010bf031c0(uVar14,uVar13,lVar12);
      _objc_release(lVar12);
      _objc_release(param_5);
      _objc_release(uVar1);
      _objc_release(uVar8);
      _objc_release(param_7);
      _objc_release(uVar8);
      goto LAB_10611a72c;
    }
  }
  lVar12 = param_5 + 8;
  _objc_loadWeakRetained(lVar12);
  func_0x00010bf041c0();
  _objc_release(lVar12);
  func_0x00010beddcc0(param_5);
LAB_10611a72c:
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 10611a790; end: 10611a80b;  */

void FUN_10611a790(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf2b260(*(undefined8 *)(param_2 + 0x20));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10611a80c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf03440(param_1,0,puVar1,param_3,*(undefined8 *)(param_2 + 0x28),&puStack_48,0);
  return;
}



/* Entry: 10611a80c; end: 10611a877;  */

void FUN_10611a80c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2b960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10611a878; end: 10611a8c7;  */

void FUN_10611a878(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf041c0();
  _objc_release(lVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010beddcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePreviewView_forAccessibil_1125950d8,
             *(undefined8 *)(param_1 + 0x38),1);
  return;
}



/* Entry: 10611a8c8; end: 10611aab7; -[SCPreviewTransitionDefaultAnimator _updatePreviewView:forTransitionAnimation:] */

void FUN_10611a8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
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
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _CGAffineTransformMakeTranslation(&uStack_70,0,0x4039000000000000);
    _CGAffineTransformMakeTranslation(&uStack_a0,0,0xc039000000000000);
  }
  else {
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_70 = uStack_a0;
    uStack_68 = uStack_98;
    uStack_60 = uStack_90;
    uStack_58 = uStack_88;
    uStack_50 = uStack_80;
    uStack_48 = uStack_78;
  }
  dVar3 = (double)param_4;
  uVar1 = param_3;
  func_0x00010c2be8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010bee3560(dVar3,param_1,param_2,uVar1,&uStack_d0);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2737a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010bee3560(dVar3,param_1,param_2,uVar2,&uStack_d0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c259240(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  func_0x00010bee3560(dVar3,param_1,param_2,uVar1,&uStack_d0);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c14a0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  func_0x00010bee3560(dVar3,param_1,param_2,uVar1,&uStack_d0);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c22a7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  func_0x00010bee3560(dVar3,param_1,param_2,uVar1,&uStack_d0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10611aab8; end: 10611ab23; -[SCPreviewTransitionDefaultAnimator _updateView:transform:alpha:] */

void FUN_10611aab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c1677c0(param_1,param_4);
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  uStack_38 = param_5[5];
  uStack_40 = param_5[4];
  func_0x00010c219960(param_4,param_3,&uStack_60);
  _objc_release(param_4);
  return;
}



/* Entry: 10611ab24; end: 10611ab5f; -[SCPreviewTransitionDefaultAnimator _updatePreviewView:forAccessibility:] */

void FUN_10611ab24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2be8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10611ab60; end: 10611ab67; -[SCPreviewTransitionDefaultAnimator isPresenting] */

undefined1 FUN_10611ab60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10611ab68; end: 10611ab6f; -[SCPreviewTransitionDefaultAnimator setPresenting:] */

void FUN_10611ab68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10611ab70; end: 10611ab9f; -[SCPreviewTransitionDefaultAnimator .cxx_destruct] */

void FUN_10611ab70(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10611aba0; end: 10611ac1f; -[SCPreviewTransitionPostToStoryDismissalAnimator initWithPreviewTransitioningDelegate:profileViewCenter:] */

undefined1 *
FUN_10611aba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126efc50;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10611ac20; end: 10611ad3f; -[SCPreviewTransitionPostToStoryDismissalAnimator animateTransition:] */

void FUN_10611ac20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c24e200();
  _objc_release(lVar3);
  uVar4 = param_3;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010010fab4();
  uVar1 = uVar4;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(uVar1);
  func_0x00010bf03440(0x3fb999999999999a,0,puVar2);
  func_0x00010bddeaa0(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 10611ad40; end: 10611ad77;  */

void FUN_10611ad40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10611ad78; end: 10611ad83; -[SCPreviewTransitionPostToStoryDismissalAnimator transitionDuration:] */

undefined8 FUN_10611ad78(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10611ad84; end: 10611b5cb; -[SCPreviewTransitionPostToStoryDismissalAnimator _circleCloseAnimationOnProfileIconView:] */

/* WARNING: Possible PIC construction at 0x00010611af94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010611af98) */
/* WARNING: Removing unreachable block (ram,0x00010611b5c8) */
/* WARNING: Removing unreachable block (ram,0x00010611b5a0) */

void FUN_10611ad84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = param_4;
  func_0x00010c29ce60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaef80(param_4);
  func_0x00010c19f0e0(uVar3);
  uVar3 = param_4;
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010bfb68e0(uVar1);
  _CGRectGetWidth();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(0,0,param_1,param_1);
  func_0x00010befbb60();
  uVar1 = param_4;
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  func_0x00010c17a6a0(puVar2);
  _objc_release(param_4);
  func_0x00010c17d4c0(puVar2);
  puVar4 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,puVar2,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10611b5cc; end: 10611b5d7;  */

void FUN_10611b5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10611b5d8; end: 10611b623;  */

void FUN_10611b5d8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 10611b624; end: 10611b62b; -[SCPreviewTransitionPostToStoryDismissalAnimator .cxx_destruct] */

void FUN_10611b624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 10611b62c; end: 10611b69b;  */

void FUN_10611b62c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf2a400(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bec76e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10611b69c; end: 10611b7ef; -[SCCameraPreviewTinselRegistrator registeredExternalContent] */

void FUN_10611b69c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c126400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c126440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010bfb2040(puVar2,param_2,&PTR___NSConcreteGlobalBlock_11090f748);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf43280(puVar2,param_2,&PTR___NSConcreteGlobalBlock_11090f788);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c8248;
  _objc_alloc(PTR_PTR_1126c8248);
  _objc_release(puVar2);
  func_0x00010c01d680(puVar5,param_2,puVar3 != (undefined *)0x0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10611b7f0; end: 10611b883;  */

bool FUN_10611b7f0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf4c1a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010c247520();
    if ((lVar3 == 0) || (lVar3 = param_2, func_0x00010c247520(), lVar3 == 1)) {
      bVar1 = true;
    }
    else {
      lVar3 = param_2;
      func_0x00010c247520(param_2);
      bVar1 = lVar3 == 2;
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10611b884; end: 10611b88b;  */

void FUN_10611b884(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentData_1125b0a10);
  return;
}



/* Entry: 10611b88c; end: 10611b983; -[SCCameraPreviewTinselRegistrator _subscribeToEventsObservable:] */

void FUN_10611b88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


