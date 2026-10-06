/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061da9c8; end: 1061daae7; -[SCFeatureLensFeedImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061da9c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274282c);
  _objc_destroyWeak(param_1 + _DAT_11274286c);
  _objc_destroyWeak(param_1 + _DAT_112742870);
  _objc_storeStrong(param_1 + _DAT_112742860,0);
  _objc_storeStrong(param_1 + _DAT_112742864,0);
  _objc_storeStrong(param_1 + _DAT_112742874,0);
  _objc_storeStrong(param_1 + _DAT_11274284c,0);
  _objc_storeStrong(param_1 + _DAT_112742838,0);
  _objc_storeStrong(param_1 + _DAT_112742868,0);
  _objc_storeStrong(param_1 + _DAT_112742858,0);
  _objc_storeStrong(param_1 + _DAT_112742830,0);
  _objc_storeStrong(param_1 + _DAT_11274285c,0);
  _objc_storeStrong(param_1 + _DAT_112742848,0);
  _objc_destroyWeak(param_1 + _DAT_112742850);
  _objc_storeStrong(param_1 + _DAT_112742844,0);
  _objc_storeStrong(param_1 + _DAT_112742840,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274283c,0);
  return;
}



/* Entry: 1061daae8; end: 1061dab57;  */

void FUN_1061daae8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a0e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061dab58; end: 1061dab9b; -[SCFeatureLensInfoButtonImpl dealloc] */

void FUN_1061dab58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec2e00();
  puStack_28 = PTR_PTR_1126f0420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061dab9c; end: 1061dabeb; -[SCFeatureLensInfoButtonImpl navigationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dab9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742878);
  func_0x00010c0d6760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061dabec; end: 1061dabfb; -[SCFeatureLensInfoButtonImpl volumeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dabec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127428b4),PTR_s_feature_1125c5fb0);
  return;
}



/* Entry: 1061dabfc; end: 1061dae9f; -[SCFeatureLensInfoButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dabfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar8 = (long)_DAT_1127428bc;
  if (*(long *)(param_1 + lVar8) == 0) {
    _objc_initWeak(auStack_78,param_1);
    lVar9 = (long)_DAT_1127428ac;
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef1060();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_1127428a4;
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061daea0;
    puStack_88 = &UNK_110842a38;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b6bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127428c0);
    *(undefined8 *)(param_1 + _DAT_1127428c0) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bdeeb60(param_1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  return;
}



/* Entry: 1061daea0; end: 1061daef7;  */

void FUN_1061daea0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    func_0x00010be4a5e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061daef8; end: 1061daf6f;  */

