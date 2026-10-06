/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b85f78; end: 107b86033; -[SCOperaLongFormVideoViewController _setupControlsFadeTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85f78(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b38c;
  func_0x00010c069d00(*(undefined8 *)(param_2 + lVar3));
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276b33c);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fdc0();
  _objc_release(uVar1);
  if (0.0 < param_1) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x4008000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_3,param_2,
                        PTR_s_fadeOutControls_1125c5790,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + lVar3);
    *(undefined **)(param_2 + lVar3) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b86034; end: 107b86087; -[SCOperaLongFormVideoViewController invalidateControlsFadeTimerAndShowControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86034(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11276b38c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b35c);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b86088; end: 107b8608f; -[SCOperaLongFormVideoViewController isOverlay] */

undefined8 FUN_107b86088(void)

{
  return 0;
}



/* Entry: 107b86090; end: 107b8609f; -[SCOperaLongFormVideoViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b35c),PTR_s_mediaHeightToWidthAspectRatio_11260ee68
            );
  return;
}



/* Entry: 107b860a0; end: 107b860af; -[SCOperaLongFormVideoViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b860a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b35c),PTR_s_mediaViewFrame_11260f668);
  return;
}



/* Entry: 107b860b0; end: 107b861f3; -[SCOperaLongFormVideoViewController _observePlaybackLifecycleEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b860b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b33c);
  func_0x00010c0ff6a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b861f4; end: 107b862cf;  */

void FUN_107b861f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd460(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b862d0; end: 107b862d7;  */

void FUN_107b862d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be669d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__observePlayerItemPresentationSi_112577410);
  return;
}



/* Entry: 107b862d8; end: 107b8646b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b862d8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010beabd00(*(undefined8 *)(param_5 + 0x20));
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(long *)(lVar5 + _DAT_11276b338) - 3U < 2) && ((*(byte *)(lVar5 + _DAT_11276b32c) & 1) == 0)
     ) {
    uVar2 = *(undefined8 *)(lVar5 + _DAT_11276b35c);
    func_0x00010c100fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c100c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    dVar6 = param_1;
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar7 = dVar6;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bf20c00(uVar3);
    bVar1 = false;
    if ((param_3 == param_1) && (bVar1 = false, !NAN(param_4) && !NAN(dVar6))) {
      bVar1 = param_4 == dVar6;
    }
    if (!bVar1) {
      func_0x00010bf20c00(uVar3);
      _CGRectGetMinX();
      dVar8 = dVar7;
      func_0x00010bf20c00(uVar3);
      _CGRectGetMinY();
      func_0x00010c1739e0(dVar7,dVar8,param_1,dVar6,uVar3);
      uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_150 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_140 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_128 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_130 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      _CATransform3DMakeAffineTransform(&uStack_d0,&uStack_150);
      uStack_108 = uStack_88;
      uStack_110 = uStack_90;
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_148 = uStack_c8;
      uStack_150 = uStack_d0;
      uStack_138 = uStack_b8;
      uStack_140 = uStack_c0;
      uStack_128 = uStack_a8;
      uStack_130 = uStack_b0;
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      func_0x00010c219960(uVar3,param_6,&uStack_150);
    }
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 107b8646c; end: 107b8646f;  */

void FUN_107b8646c(void)

{
  return;
}



/* Entry: 107b86470; end: 107b864ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86470(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_11276b36c;
  if ((*(byte *)(lVar1 + lVar2) & 1) == 0) {
    func_0x00010c069e20();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  *(undefined1 *)(lVar1 + lVar2) = 0;
  return;
}



/* Entry: 107b864ac; end: 107b864b7;  */

void FUN_107b864ac(void)

{
  return;
}



/* Entry: 107b864b8; end: 107b865ef; -[SCOperaLongFormVideoViewController _observePlayerItemPresentationSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b864b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b330);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b33c);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0e0780(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b865f0; end: 107b866bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b865f0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    uVar1 = param_6;
    func_0x00010c0e00e0(param_6,param_4,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    _objc_release(uVar1);
    if ((*(double *)(param_3 + _DAT_11276b390) != param_2 / param_1) &&
       (*(double *)(param_3 + _DAT_11276b390) = param_2 / param_1,
       *(long *)(param_3 + _DAT_11276b338) - 1U < 2)) {
      func_0x00010c16a740(*(undefined8 *)(param_3 + _DAT_11276b35c),param_4,1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107b866c0; end: 107b86803; -[SCOperaLongFormVideoViewController _observeViewModelChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b866c0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b368);
  func_0x00010c29bcc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b86804; end: 107b8685b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86804(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11276b35c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b8685c; end: 107b8688f; -[SCOperaLongFormVideoViewController motionManagerDidUpdateRotation:translation:] */

