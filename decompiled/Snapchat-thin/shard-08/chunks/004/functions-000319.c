/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106184648; end: 1061846b7;  */

void FUN_106184648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c273a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be26d40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061846b8; end: 1061846f7; -[SCFeatureRingFlashImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061846b8(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127411f0) != 0) {
    func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return;
  }
  return;
}



/* Entry: 1061846f8; end: 10618479f;  */

void FUN_1061846f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0be6c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061847a0; end: 1061847a3;  */

void FUN_1061847a0(void)

{
  return;
}



/* Entry: 1061847a4; end: 1061847cf;  */

void FUN_1061847a4(long param_1)

{
  func_0x00010bf803c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bea88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setToolbarItemVisible__112587bd8,0);
  return;
}



/* Entry: 1061847d0; end: 1061847db;  */

void FUN_1061847d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setToolbarItemVisible__112587bd8,1);
  return;
}



/* Entry: 1061847dc; end: 106184853; -[SCFeatureRingFlashImpl _setToolbarItemVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061847dc(long param_1,undefined8 param_2,int param_3)

{
  if (*(long *)(param_1 + _DAT_1127411e8) != 0) {
    param_1 = param_1 + _DAT_1127411e0;
    _objc_loadWeakRetained(param_1);
    if (param_3 == 0) {
      func_0x00010bfe2c00();
    }
    else {
      func_0x00010c23a840();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106184854; end: 10618495f;  */

void FUN_106184854(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be286a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106184960; end: 1061849a7; -[SCFeatureRingFlashImpl _handleDidTapEventWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184960(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741168);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d480();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be17f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__flashButtonTapped_112563960);
  return;
}



/* Entry: 1061849a8; end: 106184a1b; -[SCFeatureRingFlashImpl _handleCanShowChildItemEventWithResult:] */

void FUN_1061849a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be40ac0(param_1);
  }
  func_0x00010c201100(param_3,param_2,param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106184a1c; end: 106184a7b; -[SCFeatureRingFlashImpl _handleDidChangeSelectedEventWithResult:] */

void FUN_106184a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c07d660();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bebbcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showWidget_11258c8e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106184a7c; end: 106184ab3; -[SCFeatureRingFlashImpl _handleCameraToolbarExpandCollapse:] */

void FUN_106184a7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x00010bf1f3c0();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
    return;
  }
  return;
}



/* Entry: 106184ab4; end: 106184ae3; -[SCFeatureRingFlashImpl _handleCameraToolbarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184ab4(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != *(long *)(param_1 + _DAT_1127411e8)) &&
     (param_3 != *(long *)(param_1 + _DAT_1127411f8))) {
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
    return;
  }
  return;
}



/* Entry: 106184ae4; end: 106184b2f; -[SCFeatureRingFlashImpl _handleCameraFeatureUpdateEventUpdate:] */

void FUN_106184ae4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a52b8);
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    func_0x00010be03ba0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106184b30; end: 106184b63; -[SCFeatureRingFlashImpl _viewWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184b30(long param_1)

{
  func_0x00010be03ba0();
  func_0x00010be95800(param_1);
  *(undefined1 *)(param_1 + _DAT_1127411bc) = 0;
  return;
}



/* Entry: 106184b64; end: 106184b9b; -[SCFeatureRingFlashImpl _viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184b64(long param_1)

{
  func_0x00010be03ba0();
  func_0x00010be95800(param_1);
  *(undefined1 *)(param_1 + _DAT_1127411c0) = 1;
  return;
}



/* Entry: 106184b9c; end: 106184baf; -[SCFeatureRingFlashImpl _viewDidPartiallyDisappear] */

void FUN_106184b9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissRingFlash_11255e668);
  return;
}



/* Entry: 106184bb0; end: 106184bb3; -[SCFeatureRingFlashImpl _applicationWillResignActive] */

void FUN_106184bb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreScreenBrightnessIfNeeded_112582fa0);
  return;
}



/* Entry: 106184bb4; end: 106184bb7; -[SCFeatureRingFlashImpl _applicationDidEnterBackground] */

void FUN_106184bb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
  return;
}



/* Entry: 106184bb8; end: 106184d3f; -[SCFeatureRingFlashImpl _setFlashActive:newState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184bb8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + _DAT_1127411d4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c21e900();
  _objc_release(lVar1);
  if ((param_4 & 0xfffffffffffffffd) == 1) {
    puVar2 = PTR_PTR_1126b00d0;
    func_0x00010c289ce0(PTR_PTR_1126b00d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112741150);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112741154);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfb2500();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c19dac0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106184d40; end: 106184dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184d40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127411d4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c21e900();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741128);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106184dc8; end: 106184fd7; -[SCFeatureRingFlashImpl _ringFlashFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106184dc8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined8 param_6)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = (long)_DAT_11274119c;
  uVar2 = *(ulong *)(param_5 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar6 = param_5 + _DAT_1127411d4;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf51460(param_1,param_2,param_3,param_4,uVar3,param_6,lVar6);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  pdVar1 = (double *)(param_5 + _DAT_1127411b4);
  _CGRectEqualToRect(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],*(undefined8 *)PTR__CGRectZero_110347608,
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  dVar9 = param_1;
  if ((uVar2 & 1) == 0) {
    dVar7 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    _CGRectGetWidth(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
    _CGRectGetHeight(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar8 = *pdVar1;
    _CGRectGetMinX(dVar8,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar9 = dVar9 + dVar8 * dVar7;
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    _CGRectGetMinY(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
  }
  return dVar9;
}



/* Entry: 106184fd8; end: 1061853cb; -[SCFeatureRingFlashImpl _showRingFlash] */

