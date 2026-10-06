/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dbb478; end: 107dbb487; -[SCOperaRotatingLayerPinchController addPinchGestureToTarget:] */

void FUN_107dbb478(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_addGestureRecognizer__11259bdb8,*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 107dbb488; end: 107dbb4d3; -[SCOperaRotatingLayerPinchController setInPinchedState:] */

void FUN_107dbb488(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c080580();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c231d00();
    param_3 = (int)lVar1;
  }
  lVar1 = 8;
  if (param_3 == 0) {
    lVar1 = 0x10;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + lVar1);
  return;
}



/* Entry: 107dbb4d4; end: 107dbb4e3; -[SCOperaRotatingLayerPinchController isInPinchedState] */

bool FUN_107dbb4d4(long param_1)

{
  return *(double *)(param_1 + 0x18) < *(double *)(param_1 + 0x10);
}



/* Entry: 107dbb4e4; end: 107dbb5d3; -[SCOperaRotatingLayerPinchController setSuppressed:] */

/* WARNING: Possible PIC construction at 0x000107dbb534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107dbb538) */

void FUN_107dbb4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  func_0x00010c075560();
  if ((int)param_3 == 0) {
    uVar2 = param_1;
    func_0x00010c080580();
    uVar3 = (uint)uVar1 ^ (uint)uVar2;
  }
  else {
    uVar2 = param_1;
    func_0x00010c231d00();
    uVar3 = (uint)uVar2;
  }
  if ((uint)uVar1 == uVar3) {
    param_3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setIsSuppressingPinchState__11264ad98,param_3);
  return;
}



/* Entry: 107dbb5d4; end: 107dbb613;  */

void FUN_107dbb5d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dbb614; end: 107dbb68b; -[SCOperaRotatingLayerPinchController _adjustedVideoScaleFactor:] */

double FUN_107dbb614(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_2 + 8);
  if ((param_1 < dVar3) || (*(double *)(param_2 + 0x10) < param_1)) {
    if (dVar3 <= param_1) {
      dVar3 = *(double *)(param_2 + 0x10);
      dVar1 = (param_1 - dVar3) + 1.0;
      _log(dVar1);
      dVar2 = 3.6888794541139363;
    }
    else {
      dVar1 = ABS(dVar3 - param_1) + 1.0;
      _log(dVar1);
      dVar2 = -2.70805020110221;
    }
    param_1 = dVar3 + dVar1 / dVar2;
  }
  return param_1;
}



/* Entry: 107dbb68c; end: 107dbb6bf; -[SCOperaRotatingLayerPinchController _computeScaleProgress] */

double FUN_107dbb68c(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 8);
  dVar1 = 0.0;
  if (dVar3 <= dVar2) {
    dVar1 = 1.0;
    if (dVar2 <= *(double *)(param_1 + 0x10)) {
      dVar1 = (dVar2 - dVar3) / (*(double *)(param_1 + 0x10) - dVar3);
    }
  }
  return dVar1;
}



/* Entry: 107dbb6c0; end: 107dbb6cb; -[SCOperaRotatingLayerPinchController resetScaleWithNewScale:smallestScale:largestScale:] */

void FUN_107dbb6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(undefined8 *)(param_4 + 0x10) = param_3;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 8) = param_2;
  return;
}



/* Entry: 107dbb6cc; end: 107dbb96f; -[SCOperaRotatingLayerPinchController _handlePinch:] */

void FUN_107dbb6cc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  double dStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  func_0x00010bde4500(param_2);
  dVar7 = param_1;
  func_0x00010c14e120(param_4);
  *(double *)(param_2 + 0x18) = dVar7 * *(double *)(param_2 + 0x18);
  dVar5 = 1.0;
  func_0x00010c1f5fe0(param_4);
  func_0x00010c14e120(param_2);
  dVar7 = dVar5;
  func_0x00010bde4500(param_2);
  lVar4 = param_4;
  dVar6 = dVar7;
  func_0x00010c252440();
  if ((lVar4 == 3) || (lVar4 = param_4, func_0x00010c252440(), lVar4 == 4)) {
    func_0x00010c2979e0(param_4);
    bVar2 = dVar6 < -1.0;
    if (param_1 < 0.4) {
      bVar2 = 1.0 < dVar6;
    }
    bVar1 = 0;
    if (dVar7 < 0.4) {
      bVar1 = bVar2 ^ 1;
    }
    lVar4 = 8;
    if (!(bool)(bVar1 | (dVar6 < -1.0 && 0.4 <= param_1))) {
      lVar4 = 0x10;
    }
    dVar10 = *(double *)(param_2 + lVar4);
    *(double *)(param_2 + 0x18) = dVar10;
    dVar6 = *(double *)(param_2 + 0x20);
    _CGRectGetHeight(dVar6,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                     *(undefined8 *)(param_2 + 0x38));
    dVar5 = ABS(dVar10 - dVar5) * dVar6;
    func_0x00010c2979e0(param_4);
    dVar7 = *(double *)(param_2 + 0x20);
    _CGRectGetHeight(dVar7,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                     *(undefined8 *)(param_2 + 0x38));
    dVar7 = (dVar5 / dVar7) * 0.8;
    if (dVar7 <= 0.3) {
      dVar7 = 0.3;
    }
    dVar8 = 0.45;
    if (dVar7 <= 0.45) {
      dVar8 = dVar7;
    }
    func_0x00010c2979e0(param_4);
    dVar9 = 0.4;
    if (1.0 <= ABS(dVar7)) {
      dVar9 = dVar8;
    }
    _objc_initWeak(auStack_68,param_2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107dbb970;
    puStack_80 = &UNK_110846540;
    _objc_copyWeak(auStack_78,auStack_68);
    dStack_70 = dVar10;
    _objc_copyWeak(auStack_a0,auStack_68);
    func_0x00010bf03460(dVar9,0,0x3fe8000000000000,ABS(dVar6) / dVar5,puVar3);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else {
    *(undefined1 *)(param_2 + 0x51) = 1;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb1a0(dVar5);
    _objc_release(param_2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107dbb970; end: 107dbb9ef;  */

void FUN_107dbb970(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1a0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf6b020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb180(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dbb9f0; end: 107dbba1f;  */

void FUN_107dbb9f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1dbbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dbba20; end: 107dbba97; -[SCOperaRotatingLayerPinchController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107dbba20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == *(long *)(param_1 + 0x60)) && (lVar1 = param_4, func_0x00010c252440(), lVar1 == 1)
     ) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107dbba98; end: 107dbbaaf; -[SCOperaRotatingLayerPinchController delegate] */

void FUN_107dbba98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dbbab0; end: 107dbbabb; -[SCOperaRotatingLayerPinchController setDelegate:] */

void FUN_107dbbab0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 107dbbabc; end: 107dbbac3; -[SCOperaRotatingLayerPinchController shouldPinchWhenSuppressed] */

undefined1 FUN_107dbbabc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 107dbbac4; end: 107dbbacb; -[SCOperaRotatingLayerPinchController setShouldPinchWhenSuppressed:] */

void FUN_107dbbac4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107dbbacc; end: 107dbbad3; -[SCOperaRotatingLayerPinchController pinchingInProgress] */

undefined1 FUN_107dbbacc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 107dbbad4; end: 107dbbadb; -[SCOperaRotatingLayerPinchController setPinchingInProgress:] */

void FUN_107dbbad4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 107dbbadc; end: 107dbbae3; -[SCOperaRotatingLayerPinchController pinchGestureRecognizer] */

undefined8 FUN_107dbbadc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107dbbae4; end: 107dbbb13; -[SCOperaRotatingLayerPinchController setPinchGestureRecognizer:] */

void FUN_107dbbae4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107dbbb14; end: 107dbbb1b; -[SCOperaRotatingLayerPinchController isSuppressingPinchState] */

undefined1 FUN_107dbbb14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x52);
}



/* Entry: 107dbbb1c; end: 107dbbb23; -[SCOperaRotatingLayerPinchController setIsSuppressingPinchState:] */

void FUN_107dbbb1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 107dbbb24; end: 107dbbb4f; -[SCOperaRotatingLayerPinchController .cxx_destruct] */

void FUN_107dbbb24(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x58);
  return;
}



/* Entry: 107dbbb50; end: 107dbbc07; -[SCOperaRotatingVideoLayerView enableControls:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbbb50(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276f2ac;
  lVar1 = *(long *)(param_1 + lVar5);
  if (param_3 == 0) {
    if (lVar1 == 0) {
      return;
    }
    uVar4 = 1;
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d6cb0;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c039f40();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar4);
      _objc_release(puVar3);
      func_0x00010befbb60(param_1);
      lVar1 = *(long *)(param_1 + lVar5);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar4);
  return;
}



/* Entry: 107dbbc08; end: 107dbbc7f; -[SCOperaRotatingVideoLayerView setPlayerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbbc08(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276f2b0;
  if (*(long *)(param_1 + lVar2) != param_3) {
    if (param_3 == 0) {
      func_0x00010c12c960();
    }
    else {
      func_0x00010c066fa0(param_1,param_2,param_3,0);
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dbbc80; end: 107dbbcef; -[SCOperaRotatingVideoLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbbc80(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb148;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276f2ac));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276f2b0));
  return;
}



/* Entry: 107dbbcf0; end: 107dbbcff; -[SCOperaRotatingVideoLayerView controlsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dbbcf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f2ac);
}



/* Entry: 107dbbd00; end: 107dbbd0f; -[SCOperaRotatingVideoLayerView playerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dbbd00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f2b0);
}



/* Entry: 107dbbd10; end: 107dbbd4f; -[SCOperaRotatingVideoLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbbd10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f2b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f2ac,0);
  return;
}



/* Entry: 107dbbd50; end: 107dbbe8b; +[SCOperaRotatingVideoLayerViewController layerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:mediaDisplayStopwatch:eventAnnouncer:sharedResourceManager:notificationCenter:] */

void FUN_107dbbd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7db0;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_5;
  func_0x00010c0d78a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001b60(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,uVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dbbe8c; end: 107dbbfbb; -[SCOperaRotatingVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:] */

undefined8
FUN_107dbbe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b46f0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0d78a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001b60(param_1,param_2,param_3,param_4,param_5,0,puVar1,param_6,param_7,puVar2,uVar3)
  ;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107dbbfbc; end: 107dbc237; -[SCOperaRotatingVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:kvoController:mediaDisplayStopwatch:eventAnnouncer:sharedResourceManager:notificationCenter:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107dbbfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fb150;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_6;
    if (param_6 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b44c8;
      _objc_alloc();
      func_0x00010c030dc0();
    }
    lVar5 = (long)_DAT_11276f2b8;
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    if (param_6 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    lVar5 = (long)_DAT_11276f2bc;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276f2c0;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f2c4) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276f2c8) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f2cc) = 0xbff0000000000000;
    puVar2 = PTR_PTR_1126d6a90;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f2d0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f2d0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c48c0;
    _objc_alloc();
    func_0x00010c00c300();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f2d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f2d4) = puVar4;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11276f2d8,param_9);
    lVar5 = (long)_DAT_11276f2dc;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar3);
    func_0x00010be665a0(puVar1);
    _objc_release(puVar2);
    _objc_release(param_5);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 107dbc238; end: 107dbc23f;  */

