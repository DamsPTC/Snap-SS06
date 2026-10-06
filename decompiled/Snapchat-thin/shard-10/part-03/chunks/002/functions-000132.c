/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f9488c; end: 107f948ef; -[SCSmartImageSwipeFilterView filterArrangerDidChangeVisualFilterNamesProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9488c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_filterArrangerDidChangeVisualFil_1125c8fe0);
  func_0x00010c1d6f00(*(undefined8 *)(param_1 + _DAT_112772628));
  func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  return;
}



/* Entry: 107f948f0; end: 107f9493f; -[SCSmartImageSwipeFilterView filterArranger:didApplyToolFilterName:config:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f948f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_filterArranger_didApplyToolFilte_1125c8fb0);
  func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  return;
}



/* Entry: 107f94940; end: 107f9498f; -[SCSmartImageSwipeFilterView filterArranger:didUnapplyToolFilterName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94940(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_filterArranger_didUnapplyToolFil_1125c8fd0);
  func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  return;
}



/* Entry: 107f94990; end: 107f94a5f; -[SCSmartImageSwipeFilterView colorFilterSessionDidRenderImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94990(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277260c);
  puVar1 = PTR_PTR_1126d89f0;
  func_0x00010bf79c00(PTR_PTR_1126d89f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + _DAT_112772640) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112772640) = 1;
    lVar4 = (long)_DAT_112772604;
    func_0x00010c0a7f80(*(undefined8 *)(param_1 + lVar4));
    puVar1 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfccda0();
    _objc_release(puVar1);
    if (puVar2 + -1 < (undefined *)0x3) {
                    /* WARNING: Could not recover jumptable at 0x00010c1aa6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar4),PTR_s_setImagePlaybackGLESVersion__1126483e0,
                 puVar2 + -2);
      return;
    }
  }
  return;
}



/* Entry: 107f94a60; end: 107f94aab; -[SCSmartImageSwipeFilterView colorFilterSessionImageRenderFailedWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772604);
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aaa60(uVar1,param_2,2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f94aac; end: 107f94bab; -[SCSmartImageSwipeFilterView commandManager:didUpdateMappedCommands:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f94aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112772608));
  func_0x00010c0dd220(*(undefined8 *)(param_1 + _DAT_112772620));
  if ((*(byte *)(param_1 + _DAT_11277263c) & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f94bac;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f94bac; end: 107f94cc7;  */

void FUN_107f94bac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar3 = lVar1;
    func_0x00010bf9b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010c286640(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2,
                              *(undefined8 *)(param_1 + 0x20));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lVar1;
  func_0x00010c1245e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfe8540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1245e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c249640(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107f94cc8; end: 107f94d5f; -[SCSmartImageSwipeFilterView defaultLensCommand] */

void FUN_107f94cc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c1245e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfe8540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1245e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c249640(lVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107f94d60; end: 107f94d63; -[SCSmartImageSwipeFilterView imageProcessCommandForIndexPath:] */

void FUN_107f94d60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentLensCommand_1125b5600);
  return;
}