/* WARNING: Possible PIC construction at 0x0001061852dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061852e0) */
/* WARNING: Removing unreachable block (ram,0x0001061853a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184fd8(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  
  lVar19 = (long)_DAT_1127411fc;
  if (*(long *)(param_2 + lVar19) == 0) {
    puVar1 = PTR_PTR_1126c86b0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar18 = *(undefined8 *)(param_2 + lVar19);
    *(undefined **)(param_2 + lVar19) = puVar1;
    _objc_release(uVar18);
    func_0x00010c219b60(*(undefined8 *)(param_2 + lVar19));
    lVar20 = (long)_DAT_1127411d4;
    lVar2 = param_2 + lVar20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c066fc0();
    _objc_release(lVar2);
    lVar2 = param_2 + _DAT_11274112c;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c14a240();
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + lVar20;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2 + lVar20;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2 + lVar20;
    _objc_loadWeakRetained(lVar10);
    lVar11 = lVar10;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_2 + lVar19);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_2 + lVar20;
    _objc_loadWeakRetained(lVar20);
    lVar19 = lVar20;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(lVar19);
    _objc_release(lVar20);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar18);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    ___stack_chk_fail();
    uVar16 = *(ulong *)(param_2 + _DAT_1127411b8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf91920();
    _objc_release(uVar16);
    if (((((uVar17 & 1) == 0) && (*(char *)(param_2 + _DAT_1127411bc) == '\x01')) &&
        ((*(byte *)(param_2 + _DAT_1127411c0) & 1) == 0)) &&
       (lVar19 = (long)_DAT_1127411c4, *(long *)(param_2 + lVar19) != 0)) {
      puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar1;
      func_0x00010bf07b60();
      _objc_release(puVar1);
      if (puVar15 == (undefined *)0x0) {
        _CFAbsoluteTimeGetCurrent();
        dVar21 = param_1 - *(double *)(param_2 + _DAT_112741204);
        uVar18 = *(undefined8 *)(param_2 + lVar19);
        if (0.1 <= dVar21) {
          func_0x00010bfb2c80();
          puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c173c60((double)SUB84(param_1,0));
          _objc_release(puVar1);
          uVar18 = *(undefined8 *)(param_2 + lVar19);
          *(undefined8 *)(param_2 + lVar19) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(uVar18);
          return;
        }
        func_0x00010bf51e00();
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0xc2000000;
        pcStack_140 = FUN_106185570;
        puStack_138 = &UNK_110841f80;
        lStack_130 = param_2;
        uStack_128 = uVar18;
        _objc_retain();
        func_0x000100c749e0((float)(0.1 - dVar21),"APPSTORE",&puStack_150);
        _objc_release(uStack_128);
        _objc_release(uVar18);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaf7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupRingFlashConstraints_112589798);
  return;
}



/* Entry: 1061853cc; end: 10618556f; -[SCFeatureRingFlashImpl _restoreScreenBrightnessIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061853cc(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(param_2 + _DAT_1127411b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91920();
  _objc_release(uVar1);
  if (((((uVar2 & 1) == 0) && (*(char *)(param_2 + _DAT_1127411bc) == '\x01')) &&
      ((*(byte *)(param_2 + _DAT_1127411c0) & 1) == 0)) &&
     (lVar6 = (long)_DAT_1127411c4, *(long *)(param_2 + lVar6) != 0)) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf07b60();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      _CFAbsoluteTimeGetCurrent();
      dVar7 = param_1 - *(double *)(param_2 + _DAT_112741204);
      uVar5 = *(undefined8 *)(param_2 + lVar6);
      if (0.1 <= dVar7) {
        func_0x00010bfb2c80();
        puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173c60((double)SUB84(param_1,0));
        _objc_release(puVar3);
        uVar5 = *(undefined8 *)(param_2 + lVar6);
        *(undefined8 *)(param_2 + lVar6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
      func_0x00010bf51e00();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106185570;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_2;
      uStack_48 = uVar5;
      _objc_retain();
      func_0x000100c749e0((float)(0.1 - dVar7),"APPSTORE",&puStack_70);
      _objc_release(uStack_48);
      _objc_release(uVar5);
    }
  }
  return;
}



/* Entry: 106185570; end: 1061855db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185570(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_1127411c4);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_1127411c4) = 0;
  _objc_release(uVar1);
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x28));
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173c60((double)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061855dc; end: 106185727; -[SCFeatureRingFlashImpl _dismissRingFlash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061855dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127411fc;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  func_0x00010bf83240(*(undefined8 *)(param_1 + _DAT_1127411d8));
  lVar3 = param_1 + _DAT_11274112c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c13c2c0();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741164);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287360();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_1127411d4;
  lVar3 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar3);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eae20(0,0,lVar3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar3 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eae20(0,0,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be95810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreScreenBrightnessIfNeeded_112582fa0);
  return;
}



/* Entry: 106185728; end: 106185737; -[SCFeatureRingFlashImpl _showWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebbd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showWidgetWithRingFlashState__11258c8e8,
             *(undefined8 *)(param_1 + _DAT_11274115c));
  return;
}



/* Entry: 106185738; end: 106185a73; -[SCFeatureRingFlashImpl _showWidgetWithRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185738(long param_1,undefined8 param_2,long param_3)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if ((param_3 != 0) && (lVar13 = (long)_DAT_1127411f0, *(long *)(param_1 + lVar13) == 0)) {
    lVar12 = (long)_DAT_1127411e0;
    lVar1 = param_1 + lVar12;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      lVar15 = (long)_DAT_1127411e8;
      lVar14 = *(long *)(param_1 + lVar15);
      _objc_release();
      if (lVar14 != 0) {
        lVar1 = param_1;
        func_0x00010bdedd00(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + lVar13);
        *(long *)(param_1 + lVar13) = lVar1;
        _objc_release(uVar10);
        _objc_retain(lVar1);
        lVar13 = param_1 + lVar12;
        _objc_loadWeakRetained();
        lVar14 = lVar13;
        func_0x00010c29cfe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        if ((lVar1 != 0) && (lVar14 != 0)) {
          lVar11 = (long)_DAT_1127411d4;
          lVar13 = param_1 + lVar11;
          _objc_loadWeakRetained(lVar13);
          lVar2 = lVar13;
          func_0x00010bfe12e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(lVar2);
          _objc_release(lVar13);
          func_0x00010c219b60(lVar1,param_2,0);
          puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          lVar13 = lVar1;
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_1 + lVar12;
          _objc_loadWeakRetained();
          lVar2 = lVar12;
          func_0x00010c273c40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar13;
          func_0x00010bf493c0(0xc034000000000000,lVar13,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar1;
          lStack_78 = lVar4;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar14;
          func_0x00010c274200(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010bf493a0(lVar5,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_70 = lVar7;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar9,param_2,puVar8);
          _objc_release(puVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar12);
          _objc_release(lVar13);
          puVar9 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
          _objc_alloc();
          func_0x00010c050900();
          lVar13 = (long)_DAT_112741208;
          uVar10 = *(undefined8 *)(param_1 + lVar13);
          *(undefined **)(param_1 + lVar13) = puVar9;
          _objc_release(uVar10);
          func_0x00010c178280(*(undefined8 *)(param_1 + lVar13),param_2,0);
          lVar11 = param_1 + lVar11;
          _objc_loadWeakRetained();
          func_0x00010bef9040();
          _objc_release(lVar11);
          func_0x00010c23ada0(PTR_PTR_1126c7c00,param_2,lVar1);
          func_0x00010be9ba20(param_1);
          if (*(long *)(param_1 + _DAT_1127411f8) != 0) {
            func_0x00010c1b4280(*(long *)(param_1 + _DAT_1127411f8),param_2,1);
          }
          func_0x00010c1b45c0(*(undefined8 *)(param_1 + lVar15),param_2,1);
        }
        _objc_release(lVar14);
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_1127411f0;
  lVar13 = *(long *)(lVar1 + lVar12);
  _objc_retain(lVar13);
  if (lVar13 != 0) {
    func_0x00010bfe2da0(PTR_PTR_1126c7c00,param_2,lVar13);
    if (*(long *)(lVar1 + lVar12) != 0) {
      func_0x00010c12c960();
      uVar10 = *(undefined8 *)(lVar1 + lVar12);
      *(undefined8 *)(lVar1 + lVar12) = 0;
      _objc_release(uVar10);
    }
    lVar12 = (long)_DAT_11274120c;
    if (*(long *)(lVar1 + lVar12) != 0) {
      func_0x00010c12c960();
      uVar10 = *(undefined8 *)(lVar1 + lVar12);
      *(undefined8 *)(lVar1 + lVar12) = 0;
      _objc_release(uVar10);
    }
    lVar12 = (long)_DAT_112741208;
    if (*(long *)(lVar1 + lVar12) != 0) {
      func_0x00010c12e920(*(long *)(lVar1 + lVar12),param_2,lVar1,
                          PTR_s__tapToDismissWidget__11252ec28);
      lVar14 = lVar1 + _DAT_1127411d4;
      _objc_loadWeakRetained(lVar14);
      func_0x00010c12c9c0();
      _objc_release(lVar14);
      uVar10 = *(undefined8 *)(lVar1 + lVar12);
      *(undefined8 *)(lVar1 + lVar12) = 0;
      _objc_release(uVar10);
    }
    if (*(long *)(lVar1 + _DAT_1127411f8) != 0) {
      func_0x00010c1b4280(*(long *)(lVar1 + _DAT_1127411f8),param_2,0);
    }
  }
  func_0x00010c1b45c0(*(undefined8 *)(lVar1 + _DAT_1127411e8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar13);
  return;
}



/* Entry: 106185a74; end: 106185b77; -[SCFeatureRingFlashImpl _dismissWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185a74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127411f0;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  if (lVar3 != 0) {
    func_0x00010bfe2da0(PTR_PTR_1126c7c00,param_2,lVar3);
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar1);
    }
    lVar4 = (long)_DAT_11274120c;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar1);
    }
    lVar4 = (long)_DAT_112741208;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12e920(*(long *)(param_1 + lVar4),param_2,param_1,
                          PTR_s__tapToDismissWidget__11252ec28);
      lVar2 = param_1 + _DAT_1127411d4;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12c9c0();
      _objc_release(lVar2);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar1);
    }
    if (*(long *)(param_1 + _DAT_1127411f8) != 0) {
      func_0x00010c1b4280(*(long *)(param_1 + _DAT_1127411f8),param_2,0);
    }
  }
  func_0x00010c1b45c0(*(undefined8 *)(param_1 + _DAT_1127411e8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106185b78; end: 106185d3f; -[SCFeatureRingFlashImpl _initializeFlashFeatureWidgetContextWithRingFlashState:] */