void FUN_1061daef8(long param_1,long param_2)

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
      func_0x00010bdfc200(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061daf70; end: 1061db06f; -[SCFeatureLensInfoButtonImpl pointInsideLensInfoButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061daf70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5;
  uVar3 = param_1;
  uVar4 = param_2;
  func_0x00010bfed960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bfed960(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf51460(uVar2,param_6,0);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if (*(long *)(param_5 + (long)_DAT_1127428c4) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bfed960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      _CGRectContainsPoint(uVar3,uVar4,param_3,param_4,param_1,param_2);
    }
    else {
      uVar2 = 0;
    }
    _objc_release(param_5);
  }
  return uVar2;
}



/* Entry: 1061db070; end: 1061db13b; -[SCFeatureLensInfoButtonImpl updateState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db070(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + _DAT_1127428c4) != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1061db108;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1061db13c; end: 1061db173; -[SCFeatureLensInfoButtonImpl setReplyParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127428c8);
  *(undefined8 *)(param_1 + _DAT_1127428c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061db174; end: 1061db1a3; -[SCFeatureLensInfoButtonImpl infoButtonHiddenObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db174(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742880);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061db1a4; end: 1061db1d3; -[SCFeatureLensInfoButtonImpl infoButtonLensObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db1a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742884);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061db1d4; end: 1061db203; -[SCFeatureLensInfoButtonImpl infoButtonTapObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db1d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742888);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061db204; end: 1061db213; -[SCFeatureLensInfoButtonImpl infoButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfed970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127428c4),PTR_s_infoButtonView_1125d9020);
  return;
}



/* Entry: 1061db214; end: 1061db223; -[SCFeatureLensInfoButtonImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db214(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274289c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be4a5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__lensCarouselEnabled__112570318);
  return;
}



/* Entry: 1061db224; end: 1061db23b; -[SCFeatureLensInfoButtonImpl _isAttributionAutoHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061db224(long param_1)

{
  return 2 < *(ulong *)(param_1 + _DAT_11274287c);
}



/* Entry: 1061db23c; end: 1061db287; -[SCFeatureLensInfoButtonImpl _lensCarouselEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db23c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x00010bec2e00();
  func_0x00010bec3080(param_1);
  func_0x00010be35860(param_1,param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127428cc);
  *(undefined8 *)(param_1 + _DAT_1127428cc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061db288; end: 1061db39f; -[SCFeatureLensInfoButtonImpl _didActivateLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db288(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c079580();
  if (((((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c072c60(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_3, func_0x00010c070f60(), (uVar2 & 1) == 0)) &&
     (uVar2 = param_3, func_0x00010c077cc0(), (uVar2 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010c072b00();
    iVar1 = (int)uVar2;
  }
  else {
    iVar1 = 1;
  }
  if (*(char *)(param_1 + _DAT_11274289c) == '\x01' && iVar1 != 0) {
    lVar5 = (long)_DAT_1127428cc;
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar5));
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(ulong *)(param_1 + lVar5) = param_3;
      _objc_release(uVar3);
      func_0x00010bec3080(param_1);
      func_0x00010bec2e00(param_1);
      if (param_3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + _DAT_1127428a8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c2339c0();
        _objc_release(uVar4);
        if ((int)uVar3 != 0) {
          func_0x00010beb96e0(param_1);
          goto LAB_1061db380;
        }
      }
      func_0x00010be35860(param_1,param_2,0);
    }
  }
LAB_1061db380:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061db3a0; end: 1061db57f; -[SCFeatureLensInfoButtonImpl _createInfoButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db3a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_1127428c4;
  if (*(long *)(param_1 + lVar4) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126c8ac8;
    _objc_alloc();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bff5120();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    *(undefined1 *)(param_1 + _DAT_1127428d0) = 1;
    uVar3 = *(undefined8 *)(param_1 + _DAT_112742880);
    puVar1 = PTR_PTR_1126c8ad0;
    func_0x00010bf738a0(PTR_PTR_1126c8ad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar1);
    lVar4 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bdd9340(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfe12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a6a0(lVar2);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1061db580; end: 1061db5ab;  */

void FUN_1061db580(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061db5ac; end: 1061db6e3; -[SCFeatureLensInfoButtonImpl _didTapInfoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db5ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127428b0);
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfeda60();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentInfoCard_11257c960);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112742890);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83b20(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1061db6e4; end: 1061db717;  */

void FUN_1061db6e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7bf00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061db718; end: 1061db8f3; -[SCFeatureLensInfoButtonImpl _presentInfoCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061db718(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + (long)_DAT_1127428cc) != 0) {
    uVar1 = param_1;
    func_0x00010bfedaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07aae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010becd7c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 != 0) {
        uVar2 = param_1;
        func_0x00010c2a0de0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2560c0();
        _objc_release(uVar2);
        _objc_initWeak(auStack_58,param_1);
        uVar2 = param_1;
        func_0x00010bfedaa0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be39140(param_1);
        _objc_copyWeak(auStack_60,auStack_58);
        func_0x00010c10c800(uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112742888);
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar5);
        _objc_release(puVar4);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(uVar1);
    }
  }
  return;
}



/* Entry: 1061db8f4; end: 1061db93f;  */

