/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069c3450; end: 1069c34d3;  */

void FUN_1069c3450(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069c34d4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c34d4; end: 1069c34df;  */

void FUN_1069c34d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setOnScaleChangedAction__1125871e8,0);
  return;
}



/* Entry: 1069c34e0; end: 1069c35c3;  */

undefined8 FUN_1069c34e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1069c35c4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_2;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1069c35c4; end: 1069c35f3;  */

void FUN_1069c35c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be29d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleFillMode__1125680f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c35f4; end: 1069c36af; -[SCTScreenShareVideoWrapperView _setVideoSinkId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c35f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11275506c) = 0;
  func_0x00010c227ca0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275505c));
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar3 = (long)_DAT_112755070;
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_112755054));
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + _DAT_112755060) & 1) == 0) {
      func_0x00010c251c20(*(undefined8 *)(param_1 + _DAT_112755054),param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c36b0; end: 1069c3737; -[SCTScreenShareVideoWrapperView _setOnVideoFinishedLoadingAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c36b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112755074;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    if ((param_3 != 0) && ((*(byte *)(param_1 + _DAT_11275506c) & 1) != 0)) {
      func_0x00010c0f95a0(*(undefined8 *)(param_1 + lVar2),param_2,PTR____NSArray0__struct_11034ab48
                         );
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c3738; end: 1069c376f; -[SCTScreenShareVideoWrapperView _setOnScaleChangedAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c3738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755078);
  *(undefined8 *)(param_1 + _DAT_112755078) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c3770; end: 1069c37d3; -[SCTScreenShareVideoWrapperView _handleFillMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c3770(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c067fc0();
    if (lVar1 == 1) {
      uVar2 = 0x3ff0000000000000;
    }
    else {
      if (lVar1 != 0) goto LAB_1069c37c4;
      uVar2 = 0x4008000000000000;
    }
    func_0x00010c227cc0(uVar2,*(undefined8 *)(param_1 + _DAT_11275505c),param_2,1);
  }
LAB_1069c37c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c37d4; end: 1069c37e3; -[SCTScreenShareVideoWrapperView viewForZoomingInScrollView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c37d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112755054),PTR_s_view_1126849e8);
  return;
}



/* Entry: 1069c37e4; end: 1069c37e7; -[SCTScreenShareVideoWrapperView scrollViewDidZoom:] */

void FUN_1069c37e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__adjustContentInsetForScrollView_11254fe50);
  return;
}



/* Entry: 1069c37e8; end: 1069c38a7; -[SCTScreenShareVideoWrapperView scrollViewDidEndZooming:withView:atScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c37e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_3 + _DAT_112755078);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f95a0(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar4 = (long)_DAT_112755068;
  *(undefined8 *)(puVar1 + lVar4) = param_1;
  *(undefined8 *)((long)(puVar1 + lVar4) + 8) = param_2;
  lVar4 = (long)_DAT_11275506c;
  if ((puVar1[lVar4] & 1) == 0) {
    if (*(long *)(puVar1 + _DAT_112755074) != 0) {
      func_0x00010c0f95a0();
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  puVar1[lVar4] = 1;
  _objc_initWeak(auStack_88,puVar1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1069c39b0;
  puStack_a8 = &UNK_110849d70;
  _objc_copyWeak(auStack_a0,auStack_88);
  uStack_98 = param_1;
  uStack_90 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_c0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  return;
}



/* Entry: 1069c38a8; end: 1069c39af; -[SCTScreenShareVideoWrapperView videoViewReference:frameDimensionsChangedSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c38a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  lVar1 = (long)_DAT_112755068;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  lVar1 = (long)_DAT_11275506c;
  if ((*(byte *)(param_3 + lVar1) & 1) == 0) {
    if (*(long *)(param_3 + _DAT_112755074) != 0) {
      func_0x00010c0f95a0();
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  *(undefined1 *)(param_3 + lVar1) = 1;
  _objc_initWeak(auStack_48,param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1069c39b0;
  puStack_68 = &UNK_110849d70;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 1069c39b0; end: 1069c39e3;  */

void FUN_1069c39b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed86c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069c39e4; end: 1069c3b67; -[SCTScreenShareVideoWrapperView _updateFrameWithVideoFrameDimensions:] */

/* WARNING: Possible PIC construction at 0x0001069c3a58: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c39e4(double param_1,double param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) {
    lVar3 = (long)_DAT_112755058;
    if (*(char *)(param_3 + lVar3) == '\x01') {
      lVar3 = (long)_DAT_11275505c;
      func_0x00010c2bf2a0(*(undefined8 *)(param_3 + lVar3));
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      uVar5 = 0x3ff0000000000000;
    }
    else {
      func_0x00010bdd89e0(param_1,param_2,param_3);
      lVar4 = (long)_DAT_112755054;
      uVar2 = *(undefined8 *)(param_3 + lVar4);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      uVar6 = 0;
      func_0x00010c19f0e0(0,0,param_1,param_2);
      _objc_release(uVar2);
      if (*(char *)(param_3 + lVar3) != '\x01') {
        func_0x00010bf345e0(param_3);
        uVar2 = *(undefined8 *)(param_3 + lVar4);
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17a6a0(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar2);
        return;
      }
      lVar3 = (long)_DAT_11275505c;
      func_0x00010c1827c0(param_1,param_2,*(undefined8 *)(param_3 + lVar3));
      func_0x00010bdc92c0(param_3);
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      uVar5 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c227cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar5,uVar2,PTR_s_setZoomScale__112667950);
    return;
  }
  return;
}



/* Entry: 1069c3b68; end: 1069c3bff; -[SCTScreenShareVideoWrapperView _calculateViewDimensionsFromFrameDimensions:] */

undefined1  [16]
FUN_1069c3b68(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010bfb68e0();
  dVar1 = param_3 / param_1;
  func_0x00010bfb68e0(param_5);
  dVar2 = param_2 * (double)(float)dVar1;
  dVar1 = param_4;
  func_0x00010bfb68e0(param_5);
  if (dVar2 <= dVar1) {
    func_0x00010bfb68e0(param_5);
  }
  else {
    param_3 = param_1 * (double)(float)(param_4 / param_2);
    func_0x00010bfb68e0(param_5);
    dVar2 = dVar1;
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 1069c3c00; end: 1069c3ca3; -[SCTScreenShareVideoWrapperView _setupScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c3c00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11275505c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1c9b40(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1c3d60(0x4008000000000000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1069c3ca4; end: 1069c3d23; -[SCTScreenShareVideoWrapperView _adjustContentInsetForScrollView:] */

void FUN_1069c3ca4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_7);
  func_0x00010bf4d5e0(param_7);
  func_0x00010bfb68e0(param_7);
  dVar1 = (param_3 - param_1) * 0.5;
  dVar3 = 0.0;
  if (0.0 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar2 = (param_4 - param_2) * 0.5;
  dVar1 = 0.0;
  if (0.0 <= dVar2) {
    dVar1 = dVar2;
  }
  func_0x00010c181f80(dVar1,dVar3,0,0,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1069c3d24; end: 1069c3d97; -[SCTScreenShareVideoWrapperView _onAppBackgroundStateChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c3d24(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_112755060) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112755054),PTR_s_stop_112673008);
    return;
  }
  lVar2 = (long)_DAT_112755070;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c251c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112755054),PTR_s_startWithSink__112672130,
               *(undefined8 *)(param_1 + lVar2));
    return;
  }
  return;
}



/* Entry: 1069c3d98; end: 1069c3e17; -[SCTScreenShareVideoWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c3d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755064,0);
  _objc_storeStrong(param_1 + _DAT_112755078,0);
  _objc_storeStrong(param_1 + _DAT_112755074,0);
  _objc_storeStrong(param_1 + _DAT_11275505c,0);
  _objc_storeStrong(param_1 + _DAT_112755070,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755054,0);
  return;
}



/* Entry: 1069c3e18; end: 1069c450f; -[SCTVideoWrapperView initWithFrame:videoView:applicationLifecycleEvents:applicationStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069c3e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined **param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined **unaff_x25;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_d0 = PTR_PTR_1126f41e8;
  puVar2 = &uStack_d8;
  uStack_d8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar2,PTR_s_initWithFrame__1125e2948);
  ppuVar5 = param_9;
  if (puVar2 != (undefined8 *)0x0) {
    lVar24 = (long)_DAT_11275507c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar24);
    *(long *)((long)puVar2 + lVar24) = param_7;
    _objc_release(uVar3);
    ppuVar4 = *(undefined ***)((long)puVar2 + lVar24);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 != (undefined **)0x0) {
      func_0x00010befbb60(puVar2);
      func_0x00010c219b60(ppuVar4);
      ppuVar5 = ppuVar4;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c2a5060(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      func_0x00010c1e3380(0x443b8000,ppuVar7);
      ppuVar5 = ppuVar4;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfe0660(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      func_0x00010c1e3380(0x443b8000,ppuVar8);
      puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      ppuVar9 = ppuVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar4;
      ppuStack_c8 = ppuVar10;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar4;
      ppuStack_c0 = ppuVar13;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar14;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar4;
      ppuStack_b8 = ppuVar5;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar2;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar16;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar4;
      ppuStack_b0 = ppuVar18;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar4;
      func_0x00010c2a5060(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = unaff_x25;
      func_0x00010bf493e0(0x3ffc71c71c71c71c);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_a8 = ppuVar20;
      ppuStack_a0 = ppuVar7;
      ppuStack_98 = ppuVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar22);
      _objc_release(puVar21);
      _objc_release(ppuVar20);
      _objc_release(ppuVar19);
      _objc_release(unaff_x25);
      _objc_release(ppuVar18);
      _objc_release(puVar17);
      _objc_release(ppuVar16);
      _objc_release(ppuVar5);
      _objc_release(puVar15);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_release(puVar12);
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(puVar6);
      _objc_release(ppuVar9);
      func_0x00010c17d4c0(puVar2);
      if (param_8 != 0) {
        _objc_retain(param_9);
        if (param_9 == (undefined **)0x0) {
          puVar22 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x00010c22b720();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar22;
          func_0x00010bf07b60();
          bVar1 = puVar21 == (undefined *)0x2;
          _objc_release(puVar22);
        }
        else {
          ppuVar5 = param_9;
          func_0x00010bf07b60();
          if (ppuVar5 == (undefined **)0x2) {
            ppuVar5 = param_9;
            func_0x00010c0d9860();
            bVar1 = ppuVar5 != (undefined **)0x0;
          }
          else {
            bVar1 = false;
          }
        }
        _objc_release(param_9);
        *(bool *)((long)puVar2 + (long)_DAT_112755080) = bVar1;
        puVar22 = PTR_PTR_1126ae810;
        _objc_opt_new();
        uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112755084);
        *(undefined **)((long)puVar2 + (long)_DAT_112755084) = puVar22;
        _objc_release(uVar3);
        _objc_initWeak(auStack_e0,puVar2);
        lVar24 = param_8;
        func_0x00010c2a6420(param_8);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_1069c4510;
        puStack_f0 = &UNK_110846510;
        ppuVar5 = &puStack_108;
        _objc_copyWeak(auStack_e8,auStack_e0);
        lVar23 = lVar24;
        func_0x00010c25ff60(lVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar23);
        _objc_release(lVar24);
        lVar24 = param_8;
        func_0x00010bf72840(param_8);
        _objc_retainAutoreleasedReturnValue();
        puStack_130 = puVar22;
        uStack_128 = 0xc2000000;
        uStack_120 = 0x1069c4540;
        puStack_118 = &UNK_110846510;
        unaff_x25 = &puStack_130;
        _objc_copyWeak(auStack_110,auStack_e0);
        lVar23 = lVar24;
        func_0x00010c25ff60(lVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar23);
        _objc_release(lVar24);
        lVar24 = param_8;
        func_0x00010bf75dc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_138,auStack_e0);
        lVar23 = lVar24;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar23);
        _objc_release(lVar24);
        _objc_destroyWeak(auStack_138);
        _objc_destroyWeak(auStack_110);
        _objc_destroyWeak(auStack_e8);
        _objc_destroyWeak(auStack_e0);
      }
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar4);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(ppuVar5 + 4);
  _objc_destroyWeak(auStack_e0);
  __Unwind_Resume(param_7);
  puVar2 = (undefined8 *)(param_7 + 0x20);
  _objc_loadWeakRetained(puVar2);
  func_0x00010be67ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 1069c4510; end: 1069c459f;  */

void FUN_1069c4510(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c45a0; end: 1069c45ef; -[SCTVideoWrapperView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c45a0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_11275507c));
  puStack_28 = PTR_PTR_1126f41e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069c45f0; end: 1069c472f; +[SCTVideoWrapperView bindAttributes:] */

void FUN_1069c45f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e78,0,
                      &PTR___NSConcreteGlobalBlock_1109519f0,&PTR___NSConcreteGlobalBlock_110951a30)
  ;
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e98,0,
                      &PTR___NSConcreteGlobalBlock_110951a70,&PTR___NSConcreteGlobalBlock_110951a90)
  ;
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e66e18,0,
                      &PTR___NSConcreteGlobalBlock_110951ad0,&PTR___NSConcreteGlobalBlock_110951af0)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c4730; end: 1069c473b;  */