void FUN_106185b78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar2 = PTR_PTR_1126c86b8;
  _objc_alloc_init(PTR_PTR_1126c86b8);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106185d40;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c18ea40(puVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106185da8;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c194f80(puVar2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106185e14;
  puStack_d0 = &UNK_110912178;
  _objc_copyWeak(auStack_c0,auStack_68);
  uStack_c8 = param_1;
  func_0x00010c1d44c0(puVar2);
  _objc_copyWeak(auStack_f0,auStack_68);
  func_0x00010c1d3ea0(puVar2);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106185d40; end: 106185e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185d40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127411d4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c210720();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + _DAT_112741210) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106185e14; end: 106185f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185e14(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uStack_70 = 1;
    if (param_4 != 0) {
      uStack_70 = 2;
    }
    *(undefined8 *)(lVar2 + _DAT_112741174) = uStack_70;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106185f44;
    puStack_88 = &UNK_11084e430;
    lStack_80 = lVar2;
    uStack_78 = param_1;
    uStack_68 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106186080;
    puStack_b0 = &UNK_110842e18;
    lStack_a8 = lVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_c8);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bdc3f80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610a0(*(undefined8 *)(lVar2 + _DAT_1127411f0));
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106185f44; end: 10618607f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106185f44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(double *)(lVar5 + _DAT_11274117c) != *(double *)(param_1 + 0x28)) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741188),param_2,
                        puVar1);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uVar2 = *(undefined8 *)(lVar5 + _DAT_112741184);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c8690;
  _objc_alloc(PTR_PTR_1126c8690);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0401e0(puVar1,param_2,uVar6,puVar3,puVar4,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127411d0));
  func_0x00010c1ee3e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106186080; end: 106186087;  */

void FUN_106186080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleWidgetAutoDismiss_112584830);
  return;
}



/* Entry: 106186088; end: 106186277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106186088(long param_1,int param_2)

{
  float fVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  float fStack_68;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar6 = 1;
    if (param_2 != 0) {
      uVar6 = 2;
    }
    *(undefined8 *)(lVar2 + _DAT_112741174) = uVar6;
    puVar3 = PTR_PTR_1126c86c0;
    _objc_alloc(PTR_PTR_1126c86c0);
    lVar7 = lVar2;
    func_0x00010bdec1e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffbe0(puVar3);
    _objc_release(lVar7);
    fStack_68 = (float)*(double *)(lVar2 + _DAT_112741178);
    fVar1 = 0.0;
    if (param_2 != 0) {
      fVar1 = (float)*(double *)(lVar2 + _DAT_112741178);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(fVar1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203280(puVar3);
    _objc_release(puVar4);
    lVar7 = (long)_DAT_1127411f0;
    uVar5 = *(undefined8 *)(lVar2 + lVar7);
    func_0x00010c29d560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203280();
    _objc_release(uVar5);
    func_0x00010c2226c0(*(undefined8 *)(lVar2 + lVar7));
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106186278;
    puStack_80 = &UNK_1109121a8;
    lStack_78 = lVar2;
    uStack_70 = uVar6;
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    puStack_c0 = puVar4;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1061863b0;
    puStack_a8 = &UNK_110842e18;
    lStack_a0 = lVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_c0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdc3f80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7));
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106186278; end: 1061863af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106186278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(long *)(param_1 + 0x28) == 2) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741188),param_2,
                        puVar2);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741184);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8690;
  _objc_alloc(PTR_PTR_1126c8690);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274117c),
                      PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(*(undefined4 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0401e0(puVar2,param_2,uVar1,puVar4,puVar5,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127411d0));
  func_0x00010c1ee3e0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061863b0; end: 1061863b7;  */

void FUN_1061863b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleWidgetAutoDismiss_112584830);
  return;
}