void FUN_107b8685c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010beda700();
                    /* WARNING: Could not recover jumptable at 0x00010bedec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updateRollDegreeWithCurrentRota_1125954b8);
  return;
}



/* Entry: 107b86890; end: 107b869cf; -[SCOperaLongFormVideoViewController _updateLayerViewTransformWithRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86890(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = 0x3ff0000000000000;
  if (*(char *)(param_1 + _DAT_11276b360) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b37c);
  }
  _CGAffineTransformMakeRotation(&uStack_70);
  _CGAffineTransformMakeScale(&uStack_a0,uVar2,uVar2);
  uStack_f8 = uStack_68;
  uStack_100 = uStack_70;
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  uStack_d8 = uStack_48;
  uStack_e0 = uStack_50;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  _CGAffineTransformConcat(&uStack_d0,&uStack_100,&uStack_130);
  lVar1 = (long)_DAT_11276b35c;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c100fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  func_0x00010c219960();
  _objc_release(uVar2);
  uStack_f8 = uStack_68;
  uStack_100 = uStack_70;
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  uStack_d8 = uStack_48;
  uStack_e0 = uStack_50;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  _CGAffineTransformConcat(&uStack_160,&uStack_100,&uStack_130);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010bfb12e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  func_0x00010c219960();
  _objc_release(uVar2);
  return;
}



/* Entry: 107b869d0; end: 107b86a3b; -[SCOperaLongFormVideoViewController _updateRollDegreeWithCurrentRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b869d0(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(long)((param_1 / -3.141592653589793) * 180.0 * 10.0) / 10.0;
  if (5.0 <= ABS(dVar1)) {
    dVar2 = *(double *)(param_2 + _DAT_11276b384);
    if (dVar1 <= dVar2) {
      dVar2 = dVar1;
    }
    *(double *)(param_2 + _DAT_11276b384) = dVar2;
    dVar2 = *(double *)(param_2 + _DAT_11276b388);
    if (dVar1 <= dVar2) {
      dVar1 = dVar2;
    }
    *(double *)(param_2 + _DAT_11276b388) = dVar1;
  }
  return;
}



/* Entry: 107b86a3c; end: 107b86a77; -[SCOperaLongFormVideoViewController videoControlsView:didEndSeekingWithPlayButtonToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86a3c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010c0fea20(*(undefined8 *)(param_1 + _DAT_11276b368),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeOutControls_1125c5790);
    return;
  }
  return;
}



/* Entry: 107b86a78; end: 107b86a7b; -[SCOperaLongFormVideoViewController videoControlsSeekingProgressDidUpdate:seekingTargetTime:] */

void FUN_107b86a78(void)

{
  return;
}



/* Entry: 107b86a7c; end: 107b86a8b; -[SCOperaLongFormVideoViewController videoControlsView:didSeekToTime:reason:seekingToleranceDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_seekToTime__1126336b8);
  return;
}



/* Entry: 107b86a8c; end: 107b86aa3; -[SCOperaLongFormVideoViewController videoControlsView:didToggleCaption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_showCaption_saveState__11266b400,
             param_4,1);
  return;
}



/* Entry: 107b86aa4; end: 107b86ae7; -[SCOperaLongFormVideoViewController videoControlsView:didTogglePlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86aa4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010c0fea20(*(undefined8 *)(param_1 + _DAT_11276b368),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fadeOutControls_1125c5790);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_pauseVideo_11261b278);
  return;
}



/* Entry: 107b86ae8; end: 107b86b33; -[SCOperaLongFormVideoViewController videoControlsView:didToggleRotateLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86ae8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_4 != 0) {
    uVar1 = 4;
  }
  if (1 < *(long *)(param_1 + _DAT_11276b338) - 1U) {
    uVar1 = 1;
  }
  func_0x00010c2124a0(param_1,param_2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107b86b34; end: 107b86b37; -[SCOperaLongFormVideoViewController videoControlsView:didToggleControlsVisibility:] */

void FUN_107b86b34(void)

{
  return;
}



/* Entry: 107b86b38; end: 107b86b6b; -[SCOperaLongFormVideoViewController videoControlsView:didToggleVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86b38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010beabd00();
                    /* WARNING: Could not recover jumptable at 0x00010c272db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_toggleVolume__11267a590,param_4);
  return;
}



/* Entry: 107b86b6c; end: 107b86b83; -[SCOperaLongFormVideoViewController videoControlsViewDidBeginSeeking:pauseOnSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86b6c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_pauseVideo_11261b278);
    return;
  }
  return;
}



/* Entry: 107b86b84; end: 107b86bb7; -[SCOperaLongFormVideoViewController videoControlsViewDidPressExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86b84(long param_1)

{
  param_1 = param_1 + _DAT_11276b378;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12a740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b86bb8; end: 107b86c23; -[SCOperaLongFormVideoViewController videoControlsViewDidPressShowActionMenuButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86bb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b35c);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_11276b378;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12a760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b86c24; end: 107b86c27; -[SCOperaLongFormVideoViewController videoControlsViewDidPressSendButton:] */

void FUN_107b86c24(void)

{
  return;
}



/* Entry: 107b86c28; end: 107b86c2b; -[SCOperaLongFormVideoViewController videoControlsViewCurrentTime:] */

void FUN_107b86c28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentTime_1125b5ac8);
  return;
}



/* Entry: 107b86c2c; end: 107b86c2f; -[SCOperaLongFormVideoViewController videoControlsViewDuration:] */

void FUN_107b86c2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_duration_1125c0600);
  return;
}



/* Entry: 107b86c30; end: 107b86c87; -[SCOperaLongFormVideoViewController currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86c30(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_11276b33c);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bf60480(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b86c88; end: 107b86cff; -[SCOperaLongFormVideoViewController duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86c88(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_11276b33c);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bf8b160(param_1,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b86d00; end: 107b86d33; -[SCOperaLongFormVideoViewController totalVideoDurationSeconds] */

void FUN_107b86d00(void)

{
  undefined1 auStack_28 [24];
  
  func_0x00010bf8b160(auStack_28);
  _CMTimeGetSeconds(auStack_28);
  return;
}



/* Entry: 107b86d34; end: 107b86e6f; -[SCOperaLongFormVideoViewController rotateVideoBasedOnOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86d34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  
  if ((*(byte *)(param_1 + _DAT_11276b360) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ed100();
  _objc_release(puVar1);
  if (puVar2 + -3 < (undefined *)0x2) {
    pbVar7 = (byte *)(param_1 + _DAT_11276b32c);
  }
  else {
    if (puVar2 != (undefined *)0x1) {
      return;
    }
    pbVar7 = (byte *)(param_1 + _DAT_11276b32c);
    if ((*pbVar7 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276b320);
      func_0x00010bf70ba0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0708c0();
      if ((int)uVar4 == 0) {
        lVar5 = *(long *)(param_1 + _DAT_11276b33c);
        func_0x00010c100720();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar5);
        _objc_release(uVar3);
        if (lVar6 != 0) {
          return;
        }
      }
      else {
        _objc_release(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2124b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTargetOrientation_andRotateVi_112662350,puVar2,(*pbVar7 ^ 0xff) & 1);
  return;
}



/* Entry: 107b86e70; end: 107b86ebf; -[SCOperaLongFormVideoViewController supportedInterfaceOrientations] */