void FUN_1069c4730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setVideoSinkId__1125881b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069c473c; end: 1069c47bf;  */

void FUN_1069c473c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069c47c0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c47c0; end: 1069c47e3;  */

void FUN_1069c47c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setVideoSinkId__1125881b8,0);
  return;
}



/* Entry: 1069c47e4; end: 1069c487f; -[SCTVideoWrapperView _setVideoSinkId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c47e4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar4 = (long)_DAT_112755088;
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    func_0x00010c255780(*(undefined8 *)(param_1 + (long)_DAT_11275507c));
  }
  else {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar3 = param_1;
    func_0x00010beb4bc0();
    if ((uVar3 & 1) == 0) {
      func_0x00010c251c20(*(undefined8 *)(param_1 + (long)_DAT_11275507c),param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c4880; end: 1069c48b3; -[SCTVideoWrapperView freezeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c4880(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11275508c) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__runBlockAndPauseOrResumeView__1125838d8,
             &PTR___NSConcreteGlobalBlock_110951b30);
  return;
}



/* Entry: 1069c48b4; end: 1069c48e7; -[SCTVideoWrapperView unfreezeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c48b4(long param_1)

{
  if (*(char *)(param_1 + _DAT_11275508c) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__runBlockAndPauseOrResumeView__1125838d8,
               &PTR___NSConcreteGlobalBlock_110951b50);
    return;
  }
  return;
}



/* Entry: 1069c48e8; end: 1069c4937; -[SCTVideoWrapperView _onAppBackgroundStateChanged:] */