/* Entry: 107f94d64; end: 107f94ecb; -[SCSmartImageSwipeFilterView _isCommandCacheNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107f94d64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112772628);
  func_0x00010bfc3d60(lVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = lVar1;
  func_0x00010bf418e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf52a60();
  puVar10 = (undefined *)0x0;
  if (lVar9 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        puVar10 = PTR_PTR_1126c40e0;
        uVar11 = *(ulong *)(lStack_128 + lVar14 * 8);
        _objc_retain(uVar11);
        _objc_opt_class(puVar10);
        uVar3 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar10);
        _objc_release(uVar11);
        if (((uVar3 & 1) != 0) && (uVar11 != 0)) {
          puVar10 = (undefined *)0x1;
          goto LAB_107f94e7c;
        }
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = lVar2;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
    puVar10 = (undefined *)0x0;
  }
LAB_107f94e7c:
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(puVar8);
  puVar4 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar4 != (undefined1 *)0x0) {
    puVar15 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar8);
      }
      puVar5 = PTR_PTR_1126c40c8;
      puVar12 = *(undefined **)((long)puVar15 * 8);
      _objc_retain(puVar12);
      _objc_opt_class(puVar5);
      puVar6 = puVar12;
      _objc_opt_isKindOfClass(puVar12,puVar5);
      puVar5 = puVar12;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar12);
      if ((puVar5 == (undefined *)0x0) ||
         (puVar6 = puVar12, func_0x00010c071320(), ((ulong)puVar6 & 1) != 0)) {
        puVar6 = PTR_PTR_1126c40e0;
        _objc_retain(puVar12);
        _objc_opt_class(puVar6);
        puVar7 = puVar12;
        _objc_opt_isKindOfClass(puVar12,puVar6);
        puVar6 = puVar12;
        if (((ulong)puVar7 & 1) == 0) {
          puVar6 = (undefined *)0x0;
        }
        _objc_retain(puVar6);
        _objc_release(puVar12);
        if (puVar6 == (undefined *)0x0) {
          func_0x00010befa120(puVar10);
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar6 = PTR_PTR_1126c40e0;
          _objc_alloc(PTR_PTR_1126c40e0);
          func_0x00010bfffd20();
          func_0x00010befa120(puVar10);
          _objc_release(puVar6);
        }
      }
      else {
        puVar12 = PTR_PTR_1126c40c8;
        _objc_alloc(PTR_PTR_1126c40c8);
        func_0x00010bfffd20();
        func_0x00010befa120(puVar10);
      }
      _objc_release(puVar12);
      _objc_release(puVar5);
      puVar15 = puVar15 + 1;
    } while (puVar4 != puVar15);
    puVar4 = (undefined1 *)puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  puVar5 = puVar10;
  func_0x00010bf51e00(puVar10);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)((long)puVar8 + (long)_DAT_112772608);
}



/* Entry: 107f94ecc; end: 107f95103; -[SCSmartImageSwipeFilterView _processCommandsFromCommands:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107f94ecc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126c40c8;
      puVar8 = *(undefined **)(lVar9 * 8);
      _objc_retain(puVar8);
      _objc_opt_class(puVar4);
      puVar5 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar4);
      puVar4 = puVar8;
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar8);
      if ((puVar4 == (undefined *)0x0) ||
         (puVar5 = puVar8, func_0x00010c071320(), ((ulong)puVar5 & 1) != 0)) {
        puVar5 = PTR_PTR_1126c40e0;
        _objc_retain(puVar8);
        _objc_opt_class(puVar5);
        puVar6 = puVar8;
        _objc_opt_isKindOfClass(puVar8,puVar5);
        puVar5 = puVar8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar5 = (undefined *)0x0;
        }
        _objc_retain(puVar5);
        _objc_release(puVar8);
        if (puVar5 == (undefined *)0x0) {
          func_0x00010befa120(puVar2);
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar5 = PTR_PTR_1126c40e0;
          _objc_alloc(PTR_PTR_1126c40e0);
          func_0x00010bfffd20();
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
      }
      else {
        puVar8 = PTR_PTR_1126c40c8;
        _objc_alloc(PTR_PTR_1126c40c8);
        func_0x00010bfffd20();
        func_0x00010befa120(puVar2);
      }
      _objc_release(puVar8);
      _objc_release(puVar4);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + _DAT_112772608);
}



/* Entry: 107f95104; end: 107f95113; -[SCSmartImageSwipeFilterView imageProcessCommandsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f95104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772608);
}



/* Entry: 107f95114; end: 107f95123; -[SCSmartImageSwipeFilterView playbackEventsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f95114(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277260c);
}



/* Entry: 107f95124; end: 107f95133; -[SCSmartImageSwipeFilterView imagePlaybackLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f95124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772604);
}



/* Entry: 107f95134; end: 107f95143; -[SCSmartImageSwipeFilterView isPlaybackVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107f95134(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127725e4);
}



/* Entry: 107f95144; end: 107f95153; -[SCSmartImageSwipeFilterView setIsPlaybackVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f95144(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127725e4) = param_3;
  return;
}



/* Entry: 107f95154; end: 107f95163; -[SCSmartImageSwipeFilterView isTranscoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107f95154(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127725e8);
}



/* Entry: 107f95164; end: 107f95173; -[SCSmartImageSwipeFilterView setIsTranscoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f95164(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127725e8) = param_3;
  return;
}



/* Entry: 107f95174; end: 107f95183; -[SCSmartImageSwipeFilterView image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f95174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772630);
}



/* Entry: 107f95184; end: 107f95293; -[SCSmartImageSwipeFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f95184(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772630,0);
  _objc_storeStrong(param_1 + _DAT_112772604,0);
  _objc_storeStrong(param_1 + _DAT_112772628,0);
  _objc_storeStrong(param_1 + _DAT_112772614,0);
  _objc_storeStrong(param_1 + _DAT_112772610,0);
  _objc_storeStrong(param_1 + _DAT_11277260c,0);
  _objc_storeStrong(param_1 + _DAT_112772608,0);
  _objc_storeStrong(param_1 + _DAT_1127725f4,0);
  _objc_storeStrong(param_1 + _DAT_112772638,0);
  _objc_storeStrong(param_1 + _DAT_112772624,0);
  _objc_storeStrong(param_1 + _DAT_112772618,0);
  _objc_storeStrong(param_1 + _DAT_112772620,0);
  _objc_storeStrong(param_1 + _DAT_1127725f0,0);
  _objc_storeStrong(param_1 + _DAT_112772634,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277262c,0);
  return;
}



/* Entry: 107f95294; end: 107f95d47; -[SCSmartSwipeFilterView initWithFrame:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:latencyLogger:userInteractionStateLogger:spectaclesConfig:rectificationConfig:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:isFromGallery:lazyLensIconRepository:unifiedCameraObjectFilterViewFactory:ucoLogger:ucoInteractionTracker:lensCrashLogger:filterViewLayoutGuide:previewABProvider:lensCTAHandler:locationProvider:userBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_107f95294(double param_1,double param_2,double param_3,double param_4,undefined8 *****param_5,
             undefined8 param_6,long param_7,undefined8 param_8,undefined8 *****param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 *****param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,byte param_19,undefined4 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
             undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *****pppppuVar12;
  undefined8 uVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  long lStack_210;
  undefined *puStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 ****ppppuStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  uStack_110 = param_30;
  uStack_158 = param_29;
  uStack_108 = param_28;
  uStack_100 = param_27;
  uStack_f8 = param_26;
  uStack_f0 = param_25;
  uStack_e8 = param_24;
  uStack_e0 = param_23;
  uStack_150 = param_21;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = param_12;
  ppppuStack_160 = param_5;
  lStack_120 = param_7;
  uStack_d8 = param_11;
  _objc_retain(param_7);
  uVar7 = uStack_158;
  uStack_128 = param_8;
  _objc_retain(param_8);
  ppppuStack_130 = param_9;
  _objc_retain(param_9);
  uStack_138 = param_10;
  _objc_retain(param_10);
  _objc_retain(uStack_d8);
  uVar5 = uStack_150;
  uStack_118 = param_13;
  _objc_retain(param_13);
  _objc_retain(param_14);
  uStack_140 = param_15;
  _objc_retain(param_15);
  uStack_148 = param_16;
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(uVar5);
  _objc_retain(param_22);
  _objc_retain(uStack_e0);
  _objc_retain(uStack_e8);
  _objc_retain(uStack_f0);
  _objc_retain(uStack_f8);
  _objc_retain(uStack_100);
  _objc_retain(uStack_108);
  _objc_retain(uVar7);
  _objc_retain(uStack_110);
  ppppuStack_d0 = ppppuStack_160;
  puStack_c8 = PTR_PTR_1126fbec8;
  pppppuVar4 = &ppppuStack_d0;
  dVar18 = param_3;
  dVar19 = param_4;
  _objc_msgSendSuper2(pppppuVar4,PTR_s_initWithFrame__1125e2948);
  pppppuVar14 = param_14;
  if (pppppuVar4 != (undefined8 *****)0x0) {
    uStack_17c = (uint)param_19;
    lVar15 = (long)_DAT_112772650;
    _objc_retain(param_14);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 ******)((long)pppppuVar4 + lVar15) = param_14;
    _objc_release(uVar5);
    uVar5 = uStack_140;
    lVar15 = (long)_DAT_112772654;
    uStack_178 = param_22;
    _objc_retain(uStack_140);
    uVar6 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar5;
    _objc_release(uVar6);
    uVar5 = uStack_148;
    lVar15 = (long)_DAT_112772658;
    _objc_retain(uStack_148);
    uVar6 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar5;
    _objc_release(uVar6);
    lVar15 = (long)_DAT_11277265c;
    _objc_retain(param_17);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = param_17;
    _objc_release(uVar5);
    lVar15 = (long)_DAT_112772660;
    _objc_retain(param_18);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = param_18;
    _objc_release(uVar5);
    lVar15 = (long)_DAT_112772664;
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar5);
    lVar15 = lStack_120;
    uStack_170 = param_18;
    lVar16 = (long)_DAT_112772668;
    _objc_retain(lStack_120);
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    *(long *)((long)pppppuVar4 + lVar16) = lVar15;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126b38b8;
    _objc_alloc();
    func_0x00010bf20c00(pppppuVar4);
    func_0x00010c013de0();
    lVar17 = (long)_DAT_11277266c;
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar17);
    *(undefined **)((long)pppppuVar4 + lVar17) = puVar8;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126b38b8;
    _objc_alloc();
    func_0x00010bf20c00(pppppuVar4);
    func_0x00010c013de0();
    lVar15 = (long)_DAT_112772670;
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined **)((long)pppppuVar4 + lVar15) = puVar8;
    _objc_release(uVar7);
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar4 + lVar15));
    ppppuStack_160 = param_14;
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f27658;
    uStack_98 = *(undefined8 *)((long)pppppuVar4 + lVar17);
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c560();
    uVar7 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112772674);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_112772674) = puVar8;
    _objc_release(uVar7);
    _objc_release(puVar9);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112772678);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_112772678) = puVar8;
    _objc_release(uVar7);
    *(char *)((undefined2 *)((long)pppppuVar4 + (long)_DAT_11277267c) + 1) =
         (char)((ulong)uStack_168 >> 0x10);
    *(undefined2 *)((long)pppppuVar4 + (long)_DAT_11277267c) = (short)uStack_168;
    lVar15 = (long)_DAT_112772680;
    _objc_retain(uStack_118);
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uStack_118;
    _objc_release(uVar7);
    uVar7 = uStack_100;
    lVar15 = (long)_DAT_112772684;
    _objc_retain(uStack_100);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar5);
    uVar7 = uStack_128;
    lVar15 = (long)_DAT_112772688;
    _objc_retain(uStack_128);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar5);
    *(undefined8 *)((long)pppppuVar4 + (long)_DAT_11277268c) = 0xffffffffffffffff;
    *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112772690) = 0xffffffffffffffff;
    *(undefined1 *)((long)pppppuVar4 + (long)_DAT_112772694) = 0;
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    func_0x00010c2a0440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112772698);
    *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112772698) = uVar7;
    _objc_release(uVar5);
    uVar7 = uStack_138;
    *(undefined1 *)((long)pppppuVar4 + (long)_DAT_11277269c) = 0;
    lVar15 = (long)_DAT_1127726a0;
    _objc_retain(uStack_138);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar5);
    uVar7 = uStack_d8;
    lVar15 = (long)_DAT_1127726a4;
    _objc_retain(uStack_d8);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar5);
    *(undefined1 *)((long)pppppuVar4 + (long)_DAT_1127726a8) = 0;
    *(undefined1 *)((long)pppppuVar4 + (long)_DAT_1127726ac) = 0;
    puVar8 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1c8300(0);
    func_0x00010c1c82c0(0,puVar8);
    func_0x00010bf20c00(pppppuVar4);
    func_0x00010c1b6260(dVar18,dVar19,puVar8);
    puStack_188 = puVar8;
    func_0x00010c1f7ac0(puVar8);
    puVar8 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010bf20c00(pppppuVar4);
    func_0x00010c014040();
    lVar16 = (long)_DAT_1127726b0;
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    *(undefined **)((long)pppppuVar4 + lVar16) = puVar8;
    _objc_release(uVar7);
    func_0x00010c160fc0(*(undefined8 *)((long)pppppuVar4 + lVar16));
    func_0x00010c1fbe00(*(undefined8 *)((long)pppppuVar4 + lVar16));
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)pppppuVar4 + lVar16));
    _objc_release(puVar8);
    func_0x00010c1d8be0(*(undefined8 *)((long)pppppuVar4 + lVar16));
    func_0x00010c2025c0(*(undefined8 *)((long)pppppuVar4 + lVar16));
    func_0x00010c2026e0(*(undefined8 *)((long)pppppuVar4 + lVar16));
    func_0x00010c181fc0(*(undefined8 *)((long)pppppuVar4 + lVar16));
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    _objc_opt_class();
    func_0x00010c126000(uVar7);
    func_0x00010c189840(*(undefined8 *)((long)pppppuVar4 + lVar16));
    func_0x00010befbb60(pppppuVar4);
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar4 + lVar16));
    puStack_1b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar14 = pppppuVar4;
    uStack_190 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_198 = pppppuVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar7;
    uVar10 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    uStack_1a0 = uVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar14 = pppppuVar4;
    uStack_1a8 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_1b0 = pppppuVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = param_17;
    uStack_b8 = uVar10;
    uVar11 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar12 = pppppuVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar7;
    uVar13 = *(undefined8 *)((long)pppppuVar4 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar14 = pppppuVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar6;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b8);
    uVar5 = uStack_150;
    _objc_release(puVar8);
    ppppuVar2 = ppppuStack_130;
    _objc_release(uVar6);
    _objc_release(pppppuVar14);
    _objc_release(uVar13);
    param_22 = uStack_178;
    _objc_release(uVar7);
    _objc_release(pppppuVar12);
    _objc_release(uVar11);
    param_17 = uStack_168;
    _objc_release(uVar10);
    _objc_release(ppppuStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(ppppuStack_198);
    _objc_release(uStack_190);
    puVar1 = (undefined8 *)((long)pppppuVar4 + (long)_DAT_1127726b4);
    uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    param_2 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *puVar1 = uVar7;
    puVar1[3] = uVar6;
    puVar1[2] = param_2;
    param_1 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar1[5] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    puVar1[4] = param_1;
    lVar15 = (long)_DAT_1127726b8;
    _objc_retain(ppppuVar2);
    param_18 = uStack_170;
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *****)((long)pppppuVar4 + lVar15) = ppppuVar2;
    _objc_release(uVar7);
    *(char *)((long)pppppuVar4 + (long)_DAT_1127726bc) = (char)uStack_17c;
    puVar8 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_1127726c0);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_1127726c0) = puVar8;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_1127726c4);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_1127726c4) = puVar8;
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_1127726c8);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_1127726c8) = puVar8;
    _objc_release(uVar7);
    lVar15 = (long)_DAT_1127726cc;
    _objc_retain(uVar5);
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar5;
    _objc_release(uVar7);
    lVar15 = (long)_DAT_1127726d0;
    _objc_retain(param_22);
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = param_22;
    _objc_release(uVar7);
    _objc_storeWeak((long)pppppuVar4 + (long)_DAT_1127726d4,uStack_e0);
    uVar7 = uStack_e8;
    lVar15 = (long)_DAT_1127726d8;
    _objc_retain(uStack_e8);
    uVar6 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar6);
    _objc_storeWeak((long)pppppuVar4 + (long)_DAT_1127726dc,uStack_f0);
    uVar7 = uStack_f8;
    lVar15 = (long)_DAT_1127726e0;
    _objc_retain(uStack_f8);
    uVar6 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar6);
    uVar7 = uStack_108;
    lVar15 = (long)_DAT_1127726e4;
    _objc_retain(uStack_108);
    uVar6 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar6);
    uVar7 = uStack_110;
    lVar15 = (long)_DAT_1127726e8;
    _objc_retain(uStack_110);
    uVar6 = *(undefined8 *)((long)pppppuVar4 + lVar15);
    *(undefined8 *)((long)pppppuVar4 + lVar15) = uVar7;
    _objc_release(uVar6);
    *(undefined1 *)((long)pppppuVar4 + (long)_DAT_1127726ec) = 0;
    puVar8 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_1127726f0);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_1127726f0) = puVar8;
    _objc_release(uVar7);
    param_14 = pppppuVar4;
    func_0x00010c090420();
    _objc_retainAutoreleasedReturnValue();
    param_9 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar14 = param_9;
    func_0x00010c10f480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7300(pppppuVar4);
    uVar7 = uStack_158;
    _objc_release(pppppuVar14);
    _objc_release(param_9);
    _objc_release(param_14);
    func_0x00010c08cdc0(pppppuVar4);
    func_0x00010c152520(pppppuVar4);
    pppppuVar14 = (undefined8 *****)ppppuStack_160;
    func_0x00010c18b5e0(*(undefined8 *)((long)pppppuVar4 + lVar16));
    _objc_release(puStack_188);
  }
  _objc_release(uStack_110);
  _objc_release(uVar7);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(param_22);
  _objc_release(uVar5);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(pppppuVar14);
  _objc_release(uStack_118);
  _objc_release(uStack_d8);
  _objc_release(uStack_138);
  _objc_release(ppppuStack_130);
  _objc_release(uStack_128);
  lVar15 = lStack_120;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_107f95d48;
  puStack_208 = PTR_PTR_1126fbec8;
  lStack_210 = lVar15;
  dStack_200 = param_3;
  dStack_1f8 = param_4;
  uStack_1f0 = param_18;
  uStack_1e8 = uVar7;
  ppppuStack_1e0 = param_9;
  ppppuStack_1d8 = param_14;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_210,PTR_s_layoutSubviews_112600e60);
  lVar16 = (long)_DAT_1127726b0;
  pppppuVar14 = *(undefined8 ******)(lVar15 + lVar16);
  func_0x00010bf408e0(pppppuVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084a80();
  func_0x00010bf20c00(lVar15);
  bVar3 = false;
  if ((param_1 == dVar18) && (bVar3 = false, !NAN(param_2) && !NAN(dVar19))) {
    bVar3 = param_2 == dVar19;
  }
  if (((!bVar3) && (func_0x00010bf20c00(lVar15), 0.0 < dVar18)) &&
     (func_0x00010bf20c00(lVar15), 0.0 < dVar19)) {
    lVar17 = *(long *)(lVar15 + _DAT_1127726f4);
    func_0x00010bf20c00(lVar15);
    func_0x00010c1b6260(dVar18,dVar19,pppppuVar14);
    func_0x00010c069fe0(pppppuVar14);
    func_0x00010bf20c00(lVar15);
    func_0x00010c1822e0(dVar18 * (double)lVar17,0,*(undefined8 *)(lVar15 + lVar16));
  }
  _objc_release(pppppuVar14);
  return pppppuVar14;
}



/* Entry: 107f95d48; end: 107f95e43; -[SCSmartSwipeFilterView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f95d48(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fbec8;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_1127726b0;
  uVar2 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bf408e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084a80();
  func_0x00010bf20c00(param_5);
  bVar1 = false;
  if ((param_1 == param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar1 = param_2 == param_4;
  }
  if (((!bVar1) && (func_0x00010bf20c00(param_5), 0.0 < param_3)) &&
     (func_0x00010bf20c00(param_5), 0.0 < param_4)) {
    lVar4 = *(long *)(param_5 + _DAT_1127726f4);
    func_0x00010bf20c00(param_5);
    func_0x00010c1b6260(param_3,param_4,uVar2);
    func_0x00010c069fe0(uVar2);
    func_0x00010bf20c00(param_5);
    func_0x00010c1822e0(param_3 * (double)lVar4,0,*(undefined8 *)(param_5 + lVar3));
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 107f95e44; end: 107f95f07; -[SCSmartSwipeFilterView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f95e44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  _objc_retain(param_5);
  lVar3 = (long)_DAT_1127726f8;
  if (*(long *)(param_3 + lVar3) != 0) {
    func_0x00010bf512a0(param_1,param_2,param_3);
    puVar1 = *(undefined1 **)(param_3 + lVar3);
    func_0x00010bfe3a40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined1 *)0x0) goto LAB_107f95ee4;
  }
  puStack_48 = PTR_PTR_1126fbec8;
  lStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined1 *)plVar2;
LAB_107f95ee4:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f95f08; end: 107f95f87; -[SCSmartSwipeFilterView touchTargetForGesture:] */