undefined8 FUN_107b86e70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c292ac0();
  _objc_release(puVar2);
  uVar1 = 0x1a;
  if (puVar3 != (undefined *)0x1) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 107b86ec0; end: 107b8715f; -[SCOperaLongFormVideoViewController setTargetOrientation:andRotateView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b86ec0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = (long)_DAT_11276b338;
  if (*(long *)(param_1 + lVar5) != param_3) {
    if (param_3 - 3U < 2) {
      if (param_3 == 4) {
        uVar7 = 0xbff921fb54442d18;
      }
      else {
        uVar7 = 0x3ff921fb54442d18;
      }
      _CGAffineTransformMakeRotation(&uStack_90,uVar7);
    }
    else {
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    *(long *)(param_1 + lVar5) = param_3;
    lVar4 = (long)_DAT_11276b368;
    func_0x00010c15bc60(*(undefined8 *)(param_1 + lVar4));
    func_0x00010beabd00(param_1);
    if ((*(long *)(param_1 + lVar5) != 3) && (*(long *)(param_1 + lVar5) == 1)) {
      puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ed100();
      _objc_release(puVar1);
    }
    lVar6 = (long)_DAT_11276b35c;
    uVar7 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf50040(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272b60();
    _objc_release(uVar7);
    lVar5 = param_1 + _DAT_11276b378;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c12a780();
    _objc_release(lVar5);
    func_0x00010c236740(*(undefined8 *)(param_1 + lVar4));
    if (param_4 != 0) {
      if (*(char *)(param_1 + _DAT_11276b32c) == '\x01') {
        puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
        func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar1);
        _objc_release(puVar2);
        _objc_release(puVar1);
        uVar7 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c2334a0(uVar7);
        func_0x00010c236740(uVar7);
      }
      else {
        lVar5 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          func_0x00010c27a460(&uStack_c0,lVar5);
        }
        uStack_e8 = uStack_88;
        uStack_f0 = uStack_90;
        uStack_d8 = uStack_78;
        uStack_e0 = uStack_80;
        uStack_c8 = uStack_68;
        uStack_d0 = uStack_70;
        puVar3 = &uStack_c0;
        _CGAffineTransformEqualToTransform(puVar3,&uStack_f0);
        _objc_release(lVar5);
        if (((ulong)puVar3 & 1) == 0) {
          func_0x00010c16a740(*(undefined8 *)(param_1 + _DAT_11276b390),
                              *(undefined8 *)(param_1 + lVar6));
          uStack_b8 = uStack_88;
          uStack_c0 = uStack_90;
          uStack_a8 = uStack_78;
          uStack_b0 = uStack_80;
          uStack_98 = uStack_68;
          uStack_a0 = uStack_70;
          func_0x00010c141a00(param_1);
        }
      }
    }
  }
  return;
}



/* Entry: 107b87160; end: 107b8728f; -[SCOperaLongFormVideoViewController rotateVideoWithTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87160(double param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  double dStack_b0;
  double dStack_a8;
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
  
  lVar2 = (long)_DAT_11276b35c;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  dVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetHeight();
  dVar5 = dVar3;
  if (dVar3 <= param_1) {
    dVar5 = param_1;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetWidth();
  dVar4 = dVar3;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetHeight();
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  uStack_48 = param_4[5];
  uStack_50 = param_4[4];
  iVar1 = (int)&uStack_70;
  _CGAffineTransformIsIdentity();
  dStack_a8 = dVar5;
  if (iVar1 == 0) {
    dStack_a8 = dVar3;
  }
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_b0 = dVar3;
  if (iVar1 == 0) {
    dStack_b0 = dVar5;
  }
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107b87290;
  puStack_c0 = &UNK_1109fe8c8;
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  uStack_88 = param_4[3];
  uStack_90 = param_4[2];
  uStack_78 = param_4[5];
  uStack_80 = param_4[4];
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107b87398;
  puStack_e8 = &UNK_110841f20;
  lStack_e0 = param_2;
  lStack_b8 = param_2;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_d8,
                      &puStack_100);
  return;
}



/* Entry: 107b87290; end: 107b87397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87290(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = (long)_DAT_11276b35c;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4);
  uVar5 = param_1;
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4));
  func_0x00010bc85160();
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4));
  uStack_78 = *(undefined8 *)(param_2 + 0x40);
  uStack_80 = *(undefined8 *)(param_2 + 0x38);
  uStack_68 = *(undefined8 *)(param_2 + 0x50);
  uStack_70 = *(undefined8 *)(param_2 + 0x48);
  uStack_58 = *(undefined8 *)(param_2 + 0x60);
  uStack_60 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar4),param_3,&uStack_80);
  return;
}



/* Entry: 107b87398; end: 107b873d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87398(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276b368);
    uVar1 = uVar2;
    func_0x00010c2334a0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c236750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_showCaption__11266b3f8,uVar1);
    return;
  }
  return;
}



/* Entry: 107b873d8; end: 107b8744b; -[SCOperaLongFormVideoViewController didRotateFromInterfaceOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b873d8(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didRotateFromInterfaceOrientatio_1125388d0);
  if (*(char *)(param_1 + _DAT_11276b32c) == '\x01') {
    lVar2 = (long)_DAT_11276b368;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c2334a0();
    if (iVar1 != 0) {
      func_0x00010c236740(*(undefined8 *)(param_1 + lVar2));
    }
  }
  return;
}



/* Entry: 107b8744c; end: 107b8749b; -[SCOperaLongFormVideoViewController preferredInterfaceOrientationForPresentation] */