void FUN_1069c48e8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1069c4938;
  puStack_20 = &UNK_110951b70;
  uStack_18 = param_3;
  func_0x00010be97ce0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1069c4938; end: 1069c494b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c4938(long param_1,long param_2)

{
  *(undefined1 *)(param_2 + _DAT_112755080) = *(undefined1 *)(param_1 + 0x20);
  return;
}



/* Entry: 1069c494c; end: 1069c4977; -[SCTVideoWrapperView _shouldPauseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1069c494c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_11275508c) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112755080);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 1069c4978; end: 1069c4cc3; -[SCTVideoWrapperView _runBlockAndPauseOrResumeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c4978(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
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
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar17 = param_1;
  func_0x00010beb4bc0();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
  lVar15 = param_1;
  func_0x00010beb4bc0();
  if ((int)lVar17 != (int)lVar15) {
    if ((int)lVar15 == 0) {
      lVar17 = *(long *)(param_1 + _DAT_112755088);
      func_0x00010c08fa60();
      if (lVar17 != 0) {
        func_0x00010c251c20(*(undefined8 *)(param_1 + _DAT_11275507c));
      }
      lVar17 = (long)_DAT_112755090;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar17));
      lVar15 = *(long *)(param_1 + lVar17);
      *(undefined8 *)(param_1 + lVar17) = 0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar15);
        return;
      }
      goto LAB_1069c4cc0;
    }
    lVar15 = param_1;
    func_0x00010c245f60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 != 0) {
      func_0x00010befbb60(param_1);
      func_0x00010c219b60(lVar15);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar17 = lVar15;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar17;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar15;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c274200(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar15;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar17);
      lVar17 = (long)_DAT_112755090;
      _objc_retain(lVar15);
      uVar14 = *(undefined8 *)(param_1 + lVar17);
      *(long *)(param_1 + lVar17) = lVar15;
      _objc_release(uVar14);
    }
    func_0x00010c255780(*(undefined8 *)(param_1 + _DAT_11275507c));
    _objc_release(lVar15);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
LAB_1069c4cc0:
  ___stack_chk_fail();
  _objc_storeStrong(lVar15 + _DAT_112755084,0);
  _objc_storeStrong(lVar15 + _DAT_112755090,0);
  _objc_storeStrong(lVar15 + _DAT_112755088,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar15 + _DAT_11275507c,0);
  return;
}



/* Entry: 1069c4cc4; end: 1069c4d23; -[SCTVideoWrapperView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069c4cc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755084,0);
  _objc_storeStrong(param_1 + _DAT_112755090,0);
  _objc_storeStrong(param_1 + _DAT_112755088,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275507c,0);
  return;
}



/* Entry: 1069c4d24; end: 1069c4d87; -[SCViewFreezingManager init] */