void FUN_1061db8f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c2a0de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ee80();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061db940; end: 1061db9bf; -[SCFeatureLensInfoButtonImpl _infoCardSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061db940(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(long *)(param_1 + _DAT_11274287c) - 1;
  if (uVar3 < 0xd) {
    uVar3 = *(ulong *)(&UNK_10ddd9f10 + uVar3 * 8);
  }
  else {
    uVar3 = 1;
  }
  lVar4 = (long)_DAT_1127428c8;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c0f1ce0();
  uVar1 = uVar3 | 0x10;
  if (lVar2 != 0x2e) {
    uVar1 = uVar3;
  }
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c0f1ce0();
  uVar3 = uVar1 | 0x20;
  if (lVar2 != 0x36) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 1061db9c0; end: 1061dba6b; -[SCFeatureLensInfoButtonImpl _topViewController] */

void FUN_1061db9c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar2 != 0) {
    lVar3 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061dba6c; end: 1061dbcef; -[SCFeatureLensInfoButtonImpl _updateInfoButtonIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dba6c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_1127428cc;
  if (*(long *)(param_1 + lVar12) == 0) {
    return;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112742884));
  lVar2 = param_1;
  func_0x00010be4aee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar12);
  func_0x00010c07f200();
  if (iVar1 == 0) {
    lVar10 = param_1;
    func_0x00010be4b1c0();
    if ((int)lVar10 == 0) {
      uVar11 = 0;
      ppuVar3 = (undefined **)0x0;
    }
    else {
      ppuVar3 = *(undefined ***)(param_1 + lVar12);
      func_0x00010c0d4f60(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010bf43020(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010bf0ea80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010bf43020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c092080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078fa0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar6 = *(ulong *)(param_1 + lVar12);
    func_0x00010c06ecc0();
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar11);
      uVar11 = 0;
    }
    func_0x00010c283820(*(undefined8 *)(param_1 + _DAT_1127428c4));
    _objc_release(uVar11);
    goto LAB_1061dbcc8;
  }
  ppuVar3 = *(undefined ***)(param_1 + lVar12);
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e44778;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e44778,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar3);
    ppuVar7 = ppuVar3;
  }
  _objc_release(ppuVar3);
  ppuVar8 = *(undefined ***)(param_1 + _DAT_11274288c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bf917c0();
  ppuVar3 = ppuVar7;
  if ((int)ppuVar9 == 0) {
LAB_1061dbca0:
    _objc_release(ppuVar8);
  }
  else {
    lVar10 = *(long *)(param_1 + lVar12);
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar10);
    _objc_release(ppuVar8);
    if (lVar12 != 0) {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      goto LAB_1061dbca0;
    }
  }
  func_0x00010c283820(*(undefined8 *)(param_1 + _DAT_1127428c4));