/* Entry: 1061863b8; end: 1061864b7; -[SCFeatureRingFlashImpl _initializeFlashFeatureWidgetViewModelWithRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061863b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c86c0;
  _objc_alloc(PTR_PTR_1126c86c0);
  lVar2 = param_1;
  func_0x00010bdec1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffbe0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  if (param_3 == 2) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203280(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c203280(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4be8);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bdc5b40(param_1,param_2,param_3);
  func_0x00010c0df760(puVar3,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19dba0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061864b8; end: 1061865eb; -[SCFeatureRingFlashImpl _createFlashFeatureWidgetWithRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061864b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010be3b4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be3b500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c86c8;
  _objc_alloc(PTR_PTR_1126c86c8);
  lVar4 = param_1 + _DAT_112741144;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3,param_2,lVar2,lVar1,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bdc5b40(param_1,param_2,param_3);
  func_0x00010bdc3f80(param_1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610a0(puVar3,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c160fc0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f2c4f8);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061865ec; end: 10618676f; -[SCFeatureRingFlashImpl _createFlashFeatureWidgetV2WithRingFlashState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061865ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c86d0;
  _objc_alloc_init(PTR_PTR_1126c86d0);
  lVar2 = param_1;
  func_0x00010be3b4e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19db00(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c86d8;
  _objc_alloc_init(PTR_PTR_1126c86d8);
  lVar2 = param_1;
  func_0x00010be3b500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19db20(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c86e0;
  _objc_alloc(PTR_PTR_1126c86e0);
  lVar2 = param_1 + _DAT_112741144;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar4,param_2,puVar3,puVar1,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdc5b40(param_1,param_2,param_3);
  func_0x00010bdc3f80(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610a0(puVar4,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c160fc0(puVar4,param_2,&PTR____CFConstantStringClassReference_110f2c4f8);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106186770; end: 1061868ab; -[SCFeatureRingFlashImpl _createColorOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106186770(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111180128;
  func_0x00010bf529e0();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
    do {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180128;
      func_0x00010bf529e0();
      if (ppuVar3 <= ppuVar6) break;
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180128;
      func_0x00010c14da60(&PTR__OBJC_CLASS___NSConstantArray_111180128,param_3,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111180140;
      func_0x00010c14da60(&PTR__OBJC_CLASS___NSConstantArray_111180140,param_3,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0(ppuVar3);
      bVar1 = param_1 == *(double *)(param_2 + _DAT_11274117c);
      puVar5 = PTR_PTR_1126c86e8;
      _objc_alloc(PTR_PTR_1126c86e8);
      func_0x00010bf885a0(ppuVar3);
      func_0x00010bfffaa0(puVar5,param_3,bVar1,ppuVar4);
      func_0x00010befa120(puVar2,param_3,puVar5);
      ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180128;
      func_0x00010bf529e0();
    } while (ppuVar6 < ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061868ac; end: 106186983; -[SCFeatureRingFlashImpl _tapToDismissWidget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061868ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + _DAT_1127411f0);
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  lVar1 = param_3;
  func_0x00010c252440();
  _objc_release(param_3);
  if ((lVar1 == 3) && ((uVar3 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be03bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissWidget_11255e888);
    return;
  }
  return;
}



/* Entry: 106186984; end: 1061869af; -[SCFeatureRingFlashImpl _accessibilityValueSelected:] */

undefined ** FUN_106186984(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e434f8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e43518;
  if (param_3 != 1) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1061869b0; end: 1061869fb; -[SCFeatureRingFlashImpl _scheduleWidgetAutoDismiss] */

void FUN_1061869b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_s__dismissWidget_11255e888;
  func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                      PTR_s__dismissWidget_11255e888,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4010000000000000,param_1,PTR_s_performSelector_withObject_after_11261bdf0,puVar1,
             param_1);
  return;
}



/* Entry: 1061869fc; end: 106186bcf; -[SCFeatureRingFlashImpl _flashButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061869fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  lVar10 = (long)_DAT_112741214;
  *(undefined1 *)(param_1 + lVar10) = 0;
  lVar1 = param_1;
  func_0x00010be0c440();
  lVar9 = (long)_DAT_112741178;
  dVar11 = *(double *)(param_1 + lVar9);
  if (*(double *)(param_1 + lVar9) <= 0.30000001192092896) {
    dVar11 = 0.30000001192092896;
  }
  *(double *)(param_1 + lVar9) = dVar11;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741184);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8690;
  _objc_alloc(PTR_PTR_1126c8690);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + lVar9),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0401e0(puVar3,param_2,lVar1,puVar4,puVar5,*(undefined8 *)(param_1 + _DAT_1127411d0));
  func_0x00010c1ee3e0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  lVar9 = param_1;
  func_0x00010be40ac0();
  if ((int)lVar9 == 0) goto LAB_106186b64;
  uVar6 = *(ulong *)(param_1 + _DAT_112741168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf926c0();
  if ((uVar7 & 1) == 0) {
    _objc_release(uVar6);
LAB_106186bb4:
    func_0x00010bebbd00(param_1,param_2,lVar1);
  }
  else {
    lVar8 = *(long *)(param_1 + _DAT_112741130);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c08a960();
    _objc_release(lVar8);
    _objc_release(uVar6);
    if (lVar9 == 0) goto LAB_106186bb4;
  }
  if (lVar1 == 0) {
    func_0x00010be03ba0(param_1);
  }
LAB_106186b64:
  lVar1 = param_1 + _DAT_1127411e0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf3fb00();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + lVar10) = 1;
  return;
}



/* Entry: 106186bd0; end: 106186c37; -[SCFeatureRingFlashImpl _expectedRingFlashStateAfterTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106186bd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112741168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9c460();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__expectedRingFlashStateAfterTapV_112560ac0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__expectedRingFlashStateAfterTapV_112560ab8);
  return;
}



/* Entry: 106186c38; end: 106186ca3; -[SCFeatureRingFlashImpl _expectedRingFlashStateAfterTapV1] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106186c38(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + _DAT_11274115c) != 0) {
    return 0;
  }
  lVar1 = param_1;
  func_0x00010be40ac0();
  if ((int)lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_1127411d8);
    func_0x00010c078b40();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112741174);
    }
    else {
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 106186ca4; end: 106186e13; -[SCFeatureRingFlashImpl _expectedRingFlashStateAfterTapV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106186ca4(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1;
  func_0x00010be40ac0();
  if ((int)lVar5 == 0) {
    uVar3 = (ulong)(*(long *)(param_1 + _DAT_11274115c) == 0);
  }
  else {
    uVar3 = *(ulong *)(param_1 + _DAT_1127411d8);
    func_0x00010c078b40();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + _DAT_112741168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf9c460();
      _objc_release(lVar4);
      if (lVar5 < 4) {
        if (lVar5 - 2U < 2) {
          uVar3 = *(long *)(param_1 + _DAT_11274115c) + 2;
        }
        else {
          if (lVar5 != 1) {
            return 0xffffffffffffffff;
          }
          uVar3 = *(long *)(param_1 + _DAT_11274115c) + 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar3;
        uVar3 = uVar3 - ((SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                        uVar3 / 3);
      }
      else if (lVar5 == 4) {
        uVar6 = *(ulong *)(param_1 + _DAT_11274115c);
        uVar1 = 1;
        if (uVar6 != 2) {
          uVar1 = 2;
        }
        if (uVar6 != *(ulong *)(param_1 + _DAT_112741174)) {
          uVar1 = 0;
        }
        uVar3 = *(ulong *)(param_1 + _DAT_112741174);
        if (uVar6 != 0) {
          uVar3 = uVar1;
        }
      }
      else {
        if (lVar5 == 5) {
          lVar5 = *(long *)(param_1 + _DAT_11274115c);
          uVar3 = 3;
        }
        else {
          if (lVar5 != 6) {
            return 0xffffffffffffffff;
          }
          lVar5 = *(long *)(param_1 + _DAT_11274115c);
          uVar3 = 2;
        }
        if (lVar5 != 0) {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 106186e14; end: 106186e2b; -[SCFeatureRingFlashImpl _adaptRingflashStateToWidgetFlashSelection:] */