undefined1 * FUN_1069c4d24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f41f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069c4d88; end: 1069c4ddb; -[SCViewFreezingManager registerViewFreezer:] */

void FUN_1069c4d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_storeWeak(param_1 + 8,param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb7740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1069c4ddc; end: 1069c4e4b; -[SCViewFreezingManager freezeViewForConsumer:] */

void FUN_1069c4ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfb7740();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c4e4c; end: 1069c4eb7; -[SCViewFreezingManager unfreezeViewForConsumer:] */

void FUN_1069c4e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c27fb60();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069c4eb8; end: 1069c4ee3; -[SCViewFreezingManager .cxx_destruct] */

void FUN_1069c4eb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1069c4ee4; end: 1069c4f87; -[SCLensTalkVideoHandlingScope initWithIsSelfStreamObservable:remoteVideoStreamObservable:] */

undefined1 *
FUN_1069c4ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f41f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069c4f88; end: 1069c4f8f; -[SCLensTalkVideoHandlingScope isSelfStreamObservable] */

undefined8 FUN_1069c4f88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1069c4f90; end: 1069c4f97; -[SCLensTalkVideoHandlingScope remoteVideoStreamObservable] */

undefined8 FUN_1069c4f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069c4f98; end: 1069c4fc7; -[SCLensTalkVideoHandlingScope .cxx_destruct] */

void FUN_1069c4f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c4fc8; end: 1069c4fef;  */

void FUN_1069c4fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e66f58);
  return;
}