LAB_1061dbcc8:
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1061dbcf0; end: 1061dbd23; -[SCFeatureLensInfoButtonImpl _stopAttributionSlugTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbcf0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127428d4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061dbd24; end: 1061dbe87; -[SCFeatureLensInfoButtonImpl _runAttributionSlugTimerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbd24(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar4 = &puStack_70;
  lVar2 = param_1;
  func_0x00010be3e3a0();
  if ((int)lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127428c4);
    func_0x00010bf2d640();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + _DAT_1127428cc);
      func_0x00010c0d3a80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar2 == 0) {
        _objc_initWeak(auStack_48,param_1);
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_1061dbe88;
        puStack_58 = &UNK_1108434b0;
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retainBlock(&puStack_70);
        puVar5 = PTR_PTR_1126ae888;
        _objc_alloc();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        func_0x00010c0522e0(0x400c000000000000);
        uVar6 = *(undefined8 *)(param_1 + _DAT_1127428d4);
        *(undefined **)(param_1 + _DAT_1127428d4) = puVar5;
        _objc_release(uVar6);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(ppuVar4);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  return;
}



/* Entry: 1061dbe88; end: 1061dbecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbe88(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c16b920(*(undefined8 *)(param_1 + _DAT_1127428c4),param_2,1,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061dbed0; end: 1061dbf5f; -[SCFeatureLensInfoButtonImpl hideAttributionIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbed0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = param_1;
  func_0x00010be3e3a0();
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)_DAT_1127428c4;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010bf2d640();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127428cc);
      func_0x00010c0d3a80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c16b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + lVar5),PTR_s_setAttributionHidden_animated_is_112638868
                   ,1,1,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 1061dbf60; end: 1061dbf93; -[SCFeatureLensInfoButtonImpl _stopInfoButtonShowingDelayTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbf60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127428d8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061dbf94; end: 1061dbfab; -[SCFeatureLensInfoButtonImpl _createPositionConstaintsIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbf94(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127428dc) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedd870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePositionConstraints_112594fc0);
  return;
}



/* Entry: 1061dbfac; end: 1061dc047; -[SCFeatureLensInfoButtonImpl _updatePositionConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dbfac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_1127428c4) != 0) {
    lVar1 = param_1;
    func_0x00010c104440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar3 = (long)_DAT_1127428dc;
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar1 = param_1;
      func_0x00010be762e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar1;
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8
                 ,*(undefined8 *)(param_1 + lVar3));
      return;
    }
  }
  return;
}



/* Entry: 1061dc048; end: 1061dc0c3; -[SCFeatureLensInfoButtonImpl hidableViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc048(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1 + _DAT_1127428b8;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126c85a8;
  _objc_opt_class(PTR_PTR_1126c85a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfe12e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061dc0c4; end: 1061dc123; -[SCFeatureLensInfoButtonImpl _cameraOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc0c4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = param_1 + _DAT_1127428b8;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126c85a8;
  _objc_opt_class(PTR_PTR_1126c85a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061dc124; end: 1061dc463; -[SCFeatureLensInfoButtonImpl _positionConstraintsForTopLeftLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc124(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *unaff_x20;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010c104440();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar2;
    func_0x00010c274540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (unaff_x20 == (undefined *)0x0) {
      unaff_x20 = PTR_PTR_1126c8ad8;
      _objc_alloc();
      puVar2 = puVar1;
      func_0x00010c274200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010bff2dc0(param_1 + 4.0);
      _objc_release(puVar2);
    }
    puVar2 = param_2;
    func_0x00010c104440();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    func_0x00010bf34880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = unaff_x22;
    func_0x00010bf02920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar8 = (long)_DAT_1127428c4;
    uVar3 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010bf34600();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c08e400(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x22;
      func_0x00010bf02920(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49220(unaff_x22);
    }
    unaff_x23 = uVar7;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010bf34600();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x20;
    func_0x00010bf02920(unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49220(unaff_x20);
    unaff_x24 = uVar7;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar3);
    func_0x00010bfed960();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c1408a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf49520(0xc04e000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_2);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = unaff_x24;
    uStack_78 = unaff_x23;
    puStack_70 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x20);
    puStack_a8 = puVar2;
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuVar6 = &puStack_f0;
    pcStack_88 = FUN_1061dc464;
    uStack_c0 = unaff_x24;
    uStack_b8 = unaff_x23;
    puStack_b0 = unaff_x22;
    puStack_a0 = unaff_x20;
    puStack_98 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_c8,puVar2);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1061dc57c;
    puStack_d8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retainBlock(&puStack_f0);
    puVar1 = PTR_PTR_1126ae888;
    _objc_alloc();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c0522e0(0x3fd0000000000000);
    uVar7 = *(undefined8 *)(puVar2 + _DAT_1127428d8);
    *(undefined **)(puVar2 + _DAT_1127428d8) = puVar1;
    _objc_release(uVar7);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(ppuVar6);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_a8);
  return;
}



/* Entry: 1061dc464; end: 1061dc57b; -[SCFeatureLensInfoButtonImpl _showInfoButtonWithDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc464(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1061dc57c;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  puVar2 = PTR_PTR_1126ae888;
  _objc_alloc();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010c0522e0(0x3fd0000000000000);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127428d8);
  *(undefined **)(param_1 + _DAT_1127428d8) = puVar2;
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061dc57c; end: 1061dc5b3;  */

void FUN_1061dc57c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb96c0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061dc5b4; end: 1061dc823; -[SCFeatureLensInfoButtonImpl _showInfoButtonAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc5b4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127428d0;
  if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
    func_0x00010bdf1b20(param_1);
    func_0x00010bed9a40(param_1);
    func_0x00010be7a300(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
    func_0x00010bdf1b20(param_1);
    func_0x00010bed9a40(param_1);
    func_0x00010be7a300(param_1);
    lVar1 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar5) = 0;
    lVar5 = (long)_DAT_112742880;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar3 = PTR_PTR_1126c8ad0;
    func_0x00010c2a5c40(PTR_PTR_1126c8ad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar3);
    if (param_3 != 0) {
      func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20);
      return;
    }
    lVar1 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puVar3 = PTR_PTR_1126c8ad0;
    func_0x00010bf738a0(PTR_PTR_1126c8ad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar3);
    lVar5 = param_1;
    func_0x00010bfed960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be97cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runAttributionSlugTimerIfNeeded_1125838c8);
  return;
}



/* Entry: 1061dc824; end: 1061dc85b;  */

void FUN_1061dc824(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfed960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061dc85c; end: 1061dc8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc85c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfed960(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742880);
    puVar2 = PTR_PTR_1126c8ad0;
    func_0x00010bf738a0(PTR_PTR_1126c8ad0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be97cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__runAttributionSlugTimerIfNeeded_1125838c8);
    return;
  }
  return;
}