void FUN_107f95f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5eb00(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c2774e0(param_1,param_2,1,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f95f88; end: 107f96037; -[SCSmartSwipeFilterView touchTargetForType:gesture:] */

void FUN_107f95f88(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  func_0x00010bf5eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar4 = uVar1;
  func_0x00010c232a80();
  _objc_release(param_4);
  uVar3 = uVar1;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f96038; end: 107f96057; -[SCSmartSwipeFilterView setViewportTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96038(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1127726b4);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 107f96058; end: 107f960ab; -[SCSmartSwipeFilterView setCropBackgroundAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + _DAT_112772688);
  *(undefined8 *)(puVar1 + _DAT_112772688) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f960ac; end: 107f9610b; -[SCSmartSwipeFilterView setBackgroundCommandWithColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f960ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(puVar1 + _DAT_112772688);
  *(undefined8 *)(puVar1 + _DAT_112772688) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f9610c; end: 107f96143; -[SCSmartSwipeFilterView setCommonLoggingParamsBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9610c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772688);
  *(undefined8 *)(param_1 + _DAT_112772688) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f96144; end: 107f96197; -[SCSmartSwipeFilterView updateMediaViewScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_6);
  _objc_exception_throw();
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(puVar1 + _DAT_1127726f8);
  *(undefined8 *)(puVar1 + _DAT_1127726f8) = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(uVar2);
  func_0x00010bf20c00(puVar1);
  uVar3 = uVar4;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar4,uVar5,param_3,param_4);
  func_0x00010c17a6a0(uVar3,uVar4,uVar2);
  uVar3 = uVar2;
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x402e000000000000);
  _objc_release(uVar3);
  func_0x00010c066fe0(puVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 107f96198; end: 107f962b3; -[SCSmartSwipeFilterView addCaptionViewBelowFilters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + _DAT_1127726f8);
  *(undefined8 *)(param_5 + _DAT_1127726f8) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_80 = uVar3;
  uStack_70 = uVar2;
  func_0x00010c219960(param_7,param_6,&uStack_90);
  func_0x00010bf20c00(param_5);
  uVar1 = uVar2;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar2,uVar3,param_3,param_4);
  func_0x00010c17a6a0(uVar1,uVar2,param_7);
  uVar1 = param_7;
  func_0x00010c08c0e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x402e000000000000);
  _objc_release(uVar1);
  func_0x00010c066fe0(param_5,param_6,param_7,*(undefined8 *)(param_5 + _DAT_1127726b0));
  _objc_release(param_7);
  return;
}



/* Entry: 107f962b4; end: 107f963cb; -[SCSmartSwipeFilterView setFiltersUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f962b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c21e900(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_1127726b0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c19c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107f963cc; end: 107f963cf; -[SCSmartSwipeFilterView setFiltersEnabled:] */

void FUN_107f963cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFiltersUserInteractionEnabled_112644c80);
  return;
}