/* Entry: 1069c4ff0; end: 1069c4ff7; -[SCChatInputSnapPasteEvent event] */

undefined8 FUN_1069c4ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1069c4ff8; end: 1069c5027; -[SCChatInputSnapPasteEvent setEvent:] */

void FUN_1069c4ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c5028; end: 1069c502f; -[SCChatInputSnapPasteEvent chatIdentifier] */

undefined8 FUN_1069c5028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069c5030; end: 1069c505f; -[SCChatInputSnapPasteEvent setChatIdentifier:] */

void FUN_1069c5030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c5060; end: 1069c508f; -[SCChatInputSnapPasteEvent .cxx_destruct] */

void FUN_1069c5060(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c5090; end: 1069c5097; -[SCChatInputSnapAccessoryPresentCameraEvent information] */

undefined8 FUN_1069c5090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1069c5098; end: 1069c50c7; -[SCChatInputSnapAccessoryPresentCameraEvent setInformation:] */

void FUN_1069c5098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c50c8; end: 1069c50cf; -[SCChatInputSnapAccessoryPresentCameraEvent replyAllGroupId] */

undefined8 FUN_1069c50c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1069c50d0; end: 1069c50ff; -[SCChatInputSnapAccessoryPresentCameraEvent setReplyAllGroupId:] */

void FUN_1069c50d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c5100; end: 1069c512f; -[SCChatInputSnapAccessoryPresentCameraEvent .cxx_destruct] */

void FUN_1069c5100(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069c5130; end: 1069c5483; -[SCChatInputSnapAccessory initWithReplyParameterProvider:circumstanceEngine:chatCameraScopeExposer:previewFilterDataProviderFactory:previewScopeLauncher:previewScopeBuilderServices:currentPageTracker:previewAssetVideoProvider:activeConversationInformation:replyAllGroupId:groupFetcher:inputScopeContext:messagingExperimentService:snapDocEditorServices:chatTooltipsService:] */

undefined8 *
FUN_1069c5130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f4200;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    puVar1[0x12] = 0;
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    _objc_release(uVar2);
  }
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
  return puVar1;
}