void FUN_107b8744c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x000100456ca0();
  if ((int)uVar1 != 0) {
    puStack_28 = PTR_PTR_1126fa0d8;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_preferredInterfaceOrientationFor_11261f540);
  }
  return;
}



/* Entry: 107b8749c; end: 107b874ab; -[SCOperaLongFormVideoViewController updateWithScreenshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b8749c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b35c),PTR_s_setupScreenshot__112667f38);
  return;
}



/* Entry: 107b874ac; end: 107b874c7; -[SCOperaLongFormVideoViewController didSetFullscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b874ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b370) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c15bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),
             PTR_s_sendEventDidChangeConfiguration_112634938);
  return;
}



/* Entry: 107b874c8; end: 107b874db; -[SCOperaLongFormVideoViewController setResumeVideoPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b874c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e46f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_setProgress_forIndex__112656be0,0);
  return;
}



/* Entry: 107b874dc; end: 107b874eb; -[SCOperaLongFormVideoViewController videoParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b874dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_videoParameters_112684440);
  return;
}



/* Entry: 107b874ec; end: 107b877bb; -[SCOperaLongFormVideoViewController additionalVideoParamters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b874ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar21 = (long)_DAT_11276b35c;
  uVar2 = *(undefined8 *)(param_5 + lVar21);
  puStack_d0 = puVar1;
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afc0();
  func_0x00010c0df720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2348;
  puStack_a0 = puVar4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_5 + lVar21);
  puStack_c8 = puVar20;
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29afc0();
  func_0x00010c0df720(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2348;
  puStack_98 = puVar18;
  func_0x00010c07a740();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c0 = puVar7;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,
                      *(long *)(param_5 + _DAT_11276b338) == 1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2348;
  puStack_90 = puVar8;
  func_0x00010c074120();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = puVar9;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,
                      *(undefined1 *)(param_5 + _DAT_11276b370));
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2348;
  puStack_88 = puVar10;
  func_0x00010c0cd980();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar11;
  func_0x00010c0df720(*(undefined8 *)(param_5 + _DAT_11276b384));
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2348;
  puStack_80 = puVar12;
  func_0x00010c0c2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_5 + _DAT_11276b388);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar13;
  func_0x00010c0df720(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar14;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_a0,&puStack_d0,6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar18);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar20);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar16 = *(long *)(puVar1 + _DAT_11276b33c);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar16;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar21;
    func_0x00010c0ef240();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar17;
    func_0x00010bf529e0();
    _objc_release(lVar17);
    _objc_release(lVar21);
    _objc_release(lVar16);
    if (lVar19 == 0) {
      lVar21 = (long)_DAT_11276b35c;
    }
    else {
      puVar18 = *(undefined **)(puVar1 + _DAT_11276b368);
      func_0x00010bfe8c40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      lVar21 = (long)_DAT_11276b35c;
      uVar5 = *(undefined8 *)(puVar1 + lVar21);
      uVar6 = param_3;
      uVar2 = param_4;
      func_0x00010c100fe0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c100c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29afc0();
      puVar15 = puVar18;
      func_0x00010c14e2e0(param_3,param_4,uVar22,param_2,uVar6,uVar2,puVar18,param_6,
                          *(undefined8 *)(puVar1 + _DAT_11276b338));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(puVar4);
      uVar3 = uVar22;
      uVar6 = param_2;
      _objc_release(puVar18);
      uVar22 = param_3;
      param_2 = param_4;
      param_3 = uVar3;
      param_4 = uVar6;
      if (puVar15 != (undefined *)0x0) goto _objc_autoreleaseReturnValue;
    }
    lVar19 = *(long *)(puVar1 + lVar21);
    func_0x00010bfb12e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar19;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar19);
    uVar3 = uVar22;
    if (lVar17 != 0) {
      puVar20 = *(undefined **)(puVar1 + lVar21);
      func_0x00010bfb12e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar20;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf20c00();
      uVar5 = *(undefined8 *)(puVar1 + lVar21);
      uVar6 = uVar3;
      uVar2 = param_4;
      func_0x00010bfb12e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf869c0();
      puVar15 = puVar4;
      func_0x00010c14e2e0(uVar3,param_4,uVar22,param_2,uVar6,uVar2,puVar4,param_6,
                          *(undefined8 *)(puVar1 + _DAT_11276b338));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar18);
      _objc_release(puVar4);
      _objc_release(puVar20);
      param_3 = uVar22;
      param_4 = param_2;
      if (puVar15 != (undefined *)0x0) goto _objc_autoreleaseReturnValue;
    }
    puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar18 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe9780(param_3,param_4,uVar3,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar4);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107b877bc; end: 107b87aab; -[SCOperaLongFormVideoViewController imageSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b877bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *(long *)(param_5 + _DAT_11276b33c);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar1);
  if (lVar8 == 0) {
    lVar10 = (long)_DAT_11276b35c;
  }
  else {
    puVar3 = *(undefined **)(param_5 + _DAT_11276b368);
    func_0x00010bfe8c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar10 = (long)_DAT_11276b35c;
    uVar5 = *(undefined8 *)(param_5 + lVar10);
    uVar11 = param_3;
    uVar12 = param_4;
    func_0x00010c100fe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c100c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29afc0();
    puVar7 = puVar3;
    func_0x00010c14e2e0(param_3,param_4,param_1,param_2,uVar11,uVar12,puVar3,param_6,
                        *(undefined8 *)(param_5 + _DAT_11276b338));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    uVar6 = param_1;
    uVar11 = param_2;
    _objc_release(puVar3);
    param_1 = param_3;
    param_2 = param_4;
    param_3 = uVar6;
    param_4 = uVar11;
    if (puVar7 != (undefined *)0x0) goto LAB_107b87a8c;
  }
  lVar8 = *(long *)(param_5 + lVar10);
  func_0x00010bfb12e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  uVar6 = param_1;
  if (lVar2 != 0) {
    puVar9 = *(undefined **)(param_5 + lVar10);
    func_0x00010bfb12e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf20c00();
    uVar5 = *(undefined8 *)(param_5 + lVar10);
    uVar11 = uVar6;
    uVar12 = param_4;
    func_0x00010bfb12e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf869c0();
    puVar7 = puVar4;
    func_0x00010c14e2e0(uVar6,param_4,param_1,param_2,uVar11,uVar12,puVar4,param_6,
                        *(undefined8 *)(param_5 + _DAT_11276b338));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar9);
    param_3 = param_1;
    param_4 = param_2;
    if (puVar7 != (undefined *)0x0) goto LAB_107b87a8c;
  }
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe9780(param_3,param_4,uVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
LAB_107b87a8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107b87aac; end: 107b87afb; -[SCOperaLongFormVideoViewController snapshotFromPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87aac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b35c);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2433a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b87afc; end: 107b87b0b; -[SCOperaLongFormVideoViewController isShowingVideoFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_isShowingVideoFrame_1125fd210);
  return;
}



/* Entry: 107b87b0c; end: 107b87b13; -[SCOperaLongFormVideoViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_107b87b0c(void)

{
  return 0;
}



/* Entry: 107b87b14; end: 107b87b1b; -[SCOperaLongFormVideoViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_107b87b14(void)

{
  return 1;
}



/* Entry: 107b87b1c; end: 107b87b2b; -[SCOperaLongFormVideoViewController videoID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b87b1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b318);
}



/* Entry: 107b87b2c; end: 107b87b4b; -[SCOperaLongFormVideoViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87b2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b87b4c; end: 107b87b5f; -[SCOperaLongFormVideoViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b378,param_3);
  return;
}



/* Entry: 107b87b60; end: 107b87b7f; -[SCOperaLongFormVideoViewController pageableViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87b60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b87b80; end: 107b87b93; -[SCOperaLongFormVideoViewController setPageableViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87b80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b394,param_3);
  return;
}



/* Entry: 107b87b94; end: 107b87d07; -[SCOperaLongFormVideoViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b87b94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276b394);
  _objc_destroyWeak(param_1 + _DAT_11276b378);
  _objc_storeStrong(param_1 + _DAT_11276b318,0);
  _objc_storeStrong(param_1 + _DAT_11276b344,0);
  _objc_storeStrong(param_1 + _DAT_11276b38c,0);
  _objc_storeStrong(param_1 + _DAT_11276b364,0);
  _objc_storeStrong(param_1 + _DAT_11276b334,0);
  _objc_storeStrong(param_1 + _DAT_11276b34c,0);
  _objc_storeStrong(param_1 + _DAT_11276b354,0);
  _objc_storeStrong(param_1 + _DAT_11276b358,0);
  _objc_storeStrong(param_1 + _DAT_11276b350,0);
  _objc_storeStrong(param_1 + _DAT_11276b320,0);
  _objc_storeStrong(param_1 + _DAT_11276b31c,0);
  _objc_destroyWeak(param_1 + _DAT_11276b398);
  _objc_storeStrong(param_1 + _DAT_11276b328,0);
  _objc_storeStrong(param_1 + _DAT_11276b324,0);
  _objc_storeStrong(param_1 + _DAT_11276b330,0);
  _objc_storeStrong(param_1 + _DAT_11276b380,0);
  _objc_storeStrong(param_1 + _DAT_11276b368,0);
  _objc_storeStrong(param_1 + _DAT_11276b33c,0);
  _objc_storeStrong(param_1 + _DAT_11276b340,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b35c,0);
  return;
}



/* Entry: 107b87d08; end: 107b87e27; -[SCOperaPlayerQueueManager initWithKVOController:configuration:configProvider:notificationCenter:] */

