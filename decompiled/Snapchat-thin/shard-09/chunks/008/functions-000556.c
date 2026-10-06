/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10725590c; end: 107255b17; -[MGLMapView handleTwoFingerTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10725590c(double param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 extraout_x8;
  long unaff_x21;
  long lVar3;
  double unaff_d10;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  double dStack_e0;
  undefined8 uStack_78;
  
  func_0x00010725bc00();
  uStack_78 = extraout_x8;
  func_0x00010725be6c();
  func_0x00010725bec8();
  uVar1 = param_2 == 3;
  if (((bool)uVar1) && (param_2 = unaff_x21, func_0x00010c083e40(), (int)param_2 != 0)) {
    param_2 = unaff_x21;
    func_0x00010c2bf200();
    func_0x00010725beec();
    func_0x00010740eb48(auStack_120);
    uVar1 = param_1 == dStack_e0;
    if (!(bool)uVar1) {
      func_0x00010725c0d4();
      func_0x00010725c038();
      func_0x00010725c0cc();
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c024();
      func_0x00010c2bf200();
      func_0x00010725c5c4();
      func_0x00010725c1e0();
      func_0x00010725c364();
      param_2 = unaff_x21;
      func_0x00010725c200((long)unaff_d10,0xbff0000000000000);
      func_0x00010bf290c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bb68();
      if ((int)param_2 != 0) {
        lVar3 = (long)_DAT_112765fe0;
        iVar2 = (int)*(undefined8 *)(unaff_x21 + lVar3);
        func_0x00010c071800();
        if (iVar2 == 0) {
          func_0x00010725beec();
          func_0x00010725bdd0();
          func_0x00010725c624();
          func_0x00010725c030();
          func_0x00010725c3d8();
          func_0x00010725c1d0(auStack_120[0],uStack_110);
          func_0x00010725bb7c();
          func_0x00010725c440();
          func_0x00010725c00c();
        }
        else {
          func_0x00010725c418();
          func_0x00010bf03e20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725bf70(*(undefined8 *)(unaff_x21 + lVar3));
          func_0x00010725c684();
          func_0x00010725be7c();
        }
        func_0x00010725c2f4(auStack_120);
        func_0x00010725c264();
        func_0x00010725c60c(FUN_107255b18,0xc2000000);
        func_0x00010725c780();
        func_0x00010bf033e0(0x3fd3333333333333);
        func_0x00010725c1f0();
        func_0x00010725c3e0();
        param_2 = unaff_x21;
      }
      func_0x00010725be34();
      func_0x00010725be24();
    }
  }
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_78);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725bfc8();
  func_0x00010725be34();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  func_0x00010725c460();
  func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107255b18; end: 107255b43;  */

void FUN_107255b18(undefined8 param_1)

{
  func_0x00010725c460();
  func_0x00010c2823e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107255b44; end: 107255c8f; -[MGLMapView handlePressDownGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107255b44(double param_1,double param_2,undefined8 param_3)

{
  long extraout_x8;
  long unaff_x20;
  long lVar1;
  double dVar2;
  double unaff_d8;
  double unaff_d9;
  
  func_0x00010725bb24();
  func_0x00010725bfd4();
  func_0x00010725c218();
  func_0x00010725c364();
  func_0x00010725bec8();
  switch(param_3) {
  case 1:
    func_0x00010725bf70();
    func_0x00010c1e1680();
    _CACurrentMediaTime();
    func_0x00010c1e16a0();
    func_0x00010725c1c4();
    func_0x0001072b6fb4(*(undefined8 *)(unaff_x20 + extraout_x8),&stack0xffffffffffffffa0,2);
    break;
  case 2:
    func_0x00010c110080();
    if (SQRT((param_2 - unaff_d8) * (param_2 - unaff_d8) +
             (param_1 - unaff_d9) * (param_1 - unaff_d9)) <= 10.0) break;
  case 4:
    FUN_107255c90();
    break;
  case 3:
    _CACurrentMediaTime();
    dVar2 = param_1;
    func_0x00010c1100a0();
    if (param_1 - dVar2 <= 0.35) {
      lVar1 = (long)_DAT_112765fc8;
      func_0x0001072b6fb4(*(undefined8 *)(unaff_x20 + lVar1),&stack0xffffffffffffffa0,1);
      func_0x00010725c6b0(*(undefined8 *)(unaff_x20 + lVar1));
    }
    else {
      FUN_107255c90();
    }
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 107255c90; end: 107255cd3;  */

void FUN_107255c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
    func_0x00010725c288();
    func_0x00010c195460();
    func_0x00010725c39c();
    func_0x00010c195460();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107255cd4; end: 107255d2f; -[MGLMapView handleLongPressGesture:] */

void FUN_107255cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010725bb24();
  func_0x00010725bec8();
  if (param_3 == 1) {
    func_0x00010725bfd4();
    func_0x00010725c218();
    func_0x00010725c1c4();
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x0001072b6fb4(*(undefined8 *)(unaff_x20 + extraout_x8),&uStack_30,3);
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 107255d30; end: 107255f27; -[MGLMapView _sps_handleTwoFingerDragGesture:] */

void FUN_107255d30(undefined8 param_1,double param_2)

{
  int iVar1;
  ulong uVar2;
  ulong unaff_x20;
  long unaff_x23;
  double unaff_d9;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_70;
  
  func_0x00010725bb24();
  uVar2 = unaff_x20;
  func_0x00010c07a140();
  if ((uVar2 & 1) != 0) {
    func_0x00010725c4c0();
    func_0x00010725c230();
    func_0x00010725c210();
    func_0x00010725bec8();
    if (uVar2 == 1) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bdec();
      func_0x00010725bd7c();
      param_2 = unaff_d9 + -1.0;
      func_0x00010725c27c(0xbff0000000000000,param_2);
      func_0x00010c191660();
      func_0x00010725c004();
      func_0x00010725c844();
      func_0x00010725be84();
      uRam00000001136ca180 = uStack_70;
      uVar2 = unaff_x20;
      func_0x00010c0dd1a0();
    }
    func_0x00010725bec8();
    if ((uVar2 == 1) || (func_0x00010725bec8(), uVar2 == 2)) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bdec();
      func_0x00010725be2c();
      func_0x00010725c27c();
      func_0x00010c191660();
      func_0x00010725c1e0();
      func_0x00010725c364();
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c890();
      uVar2 = unaff_x20;
      func_0x00010bf290a0(param_2);
      iVar1 = (int)uVar2;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c338();
      if (iVar1 != 0) {
        func_0x00010725c124();
        func_0x00010c071800();
        if (iVar1 == 0) {
          func_0x00010725c004();
          func_0x00010725bdd0();
          func_0x00010725c5f4();
          func_0x00010725c090();
          func_0x00010725c728();
          func_0x00010725c1d0(uStack_110,uStack_100);
          func_0x00010725c468();
        }
        else {
          func_0x00010725bf70(*(undefined8 *)(unaff_x20 + unaff_x23));
          func_0x00010725c678();
        }
      }
      func_0x00010bf29a40();
      func_0x00010725be34();
      func_0x00010725be2c();
    }
    else {
      func_0x00010725bec8();
      if ((uVar2 == 3) || (func_0x00010725bec8(), uVar2 == 4)) {
        func_0x00010725c730();
        func_0x00010c2823e0();
        func_0x00010c191660(*(undefined8 *)PTR__CGPointZero_110347540,
                            *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      }
    }
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 107255f28; end: 1072561f3; -[MGLMapView handleTwoFingerDragGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107255f28(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong unaff_x20;
  long unaff_x23;
  double dVar6;
  double dVar7;
  double unaff_d9;
  undefined8 uStack_110;
  undefined8 uStack_100;
  double dStack_70;
  
  func_0x00010725bb24();
  uVar5 = unaff_x20;
  func_0x00010c07a140();
  if ((uVar5 & 1) != 0) {
    func_0x00010725c4c0();
    func_0x00010725c230();
    func_0x00010725c210();
    func_0x00010725bec8();
    if (uVar5 == 1) {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bdec();
      func_0x00010725bd7c();
      param_2 = unaff_d9 + -1.0;
      func_0x00010725c27c(0xbff0000000000000,param_2);
      func_0x00010c191660();
      func_0x00010725c004();
      func_0x00010725c844();
      func_0x00010725be84();
      dRam00000001136ca188 = dStack_70;
      uVar5 = unaff_x20;
      func_0x00010c0dd1a0();
      param_1 = dStack_70;
    }
    func_0x00010725bec8();
    if ((uVar5 == 1) || (func_0x00010725bec8(), uVar5 == 2)) {
      func_0x00010725c7c8();
      if (uVar5 == 2) {
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725c084();
        func_0x00010725c458();
        func_0x00010725bd7c();
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725c084();
        func_0x00010725c458();
        func_0x00010725be2c();
        func_0x00010725bc78();
        func_0x00010bf02b00();
        dVar6 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bdec();
        dVar7 = dVar6;
        func_0x00010725be2c();
        func_0x00010bf89600();
        func_0x00010bf02b00();
        func_0x00010c191660(dVar6,param_2);
        dVar7 = ABS(dVar7);
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (ABS(param_1) < *(double *)(unaff_x20 + (long)_DAT_112766008)) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar7)) {
            bVar1 = dVar7 < 60.0;
            bVar2 = dVar7 == 60.0;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          func_0x00010725c1e0();
          func_0x00010725c364();
          func_0x00010bf28e60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725c890();
          uVar5 = unaff_x20;
          func_0x00010bf290a0(param_2);
          iVar4 = (int)uVar5;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010725c338();
          if (iVar4 != 0) {
            func_0x00010725c124();
            func_0x00010c071800();
            if (iVar4 == 0) {
              func_0x00010725c004();
              func_0x00010725bdd0();
              func_0x00010725c5f4();
              func_0x00010725c090();
              func_0x00010725c728();
              func_0x00010725c1d0(uStack_110,uStack_100);
              func_0x00010725c468();
            }
            else {
              func_0x00010725bf70(*(undefined8 *)(unaff_x20 + unaff_x23));
              func_0x00010725c678();
            }
          }
          func_0x00010bf29a40();
          func_0x00010725be34();
          func_0x00010725be2c();
        }
      }
      else {
        func_0x00010c209fc0();
      }
    }
    else {
      func_0x00010725bec8();
      if ((uVar5 == 3) || (func_0x00010725bec8(), uVar5 == 4)) {
        func_0x00010725c730();
        func_0x00010c2823e0();
        func_0x00010c191660(*(undefined8 *)PTR__CGPointZero_110347540,
                            *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
      }
    }
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 1072561f4; end: 1072562e3; -[MGLMapView cameraByPanningWithTranslation:panGesture:] */

void FUN_1072561f4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double unaff_d10;
  
  dVar1 = param_1;
  func_0x00010725bde0();
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
  func_0x00010725bce8();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  func_0x00010725c5c4();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51220(unaff_d10 - param_1,dVar1 - param_2);
  func_0x00010725bf50();
  func_0x00010725be34();
  func_0x00010725bf64();
  func_0x00010c17a6c0();
  func_0x00010725be1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1072562e4; end: 1072563cb; -[MGLMapView cameraByZoomingToZoomLevel:aroundAnchorPoint:] */

void FUN_1072562e4(undefined8 param_1)

{
  undefined8 unaff_d10;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010725c53c();
  func_0x00010c23d0a0();
  func_0x00010c23d0a0(param_1);
  func_0x00010725bf64(&uStack_70);
  FUN_10725aba0();
  func_0x00010725bee4();
  uStack_118 = uStack_68;
  uStack_120 = uStack_70;
  uStack_108 = uStack_58;
  uStack_110 = uStack_60;
  uStack_100 = 1;
  func_0x00010725be84();
  func_0x00010c0ce780(param_1);
  func_0x00010c0c3720(param_1);
  NEON_fminnm(uStack_70,unaff_d10);
  func_0x00010725bee4();
  func_0x00010740e0f0(&uStack_120);
  _CLLocationCoordinate2DMake(uStack_120,uStack_118);
  func_0x00010725bf50();
  _CLLocationCoordinate2DMake(uStack_110,uStack_108);
  func_0x00010725bf64(param_1);
  func_0x00010bf2b1e0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1072563cc; end: 10725643f; -[MGLMapView cameraByRotatingToDirection:aroundAnchorPoint:] */

void FUN_1072563cc(void)

{
  func_0x00010725c53c();
  func_0x00010725c514();
  func_0x00010725c2e4();
  func_0x00010725bbec();
  func_0x00010725bdac();
  func_0x00010bf29860();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107256440; end: 1072564af; -[MGLMapView cameraByTiltingToPitch:] */

void FUN_107256440(void)

{
  func_0x00010725c514();
  func_0x00010725c2e4();
  func_0x00010725bbec();
  func_0x00010725bdac();
  func_0x00010bf29860();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1072564b0; end: 107256537; -[MGLMapView anchorPointForGesture:] */

void FUN_1072564b0(void)

{
  undefined1 in_ZR;
  
  func_0x00010725bb24();
  func_0x00010725c85c();
  if ((bool)in_ZR) {
    func_0x00010bf4c000();
    func_0x00010725bf50();
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bed0();
    func_0x00010c09ef00();
    func_0x00010725bf50();
    func_0x00010725be24();
  }
  func_0x00010725be1c();
  func_0x00010725bf64();
  return;
}



/* Entry: 107256538; end: 10725660f; -[MGLMapView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107256538(double param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long unaff_x20;
  
  func_0x00010725bb24();
  func_0x00010725c85c();
  if ((bool)in_ZR) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c084();
    func_0x00010725c458();
    func_0x00010725bd7c();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c084();
    func_0x00010725c458();
    func_0x00010725be2c();
    func_0x00010725bc78();
    func_0x00010bf02b00();
    bVar1 = ABS(param_1) <= *(double *)(unaff_x20 + _DAT_112766008);
  }
  else {
    bVar1 = true;
  }
  func_0x00010725be1c();
  return bVar1;
}



/* Entry: 107256610; end: 10725672b; -[MGLMapView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107256610(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010725bc00();
  uStack_38 = extraout_x8;
  func_0x00010725be6c();
  func_0x00010725bf5c();
  uVar1 = true;
  if ((unaff_x19 == *(long *)(unaff_x21 + _DAT_112766024)) ||
     (uVar1 = unaff_x19 == *(long *)(unaff_x21 + _DAT_112766028), (bool)uVar1)) {
    puVar2 = (undefined *)0x1;
  }
  else {
    uStack_50 = *(undefined8 *)(unaff_x21 + _DAT_112765fec);
    uStack_48 = *(undefined8 *)(unaff_x21 + _DAT_112765ff4);
    uStack_40 = *(undefined8 *)(unaff_x21 + _DAT_112765ffc);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_50,3);
    _objc_retainAutoreleasedReturnValue();
    param_5 = puVar2;
    func_0x00010bf4b900();
    if ((int)param_5 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010bf4b900(puVar2,param_6,param_8);
      param_5 = puVar2;
    }
    func_0x00010725be34();
  }
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  dVar3 = param_1;
  dVar4 = param_2;
  if (param_3 < param_1) {
    dVar3 = param_3;
    dVar4 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  _atan2(param_4 - dVar4,param_3 - dVar3);
  return param_5;
}



/* Entry: 10725672c; end: 107256783; -[MGLMapView angleBetweenPoints:endPoint:] */

double FUN_10725672c(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  dVar2 = param_2;
  if (param_3 < param_1) {
    dVar1 = param_3;
    dVar2 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  param_4 = param_4 - dVar2;
  _atan2(param_4,param_3 - dVar1);
  return (param_4 * 180.0) / 3.141592653589793;
}



/* Entry: 107256784; end: 1072567b7; -[MGLMapView debugMask] */

long * FUN_107256784(long *param_1)

{
  long extraout_x8;
  
  func_0x00010725bcf4();
  if (extraout_x8 != 0) {
    func_0x00010c0c3c00();
    return (long *)((ulong)*(uint *)(*param_1 + 0x10dc) & 0x3e);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 1072567b8; end: 1072567ef; -[MGLMapView setDebugMask:] */

void FUN_1072567b8(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar13;
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    return;
  }
  func_0x00010c0c3c00();
  lVar5 = *param_1;
  *(uint *)(lVar5 + 0x10dc) = param_3 & 0x3e;
  puVar7 = &UNK_10de67fd7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de67fd7);
  uVar10 = *(undefined8 *)(lVar5 + 0x48);
  uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
  uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
  uStack_1060 = 0;
  uStack_1058 = 0;
  ppuStack_1070 = &PTR_FUN_110996720;
  uStack_1068 = 0;
  uStack_1050 = 0x76;
  uStack_1048 = 0;
  uStack_1044 = 1;
  uStack_1038 = 0;
  uStack_1030 = 0;
  uStack_1040 = 0;
  puVar6 = &uStack_1090;
  FUN_10729d56c(puVar6,"reason",puVar7);
  uStack_80 = 1;
  uStack_78 = 0;
  puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
  uStack_58 = 3;
  func_0x00010743fa9c(uVar10,puVar6,&uStack_80,&puStack_60,7);
  puVar6 = &uStack_1090;
  FUN_107262330();
  if (*(int *)(lVar5 + 0x10d0) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    puVar6 = (undefined8 *)0x7fffffffffffffff;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_1080 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_1088 = *(undefined8 *)(lVar8 + 0x198);
  ppuStack_1070 = *(undefined ***)(lVar8 + 0x1b0);
  uStack_1078 = *(undefined8 **)(lVar8 + 0x1a8);
  uStack_1068 = *(undefined8 *)(lVar8 + 0x1b8);
  uStack_1090 = puVar6;
  puStack_60 = puVar6;
  if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
    func_0x000107410e94(lVar5 + 0x1168);
    func_0x0001074e31dc(lVar5 + 0x1168,&uStack_1090);
  }
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
  dVar13 = (double)(ulong)uVar12;
  uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
  *(uint *)(lVar5 + 0x143c) = uVar12;
  *(undefined4 *)(lVar5 + 0x1440) = uVar14;
  func_0x000107411798();
  func_0x0001074e33b8((float)dVar13,lVar5 + 0x1168);
  func_0x0001074e3804(&uStack_80,lVar5 + 0x1168);
  func_0x000107413c78(lVar5 + 0x50,&uStack_80);
  func_0x0001074137f8(lVar5 + 0x50,&puStack_60);
  if (*(char *)(lVar5 + 0x1164) == '\x01') {
    uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
    func_0x0001074117a0();
    uStack_1030 = uStack_1030 & 0xffffffffffffff00;
    uStack_1028 = 0;
    func_0x000107410058(lVar5,&uStack_1090);
  }
  lVar8 = *(long *)(lVar5 + 0x10f8);
  uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
  func_0x0001077c5a6c();
  uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
  uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
  uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
  uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
  uStack_1078 = puStack_60;
  _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_220,*(long *)(lVar8 + 8) + 0x90);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  uStack_208 = *(undefined1 *)(lVar8 + 0x22);
  uStack_1f8 = *(undefined8 *)(lVar8 + 0x1a0);
  uStack_200 = *(undefined8 *)(lVar8 + 0x198);
  uStack_1e0 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
  uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
  uStack_1e8 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
  uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
  uStack_1f0 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
  func_0x000107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
  puVar6 = &uStack_1090;
  uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
  puVar9 = *(undefined8 **)(lVar8 + 0x1c0);
  lStack_140 = puVar9[1];
  uStack_148 = *puVar9;
  if (puVar9[1] != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_00;
    lVar8 = extraout_x9;
  }
  lStack_130 = *(long *)(lVar8 + 0xb0);
  uStack_138 = *(undefined8 *)(lVar8 + 0xa8);
  if (*(long *)(lVar8 + 0xb0) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_00 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_01;
    lVar8 = extraout_x9_00;
  }
  lStack_120 = *(long *)(lVar8 + 0xd8);
  uStack_128 = *(undefined8 *)(lVar8 + 0xd0);
  if (*(long *)(lVar8 + 0xd8) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_01 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_02;
    lVar8 = extraout_x9_01;
  }
  lStack_110 = *(long *)(lVar8 + 0x100);
  uStack_118 = *(undefined8 *)(lVar8 + 0xf8);
  if (*(long *)(lVar8 + 0x100) != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_02 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_03;
    lVar8 = extraout_x9_02;
  }
  uStack_108 = *(undefined8 *)(lVar8 + 0x338);
  lStack_100 = *(long *)(lVar8 + 0x340);
  if (lStack_100 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_03 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_04;
    lVar8 = extraout_x9_03;
  }
  uStack_f8 = *(undefined8 *)(lVar8 + 0x348);
  lStack_f0 = *(long *)(lVar8 + 0x350);
  if (lStack_f0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_04 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_05;
    lVar8 = extraout_x9_04;
  }
  uStack_e8 = *(undefined8 *)(lVar8 + 0x358);
  lStack_e0 = *(long *)(lVar8 + 0x360);
  if (lStack_e0 != 0) {
    do {
      func_0x000107411734();
    } while (extraout_w11_05 != 0);
    func_0x0001074117c0();
    puVar6 = extraout_x8_06;
    lVar8 = extraout_x9_05;
  }
  uStack_d8 = *(undefined8 *)(lVar8 + 0x368);
  lStack_d0 = *(long *)(lVar8 + 0x370);
  if (lStack_d0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_07;
    } while (extraout_w11_06 != 0);
  }
  uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
  lStack_c0 = *(long *)(lVar5 + 0x10f0);
  if (lStack_c0 != 0) {
    do {
      func_0x000107411734();
      puVar6 = extraout_x8_08;
    } while (extraout_w11_07 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
  *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
  *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
  uStack_ac = uStack_78;
  uStack_a8 = uStack_74;
  uStack_b4 = uStack_80;
  uStack_b0 = uStack_7c;
  uStack_9c = (undefined4)uStack_68;
  uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
  uStack_a4 = (undefined4)uStack_70;
  uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
  uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
  uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
  if (*(long *)(lVar5 + 0x1118) != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10 != 0);
  }
  plVar11 = *(long **)(lVar5 + 0x38);
  puVar6 = (undefined8 *)0x1028;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_1109adf98;
  _memcpy(puVar6 + 3,&uStack_1090,0xe70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar6 + 0x1d1,auStack_220);
  puVar6[0x1d5] = uStack_200;
  puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
  puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
  puVar6[0x1d6] = uStack_1f8;
  *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
  *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
  func_0x000107411660(puVar6 + 0x1da,auStack_1d8);
  puVar6[0x1eb] = uStack_150;
  puVar6[0x1ed] = lStack_140;
  puVar6[0x1ec] = uStack_148;
  if (lStack_140 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_00 != 0);
  }
  puVar6[0x1ef] = lStack_130;
  puVar6[0x1ee] = uStack_138;
  if (lStack_130 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_01 != 0);
  }
  puVar6[0x1f1] = lStack_120;
  puVar6[0x1f0] = uStack_128;
  if (lStack_120 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_02 != 0);
  }
  puVar6[499] = lStack_110;
  puVar6[0x1f2] = uStack_118;
  if (lStack_110 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_03 != 0);
  }
  puVar6[0x1f5] = lStack_100;
  puVar6[500] = uStack_108;
  if (lStack_100 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_04 != 0);
  }
  puVar6[0x1f7] = lStack_f0;
  puVar6[0x1f6] = uStack_f8;
  if (lStack_f0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_05 != 0);
  }
  puVar6[0x1f9] = lStack_e0;
  puVar6[0x1f8] = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107411724();
    } while (extraout_w10_06 != 0);
  }
  puVar6[0x1fb] = lStack_d0;
  puVar6[0x1fa] = uStack_d8;
  if (lStack_d0 != 0) {
    plVar1 = (long *)(lStack_d0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6[0x1fd] = lStack_c0;
  puVar6[0x1fc] = uStack_c8;
  puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
  puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
  uStack_c8 = 0;
  lStack_c0 = 0;
  puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
  *(undefined4 *)(puVar6 + 0x202) = uStack_98;
  puVar6[0x204] = uStack_88;
  puVar6[0x203] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_10a0 = puVar6 + 3;
  puStack_1098 = puVar6;
  (**(code **)(*plVar11 + 0x20))(plVar11,&puStack_10a0);
  FUN_10725ab14(&puStack_10a0);
  func_0x000107410df4(&uStack_1090);
  return;
}



/* Entry: 1072567f0; end: 1072568a7; -[MGLMapView resetNorth] */

void FUN_1072567f0(long param_1)

{
  long unaff_x22;
  long unaff_x23;
  
  func_0x00010725c838();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  if (param_1 != 0) {
    func_0x00010c22b860(*(undefined8 *)(unaff_x23 + 0xb68));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bef4();
    func_0x00010725bbb4();
    func_0x00010725be1c();
    if (unaff_x22 < 4) goto LAB_107256878;
    func_0x00010c22b860(*(undefined8 *)(unaff_x23 + 0xb68));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c0c4();
  }
  func_0x00010725be1c();
LAB_107256878:
  func_0x00010725c66c();
                    /* WARNING: Could not recover jumptable at 0x00010c1390f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1072568a8; end: 1072568df; -[MGLMapView resetNorthAnimated:] */

void FUN_1072568a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf29160();
  func_0x00010725c210();
                    /* WARNING: Could not recover jumptable at 0x00010c18e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setDirection_animated__112641288,param_3);
  return;
}



/* Entry: 1072568e0; end: 107256a5f; -[MGLMapView resetPosition] */

void FUN_1072568e0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  
  lVar3 = param_1;
  func_0x00010725c838();
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3b60();
  plVar1 = (long *)0x0;
  if (lVar3 != 0) {
    plVar1 = *(long **)(unaff_x23 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bef4();
    func_0x00010725bbb4();
    func_0x00010725be24();
    if (unaff_x22 < 4) goto LAB_107256974;
    plVar1 = *(long **)(unaff_x23 + 0xb68);
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c0c4();
  }
  func_0x00010725be24();
LAB_107256974:
  func_0x00010725bee4();
  lVar3 = *(long *)(*(long *)(*plVar1 + 0x10f8) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x318);
  if ((*(byte *)(lVar3 + 800) & 1) == 0) {
    uVar4 = 0;
  }
  func_0x00010725c738(uVar4,*(undefined8 *)(lVar3 + 0x2b0),0x4076800000000000,
                      *(undefined8 *)(lVar3 + 0x308));
  func_0x00010bfb68e0(param_1);
  func_0x00010725bf70();
  func_0x00010725c6c8();
  puVar2 = PTR_PTR_1126c65a0;
  func_0x00010725bf34();
  _CLLocationCoordinate2DMake();
  func_0x00010bf29ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c238();
  func_0x00010c176040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107256a60; end: 107256abf; -[MGLMapView setZoomEnabled:] */

/* WARNING: Possible PIC construction at 0x000107256a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107256a94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107256a60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765ff8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112765ff4),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107256ac0; end: 107256acb; -[MGLMapView setScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107256ac0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765ff0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112765fec),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107256acc; end: 107256ad7; -[MGLMapView setRotateEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107256acc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112766000) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112765ffc),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107256ad8; end: 107256ae3; -[MGLMapView setPitchEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107256ad8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112766014) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112766010),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107256ae4; end: 107256b17; -[MGLMapView setPrefetchesTiles:] */

void FUN_107256ae4(long *param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  func_0x00010c0c3c00();
  uVar1 = 4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(*param_1 + 0x1101) = uVar1;
  return;
}



/* Entry: 107256b18; end: 107256b3f; -[MGLMapView prefetchesTiles] */

bool FUN_107256b18(long *param_1)

{
  func_0x00010c0c3c00();
  return *(char *)(*param_1 + 0x1101) != '\0';
}



/* Entry: 107256b40; end: 107256b7f; -[MGLMapView setCenterCoordinate:animated:] */

void FUN_107256b40(undefined8 param_1)

{
  func_0x00010725c5d0();
  func_0x00010c2bf200();
  func_0x00010725bf70(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c17a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107256b80; end: 107256b87; -[MGLMapView setCenterCoordinate:] */

void FUN_107256b80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCenterCoordinate_animated__11263c3d8,0);
  return;
}



/* Entry: 107256b88; end: 107256bbf; -[MGLMapView centerCoordinate] */

void FUN_107256b88(void)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  func_0x00010725c514();
  func_0x00010725c2e4();
  func_0x00010725bbec();
  func_0x00010725bd04();
  _CLLocationCoordinate2DMake(uStack_a8,uStack_a0);
  return;
}



/* Entry: 107256bc0; end: 107256c07; -[MGLMapView setCenterCoordinate:zoomLevel:animated:] */

void FUN_107256bc0(undefined8 param_1)

{
  func_0x00010725c53c();
  func_0x00010bf7f0e0();
  func_0x00010725c200(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c17a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107256c08; end: 107256c0f; -[MGLMapView setCenterCoordinate:zoomLevel:direction:animated:] */

void FUN_107256c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCenterCoordinate_zoomLevel_di_11263c400,param_3,0);
  return;
}



/* Entry: 107256c10; end: 107256cc3; -[MGLMapView setCenterCoordinate:zoomLevel:direction:animated:completionHandler:] */

void FUN_107256c10(void)

{
  undefined8 in_x3;
  
  func_0x00010725bb48();
  func_0x00010725c258();
  func_0x00010725c230();
  func_0x00010725c134();
  func_0x00010725c090();
  func_0x00010725bf34();
  func_0x00010bea2a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 107256cc4; end: 1072571a7; -[MGLMapView _setCenterCoordinate:edgePadding:zoomLevel:direction:duration:animationTimingFunction:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107256cc4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  double param_5,double param_6,undefined8 param_7,double param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  double *pdVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  undefined ***pppuVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double in_stack_00000000;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  double dStack_228;
  undefined1 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  double dStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  double dStack_180;
  undefined ***pppuStack_178;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined1 uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  double dStack_120;
  undefined ***pppuStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  func_0x00010725bc48();
  uStack_b8 = extraout_x8;
  func_0x00010725be6c();
  func_0x00010725bf5c();
  func_0x00010725c048();
  if (*(long *)(unaff_x21 + extraout_x8_00) == 0) {
    if (param_12 != 0) {
      func_0x00010725c7b0(*(undefined8 *)(param_12 + 0x10));
    }
    goto LAB_107257080;
  }
  lVar8 = (long)_DAT_112765fe0;
  iVar3 = (int)*(undefined8 *)(unaff_x21 + lVar8);
  func_0x00010c071800();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (iVar3 != 0) {
    func_0x00010c271ea0(param_1,param_2,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x00010c0df720(param_7,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df720(param_8,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2a140(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c158();
    func_0x00010725bedc();
    puVar4 = PTR_PTR_1126c5bb8;
    _objc_alloc(PTR_PTR_1126c5bb8);
    puStack_1b8 = puVar1;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_1072571a8;
    puStack_1a0 = &UNK_11087bb60;
    func_0x00010725bf5c();
    lStack_198 = param_12;
    func_0x00010bff8d00(puVar4);
    func_0x00010bf03e60(in_stack_00000000,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1840(*(undefined8 *)(unaff_x21 + lVar8));
    func_0x00010725c158();
    func_0x00010725bedc();
    _objc_release(lStack_198);
    func_0x00010725be7c();
    func_0x00010725be34();
    goto LAB_107257080;
  }
  uStack_200 = 0;
  uStack_1f0 = 0;
  dStack_1d8 = (double)((ulong)dStack_1d8 & 0xffffffffffffff00);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  FUN_107246214();
  uStack_230 = 1;
  dVar11 = param_5;
  uStack_240 = param_1;
  uStack_238 = param_2;
  FUN_10725aba0(param_3,param_4,param_5,param_6,&dStack_160);
  dVar9 = dStack_160;
  pppuVar7 = &ppuStack_190;
  dVar10 = (double)CONCAT71(uStack_14f,uStack_150);
  dStack_228 = dStack_160;
  uStack_208 = 1;
  uStack_1e0 = 1;
  if (0.0 <= param_8) {
    uStack_1d0 = 1;
    dStack_1d8 = param_8;
  }
  dStack_160 = (double)((ulong)dStack_160 & 0xffffffffffffff00);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  ppuStack_130 = (undefined **)((ulong)ppuStack_130 & 0xffffffffffffff00);
  uStack_100 = 0;
  in_ZR = in_stack_00000000 == 0.0;
  uStack_e0 = 0;
  uStack_c0 = 0;
  bVar2 = !(bool)in_ZR;
  uStack_1e8 = param_7;
  if (bVar2) {
    dStack_160 = (double)(long)(in_stack_00000000 * 1000000000.0);
    uStack_158 = 1;
    FUN_107250e24(&ppuStack_190,param_11);
    ppuStack_128 = ppuStack_188;
    ppuStack_130 = ppuStack_190;
    pppuStack_118 = pppuStack_178;
    dStack_120 = dStack_180;
    uStack_108 = uStack_168;
    dStack_110 = dStack_170;
    dVar9 = dStack_170;
    dVar10 = dStack_180;
  }
  uStack_100 = bVar2;
  if (param_12 == 0) {
    pppuVar7 = (undefined ***)0x0;
  }
  else {
    func_0x00010725c2f4(auStack_248);
    puStack_278 = puVar1;
    dVar9 = 1.60807493534087e-314;
    uStack_270 = 0xc2000000;
    pcStack_268 = FUN_1072571bc;
    puStack_260 = &UNK_1109959f0;
    _objc_copyWeak(auStack_250,auStack_248);
    func_0x00010725bf5c();
    ppuVar5 = &puStack_278;
    lStack_258 = param_12;
    _objc_retainBlock();
    func_0x00010725c78c();
    ppuStack_190 = &PTR_DAT_110995bc8;
    pppuStack_178 = &ppuStack_190;
    ppuStack_188 = ppuVar5;
    FUN_10724cacc(&ppuStack_190,auStack_d8);
    func_0x0001006393ec(&ppuStack_190);
    _objc_release(lStack_258);
    func_0x00010725c7c0();
    _objc_destroyWeak(auStack_248);
  }
  func_0x00010bf29860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28e60();
  iVar3 = (int)unaff_x21;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010725c768();
  if (iVar3 == 0) {
LAB_10725704c:
    func_0x00010725bedc();
LAB_107257050:
    func_0x00010725c0d4();
    func_0x00010725c038();
    func_0x00010725c0cc();
    func_0x00010725beec();
    func_0x00010740e24c();
  }
  else {
    func_0x00010725c5ac();
    bVar2 = false;
    if ((dVar10 == param_4) && (bVar2 = false, !NAN(dVar9) && !NAN(param_3))) {
      bVar2 = dVar9 == param_3;
    }
    in_ZR = false;
    if ((bVar2) && (in_ZR = false, !NAN(dVar11) && !NAN(param_6))) {
      in_ZR = dVar11 == param_6;
    }
    if (!(bool)in_ZR) goto LAB_10725704c;
    bVar2 = *(double *)(extraout_x8_01 + 0x10) == param_5;
    in_ZR = bVar2;
    func_0x00010725bedc();
    if (!bVar2) goto LAB_107257050;
    if (pppuVar7 != (undefined ***)0x0) {
      func_0x00010725c700(in_stack_00000000);
    }
  }
  func_0x00010725be7c();
  func_0x00010725be34();
  func_0x00010725ab38(&dStack_160);
LAB_107257080:
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_b8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pdVar6 = &dStack_160;
  func_0x00010725ab38();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  if (pdVar6[4] != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001072571b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)pdVar6[4] + 0x10))();
    return;
  }
  return;
}



/* Entry: 1072571a8; end: 1072571bb;  */

void FUN_1072571a8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001072571b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1072571bc; end: 1072571fb;  */

void FUN_1072571bc(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong unaff_x21;
  
  func_0x00010725bebc();
  func_0x00010725c8c8();
  func_0x00010c150280();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) != 0) {
    return;
  }
  func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1072571fc; end: 107257217;  */

void FUN_1072571fc(void)

{
  func_0x00010725bfec();
  return;
}



/* Entry: 107257218; end: 10725724b; -[MGLMapView zoomLevel] */

undefined8 FUN_107257218(void)

{
  undefined8 uStack_50;
  
  func_0x00010725c514();
  func_0x00010725c2e4();
  func_0x00010725bbec();
  func_0x00010725bd04();
  return uStack_50;
}



/* Entry: 10725724c; end: 107257253; -[MGLMapView setZoomLevel:] */

void FUN_10725724c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setZoomLevel_animated__112667928,0);
  return;
}



/* Entry: 107257254; end: 1072573af; -[MGLMapView setZoomLevel:animated:] */

void FUN_107257254(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  int unaff_w19;
  undefined8 unaff_x21;
  long unaff_x24;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  double unaff_d8;
  undefined1 auStack_d0 [40];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x00010725c8d4();
  func_0x00010725c52c();
  func_0x00010725bc5c();
  func_0x00010c2bf200();
  uVar1 = false;
  if (!NAN(unaff_d8) &&
      !NAN((double)CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,
                                                       CONCAT13(in_register_00005003,
                                                                CONCAT12(in_register_00005002,
                                                                         CONCAT11(
                                                  in_register_00005001,in_b0))))))))) {
    uVar1 = unaff_d8 ==
            (double)CONCAT17(in_register_00005007,
                             CONCAT16(in_register_00005006,
                                      CONCAT15(in_register_00005005,
                                               CONCAT14(in_register_00005004,
                                                        CONCAT13(in_register_00005003,
                                                                 CONCAT12(in_register_00005002,
                                                                          CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  }
  if (!(bool)uVar1) {
    func_0x00010725c124();
    func_0x00010c071800();
    if ((int)param_2 != 0) {
      func_0x00010725c654();
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2a120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bd70();
      if (unaff_w19 != 0) {
        func_0x00010bf03e20(*(undefined8 *)(unaff_x24 + 0xdc8));
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010725c5e8();
      func_0x00010c0d17a0();
      func_0x00010725be1c();
      func_0x00010725bb10(extraout_x8);
      if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      goto LAB_107257370;
    }
    func_0x00010725c4c0();
    func_0x00010725c230();
    func_0x00010725c134();
    func_0x00010725c004();
    func_0x00010725bf40(&stack0x00000008);
    func_0x00010725c090();
    FUN_10725aba0();
    func_0x00010725c37c();
    func_0x00010725bc24();
    func_0x00010725c470();
    func_0x00010725c07c();
    unaff_x21 = param_2;
  }
  func_0x00010725bb10(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
LAB_107257370:
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  func_0x00010725be74();
  func_0x00010725bb48();
  func_0x00010c0c3c00();
  func_0x00010725be9c();
  uStack_48 = param_1;
  func_0x00010725bd8c();
  uStack_58 = param_1;
  FUN_10725ac68(auStack_d0,auStack_50,auStack_60);
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_a8 = 1;
  func_0x00010740eb38(unaff_x21,auStack_d0);
  return;
}



/* Entry: 1072573b0; end: 107257437; -[MGLMapView setCoordinateBounds:] */

void FUN_1072573b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_d0 [40];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x00010725bb48();
  func_0x00010c0c3c00();
  func_0x00010725be9c();
  uStack_48 = param_2;
  func_0x00010725bd8c();
  uStack_58 = param_2;
  FUN_10725ac68(auStack_d0,auStack_50,auStack_60);
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_a8 = 1;
  func_0x00010740eb38(param_3,auStack_d0);
  return;
}



/* Entry: 107257438; end: 107257467; -[MGLMapView setMinimumZoomLevel:] */

void FUN_107257438(void)

{
  func_0x00010725c3d0();
  func_0x00010725bdb8();
  func_0x00010725c3e8();
  return;
}



/* Entry: 107257468; end: 107257487; -[MGLMapView minimumZoomLevel] */

undefined8 FUN_107257468(void)

{
  undefined8 uStack_40;
  
  func_0x00010c0c3c00();
  func_0x00010725c2ec();
  return uStack_40;
}



/* Entry: 107257488; end: 1072574b7; -[MGLMapView setMaximumZoomLevel:] */

void FUN_107257488(void)

{
  func_0x00010725c3d0();
  func_0x00010725bdb8();
  func_0x00010725c3e8();
  return;
}



/* Entry: 1072574b8; end: 1072574d7; -[MGLMapView maximumZoomLevel] */

undefined8 FUN_1072574b8(void)

{
  undefined8 uStack_50;
  
  func_0x00010c0c3c00();
  func_0x00010725c2ec();
  return uStack_50;
}



/* Entry: 1072574d8; end: 1072574f7; -[MGLMapView minimumPitch] */

undefined8 FUN_1072574d8(void)

{
  undefined8 uStack_20;
  
  func_0x00010c0c3c00();
  func_0x00010725c2ec();
  return uStack_20;
}



/* Entry: 1072574f8; end: 107257527; -[MGLMapView setMinimumPitch:] */

void FUN_1072574f8(void)

{
  func_0x00010725c3d0();
  func_0x00010725bdb8();
  func_0x00010725c3e8();
  return;
}



/* Entry: 107257528; end: 107257547; -[MGLMapView maximumPitch] */

undefined8 FUN_107257528(void)

{
  undefined8 uStack_30;
  
  func_0x00010c0c3c00();
  func_0x00010725c2ec();
  return uStack_30;
}



/* Entry: 107257548; end: 107257577; -[MGLMapView setMaximumPitch:] */

void FUN_107257548(void)

{
  func_0x00010725c3d0();
  func_0x00010725bdb8();
  func_0x00010725c3e8();
  return;
}



/* Entry: 107257578; end: 10725759f; -[MGLMapView pitch] */

undefined8 FUN_107257578(void)

{
  undefined8 uStack_20;
  
  func_0x00010c0c3c00();
  func_0x00010725c844();
  func_0x00010725be84();
  return uStack_20;
}



/* Entry: 1072575a0; end: 1072575a7; -[MGLMapView setPitch:] */

void FUN_1072575a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dbe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPitch_animated__1126549c0,0);
  return;
}



/* Entry: 1072575a8; end: 107257743; -[MGLMapView setPitch:animated:] */

void FUN_1072575a8(double param_1,double param_2,undefined1 *param_3,undefined8 param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *unaff_x21;
  long unaff_x24;
  double dVar8;
  double dVar9;
  double dVar10;
  double in_stack_00000080;
  undefined1 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined1 in_stack_00000098;
  undefined8 in_stack_00000138;
  undefined1 auStack_1a8 [104];
  double dStack_140;
  undefined1 uStack_138;
  double dStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_78;
  
  func_0x00010725c8d4();
  dVar8 = param_1;
  iVar7 = param_5;
  func_0x00010725bc5c();
  in_stack_00000138 = extraout_x8;
  func_0x00010c0ce500();
  dVar9 = param_1;
  if (param_1 <= dVar8) {
    func_0x00010725c504();
    dVar9 = dVar8;
  }
  func_0x00010c0c35e0(param_3);
  puVar5 = param_3;
  if (dVar8 <= dVar9) {
    func_0x00010c0c35e0();
    param_1 = dVar8;
  }
  else {
    func_0x00010c0ce500();
    if (param_1 <= dVar8) {
      func_0x00010725c504();
      param_1 = dVar8;
    }
  }
  func_0x00010725c100();
  uVar1 = param_1 == dVar8;
  uVar2 = 1;
  if ((bool)uVar1) {
LAB_1072576b4:
    func_0x00010725bb10(in_stack_00000138);
    if ((bool)uVar2) {
      return;
    }
  }
  else {
    func_0x00010725c3b0();
    if ((int)puVar5 == 0) {
      func_0x00010bf2f3e0(param_3);
      func_0x00010725c354();
      func_0x00010725c690();
      func_0x00010725bee4();
      puVar5 = &stack0x00000008;
      func_0x00010725bf40();
      in_stack_00000088 = 1;
      uVar2 = param_5 == 0;
      in_stack_00000090 = 300000000;
      if ((bool)uVar2) {
        in_stack_00000090 = 0;
      }
      in_stack_00000098 = 1;
      in_stack_00000080 = param_1;
      func_0x00010725bc24();
      func_0x00010725c480();
      func_0x00010725c07c();
      goto LAB_1072576b4;
    }
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x00010bf2a0e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      iVar7 = 1;
      func_0x00010bf03e20();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c490();
    func_0x00010725be34();
    puVar5 = *(undefined1 **)(param_3 + unaff_x24);
    func_0x00010725c6f4();
    func_0x00010725be24();
    func_0x00010725bb10(in_stack_00000138);
    unaff_x21 = puVar4;
    dVar8 = param_1;
    if ((bool)uVar1) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  func_0x00010725be2c();
  func_0x00010725be74();
  dVar9 = dVar8;
  func_0x00010725bc5c();
  uStack_78 = extraout_x8_00;
  func_0x00010c0ce500();
  dVar10 = dVar8;
  if (dVar8 <= dVar9) {
    func_0x00010725c504();
    dVar10 = dVar9;
  }
  func_0x00010c0c35e0(puVar5);
  if (dVar9 <= dVar10) {
    puVar6 = puVar5;
    func_0x00010c0c35e0();
    iVar3 = (int)puVar6;
    dVar8 = dVar9;
  }
  else {
    puVar6 = puVar5;
    func_0x00010c0ce500();
    iVar3 = (int)puVar6;
    if (dVar8 <= dVar9) {
      func_0x00010725c504();
      dVar8 = dVar9;
    }
  }
  func_0x00010725c100();
  uVar2 = dVar8 == dVar9;
  if ((bool)uVar2) {
    func_0x00010725c4e8();
    uVar2 = param_2 == dVar9;
    if (!(bool)uVar2) goto LAB_1072577e0;
  }
  else {
LAB_1072577e0:
    func_0x00010725c3b0();
    puVar4 = PTR_PTR_1126b1dc8;
    if (iVar3 != 0) {
      func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2a140(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bd70();
      if (iVar7 != 0) {
        func_0x00010bf03e20(PTR_PTR_1126b1dc8);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c0df720(dVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c490();
      func_0x00010725be34();
      func_0x00010725c6f4(*(undefined8 *)(puVar5 + unaff_x24));
      func_0x00010725be24();
      func_0x00010725bb10(uStack_78);
      unaff_x21 = puVar4;
      if ((bool)uVar2) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
      goto LAB_107257934;
    }
    func_0x00010bf2f3e0(puVar5);
    func_0x00010725c354();
    func_0x00010725c690();
    func_0x00010725bee4();
    func_0x00010725bf40(auStack_1a8);
    uStack_128 = 1;
    uStack_138 = 1;
    uVar2 = iVar7 == 0;
    uStack_120 = 300000000;
    if ((bool)uVar2) {
      uStack_120 = 0;
    }
    uStack_118 = 1;
    dStack_140 = param_2;
    dStack_130 = dVar8;
    func_0x00010725bc24();
    func_0x00010725c480();
    func_0x00010725c07c();
  }
  func_0x00010725bb10(uStack_78);
  if ((bool)uVar2) {
    return;
  }
LAB_107257934:
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  func_0x00010725be74();
                    /* WARNING: Could not recover jumptable at 0x00010c1dbe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0);
  return;
}



/* Entry: 107257744; end: 107257973; -[MGLMapView setPitch:andDirection:animated:] */

void FUN_107257744(double param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined *unaff_x21;
  long unaff_x24;
  double dVar5;
  double dVar6;
  undefined1 auStack_1a8 [104];
  double dStack_140;
  undefined1 uStack_138;
  double dStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_78;
  
  dVar5 = param_1;
  func_0x00010725bc5c();
  uStack_78 = extraout_x8;
  func_0x00010c0ce500();
  dVar6 = param_1;
  if (param_1 <= dVar5) {
    func_0x00010725c504();
    dVar6 = dVar5;
  }
  func_0x00010c0c35e0(param_3);
  if (dVar5 <= dVar6) {
    lVar4 = param_3;
    func_0x00010c0c35e0();
    iVar3 = (int)lVar4;
    param_1 = dVar5;
  }
  else {
    lVar4 = param_3;
    func_0x00010c0ce500();
    iVar3 = (int)lVar4;
    if (param_1 <= dVar5) {
      func_0x00010725c504();
      param_1 = dVar5;
    }
  }
  func_0x00010725c100();
  uVar2 = param_1 == dVar5;
  if ((bool)uVar2) {
    func_0x00010725c4e8();
    uVar2 = param_2 == dVar5;
    if (!(bool)uVar2) goto LAB_1072577e0;
  }
  else {
LAB_1072577e0:
    func_0x00010725c3b0();
    puVar1 = PTR_PTR_1126b1dc8;
    if (iVar3 != 0) {
      func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2a140(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725bd70();
      if (param_5 != 0) {
        func_0x00010bf03e20(PTR_PTR_1126b1dc8);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010725c490();
      func_0x00010725be34();
      func_0x00010725c6f4(*(undefined8 *)(param_3 + unaff_x24));
      func_0x00010725be24();
      func_0x00010725bb10(uStack_78);
      unaff_x21 = puVar1;
      if ((bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar1);
        return;
      }
      goto LAB_107257934;
    }
    func_0x00010bf2f3e0(param_3);
    func_0x00010725c354();
    func_0x00010725c690();
    func_0x00010725bee4();
    func_0x00010725bf40(auStack_1a8);
    uStack_128 = 1;
    uStack_138 = 1;
    uVar2 = param_5 == 0;
    uStack_120 = 300000000;
    if ((bool)uVar2) {
      uStack_120 = 0;
    }
    uStack_118 = 1;
    dStack_140 = param_2;
    dStack_130 = param_1;
    func_0x00010725bc24();
    func_0x00010725c480();
    func_0x00010725c07c();
  }
  func_0x00010725bb10(uStack_78);
  if ((bool)uVar2) {
    return;
  }
LAB_107257934:
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  func_0x00010725be74();
                    /* WARNING: Could not recover jumptable at 0x00010c1dbe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0);
  return;
}



/* Entry: 107257974; end: 10725797f; -[MGLMapView resetPitchAndDirectionAnimated:] */

void FUN_107257974(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dbe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,PTR_s_setPitch_andDirection_animated__1126549b8);
  return;
}



/* Entry: 107257980; end: 1072579a3; -[MGLMapView visibleCoordinateBounds] */

void FUN_107257980(void)

{
  func_0x00010725c7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bf51410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1072579a4; end: 1072579ab; -[MGLMapView setVisibleCoordinateBounds:] */

void FUN_1072579a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleCoordinateBounds_anima_112666870,0)
  ;
  return;
}



/* Entry: 1072579ac; end: 1072579c3; -[MGLMapView setVisibleCoordinateBounds:animated:] */

void FUN_1072579ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setVisibleCoordinateBounds_edgeP_112666880,param_3,0);
  return;
}



/* Entry: 1072579c4; end: 1072579cb; -[MGLMapView setVisibleCoordinateBounds:edgePadding:animated:] */

void FUN_1072579c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c223970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setVisibleCoordinateBounds_edgeP_112666880,param_3,0);
  return;
}



/* Entry: 1072579cc; end: 107257abb; -[MGLMapView setVisibleCoordinateBounds:edgePadding:animated:completionHandler:] */

void FUN_1072579cc(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  
  func_0x00010725bc5c();
  _objc_retain(param_4);
  func_0x00010725c7b8();
  uVar1 = param_3 == 0;
  func_0x00010725bb34();
  func_0x00010c2239a0();
  func_0x00010725be1c();
  func_0x00010725bb10(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725be1c();
  func_0x00010725be3c();
  func_0x00010725bb48();
  func_0x00010bf7f0e0();
  func_0x00010725bb34(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c223990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107257abc; end: 107257b2f; -[MGLMapView setVisibleCoordinates:count:edgePadding:animated:] */

void FUN_107257abc(undefined8 param_1)

{
  func_0x00010725bb48();
  func_0x00010bf7f0e0();
  func_0x00010725bb34(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c223990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107257b30; end: 107257b37; -[MGLMapView setVisibleCoordinates:count:edgePadding:direction:duration:animationTimingFunction:] */

void FUN_107257b30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2239b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisibleCoordinates_count_edge_112666890);
  return;
}



/* Entry: 107257b38; end: 107257bdb; -[MGLMapView setVisibleCoordinates:count:edgePadding:direction:duration:animationTimingFunction:completionHandler:] */

void FUN_107257b38(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = param_5;
  func_0x00010725c190();
  _objc_retain(uVar2);
  func_0x00010725bf5c();
  uVar1 = param_1;
  func_0x00010bf29160(param_1);
  func_0x00010c176340(param_1,param_2,uVar1 | 1);
  func_0x00010725c7fc(param_1,param_2,param_3,param_4);
  func_0x00010beaa280();
  func_0x00010725be24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107257bdc; end: 107257f57; -[MGLMapView _setVisibleCoordinates:count:edgePadding:direction:duration:animationTimingFunction:completionHandler:] */

void FUN_107257bdc(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,long param_3,long param_4,
                  code *param_5,long param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  double *pdVar7;
  double dVar8;
  double in_d5;
  double unaff_d9;
  undefined1 auStack_2d8 [40];
  long lStack_2b0;
  code *pcStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [136];
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined ***pppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined **ppuStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  pcVar4 = param_5;
  func_0x00010725c190();
  func_0x00010725bc48();
  uStack_88 = extraout_x8;
  _objc_retain();
  func_0x00010725bf5c();
  func_0x00010725c048();
  if (*(long *)(unaff_x21 + extraout_x8_00) == 0) {
    if (param_6 != 0) {
      func_0x00010725c7b0(*(undefined8 *)(param_6 + 0x10));
    }
  }
  else {
    func_0x00010725c7fc(&dStack_130);
    FUN_10725aba0();
    dStack_288 = (double)CONCAT71(uStack_127,uStack_128);
    dStack_278 = (double)CONCAT71(uStack_117,uStack_118);
    dStack_280 = (double)CONCAT71(uStack_11f,uStack_120);
    dStack_290 = dStack_130;
    func_0x00010725c030();
    FUN_10725aba0(&dStack_130);
    dVar8 = dStack_130 + dStack_290;
    dStack_178 = (double)CONCAT71(uStack_127,uStack_128) + dStack_288;
    dStack_170 = (double)CONCAT71(uStack_11f,uStack_120) + dStack_280;
    dStack_168 = (double)CONCAT71(uStack_117,uStack_118) + dStack_278;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    dStack_180 = dVar8;
    FUN_107257f58(&uStack_198,param_4);
    puVar2 = (undefined8 *)(param_3 + 8);
    for (; param_4 != 0; param_4 = param_4 + -1) {
      dVar8 = (double)puVar2[-1];
      FUN_107246514(dVar8,*puVar2,&dStack_130,0);
      FUN_10725ade4(&uStack_198,&dStack_130);
      puVar2 = puVar2 + 2;
    }
    dStack_130 = unaff_d9;
    if (unaff_d9 < 0.0) {
      func_0x00010bf7f0e0();
      dStack_130 = dVar8;
    }
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    func_0x00010725beec();
    uStack_128 = 1;
    pdVar7 = &dStack_130;
    UNRECOVERED_JUMPTABLE = (code *)&uStack_198;
    func_0x00010740e438(auStack_230);
    dStack_130 = (double)((ulong)dStack_130 & 0xffffffffffffff00);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    ppuStack_100 = (undefined **)((ulong)ppuStack_100 & 0xffffffffffffff00);
    uStack_d0 = 0;
    in_ZR = in_d5 == 0.0;
    uStack_b0 = 0;
    uStack_90 = 0;
    bVar1 = 0.0 < in_d5;
    if (bVar1) {
      dStack_130 = (double)(long)(in_d5 * 1000000000.0);
      uStack_128 = 1;
      UNRECOVERED_JUMPTABLE = param_5;
      FUN_107250e24(&ppuStack_160);
      puStack_f8 = puStack_158;
      ppuStack_100 = ppuStack_160;
      pppuStack_e8 = pppuStack_148;
      uStack_f0 = uStack_150;
      uStack_d8 = uStack_138;
      uStack_e0 = uStack_140;
    }
    uStack_d0 = bVar1;
    if (param_6 == 0) {
      pdVar7 = (double *)0x0;
    }
    else {
      func_0x00010725c2f4(auStack_238);
      func_0x00010725c264();
      uStack_260 = 0xc2000000;
      pcStack_258 = FUN_107257fc0;
      puStack_250 = &UNK_1109959f0;
      _objc_copyWeak(auStack_240,auStack_238);
      func_0x00010725bf5c();
      puVar5 = auStack_268;
      lStack_248 = param_6;
      _objc_retainBlock();
      func_0x00010725c78c();
      ppuStack_160 = &PTR_DAT_110995c48;
      pppuStack_148 = &ppuStack_160;
      UNRECOVERED_JUMPTABLE = (code *)auStack_a8;
      puStack_158 = puVar5;
      FUN_10724cacc(&ppuStack_160);
      func_0x0001006393ec(&ppuStack_160);
      _objc_release(lStack_248);
      func_0x00010725c7c0();
      _objc_destroyWeak(auStack_238);
    }
    func_0x00010bf29860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf28e60();
    iVar3 = (int)unaff_x21;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c768();
    func_0x00010725bedc();
    if (iVar3 == 0) {
      func_0x00010725c0d4();
      func_0x00010725c038();
      func_0x00010725c0cc();
      func_0x00010725beec();
      UNRECOVERED_JUMPTABLE = (code *)auStack_230;
      func_0x00010740e24c();
    }
    else if (pdVar7 != (double *)0x0) {
      func_0x00010725c700(in_d5);
    }
    func_0x00010725be7c();
    func_0x00010725be34();
    func_0x00010725ab38(&dStack_130);
    pcVar4 = (code *)&uStack_198;
    FUN_10725aef4();
  }
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar6 = pcVar4;
    func_0x00010725be24();
    func_0x00010725be1c();
    func_0x00010725bf2c();
    pcStack_298 = FUN_107257f58;
    if ((code *)(*(long *)(pcVar6 + 0x10) - *(long *)pcVar6 >> 4) < UNRECOVERED_JUMPTABLE) {
      lStack_2b0 = param_6;
      pcStack_2a8 = param_5;
      puStack_2a0 = &stack0xfffffffffffffff0;
      if ((ulong)UNRECOVERED_JUMPTABLE >> 0x3c != 0) {
        FUN_10725ac80();
        func_0x00010725c430();
        func_0x00010725be74();
        func_0x00010725bebc();
        func_0x00010725c8c8();
        func_0x00010c150280();
        func_0x00010725bc8c();
        if (((ulong)pcVar4 & 1) == 0) {
          func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        return;
      }
      FUN_10725ad0c(auStack_2d8);
      func_0x00010725c774();
      func_0x00010725c430();
    }
    return;
  }
  return;
}



/* Entry: 107257f58; end: 107257fbf;  */

void FUN_107257f58(long *param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong unaff_x21;
  undefined1 auStack_48 [40];
  
  if ((code *)(param_1[2] - *param_1 >> 4) < UNRECOVERED_JUMPTABLE) {
    if ((ulong)UNRECOVERED_JUMPTABLE >> 0x3c != 0) {
      FUN_10725ac80();
      func_0x00010725c430();
      func_0x00010725be74();
      func_0x00010725bebc();
      func_0x00010725c8c8();
      func_0x00010c150280();
      func_0x00010725bc8c();
      if ((unaff_x21 & 1) != 0) {
        return;
      }
      func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_10725ad0c(auStack_48,UNRECOVERED_JUMPTABLE,param_1[1] - *param_1 >> 4);
    func_0x00010725c774();
    func_0x00010725c430();
  }
  return;
}



/* Entry: 107257fc0; end: 107257fff;  */

void FUN_107257fc0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong unaff_x21;
  
  func_0x00010725bebc();
  func_0x00010725c8c8();
  func_0x00010c150280();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) != 0) {
    return;
  }
  func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 107258000; end: 10725801b;  */

void FUN_107258000(void)

{
  func_0x00010725bfec();
  return;
}



/* Entry: 10725801c; end: 10725804f; -[MGLMapView direction] */

void FUN_10725801c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  
  func_0x00010c0c3c00();
  func_0x00010725c844();
  func_0x00010725be84();
  func_0x00010725c738(uStack_30,param_2,0x4076800000000000);
  return;
}



/* Entry: 107258050; end: 10725809b; -[MGLMapView setDirection:animated:] */

void FUN_107258050(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int unaff_w20;
  
  func_0x00010725c52c();
  if (((param_3 & 1) == 0) && (func_0x00010c07cc80(), unaff_w20 == 0)) {
    return;
  }
  func_0x00010725c27c();
                    /* WARNING: Could not recover jumptable at 0x00010bea3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10725809c; end: 107258203; -[MGLMapView _setDirection:animated:] */

void FUN_10725809c(double param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  uint extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long unaff_x24;
  double unaff_d8;
  ulong in_stack_00000090;
  undefined1 in_stack_00000098;
  undefined8 in_stack_00000138;
  
  func_0x00010725c8d4();
  func_0x00010725bc5c();
  in_stack_00000138 = extraout_x8;
  func_0x00010725bcf4();
  if (extraout_x8_00 != 0) {
    func_0x00010725c52c();
    func_0x00010bf7f0e0();
    in_ZR = unaff_d8 == param_1;
    if (!(bool)in_ZR) {
      func_0x00010725c124();
      func_0x00010c071800();
      if ((int)param_2 != 0) {
        func_0x00010725c654();
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010725bd70();
        if (unaff_w19 != 0) {
          func_0x00010bf03e20(*(undefined8 *)(unaff_x24 + 0xdc8));
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010725c5e8(*(undefined8 *)(unaff_x20 + unaff_x23));
        func_0x00010c0d17a0();
        func_0x00010725be1c();
        func_0x00010725bb10(in_stack_00000138);
        if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)();
          return;
        }
        goto LAB_1072581c4;
      }
      func_0x00010725c4c0();
      func_0x00010725c230();
      func_0x00010725c134();
      func_0x00010725c004();
      func_0x00010725bf40(&stack0x00000008);
      func_0x00010725c090();
      FUN_10725aba0(&stack0x00000090);
      func_0x00010725c37c();
      in_stack_00000090 = (ulong)(extraout_w8 & 0xffff | 0x11e10000);
      if ((bool)in_ZR) {
        in_stack_00000090 = 0;
      }
      in_stack_00000098 = 1;
      func_0x00010725bc24();
      func_0x00010725c470();
      func_0x00010725c07c();
      unaff_x21 = param_2;
    }
  }
  func_0x00010725bb10(in_stack_00000138);
  if ((bool)in_ZR) {
    return;
  }
LAB_1072581c4:
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  func_0x00010725be74();
                    /* WARNING: Could not recover jumptable at 0x00010c18e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107258204; end: 10725820b; -[MGLMapView setDirection:] */

void FUN_107258204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDirection_animated__112641288,0);
  return;
}



/* Entry: 10725820c; end: 10725826f; -[MGLMapView camera] */

void FUN_10725820c(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 auStack_a8 [136];
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    func_0x00010c13a060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010725c4fc();
    func_0x00010725c2e4();
    func_0x00010725bbec();
    func_0x00010725bd04();
    func_0x00010bf29860(param_1,param_2,auStack_a8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107258270; end: 107258277; -[MGLMapView setCamera:] */

void FUN_107258270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c176070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCamera_animated__11263b238,param_3,0);
  return;
}



/* Entry: 107258278; end: 107258293; -[MGLMapView setCamera:animated:] */

void FUN_107258278(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x3fd3333333333333;
  if (param_4 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1760b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,param_1,PTR_s_setCamera_withDuration_animation_11263b248,param_3,0);
  return;
}



/* Entry: 107258294; end: 10725829b; -[MGLMapView setCamera:withDuration:animationTimingFunction:] */

void FUN_107258294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1760d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCamera_withDuration_animation_11263b250,param_3,param_4,0);
  return;
}



/* Entry: 10725829c; end: 1072582af; -[MGLMapView setCamera:withDuration:animationTimingFunction:completionHandler:] */

void FUN_10725829c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1760f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_2,
             PTR_s_setCamera_withDuration_animation_11263b258);
  return;
}



/* Entry: 1072582b0; end: 107258593; -[MGLMapView setCamera:withDuration:animationTimingFunction:edgePadding:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1072582b0(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  code *UNRECOVERED_JUMPTABLE,undefined8 param_7,code *param_8,ulong param_9)

{
  double *pdVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  double dVar5;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  double dVar6;
  undefined1 auStack_200 [32];
  ulong uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_140;
  undefined1 uStack_138;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  func_0x00010725c190();
  dVar6 = param_1;
  func_0x00010725bc5c();
  uStack_98 = extraout_x8;
  func_0x00010725be6c();
  func_0x00010725bf5c();
  uVar3 = param_9;
  _objc_retain();
  func_0x00010725c048();
  if (*(long *)(param_5 + extraout_x8_00) == 0) {
    if (param_9 != 0) {
      uVar3 = param_9;
      (**(code **)(param_9 + 0x10))();
    }
    goto LAB_1072584e4;
  }
  func_0x00010bf4c7c0(param_5);
  func_0x00010725be4c();
  func_0x00010725c63c();
  in_ZR = param_1 == 0.0;
  uStack_c0 = 0;
  uStack_a0 = 0;
  if (0.0 < param_1) {
    lStack_140 = (long)(param_1 * 1000000000.0);
    uStack_138 = 1;
    FUN_107250e24(&uStack_1c8);
    uStack_108 = uStack_1c0;
    uStack_110 = uStack_1c8;
    uStack_f8 = uStack_1b0;
    uStack_100 = uStack_1b8;
    uStack_e8 = uStack_1a0;
    uStack_f0 = uStack_1a8;
    uStack_e0 = 1;
    UNRECOVERED_JUMPTABLE = param_8;
  }
  if (param_9 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    _objc_initWeak(auStack_1d0,param_5);
    func_0x00010725c264();
    func_0x00010725c810(FUN_107258594,0xc2000000);
    UNRECOVERED_JUMPTABLE = (code *)auStack_1d0;
    _objc_copyWeak(auStack_1d8);
    _objc_retain(param_9);
    puVar4 = auStack_200;
    uStack_1e0 = param_9;
    _objc_retainBlock();
    _objc_retainBlock();
    func_0x00010725c140(&lStack_140);
    func_0x0001006393ec(&uStack_1c8);
    _objc_release(uStack_1e0);
    _objc_destroyWeak(auStack_1d8);
    _objc_destroyWeak(auStack_1d0);
  }
  uVar3 = param_5;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071e40();
  dVar6 = unaff_d12 + dVar6;
  param_3 = unaff_d10 + param_3;
  param_4 = unaff_d9 + param_4;
  if ((int)uVar3 == 0) {
LAB_107258488:
    func_0x00010725bedc();
LAB_10725848c:
    func_0x00010bf2f3e0(param_5);
    func_0x00010bf29160(param_5);
    func_0x00010c176340(param_5);
    func_0x00010bf2a100(&uStack_1c8,dVar6,unaff_d11 + param_2,param_3,param_4,param_5);
    func_0x00010c0c3c00();
    UNRECOVERED_JUMPTABLE = (code *)&uStack_1c8;
    func_0x00010740e24c();
    uVar3 = param_5;
  }
  else {
    pdVar1 = (double *)(param_5 + (long)_DAT_11276603c);
    bVar2 = false;
    if ((pdVar1[1] == unaff_d11 + param_2) && (bVar2 = false, !NAN(*pdVar1) && !NAN(dVar6))) {
      bVar2 = *pdVar1 == dVar6;
    }
    in_ZR = false;
    if ((bVar2) && (in_ZR = false, !NAN(pdVar1[3]) && !NAN(param_4))) {
      in_ZR = pdVar1[3] == param_4;
    }
    if (!(bool)in_ZR) goto LAB_107258488;
    dVar5 = pdVar1[2];
    in_ZR = dVar5 == param_3;
    func_0x00010725bedc();
    if (dVar5 != param_3) goto LAB_10725848c;
    if (puVar4 != (undefined1 *)0x0) {
      func_0x00010bf033e0(param_1);
      uVar3 = param_5;
    }
  }
  func_0x00010725be7c();
  func_0x00010725c408();
LAB_1072584e4:
  func_0x00010725be2c();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725be2c();
  func_0x00010725be24();
  func_0x00010725be1c();
  __Unwind_Resume(uVar3);
  func_0x00010725bebc();
  func_0x00010725c8c8();
  func_0x00010c150280();
  func_0x00010725bc8c();
  if ((param_9 & 1) != 0) {
    return;
  }
  func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 107258594; end: 1072585d3;  */

void FUN_107258594(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong unaff_x21;
  
  func_0x00010725bebc();
  func_0x00010725c8c8();
  func_0x00010c150280();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) != 0) {
    return;
  }
  func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1072585d4; end: 1072585ef;  */

void FUN_1072585d4(void)

{
  func_0x00010725bfec();
  return;
}



/* Entry: 1072585f0; end: 1072585f7; -[MGLMapView flyToCamera:completionHandler:] */

void FUN_1072585f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb33f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xbff0000000000000,param_1,PTR_s_flyToCamera_withDuration_complet_1125ca6a0);
  return;
}



/* Entry: 1072585f8; end: 1072585ff; -[MGLMapView flyToCamera:withDuration:completionHandler:] */

void FUN_1072585f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0xbff0000000000000,param_2,PTR_s_flyToCamera_withDuration_peakAlt_1125ca6a8);
  return;
}



/* Entry: 107258600; end: 10725866b; -[MGLMapView flyToCamera:withDuration:peakAltitude:completionHandler:] */

void FUN_107258600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010725c5d0();
  func_0x00010725bde0();
  func_0x00010725bf5c();
  func_0x00010725c030();
  func_0x00010725c370();
  func_0x00010be18400();
  func_0x00010725be24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10725866c; end: 107258933; -[MGLMapView _flyToCamera:edgePadding:withDuration:peakAltitude:completionHandler:] */

void FUN_10725866c(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,ulong param_7,code *UNRECOVERED_JUMPTABLE,undefined8 param_9,
                  long param_10)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong unaff_x21;
  ulong unaff_x22;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_200 [32];
  long lStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [136];
  long lStack_140;
  undefined1 uStack_138;
  double dStack_120;
  undefined1 uStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  dVar2 = param_1;
  dVar5 = param_2;
  dVar6 = param_3;
  func_0x00010725bc00();
  uStack_98 = extraout_x8;
  func_0x00010725be6c();
  func_0x00010725bf5c();
  func_0x00010725c048();
  if (*(long *)(unaff_x21 + extraout_x8_00) == 0) {
    if (param_10 != 0) {
      func_0x00010725c7b0(*(undefined8 *)(param_10 + 0x10));
    }
    goto LAB_107258880;
  }
  func_0x00010725be4c();
  func_0x00010725c63c();
  uStack_c0 = 0;
  uStack_a0 = 0;
  if (0.0 <= param_5) {
    dVar2 = param_5 * 1000000000.0;
    lStack_140 = (long)dVar2;
    uStack_138 = 1;
  }
  in_ZR = param_6 == 0.0;
  if (0.0 <= param_6) {
    func_0x00010bf34640();
    dVar5 = dVar2;
    func_0x00010725c4d8();
    unaff_x22 = unaff_x21;
    dVar3 = dVar5;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fc7c0();
    dVar4 = dVar3;
    func_0x00010725c100();
    func_0x00010725be34();
    func_0x00010bfb68e0();
    dVar6 = (dVar2 + dVar5) * 0.5;
    dVar5 = (dVar3 + dVar4) * 0.5;
    func_0x00010725c6bc();
    uStack_118 = 1;
    dVar2 = param_6;
    dStack_120 = param_6;
  }
  if (param_10 == 0) {
    unaff_x22 = 0;
  }
  else {
    func_0x00010725c2f4(auStack_1d0);
    func_0x00010725c264();
    dVar2 = 1.60807493534087e-314;
    func_0x00010725c810(FUN_107258934);
    UNRECOVERED_JUMPTABLE = (code *)auStack_1d0;
    _objc_copyWeak(auStack_1d8);
    func_0x00010725bf5c();
    lStack_1e0 = param_10;
    _objc_retainBlock(auStack_200);
    func_0x00010725c78c();
    func_0x00010725c140(&lStack_140);
    func_0x0001006393ec(auStack_1c8);
    _objc_release(lStack_1e0);
    func_0x00010725c7c0();
    _objc_destroyWeak(auStack_1d0);
  }
  param_7 = unaff_x21;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071e40();
  if ((int)param_7 == 0) {
LAB_107258840:
    func_0x00010725be7c();
LAB_107258844:
    func_0x00010725c0d4();
    func_0x00010725c038();
    func_0x00010725c0cc();
    func_0x00010725c370(auStack_1c8);
    func_0x00010725bf34();
    func_0x00010bf2a100();
    func_0x00010725beec();
    UNRECOVERED_JUMPTABLE = (code *)auStack_1c8;
    func_0x00010740e28c();
  }
  else {
    func_0x00010725c5ac();
    bVar1 = false;
    if ((dVar5 == param_2) && (bVar1 = false, !NAN(dVar2) && !NAN(param_1))) {
      bVar1 = dVar2 == param_1;
    }
    in_ZR = false;
    if ((bVar1) && (in_ZR = false, !NAN(dVar6) && !NAN(param_4))) {
      in_ZR = dVar6 == param_4;
    }
    if (!(bool)in_ZR) goto LAB_107258840;
    bVar1 = *(double *)(extraout_x8_01 + 0x10) == param_3;
    in_ZR = bVar1;
    func_0x00010725be7c();
    if (!bVar1) goto LAB_107258844;
    if (unaff_x22 != 0) {
      func_0x00010725c700(param_5);
      param_7 = unaff_x21;
    }
  }
  func_0x00010725be34();
  func_0x00010725c408();
LAB_107258880:
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bb10(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010725be24();
  func_0x00010725be1c();
  func_0x00010725bf2c();
  func_0x00010725bebc();
  func_0x00010725c8c8();
  func_0x00010c150280();
  func_0x00010725bc8c();
  if ((param_7 & 1) != 0) {
    return;
  }
  func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 107258934; end: 107258973;  */

void FUN_107258934(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  ulong unaff_x21;
  
  func_0x00010725bebc();
  func_0x00010725c8c8();
  func_0x00010c150280();
  func_0x00010725bc8c();
  if ((unaff_x21 & 1) != 0) {
    return;
  }
  func_0x00010725c8b0();
                    /* WARNING: Could not recover jumptable at 0x00010725bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 107258974; end: 10725898f;  */

void FUN_107258974(void)

{
  func_0x00010725bfec();
  return;
}



/* Entry: 107258990; end: 107258a03; -[MGLMapView cancelTransitions] */

/* WARNING: Possible PIC construction at 0x0001072589e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072589e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107258990(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    return;
  }
  lVar2 = (long)_DAT_112765fe0;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010c071800();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_cancelTransitions_1125a96a0);
    return;
  }
  func_0x00010725c354();
                    /* WARNING: Could not recover jumptable at 0x00010c176350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCameraChangeReasonBitmask__11263b2f0,uVar1 | 0x10000);
  return;
}



/* Entry: 107258a04; end: 107258a17; -[MGLMapView cameraThatFitsCoordinateBounds:] */

void FUN_107258a04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cameraThatFitsCoordinateBounds_e_1125a8628);
  return;
}



/* Entry: 107258a18; end: 107258b1b; -[MGLMapView cameraThatFitsCoordinateBounds:edgePadding:] */

void FUN_107258a18(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  long extraout_x8;
  double dVar4;
  double dVar5;
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [40];
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    func_0x00010c13a060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010725bb48();
    func_0x00010725c2b4(&dStack_110);
    dVar2 = dStack_f8;
    dVar5 = dStack_100;
    dVar1 = dStack_108;
    dVar4 = dStack_110;
    func_0x00010725c4fc();
    pdVar3 = &dStack_110;
    FUN_10725aba0(pdVar3);
    dVar4 = dVar4 + dStack_110;
    dStack_78 = dVar1 + dStack_108;
    dVar5 = dVar5 + dStack_100;
    dStack_68 = dVar2 + dStack_f8;
    dStack_80 = dVar4;
    dStack_70 = dVar5;
    func_0x00010725bee4();
    func_0x00010725be9c();
    dStack_110 = dVar4;
    dStack_108 = dVar5;
    func_0x00010725bd8c();
    dStack_60 = dVar4;
    dStack_58 = dVar5;
    FUN_10725ac68(auStack_138,&dStack_110,&dStack_60);
    dStack_60 = (double)((ulong)dStack_60 & 0xffffffffffffff00);
    dStack_58 = (double)((ulong)dStack_58 & 0xffffffffffffff00);
    auStack_148[0] = 0;
    uStack_140 = 0;
    func_0x00010740e364(&dStack_110,pdVar3,auStack_138,&dStack_80,&dStack_60,auStack_148);
    func_0x00010bf29860(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107258b1c; end: 107258c57; -[MGLMapView cameraThatFitsCoordinateBounds:edgePadding:pitch:] */

void FUN_107258b1c(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  long extraout_x8;
  double dVar4;
  double dVar5;
  double in_stack_00000000;
  undefined1 auStack_158 [40];
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    func_0x00010c13a060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010725bb48();
    func_0x00010725c2b4(&dStack_130);
    dVar2 = dStack_118;
    dVar5 = dStack_120;
    dVar1 = dStack_128;
    dVar4 = dStack_130;
    func_0x00010725c4fc();
    pdVar3 = &dStack_130;
    FUN_10725aba0(pdVar3);
    dVar4 = dVar4 + dStack_130;
    dStack_98 = dVar1 + dStack_128;
    dVar5 = dVar5 + dStack_120;
    dStack_88 = dVar2 + dStack_118;
    dStack_a0 = dVar4;
    dStack_90 = dVar5;
    func_0x00010725bee4();
    func_0x00010725be9c();
    dStack_70 = dVar4;
    dStack_68 = dVar5;
    func_0x00010725bd8c();
    dStack_80 = dVar4;
    dStack_78 = dVar5;
    FUN_10725ac68(auStack_158,&dStack_70,&dStack_80);
    func_0x00010bf28e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0320();
    dStack_68 = (double)CONCAT71(dStack_68._1_7_,1);
    dStack_80 = in_stack_00000000;
    dStack_78 = (double)CONCAT71(dStack_78._1_7_,1);
    dStack_70 = dVar4;
    func_0x00010740e364(&dStack_130,pdVar3,auStack_158,&dStack_a0,&dStack_70,&dStack_80);
    func_0x00010725be2c();
    func_0x00010bf29860(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107258c58; end: 107258e0b; -[MGLMapView camera:fittingCoordinateBounds:edgePadding:] */

void FUN_107258c58(void)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined1 auStack_178 [40];
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  func_0x00010725bb48();
  func_0x00010725bb24();
  func_0x00010725c048();
  if (*(long *)(unaff_x20 + extraout_x8) == 0) {
    func_0x00010c13a060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10725aba0(in_d4,in_d5,in_d6,in_d7,&dStack_150);
    dVar4 = dStack_138;
    dVar5 = dStack_140;
    dVar3 = dStack_148;
    dVar2 = dStack_150;
    func_0x00010725c090();
    FUN_10725aba0(&dStack_150);
    dVar2 = dVar2 + dStack_150;
    dStack_b8 = dVar3 + dStack_148;
    dVar5 = dVar5 + dStack_140;
    dStack_a8 = dVar4 + dStack_138;
    dStack_c0 = dVar2;
    dStack_b0 = dVar5;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725c084();
    func_0x00010c0fc7c0();
    uVar1 = unaff_x21;
    if (0.0 <= dVar2) {
      uVar1 = unaff_x19;
    }
    func_0x00010c0fc7c0(uVar1);
    dVar3 = dVar2;
    func_0x00010725c7d8();
    if (0.0 <= dVar3) {
      unaff_x21 = unaff_x19;
    }
    func_0x00010bfe0320(unaff_x21);
    dVar4 = dVar3;
    func_0x00010725c004();
    func_0x00010725be9c();
    dStack_90 = dVar4;
    dStack_88 = dVar5;
    func_0x00010725bd8c();
    dStack_a0 = dVar4;
    dStack_98 = dVar5;
    FUN_10725ac68(auStack_178,&dStack_90,&dStack_a0);
    dStack_88 = (double)CONCAT71(dStack_88._1_7_,1);
    dStack_98 = (double)CONCAT71(dStack_98._1_7_,1);
    dStack_a0 = dVar2;
    dStack_90 = dVar3;
    func_0x00010740e364(&dStack_150,unaff_x21,auStack_178,&dStack_c0,&dStack_90,&dStack_a0);
    func_0x00010bf29860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010725bca4();
  }
  func_0x00010725be1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 107258e0c; end: 107258f8f; -[MGLMapView cameraForCameraOptions:] */

void FUN_107258e0c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_e8 [17];
  
  func_0x00010725bcf4();
  if (extraout_x8 == 0) {
    func_0x00010c13a060(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010725c004();
    func_0x00010725bdac();
    puVar1 = param_3;
    if (*(char *)(param_3 + 2) == '\0') {
      puVar1 = auStack_e8;
    }
    uVar3 = *puVar1;
    _CLLocationCoordinate2DMake(uVar3,puVar1[1]);
    func_0x00010725bf50();
    if (*(char *)(param_3 + 0xc) == '\x01') {
      uVar3 = param_3[0xb];
    }
    else {
      func_0x00010c2bf200(param_1);
    }
    if (*(char *)(param_3 + 0xe) == '\x01') {
      func_0x00010725c738(param_3[0xd]);
    }
    else {
      func_0x00010725c7b8();
    }
    puVar1 = param_3;
    if (*(char *)(param_3 + 0x10) == '\0') {
      puVar1 = auStack_e8;
    }
    uVar4 = puVar1[0xf];
    func_0x00010bfb68e0(param_1);
    func_0x00010725c6c8(uVar3,uVar4);
    puVar1 = (undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    puVar2 = (undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    if (*(char *)(param_3 + 7) == '\x01') {
      puVar1 = param_3 + 6;
      puVar2 = param_3 + 5;
    }
    func_0x00010725bf64(*puVar1,*puVar2,uVar3,PTR_PTR_1126c65a0);
    func_0x00010bf29d00();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107258f90; end: 1072590e3; -[MGLMapView cameraOptionsObjectForAnimatingToCamera:edgePadding:] */

void FUN_107258f90(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  double *pdVar2;
  double *extraout_x8;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  func_0x00010725bb48();
  func_0x00010725be6c();
  pdVar2 = extraout_x8;
  func_0x00010725aae0();
  iVar1 = (int)pdVar2;
  func_0x00010725c4d8();
  _CLLocationCoordinate2DIsValid();
  if (iVar1 != 0) {
    func_0x00010725c4d8();
    FUN_107246214();
    *extraout_x8 = param_1;
    extraout_x8[1] = param_2;
    if (((ulong)extraout_x8[2] & 1) == 0) {
      *(undefined1 *)(extraout_x8 + 2) = 1;
    }
  }
  func_0x00010c0f0ba0(param_7);
  func_0x00010725c728(unaff_d11 + param_1,unaff_d10 + param_2,unaff_d9 + param_3,unaff_d8 + param_4)
  ;
  extraout_x8[4] = dStack_68;
  extraout_x8[3] = dStack_70;
  extraout_x8[6] = dStack_58;
  extraout_x8[5] = dStack_60;
  if (((ulong)extraout_x8[7] & 1) == 0) {
    *(undefined1 *)(extraout_x8 + 7) = 1;
  }
  func_0x00010bf01f00(param_7);
  func_0x00010725c100();
  func_0x00010725c4d8();
  func_0x00010725c5c4();
  func_0x00010bfb68e0();
  func_0x00010725bf64();
  func_0x00010725c6bc();
  extraout_x8[0xb] = dStack_70;
  *(undefined1 *)(extraout_x8 + 0xc) = 1;
  func_0x00010725c7d8();
  if (0.0 <= dStack_70) {
    func_0x00010725c7d8();
    extraout_x8[0xd] = dStack_70;
    *(undefined1 *)(extraout_x8 + 0xe) = 1;
  }
  func_0x00010725c100();
  if (0.0 <= dStack_70) {
    func_0x00010725c100();
    extraout_x8[0xf] = dStack_70;
    *(undefined1 *)(extraout_x8 + 0x10) = 1;
  }
  func_0x00010725be1c();
  return;
}



/* Entry: 1072590e4; end: 10725912f; -[MGLMapView convertPoint:toCoordinateFromView:] */

void FUN_1072590e4(void)

{
  func_0x00010725c5d0();
  func_0x00010725bba8();
  func_0x00010725bf70();
  func_0x00010bf51260();
  _CLLocationCoordinate2DMake();
  func_0x00010725bf50();
  func_0x00010725be1c();
  func_0x00010725bf64();
  return;
}



/* Entry: 107259130; end: 10725917f; -[MGLMapView convertPoint:toLatLngFromView:] */

void FUN_107259130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf51200();
  func_0x00010725bf50();
  func_0x00010725bee4();
  func_0x00010740ed34();
  uStack_40 = param_1;
  uStack_38 = param_2;
  FUN_107259180(&uStack_40);
  return;
}



/* Entry: 107259180; end: 1072591a7;  */

undefined1  [16] FUN_107259180(undefined8 *param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_107246514(*param_1,param_1[1],auStack_20,1);
  return auStack_20;
}



/* Entry: 1072591a8; end: 107259203; -[MGLMapView convertCoordinate:toPointToView:] */

void FUN_1072591a8(uint param_1)

{
  func_0x00010725c5d0();
  func_0x00010725bba8();
  func_0x00010725bf70();
  _CLLocationCoordinate2DIsValid();
  if ((param_1 & 1) != 0) {
    func_0x00010725bd8c();
    func_0x00010725c224();
    func_0x00010725bf50();
  }
  func_0x00010725be1c();
  func_0x00010725bf64();
  return;
}



/* Entry: 107259204; end: 107259267; -[MGLMapView convertLatLng:toPointToView:] */

void FUN_107259204(undefined8 param_1)

{
  func_0x00010725be6c();
  func_0x00010725c004();
  func_0x00010740ecd4();
  func_0x00010bf512a0(param_1);
  func_0x00010725bf50();
  func_0x00010725be1c();
  func_0x00010725bf64();
  return;
}



/* Entry: 107259268; end: 1072592eb; -[MGLMapView convertRect:toCoordinateBoundsFromView:] */

void FUN_107259268(void)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010725bb48();
  func_0x00010725bba8();
  func_0x00010725bf34(&uStack_68);
  func_0x00010bf51440();
  _CLLocationCoordinate2DMake(uStack_68,uStack_60);
  func_0x00010725bf50();
  _CLLocationCoordinate2DMake(uStack_58,uStack_50);
  func_0x00010725be1c();
  func_0x00010725bc78();
  return;
}



/* Entry: 1072592ec; end: 10725936b; -[MGLMapView convertCoordinateBounds:toRectToView:] */

void FUN_1072592ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010725bb48();
  func_0x00010725bba8();
  func_0x00010725be9c();
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010725bd8c();
  uStack_60 = param_1;
  uStack_58 = param_2;
  FUN_10725ac68(auStack_88,&uStack_50,&uStack_60);
  func_0x00010bf510a0();
  func_0x00010725befc();
  func_0x00010725be1c();
  func_0x00010725bc78();
  return;
}



/* Entry: 10725936c; end: 1072594bf; -[MGLMapView convertLatLngBounds:toRectToView:] */

void FUN_10725936c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
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
  
  func_0x00010725c258();
  FUN_1072594c0(param_5);
  uStack_88 = param_5[1];
  uVar2 = *param_5;
  uStack_78 = param_5[3];
  uVar1 = param_5[2];
  uStack_90 = uVar2;
  uStack_80 = uVar1;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x0001072594e0(param_5);
  uStack_a0 = uVar1;
  uStack_98 = uVar2;
  func_0x00010725c34c();
  _CGRectGetMidX();
  func_0x00010725c34c();
  _CGRectGetMidY();
  uVar2 = uVar1;
  func_0x00010725c27c();
  func_0x00010bf51260();
  uStack_b0 = uVar1;
  uStack_a8 = uVar2;
  func_0x00010725c50c(&uStack_70);
  func_0x00010725c50c(&uStack_80);
  func_0x00010725c50c(&uStack_90);
  func_0x00010725c50c(&uStack_a0);
  uStack_c0 = 1;
  uStack_d8 = 0x4066800000000000;
  uStack_e0 = 0x4056800000000000;
  uStack_c8 = 0xc066800000000000;
  uStack_d0 = 0xc056800000000000;
  FUN_107259568(&uStack_e0,&uStack_70);
  FUN_107259568(&uStack_e0,&uStack_80);
  FUN_107259568(&uStack_e0,&uStack_90);
  FUN_107259568(&uStack_e0,&uStack_a0);
  func_0x00010725c224(uStack_e0,uStack_d8);
  func_0x00010725bf50();
  func_0x00010725c224(uStack_d0,uStack_c8);
  func_0x00010725bc78();
  func_0x0001072461c0();
  func_0x00010725befc();
  func_0x00010725be1c();
  func_0x00010725bc78();
  return;
}



/* Entry: 1072594c0; end: 107259503;  */

undefined1  [16] FUN_1072594c0(long param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x00010725bfa8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return auStack_20;
}



/* Entry: 107259504; end: 107259567;  */

void FUN_107259504(long param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_1 + 8);
  if ((180.0 < ABS(dVar2 - dVar1)) && (dVar3 = 360.0, ABS(dVar2 - dVar1) < 360.0)) {
    if ((dVar1 <= 0.0) || (0.0 <= dVar2)) {
      if (0.0 <= dVar1) {
        return;
      }
      if (dVar2 <= 0.0) {
        return;
      }
    }
    else {
      dVar3 = -360.0;
    }
    *(double *)(param_1 + 8) = dVar1 + dVar3;
  }
  return;
}