/* Entry: 1069c5484; end: 1069c54ab; -[SCChatInputSnapAccessory snapAccessoryPresentCameraEvents] */

void FUN_1069c5484(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069c54ac; end: 1069c553b; -[SCChatInputSnapAccessory setInputController:] */

void FUN_1069c54ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xa0,param_3);
  uVar1 = param_3;
  func_0x00010c0660e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec86a0(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f5680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bec8040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069c553c; end: 1069c553f; -[SCChatInputSnapAccessory didSelectInputItem:] */

void FUN_1069c553c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_accessoryPressed_112598e40);
  return;
}



/* Entry: 1069c5540; end: 1069c5543; -[SCChatInputSnapAccessory didDeselectInputItem:] */

void FUN_1069c5540(void)

{
  return;
}



/* Entry: 1069c5544; end: 1069c5547; -[SCChatInputSnapAccessory didCollapseInputItem:] */

void FUN_1069c5544(void)

{
  return;
}



/* Entry: 1069c5548; end: 1069c554b; -[SCChatInputSnapAccessory didUncollapseInputItem:] */

void FUN_1069c5548(void)

{
  return;
}



/* Entry: 1069c554c; end: 1069c5627; -[SCChatInputSnapAccessory _subscribeToTextEditingEvents:] */

void FUN_1069c554c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c5628; end: 1069c56e3;  */

void FUN_1069c5628(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd4c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c56e4; end: 1069c572b;  */

void FUN_1069c56e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becb7c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c572c; end: 1069c572f; -[SCChatInputSnapAccessory _textViewDidChange:] */

void FUN_1069c572c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed9c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateInputItemImage_1125940b8);
  return;
}



/* Entry: 1069c5730; end: 1069c58c7; -[SCChatInputSnapAccessory _subscribeToPasteEvents:] */

void FUN_1069c5730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfad7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2b2440(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x80);
  uVar3 = uVar2;
  if (lVar4 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1069c59ac;
    puStack_60 = &UNK_110951c88;
    lStack_58 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bfb26a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar4);
  }
  _objc_initWeak(auStack_80,param_1);
  _objc_copyWeak(auStack_88,auStack_80);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c58c8; end: 1069c58ff;  */