undefined1 * FUN_107b87d08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  puStack_38 = PTR_PTR_1126fa0e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_retain(in_x5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = in_x5;
    _objc_release(uVar4);
    func_0x00010befa240(in_x5);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    uVar4 = in_x4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf8f060();
    *(char *)((long)puVar1 + 0x30) = (char)uVar3;
    _objc_release(uVar4);
    func_0x00010beaef00(puVar1);
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  return (undefined1 *)puVar1;
}



/* Entry: 107b87e28; end: 107b87e83; -[SCOperaPlayerQueueManager dealloc] */

void FUN_107b87e28(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d560(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bde1160(param_1);
  puStack_28 = PTR_PTR_1126fa0e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b87e84; end: 107b88137; -[SCOperaPlayerQueueManager _setupPlayer] */

void FUN_107b87e84(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) || (func_0x00010c252d60(), lVar1 == 2)) {
    func_0x00010c281a80(*(undefined8 *)(param_1 + 0x10));
    func_0x00010bde1160(param_1);
    puVar2 = PTR_PTR_1126d6ca0;
    _objc_alloc();
    func_0x00010c037060();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar5);
    func_0x00010c161660(*(undefined8 *)(param_1 + 8));
    func_0x00010c1675a0(*(undefined8 *)(param_1 + 8));
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    iVar7 = 10;
    dVar9 = 1.0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _CMTimeMakeWithSeconds(auStack_78,dVar9,600);
      func_0x00010c297200(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar3);
      dVar9 = dVar9 + 1.0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar3;
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_initWeak(auStack_78,param_1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bef7320();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0760(uVar5);
    _objc_release(puVar3);
    func_0x00010be66b20(param_1);
    func_0x00010be671a0(param_1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 107b88138; end: 107b8814f;  */

void FUN_107b88138(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107b88150; end: 107b88397; -[SCOperaPlayerQueueManager promoteItem:] */

void FUN_107b88150(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  puVar1 = *(undefined1 **)(param_1 + 8);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != param_3) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde09e0(param_1,param_2,uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    puVar8 = param_3;
    func_0x00010bfecde0();
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (lVar5 == 1) {
      func_0x00010befe380();
    }
    else {
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf4b900();
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        func_0x00010c12cc20(*(undefined8 *)(param_1 + 8),param_2,param_3);
      }
      lVar5 = *(long *)(param_1 + 8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar6 = *(undefined **)(param_1 + 8);
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0d3c80();
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
      func_0x00010c066b00(puVar7,param_2,param_3,0);
      func_0x00010c12aa40(param_1);
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      _objc_retain(puVar7);
      puVar6 = puVar7;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        lVar5 = *plStack_110;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_110 != lVar5) {
              _objc_enumerationMutation(puVar7);
            }
            func_0x00010c066980(param_1,param_2,*(undefined8 *)(lStack_118 + (long)puVar10 * 8));
            puVar10 = puVar10 + 1;
          } while (puVar6 != puVar10);
          puVar6 = puVar7;
          puVar9 = &uStack_120;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar8 = (undefined1 *)puVar9;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar1 = *(undefined1 **)(param_3 + 8);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != puVar8) {
    func_0x00010bdd1a60(param_3,param_2,puVar8);
    uVar2 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf2cce0(uVar2,param_2,puVar8,0);
    if ((int)uVar2 != 0) {
      func_0x00010c0669a0(*(undefined8 *)(param_3 + 8),param_2,puVar8,0);
    }
    func_0x00010be67200(param_3,param_2,puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107b88398; end: 107b88427; -[SCOperaPlayerQueueManager insertItem:] */

void FUN_107b88398(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010bdd1a60(param_1,param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf2cce0(uVar2,param_2,param_3,0);
    if ((int)uVar2 != 0) {
      func_0x00010c0669a0(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
    }
    func_0x00010be67200(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b88428; end: 107b88493; -[SCOperaPlayerQueueManager removeItem:] */

void FUN_107b88428(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == param_3) {
    func_0x00010bde09e0(param_1,param_2,param_3);
  }
  func_0x00010c12cc20(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b88494; end: 107b8849b; -[SCOperaPlayerQueueManager removeAll] */

void FUN_107b88494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllItems_112628578);
  return;
}



/* Entry: 107b8849c; end: 107b884ff; -[SCOperaPlayerQueueManager advance] */

void FUN_107b8849c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde09e0(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010befe390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_advanceToNextItem_11259d288);
  return;
}



/* Entry: 107b88500; end: 107b88503; -[SCOperaPlayerQueueManager didReceiveMediaServicesWereResetNotification] */

void FUN_107b88500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be751b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playerStatusDidChange_11257ae08);
  return;
}



/* Entry: 107b88504; end: 107b885e7; -[SCOperaPlayerQueueManager _automaticallyMinimizeStallingIfNecessary:] */

/* WARNING: Possible PIC construction at 0x000107b885c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b885c4) */

void FUN_107b88504(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    param_3 = 1;
  }
  else {
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(0);
      return;
    }
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_setAutomaticallyWaitsToMinimizeS_112638f38,param_3);
  return;
}



/* Entry: 107b885e8; end: 107b88623; -[SCOperaPlayerQueueManager _playerStatusDidChange] */

void FUN_107b885e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c252d60();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010beaef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPlayer_112589568);
    return;
  }
  return;
}