void FUN_107dbc238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceMotionManager_1125b9c90);
  return;
}



/* Entry: 107dbc240; end: 107dbc283; -[SCOperaRotatingVideoLayerViewController dealloc] */

void FUN_107dbc240(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8da80();
  puStack_28 = PTR_PTR_1126fb150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107dbc284; end: 107dbc2cb; -[SCOperaRotatingVideoLayerViewController viewWillAppear:] */

void FUN_107dbc284(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010beaed80(param_1);
  return;
}



/* Entry: 107dbc2cc; end: 107dbc32b; -[SCOperaRotatingVideoLayerViewController viewWillFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbc2cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb150;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillFullyAppear_112685468);
  *(undefined1 *)(param_1 + _DAT_11276f2e0) = 1;
  func_0x00010beaed80(param_1);
  func_0x00010be4e3e0(param_1);
  return;
}



/* Entry: 107dbc32c; end: 107dbc59b; -[SCOperaRotatingVideoLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbc32c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fb150;
  lStack_80 = param_2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidFullyAppear_112684c88);
  lVar8 = (long)_DAT_11276f2e4;
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar8));
  *(undefined1 *)(param_2 + _DAT_11276f2e8) = 0;
  *(undefined8 *)(param_2 + _DAT_11276f2ec) = 0;
  *(undefined8 *)(param_2 + _DAT_11276f2f0) = 0;
  *(undefined1 *)(param_2 + _DAT_11276f2f4) = 1;
  uVar1 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d60();
  _objc_release(uVar7);
  _objc_release(uVar1);
  *(undefined1 *)(param_2 + _DAT_11276f2e0) = 1;
  func_0x00010be4e3e0(param_2);
  func_0x00010be9f700(param_2);
  lVar8 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c25c720();
  _objc_release(lVar8);
  if ((int)lVar2 != 0) {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107dbc59c;
    puStack_90 = &UNK_110842e18;
    param_1 = 0x3f000000;
    lStack_88 = param_2;
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_a8);
  }
  puVar3 = PTR_PTR_1126d2b60;
  _objc_alloc();
  lVar8 = param_2;
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_c0,lVar8);
  }
  _CMTimeGetSeconds(&uStack_c0);
  puVar4 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  lVar2 = param_2;
  func_0x00010c0eaa40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c0ea360(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036da0(param_1);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11276f2f8);
  *(undefined **)(param_2 + _DAT_11276f2f8) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar8);
  return;
}



/* Entry: 107dbc59c; end: 107dbc5a3;  */

void FUN_107dbc59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateLoadingIndicator_112594510);
  return;
}



/* Entry: 107dbc5a4; end: 107dbc5b7; -[SCOperaRotatingVideoLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbc5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276f2fc,param_3);
  return;
}



/* Entry: 107dbc5b8; end: 107dbc8f7; -[SCOperaRotatingVideoLayerViewController _loadPlayerViewIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbc5b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar10 = (long)_DAT_11276f2e4;
  lVar1 = *(long *)(param_1 + lVar10);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010beae080(param_1);
    lVar1 = (long)_DAT_11276f2d8;
    uVar2 = param_1 + lVar1;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c0c6680();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      lVar1 = param_1 + lVar1;
      _objc_loadWeakRetained(lVar1);
      lVar9 = param_1;
      func_0x00010c2991a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010be23380(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d6ad8;
      _objc_alloc(PTR_PTR_1126d6ad8);
      func_0x00010bff5cc0();
      lVar7 = lVar1;
      func_0x00010c101020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar9);
      _objc_release(lVar1);
      func_0x00010be8da80(param_1);
      func_0x00010c1ddc80(*(undefined8 *)(param_1 + lVar10));
      lVar1 = param_1;
      func_0x00010be74f60();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_11276f2d0;
      func_0x00010c1dda40(*(undefined8 *)(param_1 + lVar9));
      lVar10 = (long)_DAT_11276f2cc;
      dVar11 = *(double *)(param_1 + lVar10);
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      if (0.0 <= dVar11) {
        func_0x00010c2241a0((float)dVar11,uVar8);
        *(undefined8 *)(param_1 + lVar10) = 0xbff0000000000000;
      }
      else {
        lVar10 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar10;
        func_0x00010bf0efa0();
        func_0x00010c2241a0((float)((uint)lVar9 ^ 1),uVar8);
        _objc_release(lVar10);
      }
      func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276f2bc));
      lVar10 = lVar7;
      func_0x00010c100ae0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c288900(param_1);
      _objc_release(lVar10);
      lVar10 = lVar7;
      func_0x00010c100ae0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedd580(param_1);
      _objc_release(lVar10);
      _objc_initWeak(auStack_58,param_1);
      uVar8 = *(undefined8 *)(param_1 + _DAT_11276f2b8);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar1);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0e0780(uVar8);
      _objc_release(puVar6);
      func_0x00010be66a60(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar1);
      _objc_release(lVar7);
    }
  }
  return;
}



/* Entry: 107dbc8f8; end: 107dbc96b;  */