bool FUN_1069c58c8(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1069c5900; end: 1069c59ab;  */

void FUN_1069c5900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cf930;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c197620();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf36840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b620(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069c59ac; end: 1069c5a43;  */

void FUN_1069c59ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069c5a44; end: 1069c5af7;  */

void FUN_1069c5a44(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126b01c0;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcf680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b620(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1069c5af8; end: 1069c5bd7;  */

void FUN_1069c5af8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf99b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0be100(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1069c5bd8; end: 1069c5c63;  */

void FUN_1069c5bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf36840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfeb40(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069c5c64; end: 1069c5d27; -[SCChatInputSnapAccessory _setActiveConversationId:] */

void FUN_1069c5c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c11e0(param_3);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1069c5d28; end: 1069c5d63;  */

void FUN_1069c5d28(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 1069c5d64; end: 1069c5d67;  */

void FUN_1069c5d64(void)

{
  return;
}



/* Entry: 1069c5d68; end: 1069c6023; -[SCChatInputSnapAccessory _didPasteVideoData:contentType:chatIdentifier:] */

void FUN_1069c5d68(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_6);
  _objc_alloc();
  func_0x00010c0082a0();
  _objc_release(param_6);
  func_0x000107f703c4(puVar1);
  dVar8 = param_1;
  if (puVar1 == (undefined *)0x0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_88,puVar1);
  }
  _CMTimeGetSeconds(&uStack_88);
  if ((((dVar8 != 0.0) && (dVar8 <= 10.0)) && (param_1 != 0.0)) && (param_2 != 0.0)) {
    puVar2 = PTR_PTR_1126afee0;
    _objc_alloc(PTR_PTR_1126afee0);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,&UNK_10f3a6be8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004180(puVar2,param_4,puVar3,*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar3);
    func_0x00010c1c5440(puVar2,param_4,1);
    func_0x00010c1c4ca0(puVar2,param_4,0);
    func_0x00010c1c5240(puVar2);
    func_0x00010c0c6700(puVar2);
    dVar8 = 0.0;
    if (param_1 != 0.0) {
      if (param_2 == 0.0) {
        dVar8 = INFINITY;
      }
      else {
        dVar8 = param_1 / param_2;
      }
    }
    func_0x00010c1c40c0(dVar8,puVar2);
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c29aec0(uVar4,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(puVar2,param_4,uVar4);
    _objc_release(uVar4);
    func_0x00010c16c080(puVar2,param_4,1);
    func_0x00010c221ca0(puVar2,param_4,3);
    func_0x00010c2056c0(puVar2,param_4,6);
    func_0x00010c204fa0(puVar2,param_4,3);
    lVar5 = param_3 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c131e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    uVar7 = *(undefined8 *)(param_3 + 0x68);
    func_0x00010bf9f4a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126affc0;
    func_0x00010c299cc0(PTR_PTR_1126affc0,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf8cb20(uVar7,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar7);
    func_0x00010be48020(param_3,param_4,lVar6,puVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(lVar6);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 1069c6024; end: 1069c622f; -[SCChatInputSnapAccessory _launchPreviewScopeForVideoData:previewConfiguration:snapDocEditor:] */

void FUN_1069c6024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1eb2c0(param_3,param_2,1);
  func_0x00010c1b38e0(param_3,param_2,1);
  func_0x00010c1eb140(param_4,param_2,param_3);
  uVar6 = param_3;
  func_0x00010c077de0(param_3);
  _objc_release(param_3);
  func_0x00010c1a0f40(param_4,param_2,uVar6);
  uVar6 = param_4;
  func_0x00010c243400(param_4);
  uVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  lVar2 = param_1;
  func_0x00010be1f160(param_1,param_2,uVar6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(param_4,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1bacc0(param_4,param_2,8);
  func_0x00010bf42760(param_4);
  lVar2 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_1 + 0xa0;
    _objc_loadWeakRetained();
  }
  else {
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  func_0x00010c0311a0();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22c20(uVar6,param_2,0,param_4,param_5,3,param_1,0,puVar5,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,uVar6,param_1);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 1069c6230; end: 1069c6247;  */

void FUN_1069c6230(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentViewController_animated_c_112621588,
             param_2,0,0);
  return;
}



/* Entry: 1069c6248; end: 1069c624b; -[SCChatInputSnapAccessory didCancelFromPreview:] */

void FUN_1069c6248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be031b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewIfPresented_11255e608);
  return;
}



/* Entry: 1069c624c; end: 1069c62d3; -[SCChatInputSnapAccessory _didSendSnapOrChatMessage] */

void FUN_1069c624c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010be031a0();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f2220();
  func_0x00010c24fc40(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf726a0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be85960();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde1130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearText_112555de8);
    return;
  }
  return;
}



/* Entry: 1069c62d4; end: 1069c62d7; -[SCChatInputSnapAccessory didSendSnapsAndPostToStory:storyTypes:] */

void FUN_1069c62d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSendSnapOrChatMessage_11255dae8);
  return;
}



/* Entry: 1069c62d8; end: 1069c62db; -[SCChatInputSnapAccessory didSendChatMessage] */

void FUN_1069c62d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSendSnapOrChatMessage_11255dae8);
  return;
}



/* Entry: 1069c62dc; end: 1069c62df; -[SCChatInputSnapAccessory didSendToGallery] */

void FUN_1069c62dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSendSnapOrChatMessage_11255dae8);
  return;
}



/* Entry: 1069c62e0; end: 1069c62e3; -[SCChatInputSnapAccessory didPostStoryWithStoryTypes:] */

void FUN_1069c62e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didSendSnapOrChatMessage_11255dae8);
  return;
}



/* Entry: 1069c62e4; end: 1069c633b; -[SCChatInputSnapAccessory accessoryPressed] */

void FUN_1069c62e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0xb0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf78600();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = PTR_PTR_1126cf938;
  _objc_opt_new(PTR_PTR_1126cf938);
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069c633c; end: 1069c634f; -[SCChatInputSnapAccessory interceptMessageSendAttemptForPlugin:] */

void FUN_1069c633c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1069c6350; end: 1069c659f; -[SCChatInputSnapAccessory _platformAnalyticsForConversationInformation:replyAllGroupId:] */