undefined4 FUN_106186e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 != 2) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 106186e2c; end: 106186e5f; -[SCFeatureRingFlashImpl _isRingFlashActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106186e2c(long param_1)

{
  if (*(long *)(param_1 + _DAT_11274115c) == 2) {
    return *(long *)(param_1 + _DAT_1127411fc) != 0;
  }
  return false;
}



/* Entry: 106186e60; end: 106186e73; -[SCFeatureRingFlashImpl getCurrentColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106186e60(long param_1)

{
  return (long)*(double *)(param_1 + _DAT_11274117c);
}



/* Entry: 106186e74; end: 106186e83; -[SCFeatureRingFlashImpl getCurrentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106186e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741178);
}



/* Entry: 106186e84; end: 106186eab; -[SCFeatureRingFlashImpl ringFlashAutoEnableTooltipDidShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106186e84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127411d8);
  func_0x00010c273fc0(lVar1);
  return 0 < lVar1;
}



/* Entry: 106186eac; end: 106186ed3; -[SCFeatureRingFlashImpl ringFlashDidAutoEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106186eac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127411d8);
  func_0x00010bf117c0(lVar1);
  return 0 < lVar1;
}



/* Entry: 106186ed4; end: 106186ee3; -[SCFeatureRingFlashImpl shouldDisablePageNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106186ed4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741210);
}



/* Entry: 106186ee4; end: 10618738b; -[SCFeatureRingFlashImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106186ee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = (long)_DAT_112741218;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10618738c;
    puStack_90 = &UNK_11086e3f0;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106187478;
    puStack_b8 = &UNK_11090d210;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106187564;
    puStack_e0 = &UNK_110872b30;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_106187650;
    puStack_108 = &UNK_11084e400;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,auStack_80);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10618738c; end: 10618742f;  */

void FUN_10618738c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106187430; end: 106187477;  */

void FUN_106187430(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcaa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106187478; end: 10618751b;  */

void FUN_106187478(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3960(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10618751c; end: 106187563;  */

void FUN_10618751c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc940();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106187564; end: 106187607;  */

void FUN_106187564(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106187608; end: 10618764f;  */

void FUN_106187608(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106187650; end: 10618774b;  */

void FUN_106187650(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10618774c;
  puStack_50 = &UNK_110872b00;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10618774c; end: 10618780f;  */

void FUN_10618774c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106187810; end: 106187843; -[SCFeatureRingFlashImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106187810(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741218;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106187844; end: 106187847;  */

void FUN_106187844(void)

{
  return;
}



/* Entry: 106187848; end: 10618787b;  */

void FUN_106187848(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618787c; end: 1061878af; -[SCFeatureRingFlashImpl stopObservingManagedDeviceCapacityAnalyzerEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618787c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274121c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061878b0; end: 10618795f; -[SCFeatureRingFlashImpl _didChangeCaptureDevicePosition:] */

void FUN_1061878b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106187938;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106187960; end: 106187a4f; -[SCFeatureRingFlashImpl _didChangeLensesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106187960(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be43560();
  if ((int)lVar1 == 0) {
    lVar4 = param_1 + _DAT_11274112c;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1d79c0();
  }
  else {
    func_0x000108cd79c4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11274112c;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1d79c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010c0841c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201980();
    _objc_release(lVar1);
  }
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112741164);
  func_0x00010bfa1820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106187a50; end: 106187b13; -[SCFeatureRingFlashImpl _didChangeRingFlashState:] */

void FUN_106187a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106187ad8;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106187b14; end: 106187c47; -[SCFeatureRingFlashImpl _didChangeLightingCondition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106187b14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010be0d580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127411d0;
  if (*(long *)(param_1 + lVar7) != lVar1) {
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741184);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c8690;
    _objc_alloc(PTR_PTR_1126c8690);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11274115c);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0401e0(puVar3,param_2,uVar6,puVar4,puVar5,*(undefined8 *)(param_1 + lVar7));
    func_0x00010c1ee3e0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106187c48; end: 106187ca3; -[SCFeatureRingFlashImpl _exposureDurationFactorFromLightingConditionType:] */

void FUN_106187c48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(param_3 + -1);
  if (ppuVar2 < (undefined **)0x3) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111180158;
    func_0x00010bf529e0();
    if (ppuVar2 < ppuVar1) {
      func_0x00010c14da60(&PTR__OBJC_CLASS___NSConstantArray_111180158,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106187ca4; end: 106187ff3; -[SCFeatureRingFlashImpl _handleCaptureDevicePositionChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106187ca4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = (long)_DAT_112741214;
  *(undefined1 *)(param_1 + lVar13) = 0;
  lVar11 = (long)_DAT_11274115c;
  lVar10 = *(long *)(param_1 + lVar11);
  lVar14 = (long)_DAT_1127411e8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar14);
  func_0x00010c07d660();
  if (iVar1 != 0) {
    func_0x00010c1cbd00(*(undefined8 *)(param_1 + lVar14));
  }
  if (param_3 == 0) {
    lVar3 = (long)_DAT_112741168;
    lVar4 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bf9c460();
    if (lVar11 == 0) {
      _objc_release(lVar4);
LAB_106187ebc:
      func_0x00010c1fb140(*(undefined8 *)(param_1 + lVar14),param_2,
                          &PTR____CFConstantStringClassReference_110e434b8);
    }
    else {
      lVar11 = *(long *)(param_1 + _DAT_112741174);
      _objc_release(lVar4);
      if (lVar11 != 2) goto LAB_106187ebc;
      uVar2 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010c1fb140(uVar2,param_2,&PTR____CFConstantStringClassReference_110e43498);
      func_0x00010619f8d4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar14),param_2,uVar2);
      _objc_release(uVar2);
    }
    lVar4 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar4;
    func_0x00010bf9c460();
    _objc_release(lVar4);
    if (lVar11 == 0) {
      func_0x00010c201380(*(undefined8 *)(param_1 + lVar14),param_2,0);
    }
    if (lVar10 == 0) goto LAB_106187fc4;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741184);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c8690;
    _objc_alloc(PTR_PTR_1126c8690);
    uVar8 = *(undefined8 *)(param_1 + _DAT_112741174);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127411d0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c1fb140(uVar2,param_2,&PTR____CFConstantStringClassReference_110e43538);
    func_0x00010619f8bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar14),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c1faec0(*(undefined8 *)(param_1 + lVar14),param_2,0);
    lVar12 = (long)_DAT_112741168;
    lVar3 = *(long *)(param_1 + lVar12);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf9c460();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      func_0x00010c201380(*(undefined8 *)(param_1 + lVar14),param_2,1);
    }
    func_0x00010be03ba0(param_1);
    if (lVar10 == 0) goto LAB_106187fc4;
    lVar4 = *(long *)(param_1 + lVar12);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bf9c460();
    _objc_release(lVar4);
    if (lVar10 != 0) {
      *(undefined8 *)(param_1 + _DAT_112741174) = *(undefined8 *)(param_1 + lVar11);
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741184);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c8690;
    _objc_alloc(PTR_PTR_1126c8690);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127411d0);
    uVar8 = 1;
  }
  func_0x00010c0401e0(puVar5,param_2,uVar8,puVar6,puVar7,uVar9);
  func_0x00010c1ee3e0(uVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
LAB_106187fc4:
  func_0x00010c1cbd60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  *(undefined1 *)(param_1 + lVar13) = 1;
  return;
}



/* Entry: 106187ff4; end: 1061884cf; -[SCFeatureRingFlashImpl _handleRingFlashStateChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106187ff4(double param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_4);
  ppuVar2 = param_4;
  func_0x00010c141120();
  lVar9 = (long)_DAT_11274115c;
  ppuVar10 = *(undefined ***)(param_2 + lVar9);
  if (((ulong)ppuVar10 & 0xfffffffffffffffe) == 2 && ((ulong)ppuVar2 & 0xfffffffffffffffe) != 2) {
    *(long *)(param_2 + _DAT_1127411c8) = *(long *)(param_2 + _DAT_1127411c8) + 1;
  }
  if (ppuVar10 == ppuVar2) goto LAB_106188270;
  *(undefined ***)(param_2 + lVar9) = ppuVar2;
  lVar9 = (long)_DAT_1127411e8;
  func_0x00010c1ee420(*(undefined8 *)(param_2 + lVar9),param_3,ppuVar2);
  func_0x00010bf73560(*(undefined8 *)(param_2 + _DAT_1127411ec),param_3,ppuVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010befa120(*(undefined8 *)(param_2 + _DAT_11274118c),param_3,puVar4);
  if ((long)ppuVar2 < 2) {
    if (ppuVar2 == (undefined **)0x0) {
      func_0x00010bea3fe0(param_2,param_3,0,0);
      func_0x00010be03320(param_2);
    }
    else if (ppuVar2 == (undefined **)0x1) {
      func_0x00010bea3fe0(param_2,param_3,1,1);
      func_0x00010be03320(param_2);
      lVar5 = *(long *)(param_2 + _DAT_112741168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bf9c460();
      if (lVar8 == 0) {
        _objc_release(lVar5);
      }
      else {
        lVar8 = param_2;
        func_0x00010be40ac0();
        _objc_release(lVar5);
        if ((int)lVar8 != 0) {
          uVar6 = *(undefined8 *)(param_2 + lVar9);
          func_0x00010c1fb140(uVar6,param_3,&PTR____CFConstantStringClassReference_110e434b8);
          func_0x00010619f8bc();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1fb640(*(undefined8 *)(param_2 + lVar9),param_3,uVar6);
          _objc_release(uVar6);
          func_0x00010c1cbd60(*(undefined8 *)(param_2 + lVar9),param_3,1);
        }
      }
    }
  }
  else {
    if (ppuVar2 == (undefined **)0x2) {
      func_0x00010bea3fe0(param_2,param_3,1,2);
      func_0x00010bebab00(param_2);
      lVar5 = *(long *)(param_2 + _DAT_112741168);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010bf9c460();
      _objc_release(lVar5);
      if (lVar8 != 0) {
        uVar6 = *(undefined8 *)(param_2 + lVar9);
        func_0x00010c1fb140(uVar6,param_3,&PTR____CFConstantStringClassReference_110e43498);
        func_0x00010619f8d4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb640(*(undefined8 *)(param_2 + lVar9),param_3,uVar6);
        _objc_release(uVar6);
        func_0x00010c1cbd60(*(undefined8 *)(param_2 + lVar9),param_3,1);
      }
    }
    else {
      if (ppuVar2 != (undefined **)0x3) goto LAB_106188268;
      func_0x00010bea3fe0(param_2,param_3,1,3);
      func_0x00010bebab00(param_2);
    }
    *(long *)(param_2 + _DAT_1127411dc) = *(long *)(param_2 + _DAT_1127411dc) + 1;
  }
LAB_106188268:
  _objc_release(puVar4);
LAB_106188270:
  ppuVar7 = param_4;
  func_0x00010c089da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantArray_111180128;
    func_0x00010c14da60(&PTR__OBJC_CLASS___NSConstantArray_111180128,param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = param_4;
    func_0x00010c089da0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf885a0();
  lVar11 = (long)_DAT_11274117c;
  *(double *)(param_2 + lVar11) = param_1;
  _objc_release(ppuVar7);
  lVar5 = (long)_DAT_112741178;
  dVar13 = *(double *)(param_2 + lVar5);
  ppuVar7 = param_4;
  func_0x00010c089d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar12 = param_1;
  _objc_release(ppuVar7);
  ppuVar7 = param_4;
  func_0x00010c089d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  *(double *)(param_2 + lVar5) = dVar12;
  _objc_release(ppuVar7);
  lVar8 = *(long *)(param_2 + _DAT_112741168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf9c460();
  _objc_release(lVar8);
  if (lVar9 - 1U < 4) {
    *(undefined8 *)(param_2 + lVar5) = *(undefined8 *)(&UNK_10ddd9c28 + (lVar9 - 1U) * 8);
  }
  lVar9 = param_2;
  func_0x00010be975a0();
  bVar1 = 0.1 <= ABS(dVar13 - param_1);
  if ((int)lVar9 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,
                        (long)*(double *)(param_2 + lVar11));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedeb80(*(undefined8 *)(param_2 + lVar5),param_2,param_3,puVar3,bVar1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be71360(param_2,param_3,ppuVar10 != ppuVar2,bVar1);
  }
  lVar9 = param_2;
  func_0x00010beb5820();
  if ((int)lVar9 != 0) {
    lVar9 = param_2;
    func_0x00010be975a0();
    if ((int)lVar9 == 0) {
      lVar9 = (long)_DAT_112741130;
      uVar6 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8ee0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8ea0();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8ec0();
      _objc_release(uVar6);
    }
    else {
      func_0x00010be71320(param_2);
    }
  }
  param_2 = param_2 + _DAT_112741194;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0d9840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061884d0; end: 106188517; -[SCFeatureRingFlashImpl _ringFlashDidChangeStatePerfOptimizationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061884d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741168);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141020();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106188518; end: 10618858b; -[SCFeatureRingFlashImpl _shouldSaveRingFlashSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106188518(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741168);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf926c0();
  if (((int)uVar3 == 0) || (lVar4 = param_1, func_0x00010be40ac0(), (int)lVar4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + _DAT_11274115c) != 0;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 10618858c; end: 106188783; -[SCFeatureRingFlashImpl _perfOptimizationUpdateRingFlashBorderIfNeeded:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618858c(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  lVar9 = param_1;
  func_0x00010be975a0();
  if ((int)lVar9 != 0) {
    lVar9 = (long)_DAT_1127411fc;
    puVar6 = *(undefined **)(param_1 + lVar9);
    if (puVar6 != (undefined *)0x0) {
      lVar2 = (long)_DAT_112741220;
      lVar4 = (long)_DAT_112741224;
      lVar3 = (long)_DAT_112741178;
      lVar5 = (long)_DAT_11274117c;
      dVar12 = *(double *)(param_1 + lVar4);
      dVar11 = *(double *)(param_1 + lVar3);
      uVar1 = param_3;
      if (*(double *)(param_1 + lVar2) != *(double *)(param_1 + lVar5)) {
        uVar1 = 1;
      }
      if (((uVar1 & 1) != 0) || (dVar12 != dVar11)) {
        if (((param_3 & 1) != 0) || (puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70, dVar12 != dVar11)
           ) {
          func_0x00010bf35280(puVar6,param_2,param_4);
          puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        }
        PTR__OBJC_CLASS___UIColor_1126aea70 = puVar8;
        if (uVar1 != 0) {
          func_0x00010bf41580(puVar8,param_2,(long)*(double *)(param_1 + lVar5));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf35260(*(undefined8 *)(param_1 + lVar9),param_2,puVar8);
          puVar6 = PTR_PTR_1126b9aa0;
          func_0x00010c06e120();
          uVar7 = 0x3feb333340000000;
          if ((int)puVar6 == 0) {
            uVar7 = 0x3ff0000000000000;
          }
          puVar6 = puVar8;
          func_0x00010bf414e0(uVar7,puVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = param_1 + _DAT_11274112c;
          _objc_loadWeakRetained(lVar9);
          func_0x00010c1d7a40();
          _objc_release(lVar9);
          _objc_release(puVar6);
          _objc_release(puVar8);
          puVar6 = puVar8;
        }
        if (param_3 != 0) {
          func_0x000108cd79c4();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = (long)_DAT_11274112c;
          lVar9 = param_1 + lVar10;
          _objc_loadWeakRetained(lVar9);
          func_0x00010c1d79c0();
          _objc_release(lVar9);
          _objc_release(puVar6);
          lVar10 = param_1 + lVar10;
          _objc_loadWeakRetained(lVar10);
          lVar9 = lVar10;
          func_0x00010c0841c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c201980();
          _objc_release(lVar9);
          _objc_release(lVar10);
          uVar7 = *(undefined8 *)(param_1 + _DAT_112741164);
          func_0x00010bfa1820(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c287360();
          _objc_release(uVar7);
        }
        *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_1 + lVar5);
        *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_1 + lVar3);
      }
    }
  }
  return;
}



/* Entry: 106188784; end: 1061887bf; -[SCFeatureRingFlashImpl _perfOptimizationShouldDeferSettingsWrite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106188784(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010be975a0();
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_112741210);
  }
  return bVar2 & 1;
}



/* Entry: 1061887c0; end: 106188907; -[SCFeatureRingFlashImpl _perfOptimizationSaveLastUsedRingFlashSettingsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061887c0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 auStack_58 [8];
  
  uVar6 = param_1;
  func_0x00010be975a0();
  if ((((int)uVar6 != 0) && (uVar6 = param_1, func_0x00010be71340(), (uVar6 & 1) == 0)) &&
     (uVar6 = param_1, func_0x00010beb5820(), (int)uVar6 != 0)) {
    lVar2 = (long)_DAT_11274122c;
    lVar9 = *(long *)(param_1 + (long)_DAT_112741228);
    lVar7 = (long)_DAT_11274115c;
    lVar8 = *(long *)(param_1 + lVar7);
    dVar12 = *(double *)(param_1 + lVar2);
    lVar1 = (long)_DAT_112741178;
    lVar3 = (long)_DAT_11274117c;
    dVar13 = *(double *)(param_1 + lVar3);
    lVar10 = (long)_DAT_112741230;
    dVar14 = *(double *)(param_1 + lVar10);
    dVar15 = *(double *)(param_1 + lVar1);
    bVar4 = false;
    if ((lVar9 == lVar8) && (bVar4 = false, !NAN(dVar12) && !NAN(dVar13))) {
      bVar4 = dVar12 == dVar13;
    }
    bVar5 = false;
    if ((bVar4) && (bVar5 = false, !NAN(dVar14) && !NAN(dVar15))) {
      bVar5 = dVar14 == dVar15;
    }
    if (!bVar5) {
      *(long *)(param_1 + (long)_DAT_112741228) = lVar8;
      *(double *)(param_1 + lVar2) = dVar13;
      uVar16 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar10) = uVar16;
      uVar11 = *(undefined8 *)(param_1 + lVar7);
      uVar17 = *(undefined8 *)(param_1 + lVar3);
      _objc_initWeak(auStack_58,param_1);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106188908;
      puStack_88 = &UNK_110912268;
      _objc_copyWeak(auStack_80,auStack_58);
      uStack_78 = uVar11;
      uStack_70 = uVar17;
      uStack_68 = uVar16;
      uStack_60 = lVar9 != lVar8;
      uStack_5f = dVar12 != dVar13;
      uStack_5e = dVar14 != dVar15;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_58);
    }
  }
  return;
}



/* Entry: 106188908; end: 1061889e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106188908(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112741130);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8ee0();
      _objc_release(uVar2);
    }
    if (*(char *)(param_1 + 0x41) == '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112741130);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8ea0();
      _objc_release(uVar2);
    }
    if (*(char *)(param_1 + 0x42) == '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112741130);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8ec0();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061889e8; end: 1061889ef; -[SCFeatureRingFlashImpl modeEnabledStateChangedObservable] */

undefined8 FUN_1061889e8(void)

{
  return 0;
}



/* Entry: 1061889f0; end: 106188acf; -[SCFeatureRingFlashImpl disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061889f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741184);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8690;
  _objc_alloc(PTR_PTR_1126c8690);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0401e0(puVar2,param_2,0,puVar3,puVar4,*(undefined8 *)(param_1 + _DAT_1127411d0));
  func_0x00010c1ee3e0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106188ad0; end: 106188adb; -[SCFeatureRingFlashImpl incompatibleModes] */

undefined * FUN_106188ad0(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106188adc; end: 106188ae3; -[SCFeatureRingFlashImpl isHidden] */

undefined8 FUN_106188adc(void)

{
  return 0;
}



/* Entry: 106188ae4; end: 106188aeb; -[SCFeatureRingFlashImpl modeType] */

undefined8 FUN_106188ae4(void)

{
  return 0xb;
}



/* Entry: 106188aec; end: 106188c07; -[SCFeatureRingFlashImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106188aec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar1 == param_3) {
    lVar1 = param_1;
    func_0x00010be0c440(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741184);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c8690;
    _objc_alloc(PTR_PTR_1126c8690);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0401e0(puVar3,param_2,lVar1,puVar4,puVar5,*(undefined8 *)(param_1 + _DAT_1127411d0)
                       );
    func_0x00010c1ee3e0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106188c08; end: 106188c0b; -[SCFeatureRingFlashImpl secondaryOnTap:] */

void FUN_106188c08(void)

{
  return;
}



/* Entry: 106188c0c; end: 106188c23; -[SCFeatureRingFlashImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106188c0c(long param_1)

{
  return *(long *)(param_1 + _DAT_11274115c) != 0;
}



/* Entry: 106188c24; end: 106188c2b; -[SCFeatureRingFlashImpl secondaryButtonState] */

undefined8 FUN_106188c24(void)

{
  return 0;
}



/* Entry: 106188c2c; end: 106188c2f; -[SCFeatureRingFlashImpl toolbarButtonPositionDidChange:] */

void FUN_106188c2c(void)

{
  return;
}



/* Entry: 106188c30; end: 106188c3f; -[SCFeatureRingFlashImpl ringFlashDisableCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106188c30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741124);
}



/* Entry: 106188c40; end: 106188f23; -[SCFeatureRingFlashImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106188c40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741200,0);
  _objc_storeStrong(param_1 + _DAT_1127411b8,0);
  _objc_storeStrong(param_1 + _DAT_1127411cc,0);
  _objc_destroyWeak(param_1 + _DAT_1127411a0);
  _objc_storeStrong(param_1 + _DAT_1127411a4,0);
  _objc_storeStrong(param_1 + _DAT_1127411ec,0);
  _objc_storeStrong(param_1 + _DAT_1127411d8,0);
  _objc_storeStrong(param_1 + _DAT_112741168,0);
  _objc_destroyWeak(param_1 + _DAT_1127411ac);
  _objc_storeStrong(param_1 + _DAT_11274118c,0);
  _objc_storeStrong(param_1 + _DAT_112741188,0);
  _objc_storeStrong(param_1 + _DAT_11274119c,0);
  _objc_storeStrong(param_1 + _DAT_112741154,0);
  _objc_storeStrong(param_1 + _DAT_112741150,0);
  _objc_storeStrong(param_1 + _DAT_112741184,0);
  _objc_storeStrong(param_1 + _DAT_1127411d0,0);
  _objc_storeStrong(param_1 + _DAT_1127411f8,0);
  _objc_storeStrong(param_1 + _DAT_1127411e8,0);
  _objc_storeStrong(param_1 + _DAT_112741170,0);
  _objc_destroyWeak(param_1 + _DAT_11274116c);
  _objc_destroyWeak(param_1 + _DAT_1127411b0);
  _objc_storeStrong(param_1 + _DAT_112741148,0);
  _objc_storeStrong(param_1 + _DAT_112741198,0);
  _objc_storeStrong(param_1 + _DAT_112741164,0);
  _objc_storeStrong(param_1 + _DAT_112741128,0);
  _objc_destroyWeak(param_1 + _DAT_112741134);
  _objc_storeStrong(param_1 + _DAT_112741158,0);
  _objc_storeStrong(param_1 + _DAT_11274114c,0);
  _objc_storeStrong(param_1 + _DAT_112741130,0);
  _objc_destroyWeak(param_1 + _DAT_1127411f4);
  _objc_destroyWeak(param_1 + _DAT_112741140);
  _objc_destroyWeak(param_1 + _DAT_11274113c);
  _objc_destroyWeak(param_1 + _DAT_112741138);
  _objc_destroyWeak(param_1 + _DAT_112741144);
  _objc_destroyWeak(param_1 + _DAT_11274112c);
  _objc_destroyWeak(param_1 + _DAT_1127411d4);
  _objc_destroyWeak(param_1 + _DAT_1127411e0);
  _objc_destroyWeak(param_1 + _DAT_112741194);
  _objc_destroyWeak(param_1 + _DAT_112741190);
  _objc_storeStrong(param_1 + _DAT_112741218,0);
  _objc_storeStrong(param_1 + _DAT_1127411e4,0);
  _objc_storeStrong(param_1 + _DAT_112741160,0);
  _objc_storeStrong(param_1 + _DAT_11274121c,0);
  _objc_storeStrong(param_1 + _DAT_112741208,0);
  _objc_storeStrong(param_1 + _DAT_11274120c,0);
  _objc_storeStrong(param_1 + _DAT_1127411f0,0);
  _objc_storeStrong(param_1 + _DAT_1127411c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127411fc,0);
  return;
}



/* Entry: 106188f24; end: 106188f2f; -[SCFeatureSettingsService isRingFlashEnabledCountAvailable] */

void FUN_106188f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e435b8);
  return;
}



/* Entry: 106188f30; end: 106188f3b; -[SCFeatureSettingsService ringFlashEnabledCountServerParam] */

undefined ** FUN_106188f30(void)

{
  return &PTR____CFConstantStringClassReference_110e435b8;
}



/* Entry: 106188f3c; end: 106188f4b; -[SCFeatureSettingsService setRingFlashEnabledCount:] */

void FUN_106188f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e435b8,param_3);
  return;
}



/* Entry: 106188f4c; end: 106188f53; -[SCFeatureSettingsService ring_flash_enabled_count_client_value:] */

void FUN_106188f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106188f54; end: 106188f5b; -[SCFeatureSettingsService ring_flash_enabled_count_server_value:] */

void FUN_106188f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106188f5c; end: 106188f6b; -[SCFeatureSettingsService ringFlashEnabledCount] */

void FUN_106188f5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e435b8,0);
  return;
}



/* Entry: 106188f6c; end: 106188f77; -[SCFeatureSettingsService hasRingFlashWidgetTooltipShownCount] */

void FUN_106188f6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e435d8);
  return;
}