/* Entry: 107f963d0; end: 107f963df; -[SCSmartSwipeFilterView numberOfFilterChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107f963d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772644);
}



/* Entry: 107f963e0; end: 107f96427; -[SCSmartSwipeFilterView isScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107f963e0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127726b0);
  func_0x00010c070ea0();
  if ((uVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + _DAT_1127726fc);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 107f96428; end: 107f96437; -[SCSmartSwipeFilterView filterItemForCurrentSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_filterItemForSection__1125c91c0,*(undefined8 *)(param_1 + _DAT_1127726f4)
            );
  return;
}



/* Entry: 107f96438; end: 107f96527; -[SCSmartSwipeFilterView currentFilterItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96438(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772668);
  func_0x00010c24d460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf09f60(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126d8940;
  func_0x00010c246ee0(PTR_PTR_1126d8940,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f96528; end: 107f96543;  */

uint FUN_107f96528(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c081ec0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107f96544; end: 107f9657f; -[SCSmartSwipeFilterView selectedFiltersCount] */

undefined8 FUN_107f96544(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107f96580; end: 107f965c3; -[SCSmartSwipeFilterView currentFilterNamesForType:] */

void FUN_107f96580(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5ea40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f965c4; end: 107f965cb;  */

void FUN_107f965c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterName_1125c9208);
  return;
}



/* Entry: 107f965cc; end: 107f9665b; -[SCSmartSwipeFilterView currentUCOFilterNames] */

void FUN_107f965cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf5eaa0(param_1,param_2,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c273680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f9665c; end: 107f966bf; -[SCSmartSwipeFilterView currentToolFilterIds] */

void FUN_107f9665c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c273680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f966c0; end: 107f966cf;  */

void FUN_107f966c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b38b8,PTR_s_geofilterIdFromName__1125cdf50,param_2);
  return;
}



/* Entry: 107f966d0; end: 107f96713; -[SCSmartSwipeFilterView toolLensesMap] */

void FUN_107f966d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f96714; end: 107f967bf; -[SCSmartSwipeFilterView selectedExportableGeofilterNames] */

void FUN_107f96714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bdf6aa0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a15e88);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c273680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf09f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f967c0; end: 107f96813;  */

bool FUN_107f967c0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfae5a0();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010bfae5a0(param_2);
    bVar1 = lVar2 == 7;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107f96814; end: 107f9681b;  */

void FUN_107f96814(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfae190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_filterName_1125c9208);
  return;
}



/* Entry: 107f9681c; end: 107f96873; -[SCSmartSwipeFilterView currentFilterItemsForType:] */

