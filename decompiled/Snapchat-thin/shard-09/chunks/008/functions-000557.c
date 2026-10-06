/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107259568; end: 1072595cf;  */

void FUN_107259568(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dStack_30;
  double dStack_28;
  
  dVar1 = *param_1;
  if (*param_2 <= *param_1) {
    dVar1 = *param_2;
  }
  dVar2 = param_1[1];
  if (param_2[1] <= param_1[1]) {
    dVar2 = param_2[1];
  }
  func_0x00010725bfa8(dVar1,dVar2);
  param_1[1] = dStack_28;
  *param_1 = dStack_30;
  dVar1 = param_1[2];
  if (param_1[2] <= *param_2) {
    dVar1 = *param_2;
  }
  dVar2 = param_1[3];
  if (param_1[3] <= param_2[1]) {
    dVar2 = param_2[1];
  }
  func_0x00010725bfa8(dVar1,dVar2);
  param_1[3] = dStack_28;
  param_1[2] = dStack_30;
  return;
}



/* Entry: 1072595d0; end: 10725972b; -[MGLMapView convertRect:toLatLngBoundsFromView:] */

void FUN_1072595d0(void)

{
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x00010725bb48();
  func_0x00010725be6c();
  extraout_x8[1] = 0xc066800000000000;
  *extraout_x8 = 0xc056800000000000;
  extraout_x8[3] = 0x4066800000000000;
  extraout_x8[2] = 0x4056800000000000;
  *(undefined1 *)(extraout_x8 + 4) = 1;
  uVar2 = extraout_x8[1];
  uVar1 = *extraout_x8;
  uVar3 = extraout_x8[2];
  extraout_x8[1] = extraout_x8[3];
  *extraout_x8 = uVar3;
  extraout_x8[3] = uVar2;
  extraout_x8[2] = uVar1;
  func_0x00010725bb34();
  _CGRectGetMinX();
  func_0x00010725bb34();
  _CGRectGetMinY();
  func_0x00010725bbd8();
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  func_0x00010725bb34();
  _CGRectGetMaxX();
  func_0x00010725bb34();
  _CGRectGetMinY();
  func_0x00010725bbd8();
  uStack_90 = uVar1;
  uStack_88 = uVar3;
  func_0x00010725bb34();
  _CGRectGetMaxX();
  func_0x00010725bb34();
  _CGRectGetMaxY();
  func_0x00010725bbd8();
  uStack_a0 = uVar1;
  uStack_98 = uVar3;
  func_0x00010725bb34();
  _CGRectGetMinX();
  func_0x00010725bb34();
  _CGRectGetMaxY();
  func_0x00010725bbd8();
  uStack_b0 = uVar1;
  uStack_a8 = uVar3;
  func_0x00010725bb34();
  _CGRectGetMidX();
  func_0x00010725bb34();
  _CGRectGetMidY();
  func_0x00010725bbd8();
  func_0x00010725c3f0(&uStack_80);
  func_0x00010725c3f0(&uStack_90);
  func_0x00010725c3f0(&uStack_a0);
  func_0x00010725c3f0(&uStack_b0);
  func_0x00010725c4c8();
  func_0x00010725c4c8();
  func_0x00010725c4c8();
  func_0x00010725c4c8();
  func_0x00010725be1c();
  return;
}



/* Entry: 10725972c; end: 10725975f; -[MGLMapView metersPerPointAtLatitude:] */

double FUN_10725972c(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c2bf200();
  NEON_fminnm(0x4039800000000000,uVar3);
  dVar1 = 0.0;
  _exp2(0,uVar3,0,0x4039800000000000);
  dVar2 = (double)NEON_fminnm(param_1,0x40554345b1a549d7);
  if (dVar2 <= -85.0511287798066) {
    dVar2 = -85.0511287798066;
  }
  dVar2 = dVar2 * 0.017453292519943295;
  _cos(dVar2);
  return (dVar2 * 6.283185307179586 * 6378137.0) / (dVar1 * 512.0);
}



/* Entry: 107259760; end: 107259767; -[MGLMapView resetCameraChangeReason] */

void FUN_107259760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c176350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCameraChangeReasonBitmask__11263b2f0,0);
  return;
}



/* Entry: 107259768; end: 1072597b3; -[MGLMapView animateWithDelay:animations:] */