void FUN_107dbc8f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 2) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be74cc0(lVar1,param_2,uVar2,1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107dbc96c; end: 107dbcbef; -[SCOperaRotatingVideoLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbc96c(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [16];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_4);
  if (param_3 + -1 < (undefined *)0x3) {
    puVar1 = param_1;
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010c141a60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf7e940(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if ((param_1[_DAT_11276f300] & 1) == 0) {
    puVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar4);
    lVar12 = param_4;
    func_0x00010bf16020(param_4);
    lVar5 = param_4;
    func_0x00010bf16020();
    puVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c29a020();
    puVar3 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_107dc331c(puVar2,param_3,puVar3,lVar12,lVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      puVar1 = param_1 + _DAT_11276f2d8;
      _objc_loadWeakRetained();
      puVar2 = param_1;
      func_0x00010c2991a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010be23380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eaa40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d6ad8;
      _objc_alloc();
      func_0x00010bff5cc0();
      puVar4 = puVar2;
      func_0x00010c10a520(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(param_1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (puVar4 != (undefined *)0x0) {
    _objc_initWeak(auStack_f0,param_4);
    lVar9 = (long)_DAT_11276f2e4;
    uVar7 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11276f2b8;
    uVar10 = *(undefined8 *)(param_4 + lVar12);
    uVar8 = uVar7;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_107dbd120;
    puStack_108 = &UNK_110929b50;
    _objc_copyWeak(auStack_f8,auStack_f0);
    _objc_retain(uVar7);
    uStack_100 = uVar7;
    func_0x00010c0e0780(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_4 + lVar12);
    uVar8 = uVar7;
    func_0x00010c100ae0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar1;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_107dbd268;
    puStack_130 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_128,auStack_f0);
    func_0x00010c0e0780(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_4 + lVar12);
    uVar8 = uVar7;
    func_0x00010c100ae0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x107dbd2a4;
    puStack_158 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_150,auStack_f0);
    func_0x00010c0e0780(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_4 + lVar12);
    uVar8 = uVar7;
    func_0x00010c100ae0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x107dbd2e0;
    puStack_180 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_178,auStack_f0);
    func_0x00010c0e0780(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_4 + lVar12);
    uVar8 = uVar7;
    func_0x00010c100ae0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar1;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x107dbd31c;
    puStack_1a8 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_1a0,auStack_f0);
    func_0x00010c0e0780(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar8);
    lVar12 = (long)_DAT_11276f2c0;
    func_0x00010c12d5c0(*(undefined8 *)(param_4 + lVar12));
    _objc_initWeak(auStack_1c8,param_4);
    uVar11 = *(undefined8 *)(param_4 + lVar12);
    uVar10 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c100fe0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1d0,auStack_1c8);
    func_0x00010befa280(uVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1c8);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_128);
    _objc_release(uStack_100);
    _objc_destroyWeak(auStack_f8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_f0);
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 107dbcbf0; end: 107dbd11f; -[SCOperaRotatingVideoLayerViewController updatePlayerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbcbf0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_80,param_1);
    lVar5 = (long)_DAT_11276f2e4;
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11276f2b8;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = uVar1;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107dbd120;
    puStack_98 = &UNK_110929b50;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(uVar1);
    uStack_90 = uVar1;
    func_0x00010c0e0780(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = uVar1;
    func_0x00010c100ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar4;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107dbd268;
    puStack_c0 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_b8,auStack_80);
    func_0x00010c0e0780(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = uVar1;
    func_0x00010c100ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar4;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x107dbd2a4;
    puStack_e8 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_e0,auStack_80);
    func_0x00010c0e0780(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = uVar1;
    func_0x00010c100ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar4;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x107dbd2e0;
    puStack_110 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_108,auStack_80);
    func_0x00010c0e0780(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    uVar2 = uVar1;
    func_0x00010c100ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar4;
    uStack_148 = 0xc2000000;
    uStack_140 = 0x107dbd31c;
    puStack_138 = &UNK_11086ffc8;
    _objc_copyWeak(auStack_130,auStack_80);
    func_0x00010c0e0780(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11276f2c0;
    func_0x00010c12d5c0(*(undefined8 *)(param_1 + lVar8));
    _objc_initWeak(auStack_158,param_1);
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c100fe0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_160,auStack_158);
    func_0x00010befa280(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107dbd120; end: 107dbd267;  */

void FUN_107dbd120(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    if (uVar2 == uVar3) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      if (uVar3 == 0) {
        _objc_release();
        _objc_release(uVar2);
      }
      else {
        uVar4 = uVar2;
        func_0x00010c071ae0(uVar2,param_2,uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) goto LAB_107dbd248;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c100ae0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedd580(lVar1,param_2,uVar5);
      _objc_release(uVar5);
      func_0x00010bedada0(lVar1);
    }
  }
LAB_107dbd248:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107dbd268; end: 107dbd357;  */

void FUN_107dbd268(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be95ca0(param_1);
    func_0x00010bedada0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dbd358; end: 107dbd3f3;  */

void FUN_107dbd358(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c292820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74cc0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dbd3f4; end: 107dbd45b; -[SCOperaRotatingVideoLayerViewController _observeMediaServicesLostSharedResourceVariable] */

/* WARNING: Possible PIC construction at 0x000107dbd42c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107dbd430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbd3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f2c0),
             PTR_s_addObserver_selector_name_object_11259c238,param_1,
             PTR_s__didReceiveMediaServicesWereLost_11255d728,
             *(undefined8 *)PTR__AVAudioSessionMediaServicesWereLostNotification_11034ce68,0);
  return;
}



/* Entry: 107dbd45c; end: 107dbd4e7; -[SCOperaRotatingVideoLayerViewController _didReceiveMediaServicesWereLostNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbd45c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + _DAT_11276f308) = 3;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR_PTR_1126ba158;
  func_0x00010bf87dc0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2,param_2,puVar1,100,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f30c);
  *(undefined **)(param_1 + _DAT_11276f30c) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dbd4e8; end: 107dbd55f; -[SCOperaRotatingVideoLayerViewController _didReceiveMediaServicesWereResetNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbd4e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276f30c;
  if (*(long *)(param_1 + lVar2) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_11276f308) = 0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_1 + _DAT_11276f2e0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be953d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restartPlayer__112582e90);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be943f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetVideoAsset__112582a98,1);
  return;
}



/* Entry: 107dbd560; end: 107dbd637; -[SCOperaRotatingVideoLayerViewController _updatePlayerStatusBasedOnPlayerItemStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbd560(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  if (lVar1 == 1) {
    func_0x00010befa240(*(undefined8 *)(param_1 + _DAT_11276f2c0),param_2,param_1,
                        PTR_s_playerItemDidReachEnd__11252c4a8,
                        *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0,
                        param_3);
    *(undefined1 *)(param_1 + _DAT_11276f310) = 0;
    if (*(char *)(param_1 + _DAT_11276f2e0) == '\x01') {
      func_0x00010bec1140(param_1,param_2,param_3);
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010c252d60();
    if (lVar1 == 2) {
      lVar1 = param_3;
      func_0x00010bf987e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be74cc0(param_1,param_2,lVar1,2);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dbd638; end: 107dbd673; -[SCOperaRotatingVideoLayerViewController _restartPlayer:] */

void FUN_107dbd638(undefined8 param_1)

{
  func_0x00010becade0();
  func_0x00010be943e0(param_1);
  func_0x00010be4e3e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be9f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendMediaStartsToDisplayIfNeces_112585768);
  return;
}



/* Entry: 107dbd674; end: 107dbd74f; -[SCOperaRotatingVideoLayerViewController _resetVideoAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbd674(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f314);
  *(undefined8 *)(param_1 + _DAT_11276f314) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0b380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010c299240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c139c60(lVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 107dbd750; end: 107dbd867; -[SCOperaRotatingVideoLayerViewController _startPlayingFromMediaStartTimeForItem:] */

void FUN_107dbd750(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6880();
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    func_0x00010bec1160(param_2);
  }
  else {
    _objc_initWeak(auStack_48,param_2);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c1571c0(param_2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107dbd868; end: 107dbd8a3;  */

void FUN_107dbd868(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bec1160(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dbd8a4; end: 107dbdaab; -[SCOperaRotatingVideoLayerViewController _startPlayingItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbd8a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x2) {
    if (param_4 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_68,param_4);
    }
    _CMTimeGetSeconds(&uStack_68);
    *(undefined8 *)(param_2 + _DAT_11276f318) = param_1;
    lVar5 = param_2;
    func_0x00010c117a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218320();
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010c117a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_68,param_4);
    }
    _CMTimeGetSeconds(&uStack_68);
    func_0x00010bf34e20(lVar5);
    _objc_release(lVar5);
    func_0x00010c13d1c0(param_2);
    lVar5 = (long)_DAT_11276f2bc;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
    func_0x00010c07cd60();
    if (iVar1 == 0) {
      func_0x00010beabd20(param_2);
      lVar6 = (long)_DAT_11276f2e4;
      uVar4 = *(undefined8 *)(param_2 + lVar6);
      func_0x00010c100fe0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26faa0();
      *(undefined8 *)(param_2 + _DAT_11276f31c) = param_1;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + lVar6);
      func_0x00010c100fe0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c250000();
      *(undefined8 *)(param_2 + _DAT_11276f320) = param_1;
      _objc_release(uVar4);
      func_0x00010c24d960(*(undefined8 *)(param_2 + lVar5));
      lVar5 = param_2 + _DAT_11276f2fc;
      _objc_loadWeakRetained(lVar5);
      lVar6 = param_2;
      func_0x00010c0eaa40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a460(lVar5,param_3,lVar6,1);
      _objc_release(lVar6);
      _objc_release(lVar5);
      func_0x00010be9f700(param_2);
    }
    else {
      func_0x00010c137fe0(*(undefined8 *)(param_2 + lVar5));
      func_0x00010c24d960(*(undefined8 *)(param_2 + lVar5));
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107dbdaac; end: 107dbdde7; -[SCOperaRotatingVideoLayerViewController _sendMediaStartsToDisplayIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbdaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11276f2e4;
  puVar2 = *(undefined **)(param_5 + lVar15);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c252d60();
  if ((puVar4 == (undefined *)0x1) && (*(char *)(param_5 + _DAT_11276f2f4) == '\x01')) {
    lVar14 = (long)_DAT_11276f324;
    bVar1 = *(byte *)(param_5 + lVar14);
    _objc_release(puVar3);
    _objc_release();
    if ((bVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_5 + lVar15);
      func_0x00010c100fe0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x00010c100c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29afc0();
      _objc_release(uVar13);
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c0c6900();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2348;
      func_0x00010c29ad40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_c8 = puVar4;
      func_0x00010c0df720(*(double *)(param_5 + _DAT_11276f31c) * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2348;
      puStack_a8 = puVar2;
      func_0x00010c29b4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_c0 = puVar6;
      func_0x00010c0df720(*(double *)(param_5 + _DAT_11276f320) * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b2348;
      puStack_a0 = puVar7;
      func_0x00010c2a5040();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_b8 = puVar8;
      func_0x00010c0df720(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b2348;
      puStack_98 = puVar9;
      func_0x00010bfe0640();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_b0 = puVar10;
      func_0x00010c0df720(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar11;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_a8,&puStack_c8,4
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_5,param_6,puVar3,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      *(undefined1 *)(param_5 + lVar14) = 1;
      puVar2 = PTR_PTR_1126b2638;
      func_0x00010c29a1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04420(param_5,param_6,puVar2);
      _objc_release();
    }
    puVar3 = puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
  }
  else {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x00010beb6840();
  if ((int)puVar4 == 0) {
    return;
  }
  lVar14 = (long)_DAT_11276f2e4;
  uVar13 = *(undefined8 *)(puVar3 + lVar14);
  func_0x00010bf50040(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar13);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar15 = (long)_DAT_11276f328;
  uVar13 = *(undefined8 *)(puVar3 + lVar15);
  *(undefined **)(puVar3 + lVar15) = puVar4;
  _objc_release(uVar13);
  func_0x00010bef9040(*(undefined8 *)(puVar3 + lVar14),param_6,*(undefined8 *)(puVar3 + lVar15));
  puVar2 = *(undefined **)(puVar3 + lVar14);
  func_0x00010bf50040(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272b60();
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107dbdde8; end: 107dbdeaf; -[SCOperaRotatingVideoLayerViewController _setupControlsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbdde8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010beb6840();
  if ((int)lVar3 != 0) {
    lVar4 = (long)_DAT_11276f2e4;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf50040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_11276f328;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf50040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107dbdeb0; end: 107dbe0ef; -[SCOperaRotatingVideoLayerViewController _setupPinchControllerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbdeb0(undefined8 param_1,double param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar11 = (long)_DAT_11276f32c;
  lVar4 = *(long *)(param_3 + lVar11);
  func_0x00010c0b8420();
  if (lVar4 == 5) {
    return;
  }
  lVar12 = (long)_DAT_11276f330;
  lVar4 = *(long *)(param_3 + lVar12);
  if (lVar4 == 0) {
    puVar5 = PTR_PTR_1126d2b58;
    _objc_alloc();
    puVar1 = (undefined8 *)(param_3 + _DAT_11276f334);
    lVar4 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8c0();
    lVar6 = param_3;
    uVar10 = param_1;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c9a0();
    param_2 = (double)puVar1[1];
    func_0x00010c061580(*puVar1,param_2,puVar1[2],puVar1[3],param_1,uVar10);
    uVar10 = *(undefined8 *)(param_3 + lVar12);
    *(undefined **)(param_3 + lVar12) = puVar5;
    _objc_release(uVar10);
    _objc_release(lVar6);
    _objc_release(lVar4);
    uVar10 = *(undefined8 *)(param_3 + lVar12);
    lVar4 = param_3;
    func_0x00010c0fc260();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar6 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa900(uVar10);
      _objc_release(lVar6);
    }
    else {
      func_0x00010befa900(uVar10);
    }
    _objc_release(lVar4);
    lVar4 = *(long *)(param_3 + lVar12);
  }
  FUN_107dbae24(lVar4,*(undefined8 *)(param_3 + lVar11));
  uVar10 = *(undefined8 *)(param_3 + lVar12);
  lVar4 = param_3;
  func_0x00010c08f5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeebe0();
  func_0x00010c200ba0(uVar10);
  _objc_release(lVar4);
  uVar10 = *(undefined8 *)(param_3 + lVar12);
  lVar4 = param_3;
  func_0x00010c08f5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c292300();
  lVar7 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  FUN_107dbb2e0(lVar6,lVar8);
  func_0x00010c1aba80(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  func_0x00010c14e120(*(undefined8 *)(param_3 + lVar12));
  func_0x00010c0eb1a0(param_3);
  lVar11 = *(long *)(param_3 + lVar11);
  uVar9 = *(undefined8 *)(param_3 + lVar12);
  dVar14 = 0.0;
  dVar16 = dVar14;
  _objc_retain();
  _objc_retain(uVar9);
  uVar10 = uVar9;
  func_0x00010c075560();
  lVar4 = lVar11;
  func_0x00010c0b8420();
  if ((int)uVar10 == 0) {
    if (lVar4 == 4) {
      _objc_retain(lVar11);
      _objc_retain(uVar9);
      func_0x00010c0895e0(lVar11);
      dVar13 = dVar16;
      func_0x00010c29f6c0(lVar11);
      dVar15 = 0.0;
      if (dVar13 != 0.0) {
        if (param_2 == 0.0) {
          dVar15 = INFINITY;
        }
        else {
          dVar15 = dVar13 / param_2;
        }
      }
      func_0x00010bf47880(dVar16,dVar15,lVar11);
      func_0x00010c28ac20(lVar11);
      func_0x00010c089cc0(lVar11);
      dVar16 = ABS(dVar14);
      func_0x00010c29f6c0(lVar11);
      func_0x00010bf20c00(lVar11);
      _objc_release(lVar11);
      bVar2 = false;
      bVar3 = false;
      if (dVar16 < 2.356194490192345) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar16)) {
          bVar2 = dVar16 == 0.7853981633974483;
          bVar3 = 0.7853981633974483 <= dVar16;
        }
      }
      if (!bVar3 || bVar2) {
        dVar15 = dVar14;
      }
      func_0x00010c139580(0x3ff0000000000000,param_2 / dVar15,0x3ff0000000000000,uVar9);
      _objc_release(uVar9);
    }
  }
  else if (lVar4 == 3) {
    FUN_107dbb0a0(0,lVar11,uVar9);
  }
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 107dbe0f0; end: 107dbe18f; -[SCOperaRotatingVideoLayerViewController _shouldShowVideoControls] */

bool FUN_107dbe0f0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  double dVar4;
  undefined1 auStack_58 [24];
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ffc0();
  if ((int)uVar2 == 0) {
    bVar3 = false;
  }
  else {
    func_0x00010be06ac0(auStack_58,param_2);
    _CMTimeGetSeconds(auStack_58);
    dVar4 = param_1;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4ffe0();
    bVar3 = dVar4 < param_1;
    _objc_release(param_2);
  }
  _objc_release(uVar1);
  return bVar3;
}



/* Entry: 107dbe190; end: 107dbe207; -[SCOperaRotatingVideoLayerViewController setPinchGestureTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe190(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276f338;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != lVar1) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    if (*(long *)(param_1 + _DAT_11276f330) != 0) {
      func_0x00010befa900();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dbe208; end: 107dbe20b; -[SCOperaRotatingVideoLayerViewController viewDidFullyDisappear] */

void FUN_107dbe208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec3650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopPlayback_11258e738);
  return;
}



/* Entry: 107dbe20c; end: 107dbe27b; -[SCOperaRotatingVideoLayerViewController _stopPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe20c(long param_1)

{
  func_0x00010becade0();
  func_0x00010be08d80(param_1);
  *(undefined1 *)(param_1 + _DAT_11276f2e0) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f324) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f2f4) = 0;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11276f2bc));
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11276f33c));
                    /* WARNING: Could not recover jumptable at 0x00010bf73690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f340),PTR_s_didChangeState__1125ba748,1);
  return;
}



/* Entry: 107dbe27c; end: 107dbe4a3; -[SCOperaRotatingVideoLayerViewController _tearDownPlayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe27c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11276f2e4;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_11276f2b8;
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c100fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281a80(uVar4,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    lVar1 = param_1;
    func_0x00010be74f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281a80(uVar5,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = (long)_DAT_11276f2c0;
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    uVar6 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c100fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0(uVar4,param_2,param_1,uVar6,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010c12d5c0(*(undefined8 *)(param_1 + lVar1),param_2,param_1,
                        *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeNotification_1103480d0,
                        0);
    lVar1 = param_1 + _DAT_11276f2d8;
    _objc_loadWeakRetained(lVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c100fe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaf800(lVar1,param_2,uVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar5);
    _objc_release(lVar1);
    func_0x00010be8da80(param_1);
    func_0x00010c1ddc80(*(undefined8 *)(param_1 + lVar7),param_2,0);
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c25c720();
    _objc_release(lVar1);
    if ((int)lVar7 != 0) {
      func_0x00010be943e0(param_1,param_2,0);
    }
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107dbe4a4; end: 107dbe583; -[SCOperaRotatingVideoLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe4a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272ae0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11276f344) = 0;
  lVar2 = param_1;
  func_0x00010be74f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5b20();
  _objc_release(lVar2);
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276f340),param_2,1);
  puVar3 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar3,param_2,param_1,&PTR____CFConstantStringClassReference_110ebe178,
                      &PTR____CFConstantStringClassReference_110ebe198);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107dbe584; end: 107dbe7e7; -[SCOperaRotatingVideoLayerViewController setPausedForAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe584(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  *(char *)(param_1 + _DAT_11276f300) = (char)param_3;
  lVar5 = (long)_DAT_11276f348;
  if ((param_3 != 0) && (*(long *)(param_1 + lVar5) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11276f2e4;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  }
  if (param_3 == 0) {
    if (*(char *)(param_1 + _DAT_11276f324) == '\x01') {
      func_0x00010c24d960(*(undefined8 *)(param_1 + _DAT_11276f2bc));
      lVar5 = param_1 + _DAT_11276f2fc;
      _objc_loadWeakRetained(lVar5);
      lVar4 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a460(lVar5,param_2,lVar4,1);
      _objc_release(lVar4);
      _objc_release(lVar5);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x107dbe800;
    puStack_88 = &UNK_110842e18;
    lStack_80 = param_1;
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                        &puStack_a0,0);
  }
  else {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11276f2bc));
    lVar4 = param_1 + _DAT_11276f2fc;
    _objc_loadWeakRetained(lVar4);
    lVar2 = param_1;
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a460(lVar4,param_2,lVar2,0);
    _objc_release(lVar2);
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1677c0(0x3fd3333333333333,*(undefined8 *)(param_1 + lVar5));
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107dbe7e8;
    puStack_60 = &UNK_110842e18;
    lStack_58 = param_1;
    func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,
                        &puStack_78,0);
    func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276f340),param_2,1);
  }
  return;
}



/* Entry: 107dbe7e8; end: 107dbe817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276f348),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107dbe818; end: 107dbe93b; -[SCOperaRotatingVideoLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe818(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010bdd0760();
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25c720();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be74f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar2 == 0) {
    func_0x00010c0fe360(lVar1);
  }
  else {
    func_0x00010c0fe6a0(0x3f800000,lVar1);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ebe178,
                      &PTR____CFConstantStringClassReference_110ebe1b8);
  _objc_release(lVar1);
  _objc_release(puVar3);
  *(undefined1 *)(param_1 + _DAT_11276f344) = 1;
  lVar1 = param_1;
  func_0x00010be74f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be008a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107dbe93c; end: 107dbe9b7; -[SCOperaRotatingVideoLayerViewController _didStartToPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbe93c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276f340),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272ae0();
  _objc_release(uVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dbe9b8; end: 107dbeab7; -[SCOperaRotatingVideoLayerViewController mediaIsBeingPreparedForDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107dbe9b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25c720();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar7 = (long)_DAT_11276f2e4;
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252d60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 2) {
      lVar3 = *(long *)(param_1 + lVar7);
      func_0x00010c100fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c100ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c252d60();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar5 == 0) {
        bVar6 = 1;
      }
      else {
        bVar6 = *(byte *)(param_1 + (long)_DAT_11276f324) ^ 1;
      }
      goto LAB_107dbea44;
    }
  }
  bVar6 = 0;
LAB_107dbea44:
  return bVar6 & 1;
}



/* Entry: 107dbeab8; end: 107dbec77; -[SCOperaRotatingVideoLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbeab8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb150;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010be943e0(param_1);
  func_0x00010be08d80(param_1);
  *(undefined1 *)(param_1 + _DAT_11276f2e8) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f34c) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f350) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f310) = 0;
  *(undefined8 *)(param_1 + _DAT_11276f318) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f2c8) = 0;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276f2bc));
  func_0x00010be8da80(param_1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11276f33c));
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11276f354));
  *(undefined8 *)(param_1 + _DAT_11276f2c4) = 1;
  *(undefined8 *)(param_1 + _DAT_11276f2cc) = 0xbff0000000000000;
  *(undefined1 *)(param_1 + _DAT_11276f324) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f2f4) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f344) = 0;
  *(undefined1 *)(param_1 + _DAT_11276f2e0) = 0;
  *(undefined8 *)(param_1 + _DAT_11276f31c) = 0;
  *(undefined8 *)(param_1 + _DAT_11276f320) = 0;
  func_0x00010bde0c60(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2f8);
  *(undefined8 *)(param_1 + _DAT_11276f2f8) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11276f358;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf94da0(*(undefined8 *)(param_1 + _DAT_11276f2d4));
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276f304));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276f2e4));
  func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276f340));
  return;
}



/* Entry: 107dbec78; end: 107dbed17; -[SCOperaRotatingVideoLayerViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbec78(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                ((float)param_1,*(undefined8 *)(param_2 + (long)_DAT_11276f2d0),
                 PTR_s_setVolume__112666a90);
      return;
    }
    *(double *)(param_2 + (long)_DAT_11276f2cc) = param_1;
  }
  return;
}



/* Entry: 107dbed18; end: 107dbedbb; -[SCOperaRotatingVideoLayerViewController fadeVolumeIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbed18(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,*(undefined8 *)(param_2 + (long)_DAT_11276f2d0),
                 PTR_s_fadeVolumeIn__1125c5808);
      return;
    }
    *(undefined8 *)(param_2 + (long)_DAT_11276f2cc) = 0x3ff0000000000000;
  }
  return;
}



/* Entry: 107dbedbc; end: 107dbee5b; -[SCOperaRotatingVideoLayerViewController fadeVolumeOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbedbc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,*(undefined8 *)(param_2 + (long)_DAT_11276f2d0),
                 PTR_s_fadeVolumeOut__1125c5810);
      return;
    }
    *(undefined8 *)(param_2 + (long)_DAT_11276f2cc) = 0;
  }
  return;
}



/* Entry: 107dbee5c; end: 107dbee63; -[SCOperaRotatingVideoLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107dbee5c(void)

{
  return 0;
}



/* Entry: 107dbee64; end: 107dbf23b; -[SCOperaRotatingVideoLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbee64(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010bf9f6a0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010bf9f6a0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar1);
    _objc_release(puVar3);
    func_0x00010bf9f980(param_1,param_2);
  }
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010bf9f820(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010bf9f820(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar1);
    _objc_release(puVar3);
    func_0x00010bf9f9a0(param_1,param_2);
  }
  fVar6 = (float)param_1;
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c0c5840(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    lVar5 = (long)_DAT_11276f350;
    *(char *)(param_2 + lVar5) = (char)lVar2;
    _objc_release(lVar1);
    _objc_release(puVar3);
    if ((*(byte *)(param_2 + lVar5) & 1) == 0) {
      func_0x00010bedea40(param_2);
    }
  }
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c0fc2e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_11276f330);
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c0fc2e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    func_0x00010c210240(uVar4,param_3,lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c29a540(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010beb6840();
    _objc_release(lVar1);
    _objc_release(puVar3);
    if ((int)lVar2 == 0) goto LAB_107dbf198;
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c29a540(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = *(undefined **)(param_2 + _DAT_11276f2e4);
    func_0x00010bf50040(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285640((double)fVar6);
  }
  _objc_release(puVar3);
LAB_107dbf198:
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    func_0x00010c161b40(param_2,param_3,lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107dbf23c; end: 107dbf2e7; -[SCOperaRotatingVideoLayerViewController setActionMenuEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbf23c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(byte *)(param_5 + _DAT_11276f34c) == param_7) {
    return;
  }
  *(char *)(param_5 + _DAT_11276f34c) = (char)param_7;
  lVar5 = *(long *)(param_5 + _DAT_11276f32c);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11276f330);
  if (param_7 == 0) {
    lVar3 = *(long *)(param_5 + _DAT_11276f2d4);
    func_0x00010bf60aa0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    FUN_107dbaf3c(lVar5,uVar4);
  }
  else {
    dVar7 = 0.0;
    dVar9 = dVar7;
    _objc_retain();
    _objc_retain(uVar4);
    lVar3 = lVar5;
    func_0x00010c0b8420();
    if ((lVar3 == 3) || (lVar3 = lVar5, func_0x00010c0b8420(), lVar3 == 4)) {
      func_0x00010c0895e0(lVar5);
      dVar6 = dVar9;
      func_0x00010c29f6c0(lVar5);
      dVar8 = 0.0;
      if (dVar6 != 0.0) {
        if (param_2 == 0.0) {
          dVar8 = INFINITY;
        }
        else {
          dVar8 = dVar6 / param_2;
        }
      }
      func_0x00010bf47880(dVar9,dVar8,lVar5);
      func_0x00010bfb51a0(lVar5);
      func_0x00010c089cc0(lVar5);
      dVar9 = ABS(dVar7);
      func_0x00010c29f6c0(lVar5);
      func_0x00010bf20c00(lVar5);
      bVar1 = false;
      bVar2 = false;
      if (dVar9 < 2.356194490192345) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar9)) {
          bVar1 = dVar9 == 0.7853981633974483;
          bVar2 = 0.7853981633974483 <= dVar9;
        }
      }
      if (!bVar2 || bVar1) {
        dVar7 = dVar8;
      }
      param_4 = param_4 / dVar7;
      func_0x00010c089ce0(lVar5);
      dVar9 = dVar7;
      func_0x00010c089ce0(lVar5);
      func_0x00010c139580(dVar7,dVar9,param_4,uVar4);
    }
    _objc_release(uVar4);
    lVar3 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107dbf2e8; end: 107dbf443; -[SCOperaRotatingVideoLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbf2e8(double param_1,long param_2)

{
  long lVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_70 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  dVar3 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_70,dVar3,dVar3);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_2 + _DAT_11276f304));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar3 = param_1;
  func_0x00010bf01be0();
  fVar2 = SUB84(dVar3,0);
  func_0x00010c1677c0(*(undefined8 *)(param_2 + _DAT_11276f2e4));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be74f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fdc0();
  _objc_release(lVar1);
  if (param_1 == 0.0) {
    if (fVar2 == 0.0) {
      func_0x00010c13d1c0(param_2);
    }
  }
  else if (fVar2 == 1.0) {
    func_0x00010c0f5b20(param_2);
  }
  return;
}



/* Entry: 107dbf444; end: 107dbf4cf; -[SCOperaRotatingVideoLayerViewController didScrollHorizontallyWithOffset:] */

void FUN_107dbf444(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = SUB84(param_1,0);
  uVar1 = param_2;
  func_0x00010be74f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fdc0();
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    if (fVar2 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_resume_11262ce90);
      return;
    }
  }
  else if (fVar2 == 1.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_pause_11261b0e8);
    return;
  }
  return;
}



/* Entry: 107dbf4d0; end: 107dbf663; -[SCOperaRotatingVideoLayerViewController _updateResumeTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbf4d0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  double dVar22;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + _DAT_11276f2e4);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    _CMTimeGetSeconds(&uStack_80);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    dVar22 = param_1;
  }
  else {
    func_0x00010bf8b160(&uStack_80,lVar2);
    _CMTimeGetSeconds(&uStack_80);
    dVar22 = param_1;
    func_0x00010bf60480(&uStack_80,lVar2);
  }
  _CMTimeGetSeconds(&uStack_80);
  puVar21 = PTR_PTR_1126c9410;
  func_0x00010c2708c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar21;
  func_0x00010c0df720(param_1 - dVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_60,&puStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar21);
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  dVar22 = *(double *)(lVar2 + _DAT_11276f318) * 1000.0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_180 = puVar3;
  func_0x00010c0df720(dVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2348;
  puStack_140 = puVar4;
  func_0x00010bfbbde0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_178 = puVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,
                      *(undefined1 *)(lVar2 + _DAT_11276f2e8));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2348;
  puStack_138 = puVar6;
  func_0x00010c0c4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar7;
  func_0x00010beed820(*(undefined8 *)(lVar2 + _DAT_11276f2bc));
  func_0x00010c0df720(dVar22 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2348;
  puStack_130 = puVar21;
  func_0x00010c0fc300();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar8;
  func_0x00010c0df720(*(double *)(lVar2 + _DAT_11276f35c) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2348;
  puStack_128 = puVar9;
  func_0x00010c29ad40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar10;
  func_0x00010c0df720(*(double *)(lVar2 + _DAT_11276f31c) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2348;
  puStack_120 = puVar11;
  func_0x00010c29b4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_158 = puVar12;
  func_0x00010c0df720(*(double *)(lVar2 + _DAT_11276f320) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2348;
  puStack_118 = puVar13;
  func_0x00010c0c2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_150 = puVar14;
  func_0x00010c0df720(*(undefined8 *)(lVar2 + _DAT_11276f2f0));
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2348;
  puStack_110 = puVar15;
  func_0x00010c0cd980();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_148 = puVar16;
  func_0x00010c0df720(*(undefined8 *)(lVar2 + _DAT_11276f2ec));
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_108 = puVar17;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_140,&puStack_180,8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c0d3c80();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar21);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar1 = *(long *)(lVar2 + _DAT_11276f2f8);
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bef7f60(puVar19,param_3,lVar1);
  }
  uVar20 = *(undefined8 *)(lVar2 + _DAT_11276f30c);
  puVar21 = PTR_PTR_1126b2348;
  func_0x00010c120300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar19,param_3,uVar20,puVar21);
  _objc_release(puVar21);
  puVar21 = puVar19;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar21 = puVar19;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar21;
  func_0x00010c22b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar21);
  puVar4 = puVar19;
  if (puVar3 == (undefined *)0x0) {
    puVar21 = puVar19;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar21;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar21);
    if (puVar3 != (undefined *)0x0) {
      puVar21 = PTR_PTR_1126c90a8;
      _objc_alloc(PTR_PTR_1126c90a8);
      func_0x00010c08c0e0(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107dbfaec;
    }
    puVar21 = puVar19;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar21;
    func_0x00010bf0b380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar21);
    if (puVar3 == (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
      goto _objc_autoreleaseReturnValue;
    }
    puVar21 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c2991a0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar19 + _DAT_11276f32c);
    func_0x00010c0b8420(uVar20);
    func_0x00010c060be0(puVar21,param_3,puVar4,uVar20);
  }
  else {
    puVar21 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c08c0e0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c22b660();
    _objc_retainAutoreleasedReturnValue();
LAB_107dbfaec:
    uVar20 = *(undefined8 *)(puVar19 + _DAT_11276f32c);
    func_0x00010c0b8420(uVar20);
    func_0x00010c061340(puVar21,param_3,puVar3,uVar20);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 107dbf664; end: 107dbfa0f; -[SCOperaRotatingVideoLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbf664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  double dVar21;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = *(double *)(param_1 + _DAT_11276f318) * 1000.0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar1;
  func_0x00010c0df720(dVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2348;
  puStack_c0 = puVar2;
  func_0x00010bfbbde0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f8 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_11276f2e8));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2348;
  puStack_b8 = puVar4;
  func_0x00010c0c4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar5;
  func_0x00010beed820(*(undefined8 *)(param_1 + _DAT_11276f2bc));
  func_0x00010c0df720(dVar21 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2348;
  puStack_b0 = puVar20;
  func_0x00010c0fc300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e8 = puVar6;
  func_0x00010c0df720(*(double *)(param_1 + _DAT_11276f35c) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2348;
  puStack_a8 = puVar7;
  func_0x00010c29ad40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e0 = puVar8;
  func_0x00010c0df720(*(double *)(param_1 + _DAT_11276f31c) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2348;
  puStack_a0 = puVar9;
  func_0x00010c29b4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar10;
  func_0x00010c0df720(*(double *)(param_1 + _DAT_11276f320) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2348;
  puStack_98 = puVar11;
  func_0x00010c0c2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar12;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11276f2f0));
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2348;
  puStack_90 = puVar13;
  func_0x00010c0cd980();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c8 = puVar14;
  func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11276f2ec));
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&puStack_100,8);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c0d3c80();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar18 = *(long *)(param_1 + _DAT_11276f2f8);
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar18 != 0) {
    func_0x00010bef7f60(puVar17,param_2,lVar18);
  }
  uVar19 = *(undefined8 *)(param_1 + _DAT_11276f30c);
  puVar20 = PTR_PTR_1126b2348;
  func_0x00010c120300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar17,param_2,uVar19,puVar20);
  _objc_release(puVar20);
  puVar20 = puVar17;
  func_0x00010bf51e00();
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar20 = puVar17;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar20;
  func_0x00010c22b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar20);
  puVar2 = puVar17;
  if (puVar1 == (undefined *)0x0) {
    puVar20 = puVar17;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar20;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar20);
    if (puVar1 != (undefined *)0x0) {
      puVar20 = PTR_PTR_1126c90a8;
      _objc_alloc(PTR_PTR_1126c90a8);
      func_0x00010c08c0e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107dbfaec;
    }
    puVar20 = puVar17;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar20;
    func_0x00010bf0b380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar20);
    if (puVar1 == (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      goto _objc_autoreleaseReturnValue;
    }
    puVar20 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c2991a0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar17 + _DAT_11276f32c);
    func_0x00010c0b8420(uVar19);
    func_0x00010c060be0(puVar20,param_2,puVar2,uVar19);
  }
  else {
    puVar20 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c08c0e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c22b660();
    _objc_retainAutoreleasedReturnValue();
LAB_107dbfaec:
    uVar19 = *(undefined8 *)(puVar17 + _DAT_11276f32c);
    func_0x00010c0b8420(uVar19);
    func_0x00010c061340(puVar20,param_2,puVar1,uVar19);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 107dbfa10; end: 107dbfbbf; -[SCOperaRotatingVideoLayerViewController shareableMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbfa10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_1;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar5 = PTR_PTR_1126c90a8;
      _objc_alloc(PTR_PTR_1126c90a8);
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107dbfaec;
    }
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0b380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_107dbfb24;
    }
    puVar5 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c2991a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276f32c);
    func_0x00010c0b8420(uVar4);
    func_0x00010c060be0(puVar5,param_2,lVar1,uVar4);
  }
  else {
    puVar5 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c22b660();
    _objc_retainAutoreleasedReturnValue();
LAB_107dbfaec:
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276f32c);
    func_0x00010c0b8420(uVar4);
    func_0x00010c061340(puVar5,param_2,lVar2,uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_107dbfb24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107dbfbc0; end: 107dbfbc3; -[SCOperaRotatingVideoLayerViewController layerProgressTrackable] */

void FUN_107dbfbc0(void)

{
  return;
}



/* Entry: 107dbfbc4; end: 107dbfef3; -[SCOperaRotatingVideoLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbfbc4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pdVar1 = (double *)(param_5 + _DAT_11276f334);
  lVar2 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar5 = param_5;
  dVar7 = param_1;
  dVar8 = param_2;
  dVar9 = param_3;
  dVar10 = param_4;
  func_0x00010c08c520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  *pdVar1 = param_1 + dVar8;
  pdVar1[1] = param_2 + dVar7;
  pdVar1[2] = param_3 - (dVar8 + dVar10);
  pdVar1[3] = param_4 - (dVar7 + dVar9);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar4 = uVar11;
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  func_0x00010c222380(param_5,param_6,puVar3);
  _objc_release(puVar3);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfdb4e0();
  _objc_release(lVar2);
  if ((int)lVar5 != 0) {
    lVar2 = param_5;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    lVar5 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126d7db8;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar5 = (long)_DAT_11276f2e4;
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126d2b40;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar6 = (long)_DAT_11276f304;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar6),param_6,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d2b48;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061460(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3],puVar3,param_6,lVar2,
                      *(undefined8 *)(param_5 + lVar6),*(undefined8 *)(param_5 + lVar5));
  uVar4 = *(undefined8 *)(param_5 + _DAT_11276f32c);
  *(undefined **)(param_5 + _DAT_11276f32c) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107dbfef4; end: 107dc01f7; -[SCOperaRotatingVideoLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dbfef4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar7 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar7 != 0) {
    lVar7 = (long)_DAT_11276f358;
    if ((*(long *)(param_3 + lVar7) == 0) &&
       (uVar6 = param_6, func_0x00010c232cc0(), (int)uVar6 != 0)) {
      _objc_initWeak(auStack_68,param_3);
      lVar5 = (long)_DAT_11276f2d4;
      func_0x00010bf18460(*(undefined8 *)(param_3 + lVar5));
      uVar2 = *(undefined8 *)(param_3 + lVar5);
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puVar1;
      param_1 = 0xc2000000;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107dc01f8;
      puStack_78 = &UNK_1108e86a0;
      _objc_copyWeak(auStack_70,auStack_68);
      uVar6 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      *(undefined8 *)(param_3 + lVar7) = uVar6;
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    lVar5 = (long)_DAT_11276f2e4;
    uVar6 = *(undefined8 *)(param_3 + lVar5);
    lVar7 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4ffc0();
    func_0x00010bf8fc00(uVar6);
    _objc_release(lVar7);
    uVar6 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bf50040(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221440();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bf50040(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bf50040(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar6);
    _objc_initWeak(auStack_68,param_3);
    lVar7 = param_3;
    func_0x00010c2991a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6700();
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0b8420();
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107dc0278;
    puStack_a8 = &UNK_11097e6b0;
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_retain(lVar7);
    lStack_a0 = lVar7;
    FUN_107dbb1d4(param_1,param_2,lVar3,lVar7,&puStack_c0);
    _objc_release(param_3);
    _objc_release(lVar5);
    _objc_release(lStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107dc01f8; end: 107dc0277;  */

void FUN_107dc01f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c141a80(param_4);
  uVar1 = param_1;
  func_0x00010c27ada0(param_4);
  _objc_release(param_4);
  func_0x00010c0d1280(param_1,uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dc0278; end: 107dc034b;  */

void FUN_107dc0278(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107dc034c;
  puStack_68 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_58,param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 107dc034c; end: 107dc03cb;  */

void FUN_107dc034c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2991a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != lVar3) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde5800(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dc03cc; end: 107dc0497; -[SCOperaRotatingVideoLayerViewController _configureRotatingViewManipulatorWithMediaSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc03cc(double param_1,double param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar7 = (long)_DAT_11276f32c;
  uVar6 = *(undefined8 *)(param_3 + lVar7);
  lVar3 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8420();
  lVar4 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c65c0();
  dVar11 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar11 = INFINITY;
    }
    else {
      dVar11 = param_1 / param_2;
    }
  }
  func_0x00010bf47880(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar4 = *(long *)(param_3 + lVar7);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11276f330);
  dVar9 = 0.0;
  dVar12 = dVar9;
  _objc_retain();
  _objc_retain(uVar5);
  uVar6 = uVar5;
  func_0x00010c075560();
  lVar3 = lVar4;
  func_0x00010c0b8420();
  if ((int)uVar6 == 0) {
    if (lVar3 == 4) {
      _objc_retain(lVar4);
      _objc_retain(uVar5);
      func_0x00010c0895e0(lVar4);
      dVar8 = dVar12;
      func_0x00010c29f6c0(lVar4);
      dVar10 = 0.0;
      if (dVar8 != 0.0) {
        if (dVar11 == 0.0) {
          dVar10 = INFINITY;
        }
        else {
          dVar10 = dVar8 / dVar11;
        }
      }
      func_0x00010bf47880(dVar12,dVar10,lVar4);
      func_0x00010c28ac20(lVar4);
      func_0x00010c089cc0(lVar4);
      dVar12 = ABS(dVar9);
      func_0x00010c29f6c0(lVar4);
      func_0x00010bf20c00(lVar4);
      _objc_release(lVar4);
      bVar1 = false;
      bVar2 = false;
      if (dVar12 < 2.356194490192345) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar12)) {
          bVar1 = dVar12 == 0.7853981633974483;
          bVar2 = 0.7853981633974483 <= dVar12;
        }
      }
      if (!bVar2 || bVar1) {
        dVar10 = dVar9;
      }
      func_0x00010c139580(0x3ff0000000000000,dVar11 / dVar10,0x3ff0000000000000,uVar5);
      _objc_release(uVar5);
    }
  }
  else if (lVar3 == 3) {
    FUN_107dbb0a0(0,lVar4,uVar5);
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107dc0498; end: 107dc049f; -[SCOperaRotatingVideoLayerViewController _getSubtitlesObserver] */

undefined8 FUN_107dc0498(void)

{
  return 0;
}



/* Entry: 107dc04a0; end: 107dc05ef; -[SCOperaRotatingVideoLayerViewController _attachTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc04a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  func_0x00010be8da80();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMake(auStack_60,0x14,600);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_68,auStack_48);
  uVar3 = uVar2;
  func_0x00010befa7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276f360);
  *(undefined8 *)(param_1 + _DAT_11276f360) = uVar3;
  _objc_release(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107dc05f0; end: 107dc07e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc05f0(long param_1,double *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + _DAT_11276f2c8) & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
    func_0x00010bf50040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf7340(&dStack_a0,param_1);
    _CMTimeGetSeconds(&dStack_a0);
    func_0x00010befd900(uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c29aaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010bf8b340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_88 = puVar3;
    func_0x00010c0df720(*(double *)(param_1 + _DAT_11276f318) * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2348;
    puStack_78 = puVar4;
    func_0x00010bf5fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    dStack_98 = param_2[1];
    dVar10 = *param_2;
    dStack_90 = param_2[2];
    dStack_a0 = dVar10;
    puStack_80 = puVar5;
    _CMTimeGetSeconds(&dStack_a0);
    func_0x00010c0df720(dVar10 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_11276f360;
  if (*(long *)(param_1 + lVar9) != 0) {
    lVar8 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12eb40();
    _objc_release(lVar8);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107dc07e4; end: 107dc084f; -[SCOperaRotatingVideoLayerViewController _removeTimeObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc07e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276f360;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12eb40();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107dc0850; end: 107dc0887; -[SCOperaRotatingVideoLayerViewController setupProgressStateMachine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f340);
  *(undefined8 *)(param_1 + _DAT_11276f340) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc0888; end: 107dc0897; -[SCOperaRotatingVideoLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f304),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 107dc0898; end: 107dc08c3; -[SCOperaRotatingVideoLayerViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107dc0898(long param_1)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + _DAT_11276f334 + 0x10);
  if (dVar1 != 0.0) {
    return *(double *)(param_1 + _DAT_11276f334 + 0x18) / dVar1;
  }
  return 0.0;
}



/* Entry: 107dc08c4; end: 107dc08cb; -[SCOperaRotatingVideoLayerViewController isOverlay] */

undefined8 FUN_107dc08c4(void)

{
  return 0;
}



/* Entry: 107dc08cc; end: 107dc0ab3; -[SCOperaRotatingVideoLayerViewController playerItemDidReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc08cc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11276f2e8) = 1;
  func_0x00010bf78e40(*(undefined8 *)(param_1 + _DAT_11276f2f8));
  func_0x00010c0f5b20(param_1);
  lVar1 = param_1;
  func_0x00010beb46e0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010beb28c0();
    if ((int)lVar1 == 0) goto LAB_107dc0a74;
    puVar4 = PTR_PTR_1126b2638;
    func_0x00010bf112e0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1);
  }
  else {
    puVar4 = param_3;
    func_0x00010c0dfc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c157280(puVar4);
    puVar2 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa540(puVar2);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar4);
LAB_107dc0a74:
  _objc_release(param_3);
  return;
}



/* Entry: 107dc0ab4; end: 107dc0b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0ab4(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c117a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34e20(0);
    _objc_release(lVar1);
    if (*(char *)(param_1 + _DAT_11276f2e0) == '\x01') {
      if (param_2 == 0) {
        func_0x00010be953c0(param_1);
      }
      else {
        func_0x00010bedea40();
        func_0x00010c13d1c0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dc0b44; end: 107dc0b97; -[SCOperaRotatingVideoLayerViewController _shouldAutoAdvanceWhenReachEnd] */

ulong FUN_107dc0b44(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010beb46e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf11280();
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107dc0b98; end: 107dc0bef; -[SCOperaRotatingVideoLayerViewController _shouldLoopWhenReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107dc0b98(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_11276f350) & 1) == 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0ffbc0();
    bVar1 = lVar2 == 1;
    _objc_release(param_1);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