void FUN_1069c6350(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf36840(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  puVar3 = param_3;
  func_0x00010c10ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0df180();
  puVar5 = param_3;
  func_0x00010c10ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0df160();
  puVar7 = puVar1;
  func_0x000108606910(puVar1,puVar2,puVar4,puVar6,*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c11eca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000108606d64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010bf37160(param_3);
  func_0x00010c2b9b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac2e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2aa640(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1069c65a0; end: 1069c65a7; -[SCChatInputSnapAccessory _getFilterDataProviderWithSnapSource:mediaType:] */

void FUN_1069c65a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc58d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_getFilterDataProviderWithSnapSou_1125cefd8);
  return;
}



/* Entry: 1069c65a8; end: 1069c6693; -[SCChatInputSnapAccessory _dismissPreviewIfPresented] */

void FUN_1069c65a8(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar2 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar4 = param_1 + 0xa0;
    _objc_loadWeakRetained();
  }
  else {
    _objc_retain(uVar3);
    uVar4 = uVar3;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cb710;
  _objc_opt_class(PTR_PTR_1126cb710);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar5);
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar4;
    func_0x00010c10f940(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84280(PTR_PTR_1126cb718);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c076220();
    if (iVar1 != 0) {
      func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x18));
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1069c6694; end: 1069c66d3; -[SCChatInputSnapAccessory _quickCaptionIsEnabled] */

bool FUN_1069c6694(long param_1)

{
  long lVar1;
  
  func_0x00010be3c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1069c66d4; end: 1069c68ef; -[SCChatInputSnapAccessory _updateInputItemImage] */

void FUN_1069c66d4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = param_1;
  func_0x00010be3c1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c065bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfe7940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c065bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610a0();
  _objc_release(puVar1);
  puVar4 = param_1;
  func_0x00010c065880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25dfa0();
  if (puVar5 < (undefined *)0x3) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        (&PTR_PTR_110951d58)[(long)puVar5]);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  puVar4 = param_1;
  if ((puVar2 == (undefined *)0x0) || (puVar3 == puVar1)) {
    if (puVar2 != (undefined *)0x0) goto LAB_1069c6824;
    puVar2 = param_1;
    func_0x00010c065880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c25dfa0();
    FUN_1069c68f0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (puVar3 == puVar5) goto LAB_1069c6824;
    func_0x00010c065bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c065880(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c25dfa0();
    FUN_1069c68f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f20(puVar4,param_2,puVar5,1,0);
    _objc_release(puVar5);
    _objc_release(puVar2);
    uVar6 = 0;
  }
  else {
    func_0x00010c065bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    func_0x00010c1a9f20();
  }
  _objc_release(puVar4);
  puVar2 = param_1;
  func_0x00010c065bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610a0();
  _objc_release(puVar2);
  *(undefined8 *)(param_1 + 0x90) = uVar6;
LAB_1069c6824:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1069c68f0; end: 1069c692b;  */

void FUN_1069c68f0(ulong param_1,undefined8 param_2)

{
  if (param_1 < 3) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,(&PTR_PTR_110951d70)[param_1]);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c692c; end: 1069c69d7; -[SCChatInputSnapAccessory captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1069c692c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f2220();
  func_0x00010c24fc40(uVar3,param_2,lVar2);
  _objc_release(lVar1);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be85960();
    if ((int)lVar1 != 0) {
      func_0x00010bde1120(param_1);
    }
    lVar1 = param_1 + 0xb0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf726a0();
    _objc_release(lVar1);
  }
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf909a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0xb0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c69d8; end: 1069c6a17; -[SCChatInputSnapAccessory _inputText] */

void FUN_1069c69d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0xa0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1069c6a18; end: 1069c6a47; -[SCChatInputSnapAccessory _clearText] */

void FUN_1069c6a18(undefined8 param_1)

{
  func_0x00010c065880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069c6a48; end: 1069c6a8f; -[SCChatInputSnapAccessory dismissCameraScope:] */

void FUN_1069c6a48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069c6a90; end: 1069c6aa7; -[SCChatInputSnapAccessory inputController] */

void FUN_1069c6a90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c6aa8; end: 1069c6abf; -[SCChatInputSnapAccessory inputItem] */

void FUN_1069c6aa8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069c6ac0; end: 1069c6acb; -[SCChatInputSnapAccessory setInputItem:] */

void FUN_1069c6ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 1069c6acc; end: 1069c6ae3; -[SCChatInputSnapAccessory pluginDelegate] */

void FUN_1069c6acc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


