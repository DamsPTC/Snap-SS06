/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10701d570; end: 10701d667;  */

void FUN_10701d570(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf529e0();
    if (uVar1 != 0) {
      uVar1 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c079580();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_2;
        func_0x00010bfaea40(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(uVar1);
        _objc_release(puVar3);
      }
    }
    func_0x00010bed32c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10701d668; end: 10701d6ef;  */

void FUN_10701d668(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c079580(lVar1);
    }
    func_0x00010bed32e0(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10701d6f0; end: 10701d73f;  */

void FUN_10701d6f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c090900(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10701d740; end: 10701d85f; -[SCMemoriesSideButtonInLeftCarouselHandler lensCarouselDidScroll:] */

void FUN_10701d740(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c075140();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_10701d840;
  }
  func_0x00010bf49220(*(undefined8 *)(param_2 + 0x18));
  dVar3 = *(double *)(param_2 + 0x70);
  dVar4 = -dVar3;
  func_0x00010bf4cdc0(param_4);
  dVar4 = dVar4 - dVar3;
  func_0x00010c181140(*(undefined8 *)(param_2 + 0x18));
  func_0x00010bf49220(*(undefined8 *)(param_2 + 0x18));
  if (ABS(param_1 - dVar4) <= *(double *)(param_2 + 0x70) * 0.5) {
    func_0x00010c1cbf40(*(undefined8 *)(param_2 + 0x10));
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10701d860;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_2;
    func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,
                        &puStack_68,0);
  }
LAB_10701d840:
  _objc_release(param_4);
  return;
}



/* Entry: 10701d860; end: 10701d897;  */

void FUN_10701d860(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701d898; end: 10701d93f; -[SCMemoriesSideButtonInLeftCarouselHandler isTransitioningToMemoriesGallery] */

void FUN_10701d898(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10701d940; end: 10701d9b7;  */

void FUN_10701d940(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189ac0();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701d9b8; end: 10701d9cf; -[SCMemoriesSideButtonInLeftCarouselHandler _updateAppearanceIfNeededWithLensCarouselAvailable:] */

void FUN_10701d9b8(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x40) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x40) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdce290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyHiddenState_112551240);
  return;
}



/* Entry: 10701d9d0; end: 10701da37; -[SCMemoriesSideButtonInLeftCarouselHandler _updateAppearanceIfNeededWithNonOriginalLensActive:] */

void FUN_10701d9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((uint)*(byte *)(param_1 + 0x41) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + 0x41) = (char)param_3;
  func_0x00010bdce280();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10701da38; end: 10701da5f; -[SCMemoriesSideButtonInLeftCarouselHandler hiddenForActiveLensObservable] */

void FUN_10701da38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10701da60; end: 10701db63; -[SCMemoriesSideButtonInLeftCarouselHandler _isDatePastLabelCooldownPeriod:] */

bool FUN_10701da60(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf65000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf44660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar4;
  func_0x00010bfe4740();
  if ((long)puVar5 < 0) {
    bVar1 = false;
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x68);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067fc0();
    bVar1 = puVar7 <= puVar5;
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 10701db64; end: 10701dbcb; -[SCMemoriesSideButtonInLeftCarouselHandler updateThumbnailForYearEndRecap:] */

void FUN_10701db64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if ((int)param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e98b78);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bee2100(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10701dbcc; end: 10701dcd7; -[SCMemoriesSideButtonInLeftCarouselHandler _updateThumbnailWithImage:isActive:] */

void FUN_10701dbcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = PTR_PTR_1126d4170;
    _objc_alloc();
    func_0x00010c04ecc0();
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10701dcd8;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    puStack_48 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10701dcd8; end: 10701dd13;  */

void FUN_10701dcd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c28afc0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10701dd14; end: 10701ddcf; -[SCMemoriesSideButtonInLeftCarouselHandler .cxx_destruct] */

void FUN_10701dd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10701ddd0; end: 10701de4b; -[SCFeatureMemoriesSideButtonImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ddd0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_1126a5910;
  lVar4 = (long)_DAT_112762aac;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010bf29020(*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10701de4c; end: 10701ded3; -[SCFeatureMemoriesSideButtonImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701de4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_DAT_1126a5910;
  lVar4 = (long)_DAT_112762aac;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c176280(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10701ded4; end: 10701df4f; -[SCFeatureMemoriesSideButtonImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ded4(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f8400;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10701df50; end: 10701dfef; -[SCFeatureMemoriesSideButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701df50(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112762a94);
  func_0x00010c06f880();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010c09c440(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762aac);
  func_0x00010c0c9880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28af80();
  _objc_release(uVar2);
  if (*(char *)(param_1 + _DAT_112762abc) == '\x01') {
    func_0x00010c0e10c0(param_1);
  }
  func_0x00010c0e1080(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e1230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_observeYearEndRecapStatus_112615ea0);
  return;
}



/* Entry: 10701dff0; end: 10701e047; -[SCFeatureMemoriesSideButtonImpl _addTooltipWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701dff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762aac);
  _objc_retain(param_3);
  func_0x00010c0c9880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701e048; end: 10701e05f;  */

void FUN_10701e048(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10701e060; end: 10701e17b; -[SCFeatureMemoriesSideButtonImpl observeYearEndRecapStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e060(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar6 = (long)_DAT_112762a94;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2bee00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_112762ac4);
    *(undefined8 *)(param_1 + _DAT_112762ac4) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10701e17c; end: 10701e217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e17c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112762ac0) = (char)uVar1;
    if (*(char *)(param_1 + _DAT_112762ab8) == '\x01') {
      lVar3 = (long)_DAT_112762aac;
      uVar2 = *(ulong *)(param_1 + lVar3);
      _objc_opt_respondsToSelector(uVar2,PTR_s_updateThumbnailForYearEndRecap__1126805f8);
      if ((uVar2 & 1) != 0) {
        func_0x00010c28af40(*(undefined8 *)(param_1 + lVar3));
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10701e218; end: 10701e4d7; -[SCFeatureMemoriesSideButtonImpl observeSpectaclesAppStatusChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e218(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar7 = (long)_DAT_112762a94;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010c06f880();
  if (((uVar2 & 1) == 0) && ((*(byte *)(param_1 + _DAT_112762abc) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112762abc) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e10c0();
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0c98e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10701e4d8;
    puStack_78 = &UNK_110988af8;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar5 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112762ac8);
    *(undefined8 *)(param_1 + _DAT_112762ac8) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c236100();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10701e520;
    puStack_a0 = &UNK_110988b28;
    _objc_copyWeak(auStack_98,auStack_68);
    uVar5 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112762acc);
    *(undefined8 *)(param_1 + _DAT_112762acc) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c2740a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_68);
    uVar5 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112762ad0);
    *(undefined8 *)(param_1 + _DAT_112762ad0) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 10701e4d8; end: 10701e51f;  */

void FUN_10701e4d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becef80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701e520; end: 10701e633;  */

void FUN_10701e520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06fc80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010becca40();
    _objc_release(param_1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10701e634; end: 10701e667;  */

void FUN_10701e634(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010becca40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701e668; end: 10701e77b;  */

void FUN_10701e668(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain();
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06fc80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdc8cc0();
    _objc_release(param_1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10701e77c; end: 10701e7af;  */

void FUN_10701e77c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701e7b0; end: 10701e8eb; -[SCFeatureMemoriesSideButtonImpl observeSnapFeedAppearing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e7b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a94);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c240f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112762ad4);
  *(undefined8 *)(param_1 + _DAT_112762ad4) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10701e8ec; end: 10701e967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e8ec(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (uVar1 & 1) == 0)) {
    lVar2 = (long)_DAT_112762aac;
    uVar1 = *(ulong *)(param_1 + lVar2);
    _objc_opt_respondsToSelector(uVar1,PTR_s_isTransitioningToMemoriesGallery_1125fe018);
    if ((uVar1 & 1) != 0) {
      func_0x00010c081820(*(undefined8 *)(param_1 + lVar2));
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10701e968; end: 10701e9b7; -[SCFeatureMemoriesSideButtonImpl isTransitioningGallery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e968(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a94);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701e9b8; end: 10701e9ff; -[SCFeatureMemoriesSideButtonImpl didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701e9b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762aac;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_isTransitioningToMemoriesGallery_1125fe018);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c081830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_isTransitioningToMemoriesGallery_1125fe018);
    return;
  }
  return;
}



/* Entry: 10701ea00; end: 10701ea63; -[SCFeatureMemoriesSideButtonImpl hiddenForActiveLensObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ea00(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762aac;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_hiddenForActiveLensObservable_1125d5eb8);
  if ((uVar1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126ae820);
    func_0x00010c060400();
  }
  else {
    func_0x00010bfe13e0(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10701ea64; end: 10701eac7; -[SCFeatureMemoriesSideButtonImpl setMemoriesSideButtonVisible:forced:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ea64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762aac;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_setMemoriesSideButtonVisible_for_11264f358);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1c64d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setMemoriesSideButtonVisible_for_11264f358,
               param_3,param_4);
    return;
  }
  return;
}



/* Entry: 10701eac8; end: 10701eb13; -[SCFeatureMemoriesSideButtonImpl shouldShowTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701eac8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112762aac;
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar1,PTR_s_shouldShowTextLabel_11266ab98);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2345d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_shouldShowTextLabel_11266ab98);
    return uVar2;
  }
  return 0;
}



/* Entry: 10701eb14; end: 10701eb73; -[SCFeatureMemoriesSideButtonImpl _transitionButtonWithNewSpectaclesState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701eb14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762aac);
  _objc_retain(param_3);
  func_0x00010c0c9880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a000();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701eb74; end: 10701ebcb; -[SCFeatureMemoriesSideButtonImpl _toggleButtonBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701eb74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762aac);
  _objc_retain(param_3);
  func_0x00010c0c9880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701ebcc; end: 10701ec1b; -[SCFeatureMemoriesSideButtonImpl recentThumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ebcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10701ec1c; end: 10701ed83; -[SCFeatureMemoriesSideButtonImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10701ec1c(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  
  lVar6 = (long)_DAT_112762aac;
  lVar1 = *(long *)(param_3 + lVar6);
  dVar7 = param_1;
  func_0x00010c0c9880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
LAB_10701ecd8:
    uVar5 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_3 + lVar6);
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c074c20();
    if ((uVar5 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c0c9880(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf01b40();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (dVar7 == 0.0) goto LAB_10701ecd8;
      uVar4 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c0c9880(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3 + _DAT_112762ab4;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf51200(param_1,param_2,uVar4,param_4,lVar1);
      _objc_release(lVar1);
      _objc_release(uVar4);
      uVar2 = *(ulong *)(param_3 + lVar6);
      func_0x00010c0c9880(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c102b20(param_1,param_2);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
  return uVar5;
}



/* Entry: 10701ed84; end: 10701ee23; -[SCFeatureMemoriesSideButtonImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ed84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 in_x4;
  long lVar3;
  long lVar4;
  
  _objc_retain(in_x4);
  puVar1 = PTR_DAT_1126a5918;
  lVar4 = (long)_DAT_112762aac;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c177560(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 10701ee24; end: 10701ef3b; -[SCFeatureMemoriesSideButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ee24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762ad8,0);
  _objc_destroyWeak(param_1 + _DAT_112762adc);
  _objc_storeStrong(param_1 + _DAT_112762aa4,0);
  _objc_storeStrong(param_1 + _DAT_112762aa0,0);
  _objc_storeStrong(param_1 + _DAT_112762a9c,0);
  _objc_storeStrong(param_1 + _DAT_112762a98,0);
  _objc_storeStrong(param_1 + _DAT_112762aac,0);
  _objc_storeStrong(param_1 + _DAT_112762ac4,0);
  _objc_storeStrong(param_1 + _DAT_112762ad4,0);
  _objc_storeStrong(param_1 + _DAT_112762ad0,0);
  _objc_storeStrong(param_1 + _DAT_112762acc,0);
  _objc_storeStrong(param_1 + _DAT_112762ac8,0);
  _objc_storeStrong(param_1 + _DAT_112762a94,0);
  _objc_storeStrong(param_1 + _DAT_112762a90,0);
  _objc_storeStrong(param_1 + _DAT_112762ab0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112762ab4);
  return;
}



/* Entry: 10701ef3c; end: 10701f113; -[SCMemoriesSideButtonImpl setState:animated:completion:] */

void FUN_10701ef3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10701f018;
  puStack_68 = &UNK_110864938;
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10701f114; end: 10701f127;  */

void FUN_10701f114(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010701f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10701f128; end: 10701f223; -[SCMemoriesSideButtonImpl toggleFeaturedBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701f128(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2371c0();
  lVar3 = param_3;
  func_0x00010bfda140();
  lVar4 = param_3;
  func_0x00010bf151a0();
  _objc_release(param_3);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = 3;
  }
  lVar4 = 2;
  if ((int)lVar3 == 0) {
    lVar4 = lVar1;
  }
  if ((int)lVar2 != 0) {
    lVar4 = 1;
  }
  if (lVar4 - 2U < 2) {
    uVar6 = 1;
  }
  else {
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112762ae8);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2360a0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beccb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleDefaultBadge__112590c70,uVar6);
  return;
}



/* Entry: 10701f224; end: 10701f287; -[SCMemoriesSideButtonImpl toggleBlueDotStyleBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701f224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762ae8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88,0x6b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2360a0(uVar2,param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10701f288; end: 10701f483; -[SCMemoriesSideButtonImpl toggleImportIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701f288(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112762afc;
  lVar1 = *(long *)(param_1 + lVar10);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar3);
    func_0x00010befbb60(param_1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1408a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493c0(0xc01c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(lVar1);
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + lVar10);
  }
  func_0x00010c1a7f60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c06d030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + _DAT_112762ae8),PTR_s_isBadgeVisible_1125f8e18);
  return;
}



/* Entry: 10701f484; end: 10701f493; -[SCMemoriesSideButtonImpl isDisplayingFeaturedBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701f484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06d030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762ae8),PTR_s_isBadgeVisible_1125f8e18);
  return;
}



/* Entry: 10701f494; end: 10701f643; -[SCMemoriesSideButtonImpl configureWithRecentThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701f494(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if ((1 < uVar1) && ((param_1[_DAT_112762aec] & 1) == 0)) {
    lVar2 = *(long *)(param_1 + _DAT_112762af0);
    func_0x00010bf70fe0();
    uVar1 = param_3;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfc28;
    _objc_opt_class(PTR_PTR_1126bfc28);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      puVar3 = param_1;
      func_0x00010c26e580(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(puVar3);
      puVar3 = param_1;
      if (lVar2 == 1) {
        func_0x00010be1a2a0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_opt_class(param_1);
        func_0x00010be37200();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      uVar1 = param_3;
      func_0x00010c0dfd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c26e580(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar1);
      if (lVar2 != 1) goto LAB_10701f62c;
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(param_1);
    _objc_release(puVar3);
  }
LAB_10701f62c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10701f644; end: 10701faab; -[SCMemoriesSideButtonImpl updateThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701f644(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b0 [32];
  double dStack_90;
  
  uVar2 = param_5 + _DAT_112762af4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c122660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = *(long *)(param_5 + _DAT_112762af0);
  func_0x00010bf70fe0();
  if (lVar4 == 1) {
    lVar4 = param_5;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(lVar4);
    uVar2 = uVar3;
    func_0x00010bf529e0();
    if (1 < uVar2) {
      uVar2 = uVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar7 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar6);
      _objc_release(uVar2);
      if ((uVar7 & 1) != 0) {
        uVar2 = uVar3;
        func_0x00010c0dfd20(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_5;
        func_0x00010c26e580(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        _objc_release(lVar4);
        _objc_release(uVar2);
      }
    }
    _CGAffineTransformMakeRotation(auStack_b0,0x3fbf46bb9c109324);
    lVar4 = param_5;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar4);
    dVar11 = *(double *)PTR__CGPointZero_110347540;
    uVar9 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010bf258c0(param_5);
    func_0x00010bf20c00(param_5);
    dVar10 = dStack_90;
    _CGRectGetWidth();
    _CGRectGetWidth(dVar11,uVar9,param_3,param_4);
    fVar8 = (float)(int)((dVar10 - dVar11) * 50.0) / 100.0;
    dVar11 = (double)(ulong)(uint)fVar8;
    func_0x00010bebbf80(dVar11,param_5);
    dVar12 = dVar11 + (double)fVar8;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar10 = dVar12;
    _CGRectGetHeight(dVar12,uVar9,param_3,param_4);
    dVar10 = (double)((float)(int)((dVar11 - dVar10) * 50.0) / 100.0) + 1.0;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = param_5;
    _objc_opt_class();
    iVar1 = (int)lVar4;
    func_0x00010bebea40();
    if (iVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_5;
      func_0x00010c0bc1a0(param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_5;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ca0();
    _objc_release(lVar5);
    if (iVar1 != 0) {
      _objc_release(lVar4);
    }
    uVar2 = uVar3;
    func_0x00010bf529e0();
    if (uVar2 != 0) {
      uVar2 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar7 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar6);
      _objc_release(uVar2);
      if ((uVar7 & 1) != 0) {
        uVar2 = uVar3;
        func_0x00010bfb1920(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_5;
        func_0x00010c26e580(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        _objc_release(lVar4);
        _objc_release(uVar2);
      }
    }
    lVar4 = param_5;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    param_3 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960();
    _objc_release(lVar4);
    dVar11 = *(double *)PTR__CGPointZero_110347540;
    uVar9 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010c23b6a0(param_5);
    dVar10 = param_3;
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    _CGRectGetWidth(dVar11,uVar9,param_3,param_4);
    dVar10 = dVar10 - dVar11;
    dVar12 = dVar10 * 0.5;
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar11 = dVar12;
    _CGRectGetHeight(dVar12,uVar9,param_3,param_4);
    dVar10 = (dVar10 - dVar11) * 0.5;
    func_0x00010c26e580(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19f0e0(dVar12,dVar10,param_3,param_4);
  _objc_release(param_5);
  _objc_release(uVar3);
  return;
}



/* Entry: 10701faac; end: 10701fcc7; -[SCMemoriesSideButtonImpl addTooltipWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701faac(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) ||
     (puVar1 = param_3, func_0x00010c08fa60(), puVar1 == (undefined *)0x0)) {
    func_0x00010be8db00(param_1);
  }
  else {
    lVar12 = (long)_DAT_112762b00;
    uVar2 = *(ulong *)(param_1 + lVar12);
    if (uVar2 != 0) {
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      puVar4 = param_3;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_10701fc84;
    }
    func_0x00010be8db00(param_1);
    puVar4 = PTR_PTR_1126b09c0;
    _objc_alloc();
    func_0x00010c051640();
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar4;
    _objc_release(uVar11);
    func_0x00010befbb60(param_1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(param_1);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
LAB_10701fc84:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + _DAT_112762ae8),PTR_s_updateWithConfig__112680ba0);
    return;
  }
  return;
}



/* Entry: 10701fcc8; end: 10701fcdf; -[SCMemoriesSideButtonImpl updateThumbnailViewWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701fcc8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112762ae8),PTR_s_updateWithConfig__112680ba0);
    return;
  }
  return;
}



/* Entry: 10701fce0; end: 10701fd5f; -[SCMemoriesSideButtonImpl specStateImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701fce0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112762b04;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10701fd60; end: 10701fecf; -[SCMemoriesSideButtonImpl maskImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701fd60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = (long)_DAT_112762b08;
  if (*(long *)(param_3 + lVar5) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110e98cb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar4,param_4,puVar1);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    *(undefined **)(param_3 + lVar5) = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar6 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010c23b6a0(param_3);
    func_0x00010c19f0e0(uVar3,uVar6,param_1,param_2,*(undefined8 *)(param_3 + lVar5));
  }
  lVar2 = *(long *)(param_3 + _DAT_112762af0);
  func_0x00010c116320();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar2 == 2) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110e98cd8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                          &PTR____CFConstantStringClassReference_110e98cb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar5),param_4,puVar4);
      _objc_release(puVar4);
      puVar4 = (undefined *)0x0;
      goto LAB_10701fea0;
    }
  }
  else {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                        &PTR____CFConstantStringClassReference_110e98cb8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_3 + lVar5),param_4,puVar4);
LAB_10701fea0:
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_3 + lVar5);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10701fed0; end: 10701ffa3; -[SCMemoriesSideButtonImpl thumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701fed0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = (long)_DAT_112762b0c;
  lVar2 = *(long *)(param_3 + lVar3);
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar4 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar5 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010c23b660(param_3);
    func_0x00010c013de0(uVar4,uVar5,param_1,param_2);
    uVar4 = *(undefined8 *)(param_3 + lVar3);
    *(undefined **)(param_3 + lVar3) = puVar1;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)(param_3 + lVar3),param_4,2);
    uVar4 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0xbff0000000000000);
    _objc_release(uVar4);
    func_0x00010befbb60(param_3,param_4,*(undefined8 *)(param_3 + lVar3));
    lVar2 = *(long *)(param_3 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10701ffa4; end: 10702006f; -[SCMemoriesSideButtonImpl shapeMaskView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ffa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112762b10;
  lVar4 = *(long *)(param_3 + lVar5);
  if (lVar4 == 0) {
    func_0x00010c23b660();
    puVar1 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    *(undefined **)(param_3 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010bf258c0(param_3);
    uVar3 = 0;
    _CGPathCreateWithRect(0);
    uVar2 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar2);
    _CGPathRelease(uVar3);
    lVar4 = *(long *)(param_3 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107020070; end: 1070200a3; -[SCMemoriesSideButtonImpl buttonShapeMaskViewPathRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107020070(void)

{
  return 0x4016000000000000;
}



/* Entry: 1070200a4; end: 1070200af; -[SCMemoriesSideButtonImpl buttonFeaturedBadgeSize] */

undefined1  [16] FUN_1070200a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4024000000000000;
  auVar1._0_8_ = 0x4024000000000000;
  return auVar1;
}



/* Entry: 1070200b0; end: 1070200d3; -[SCMemoriesSideButtonImpl sideButtonThumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070200b0(void)

{
  return;
}



/* Entry: 1070200d4; end: 1070200f7; -[SCMemoriesSideButtonImpl sideButtonNewThumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070200d4(void)

{
  return;
}



/* Entry: 1070200f8; end: 1070200ff; -[SCMemoriesSideButtonImpl _sideButtonThumbnailViewXOffset] */

undefined8 FUN_1070200f8(void)

{
  return 0x4018000000000000;
}



/* Entry: 107020100; end: 10702014b; +[SCMemoriesSideButtonImpl _spectaclesDeviceStateImageForState:] */

void FUN_107020100(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf70fe0();
  if (param_3 - 3U < 3) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        (&PTR_PTR_110988b88)[param_3 - 3U]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10702014c; end: 10702016f; +[SCMemoriesSideButtonImpl _spectaclesStateRequiresMasking:] */

bool FUN_10702014c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf70fe0(param_3);
  return param_3 - 2U < 4;
}



/* Entry: 107020170; end: 10702025f; +[SCMemoriesSideButtonImpl _imageForSpectaclesState:] */

void FUN_107020170(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *unaff_x20;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf70fe0();
  if (lVar1 - 2U < 4) {
    lVar1 = param_3;
    func_0x00010c116320();
    if (lVar1 == 2) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e98cf8);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        unaff_x20 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e98bb8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar2);
        unaff_x20 = puVar2;
      }
      _objc_release(puVar2);
      goto LAB_107020244;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110e98bb8;
  }
  else {
    if (lVar1 != 1) goto LAB_107020244;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e98c58;
  }
  unaff_x20 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_107020244:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 107020260; end: 1070202b7; +[SCMemoriesSideButtonImpl _shouldAnimateStateEntryFromState:toState:] */

bool FUN_107020260(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf70fe0();
  if (lVar2 == 1) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf70fe0(param_3);
    bVar1 = lVar2 == 2;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1070202b8; end: 107020313; +[SCMemoriesSideButtonImpl _requiresIconUpdateFromState:toState:] */

bool FUN_1070202b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010bf70fe0();
  if (param_3 == 1) {
    bVar1 = true;
  }
  else {
    lVar2 = param_4;
    func_0x00010bf70fe0(param_4);
    bVar1 = lVar2 == 1;
  }
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 107020314; end: 107020493; -[SCMemoriesSideButtonImpl _configureViewFromState:toState:animated:completion:] */

void FUN_107020314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  func_0x00010bebe980();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = *(double *)PTR__CGPointZero_110347540;
  uVar6 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010c23d0a0();
  uVar2 = param_3;
  func_0x00010c248220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar4,uVar6,param_1,param_2);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_3);
  _CGRectGetMidX();
  dVar3 = dVar4;
  func_0x00010c23b6a0(param_3);
  dVar4 = dVar4 - dVar3 * 0.5;
  dVar3 = -2.5;
  dVar5 = dVar4 + -2.5;
  func_0x00010bf20c00(param_3);
  _CGRectGetMidY();
  func_0x00010c23b6a0(param_3);
  uVar2 = param_3;
  func_0x00010c248220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar5,(dVar4 - dVar3 * 0.5) + 2.0);
  _objc_release(uVar2);
  func_0x00010be71540(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107020494; end: 107020e3f; -[SCMemoriesSideButtonImpl _performAnimationsFromState:toState:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107020494(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  int iVar1;
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
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010bf01b40(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  lVar14 = param_1;
  _objc_opt_class();
  iVar1 = (int)lVar14;
  func_0x00010be91ec0();
  puVar10 = PTR_PTR_1126d4190;
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x3fb0e5604189374c;
    if (param_5 == 0) {
      uVar15 = 0;
    }
    puVar4 = PTR_PTR_1126d41a0;
    func_0x00010c2a1440(uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d41a8;
    puVar5 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45c40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126d4198;
    _objc_retain(param_4);
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d41a8;
    puVar3 = PTR_PTR_1126d4190;
    puVar5 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45c40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar8 = PTR_PTR_1126d4190;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(param_4);
    _objc_release(puVar10);
  }
  puVar10 = PTR_PTR_1126d4198;
  _objc_retain(param_4);
  func_0x00010bf61a20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  _objc_opt_class();
  iVar1 = (int)lVar14;
  func_0x00010beb2700();
  puVar3 = PTR_PTR_1126d4198;
  if (iVar1 == 0) {
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d4190;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266c20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010befa120(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x3fb0e5604189374c;
    if (param_5 == 0) {
      uVar15 = 0;
    }
    uVar16 = 0x3fc10624dd2f1aa0;
    if (param_5 == 0) {
      uVar16 = 0;
    }
    puVar5 = PTR_PTR_1126d41a0;
    func_0x00010c2a1440(uVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d41a0;
    func_0x00010c2a1440(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d4198;
    func_0x00010bf61a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4190;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010befa120(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar8);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d4190;
  func_0x00010c266c20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d41b0;
  _objc_alloc();
  func_0x00010c035820();
  lVar14 = (long)_DAT_112762b14;
  uVar15 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar8;
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + lVar14);
  _objc_retain(param_6);
  func_0x00010c24dd40(uVar15);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar15 = 0x3fb0e5604189374c;
  if (*(char *)(param_3 + 0x28) == '\0') {
    uVar15 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar15,puVar10);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107020e40; end: 107020f1b;  */

void FUN_107020e40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fb0e5604189374c;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107020f1c; end: 107020f8b;  */

void FUN_107020f1c(long param_1,undefined8 param_2)

{
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
  
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,0x3ff0a3d700000000,0x3ff0a3d700000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 107020f8c; end: 107020f97;  */

void FUN_107020f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107020f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107020f98; end: 107021073;  */

void FUN_107020f98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc53f7ced916873;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021074; end: 1070210e3;  */

void FUN_107021074(long param_1,undefined8 param_2)

{
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
  
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,0x3fc99999a0000000,0x3fc99999a0000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 1070210e4; end: 1070210ef;  */

void FUN_1070210e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070210ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1070210f0; end: 1070211cb;  */

void FUN_1070210f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc53f7ced916873;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1070211cc; end: 1070211e3;  */

void FUN_1070211cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1070211e4; end: 10702125f;  */

void FUN_1070211e4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_opt_class(uVar1);
  func_0x00010be37200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
  func_0x00010c28af80(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107021260; end: 10702133b;  */

void FUN_107021260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc53f7ced916873;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10702133c; end: 1070213ab;  */

void FUN_10702133c(long param_1,undefined8 param_2)

{
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
  
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,0x3ff07ae140000000,0x3ff07ae140000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 1070213ac; end: 1070213b7;  */

void FUN_1070213ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070213b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1070213b8; end: 10702149b;  */

void FUN_1070213b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc53f7ced916873;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10702149c; end: 1070214b3;  */

void FUN_10702149c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1070214b4; end: 10702158f;  */

void FUN_1070214b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fb999999999999a;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021590; end: 1070215ff;  */

void FUN_107021590(long param_1,undefined8 param_2)

{
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
  
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,0x3feeb851e0000000,0x3feeb851e0000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 107021600; end: 10702160b;  */

void FUN_107021600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107021608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10702160c; end: 1070216e7;  */

void FUN_10702160c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fb999999999999a;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 1070216e8; end: 107021753;  */

void FUN_1070216e8(long param_1,undefined8 param_2)

{
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
  
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&uStack_50,0x3ff0000000000000,0x3ff0000000000000,&uStack_80);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 107021754; end: 10702175f;  */

void FUN_107021754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010702175c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107021760; end: 1070217eb;  */

void FUN_107021760(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_opt_class(uVar2);
  func_0x00010bebe980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c248220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
  _objc_release(uVar2);
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070217ec; end: 10702183b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070217ec(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762b04);
  _objc_retain(param_2);
  func_0x00010c1677c0(0,uVar1);
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10702183c; end: 107021917;  */

void FUN_10702183c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fb999999999999a;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021918; end: 10702193b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762b04),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10702193c; end: 107021a17;  */

void FUN_10702193c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fa0e5604189374c;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021a18; end: 107021a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762b04),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107021a3c; end: 107021b17;  */

void FUN_107021a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fb999999999999a;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021b18; end: 107021b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762b04),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107021b3c; end: 107021c17;  */

void FUN_107021b3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc53f7ced916873;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021c18; end: 107021c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762b04),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107021c3c; end: 107021d17;  */

void FUN_107021c3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = 0x3fc10624dd2f1aa0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  _objc_retain(param_2);
  func_0x00010bf03420(uVar2,puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 107021d18; end: 107021d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107021d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762b04),
             PTR_s_setAlpha__112637810);
  return;
}


