/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f1ecec; end: 105f1ecf7; -[SCMapGestureManager setRightSliderEnabled:] */

void FUN_105f1ecec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSlider_enabled__112587820,*(undefined8 *)(param_1 + 0x38),param_3);
  return;
}



/* Entry: 105f1ecf8; end: 105f1ed87; -[SCMapGestureManager _setSlider:enabled:] */

void FUN_105f1ecf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfc1a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  if (param_4 != (uint)uVar2) {
    if ((param_4 & 1) == 0) {
      func_0x00010bfe2800(param_3);
    }
    uVar1 = param_3;
    func_0x00010bfc1a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1ed88; end: 105f1ee93; -[SCMapGestureManager cancelAllTouchesWithReason:] */

void FUN_105f1ed88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bf72e00(*(undefined8 *)(lStack_108 + lVar5 * 8),param_2,param_3);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x80);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f1ee94; end: 105f1eebb; -[SCMapGestureManager statsProvider] */

void FUN_105f1ee94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f1eebc; end: 105f1eee3; -[SCMapGestureManager interactionObservable] */

void FUN_105f1eebc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f1eee4; end: 105f1ef47; -[SCMapGestureManager registerZoomLockTargetProvider:] */

void FUN_105f1eee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x88);
  }
  func_0x00010befa120(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1ef48; end: 105f1ef57; -[SCMapGestureManager unregisterZoomLockTargetProvider:] */

void FUN_105f1ef48(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x88),PTR_s_removeObjectIfPresentAndCompact__112628f38);
    return;
  }
  return;
}



/* Entry: 105f1ef58; end: 105f1efb7; -[SCMapGestureManager _disableDefaultGestures] */

void FUN_105f1ef58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26efe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c141c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f1efb8; end: 105f1f85f; -[SCMapGestureManager _setupGestureRecognizersWithBasemapPersonalizationConfig:] */