void FUN_107f9681c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_107f96874;
  puStack_20 = &UNK_110a15ec8;
  uStack_18 = param_3;
  func_0x00010bdf6aa0(param_1,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f96874; end: 107f968a3;  */

bool FUN_107f96874(long param_1,long param_2)

{
  func_0x00010bfae5a0(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 107f968a4; end: 107f968e7; -[SCSmartSwipeFilterView currentFilterNameForType:] */

void FUN_107f968a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f968e8; end: 107f96a8f; -[SCSmartSwipeFilterView currentFilterItemForType:] */

void FUN_107f968e8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
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
  func_0x00010bf5ea40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    if (param_3 == 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(param_1);
      puVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
      if (puVar1 != (undefined *)0x0) {
        lVar6 = *plStack_120;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar6) {
              _objc_enumerationMutation(param_1);
            }
            puVar4 = *(undefined **)(lStack_128 + (long)puVar7 * 8);
            puVar8 = puVar4;
            func_0x00010bf32760();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar8;
            func_0x00010bfcef60();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            _objc_release(puVar8);
            if ((int)puVar3 == 0) {
              _objc_retain(puVar4);
              _objc_release(param_1);
              goto LAB_107f96a48;
            }
            puVar7 = puVar7 + 1;
          } while (puVar1 != puVar7);
          puVar1 = param_1;
          func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(param_1);
    }
    puVar4 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107f96a48:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = param_1;
    func_0x00010bf5ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar7 = puVar1;
    func_0x00010bf529e0(puVar1);
    func_0x00010bffc4a0(puVar4,param_2,puVar7);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(puVar1);
    puVar7 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_260,auStack_218,0x10);
    if (puVar7 != (undefined *)0x0) {
      lVar6 = *plStack_250;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar6) {
            _objc_enumerationMutation(puVar1);
          }
          uVar5 = *(undefined8 *)(lStack_258 + (long)puVar8 * 8);
          puVar2 = param_1;
          func_0x00010bfad800(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfae180(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf45e80(puVar2,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(puVar2);
          func_0x00010c14c720(puVar4,param_2,puVar3);
          _objc_release(puVar3);
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar8);
        puVar7 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puVar7 = puVar1;
      func_0x00010bf5e9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad800(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c273640();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010bf09f80(puVar7,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f96a90; end: 107f96c33; -[SCSmartSwipeFilterView currentFilterConfigsForType:] */

void FUN_107f96a90(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
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
  puVar1 = param_1;
  func_0x00010bf5ea40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010bf529e0(puVar1);
  func_0x00010bffc4a0(puVar2,param_2,puVar3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar1);
  puVar3 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
        puVar4 = param_1;
        func_0x00010bfad800(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfae180(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf45e80(puVar4,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(puVar4);
        func_0x00010c14c720(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar3 = puVar1;
    func_0x00010bf5e9a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c273640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf09f80(puVar3,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f96c34; end: 107f96cc3; -[SCSmartSwipeFilterView currentUcoFilterConfigs] */

void FUN_107f96c34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf5e9a0(param_1,param_2,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c273640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107f96cc4; end: 107f96e53; -[SCSmartSwipeFilterView _currentFilterItemMatchingBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96cc4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = param_1;
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c14cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar8;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = param_1;
    func_0x00010bfae060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf11de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_1);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar5 = param_3, (**(code **)(param_3 + 0x10))(param_3,puVar2), (int)puVar5 == 0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
  else {
    _objc_retain(puVar8);
    puVar5 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c24d280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  if (puVar2 == (undefined *)0x0) {
    puVar6 = param_3;
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c24d460();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c24d380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    do {
      if (puVar6 == (undefined *)0x0) {
        _objc_release(puVar7);
        puVar6 = *(undefined **)(param_3 + _DAT_112772700);
        func_0x00010be160e0(param_3);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) goto LAB_107f97128;
        puVar7 = *(undefined **)(puVar6 + 0x10);
        goto LAB_107f97044;
      }
      puVar8 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar7);
        }
        puVar5 = *(undefined **)((long)puVar8 * 8);
        puVar3 = puVar5;
        func_0x00010bfae5a0();
        if (puVar3 == (undefined *)0x6) {
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107f97088;
        }
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar6 = puVar7;
      func_0x00010bf52a60();
    } while( true );
  }
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bfae180(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010bf11de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = param_3;
  do {
    _objc_release(puVar6);
LAB_107f97088:
    while( true ) {
      _objc_release(puVar7);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) goto _objc_autoreleaseReturnValue;
      ___stack_chk_fail();
      param_3 = puVar5;
LAB_107f97128:
      puVar7 = (undefined *)0x0;
LAB_107f97044:
      _objc_retain(puVar7);
      _objc_release(puVar6);
      puVar8 = puVar7;
      func_0x00010c0720c0();
      if (((ulong)puVar8 & 1) == 0) break;
      puVar5 = (undefined *)0x0;
    }
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar8 = puVar6;
    func_0x00010c081f00();
    if (((ulong)puVar8 & 1) == 0) {
      _objc_retain(puVar7);
      puVar5 = puVar7;
    }
    else {
      puVar5 = (undefined *)0x0;
    }
  } while( true );
}



/* Entry: 107f96e54; end: 107f9712f; -[SCSmartSwipeFilterView nameForFilterWithActiveMediaCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f96e54(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
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
  uVar4 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c24d280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfae180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf11de0(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar5 = param_1;
    do {
      _objc_release(uVar4);
LAB_107f97088:
      while( true ) {
        _objc_release(uVar5);
        _objc_release(uVar1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
          return;
        }
        ___stack_chk_fail();
        param_1 = uVar3;
LAB_107f97128:
        uVar5 = 0;
LAB_107f97044:
        _objc_retain(uVar5);
        _objc_release(uVar4);
        uVar7 = uVar5;
        func_0x00010c0720c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f27658);
        if ((uVar7 & 1) == 0) break;
        uVar3 = 0;
      }
      func_0x00010bfad800();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf45e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      uVar7 = uVar4;
      func_0x00010c081f00();
      if ((uVar7 & 1) == 0) {
        _objc_retain(uVar5);
        uVar3 = uVar5;
      }
      else {
        uVar3 = 0;
      }
    } while( true );
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar4 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c24d380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bf52a60(uVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (uVar4 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(uVar5);
        }
        uVar3 = *(ulong *)(lStack_118 + uVar7 * 8);
        uVar2 = uVar3;
        func_0x00010bfae5a0();
        if (uVar2 == 6) {
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107f97088;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      uVar4 = uVar5;
      func_0x00010bf52a60(uVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar4 != 0);
  }
  _objc_release(uVar5);
  uVar4 = *(ulong *)(param_1 + (long)_DAT_112772700);
  uVar7 = param_1;
  func_0x00010be160e0(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_1127726f4));
  func_0x00010c0dfd40(uVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) goto LAB_107f97128;
  uVar5 = *(ulong *)(uVar4 + 0x10);
  goto LAB_107f97044;
}



/* Entry: 107f97130; end: 107f971df; -[SCSmartSwipeFilterView isCurrentItemMediaFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107f97130(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfae180(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf45e80(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  lVar2 = lVar3;
  func_0x00010bfd8f00(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 107f971e0; end: 107f9725b; -[SCSmartSwipeFilterView currentFilterViewForType:] */

void FUN_107f971e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bfae820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107f9725c; end: 107f972df; -[SCSmartSwipeFilterView currentFilterViewsForType:] */

void FUN_107f9725c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5ea40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f972e0; end: 107f9739b;  */

void FUN_107f972e0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfae820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107f9739c; end: 107f97417; -[SCSmartSwipeFilterView _currentOverlayFilterViews] */

void FUN_107f9739c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf5ea20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100504554();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f97418; end: 107f974db;  */

void FUN_107f97418(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfae820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfae180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b38c0;
  _objc_opt_class(PTR_PTR_1126b38c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(uVar2);
    uVar4 = uVar2;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107f974dc; end: 107f9752b; -[SCSmartSwipeFilterView currentFilterNameForTypeOrUnfiltered:] */

void FUN_107f974dc(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bf5ea60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f27658;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107f9752c; end: 107f97587; -[SCSmartSwipeFilterView currentFilterViewForTypeOrUnfiltered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9752c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf5eb00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_11277266c);
  }
  _objc_retain(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107f97588; end: 107f975b7; -[SCSmartSwipeFilterView currentBackgroundGradientColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f97588(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772704);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f975b8; end: 107f97667; -[SCSmartSwipeFilterView currentSwipeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f975b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_3;
  func_0x00010c07d460();
  *(char *)(param_1 + 1) = (char)lVar4;
  if ((int)lVar4 == 0) {
    lVar4 = -1;
  }
  else {
    lVar4 = param_3;
    func_0x00010c08a320();
  }
  param_1[2] = lVar4;
  lVar4 = param_3;
  func_0x00010c08a320();
  param_1[3] = lVar4;
  lVar4 = (long)_DAT_112772668;
  uVar1 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010bf5e9c0();
  param_1[4] = uVar1;
  uVar2 = *(undefined8 *)(param_3 + lVar4);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf9cce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  param_1[5] = uVar3;
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c264d20(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 107f97668; end: 107f9770f; -[SCSmartSwipeFilterView swipeOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107f97668(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + _DAT_112772668);
  func_0x00010bf5e9c0();
  lVar2 = (long)_DAT_1127726b0;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar2));
  dVar3 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112772708) / lVar1;
  }
  dVar4 = param_1 / dVar3 + (double)((*(long *)(param_2 + _DAT_112772708) - lVar2 * lVar1) + lVar1);
  _fmod(dVar4,(double)lVar1);
  dVar3 = (double)(float)(int)dVar4;
  if (0.01 <= ABS(dVar4 - (double)(float)(int)dVar4)) {
    dVar3 = dVar4;
  }
  return dVar3;
}



/* Entry: 107f97710; end: 107f9786b; -[SCSmartSwipeFilterView updateVenueFilterViewFromFiltersState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f97710(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5,undefined *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_5;
  _objc_retain(param_5);
  ppuVar14 = param_5;
  func_0x00010c082fa0();
  if ((int)ppuVar14 != 0) {
    ppuVar14 = param_5;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar14 != (undefined **)0x0) {
      lVar15 = (long)_DAT_112772674;
      uVar1 = *(undefined8 *)(param_3 + lVar15);
      ppuVar13 = &PTR____CFConstantStringClassReference_110f274f8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      ppuVar14 = param_5;
      func_0x00010c297ce0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_7 = 1;
      param_6 = puVar2;
      func_0x00010befa420(*(undefined8 *)(param_3 + _DAT_112772668));
      func_0x00010c12d3e0(*(undefined8 *)(param_3 + lVar15));
      _objc_release(puVar2);
      _objc_release(ppuVar14);
      _objc_release(uVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar13);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar14 = ppuVar13;
  func_0x00010bf529e0();
  if (ppuVar14 == (undefined **)0x1) {
    lVar11 = (long)_DAT_112772668;
    lVar3 = *(long *)((long)param_5 + lVar11);
    func_0x00010c24d460();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar3;
    func_0x00010bf9cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar15;
    func_0x00010bf529e0();
    _objc_release(lVar15);
    _objc_release(lVar3);
    if (lVar8 == 0) {
      ppuVar14 = ppuVar13;
      func_0x00010c0dfd40(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d8928;
      puVar16 = param_6;
      func_0x00010c0dfd40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c0c1be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      lVar15 = *(long *)((long)param_5 + lVar11);
      func_0x00010bf5efe0();
      if ((lVar15 != 0x7fffffffffffffff) &&
         (puVar16 = puVar2, func_0x00010c081ec0(), ((ulong)puVar16 & 1) == 0)) {
        *(long *)((long)param_5 + (long)_DAT_112772708) =
             lVar15 - *(long *)((long)param_5 + (long)_DAT_1127726f4);
      }
      _objc_release(puVar2);
      _objc_release(ppuVar14);
      goto LAB_107f97cd8;
    }
  }
  ppuVar14 = ppuVar13;
  func_0x00010bf529e0();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar14 = ppuVar13;
    func_0x00010bf529e0();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
      do {
        ppuVar4 = ppuVar13;
        func_0x00010c0dfd40(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126d8928;
        puVar16 = param_6;
        func_0x00010c0dfd40(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0c1be0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        param_1 = 0;
        lVar11 = (long)_DAT_112772668;
        lVar3 = *(long *)((long)param_5 + lVar11);
        func_0x00010befffe0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar3;
        func_0x00010bf52a60();
        lVar8 = lRam0000000000000000;
        while (puVar16 = puVar2, lVar15 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar3);
            }
            puVar16 = *(undefined **)(lVar12 * 8);
            puVar5 = puVar16;
            func_0x00010bfae180();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            if ((int)puVar6 != 0) {
              _objc_retain(puVar16);
              _objc_release(puVar2);
              goto LAB_107f97a8c;
            }
            lVar12 = lVar12 + 1;
          } while (lVar15 != lVar12);
          lVar15 = lVar3;
          func_0x00010bf52a60();
        }
LAB_107f97a8c:
        _objc_release(lVar3);
        puVar2 = puVar16;
        func_0x00010c081ec0();
        if ((((ulong)puVar2 & 1) == 0) &&
           (puVar2 = puVar16, func_0x00010c07a1a0(), ((ulong)puVar2 & 1) == 0)) {
          func_0x00010bf20c00(param_5);
          ppuVar7 = param_5;
          func_0x00010bfae8a0(param_5);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar16;
          func_0x00010bfae5a0();
          if (puVar2 != (undefined *)0x0) {
            lVar8 = *(long *)((long)param_5 + lVar11);
            func_0x00010c24d460();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfae5a0(puVar16);
            lVar15 = lVar8;
            func_0x00010c24d300();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar8);
            if (lVar15 != 0) {
              func_0x00010bfae5a0(puVar16);
              puVar2 = puVar16;
              func_0x00010bfae180(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12e500(param_5);
              _objc_release(puVar2);
            }
          }
          func_0x00010c24d1c0(*(undefined8 *)((long)param_5 + lVar11));
          ppuVar9 = param_5;
          func_0x00010c23eea0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28c140();
          _objc_release(ppuVar9);
          func_0x00010befbb60(*(undefined8 *)((long)param_5 + (long)_DAT_1127726b0));
          _objc_release(ppuVar7);
        }
        _objc_release(puVar16);
        _objc_release(ppuVar4);
        ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        ppuVar4 = ppuVar13;
        func_0x00010bf529e0();
      } while (ppuVar14 < ppuVar4);
    }
    func_0x00010bee08c0(param_5);
    *(long *)((long)param_5 + (long)_DAT_112772708) =
         -*(long *)((long)param_5 + (long)_DAT_1127726f4);
  }
LAB_107f97cd8:
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_retain();
  func_0x00010be8a760(param_5);
  func_0x00010c284c40(param_5);
  func_0x00010bed7160(param_5);
  lVar3 = *(long *)((long)param_5 + (long)_DAT_112772668);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010bf9cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010bf529e0();
  _objc_release(lVar15);
  _objc_release(lVar3);
  if (lVar8 != 0) {
    ppuVar14 = param_5;
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265380();
    _objc_release(ppuVar14);
  }
  func_0x00010bf5eac0(param_5);
  uVar1 = *(undefined8 *)((long)param_5 + (long)_DAT_1127726c0);
  puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar16);
  uVar1 = *(undefined8 *)((long)param_5 + (long)_DAT_1127726c4);
  puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar16);
  puVar16 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c297260(puVar16);
  _objc_release(puVar16);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar13[4],PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 107f9786c; end: 107f97f03; -[SCSmartSwipeFilterView selectFilterNames:forTypes:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9786c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar12 = param_5;
  func_0x00010bf529e0();
  if (uVar12 == 1) {
    lVar9 = (long)_DAT_112772668;
    lVar1 = *(long *)(param_3 + lVar9);
    func_0x00010c24d460();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf9cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf529e0();
    _objc_release(lVar7);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar12 = param_5;
      func_0x00010c0dfd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d8928;
      uVar11 = param_6;
      func_0x00010c0dfd40(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c0c1be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      lVar7 = *(long *)(param_3 + lVar9);
      func_0x00010bf5efe0();
      if ((lVar7 != 0x7fffffffffffffff) &&
         (puVar13 = puVar6, func_0x00010c081ec0(), ((ulong)puVar13 & 1) == 0)) {
        *(long *)(param_3 + _DAT_112772708) = lVar7 - *(long *)(param_3 + _DAT_1127726f4);
      }
      _objc_release(puVar6);
      _objc_release(uVar12);
      goto LAB_107f97cd8;
    }
  }
  uVar12 = param_5;
  func_0x00010bf529e0();
  if (uVar12 != 0) {
    uVar12 = param_5;
    func_0x00010bf529e0();
    if (uVar12 != 0) {
      uVar12 = 0;
      do {
        uVar3 = param_5;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126d8928;
        uVar11 = param_6;
        func_0x00010c0dfd40(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0c1be0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        param_1 = 0;
        lVar9 = (long)_DAT_112772668;
        lVar1 = *(long *)(param_3 + lVar9);
        func_0x00010befffe0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar1;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar13 = puVar6, lVar7 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar1);
            }
            puVar13 = *(undefined **)(lVar10 * 8);
            puVar4 = puVar13;
            func_0x00010bfae180();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            if ((int)puVar5 != 0) {
              _objc_retain(puVar13);
              _objc_release(puVar6);
              goto LAB_107f97a8c;
            }
            lVar10 = lVar10 + 1;
          } while (lVar7 != lVar10);
          lVar7 = lVar1;
          func_0x00010bf52a60();
        }
LAB_107f97a8c:
        _objc_release(lVar1);
        puVar6 = puVar13;
        func_0x00010c081ec0();
        if ((((ulong)puVar6 & 1) == 0) &&
           (puVar6 = puVar13, func_0x00010c07a1a0(), ((ulong)puVar6 & 1) == 0)) {
          func_0x00010bf20c00(param_3);
          lVar7 = param_3;
          func_0x00010bfae8a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar13;
          func_0x00010bfae5a0();
          if (puVar6 != (undefined *)0x0) {
            lVar1 = *(long *)(param_3 + lVar9);
            func_0x00010c24d460();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfae5a0(puVar13);
            lVar2 = lVar1;
            func_0x00010c24d300();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar1);
            if (lVar2 != 0) {
              func_0x00010bfae5a0(puVar13);
              puVar6 = puVar13;
              func_0x00010bfae180(puVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12e500(param_3);
              _objc_release(puVar6);
            }
          }
          func_0x00010c24d1c0(*(undefined8 *)(param_3 + lVar9));
          lVar2 = param_3;
          func_0x00010c23eea0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28c140();
          _objc_release(lVar2);
          func_0x00010befbb60(*(undefined8 *)(param_3 + _DAT_1127726b0));
          _objc_release(lVar7);
        }
        _objc_release(puVar13);
        _objc_release(uVar3);
        uVar12 = uVar12 + 1;
        uVar3 = param_5;
        func_0x00010bf529e0();
      } while (uVar12 < uVar3);
    }
    func_0x00010bee08c0(param_3);
    *(long *)(param_3 + _DAT_112772708) = -*(long *)(param_3 + _DAT_1127726f4);
  }
LAB_107f97cd8:
  puVar6 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_retain();
  func_0x00010be8a760(param_3);
  func_0x00010c284c40(param_3);
  func_0x00010bed7160(param_3);
  lVar1 = *(long *)(param_3 + _DAT_112772668);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf9cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar7 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265380();
    _objc_release(lVar7);
  }
  func_0x00010bf5eac0(param_3);
  uVar11 = *(undefined8 *)(param_3 + _DAT_1127726c0);
  puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar11);
  _objc_release(puVar13);
  uVar11 = *(undefined8 *)(param_3 + _DAT_1127726c4);
  puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar11);
  _objc_release(puVar13);
  puVar13 = puVar6;
  func_0x00010bfbc3e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c297260(puVar13);
  _objc_release(puVar13);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_release(puVar6);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 107f97f04; end: 107f97f23;  */

void FUN_107f97f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,0);
  return;
}



/* Entry: 107f97f24; end: 107f9801b; -[SCSmartSwipeFilterView setHiddenStateForOverlayFilters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f97f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
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
  func_0x00010bdf6e00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c1a7f60(*(undefined8 *)(lStack_108 + lVar4 * 8),param_2,param_3);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf41b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772700);
  *(long *)(param_1 + _DAT_112772700) = lVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f9801c; end: 107f9806f; -[SCSmartSwipeFilterView updateMediaFiltersAndCommands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9801c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf41b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772700);
  *(long *)(param_1 + _DAT_112772700) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f98070; end: 107f98207; -[SCSmartSwipeFilterView mediaFilterIndexForFilter:] */

long FUN_107f98070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5efe0();
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    func_0x00010bfad800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c24d460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c24d380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x107f98184;
    puStack_40 = &UNK_110a15f18;
    _objc_retain(param_3);
    lVar2 = lVar3;
    uStack_38 = param_3;
    func_0x00010bfece40(lVar3,param_2,&puStack_58);
    _objc_release(uStack_38);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 107f98208; end: 107f98267; -[SCSmartSwipeFilterView areResourcesDownloadedForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98208(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  uVar2 = param_3;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  lVar5 = (long)_DAT_1127726b0;
  func_0x00010bf20c00(*(undefined8 *)(puVar1 + lVar5));
  _CGRectGetWidth();
  dVar6 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(puVar1 + lVar5));
  func_0x00010bed6720(puVar1);
  lVar5 = *(long *)(puVar1 + _DAT_1127726f4);
  puVar3 = puVar1;
  func_0x00010bfae060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2878a0(-(dVar6 / param_1 - (double)lVar5),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f98268; end: 107f982c7; -[SCSmartSwipeFilterView updateMediaFilterMaskForItem:relativeOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98268(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw();
  lVar3 = (long)_DAT_1127726b0;
  func_0x00010bf20c00(*(undefined8 *)(puVar1 + lVar3));
  _CGRectGetWidth();
  dVar4 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(puVar1 + lVar3));
  func_0x00010bed6720(puVar1);
  lVar3 = *(long *)(puVar1 + _DAT_1127726f4);
  puVar2 = puVar1;
  func_0x00010bfae060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2878a0(-(dVar4 / param_1 - (double)lVar3),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107f982c8; end: 107f98367; -[SCSmartSwipeFilterView updateCurrentSectionAndMediaFilterOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f982c8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_1127726b0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  dVar3 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar2));
  func_0x00010bed6720(param_2);
  lVar1 = *(long *)(param_2 + _DAT_1127726f4);
  lVar2 = param_2;
  func_0x00010bfae060(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2878a0(-(dVar3 / param_1 - (double)lVar1),param_2,param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107f98368; end: 107f983e7; -[SCSmartSwipeFilterView setUCOInfoViewsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98368(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127726ec) = param_3;
  func_0x00010bf5eb40(param_1,param_2,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f983e8; end: 107f98457;  */

void FUN_107f983e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126d89c8;
  _objc_opt_class(PTR_PTR_1126d89c8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1ac6a0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f98458; end: 107f98543; -[SCSmartSwipeFilterView _updateCurrentSectionWithContentOffset:pageLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98458(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127726f4;
  uVar3 = *(ulong *)(param_3 + lVar4);
  *(long *)(param_3 + lVar4) = (long)(param_1 / param_2);
  if ((uVar3 == (long)(param_1 / param_2) || uVar3 == 0) || uVar3 == 6) {
    return;
  }
  lVar1 = param_3;
  func_0x00010c07d460();
  if ((int)lVar1 != 0) {
    func_0x00010c1b8b40(param_3,param_4,*(ulong *)(param_3 + lVar4) <= uVar3);
    lVar5 = (long)_DAT_1127726b8;
    lVar2 = *(long *)(param_3 + lVar5);
    func_0x00010c264740();
    lVar1 = param_3;
    func_0x00010c08a320();
    if (lVar2 != lVar1) {
      func_0x00010c220040(*(undefined8 *)(param_3 + lVar5),param_4,0);
    }
  }
  lVar1 = param_3;
  func_0x00010bfae060(param_3,param_4,*(undefined8 *)(param_3 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23eea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f98544; end: 107f98547; -[SCSmartSwipeFilterView filterViewDidReplaceVisibleFilters] */

void FUN_107f98544(void)

{
  return;
}



/* Entry: 107f98548; end: 107f98693; -[SCSmartSwipeFilterView scrollToInitSectionAndReloadToIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98548(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_3;
  func_0x00010bf5e9e0();
  lVar4 = (long)_DAT_1127726f4;
  if (lVar1 != param_5) {
    func_0x00010bed7160(param_3,param_4,*(undefined8 *)(param_3 + lVar4),0);
  }
  *(undefined8 *)(param_3 + lVar4) = 3;
  *(long *)(param_3 + _DAT_112772708) = param_5 + -3;
  func_0x00010be9c020(param_3);
  func_0x00010be8a740(param_3);
  func_0x00010c284c40(param_3);
  func_0x00010bed7160(param_3,param_4,*(undefined8 *)(param_3 + lVar4),1);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1127726c8);
  lVar1 = param_3;
  func_0x00010bfae060(param_3,param_4,*(undefined8 *)(param_3 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_4,lVar1);
  _objc_release(lVar1);
  func_0x00010bf5eac0(param_3);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1127726c0);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_4,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1127726c4);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107f98694; end: 107f986f7; -[SCSmartSwipeFilterView willBeginExternalSourcedScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98694(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127726fc) = 1;
  lVar1 = param_1;
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277270c);
  *(long *)(param_1 + _DAT_11277270c) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c152cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scrollViewWillBeginDragging__112632548,
             *(undefined8 *)(param_1 + _DAT_1127726b0));
  return;
}



/* Entry: 107f986f8; end: 107f987ef; -[SCSmartSwipeFilterView didFinishExternalSourcedScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f986f8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + _DAT_1127726fc) = 0;
  lVar6 = (long)_DAT_11277270c;
  if (*(long *)(param_1 + lVar6) != 0) {
    lVar1 = param_1;
    func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + lVar6);
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfae180(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x00010bed7140(param_1);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar5);
    _objc_release(lVar1);
  }
  lVar6 = (long)_DAT_1127726b0;
  func_0x00010c152aa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c152a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scrollViewDidEndDecelerating__1126324c0,*(undefined8 *)(param_1 + lVar6))
  ;
  return;
}



/* Entry: 107f987f0; end: 107f988d7; -[SCSmartSwipeFilterView scrollToFilterItemOffset:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f987f0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_3 + _DAT_112772668);
  func_0x00010bf5e9c0(lVar1);
  param_1 = param_1 + (double)lVar1 * param_2;
  dVar4 = param_1 - (double)(*(long *)(param_3 + _DAT_112772708) +
                            *(long *)(param_3 + _DAT_1127726f4));
  lVar1 = (long)_DAT_1127726b0;
  uVar3 = *(undefined8 *)(param_3 + lVar1);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c980(uVar3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar1));
  _CGRectGetWidth();
  dVar4 = dVar4 * param_1;
  func_0x00010bfb68e0(uVar3);
  _CGRectGetMinX();
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar1));
  func_0x00010c1822e0(dVar4 + param_1,*(undefined8 *)(param_3 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f988d8; end: 107f98973; -[SCSmartSwipeFilterView currentFilterOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107f988d8(double param_1,long param_2)

{
  long lVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = (long)_DAT_1127726b0;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  dVar3 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar1));
  lVar1 = *(long *)(param_2 + _DAT_112772668);
  func_0x00010bf5e9c0(lVar1);
  dVar3 = dVar3 / param_1 + (double)*(long *)(param_2 + _DAT_112772708);
  fVar2 = (float)dVar3;
  _fmodf(fVar2,(float)lVar1);
  auVar4._0_8_ = (double)fVar2;
  auVar4._8_8_ = (long)(dVar3 / (double)lVar1);
  return auVar4;
}



/* Entry: 107f98974; end: 107f98be7; -[SCSmartSwipeFilterView stackCurrentCollectionViewFilterIfAny] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_107f98974(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = param_1;
  func_0x00010c2485a0();
  if (((uint)uVar2 >> 8 & 1) != 0) {
    return 0;
  }
  uVar2 = param_1;
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfae820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bfae180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c07f700();
  iVar1 = 0;
  if (uVar4 != 0) {
    iVar1 = (int)uVar3;
  }
  if (iVar1 != 1) goto LAB_107f98bb4;
  uVar3 = param_1;
  func_0x00010c0c4f80(param_1,param_2,uVar2);
  if (uVar3 == 0x7fffffffffffffff) {
LAB_107f98abc:
    lVar6 = 0;
  }
  else {
    uVar7 = param_1;
    func_0x00010bf41b60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    if (uVar5 <= uVar3) goto LAB_107f98abc;
    uVar3 = param_1;
    func_0x00010bf41b60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    _objc_retain(lVar6);
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  func_0x00010c24d1c0(*(undefined8 *)(param_1 + (long)_DAT_112772668),param_2,uVar2);
  func_0x00010c2878c0(param_1);
  uVar3 = uVar2;
  func_0x00010bfae5a0();
  if ((uVar3 != 6) && (uVar3 = uVar2, func_0x00010bfae5a0(), uVar3 != 7)) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + (long)_DAT_1127726b0),param_2,uVar4);
    func_0x00010bee08c0(param_1);
  }
  uVar3 = param_1;
  func_0x00010bfad800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bfd8d60();
  _objc_release(uVar3);
  if (((uVar7 & 1) == 0) && (lVar6 != 0)) {
    uVar3 = param_1;
    func_0x00010bfad800();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf5f000();
    _objc_release(uVar3);
    if (uVar7 == 0x7fffffffffffffff) goto LAB_107f98b78;
  }
  else {
LAB_107f98b78:
    uVar7 = 0;
  }
  func_0x00010c152520(param_1,param_2,uVar7);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265380();
  _objc_release(param_1);
  _objc_release(lVar6);
LAB_107f98bb4:
  _objc_release(uVar4);
  _objc_release(uVar2);
  return iVar1;
}



/* Entry: 107f98be8; end: 107f98df7; -[SCSmartSwipeFilterView clearStackedFiltersIsMultiSnapCleanUp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98be8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar8 = (long)_DAT_112772668;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24d3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        uVar7 = *(undefined8 *)(param_1 + _DAT_112772674);
        func_0x00010bfae180(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar7,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar7);
        _objc_release(uVar6);
        lVar3 = param_1;
        func_0x00010c23eea0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28c140();
        _objc_release(lVar3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c1241a0(*(undefined8 *)(param_1 + lVar8));
  puVar4 = PTR_PTR_1126d8928;
  func_0x00010c27fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2878a0(0,param_1,param_2,puVar4);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010c152520(param_1,param_2,0);
  if ((param_3 & 1) == 0) {
    lVar2 = param_1 + _DAT_112772710;
    _objc_loadWeakRetained();
    func_0x00010c265360();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(lVar2 + _DAT_112772668);
  func_0x00010c24d460(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf9cce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebf360(lVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107f98df8; end: 107f98e73; -[SCSmartSwipeFilterView stackedFiltersInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98df8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772668);
  func_0x00010c24d460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9cce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebf360(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f98e74; end: 107f990af; -[SCSmartSwipeFilterView _stackedFiltersInfoFromItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f98e74(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  ppuVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar3 != (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar9 = *(undefined8 *)((long)ppuVar8 * 8);
      func_0x00010bfae5a0(uVar9);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bebf340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(puVar4);
      func_0x00010befa120(ppuVar2);
      _objc_release(puVar6);
      ppuVar8 = (undefined **)((long)ppuVar8 + 1);
    } while (ppuVar3 != ppuVar8);
    ppuVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuVar8 = ppuVar2;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  ppuVar3 = ppuVar8;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = ppuVar8;
    func_0x00010c24d220();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((long)ppuVar2 < 6) {
      if ((long)ppuVar2 < 3) {
        if (ppuVar2 == (undefined **)0x0) {
          func_0x000108edeb70();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
        }
        else if (ppuVar2 == (undefined **)0x1) {
          func_0x000108edec78();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
        }
        else if (ppuVar2 == (undefined **)0x2) {
          func_0x000108edec18();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
        }
      }
      else if (ppuVar2 == (undefined **)0x3) {
        func_0x000108edec60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
      }
      else if (ppuVar2 == (undefined **)0x4) {
        func_0x000108edebb8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
      }
      else if (ppuVar2 == (undefined **)0x5) {
        func_0x000108edeba0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
      }
    }
    else if ((long)ppuVar2 - 7U < 4) {
LAB_107f99170:
      func_0x00010bf20c00(param_3);
      func_0x00010bfae8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b38c0;
      _objc_opt_class(PTR_PTR_1126b38c0);
      ppuVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      ppuVar3 = param_3;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar3 = (undefined **)0x0;
      }
      _objc_retain(ppuVar3);
      _objc_release(param_3);
      ppuVar2 = ppuVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
      }
      _objc_retain(ppuVar3);
      _objc_release(ppuVar2);
    }
    else if (ppuVar2 == (undefined **)0x6) {
      func_0x000108edec00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 == (undefined **)0xc) goto LAB_107f99170;
    }
  }
  else {
    ppuVar3 = ppuVar8;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107f990b0; end: 107f992b3; -[SCSmartSwipeFilterView _stackedFilterDisplayNameForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f990b0(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = param_3;
    func_0x00010c24d220();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((long)ppuVar2 < 6) {
      if ((long)ppuVar2 < 3) {
        if (ppuVar2 == (undefined **)0x0) {
          func_0x000108edeb70();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
        }
        else if (ppuVar2 == (undefined **)0x1) {
          func_0x000108edec78();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
        }
        else if (ppuVar2 == (undefined **)0x2) {
          func_0x000108edec18();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
        }
      }
      else if (ppuVar2 == (undefined **)0x3) {
        func_0x000108edec60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar2;
      }
      else if (ppuVar2 == (undefined **)0x4) {
        func_0x000108edebb8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar2;
      }
      else if (ppuVar2 == (undefined **)0x5) {
        func_0x000108edeba0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar2;
      }
    }
    else {
      if (3 < (long)ppuVar2 - 7U) {
        if (ppuVar2 == (undefined **)0x6) {
          func_0x000108edec00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = ppuVar2;
          goto LAB_107f99104;
        }
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar2 != (undefined **)0xc) goto LAB_107f99104;
      }
      func_0x00010bf20c00(param_1);
      func_0x00010bfae8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b38c0;
      _objc_opt_class(PTR_PTR_1126b38c0);
      ppuVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar3);
      ppuVar1 = param_1;
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(param_1);
      ppuVar2 = ppuVar1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar2);
    }
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107f99104:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107f992b4; end: 107f9958f; -[SCSmartSwipeFilterView removeStackedFilterForType:filterName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107f992b4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = (long)_DAT_112772668;
  uVar2 = *(ulong *)(param_1 + lVar9);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar7;
  func_0x00010bf52a60(uVar7,param_2,&uStack_130,auStack_f0,0x10);
  if (uVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      uVar10 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(uVar7);
        }
        uVar8 = *(ulong *)(lStack_128 + uVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bfae5a0();
        if (uVar3 == 0) {
          bVar1 = true;
        }
        else {
          uVar3 = uVar8;
          func_0x00010bfae5a0();
          bVar1 = uVar3 == 7;
        }
        uVar3 = uVar8;
        func_0x00010bfae5a0();
        if (uVar3 == param_3) {
          if ((bool)(param_4 != 0 & bVar1)) {
            uVar3 = uVar8;
            func_0x00010bfae180();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((uVar4 & 1) == 0) goto LAB_107f993f8;
          }
          _objc_retain(uVar8);
          _objc_release(uVar7);
          if (uVar8 == 0) goto LAB_107f9954c;
          lVar11 = param_1;
          func_0x00010bfae820(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010bfae180(uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar11;
          func_0x00010c0e00e0(lVar11,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          _objc_release(lVar11);
          func_0x00010c12c960(lVar6);
          lVar11 = param_1;
          func_0x00010c23eea0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28c140();
          _objc_release(lVar11);
          if (param_3 == 6) {
            puVar5 = PTR_PTR_1126d8928;
            func_0x00010c27fae0(PTR_PTR_1126d8928);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2878a0(0,param_1,param_2,puVar5);
            _objc_release(puVar5);
          }
          func_0x00010c282980(*(undefined8 *)(param_1 + lVar9),param_2,uVar8);
          func_0x00010c2878c0(param_1);
          func_0x00010c152520(param_1,param_2,0);
          param_1 = param_1 + _DAT_112772710;
          _objc_loadWeakRetained();
          func_0x00010c265360();
          _objc_release(param_1);
          _objc_release(lVar6);
          uVar7 = uVar8;
          goto LAB_107f99544;
        }
LAB_107f993f8:
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = uVar7;
      func_0x00010bf52a60(uVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar2 != 0);
  }
LAB_107f99544:
  _objc_release(uVar7);
LAB_107f9954c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar6 = *(long *)(param_4 + (long)_DAT_112772668);
    func_0x00010c24d460();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010bf9cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf529e0();
    if (lVar11 == 1) {
      func_0x00010bfad800(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_4;
      func_0x00010c24d320();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = (ulong)(uVar7 == 0);
      _objc_release();
      _objc_release(param_4);
    }
    else {
      uVar7 = 0;
    }
    _objc_release(lVar9);
    _objc_release(lVar6);
    return uVar7;
  }
  return param_4;
}



/* Entry: 107f99590; end: 107f9963b; -[SCSmartSwipeFilterView shouldUnstackWhenExitingDoubleSwipe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107f99590(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_112772668);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf9cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 1) {
    func_0x00010bfad800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c24d320();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 == 0;
    _objc_release();
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107f9963c; end: 107f997ef; -[SCSmartSwipeFilterView _updateStackedOverlayViewsFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f9963c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  puVar4 = &uStack_140;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar8 = (long)_DAT_112772668;
  uVar1 = *(ulong *)(param_5 + lVar8);
  func_0x00010c24d460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24d3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf52a60(uVar2,param_6,&uStack_140,auStack_100,0x10);
  if (uVar1 != 0) {
    lVar9 = *plStack_130;
    do {
      uVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(uVar2);
        }
        uVar5 = *(undefined8 *)(lStack_138 + uVar10 * 8);
        uVar6 = *(undefined8 *)(param_5 + _DAT_112772674);
        uVar7 = *(undefined8 *)(param_5 + _DAT_11277266c);
        func_0x00010bf20c00(param_5);
        lVar3 = param_5;
        func_0x00010bfae8a0(param_5,param_6,uVar5,uVar6,uVar7,*(undefined8 *)(param_5 + lVar8),
                            *(undefined8 *)(param_5 + _DAT_112772650));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4cdc0(*(undefined8 *)(param_5 + _DAT_1127726b0));
        func_0x00010bf20c00(param_5);
        func_0x00010b69090c();
        func_0x00010c19f0e0(lVar3);
        _objc_release(lVar3);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
      uVar1 = uVar2;
      puVar4 = &uStack_140;
      func_0x00010bf52a60(uVar2,param_6,&uStack_140,auStack_100,0x10);
    } while (uVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar1 = uVar2;
  func_0x00010c2485a0();
  uVar5 = *(undefined8 *)(uVar2 + (long)_DAT_1127726b0);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf4cdc0(uVar5);
    func_0x00010bf20c00(uVar2);
    func_0x00010b69090c(uVar11,param_2);
    func_0x00010c19f0e0(puVar4);
  }
  else {
    func_0x00010bf20c00(uVar2);
    uVar6 = uVar11;
    _CGRectGetMidX();
    _CGRectGetMidY(uVar11,param_2,param_3,param_4);
    func_0x00010bf51200(uVar6,uVar11,uVar5,param_6,uVar2);
    func_0x00010c17a6a0(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107f997f0; end: 107f998d3; -[SCSmartSwipeFilterView updateViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f997f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c2485a0();
  uVar2 = *(undefined8 *)(param_5 + (long)_DAT_1127726b0);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf4cdc0(uVar2);
    func_0x00010bf20c00(param_5);
    func_0x00010b69090c(param_1,param_2);
    func_0x00010c19f0e0(param_7);
  }
  else {
    func_0x00010bf20c00(param_5);
    uVar3 = param_1;
    _CGRectGetMidX();
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    func_0x00010bf51200(uVar3,param_1,uVar2,param_6,param_5);
    func_0x00010c17a6a0(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107f998d4; end: 107f999b7; -[SCSmartSwipeFilterView filterArranger:didUpdateFilterName:config:] */

void FUN_107f998d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfae820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c284700(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  if (lVar3 != 0) {
    func_0x00010c2878c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c284c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateCurrentSectionAndMediaFilt_11267ed38)
    ;
    return;
  }
  return;
}



/* Entry: 107f999b8; end: 107f99ac3; -[SCSmartSwipeFilterView filterArranger:didInsertFilterAtIndex:filterItem:swipeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f999b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  double *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bfae5a0();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127726b8);
    lVar2 = param_5;
    func_0x00010bfc1680(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf5e9e0(param_1);
    func_0x00010c0a67e0(uVar1,param_2,lVar2,param_4,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = (long)_DAT_1127726a8;
  if (((*(byte *)(param_1 + lVar2) & 1) == 0) &&
     (lVar3 = param_5, func_0x00010bfae5a0(), lVar3 == 0)) {
    lVar3 = (long)_DAT_1127726a4;
    func_0x00010c292100(*(undefined8 *)(param_1 + lVar3),param_2,0xd);
    func_0x00010c0acc60(*(undefined8 *)(param_1 + lVar3),param_2,0xd);
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  lVar2 = (long)*param_6 - *(long *)(param_1 + _DAT_1127726f4);
  if (param_4 <= (long)*param_6) {
    lVar2 = lVar2 + 1;
  }
  *(long *)(param_1 + _DAT_112772708) = lVar2;
  func_0x00010c2878c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107f99ac4; end: 107f99ba3; -[SCSmartSwipeFilterView filterArranger:didRemoveFilter:atIndex:swipeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f99ac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,double *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(ulong *)(param_1 + _DAT_112772708) =
       ((long)*param_6 - *(long *)(param_1 + _DAT_1127726f4)) - (ulong)(param_5 < (long)*param_6);
  _objc_retain(param_4);
  func_0x00010bed7140(param_1);
  lVar1 = param_1;
  func_0x00010bfae820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfae180(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010be8a740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c2878d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateMediaFiltersAndCommands_11267f858);
  return;
}



/* Entry: 107f99ba4; end: 107f99c8f; -[SCSmartSwipeFilterView filterArranger:didReplaceFilterAtIndex:oldFilter:newFilter:swipeState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f99ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bed7140(param_1,param_2,param_5,0);
  func_0x00010c12f180(param_1,param_2,param_5,*(undefined8 *)(param_1 + _DAT_112772674));
  _objc_release(param_5);
  func_0x00010c2878c0(param_1);
  lVar1 = param_1;
  func_0x00010be41560(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f99c90;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    uStack_38 = param_4;
    _objc_retain(param_6);
    uStack_40 = param_6;
    func_0x00010be8a760(param_1,param_2,&puStack_68);
    _objc_release(uStack_40);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 107f99c90; end: 107f99ce3;  */

void FUN_107f99c90(long param_1)

{
  long lVar1;
  
  func_0x00010c284c40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfae860(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5e9e0();
  if (lVar1 == *(long *)(param_1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00010bed7150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDisplayStatusForItem_disp_1125935f8,
               *(undefined8 *)(param_1 + 0x28),1);
    return;
  }
  return;
}



/* Entry: 107f99ce4; end: 107f99d2b; -[SCSmartSwipeFilterView filterArrangerWillReloadSwipeOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f99ce4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfae060(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127726f4));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772714);
  *(long *)(param_1 + _DAT_112772714) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