void FUN_107259768(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010725be6c();
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  func_0x00010058c530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1072597b4; end: 1072597e3; -[MGLMapView currentMinimumZoom] */

double FUN_1072597b4(void)

{
  float fVar1;
  undefined8 uStack_40;
  
  func_0x00010c0c3c00();
  func_0x00010725c2ec();
  fVar1 = (float)uStack_40;
  if (fVar1 <= 3.0) {
    fVar1 = 3.0;
  }
  return (double)fVar1;
}



/* Entry: 1072597e4; end: 10725981f; -[MGLMapView isRotationAllowed] */

bool FUN_1072597e4(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c2bf200();
  dVar1 = param_1;
  func_0x00010bf5f4a0(param_2);
  return dVar1 <= param_1;
}



/* Entry: 107259820; end: 10725989b; -[MGLMapView unrotateIfNeededForGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107259820(double param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010c252440(*(undefined8 *)(param_2 + _DAT_112765ff4));
  func_0x00010725bed0();
  func_0x00010bf7f0e0();
  if (param_1 != 0.0 && unaff_x20 - 3U < 0xfffffffffffffffe) {
    func_0x00010725c39c();
    func_0x00010c2823c0();
    func_0x00010725c4e8();
    if ((param_1 < 7.0) || (func_0x00010725c4e8(), 353.0 < param_1)) {
      func_0x00010725c39c();
                    /* WARNING: Could not recover jumptable at 0x00010c1390f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
  return;
}



/* Entry: 10725989c; end: 10725997b; -[MGLMapView unrotateIfNeededAnimated:] */

void FUN_10725989c(double param_1,ulong param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf7f0e0();
  if ((param_1 != 0.0) && (uVar1 = param_2, func_0x00010c07cc80(), (uVar1 & 1) == 0)) {
    if (param_4 == 0) {
      func_0x00010725c288();
                    /* WARNING: Could not recover jumptable at 0x00010c1390f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    func_0x00010725c288();
    func_0x00010c21e900();
    _objc_initWeak(auStack_28,param_2);
    func_0x00010725c264();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf033e0(0x3fb999999999999a,param_2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10725997c; end: 107259a17;  */

void FUN_10725997c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  func_0x00010725bebc();
  func_0x00010c1390e0();
  func_0x00010725be24();
  func_0x00010725c264();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  func_0x00010725c87c(FUN_107259a18,0xc2000000);
  _objc_copyWeak(auStack_38,unaff_x19 + 0x28);
  func_0x00010bf033e0(0x3fd3333333333333,uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107259a18; end: 107259a47;  */

void FUN_107259a18(undefined8 param_1)

{
  func_0x00010725c460();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107259a48; end: 107259b2f; -[MGLMapView cameraWillChangeAnimated:] */

void FUN_107259a48(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  
  func_0x00010725bcf4();
  if ((extraout_x8 != 0) && (uVar1 = param_1, func_0x00010c080560(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725be1c();
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) == 0) {
      _objc_opt_respondsToSelector(uVar2,PTR_s_mapView_regionWillChangeAnimated_11260c370);
      func_0x00010725be1c();
      if ((uVar2 & 1) == 0) {
        return;
      }
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba560();
    }
    else {
      func_0x00010725c038();
      func_0x00010c0ba580(uVar2);
      param_1 = uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107259b30; end: 107259bf3; -[MGLMapView cameraIsChanging] */

void FUN_107259b30(undefined8 param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  ulong unaff_x21;
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    return;
  }
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x00010725bcb0();
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((unaff_x21 & 1) == 0) {
    _objc_opt_respondsToSelector(uVar1,PTR_s_mapViewRegionIsChanging__11260c470);
    func_0x00010725bcb0();
    if ((unaff_x21 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba960();
  }
  else {
    func_0x00010725c230();
    func_0x00010725c238();
    func_0x00010c0ba540();
    param_1 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107259bf4; end: 107259d3f; -[MGLMapView cameraDidChangeAnimated:] */

void FUN_107259bf4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long extraout_x8;
  uint unaff_w22;
  
  func_0x00010725bcf4();
  if ((extraout_x8 == 0) || (uVar1 = param_1, func_0x00010c080560(), (uVar1 & 1) != 0)) {
    return;
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x00010725bd20();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x00010725be2c();
  if (((unaff_w22 | (uint)uVar1) & 1) == 0) {
LAB_107259cb0:
    if ((uVar1 & 1) != 0) goto LAB_107259cb4;
LAB_107259ce8:
    if ((unaff_w22 & 1) == 0) goto LAB_107259d10;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba500();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07b60();
    func_0x00010725be2c();
    if (puVar2 != (undefined *)0x0) goto LAB_107259cb0;
    func_0x00010725c2fc();
    if ((uVar1 & 1) == 0) goto LAB_107259ce8;
LAB_107259cb4:
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c354();
    func_0x00010725c370();
    func_0x00010c0ba520();
  }
  func_0x00010725be2c();
LAB_107259d10:
                    /* WARNING: Could not recover jumptable at 0x00010c138430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetCameraChangeReason_11262bb28);
  return;
}



/* Entry: 107259d40; end: 107259dbb; -[MGLMapView mapViewWillStartLoadingMap] */

void FUN_107259d40(undefined8 param_1)

{
  long extraout_x8;
  ulong unaff_x21;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bcb0();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0baa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107259dbc; end: 107259e37; -[MGLMapView mapViewDidFinishLoadingMap] */

void FUN_107259dbc(undefined8 param_1)

{
  long extraout_x8;
  ulong unaff_x21;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bcb0();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107259e38; end: 107259ec7; -[MGLMapView mapViewDidFailLoadingMapWithError:] */

void FUN_107259e38(void)

{
  long extraout_x8;
  long unaff_x20;
  ulong unaff_x22;
  
  func_0x00010725bb24();
  func_0x00010725c048();
  if (*(long *)(unaff_x20 + extraout_x8) != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bd20();
    if ((unaff_x22 & 1) != 0) {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba720();
      func_0x00010725be2c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107259ec8; end: 107259f43; -[MGLMapView mapViewWillStartRenderingFrame] */

void FUN_107259ec8(undefined8 param_1)

{
  long extraout_x8;
  ulong unaff_x21;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bcb0();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0baa40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107259f44; end: 107259fcb; -[MGLMapView mapViewDidFinishRenderingFrameFullyRendered:] */

void FUN_107259f44(ulong param_1)

{
  ulong uVar1;
  long extraout_x8;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725be1c();
    if ((uVar1 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107259fcc; end: 10725a047; -[MGLMapView mapViewWillStartRenderingMap] */

void FUN_107259fcc(undefined8 param_1)

{
  long extraout_x8;
  ulong unaff_x21;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bcb0();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0baa80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10725a048; end: 10725a0d3; -[MGLMapView mapViewDidFinishRenderingMapFullyRendered:] */

void FUN_10725a048(undefined8 param_1)

{
  long extraout_x8;
  ulong unaff_x22;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010725c2fc();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bd20();
    if ((unaff_x22 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10725a0d4; end: 10725a14f; -[MGLMapView mapViewDidBecomeIdle] */

void FUN_10725a0d4(undefined8 param_1)

{
  long extraout_x8;
  ulong unaff_x21;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bcb0();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ba700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10725a150; end: 10725a2c7; -[MGLMapView mapViewDidFinishLoadingStyle] */

/* WARNING: Removing unreachable block (ram,0x00010725a268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a150(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  int iStack_50;
  int iStack_4c;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    lVar1 = param_1;
    func_0x00010725c1c4();
    plVar2 = *(long **)(lVar1 + extraout_x8_00);
    (**(code **)(*plVar2 + 0x168))(auStack_70);
    if (iStack_50 != 0) {
      dVar5 = 0.0;
      if (iStack_50 == 1) {
        dVar5 = (double)fStack_60;
      }
      *(double *)(param_1 + _DAT_112766004) = dVar5;
    }
    if (iStack_4c != 0) {
      dVar5 = 0.0;
      if (iStack_4c == 2) {
        dVar5 = (double)fStack_5c;
      }
      *(double *)(param_1 + _DAT_112766008) = dVar5;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010725bee4();
    func_0x0001077c3744(auStack_88,*(undefined8 *)(*plVar2 + 0x10f8));
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c25d8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112765fc4);
    *(undefined **)(param_1 + _DAT_112765fc4) = puVar3;
    func_0x00010725bfb4(uVar4);
    func_0x00010725c438();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x00010725bc8c();
    func_0x00010793f34c(auStack_70);
  }
  return;
}



/* Entry: 10725a2c8; end: 10725a2cb; -[MGLMapView sourceDidChangeWithName:] */

void FUN_10725a2c8(void)

{
  return;
}



/* Entry: 10725a2cc; end: 10725a3e3; -[MGLMapView didFailToLoadImage:] */

void FUN_10725a2cc(void)

{
  long *plVar1;
  long *unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010725bde0();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  plVar1 = unaff_x21;
  _objc_opt_respondsToSelector();
  func_0x00010725be24();
  if (((ulong)plVar1 & 1) != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c5e8();
    func_0x00010c0ba4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bce8();
    if (unaff_x21 != (long *)0x0) {
      func_0x00010c0cd060(&uStack_38);
      func_0x00010725beec();
      uStack_40 = uStack_38;
      uStack_38 = 0;
      func_0x0001077c3804(*(undefined8 *)(*unaff_x21 + 0x10f8),&uStack_40);
      func_0x00010725bab8(&uStack_40);
      func_0x00010725bab8(&uStack_38);
    }
    func_0x00010725be24();
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 10725a3e4; end: 10725a477; -[MGLMapView shouldRemoveStyleImage:] */

undefined8 FUN_10725a3e4(void)

{
  undefined8 unaff_x20;
  ulong unaff_x22;
  
  func_0x00010725bb24();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x00010725bd20();
  if ((unaff_x22 & 1) == 0) {
    unaff_x20 = 1;
  }
  else {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba5e0();
    func_0x00010725be2c();
  }
  func_0x00010725be1c();
  return unaff_x20;
}



/* Entry: 10725a478; end: 10725a56b; -[MGLMapView imageForName:] */

void FUN_10725a478(long *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [16];
  char cStack_28;
  
  func_0x00010725bb24();
  if (unaff_x19 == 0) {
    param_1 = (long *)PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010c11f020();
  }
  func_0x00010725c004();
  uVar1 = *(undefined8 *)(*param_1 + 0x10f8);
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x00010002b838(auStack_50,unaff_x19);
  func_0x0001077c3774(auStack_38,uVar1,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  if (cStack_28 == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c027d80();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  FUN_10725af38(auStack_38);
  func_0x00010725be1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10725a56c; end: 10725a577; -[MGLMapView styleName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a56c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fc4);
}



/* Entry: 10725a578; end: 10725a593; -[MGLMapView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a578(void)

{
  func_0x00010725c6e0((long)_DAT_112766038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725a594; end: 10725a59f; -[MGLMapView preferredFramesPerSecond] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a594(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766054);
}



/* Entry: 10725a5a0; end: 10725a5ab; -[MGLMapView isZoomEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a5a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765ff8);
}



/* Entry: 10725a5ac; end: 10725a5b7; -[MGLMapView isScrollEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a5ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765ff0);
}



/* Entry: 10725a5b8; end: 10725a5c3; -[MGLMapView isRotateEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a5b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112766000);
}



/* Entry: 10725a5c4; end: 10725a5cf; -[MGLMapView isPitchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a5c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112766014);
}



/* Entry: 10725a5d0; end: 10725a5db; -[MGLMapView isHapticFeedbackEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a5d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276601c);
}



/* Entry: 10725a5dc; end: 10725a5e7; -[MGLMapView setHapticFeedbackEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a5dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276601c) = param_3;
  return;
}



/* Entry: 10725a5e8; end: 10725a5f3; -[MGLMapView decelerationRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a5e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766020);
}



/* Entry: 10725a5f4; end: 10725a5ff; -[MGLMapView setDecelerationRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a5f4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112766020) = param_1;
  return;
}



/* Entry: 10725a600; end: 10725a617; -[MGLMapView contentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276603c);
}



/* Entry: 10725a618; end: 10725a633; -[MGLMapView mapSdk] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a618(void)

{
  func_0x00010725c6e0((long)_DAT_112765fd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725a634; end: 10725a63f; -[MGLMapView panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a634(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fec);
}



/* Entry: 10725a640; end: 10725a64b; -[MGLMapView twoFingerPanGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766010);
}



/* Entry: 10725a64c; end: 10725a657; -[MGLMapView pinchGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a64c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765ff4);
}



/* Entry: 10725a658; end: 10725a663; -[MGLMapView rotationGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765ffc);
}



/* Entry: 10725a664; end: 10725a66f; -[MGLMapView doubleTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a664(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276600c);
}



/* Entry: 10725a670; end: 10725a67b; -[MGLMapView twoFingerTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766018);
}



/* Entry: 10725a67c; end: 10725a687; -[MGLMapView rotationThresholdWhileZooming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a67c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766004);
}



/* Entry: 10725a688; end: 10725a693; -[MGLMapView setRotationThresholdWhileZooming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a688(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112766004) = param_1;
  return;
}



/* Entry: 10725a694; end: 10725a69f; -[MGLMapView horizontalTiltToleranceDegrees] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766008);
}



/* Entry: 10725a6a0; end: 10725a6ab; -[MGLMapView setHorizontalTiltToleranceDegrees:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a6a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112766008) = param_1;
  return;
}



/* Entry: 10725a6ac; end: 10725a6b7; -[MGLMapView tiltForZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a6ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766064);
}



/* Entry: 10725a6b8; end: 10725a6c3; -[MGLMapView setTiltForZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10725a6c4; end: 10725a6cf; -[MGLMapView cameraChangeReasonBitmask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a6c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276602c);
}



/* Entry: 10725a6d0; end: 10725a6df; -[MGLMapView setCameraChangeReasonBitmask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276602c) = param_3;
  return;
}



/* Entry: 10725a6e0; end: 10725a6eb; -[MGLMapView scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a6e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765f7c);
}



/* Entry: 10725a6ec; end: 10725a6f7; -[MGLMapView setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a6ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765f7c) = param_1;
  return;
}



/* Entry: 10725a6f8; end: 10725a703; -[MGLMapView angle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a6f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765f80);
}



/* Entry: 10725a704; end: 10725a70f; -[MGLMapView setAngle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a704(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765f80) = param_1;
  return;
}



/* Entry: 10725a710; end: 10725a71b; -[MGLMapView pressDownStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10725a710(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112765f84);
}



/* Entry: 10725a71c; end: 10725a727; -[MGLMapView setPressDownStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a71c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112765f84;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10725a728; end: 10725a733; -[MGLMapView pressDownStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a728(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765f88);
}



/* Entry: 10725a734; end: 10725a73f; -[MGLMapView setPressDownStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a734(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765f88) = param_1;
  return;
}



/* Entry: 10725a740; end: 10725a74b; -[MGLMapView longPressStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10725a740(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112765f8c);
}



/* Entry: 10725a74c; end: 10725a757; -[MGLMapView setLongPressStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a74c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112765f8c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10725a758; end: 10725a763; -[MGLMapView isDormant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a758(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765f90);
}



/* Entry: 10725a764; end: 10725a76f; -[MGLMapView setDormant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a764(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765f90) = param_3;
  return;
}



/* Entry: 10725a770; end: 10725a77b; -[MGLMapView rotationBeforeThresholdMet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765f94);
}



/* Entry: 10725a77c; end: 10725a787; -[MGLMapView setRotationBeforeThresholdMet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a77c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765f94) = param_1;
  return;
}



/* Entry: 10725a788; end: 10725a793; -[MGLMapView isZooming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a788(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765f98);
}



/* Entry: 10725a794; end: 10725a79f; -[MGLMapView setIsZooming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a794(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765f98) = param_3;
  return;
}



/* Entry: 10725a7a0; end: 10725a7ab; -[MGLMapView isRotating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a7a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765f9c);
}



/* Entry: 10725a7ac; end: 10725a7b7; -[MGLMapView setIsRotating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a7ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765f9c) = param_3;
  return;
}



/* Entry: 10725a7b8; end: 10725a7c3; -[MGLMapView pendingCompletionBlocks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a7b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766068);
}



/* Entry: 10725a7c4; end: 10725a7f7; -[MGLMapView setPendingCompletionBlocks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112766068;
  func_0x00010725be6c();
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10725a7f8; end: 10725a803; -[MGLMapView experimental_enableFrameRateMeasurement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a7f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765fa0);
}



/* Entry: 10725a804; end: 10725a80f; -[MGLMapView setExperimental_enableFrameRateMeasurement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a804(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765fa0) = param_3;
  return;
}



/* Entry: 10725a810; end: 10725a81b; -[MGLMapView averageFrameRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a810(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fa4);
}



/* Entry: 10725a81c; end: 10725a827; -[MGLMapView setAverageFrameRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a81c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765fa4) = param_1;
  return;
}



/* Entry: 10725a828; end: 10725a833; -[MGLMapView frameTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a828(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fa8);
}



/* Entry: 10725a834; end: 10725a83f; -[MGLMapView setFrameTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a834(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765fa8) = param_1;
  return;
}



/* Entry: 10725a840; end: 10725a84b; -[MGLMapView averageFrameTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a840(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fac);
}



/* Entry: 10725a84c; end: 10725a857; -[MGLMapView setAverageFrameTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a84c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112765fac) = param_1;
  return;
}



/* Entry: 10725a858; end: 10725a863; -[MGLMapView terminated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a858(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765fb0);
}



/* Entry: 10725a864; end: 10725a86f; -[MGLMapView setTerminated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a864(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765fb0) = param_3;
  return;
}



/* Entry: 10725a870; end: 10725a87b; -[MGLMapView residualCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a870(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276606c);
}



/* Entry: 10725a87c; end: 10725a887; -[MGLMapView setResidualCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a87c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10725a888; end: 10725a893; -[MGLMapView residualDebugMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a888(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765fb4);
}



/* Entry: 10725a894; end: 10725a8a3; -[MGLMapView setResidualDebugMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a894(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112765fb4) = param_3;
  return;
}



/* Entry: 10725a8a4; end: 10725a8af; -[MGLMapView residualStyleURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a8a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766070);
}



/* Entry: 10725a8b0; end: 10725a8bb; -[MGLMapView setResidualStyleURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a8b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10725a8bc; end: 10725a8c7; -[MGLMapView dragGestureMiddlePoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10725a8bc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112765fb8);
}



/* Entry: 10725a8c8; end: 10725a8d3; -[MGLMapView setDragGestureMiddlePoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112765fb8;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10725a8d4; end: 10725a8ef; -[MGLMapView displayLinkScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a8d4(void)

{
  func_0x00010725c6e0((long)_DAT_112766074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10725a8f0; end: 10725a903; -[MGLMapView setDisplayLinkScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112766074,param_3);
  return;
}



/* Entry: 10725a904; end: 10725a90f; -[MGLMapView displayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766040);
}



/* Entry: 10725a910; end: 10725a943; -[MGLMapView setDisplayLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112766040;
  func_0x00010725be6c();
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10725a944; end: 10725a94f; -[MGLMapView needsDisplayRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10725a944(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765fbc);
}



/* Entry: 10725a950; end: 10725a95b; -[MGLMapView setNeedsDisplayRefresh:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725a950(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765fbc) = param_3;
  return;
}



/* Entry: 10725a95c; end: 10725aa67; -[MGLMapView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10725a95c(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + _DAT_112766040;
  _objc_storeStrong(lVar1,0);
  func_0x00010725c69c((long)_DAT_112766074);
  func_0x00010725bbc0((long)_DAT_112766070);
  func_0x00010725bbc0((long)_DAT_11276606c);
  func_0x00010725bbc0((long)_DAT_112766068);
  func_0x00010725bbc0((long)_DAT_112766064);
  func_0x00010725bbc0((long)_DAT_112766018);
  func_0x00010725bbc0((long)_DAT_11276600c);
  func_0x00010725bbc0((long)_DAT_112765ffc);
  func_0x00010725bbc0((long)_DAT_112765ff4);
  func_0x00010725bbc0((long)_DAT_112766010);
  func_0x00010725bbc0((long)_DAT_112765fec);
  func_0x00010725c69c((long)_DAT_112765fd0);
  func_0x00010725c69c((long)_DAT_112766038);
  func_0x00010725bbc0((long)_DAT_112765fc4);
  func_0x00010725bbc0((long)_DAT_112766050);
  func_0x00010725bbc0((long)_DAT_112766028);
  func_0x00010725bbc0((long)_DAT_112766024);
  func_0x00010725bbc0((long)_DAT_112765fe4);
  func_0x00010725c5dc((long)_DAT_112765fcc);
  if (lVar1 != 0) {
    func_0x00010725bcdc();
  }
  func_0x00010725c5dc((long)_DAT_112765fd8);
  if (lVar1 != 0) {
    func_0x00010725bcdc();
  }
  func_0x00010725bbc0((long)_DAT_112765fe0);
  FUN_10725b278(param_1 + _DAT_112765fdc);
  param_1 = param_1 + _DAT_112765fc8;
  func_0x00010725c0a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10725aa68; end: 10725ab13; -[MGLMapView .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725aa68(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112765fc8;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_112765fdc;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112765fd8) = 0;
  *(undefined8 *)(param_1 + _DAT_112765fcc) = 0;
  return;
}