void FUN_105f1efb8(double param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5f78;
  _objc_alloc();
  func_0x00010c050900();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar2;
  _objc_release(uVar7);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010bef9040(*(undefined8 *)(param_2 + 0x20));
  func_0x00010befa120(puVar1);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0f36c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  func_0x00010befbd40(*(undefined8 *)(param_2 + 0x28));
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf884c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0fc240(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c27dd00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  func_0x00010befbd40(*(undefined8 *)(param_2 + 0x28));
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0f36c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf884c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0fc240(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c141c00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c26efe0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c27dd00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  func_0x00010bea5780(param_2);
  func_0x00010bea6820(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = *(long *)(param_2 + 8);
  func_0x00010c0fc240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0fc240(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar7);
  }
  lVar3 = *(long *)(param_2 + 8);
  func_0x00010bf884c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf884c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar7);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    func_0x00010befa120(puVar2);
  }
  lVar3 = *(long *)(param_2 + 8);
  func_0x00010c27dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c27dd00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar7);
  }
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c141c00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar7);
  func_0x00010c1ee740(*(undefined8 *)(param_2 + 0x18));
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c26efe0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar7);
  func_0x00010c1dbe80(*(undefined8 *)(param_2 + 0x18));
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c26efe0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c141c00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  puVar6 = param_2;
  _objc_initWeak(auStack_78);
  func_0x00010c0cdec0(param_4);
  if (0.0 < param_1) {
    puVar4 = PTR_PTR_1126c5f80;
    _objc_alloc();
    func_0x00010c0623e0(param_1,0x3fe0000000000000);
    uVar7 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined **)(param_2 + 0xc0) = puVar4;
    _objc_release(uVar7);
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    func_0x00010c2bf340();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105f1f860;
    puStack_88 = &UNK_1108f9240;
    puVar6 = auStack_78;
    _objc_copyWeak(auStack_80);
    uVar7 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_2 + 200) = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c141c00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar7);
    func_0x00010c1ee740(*(undefined8 *)(param_2 + 0x18));
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c26efe0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar7);
    func_0x00010c1dbe80(*(undefined8 *)(param_2 + 0x18));
    _objc_destroyWeak(auStack_80);
  }
  puVar4 = PTR_PTR_1126c5f88;
  func_0x00010c0b78e0();
  _objc_retain();
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar4;
  _objc_release(uVar7);
  _objc_retain(puVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 **)(param_2 + 0x38) = puVar6;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bfc1a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bfc1a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar7);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bfc1a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar5);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfc1a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfc1a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar7);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfc1a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(uVar5);
  _objc_release(uVar7);
  func_0x00010bef6ae0(*(undefined8 *)(param_2 + 8));
  if (param_2[0xa8] == '\x01') {
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf884c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c27dd00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar7);
    func_0x00010befbd40(*(undefined8 *)(param_2 + 0x28));
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bfc1a80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010bfc1a80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar7);
    _objc_initWeak(auStack_a8,param_2);
    uVar7 = *(undefined8 *)(param_2 + 8);
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010bef7000(uVar7);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0fc240(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105f1f860; end: 105f1f94b;  */

void FUN_105f1f860(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f1f94c;
  puStack_60 = &UNK_11086b150;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bec80(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105f1f94c; end: 105f1f9a3;  */

void FUN_105f1f94c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6cae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f1f9a4; end: 105f1f9eb;  */

undefined8 FUN_105f1f9a4(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdd19c0(param_1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f1f9ec; end: 105f1faeb; -[SCMapGestureManager _onDoubleTapZoomRecognized:] */

void FUN_105f1f9ec(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    func_0x00010c0dd1c0(*(undefined8 *)(param_3 + 8));
    func_0x00010c2783e0(*(undefined8 *)(param_3 + 0x80));
  }
  else if (lVar1 == 2) {
    dVar4 = *(double *)(param_3 + 0x48);
    func_0x00010c2bf0c0(param_5);
    func_0x00010c17a700(*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),
                        dVar4 + (param_1 + -1.0) * 10.0,*(undefined8 *)(param_3 + 0x10),param_4,0);
    func_0x00010c0dd200(*(undefined8 *)(param_3 + 8));
  }
  else if (lVar1 == 1) {
    func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x10));
    *(double *)(param_3 + 0x48) = param_1;
    func_0x00010bf34640(*(undefined8 *)(param_3 + 0x10));
    *(double *)(param_3 + 0x50) = param_1;
    *(undefined8 *)(param_3 + 0x58) = param_2;
    func_0x00010c0dd1a0(*(undefined8 *)(param_3 + 8));
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    puVar2 = PTR_PTR_1126c5f90;
    func_0x00010c251f60(PTR_PTR_1126c5f90,param_4,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_4,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f1faec; end: 105f1fb87; -[SCMapGestureManager _onPan:] */

void FUN_105f1faec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c252440();
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c278430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x80),PTR_s_trackPanGesture_11267bb30);
    return;
  }
  if (param_3 != 2) {
    if (param_3 != 1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126c5f90;
    func_0x00010c251e00(PTR_PTR_1126c5f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendDidPanMapToResponders_112585570);
  return;
}



/* Entry: 105f1fb88; end: 105f1fd77; -[SCMapGestureManager _onZoom:] */

void FUN_105f1fb88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 3) {
    func_0x00010be9ef80(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR_PTR_1126c5f90;
    func_0x00010bf95d80(PTR_PTR_1126c5f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf884c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar1) {
      func_0x00010c277cc0(*(undefined8 *)(param_1 + 0x80));
    }
    else {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010c0fc240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (param_3 == lVar1) {
        func_0x00010c278480(*(undefined8 *)(param_1 + 0x80));
      }
      else {
        lVar1 = *(long *)(param_1 + 8);
        func_0x00010c27dd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (param_3 == lVar1) {
          func_0x00010c278a20(*(undefined8 *)(param_1 + 0x80));
        }
        else {
          lVar1 = *(long *)(param_1 + 0x30);
          func_0x00010bfc1a80();
          _objc_retainAutoreleasedReturnValue();
          if (param_3 == lVar1) {
            _objc_release(lVar1);
          }
          else {
            lVar3 = *(long *)(param_1 + 0x38);
            func_0x00010bfc1a80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar1);
            if (param_3 != lVar3) goto LAB_105f1fd38;
          }
          func_0x00010c278b60(*(undefined8 *)(param_1 + 0x80));
        }
      }
    }
    goto LAB_105f1fd38;
  }
  if (lVar1 != 2) {
    if (lVar1 != 1) goto LAB_105f1fd38;
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0fc240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar1) {
      uVar4 = 1;
    }
    else {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010bf884c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (param_3 != lVar1) goto LAB_105f1fd30;
      uVar4 = 2;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = PTR_PTR_1126c5f90;
    func_0x00010c251f60(PTR_PTR_1126c5f90,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_2,puVar2);
    _objc_release(puVar2);
  }
LAB_105f1fd30:
  func_0x00010be9ef80(param_1);
LAB_105f1fd38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1fd78; end: 105f1ff0b; -[SCMapGestureManager _onTilt:] */

void FUN_105f1fd78(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  _objc_retain(param_4);
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c071800();
  _objc_release(uVar4);
  if ((int)uVar1 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    func_0x00010c0fc7c0(*(undefined8 *)(param_2 + 0x10));
    uVar1 = param_1;
    func_0x00010c2bf200(*(undefined8 *)(param_2 + 0x10));
    func_0x00010c188680(param_1,uVar1,uVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010bfc3540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0fc7c0(*(undefined8 *)(param_2 + 0x10));
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1c80(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  lVar3 = param_4;
  func_0x00010c252440();
  _objc_release(param_4);
  if (lVar3 - 3U < 2) {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    puVar2 = PTR_PTR_1126c5f90;
    func_0x00010bf95d40(PTR_PTR_1126c5f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c2789f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x80),PTR_s_trackTilt_11267bca0);
    return;
  }
  if (lVar3 == 1) {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    puVar2 = PTR_PTR_1126c5f90;
    func_0x00010c251e60(PTR_PTR_1126c5f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105f1ff0c; end: 105f1ff87; -[SCMapGestureManager _onGradualZoom:] */

void FUN_105f1ff0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2bf200(uVar3);
  func_0x00010bdd19c0(param_1);
  func_0x00010c1dbe20(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bed0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unblockAutomaticTiltIfNecessary_112591d70);
  return;
}



/* Entry: 105f1ff88; end: 105f1ffd7; -[SCMapGestureManager _onAtomicZoom:] */

void FUN_105f1ff88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c2bf200(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c188fc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unblockAutomaticTiltIfNecessary_112591d70)
    ;
    return;
  }
  return;
}



/* Entry: 105f1ffd8; end: 105f20097; -[SCMapGestureManager _onRotate:] */

void FUN_105f1ffd8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c252440();
  if (param_3 - 3U < 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126c5f90;
    func_0x00010bf95d20(PTR_PTR_1126c5f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2786d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x80),PTR_s_trackRotate_11267bbd8);
    return;
  }
  if (param_3 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR_PTR_1126c5f90;
    func_0x00010c251e40(PTR_PTR_1126c5f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105f20098; end: 105f2015b; -[SCMapGestureManager _cancelTouches:] */

void FUN_105f20098(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105f20120;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f2015c; end: 105f201eb; -[SCMapGestureManager gestureRecognizerShouldBegin:] */

undefined8 FUN_105f2015c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == *(long *)(param_1 + 0x28)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f36c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105f201a4();
    _objc_release(uVar1);
  }
  return 1;
}



/* Entry: 105f201ec; end: 105f20233; -[SCMapGestureManager gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_105f201ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfd1800();
  _objc_release(lVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,PTR____kCFBooleanTrue_11034ab68);
  return 1;
}



/* Entry: 105f20234; end: 105f2023b; -[SCMapGestureManager gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_105f20234(void)

{
  return 1;
}



/* Entry: 105f2023c; end: 105f20357; -[SCMapGestureManager _gestureViewHasActiveGesture] */

bool FUN_105f2023c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  bVar6 = false;
  if (uVar2 != 0) {
    lVar9 = *plStack_100;
    do {
      uVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(uVar1);
        }
        lVar7 = *(long *)(lStack_108 + uVar10 * 8);
        lVar3 = lVar7;
        func_0x00010c252440();
        if ((lVar3 == 1) || (func_0x00010c252440(), lVar7 == 2)) {
          bVar6 = true;
          goto LAB_105f20318;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = uVar1;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    bVar6 = false;
  }
LAB_105f20318:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar6;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lVar8 = *(long *)(uVar1 + 0x70);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        lVar12 = *(long *)(lVar13 * 8);
        uVar2 = uVar1;
        func_0x00010c07c7a0();
        if ((uVar2 & 1) == 0) {
          if (lVar11 == 0) {
            puVar4 = (undefined1 *)puVar5;
            (**(code **)((long)puVar5 + 0x10))(puVar5,lVar12);
            if (((ulong)puVar4 & 1) == 0) {
              lVar11 = 0;
            }
            else {
              _objc_retain(lVar12);
              lVar11 = lVar12;
              if (((uint)puVar4 >> 8 & 1) != 0) {
                func_0x000105f201a4(*(undefined8 *)(uVar1 + 0x28));
              }
            }
          }
          else {
            func_0x00010c113ac0(lVar12);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    return false;
  }
  return lVar11 != 0;
}



/* Entry: 105f20358; end: 105f204e7; -[SCMapGestureManager _sendToTouchRepondersIfEnabledWithBlock:] */

bool FUN_105f20358(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x70);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        lVar7 = *(long *)(lVar8 * 8);
        uVar3 = param_1;
        func_0x00010c07c7a0();
        if ((uVar3 & 1) == 0) {
          if (lVar6 == 0) {
            uVar3 = param_3;
            (**(code **)(param_3 + 0x10))(param_3,lVar7);
            if ((uVar3 & 1) == 0) {
              lVar6 = 0;
            }
            else {
              _objc_retain(lVar7);
              lVar6 = lVar7;
              if (((uint)uVar3 >> 8 & 1) != 0) {
                func_0x000105f201a4(*(undefined8 *)(param_1 + 0x28));
              }
            }
          }
          else {
            func_0x00010c113ac0(lVar7);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    return false;
  }
  return lVar6 != 0;
}



/* Entry: 105f204e8; end: 105f204ef; -[SCMapGestureManager isResponderDisabled:] */

undefined8 FUN_105f204e8(void)

{
  return 0;
}



/* Entry: 105f204f0; end: 105f20587; -[SCMapGestureManager _sendTouchDownOnMapAtPointToResponders:featureDescriptors:] */

void FUN_105f204f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f20588;
  puStack_50 = &UNK_1108f92a0;
  uStack_48 = param_5;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_5);
  func_0x00010bea0ec0(param_3,param_4,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 105f20588; end: 105f20597;  */

void FUN_105f20588(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,
             PTR_s_didTouchDownOnMapAtPoint_feature_1125bd048,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f20598; end: 105f20693; -[SCMapGestureManager _sendTouchUpOnMapAtPointToResponders:touchWorldLocation:featureDescriptors:] */

void FUN_105f20598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_5);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  _objc_retain(param_7);
  _objc_copyWeak(auStack_80,auStack_58);
  func_0x00010bea0ec0(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  return;
}



/* Entry: 105f20694; end: 105f206e7;  */

ulong FUN_105f20694(long param_1,ulong param_2)

{
  func_0x00010bf7daa0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2,
                      param_2,*(undefined8 *)(param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd1840();
    _objc_release(param_1);
  }
  return param_2;
}



/* Entry: 105f206e8; end: 105f2076b; -[SCMapGestureManager handleMapViewportItemTap] */

void FUN_105f206e8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f2076c; end: 105f2080b; -[SCMapGestureManager _sendLongPressOnMapAtPointToResponders:featureDescriptors:] */

void FUN_105f2076c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  func_0x00010c278240(*(undefined8 *)(param_3 + 0x80));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f2080c;
  puStack_50 = &UNK_1108f92a0;
  uStack_48 = param_5;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_5);
  func_0x00010bea0ec0(param_3,param_4,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 105f2080c; end: 105f2081b;  */

void FUN_105f2080c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,
             PTR_s_didLongPressOnMapAtPoint_feature_1125bb908,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f2081c; end: 105f2092f; -[SCMapGestureManager _sendDidPanMapToResponders] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105f20880 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8
FUN_105f2081c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0;
  lVar7 = *(long *)(param_5 + 0x70);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar1 = PTR_s_didPanMap_1125bba40;
  while (PTR_s_didPanMap_1125bba40 = puVar1, lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar4 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf78260(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    puVar1 = PTR_s_didPanMap_1125bba40;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0;
  lVar7 = *(long *)(lVar7 + 0x70);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar1 = PTR_s_didZoomMap_1125bd4b8;
  while (PTR_s_didZoomMap_1125bd4b8 = puVar1, lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar4 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf7ec40(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    puVar1 = PTR_s_didZoomMap_1125bd4b8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  uVar11 = uVar10;
  if (*(long *)(lVar7 + 0x88) != 0) {
    func_0x00010bf431c0();
    lVar3 = lVar7 + 0xd8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf51cc0();
    _objc_release(lVar3);
    uVar11 = 0;
    lVar7 = *(long *)(lVar7 + 0x88);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c140200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar8;
        uVar12 = uVar10;
        func_0x00010c09fe00(uVar10,param_2,param_3,param_4);
        iVar2 = (int)uVar4;
        uVar11 = uVar12;
        _CLLocationCoordinate2DIsValid();
        if (iVar2 != 0) {
          uVar4 = uVar8;
          _objc_opt_respondsToSelector(uVar8,PTR_s_screenPointsVerticalOffsetForLoc_112631ea0);
          if ((uVar4 & 1) != 0) {
            func_0x00010c151200(uVar8);
          }
          _objc_release(lVar3);
          goto LAB_105f20bc8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  uVar12 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
LAB_105f20bc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar3 = lVar3 + 0xd8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf8c060();
  _objc_release(lVar3);
  return uVar11;
}



/* Entry: 105f20930; end: 105f20a43; -[SCMapGestureManager _sendDidZoomMapToResponders] */

undefined8
FUN_105f20930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0;
  lVar7 = *(long *)(param_5 + 0x70);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar1 = PTR_s_didZoomMap_1125bd4b8;
  while (PTR_s_didZoomMap_1125bd4b8 = puVar1, lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      uVar4 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf7ec40(uVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    puVar1 = PTR_s_didZoomMap_1125bd4b8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  uVar11 = uVar10;
  if (*(long *)(lVar7 + 0x88) != 0) {
    func_0x00010bf431c0();
    lVar3 = lVar7 + 0xd8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf51cc0();
    _objc_release(lVar3);
    uVar11 = 0;
    lVar7 = *(long *)(lVar7 + 0x88);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c140200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar8 = *(ulong *)(lVar9 * 8);
        uVar4 = uVar8;
        uVar12 = uVar10;
        func_0x00010c09fe00(uVar10,param_2,param_3,param_4);
        iVar2 = (int)uVar4;
        uVar11 = uVar12;
        _CLLocationCoordinate2DIsValid();
        if (iVar2 != 0) {
          uVar4 = uVar8;
          _objc_opt_respondsToSelector(uVar8,PTR_s_screenPointsVerticalOffsetForLoc_112631ea0);
          if ((uVar4 & 1) != 0) {
            func_0x00010c151200(uVar8);
          }
          _objc_release(lVar3);
          goto LAB_105f20bc8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  uVar12 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
LAB_105f20bc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar3 = lVar3 + 0xd8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf8c060();
  _objc_release(lVar3);
  return uVar11;
}



/* Entry: 105f20a44; end: 105f20c13; -[SCMapGestureManager lockTargetForAltitudeZoom] */

undefined8
FUN_105f20a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar5;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  uVar9 = param_1;
  if (*(long *)(param_5 + 0x88) != 0) {
    func_0x00010bf431c0();
    lVar3 = param_5 + 0xd8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf51cc0();
    _objc_release(lVar3);
    uVar9 = 0;
    lVar4 = *(long *)(param_5 + 0x88);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c140200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar5 = uVar7;
        uVar10 = param_1;
        func_0x00010c09fe00(param_1,param_2,param_3,param_4);
        iVar2 = (int)uVar5;
        uVar9 = uVar10;
        _CLLocationCoordinate2DIsValid();
        if (iVar2 != 0) {
          uVar5 = uVar7;
          _objc_opt_respondsToSelector(uVar7,PTR_s_screenPointsVerticalOffsetForLoc_112631ea0);
          if ((uVar5 & 1) != 0) {
            func_0x00010c151200(uVar7);
          }
          _objc_release(lVar3);
          goto LAB_105f20bc8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  uVar10 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
LAB_105f20bc8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar3 = lVar3 + 0xd8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf8c060();
  _objc_release(lVar3);
  return uVar9;
}



/* Entry: 105f20c14; end: 105f20c73; -[SCMapGestureManager edgeInsetsForAltitudeZoom] */

undefined8 FUN_105f20c14(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0xd8;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf8c060();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f20c74; end: 105f20ccf; -[SCMapGestureManager handleAltitudeZoomStarted] */

void FUN_105f20c74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_PTR_1126c5f90;
  func_0x00010c251f60(PTR_PTR_1126c5f90,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e7690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_onUserInteraction_1126177b8);
  return;
}



/* Entry: 105f20cd0; end: 105f20cd3; -[SCMapGestureManager handleAltitudeZoomEnded] */

void FUN_105f20cd0(void)

{
  return;
}



/* Entry: 105f20cd4; end: 105f20d87; -[SCMapGestureManager handleMapAltitudeSliderController:isVisible:] */

void FUN_105f20cd4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_3);
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_release(param_3);
  if (param_3 != lVar3) {
    return;
  }
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f20d88; end: 105f20d8f; -[SCMapGestureManager automaticTiltValueForZoom:] */

void FUN_105f20d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_consolidatedPitchForZoomLevel__1125afe28);
  return;
}



/* Entry: 105f20d90; end: 105f20e37; -[SCMapGestureManager _onProgrammaticViewportChanges] */

void FUN_105f20d90(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c2bf200(*(undefined8 *)(param_2 + 0x10));
  dVar2 = param_1;
  func_0x00010c251d60(*(undefined8 *)(param_2 + 0x98));
  dVar3 = dVar2;
  if (param_1 < dVar2) {
LAB_105f20ddc:
    func_0x00010c0fc7c0(*(undefined8 *)(param_2 + 0x10));
    uVar1 = *(undefined8 *)(param_2 + 0x98);
    if (dVar3 == 0.0) {
      func_0x00010c138800(uVar1);
      goto LAB_105f20e24;
    }
  }
  else {
    func_0x00010c2bf200(*(undefined8 *)(param_2 + 0x10));
    dVar3 = dVar2;
    func_0x00010bf95ce0(*(undefined8 *)(param_2 + 0x98));
    if (dVar3 < dVar2) goto LAB_105f20ddc;
    uVar1 = *(undefined8 *)(param_2 + 0x98);
  }
  func_0x00010c0fc7c0(*(undefined8 *)(param_2 + 0x10));
  dVar2 = dVar3;
  func_0x00010c2bf200(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c188680(dVar3,dVar2,uVar1);
LAB_105f20e24:
                    /* WARNING: Could not recover jumptable at 0x00010c278510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x80),PTR_s_trackProgrammaticViewportChange_11267bb68);
  return;
}



/* Entry: 105f20e38; end: 105f20ea7; -[SCMapGestureManager _unblockAutomaticTiltIfNecessary] */

void FUN_105f20e38(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c2bf200(*(undefined8 *)(param_2 + 0x10));
  dVar1 = param_1;
  func_0x00010c251d60(*(undefined8 *)(param_2 + 0x98));
  if (param_1 < dVar1) {
    func_0x00010bf62c40(*(undefined8 *)(param_2 + 0x98));
    dVar2 = dVar1;
    func_0x00010bf95ce0(*(undefined8 *)(param_2 + 0x98));
    if (dVar2 < dVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c138810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x98),PTR_s_resetCustomZoomAndPitch_11262bc20);
      return;
    }
  }
  return;
}



/* Entry: 105f20ea8; end: 105f20eaf; -[SCMapGestureManager _automaticTiltForZoom:] */

void FUN_105f20ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_consolidatedPitchForZoomLevel__1125afe28);
  return;
}



/* Entry: 105f20eb0; end: 105f20fb3; -[SCMapGestureManager _onZoomedToLowerThanDisableTiltAndRotateThreshold] */

void FUN_105f20eb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c141c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c1ee740(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26efe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c1dbe80(*(undefined8 *)(param_1 + 0x18));
  lVar2 = param_1;
  func_0x00010be5cba0();
  if ((int)lVar2 != 0) {
    func_0x00010c138800(*(undefined8 *)(param_1 + 0x98));
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105f20fb4;
    puStack_40 = &UNK_110841fb0;
    lStack_38 = param_1;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105f20fb4; end: 105f2107f;  */

void FUN_105f20fb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c29f500();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f21080; end: 105f2115f;  */

void FUN_105f21080(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bec60(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f21160; end: 105f2116b;  */

void FUN_105f21160(void)

{
  return;
}



/* Entry: 105f2116c; end: 105f21197;  */

void FUN_105f2116c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ba20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f21198; end: 105f211a7;  */

void FUN_105f21198(void)

{
  return;
}



/* Entry: 105f211a8; end: 105f21233; -[SCMapGestureManager _onZoomedToHigherThanDisableTiltAndRotateThreshold] */

void FUN_105f211a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0xd0));
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c141c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c1ee740(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26efe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1dbe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setPitchEnabled__1126549c8,1);
  return;
}



/* Entry: 105f21234; end: 105f2132b; -[SCMapGestureManager _onStoppedChangingViewportWhileLowerThanThreshold] */

void FUN_105f21234(double param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  byte bStack_38;
  
  uVar2 = param_2;
  func_0x00010be5cba0();
  if ((uVar2 & 1) != 0) {
    func_0x00010c0fc7c0(*(undefined8 *)(param_2 + 0x10));
    dVar4 = ABS(param_1);
    func_0x00010bf7f0e0(*(undefined8 *)(param_2 + 0x10));
    param_1 = ABS(param_1);
    if (1.0 <= param_1) {
      func_0x00010bf7f0e0(*(undefined8 *)(param_2 + 0x10));
      bVar1 = 1.0 <= ABS(param_1 + -360.0);
    }
    else {
      bVar1 = false;
    }
    bStack_38 = 1.0 <= dVar4 | bVar1;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f2132c;
    puStack_48 = &UNK_110845ce0;
    uStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_60);
    return;
  }
  func_0x00010bf86d40(*(undefined8 *)(param_2 + 0xd0));
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105f2132c; end: 105f2133f;  */

void FUN_105f2132c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_resetPitchAndDirectionAnimated__11262bea0,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f21340; end: 105f2142b; -[SCMapGestureManager _mapIsTiltedOrRotated] */

byte FUN_105f21340(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c0fc7c0(*(undefined8 *)(param_2 + 0x10));
  dVar2 = param_1;
  func_0x00010bf7f0e0(*(undefined8 *)(param_2 + 0x10));
  dVar3 = ABS(dVar2);
  dVar2 = ABS(dVar2 + 0.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    bVar1 = false;
  }
  else {
    func_0x00010bf7f0e0(*(undefined8 *)(param_2 + 0x10));
    dVar3 = ABS(dVar2 + 360.0) * 2.220446049250313e-16;
    if (dVar3 <= 2.2250738585072014e-308) {
      dVar3 = 2.2250738585072014e-308;
    }
    bVar1 = dVar3 <= ABS(dVar2 + -360.0);
  }
  dVar2 = ABS(param_1 + 0.0) * 2.220446049250313e-16;
  if (dVar2 <= 2.2250738585072014e-308) {
    dVar2 = 2.2250738585072014e-308;
  }
  return dVar2 <= ABS(param_1) | bVar1;
}



/* Entry: 105f2142c; end: 105f21453; -[SCMapGestureManager automaticTiltValue] */

void FUN_105f2142c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c2bf200(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bf49210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_consolidatedPitchForZoomLevel__1125afe28);
  return;
}



/* Entry: 105f21454; end: 105f2145b; -[SCMapGestureManager resetUserInteractionForAutomaticTilt] */

void FUN_105f21454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_resetCustomZoomAndPitch_11262bc20);
  return;
}



/* Entry: 105f2145c; end: 105f21473; -[SCMapGestureManager delegate] */

void FUN_105f2145c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f21474; end: 105f2147f; -[SCMapGestureManager setDelegate:] */

void FUN_105f21474(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 105f21480; end: 105f2158f; -[SCMapGestureManager .cxx_destruct] */

void FUN_105f21480(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 105f21590; end: 105f2168f; -[SCMapGestureServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f21590(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5f98;
  _objc_alloc(PTR_PTR_1126c5f98);
  func_0x00010c0179a0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273a7d4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f21690; end: 105f216cf;  */

void FUN_105f21690(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1c900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f216d0; end: 105f21737; -[SCMapGestureServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f216d0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11273a7d8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12b100();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126ee088;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f21738; end: 105f218ab; -[SCMapGestureServicesEntryPoint _gestureManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f21738(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + _DAT_11273a7dc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c5fa0;
  _objc_alloc(PTR_PTR_1126c5fa0);
  lVar2 = lVar3;
  func_0x00010c0b9160(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0baae0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0b8d20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c1530a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11273a7e0;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010bf164e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028360(puVar4);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_storeWeak(param_1 + _DAT_11273a7d8,puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f218ac; end: 105f2190b; -[SCMapGestureServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f218ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273a7d4,0);
  _objc_destroyWeak(param_1 + _DAT_11273a7e0);
  _objc_destroyWeak(param_1 + _DAT_11273a7dc);
  _objc_destroyWeak(param_1 + _DAT_11273a7e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a7d8);
  return;
}



/* Entry: 105f2190c; end: 105f21983; -[SCNMapSdkInputListener initWithInputListenerBlock:] */

undefined1 * FUN_105f2190c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f21984; end: 105f2199f; -[SCNMapSdkInputListener onInputEvent:featureDescriptors:] */

void FUN_105f21984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f21998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 105f219a0; end: 105f219ab; -[SCNMapSdkInputListener .cxx_destruct] */

void FUN_105f219a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f219ac; end: 105f21c3b; +[SCMapAltitudeSliderController makeSliderPairWithMapViewport:mapConfiguration:mapGestures:mapSessionForZoomLock:zoomAffectingGestureRecognizers:delegate:] */

undefined1  [16]
FUN_105f219ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_8);
  puVar1 = PTR_PTR_1126c5f88;
  _objc_alloc();
  puVar2 = auStack_68;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c028940();
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126c5f88;
  _objc_alloc(PTR_PTR_1126c5f88);
  puVar2 = auStack_68;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c028940(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010bfc1a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfc1a80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1374a0(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bfc1a80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfc1a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1374a0(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _CGAffineTransformMakeScale(auStack_98,0xbff0000000000000,0x3ff0000000000000);
  puVar4 = puVar1;
  func_0x00010c23e940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c23e940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c23e940(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(puVar4);
  puVar1[0xd0] = 1;
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 105f21c3c; end: 105f21e6f; -[SCMapAltitudeSliderController initWithMapViewport:mapConfiguration:mapGestures:mapSessionForZoomLock:zoomAffectingGestureRecognizers:delegate:] */

undefined8 *
FUN_105f21c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_8);
  puStack_70 = PTR_PTR_1126ee098;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar7 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar7);
    puVar3 = auStack_68;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 5,puVar3);
    _objc_release(puVar3);
    _objc_storeWeak(puVar1 + 6,param_6);
    _objc_initWeak(auStack_80,puVar1);
    puVar4 = puVar1 + 1;
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010c29f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    puVar6 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f21e70; end: 105f21fc7;  */

void FUN_105f21e70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f21fc8;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105f21ff4;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0bec60(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105f21fc8; end: 105f2201f;  */

void FUN_105f21fc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f22020; end: 105f22023;  */

void FUN_105f22020(void)

{
  return;
}



/* Entry: 105f22024; end: 105f2204f;  */

void FUN_105f22024(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f22050; end: 105f2205f;  */

void FUN_105f22050(void)

{
  return;
}



/* Entry: 105f22060; end: 105f220e3; -[SCMapAltitudeSliderController gestureRecognizer] */

void FUN_105f22060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8320(*(undefined8 *)(param_1 + 0x40),param_2,1);
    func_0x00010c1c3c20(*(undefined8 *)(param_1 + 0x40),param_2,1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40),param_2,param_1);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f220e4; end: 105f2214f; -[SCMapAltitudeSliderController sliderView] */

void FUN_105f220e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c5fa8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x48));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x48),param_2,
                        &PTR____CFConstantStringClassReference_110e318f8);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105f22150; end: 105f2219f; -[SCMapAltitudeSliderController hideSlider] */

void FUN_105f22150(long param_1,undefined8 param_2)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x40),param_2,0);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x40));
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010be35cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSliderTick_11256b0d0);
    return;
  }
  return;
}



/* Entry: 105f221a0; end: 105f22527; -[SCMapAltitudeSliderController _updateZoomLevel] */

void FUN_105f221a0(double param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar3 == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0xd0) == '\x01') &&
     (lVar5 = param_2, func_0x00010be45140(), (int)lVar5 == 0)) {
    return;
  }
  lVar4 = param_2;
  func_0x00010be450a0();
  lVar5 = param_2 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c2bf200();
  _objc_release(lVar5);
  dVar10 = ABS(*(double *)(param_2 + 0x50) - param_1);
  if (dVar10 < 1.1920928955078125e-07 && (int)lVar4 == 0) {
    return;
  }
  *(double *)(param_2 + 0x50) = param_1;
  uVar9 = 0;
  if ((int)lVar4 == 0) goto LAB_105f22378;
  lVar4 = *(long *)(param_2 + 0x48);
  func_0x00010c252440();
  lVar5 = param_2;
  func_0x00010be45140();
  uVar8 = 2;
  if ((int)lVar5 == 0) {
    uVar8 = 0;
  }
  func_0x00010c209fc0(*(undefined8 *)(param_2 + 0x48),param_3,uVar8);
  lVar5 = *(long *)(param_2 + 0x48);
  func_0x00010c252440();
  if (lVar4 != lVar5) {
    func_0x00010c252440(*(undefined8 *)(param_2 + 0x48));
    lVar5 = param_2 + 0x28;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bfd17c0();
    _objc_release(lVar5);
  }
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x00010c071800();
    if (iVar2 == 0) goto LAB_105f2231c;
    *(undefined1 *)(param_2 + 0x58) = 1;
    lVar5 = param_2;
    func_0x00010be45140();
    uVar9 = (uint)lVar5;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105f22528;
    puStack_60 = &UNK_110842e18;
    lStack_58 = param_2;
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,4,
                        &puStack_78,0);
  }
  else {
LAB_105f2231c:
    uVar9 = 0;
  }
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x60));
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x3ff6666666666666,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_3,param_2,
                      PTR_s__hideSliderTick_11256b0d0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar3;
  _objc_release(uVar8);
  dVar10 = 0.1;
  func_0x00010c216ce0(*(undefined8 *)(param_2 + 0x60));