/* Entry: 1061dc8f0; end: 1061dcacb; -[SCFeatureLensInfoButtonImpl _hideInfoButtonAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dc8f0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  *(undefined1 *)(param_1 + _DAT_1127428d0) = 1;
  lVar4 = param_1;
  func_0x00010bfed960();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010bfed960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_112742880;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_PTR_1126c8ad0;
  func_0x00010c2a5c40(PTR_PTR_1126c8ad0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1061dcacc;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1061dcb04;
    puStack_78 = &UNK_110841f20;
    lStack_70 = param_1;
    lStack_48 = param_1;
    func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,
                        &puStack_68,&puStack_90);
    return;
  }
  lVar1 = param_1;
  func_0x00010bfed960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_PTR_1126c8ad0;
  func_0x00010bf738a0(PTR_PTR_1126c8ad0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bfed960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061dcacc; end: 1061dcba3;  */

void FUN_1061dcacc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfed960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061dcba4; end: 1061dcc77; -[SCFeatureLensInfoButtonImpl _presentAttributionAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dcba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127428cc;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010bf43020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf0ea80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127428c4),
             PTR_s_setAttributionHidden_animated_is_112638868,0,param_3,1);
  return;
}



/* Entry: 1061dcc78; end: 1061dcceb; -[SCFeatureLensInfoButtonImpl _lensInfoButtonShouldShowAttributionSlug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061dcc78(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127428c8;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c131ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c1322e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1061dccec; end: 1061dce3f; -[SCFeatureLensInfoButtonImpl _lensIconFutureForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dccec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742894);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127428cc);
  func_0x00010bf4c6e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0943c0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061dce40;
  puStack_50 = &UNK_11084e010;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127428a4);
  puStack_48 = puVar4;
  _objc_retain();
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3,param_2,&puStack_68,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  puVar5 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061dce40; end: 1061dce9b;  */