/* Entry: 107b88624; end: 107b8862b; -[SCOperaPlayerQueueManager _clearKVOObserversForPlayerItem:] */

void FUN_107b88624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_unobserve__11267e0c8)
  ;
  return;
}



/* Entry: 107b8862c; end: 107b88663; -[SCOperaPlayerQueueManager _clearTimeObserverTokenIfNecessary] */

void FUN_107b8862c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c12eb40(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b88664; end: 107b88687; -[SCOperaPlayerQueueManager _clearObserversForCurrentItem:] */

void FUN_107b88664(undefined8 param_1)

{
  func_0x00010bde06a0();
                    /* WARNING: Could not recover jumptable at 0x00010bde1170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearTimeObserverTokenIfNecessa_112555df8);
  return;
}



/* Entry: 107b88688; end: 107b886cb; -[SCOperaPlayerQueueManager _observersForPlayerItem:] */

void FUN_107b88688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be671c0(param_1,param_2,param_3);
  func_0x00010be660a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b886cc; end: 107b887df; -[SCOperaPlayerQueueManager _observerStatusForPlayerItem:] */

void FUN_107b886cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b887e0; end: 107b8898f;  */

void FUN_107b887e0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_107b88970;
  puVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar2 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_107b88964:
    _objc_release(puVar3);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      _objc_release();
      _objc_release(puVar2);
    }
    else {
      puVar5 = puVar2;
      func_0x00010c071ae0(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (((ulong)puVar5 & 1) != 0) goto LAB_107b88970;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c252d60();
    puVar3 = PTR_PTR_1126d6ca8;
    if (lVar4 == 2) {
      uVar6 = *(undefined8 *)(lVar1 + 0x38);
      puVar5 = *(undefined **)(param_1 + 0x20);
      puVar2 = puVar5;
      func_0x00010bf987e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf764e0(puVar3,param_2,puVar5,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6,param_2,puVar3);
      goto LAB_107b88964;
    }
    if (lVar4 != 1) goto LAB_107b88970;
    uVar6 = *(undefined8 *)(lVar1 + 0x38);
    puVar2 = PTR_PTR_1126d6ca8;
    func_0x00010bf728e0(PTR_PTR_1126d6ca8,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar2);
  }
  _objc_release(puVar2);
LAB_107b88970:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b88990; end: 107b88b6f; -[SCOperaPlayerQueueManager _observeEndOfPlaybackForPlayerItem:] */

void FUN_107b88990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107b88b70;
  puStack_90 = &UNK_1109fe8f8;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x00010befa280(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_3);
  func_0x00010befa280(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 107b88b70; end: 107b88bdb;  */

void FUN_107b88b70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    puVar2 = PTR_PTR_1126d6ca8;
    func_0x00010bf75d00(PTR_PTR_1126d6ca8,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b88bdc; end: 107b88cb7;  */

void FUN_107b88bdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126d6ca8;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_2;
    func_0x00010c292820(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf764e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b88cb8; end: 107b88da3; -[SCOperaPlayerQueueManager _observerStatusForPlayer] */

void FUN_107b88cb8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e0780(uVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b88da4; end: 107b88f1f;  */

void FUN_107b88da4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  if (param_1 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x00010c26f180();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d6ca8;
    if (uVar3 == 2) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf5f0a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7b700(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (uVar3 == 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf5f0a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7ba40(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar3 != 0) goto LAB_107b88f00;
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf5f0a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf78320(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
LAB_107b88f00:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b88f20; end: 107b89013; -[SCOperaPlayerQueueManager _observeProgressOfPlayer] */

void FUN_107b88f20(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _CMTimeMake(auStack_50,0x14,600);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_58,auStack_38);
  func_0x00010befa7a0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b89014; end: 107b89137;  */

void FUN_107b89014(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    if (*(long *)(param_2 + 8) == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_58);
    }
    _CMTimeGetSeconds(&uStack_58);
    lVar1 = *(long *)(param_2 + 8);
    dVar5 = param_1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_58,lVar1);
    }
    _CMTimeGetSeconds(&uStack_58);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d6ca8;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 <= dVar5) {
      func_0x00010bf78cc0(param_1,puVar3,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf75d00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar4,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107b89138; end: 107b8913f; -[SCOperaPlayerQueueManager player] */

undefined8 FUN_107b89138(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b89140; end: 107b89147; -[SCOperaPlayerQueueManager playbackLifecycleEventObserver] */

undefined8 FUN_107b89140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107b89148; end: 107b891a7; -[SCOperaPlayerQueueManager .cxx_destruct] */

void FUN_107b89148(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b891a8; end: 107b89297; +[SCOperaRemoteVideoView viewWithFrame:delegate:primaryColor:disableControls:hideControls:showActionMenuButtonEnabled:] */

void FUN_107b891a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d6c98;
  _objc_alloc(PTR_PTR_1126d6c98);
  puVar2 = auStack_68;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c014340(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b89298; end: 107b893cf; -[SCOperaRemoteVideoView initWithFrame:delegate:primaryColor:disableControls:hideControls:showActionMenuButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107b89298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             ulong param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_7);
  _objc_retain(param_8);
  puStack_70 = PTR_PTR_1126fa0e8;
  puVar1 = &uStack_78;
  uStack_78 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    if ((param_9 & 1) == 0) {
      func_0x00010beaef20(puVar1);
      func_0x00010beab660(puVar1);
      func_0x00010c228820(puVar1);
      func_0x00010c229640(puVar1);
    }
    puVar2 = auStack_68;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276b3b8,puVar2);
    _objc_release(puVar2);
    func_0x00010beb0620(puVar1);
  }
  _objc_release(param_8);
  _objc_destroyWeak(auStack_68);
  return puVar1;
}



/* Entry: 107b893d0; end: 107b8947b; -[SCOperaRemoteVideoView _setupPlayerView] */

void FUN_107b893d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9e78;
  _objc_opt_new(PTR_PTR_1126c9e78);
  func_0x00010c1ddc80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c100fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c100fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c100fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b8947c; end: 107b8951f; -[SCOperaRemoteVideoView _setupCaptionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b8947c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar4 = (long)_DAT_11276b3bc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  lVar3 = (long)_DAT_11276b3c0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1bdc00(0x3ff8000000000000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107b89520; end: 107b895ab; -[SCOperaRemoteVideoView updateWithPrimaryColor:showActionMenuButtonEnabled:] */

void FUN_107b89520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf50040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28cba0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c229640(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b895ac; end: 107b895e3; -[SCOperaRemoteVideoView setRotateButtonVisible:] */

void FUN_107b895ac(undefined8 param_1)

{
  func_0x00010bf50040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b895e4; end: 107b89637; -[SCOperaRemoteVideoView _setupTapGestureRecognizer] */

void FUN_107b895e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010bef9040(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b89638; end: 107b89723; -[SCOperaRemoteVideoView setupControlsViewWithPrimaryColor:hideControls:showActionMenuButtonEnabled:] */

void FUN_107b89638(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6cb0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c039f40();
  _objc_release(param_3);
  func_0x00010c183a20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf50040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  if (param_4 != 0) {
    uVar2 = param_1;
    func_0x00010bf50040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bf50040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b89724; end: 107b8987b; -[SCOperaRemoteVideoView setupSpinnerWithPrimaryColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b89724(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6890;
  if ((param_4 != 0) && (*(long *)(param_2 + _DAT_11276b3c4) == 0)) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010bfffb60();
    _objc_release(param_4);
    func_0x00010c162d60(param_2,param_3,puVar1);
    _objc_release(puVar1);
  }
  lVar2 = param_2;
  func_0x00010bef15e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8560();
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bef15e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(lVar2);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  lVar2 = param_2;
  func_0x00010bef15e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,uVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bef15e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_2,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010bef15e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b8987c; end: 107b899d7; -[SCOperaRemoteVideoView setupFirstFrameView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b8987c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_7);
  if (param_7 == 0) {
    func_0x00010bfb12e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  else {
    lVar3 = param_5;
    if (*(long *)(param_5 + _DAT_11276b3c8) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
      func_0x00010c19d020(param_5,param_6,puVar1);
      _objc_release(puVar1);
      lVar2 = param_5;
      func_0x00010bfb12e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182220();
      _objc_release(lVar2);
      func_0x00010bfb12e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fa0(param_5,param_6,lVar3,0);
    }
    else {
      func_0x00010bfb12e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
    }
    _objc_release(lVar3);
    func_0x00010bf20c00(param_5);
    func_0x00010bfb12e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107b899d8; end: 107b89b07; -[SCOperaRemoteVideoView setupScreenshot:] */

void FUN_107b899d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 != 0) {
    _objc_retain(param_7);
    uVar1 = param_5;
    func_0x00010c151860(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    func_0x00010c1f7800(param_5,param_6,param_7);
    _objc_release(param_7);
    uVar1 = param_5;
    func_0x00010c151860(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_5,param_6,uVar1,0);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c151860(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar1);
    func_0x00010bedef20(param_5);
    uVar1 = param_5;
    func_0x00010c151860(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c100fe0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b89b08; end: 107b89f43; -[SCOperaRemoteVideoView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b89b08(long param_1)

{
  double *pdVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa0e8;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  pdVar1 = (double *)(param_1 + _DAT_11276b3cc);
  lVar3 = param_1;
  func_0x00010bf20c00();
  iVar2 = (int)lVar3;
  dVar7 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar11 = pdVar1[2];
  dVar12 = pdVar1[3];
  _CGRectEqualToRect();
  if ((iVar2 == 0) || (*(char *)(param_1 + _DAT_11276b3d0) == '\x01')) {
    func_0x00010bf20c00(param_1);
    *pdVar1 = dVar7;
    pdVar1[1] = dVar9;
    pdVar1[2] = dVar11;
    pdVar1[3] = dVar12;
    func_0x00010bf20c00(param_1);
    lVar3 = param_1;
    func_0x00010bfb12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar7,dVar9);
    _objc_release(lVar3);
    func_0x00010bf20c00(param_1);
    lVar3 = param_1;
    func_0x00010bf50040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar7,dVar9);
    _objc_release(lVar3);
    func_0x00010bf20c00(param_1);
    _CGRectGetMidX();
    dVar9 = dVar7;
    func_0x00010bf20c00(param_1);
    _CGRectGetMidY();
    lVar3 = param_1;
    func_0x00010bef15e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = dVar7;
    dVar13 = dVar9;
    func_0x00010c17a6a0(dVar7,dVar9);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c151860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = param_1;
    if (lVar3 == 0) {
      lVar3 = (long)_DAT_11276b3d4;
      dVar14 = *(double *)(param_1 + lVar3);
      func_0x00010bf20c00(param_1);
      if (dVar14 <= 0.0) {
        dVar14 = dVar8;
        func_0x00010bf20c00(param_1);
        _CGRectGetHeight();
        if (dVar14 <= 320.0) {
          dVar14 = 320.0;
        }
        func_0x00010bc850d8(dVar8,dVar13,dVar11,dVar12,dVar14);
      }
      else {
        _CGRectGetWidth(dVar8,dVar13,dVar11,dVar12);
        dVar14 = dVar8;
        func_0x00010bf20c00(param_1);
        _CGRectGetWidth();
        dVar10 = *(double *)(param_1 + lVar3);
        dVar13 = dVar14 * dVar10;
        func_0x00010bf20c00(param_1);
        _AVMakeRectWithAspectRatioInsideRect(dVar8,dVar13,dVar14,dVar10,dVar11,dVar12);
        dVar11 = dVar14;
        dVar12 = dVar10;
      }
      func_0x00010c100fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar8,dVar13);
    }
    else {
      func_0x00010bedef20(param_1);
      func_0x00010c151860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      lVar3 = param_1;
      func_0x00010c100fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar8,dVar13);
      _objc_release(lVar3);
    }
    _objc_release(lVar6);
    lVar3 = param_1;
    func_0x00010c100fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar7,dVar9);
    _objc_release(lVar3);
    lVar6 = (long)_DAT_11276b3bc;
    lVar3 = *(long *)(param_1 + lVar6);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    dVar9 = dVar11;
    dVar8 = dVar12;
    if (lVar3 != 0) {
      func_0x00010c2a5040(param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf0e540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20bc0(dVar7,0x7fefffffffffffff);
      dVar9 = dVar11;
      dVar8 = dVar12;
      _objc_release(uVar4);
      func_0x00010c202c80(dVar11,dVar12,*(undefined8 *)(param_1 + lVar6));
    }
    func_0x00010bf20c00(param_1);
    func_0x00010bf20c00(param_1);
    if (dVar9 <= dVar8) {
      func_0x00010bf34840(param_1);
    }
    else {
      func_0x00010bf348c0();
    }
    func_0x00010c17a840(*(undefined8 *)(param_1 + lVar6));
    lVar3 = param_1;
    func_0x00010bf50040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf20180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274140();
    func_0x00010c173440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar5);
    _objc_release(lVar3);
    *(undefined1 *)(param_1 + _DAT_11276b3d0) = 0;
  }
  return;
}