LAB_105f22378:
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    lVar5 = param_2 + 0x10;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0ce780();
    param_1 = param_1 - dVar10;
    lVar4 = param_2 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0c3720();
    lVar6 = param_2 + 0x10;
    dVar11 = dVar10;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c0ce780();
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    dVar10 = (1.0 - param_1 / (dVar10 - dVar11)) + *(double *)(param_2 + 0xb0);
    func_0x00010c1da680(*(undefined8 *)(param_2 + 0x48));
  }
  lVar5 = param_2 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c2bf200();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e319d8;
  if (2.0 <= dVar10) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e319b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31998;
  if (dVar10 < 4.0) {
    ppuVar1 = ppuVar7;
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110e31978;
  if (dVar10 < 7.0) {
    ppuVar7 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31958;
  if (dVar10 < 10.0) {
    ppuVar1 = ppuVar7;
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110e31938;
  if (dVar10 < 13.0) {
    ppuVar7 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e31918;
  if (dVar10 < 16.0) {
    ppuVar1 = ppuVar7;
  }
  _objc_release(lVar5);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c26b700(uVar8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar1;
  func_0x00010c0720c0(ppuVar1,param_3,uVar8);
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126affa8;
  if (((ulong)ppuVar7 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_2 + 0x48),param_3,ppuVar1);
    func_0x00010be45140();
    uVar9 = ((uint)param_2 | uVar9) & 1;
    puVar3 = PTR_PTR_1126affa8;
  }
  PTR_PTR_1126affa8 = puVar3;
  if (uVar9 != 0) {
    func_0x00010c22bc20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar3);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 105f22528; end: 105f22537;  */

void FUN_105f22528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105f22538; end: 105f225eb; -[SCMapAltitudeSliderController _hideSliderTick] */

void FUN_105f22538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x58) = 0;
  func_0x00010c209fc0(*(undefined8 *)(param_1 + 0x48),param_2,0);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfd17c0();
  _objc_release(lVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105f225ec;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03440(0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_48,
                      0);
  return;
}



/* Entry: 105f225ec; end: 105f225fb;  */

void FUN_105f225ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105f225fc; end: 105f2263f; -[SCMapAltitudeSliderController _isUserScrubbing] */

bool FUN_105f225fc(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c252440();
  if (lVar2 == 2) {
    bVar1 = true;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c252440(lVar2);
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 105f22640; end: 105f2276b; -[SCMapAltitudeSliderController _isUserInteracting] */

undefined8 FUN_105f22640(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  uVar1 = param_1;
  func_0x00010be45140();
  if ((uVar1 & 1) == 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    uVar5 = 0;
    if (lVar2 != 0) {
      lVar7 = *plStack_100;
      do {
        lVar8 = 0;
        do {
          if (*plStack_100 != lVar7) {
            _objc_enumerationMutation(lVar4);
          }
          lVar6 = *(long *)(lStack_108 + lVar8 * 8);
          lVar3 = lVar6;
          func_0x00010c252440();
          if ((lVar3 == 2) || (func_0x00010c252440(), lVar6 == 3)) {
            uVar5 = 1;
            goto LAB_105f2272c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
      uVar5 = 0;
    }
LAB_105f2272c:
    _objc_release(lVar4);
  }
  else {
    uVar5 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar5;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 105f2276c; end: 105f22773; -[SCMapAltitudeSliderController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_105f2276c(void)

{
  return 1;
}



/* Entry: 105f22774; end: 105f2277b; -[SCMapAltitudeSliderController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_105f22774(void)

{
  return 1;
}



/* Entry: 105f2277c; end: 105f227c3; -[SCMapAltitudeSliderController gestureRecognizer:shouldReceiveTouch:] */

void FUN_105f2277c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c09ef00(param_4,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 105f227c4; end: 105f2280b; -[SCMapAltitudeSliderController gestureRecognizerShouldBegin:] */

bool FUN_105f227c4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  if (*(long *)(param_3 + 0x40) != param_5) {
    return true;
  }
  func_0x00010c297a00(*(long *)(param_3 + 0x40),param_4,*(undefined8 *)(param_3 + 0x48));
  return ABS(param_1) * 1.5 < ABS(param_2);
}



/* Entry: 105f2280c; end: 105f22ba3; -[SCMapAltitudeSliderController _onAltitudeGesture:] */

void FUN_105f2280c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_7);
  func_0x00010c09ef00(param_7);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x48));
  dVar5 = (param_2 + -16.5) / (param_4 + -33.0);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  uVar8 = 0x3ff0000000000000;
  dVar10 = 1.0;
  if (dVar5 <= 1.0) {
    dVar10 = dVar5;
  }
  lVar1 = param_7;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2bf200();
    lVar3 = param_5 + 0x10;
    dVar6 = dVar5;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0ce780();
    dVar5 = dVar5 - dVar6;
    lVar4 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0c3720();
    lVar2 = param_5 + 0x10;
    dVar7 = dVar6;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0ce780();
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    dVar5 = dVar10 + dVar5 / (dVar6 - dVar7) + -1.0;
    *(double *)(param_5 + 0xb0) = dVar5;
    *(undefined1 *)(param_5 + 0xb8) = 1;
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf34640();
    *(double *)(param_5 + 0x68) = dVar5;
    *(undefined8 *)(param_5 + 0x70) = uVar8;
    _objc_release(lVar1);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2bf200();
    *(double *)(param_5 + 0xa0) = dVar5;
    _objc_release(lVar1);
    *(undefined8 *)(param_5 + 0x90) = 0;
    *(undefined1 *)(param_5 + 0x98) = 0;
    lVar1 = param_5 + 0x30;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_5 + 0x30;
      _objc_loadWeakRetained(lVar1);
      lVar3 = param_5;
      func_0x00010be06e60(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf360((float)dVar10,lVar1);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
    lVar1 = param_5 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfd0280();
    _objc_release(lVar1);
    func_0x00010c0dd1a0(*(undefined8 *)(param_5 + 0x18));
  }
  else {
    lVar1 = param_7;
    func_0x00010c252440();
    if (lVar1 == 2) {
      dVar11 = *(double *)(param_5 + 0xb0);
      lVar1 = param_5 + 0x10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0ce780();
      lVar3 = param_5 + 0x10;
      dVar6 = dVar5;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c0c3720();
      lVar4 = param_5 + 0x10;
      dVar7 = dVar6;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c0ce780();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_5 + 0x30;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 == 0) {
        dVar11 = dVar10 - dVar11;
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        dVar9 = 1.0;
        if (dVar11 <= 1.0) {
          dVar9 = dVar11;
        }
        func_0x00010beebfa0(dVar5 + (1.0 - dVar9) * (dVar6 - dVar7),param_5);
      }
      else {
        lVar1 = param_5 + 0x30;
        _objc_loadWeakRetained(lVar1);
        lVar3 = param_5;
        func_0x00010be06e60(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bf360((float)dVar10,lVar1);
        _objc_release(lVar3);
        _objc_release(lVar1);
      }
      func_0x00010c0dd200(*(undefined8 *)(param_5 + 0x18));
      func_0x00010c1da680(dVar10,*(undefined8 *)(param_5 + 0x48));
    }
    else {
      lVar1 = param_7;
      func_0x00010c252440();
      if ((lVar1 == 3) || (lVar1 = param_7, func_0x00010c252440(), lVar1 == 4)) {
        func_0x00010c209fc0(*(undefined8 *)(param_5 + 0x48));
        func_0x00010c0dd1c0(*(undefined8 *)(param_5 + 0x18));
        lVar1 = param_5 + 0x28;
        _objc_loadWeakRetained(lVar1);
        func_0x00010bfd0260();
        _objc_release(lVar1);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_105f22ba4;
        puStack_80 = &UNK_110842e18;
        lStack_78 = param_5;
        func_0x000100162d98("APPSTORE",&puStack_98);
      }
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 105f22ba4; end: 105f22bb7;  */

void FUN_105f22ba4(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb8) = 0;
  return;
}



/* Entry: 105f22bb8; end: 105f22e3b; -[SCMapAltitudeSliderController _zoomToLevel:] */

void FUN_105f22bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  lVar2 = param_4;
  if ((*(byte *)(param_4 + 0x98) & 1) == 0) {
    lVar2 = param_4 + 0x28;
    uVar4 = param_1;
    _objc_loadWeakRetained();
    func_0x00010c09fe20();
    *(undefined8 *)(param_4 + 0x78) = uVar4;
    *(undefined8 *)(param_4 + 0x80) = param_2;
    *(undefined8 *)(param_4 + 0x88) = param_3;
    _objc_release();
    *(undefined1 *)(param_4 + 0x98) = 1;
    uVar4 = *(undefined8 *)(param_4 + 0x78);
    _CLLocationCoordinate2DIsValid(uVar4,*(undefined8 *)(param_4 + 0x80));
    if ((int)lVar2 != 0) {
      lVar2 = param_4 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c2bf200();
      *(undefined8 *)(param_4 + 0xa0) = uVar4;
      _objc_release(lVar2);
      uVar4 = *(undefined8 *)(param_4 + 0x78);
      uVar7 = *(undefined8 *)(param_4 + 0x80);
      FUN_105f22e3c(uVar4,uVar7,*(undefined8 *)(param_4 + 0x88),param_1);
      dVar5 = *(double *)(param_4 + 0x68);
      uVar8 = *(undefined8 *)(param_4 + 0x70);
      func_0x000108d3176c(dVar5,uVar8,uVar4,uVar7,*(undefined8 *)(param_4 + 0xa0));
      *(double *)(param_4 + 0xc0) = dVar5;
      *(undefined8 *)(param_4 + 200) = uVar8;
      lVar2 = param_4 + 0x10;
      _objc_loadWeakRetained();
      func_0x00010c0c3720();
      *(double *)(param_4 + 0xa8) = (dVar5 - *(double *)(param_4 + 0xa0)) / 1.3;
      _objc_release();
    }
  }
  iVar1 = (int)lVar2;
  if (*(char *)(param_4 + 0x98) == '\x01') {
    dVar5 = *(double *)(param_4 + 0x78);
    _CLLocationCoordinate2DIsValid(dVar5,*(undefined8 *)(param_4 + 0x80));
    if (iVar1 != 0) {
      lVar2 = param_4 + 8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c2bf200();
      dVar10 = *(double *)(param_4 + 0xa0);
      dVar6 = dVar5;
      _objc_release(lVar2);
      dVar9 = 0.0;
      if (dVar10 < dVar5) {
        lVar2 = param_4 + 8;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c2bf200();
        dVar9 = (dVar6 - *(double *)(param_4 + 0xa0)) / *(double *)(param_4 + 0xa8);
        _objc_release(lVar2);
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        if (1.0 <= dVar9) {
          if (*(double *)(param_4 + 0x90) < 1.0) {
            puVar3 = PTR_PTR_1126affa8;
            func_0x00010c22bc20(PTR_PTR_1126affa8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f8760();
            _objc_release(puVar3);
          }
          dVar9 = 1.0;
        }
      }
      *(double *)(param_4 + 0x90) = dVar9;
      uVar4 = *(undefined8 *)(param_4 + 0x78);
      uVar7 = *(undefined8 *)(param_4 + 0x80);
      FUN_105f22e3c(uVar4,uVar7,*(undefined8 *)(param_4 + 0x88),param_1);
      func_0x000108d31910();
      lVar2 = param_4 + 8;
      _objc_loadWeakRetained(lVar2);
      goto LAB_105f22e14;
    }
  }
  lVar2 = param_4 + 8;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_4 + 0x68);
  uVar7 = *(undefined8 *)(param_4 + 0x70);
LAB_105f22e14:
  func_0x00010c17a700(uVar4,uVar7,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105f22e3c; end: 105f22f07;  */

undefined1  [16] FUN_105f22e3c(double param_1,undefined8 param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if (0.0 < param_3) {
    dVar2 = 0.0;
    if (0.0 <= param_4) {
      dVar2 = param_4;
    }
    dVar1 = (double)NEON_fminnm(dVar2,0x4039800000000000);
    _exp2(dVar1);
    dVar2 = -85.0511287798066;
    if (-85.0511287798066 <= param_1) {
      dVar2 = param_1;
    }
    dVar2 = (double)NEON_fminnm(dVar2,0x40554345b1a549d7);
    dVar2 = dVar2 * 0.017453292519943295;
    _cos(dVar2);
    func_0x000108d313b8(param_1,param_2,0,
                        param_3 * ((dVar2 * 6.283185307179586 * 6378137.0) / (dVar1 * 512.0)));
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 105f22f08; end: 105f22f97; -[SCMapAltitudeSliderController _edgeInsetsForZoom] */

void FUN_105f22f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  param_5 = param_5 + 0x28;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf8c040();
  _objc_release(param_5);
  puVar1 = PTR_PTR_1126c5fb0;
  _objc_alloc_init(PTR_PTR_1126c5fb0);
  func_0x00010c1ba100(param_2);
  func_0x00010c1ee020(param_4,puVar1);
  func_0x00010c2172c0(param_1,puVar1);
  func_0x00010c173440(param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f22f98; end: 105f23017; -[SCMapAltitudeSliderController .cxx_destruct] */

void FUN_105f22f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f23018; end: 105f23373; -[SCMapAltitudeSliderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f23018(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ee0a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0xbff0000000000000,0);
    _objc_release(puVar3);
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11273a850;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x3ff0000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11273a854;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273a858;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4008000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11273a85c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010bf13d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar4);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f23374; end: 105f2351f; -[SCMapAltitudeSliderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f23374(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ee0a0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  param_4 = param_4 + -4.0;
  dVar4 = 2.0;
  func_0x00010c19f0e0(param_3 + -7.5,0x4000000000000000,0x4000000000000000,param_4,
                      *(undefined8 *)(param_5 + _DAT_11273a850));
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  dVar4 = dVar4 + -3.0;
  dVar6 = dVar4 + -5.0;
  func_0x00010c0f7e00(param_5);
  lVar3 = (long)_DAT_11273a854;
  dVar5 = 3.0;
  func_0x00010c19f0e0(dVar6,dVar4 * (param_4 + -33.0),0x4008000000000000,0x4040800000000000,
                      *(undefined8 *)(param_5 + lVar3));
  lVar2 = param_5;
  func_0x00010c252440();
  dVar4 = 120.0;
  if (lVar2 != 2) {
    dVar4 = 35.0;
  }
  dVar6 = 3.0;
  if (lVar2 != 0) {
    dVar6 = dVar4;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  lVar2 = (long)_DAT_11273a858;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar2);
  func_0x00010bfb68e0();
  _CGRectEqualToRect();
  if (iVar1 == 0) {
    func_0x00010c19f0e0(dVar5 - dVar6,0,dVar6,0x4040800000000000,*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
    _CGRectInset();
    lVar2 = (long)_DAT_11273a85c;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  }
  else {
    lVar2 = (long)_DAT_11273a85c;
  }
  func_0x00010c19f0e0(0x4014000000000000,0,dVar6,0x4040800000000000,*(undefined8 *)(param_5 + lVar2)
                     );
  return;
}



/* Entry: 105f23520; end: 105f235c7; -[SCMapAltitudeSliderView _flipTextViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f23520(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  func_0x00010c230720();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_11273a85c;
    if (*(long *)(param_1 + lVar2) == 0) {
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_50);
    }
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar1 = &uStack_50;
    uStack_80 = uVar3;
    uStack_78 = uVar5;
    uStack_70 = uVar7;
    uStack_68 = uVar8;
    uStack_60 = uVar4;
    uStack_58 = uVar6;
    _CGAffineTransformEqualToTransform(puVar1,&uStack_80);
    if (((ulong)puVar1 & 1) == 0) {
      uStack_50 = uVar3;
      uStack_48 = uVar5;
      uStack_40 = uVar7;
      uStack_38 = uVar8;
      uStack_30 = uVar4;
      uStack_28 = uVar6;
      func_0x00010c219960(*(undefined8 *)(param_1 + lVar2));
      func_0x00010c213040(*(undefined8 *)(param_1 + lVar2));
    }
  }
  return;
}



/* Entry: 105f235c8; end: 105f235f7; -[SCMapAltitudeSliderView setPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f235c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a844) = param_1;
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105f235f8; end: 105f2368b; -[SCMapAltitudeSliderView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f235f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_11273a848) != param_3) {
    *(long *)(param_1 + _DAT_11273a848) = param_3;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105f2368c;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010bf03460(0x3fd3333333333333,0,0x3feb333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_2,4,&puStack_38,0);
  }
  return;
}



/* Entry: 105f2368c; end: 105f236b3;  */

void FUN_105f2368c(long param_1)

{
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 105f236b4; end: 105f236c3; -[SCMapAltitudeSliderView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f236b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273a85c),PTR_s_setText__1126625f0);
  return;
}