void FUN_1061dce40(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  func_0x00010bf5c800(0x3ff3333333333333,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061dce9c; end: 1061dceab; -[SCFeatureLensInfoButtonImpl infoCardPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061dce9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127428e0);
}



/* Entry: 1061dceac; end: 1061dcecb; -[SCFeatureLensInfoButtonImpl positioningDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dceac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127428e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061dcecc; end: 1061dcedf; -[SCFeatureLensInfoButtonImpl setPositioningDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dcecc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127428e4,param_3);
  return;
}



/* Entry: 1061dcee0; end: 1061dd083; -[SCFeatureLensInfoButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dcee0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127428e4);
  _objc_storeStrong(param_1 + _DAT_1127428e0,0);
  _objc_storeStrong(param_1 + _DAT_1127428b0,0);
  _objc_storeStrong(param_1 + _DAT_112742890,0);
  _objc_storeStrong(param_1 + _DAT_1127428a4,0);
  _objc_storeStrong(param_1 + _DAT_11274288c,0);
  _objc_storeStrong(param_1 + _DAT_112742888,0);
  _objc_storeStrong(param_1 + _DAT_112742884,0);
  _objc_storeStrong(param_1 + _DAT_112742880,0);
  _objc_storeStrong(param_1 + _DAT_1127428ac,0);
  _objc_storeStrong(param_1 + _DAT_1127428a8,0);
  _objc_destroyWeak(param_1 + _DAT_112742898);
  _objc_storeStrong(param_1 + _DAT_1127428a0,0);
  _objc_storeStrong(param_1 + _DAT_112742894,0);
  _objc_storeStrong(param_1 + _DAT_1127428d4,0);
  _objc_storeStrong(param_1 + _DAT_1127428d8,0);
  _objc_storeStrong(param_1 + _DAT_1127428c0,0);
  _objc_storeStrong(param_1 + _DAT_1127428bc,0);
  _objc_storeStrong(param_1 + _DAT_1127428c8,0);
  _objc_storeStrong(param_1 + _DAT_1127428b4,0);
  _objc_storeStrong(param_1 + _DAT_1127428dc,0);
  _objc_storeStrong(param_1 + _DAT_1127428cc,0);
  _objc_storeStrong(param_1 + _DAT_1127428c4,0);
  _objc_storeStrong(param_1 + _DAT_112742878,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127428b8);
  return;
}



/* Entry: 1061dd084; end: 1061dd267; -[SCFeatureLensModularCarouselActivatorImpl initWithViewControllerLifecycleEvents:appearanceConfiguration:lensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061dd084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f0428;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127428e8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127428ec;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127428f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127428f0) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x00010bfad7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061dd268; end: 1061dd33f;  */

undefined1 FUN_1061dd268(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c15c0(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1061dd340; end: 1061dd363;  */

void FUN_1061dd340(void)

{
  return;
}



/* Entry: 1061dd364; end: 1061dd38f;  */

void FUN_1061dd364(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061dd390; end: 1061dd46b; -[SCFeatureLensModularCarouselActivatorImpl _viewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dd390(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127428ec;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126b1c00;
    _objc_alloc();
    puVar2 = PTR_PTR_1126b1c08;
    func_0x00010beffb20(PTR_PTR_1126b1c08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2e20(puVar1,param_2,0,puVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  puVar1 = PTR_PTR_1126b0240;
  _objc_alloc(PTR_PTR_1126b0240);
  func_0x00010bff0c60();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127428e8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0080();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061dd46c; end: 1061dd4bb; -[SCFeatureLensModularCarouselActivatorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dd46c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127428e8,0);
  _objc_storeStrong(param_1 + _DAT_1127428ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127428f0,0);
  return;
}



/* Entry: 1061dd4bc; end: 1061dd5c3; -[SCFeatureUnlockedLensSelectionImpl initWithLensCarouselManager:lensUnlocker:lensPerformerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061dd4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f0430;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127428f4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127428f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127428fc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742900);
    *(undefined **)((long)puVar1 + (long)_DAT_112742900) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061dd5c4; end: 1061dd5d3; -[SCFeatureUnlockedLensSelectionImpl lensUnlocker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dd5c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127428f8),PTR_s_target_112678178);
  return;
}



/* Entry: 1061dd5d4; end: 1061dd623; -[SCFeatureUnlockedLensSelectionImpl mainQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dd5d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127428fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061dd624; end: 1061dd897; -[SCFeatureUnlockedLensSelectionImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dd624(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f0430;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_activate_112599760);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112742900));
  _objc_initWeak(auStack_88,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127428f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0b6bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1061dd898;
  puStack_98 = &UNK_110842a38;
  _objc_copyWeak(auStack_90,auStack_88);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010c097b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c281720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e0ea0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_88);
  lVar8 = lVar7;
  func_0x00010c25ff60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 1061dd898; end: 1061dd927;  */

void FUN_1061dd898(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfea20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061dd928; end: 1061dda13; -[SCFeatureUnlockedLensSelectionImpl _didOpenLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dd928(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_PTR_1126b00f8;
  lVar5 = (long)_DAT_112742904;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 != 0) {
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1bf8;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bef0200(uVar2);
    func_0x00010bf32440(puVar3,param_2,uVar2);
    func_0x00010c158d00(puVar4,param_2,lVar1,0,puVar3,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127428f4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf08620();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1061dda14; end: 1061dda9f; -[SCFeatureUnlockedLensSelectionImpl _didUnlockLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dda14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112742904;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + _DAT_1127428f4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c10f660();
  _objc_release(lVar2);
  if (lVar3 == 2) {
    func_0x00010bdfea20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ddaa0; end: 1061ddb0f; -[SCFeatureUnlockedLensSelectionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ddaa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742904,0);
  _objc_storeStrong(param_1 + _DAT_112742900,0);
  _objc_storeStrong(param_1 + _DAT_1127428fc,0);
  _objc_storeStrong(param_1 + _DAT_1127428f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127428f4,0);
  return;
}



/* Entry: 1061ddb10; end: 1061ddc0b; -[SCLensInfoButtonV2Adapter initWithAttributionSlugEnabled:shadowEnabled:tapHandlerBlock:] */

undefined8 * FUN_1061ddb10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(in_x4);
  puStack_38 = PTR_PTR_1126f0438;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = in_x4;
    _objc_retainBlock();
    uVar3 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c8ae0;
    _objc_alloc();
    func_0x00010bff5100();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_retain(in_x4);
    func_0x00010c211be0(puVar1[1]);
    _objc_release(in_x4);
  }
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 1061ddc0c; end: 1061ddc1f;  */

void FUN_1061ddc0c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001061ddc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1061ddc20; end: 1061ddc47; -[SCLensInfoButtonV2Adapter infoButtonView] */

void FUN_1061ddc20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061ddc48; end: 1061ddc4f; -[SCLensInfoButtonV2Adapter centerAnchorView] */

void FUN_1061ddc48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_centerAnchorView_1125aab28);
  return;
}



/* Entry: 1061ddc50; end: 1061ddc57; -[SCLensInfoButtonV2Adapter canShowAttributionSlug] */

void FUN_1061ddc50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canShowAttributionSlug_1125a8f38);
  return;
}



/* Entry: 1061ddc58; end: 1061ddc87; -[SCLensInfoButtonV2Adapter setAttributionHidden:animated:isInfoButtonOverlayHidden:] */

void FUN_1061ddc58(long param_1)

{
  undefined8 in_x4;
  
  func_0x00010c16b900(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c1ac370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setInfoButtonOverlayHidden__112648b00,in_x4);
  return;
}



/* Entry: 1061ddc88; end: 1061dddaf; -[SCLensInfoButtonV2Adapter updateAttributionSlugWithLensName:creatorName:iconFuture:creatorImageHidden:] */

void FUN_1061ddc88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c283800(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = auStack_50;
  _objc_copyWeak(puVar1,auStack_48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061dddb0; end: 1061dddff;  */

void FUN_1061dddb0(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed9a60();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061dde00; end: 1061dde07; -[SCLensInfoButtonV2Adapter _updateInfoButtonImage:] */

void FUN_1061dde00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c286890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateInfoButtonWithImage__11267f448);
  return;
}



/* Entry: 1061dde08; end: 1061dde37; -[SCLensInfoButtonV2Adapter .cxx_destruct] */

void FUN_1061dde08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061dde38; end: 1061dde4b; +[SCLensesLayoutConsts lensCollectionsBackButtonSize] */

undefined1  [16] FUN_1061dde38(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4042000000000000;
  auVar1._0_8_ = 0x4049000000000000;
  return auVar1;
}



/* Entry: 1061dde4c; end: 1061dde5f; +[SCLensesLayoutConsts lensExplorerButtonSize] */

undefined1  [16] FUN_1061dde4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4042000000000000;
  auVar1._0_8_ = 0x4049000000000000;
  return auVar1;
}



/* Entry: 1061dde60; end: 1061dde67; +[SCLensesLayoutConsts lensDefaultUIEdgeOffset] */

undefined8 FUN_1061dde60(void)

{
  return 0x4024000000000000;
}



/* Entry: 1061dde68; end: 1061dde6f; +[SCLensesLayoutConsts lensUIOffsetFromCenter] */

undefined8 FUN_1061dde68(void)

{
  return 0x4014000000000000;
}



/* Entry: 1061dde70; end: 1061ddf3f; +[SCLensesLayoutConsts lensControlBackgroundColorWithStyle:] */

void FUN_1061dde70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fc3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3fd6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4a8c0(param_1,param_2,puVar2,puVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061ddf40; end: 1061de00f; +[SCLensesLayoutConsts lensControlBackgroundPressedColorWithStyle:] */

void FUN_1061ddf40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0(0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4a8c0(param_1,param_2,puVar2,puVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061de010; end: 1061de093; +[SCLensesLayoutConsts _lensControlColorWithLightColor:darkColor:controlStyle:] */

void FUN_1061de010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain();
  iVar1 = (int)uVar2;
  uVar2 = param_4;
  if ((param_5 != 2) && (uVar2 = param_3, param_5 != 1)) {
    if (param_5 != 0) goto LAB_1061de070;
    func_0x000100478f84();
    if (iVar1 == 0) {
      uVar2 = param_4;
    }
  }
  _objc_retain(uVar2);
LAB_1061de070:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061de094; end: 1061de2f3; -[SCFeatureLensSendToButtonImpl initWithDeeplinkSendToScopeExposer:layoutStrategy:lensInfoButtonVisibility:controlStyle:lensPerformerProvider:lensIconRepository:offPlatformLinkGenerationService:cameraUIServices:ringFlashInfoProvider:lensCarouselManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061de094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f0440;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112742910;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742914;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742918;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274291c) = param_6;
    lVar4 = (long)_DAT_112742920;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742924;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112742928,param_10);
    lVar4 = (long)_DAT_11274292c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742930;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112742934;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742938);
    *(undefined **)((long)puVar1 + (long)_DAT_112742938) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274293c) = 0;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061de2f4; end: 1061de303; -[SCFeatureLensSendToButtonImpl lensPerformerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061de2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742920),PTR_s_target_112678178);
  return;
}



/* Entry: 1061de304; end: 1061de3e3; -[SCFeatureLensSendToButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061de304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f0440;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_configureWithView__1125af8f0,param_3);
  lVar3 = (long)_DAT_112742940;
  if (*(long *)(param_1 + lVar3) == 0) {
    lVar4 = (long)_DAT_112742910;
    func_0x00010bf47d20(*(undefined8 *)(param_1 + lVar4));
    puVar1 = PTR_PTR_1126c8ae8;
    func_0x00010bf58bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c08ccc0(*(undefined8 *)(param_1 + lVar4));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061de3e4; end: 1061de43b; -[SCFeatureLensSendToButtonImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061de3e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0440;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_activate_112599760);
  if (*(long *)(param_1 + _DAT_11274293c) == 0) {
    func_0x00010bec0980(param_1);
  }
  return;
}



/* Entry: 1061de43c; end: 1061de4a3; -[SCFeatureLensSendToButtonImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061de43c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112742938));
  if (param_3 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112742940),param_2,1);
    uVar1 = 2;
  }
  else {
    func_0x00010bec0980(param_1);
    uVar1 = 1;
  }
  *(undefined8 *)(param_1 + _DAT_11274293c) = uVar1;
  return;
}



/* Entry: 1061de4a4; end: 1061de50b; -[SCFeatureLensSendToButtonImpl pointInsideSendToButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061de4a4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742940;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((uVar1 != 0) && (func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfb68e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return uVar2;
  }
  return 0;
}



/* Entry: 1061de50c; end: 1061de59f; -[SCFeatureLensSendToButtonImpl didDismissWithRecipientsCount:groupsCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061de50c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112742914;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1061de5a0; end: 1061de923; -[SCFeatureLensSendToButtonImpl _startObserving] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061de5a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar10 = (long)_DAT_112742934;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1061de924;
  puStack_88 = &UNK_11084eff0;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar6 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112742940);
  _objc_retain(uVar9);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c095b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0e0ea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1061de9ec;
  puStack_b0 = &UNK_1108544b0;
  uVar8 = uVar3;
  uStack_a8 = uVar9;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112742930);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c1410e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar8 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1061de924; end: 1061dea27;  */

void FUN_1061de924(long param_1,long param_2)

{
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfc200();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061dea28; end: 1061dea87;  */

void FUN_1061dea28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c141120(param_2);
  _objc_release(param_2);
  func_0x00010bdfca80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061dea88; end: 1061decdb; -[SCFeatureLensSendToButtonImpl _didActivateLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dea88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112742944);
    *(undefined8 *)(param_1 + _DAT_112742944) = 0;
LAB_1061dec88:
    _objc_release(uVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742918);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2339c0();
    if ((int)uVar2 == 0) {
LAB_1061dec68:
      _objc_release(uVar1);
      lVar4 = (long)_DAT_112742944;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = param_3;
      goto LAB_1061dec88;
    }
    lVar4 = param_3;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      _objc_release(lVar4);
      goto LAB_1061dec68;
    }
    lVar5 = *(long *)(param_1 + _DAT_11274293c);
    _objc_release(lVar4);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112742944;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    if (lVar5 == 1) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11274292c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bf4c6e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0943c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112742948);
      *(undefined8 *)(param_1 + _DAT_112742948) = uVar2;
      _objc_release(uVar3);
      _objc_release(lVar4);
      _objc_release(uVar1);
      func_0x00010c228580(*(undefined8 *)(param_1 + _DAT_112742940));
      lVar4 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar4);
      func_0x00010be4aa60(param_1);
      _objc_release(lVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(lVar4);
      goto LAB_1061deca0;
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112742940));
LAB_1061deca0:
  _objc_release(param_3);
  return;
}



/* Entry: 1061decdc; end: 1061dee3f;  */

void FUN_1061decdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1061ded9c;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061dee40; end: 1061def6f; -[SCFeatureLensSendToButtonImpl _didTapSendToButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061dee40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112742914);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112742944);
    if (lVar1 == 0) goto LAB_1061def2c;
    _objc_retain(lVar1);
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c094540(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010be4aa60(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release();
LAB_1061def2c:
  _objc_release(param_3);
  return;
}



/* Entry: 1061def70; end: 1061df01f;  */

void FUN_1061def70(long param_1,long param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1061df020;
    puStack_50 = &UNK_110848218;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    _objc_retain(param_2);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1061df020; end: 1061df053;  */

void FUN_1061df020(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061df054; end: 1061df24f; -[SCFeatureLensSendToButtonImpl _launchSendToWithLensDeeplink:lensMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061df054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112742948) != 0) {
    lVar4 = (long)_DAT_112742914;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b1b28;
      func_0x00010c0981a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      _objc_retain(uVar5);
      _objc_initWeak(auStack_68,param_1);
      param_1 = param_1 + _DAT_112742928;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010bf2b640();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c0cfc80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(uVar5);
      func_0x00010c297260(lVar3);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_70);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


