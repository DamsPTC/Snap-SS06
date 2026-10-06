/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106131da4; end: 106131dab; -[SCDirectorModeMainLayoutController cameraScale] */

undefined8 FUN_106131da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106131dac; end: 106131db3; -[SCDirectorModeMainLayoutController hasAttachedGeometry] */

undefined1 FUN_106131dac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 106131db4; end: 106131dbb; -[SCDirectorModeMainLayoutController presentationState] */

undefined8 FUN_106131db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106131dbc; end: 10613228f; -[SCDirectorModeMainLayoutController synchronize] */

void FUN_106131dbc(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar4 = *(long *)(param_5 + 8);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    *(undefined1 *)(param_5 + 0xe0) = 1;
    if ((*(byte *)(param_5 + 0x68) & 1) == 0) {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 8));
      uVar10 = param_5;
      func_0x00010be97680();
      if ((int)uVar10 != 0) {
        uVar10 = *(ulong *)(param_5 + 8);
        func_0x00010bf20c00();
        _CGRectEqualToRect();
        if ((uVar10 & 1) == 0) {
          func_0x00010bf20c00();
          func_0x00010052b600();
          func_0x000100456ca0();
          func_0x00010bed8d60(param_1,param_2,param_3,param_4,
                              *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                              *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                              *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                              *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_5);
          func_0x00010bdcdf40(param_5);
        }
      }
    }
    goto LAB_106132238;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 8));
  lVar5 = lVar4;
  dVar22 = param_1;
  dVar19 = param_2;
  dVar20 = param_3;
  dVar16 = param_4;
  func_0x00010c150e00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar18 = dVar22;
  _objc_release(lVar5);
  func_0x00010bf20c00(lVar4);
  dVar14 = dVar18;
  dVar11 = dVar19;
  dVar15 = dVar20;
  dVar12 = dVar16;
  func_0x00010c148fc0(lVar4);
  dVar18 = dVar18 + dVar11;
  dVar19 = dVar19 + dVar14;
  dVar20 = dVar20 - (dVar11 + dVar12);
  dVar16 = dVar16 - (dVar14 + dVar15);
  iVar3 = (int)*(undefined8 *)(param_5 + 8);
  func_0x00010bf513e0(dVar18,dVar19,dVar20,dVar16);
  dVar14 = dVar18;
  _CGRectGetMinY();
  dVar11 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar15 = dVar18;
  _CGRectGetMinX(dVar18,dVar19,dVar20,dVar16);
  dVar12 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar21 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar13 = dVar18;
  _CGRectGetMaxY(dVar18,dVar19,dVar20,dVar16);
  dVar17 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  _CGRectGetMaxX(dVar18,dVar19,dVar20,dVar16);
  func_0x00010052b600();
  dVar19 = 60.0;
  if ((double)iVar3 <= 60.0) {
    dVar19 = (double)iVar3;
  }
  if (0x21 < iVar3 - 0x33U) {
    dVar19 = 60.0;
  }
  func_0x000100456ca0();
  dVar20 = 1.5;
  if (iVar3 == 0) {
    dVar20 = 1.0;
  }
  uVar10 = param_5;
  func_0x00010be97680(param_1,param_2,param_3,param_4);
  if (((int)uVar10 != 0) &&
     (dVar16 = ABS(dVar22),
     ((ulong)dVar16 < 0x7ff0000000000001 &&
     (dVar16 != INFINITY &&
     (dVar16 != 0.0 && (-1 < (long)dVar22 || 0xffffffffffffe < (long)ABS(dVar22) - 1U)))) &&
     (-1 < (long)dVar22 || 0x3fe < (long)ABS(dVar22) + 0xfff0000000000000U >> 0x35))) {
    dVar14 = dVar14 - dVar11;
    dVar15 = dVar15 - dVar12;
    dVar21 = dVar21 - dVar13;
    dVar17 = dVar17 - dVar18;
    uVar10 = param_5;
    func_0x00010be06e40(dVar14,dVar15,dVar21);
    if ((uVar10 & 1) != 0) {
      lVar6 = *(long *)(param_5 + 0x10);
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5 + 0xd8;
      _objc_loadWeakRetained();
      _objc_release();
      _objc_release(lVar6);
      if ((*(byte *)(param_5 + 0xe0) & 1) == 0) {
        lVar7 = param_5 + 0xd0;
        _objc_loadWeakRetained();
        if ((lVar4 != lVar7) ||
           (lVar8 = lVar7,
           _CGRectEqualToRect(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0xb0),
                              *(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                              *(undefined8 *)(param_5 + 200)), (int)lVar8 == 0)) {
LAB_1061320dc:
          _objc_release(lVar7);
          goto LAB_1061320ec;
        }
        bVar1 = false;
        if ((dVar15 == *(double *)(param_5 + 0x80)) &&
           (bVar1 = false, !NAN(dVar14) && !NAN(*(double *)(param_5 + 0x78)))) {
          bVar1 = dVar14 == *(double *)(param_5 + 0x78);
        }
        bVar2 = false;
        if ((bVar1) && (bVar2 = false, !NAN(dVar17) && !NAN(*(double *)(param_5 + 0x90)))) {
          bVar2 = dVar17 == *(double *)(param_5 + 0x90);
        }
        bVar1 = false;
        if ((bVar2) && (bVar1 = false, !NAN(dVar21) && !NAN(*(double *)(param_5 + 0x88)))) {
          bVar1 = dVar21 == *(double *)(param_5 + 0x88);
        }
        if ((!bVar1) || (dVar22 != *(double *)(param_5 + 0xa0))) goto LAB_1061320dc;
        dVar22 = *(double *)(param_5 + 0x98);
        _objc_release(lVar7);
        if (dVar20 * dVar19 != dVar22) goto LAB_1061320ec;
        if (lVar6 != lVar5) goto LAB_10613212c;
      }
      else {
LAB_1061320ec:
        func_0x00010bed8d60(param_1,param_2,param_3,param_4,dVar14,dVar15,dVar21,dVar17,param_5);
        _objc_storeWeak(param_5 + 0xd0,lVar4);
        *(undefined1 *)(param_5 + 0x68) = 1;
        *(undefined1 *)(param_5 + 0xe0) = 0;
LAB_10613212c:
        func_0x00010bdcdf40(param_5);
      }
      uVar9 = *(undefined8 *)(param_5 + 0x10);
      func_0x00010c262ca0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_5 + 0xd8,uVar9);
      _objc_release(uVar9);
      goto LAB_106132238;
    }
  }
  *(undefined1 *)(param_5 + 0xe0) = 1;
LAB_106132238:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106132290; end: 1061322a3; -[SCDirectorModeMainLayoutController prepareForTransitionInWithInitialFrame:] */

void FUN_106132290(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdce1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyFrame__112551218);
  return;
}



/* Entry: 1061322a4; end: 1061322df; -[SCDirectorModeMainLayoutController applyTransitionInTargetFrame] */

void FUN_1061322a4(long param_1)

{
  if (*(long *)(param_1 + 0x70) == 1) {
    func_0x00010bdd94e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdce1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyFrame__112551218);
    return;
  }
  return;
}



/* Entry: 1061322e0; end: 1061322f3; -[SCDirectorModeMainLayoutController completeTransitionIn] */

void FUN_1061322e0(long param_1)

{
  if (*(long *)(param_1 + 0x70) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c228370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_settleCamera_112667b00);
    return;
  }
  return;
}



/* Entry: 1061322f4; end: 106132307; -[SCDirectorModeMainLayoutController prepareForTransitionOut] */

void FUN_1061322f4(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 2;
  *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
  return;
}



/* Entry: 106132308; end: 10613231b; -[SCDirectorModeMainLayoutController applyTransitionOutDestinationFrame:] */

void FUN_106132308(long param_1)

{
  if (*(long *)(param_1 + 0x70) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdce1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyFrame__112551218);
    return;
  }
  return;
}



/* Entry: 10613231c; end: 10613234b; -[SCDirectorModeMainLayoutController applyTrayHeight:] */

undefined8 FUN_10613231c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = 3;
  *(undefined8 *)(param_2 + 0xa8) = param_1;
  func_0x00010bdcdf40();
  return *(undefined8 *)(param_2 + 0x60);
}



/* Entry: 10613234c; end: 106132397; -[SCDirectorModeMainLayoutController cameraViewWasReparented] */

void FUN_10613234c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x70) = 4;
  func_0x00010bdcdf40();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0xd8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106132398; end: 1061323eb; -[SCDirectorModeMainLayoutController settleCamera] */

void FUN_106132398(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x00010bdcdf40();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0xd8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061323ec; end: 1061323ef; -[SCDirectorModeMainLayoutController _rootViewWindowDidChange] */

void FUN_1061323ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_synchronize_112677508);
  return;
}



/* Entry: 1061323f0; end: 10613243f; -[SCDirectorModeMainLayoutController _updateGeometryForRootBounds:systemSafeAreaInsets:displayScale:footerConfiguration:] */

void FUN_1061323f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_9 + 0xb0) = param_1;
  *(undefined8 *)(param_9 + 0xb8) = param_2;
  *(undefined8 *)(param_9 + 0xc0) = param_3;
  *(undefined8 *)(param_9 + 200) = param_4;
  *(undefined8 *)(param_9 + 0x78) = param_5;
  *(undefined8 *)(param_9 + 0x80) = param_6;
  *(undefined8 *)(param_9 + 0x88) = param_7;
  *(undefined8 *)(param_9 + 0x90) = param_8;
  *(undefined8 *)(param_9 + 0x98) = in_stack_00000008;
  *(undefined8 *)(param_9 + 0xa0) = in_stack_00000000;
  FUN_106131998(&uStack_60);
  *(undefined8 *)(param_9 + 0x28) = uStack_58;
  *(undefined8 *)(param_9 + 0x20) = uStack_60;
  *(undefined8 *)(param_9 + 0x38) = uStack_48;
  *(undefined8 *)(param_9 + 0x30) = uStack_50;
  return;
}



/* Entry: 106132440; end: 106132647; -[SCDirectorModeMainLayoutController _applyCurrentPresentationFrame] */

void FUN_106132440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar1 = *(long *)(param_5 + 0x70);
  if (lVar1 < 3) {
    if (lVar1 - 1U < 2) {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x10));
      *(undefined8 *)(param_5 + 0x40) = param_1;
      *(undefined8 *)(param_5 + 0x48) = param_2;
      *(undefined8 *)(param_5 + 0x50) = param_3;
      *(undefined8 *)(param_5 + 0x58) = param_4;
      return;
    }
    if (lVar1 != 0) {
      return;
    }
  }
  else {
    if (lVar1 == 3) {
      dVar2 = *(double *)(param_5 + 0x20);
      _CGRectGetHeight(dVar2,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
                       *(undefined8 *)(param_5 + 0x38));
      if (dVar2 <= 0.0) {
        return;
      }
      dVar6 = *(double *)(param_5 + 0xb0);
      _CGRectGetHeight(dVar6,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                       *(undefined8 *)(param_5 + 200));
      dVar2 = ((dVar2 - *(double *)(param_5 + 0xa8)) + (dVar6 - dVar2) + -20.0) / dVar2;
      if (dVar2 <= 0.4) {
        dVar2 = 0.4;
      }
      dVar6 = 1.0;
      if (dVar2 <= 1.0) {
        dVar6 = dVar2;
      }
      *(double *)(param_5 + 0x60) = dVar6;
      dVar2 = *(double *)(param_5 + 0x20);
      _CGRectGetWidth(dVar2,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
                      *(undefined8 *)(param_5 + 0x38));
      dVar2 = dVar2 * *(double *)(param_5 + 0x60);
      dVar6 = *(double *)(param_5 + 0xa0);
      dVar8 = dVar2 * dVar6;
      dVar2 = -(dVar2 * dVar6);
      if (0.0 <= dVar8) {
        dVar2 = dVar8;
      }
      if (dVar2 <= 1.0) {
        dVar2 = 1.0;
      }
      dVar6 = (double)(long)(dVar8 + dVar2 * 2.220446049250313e-16 * 4.0) / dVar6;
      dVar2 = *(double *)(param_5 + 0x20);
      _CGRectGetHeight(dVar2,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
                       *(undefined8 *)(param_5 + 0x38));
      dVar2 = dVar2 * *(double *)(param_5 + 0x60);
      dVar8 = *(double *)(param_5 + 0xa0);
      dVar7 = dVar2 * dVar8;
      dVar2 = -(dVar2 * dVar8);
      if (0.0 <= dVar7) {
        dVar2 = dVar7;
      }
      if (dVar2 <= 1.0) {
        dVar2 = 1.0;
      }
      dVar8 = (double)(long)(dVar7 + dVar2 * 2.220446049250313e-16 * 4.0) / dVar8;
      dVar7 = *(double *)(param_5 + 0xb0);
      _CGRectGetMinX(dVar7,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                     *(undefined8 *)(param_5 + 200));
      dVar3 = *(double *)(param_5 + 0xb0);
      _CGRectGetWidth(dVar3,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                      *(undefined8 *)(param_5 + 200));
      dVar2 = *(double *)(param_5 + 0xb0);
      _CGRectGetMinX(dVar2,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                     *(undefined8 *)(param_5 + 200));
      dVar4 = *(double *)(param_5 + 0xb0);
      _CGRectGetMinX(dVar4,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                     *(undefined8 *)(param_5 + 200));
      dVar2 = dVar2 + (double)(long)(((dVar7 + (dVar3 - dVar6) * 0.5) - dVar4) *
                                    *(double *)(param_5 + 0xa0)) / *(double *)(param_5 + 0xa0);
      uVar5 = *(undefined8 *)(param_5 + 0xb0);
      _CGRectGetMinY(uVar5,*(undefined8 *)(param_5 + 0xb8),*(undefined8 *)(param_5 + 0xc0),
                     *(undefined8 *)(param_5 + 200));
      goto LAB_1061324c0;
    }
    if (lVar1 != 4) {
      return;
    }
  }
  *(undefined8 *)(param_5 + 0x60) = 0x3ff0000000000000;
  dVar2 = *(double *)(param_5 + 0x20);
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  dVar6 = *(double *)(param_5 + 0x30);
  dVar8 = *(double *)(param_5 + 0x38);
LAB_1061324c0:
  func_0x00010bdd94e0(dVar2,uVar5,dVar6,dVar8,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdce1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__applyFrame__112551218);
  return;
}



/* Entry: 106132648; end: 1061326e7; -[SCDirectorModeMainLayoutController _cameraSuperviewFrameForRootFrame:] */

undefined8
FUN_106132648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_5 + 0x10);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar1 != *(long *)(param_5 + 8))) {
    func_0x00010bf513e0(param_1,param_2,param_3,param_4,lVar1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 1061326e8; end: 10613276b; -[SCDirectorModeMainLayoutController _applyFrame:] */

void FUN_1061326e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_5 + 0x10);
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010bfb68e0();
  _CGRectEqualToRect();
  if ((uVar1 & 1) == 0) {
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x10));
    uVar2 = param_1;
    uVar3 = param_2;
    uVar4 = param_3;
    uVar5 = param_4;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x10));
  *(undefined8 *)(param_5 + 0x40) = uVar2;
  *(undefined8 *)(param_5 + 0x48) = uVar3;
  *(undefined8 *)(param_5 + 0x50) = uVar4;
  *(undefined8 *)(param_5 + 0x58) = uVar5;
  return;
}



/* Entry: 10613276c; end: 10613284f; -[SCDirectorModeMainLayoutController _rootBoundsAreValid:] */

bool FUN_10613276c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  double dVar2;
  
  _CGRectIsNull();
  if (((((param_5 & 1) != 0) ||
       (_CGRectIsInfinite(param_1,param_2,param_3,param_4), (param_5 & 1) != 0)) ||
      (dVar2 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4),
      0x7fefffffffffffff < (ulong)ABS(dVar2))) ||
     ((dVar2 = param_1, _CGRectGetHeight(param_1,param_2,param_3,param_4),
      0x7fefffffffffffff < (ulong)ABS(dVar2) ||
      (dVar2 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4), dVar2 <= 0.0)))) {
    bVar1 = false;
  }
  else {
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    bVar1 = 0.0 < param_1;
  }
  return bVar1;
}



/* Entry: 106132850; end: 1061328ab; -[SCDirectorModeMainLayoutController _edgeInsetsAreValid:] */

bool FUN_106132850(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
         ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
         ((param_3 & 0x7fffffffffffffff) < 0x7ff0000000000000 &&
         (param_4 & 0x7fffffffffffffff) < 0x7ff0000000000000));
}



/* Entry: 1061328ac; end: 1061328f7; -[SCDirectorModeMainLayoutController .cxx_destruct] */

void FUN_1061328ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061328f8; end: 106132b2f; -[SCDirectorModeMainViewController initWithWorkflow:transitionDelegate:directorModeConfiguration:simpleFeatureGatingConfiguration:systemScope:renderAgent:renderTarget:appInsightsMetadataStorage:simpleSnapchatExperimentConfigProvider:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061328f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126efd80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127401b8,param_3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127401bc,param_4);
    lVar5 = (long)_DAT_1127401c0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c142ea0();
    *(char *)((long)puVar1 + (long)_DAT_1127401c4) = (char)uVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c8438;
    _objc_alloc();
    func_0x00010c04bda0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127401c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127401c8) = puVar4;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127401cc,param_8);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127401d0,param_9);
  }
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



/* Entry: 106132b30; end: 106132bcf; -[SCDirectorModeMainViewController viewDidLoad] */

void FUN_106132b30(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126efd80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beab5c0(param_1);
  func_0x00010beb0860(param_1);
  return;
}



/* Entry: 106132bd0; end: 106132cc3; -[SCDirectorModeMainViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126efd80;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  if (*(char *)(param_5 + _DAT_1127401d4) == '\x01') {
    func_0x00010bdd3cc0(param_5);
  }
  else if (*(char *)(param_5 + _DAT_1127401c4) == '\x01') {
    func_0x00010c228360(*(undefined8 *)(param_5 + _DAT_1127401d8));
    func_0x00010beca140(param_5);
  }
  else {
    func_0x00010bdd96e0(param_5);
    uVar1 = *(undefined8 *)(param_5 + _DAT_1127401dc);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106132cc4; end: 106132d0b; -[SCDirectorModeMainViewController viewDidLayoutSubviews] */

void FUN_106132cc4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010beca060(param_1);
  return;
}



/* Entry: 106132d0c; end: 106132d53; -[SCDirectorModeMainViewController viewSafeAreaInsetsDidChange] */

void FUN_106132d0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efd80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  func_0x00010beca060(param_1);
  return;
}



/* Entry: 106132d54; end: 106132e6b; -[SCDirectorModeMainViewController exitDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132d54(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = (long)_DAT_1127401c8;
  func_0x00010c27d4c0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf3a820(*(undefined8 *)(param_1 + lVar1));
  lVar1 = param_1 + _DAT_1127401bc;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010be78500(param_1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bdd3ce0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  param_1 = param_1 + _DAT_1127401b8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf95c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106132e6c; end: 106132eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132e6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127401b8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf95c60();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106132eb8; end: 106132ee3; -[SCDirectorModeMainViewController policyForHandlingInAppNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106132eb8(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_1127401c8);
  func_0x00010c064e80();
  uVar1 = 3;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106132ee4; end: 106132ee7; -[SCDirectorModeMainViewController didVisibleNotificationGetPressed:] */

void FUN_106132ee4(void)

{
  return;
}



/* Entry: 106132ee8; end: 106132eeb; -[SCDirectorModeMainViewController pausePlayback] */

void FUN_106132ee8(void)

{
  return;
}



/* Entry: 106132eec; end: 106132eef; -[SCDirectorModeMainViewController resumePlayback] */

void FUN_106132eec(void)

{
  return;
}



/* Entry: 106132ef0; end: 106132ef3; -[SCDirectorModeMainViewController shouldIgnoreNotificationTapEvent:callback:] */

void FUN_106132ef0(void)

{
  return;
}



/* Entry: 106132ef4; end: 106132efb; -[SCDirectorModeMainViewController otherParticipantUserId] */

undefined8 FUN_106132ef4(void)

{
  return 0;
}



/* Entry: 106132efc; end: 106132f8b; -[SCDirectorModeMainViewController presentingViewControllerForDMLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132efc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127401c0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2380c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010c27b660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c27b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106132f8c; end: 106132f9f; -[SCDirectorModeMainViewController lensExplorerWillPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127401c8),PTR_s_viewWillDisappear__112685438,1);
  return;
}



/* Entry: 106132fa0; end: 106132fb3; -[SCDirectorModeMainViewController lensExplorerDidPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127401c8),PTR_s_viewDidDisappear__112684c48,1);
  return;
}



/* Entry: 106132fb4; end: 106133023; -[SCDirectorModeMainViewController lensExplorerWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106132fb4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127401e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
    func_0x00010bf82f40(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010bdc87a0(param_1);
  func_0x00010bea28a0(0x3ff0000000000000,0x3fd3333333333333,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c29e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127401c8),PTR_s_viewWillAppear__1126853f0,1);
  return;
}



/* Entry: 106133024; end: 106133037; -[SCDirectorModeMainViewController lensExplorerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127401c8),PTR_s_viewDidAppear__112684bd0,1);
  return;
}



/* Entry: 106133038; end: 1061330a3; -[SCDirectorModeMainViewController lensExplorer:didPickLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133038(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_1127401c0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2380c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf83cc0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061330a4; end: 1061330d3; -[SCDirectorModeMainViewController cameraViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061330a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127401c8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061330d4; end: 1061330d7; -[SCDirectorModeMainViewController didCancelFromPreview:] */

void FUN_1061330d4(void)

{
  return;
}



/* Entry: 1061330d8; end: 106133137; -[SCDirectorModeMainViewController didSendSnapsAndPostToStory:storyTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061330d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127401b8;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b520();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106133138; end: 10613318f; -[SCDirectorModeMainViewController didPostStoryWithStoryTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133138(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127401b8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78540();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106133190; end: 106133217; -[SCDirectorModeMainViewController didSaveSnapWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133190(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127401b8;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7a380();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106133218; end: 10613321b; -[SCDirectorModeMainViewController directorModeCameraExitMode:] */

void FUN_106133218(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitDirectorMode_1125c4768);
  return;
}



/* Entry: 10613321c; end: 10613321f; -[SCDirectorModeMainViewController directorModeCameraFeaturePresentVC:] */

void FUN_10613321c(void)

{
  return;
}



/* Entry: 106133220; end: 1061332ff; -[SCDirectorModeMainViewController directorModeCamera:setOverlayContainerViewHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133220(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = *(ulong *)(param_2 + _DAT_1127401c8);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26e700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126aff50;
  _objc_opt_class(PTR_PTR_1126aff50);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar2 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  func_0x00010c28b020(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106133300; end: 106133387; -[SCDirectorModeMainViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_1127401e0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    puStack_38 = PTR_PTR_1126efd80;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,param_4)
    ;
  }
  else {
    func_0x00010bf82f40(*(undefined8 *)(param_1 + lVar2));
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106133388; end: 1061333f3; -[SCDirectorModeMainViewController trayUIController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133388(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127401e0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c8440;
    _objc_alloc();
    func_0x00010c034080();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061333f4; end: 1061334e7; -[SCDirectorModeMainViewController trayUIControllerWillShow:inHostViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061333f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127401dc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_4);
  func_0x00010c2a6740(uVar2);
  func_0x00010bef7700(param_4);
  uVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar3));
  _objc_release(param_4);
  if (*(char *)(param_1 + _DAT_1127401c4) == '\x01') {
    func_0x00010bf2bc00(*(undefined8 *)(param_1 + _DAT_1127401d8));
                    /* WARNING: Could not recover jumptable at 0x00010beca150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__synchronizeThumbnailLayout_1125901f8);
    return;
  }
  return;
}



/* Entry: 1061334e8; end: 106133553; -[SCDirectorModeMainViewController trayUIController:didResizeToHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061334e8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + _DAT_1127401c4) == '\x01') {
    func_0x00010bf08b00(*(undefined8 *)(param_2 + _DAT_1127401d8));
    func_0x00010bea2860(param_1,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beca150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__synchronizeThumbnailLayout_1125901f8);
    return;
  }
  func_0x00010bdd9720(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bea28b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0,param_2,PTR_s__setCameraViewScale_animationDur_1125863d0);
  return;
}



/* Entry: 106133554; end: 106133647; -[SCDirectorModeMainViewController trayUIController:anchoringToHeight:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133554(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127401dc);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106133648;
  puStack_60 = &UNK_110846540;
  _objc_copyWeak(auStack_58,auStack_48);
  ppuVar2 = &puStack_78;
  uStack_50 = param_1;
  _objc_retainBlock(ppuVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106133648; end: 1061336ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133648(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_1127401c4) == '\x01') {
      func_0x00010bf08b00(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_1127401d8));
      func_0x00010bea2860(lVar1);
      func_0x00010beca140(lVar1);
    }
    else {
      func_0x00010bdd9720(*(undefined8 *)(param_1 + 0x28),lVar1);
      func_0x00010bea28a0(lVar1);
    }
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1127401dc);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106133700; end: 106133797; -[SCDirectorModeMainViewController trayUIControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bdc87a0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127401dc));
  func_0x00010bea28a0(0x3ff0000000000000,0,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127401c8);
  func_0x00010bf29620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83cc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106133798; end: 10613379f; -[SCDirectorModeMainViewController shouldPopToRootViewController] */

undefined8 FUN_106133798(void)

{
  return 0;
}



/* Entry: 1061337a0; end: 1061337a7; -[SCDirectorModeMainViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_1061337a0(void)

{
  return 0;
}



/* Entry: 1061337a8; end: 1061337b3; -[SCDirectorModeMainViewController backgroundExitBehavior] */

void FUN_1061337a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 1061337b4; end: 1061337f7; -[SCDirectorModeMainViewController exit:] */

void FUN_1061337b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf9b700(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061337f8; end: 1061337ff; -[SCDirectorModeMainViewController destinationName] */

undefined8 FUN_1061337f8(void)

{
  return 0;
}



/* Entry: 106133800; end: 10613386b; -[SCDirectorModeMainViewController _synchronizeCameraLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133800(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + _DAT_1127401c4) == '\x01') {
    lVar2 = (long)_DAT_1127401d8;
    func_0x00010c266b80(*(undefined8 *)(param_2 + lVar2));
    lVar1 = *(long *)(param_2 + lVar2);
    func_0x00010c10f660();
    if (lVar1 == 3) {
      func_0x00010bf2ac00(*(undefined8 *)(param_2 + lVar2));
      func_0x00010bea2860(param_1,0,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010beca150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__synchronizeThumbnailLayout_1125901f8);
    return;
  }
  return;
}



/* Entry: 10613386c; end: 106133a0b; -[SCDirectorModeMainViewController _setupCameraView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613386c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_1127401c8;
  func_0x00010c1e24c0(*(undefined8 *)(param_5 + lVar5),param_6,param_5);
  func_0x00010c18e300(*(undefined8 *)(param_5 + lVar5));
  puVar1 = PTR_PTR_1126aefc0;
  _objc_alloc();
  func_0x00010c0402e0();
  lVar5 = (long)_DAT_1127401dc;
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1c8c00(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c1c8b80(*(undefined8 *)(param_5 + lVar5));
  lVar6 = (long)_DAT_1127401c4;
  if (*(char *)(param_5 + lVar6) == '\x01') {
    puVar1 = PTR_PTR_1126c8448;
    _objc_alloc();
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0402a0();
    uVar4 = *(undefined8 *)(param_5 + _DAT_1127401d8);
    *(undefined **)(param_5 + _DAT_1127401d8) = puVar1;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_5 + _DAT_1127401bc;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    if ((*(byte *)(param_5 + lVar6) & 1) == 0) {
      func_0x00010bdd96e0(param_5);
      uVar3 = *(undefined8 *)(param_5 + lVar5);
      func_0x00010c29bf00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar3);
    }
  }
  else {
    func_0x00010be784e0(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc87b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_5,PTR_s__addSubViewController__11254fb88,*(undefined8 *)(param_5 + lVar5));
  return;
}



/* Entry: 106133a0c; end: 106133b77; -[SCDirectorModeMainViewController _setupThumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133a0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127401c8);
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c26e700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aff50;
  _objc_opt_class(PTR_PTR_1126aff50);
  uVar7 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (*(char *)(param_1 + _DAT_1127401c4) == '\x01') {
    lVar5 = param_1;
    _objc_opt_class(param_1);
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(ulong *)(param_1 + _DAT_1127401dc);
    func_0x00010c29bf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde5860(lVar5);
    _objc_release(uVar2);
    uVar2 = uVar7;
    param_1 = lVar6;
  }
  else {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47d20(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106133b78; end: 106133c7f; +[SCDirectorModeMainViewController _configureRuntimeThumbnailsFeature:parentView:cameraView:cameraViewController:] */

void FUN_106133b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_6);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf473a0(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106133c80; end: 106133cbb;  */

void FUN_106133c80(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c2895e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106133cbc; end: 106133d93; -[SCDirectorModeMainViewController _synchronizeThumbnailLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133cbc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  if (*(char *)(param_1 + _DAT_1127401c4) == '\x01') {
    uVar1 = *(ulong *)(param_1 + _DAT_1127401c8);
    func_0x00010bf29620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26e700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126aff50;
    _objc_opt_class(PTR_PTR_1126aff50);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    func_0x00010c266be0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106133d94; end: 106133ebf; -[SCDirectorModeMainViewController _prepareForTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_5 + _DAT_1127401d4) = 1;
  lVar1 = param_5 + _DAT_1127401cc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172b40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + _DAT_1127401bc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf2bae0();
  _objc_release(lVar1);
  if (*(char *)(param_5 + _DAT_1127401c4) == '\x01') {
    func_0x00010c109840(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_1127401d8));
    func_0x00010beca140(param_5);
  }
  else {
    uVar3 = *(undefined8 *)(param_5 + _DAT_1127401dc);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c109830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + _DAT_1127401c8),PTR_s_prepareForTransitionIn_112620028);
  return;
}



/* Entry: 106133ec0; end: 10613409f; -[SCDirectorModeMainViewController _beginTransitionInWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106133ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_1127401d4) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127401dc);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127401c8);
  func_0x00010bf29620(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf7f820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109820();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061340a0;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc999999999999a,puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1061340a0; end: 10613419b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061340a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    if (*(char *)(param_5 + _DAT_1127401c4) == '\x01') {
      func_0x00010bf08a80(*(undefined8 *)(param_5 + _DAT_1127401d8));
      func_0x00010beca140(param_5);
      lVar2 = (long)_DAT_1127401dc;
    }
    else {
      func_0x00010bdd96e0(param_5);
      lVar2 = (long)_DAT_1127401dc;
      uVar1 = *(undefined8 *)(param_5 + lVar2);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar1);
    func_0x00010bf18da0(*(undefined8 *)(param_5 + _DAT_1127401c8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10613419c; end: 10613426f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613419c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    if (*(char *)(lVar1 + _DAT_1127401c4) == '\x01') {
      func_0x00010bf43c40(*(undefined8 *)(lVar1 + _DAT_1127401d8));
      func_0x00010beca140(lVar1);
    }
    lVar2 = lVar1 + _DAT_1127401cc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172b40();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106134270; end: 1061342ff; -[SCDirectorModeMainViewController _prepareForTransitionOut] */

/* WARNING: Possible PIC construction at 0x0001061342a4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134270(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_1127401c4) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127401d8);
  }
  else {
    lVar2 = param_1 + _DAT_1127401cc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172b40();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127401c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c109870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_prepareForTransitionOut_112620038);
  return;
}



/* Entry: 106134300; end: 106134477; -[SCDirectorModeMainViewController _beginTransitionOutWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127401dc);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106134478;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc999999999999a,puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106134478; end: 10613459b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    lVar2 = param_5 + _DAT_1127401bc;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf2bae0();
    _objc_release(lVar2);
    if (*(char *)(param_5 + _DAT_1127401c4) == '\x01') {
      func_0x00010bf08aa0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_1127401d8))
      ;
      func_0x00010beca140(param_5);
      lVar2 = (long)_DAT_1127401dc;
    }
    else {
      lVar2 = (long)_DAT_1127401dc;
      uVar1 = *(undefined8 *)(param_5 + lVar2);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar1);
    func_0x00010bf18dc0(*(undefined8 *)(param_5 + _DAT_1127401c8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10613459c; end: 106134643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613459c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    lVar2 = lVar1 + _DAT_1127401cc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172b40();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c29bf00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106134644; end: 10613473b; -[SCDirectorModeMainViewController _addSubViewController:] */

void FUN_106134644(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar2 != lVar3) {
    func_0x00010c2a6740(param_3,param_2,param_1);
    func_0x00010bef7700(param_1,param_2,param_3);
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf77e80(param_3,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10613473c; end: 10613478f; -[SCDirectorModeMainViewController _removeViewOfChildViewController:] */

void FUN_10613473c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c12c8e0(param_3);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12c960(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106134790; end: 106134853; -[SCDirectorModeMainViewController _cameraViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106134790(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_5 + _DAT_1127401c4) == '\x01') {
    func_0x00010bf15f80(*(undefined8 *)(param_5 + _DAT_1127401d8));
  }
  else {
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
    param_4 = (double)(float)(int)(param_4 * 0.5625);
    if (param_4 <= param_3) {
      param_3 = param_4;
    }
    func_0x00010bdd9700(param_5);
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 106134854; end: 106134927; -[SCDirectorModeMainViewController _cameraViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106134854(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  if (*(char *)(param_5 + _DAT_1127401c4) == '\x01') {
    func_0x00010bf15f80(*(undefined8 *)(param_5 + _DAT_1127401d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectGetHeight_110347570)();
    return param_1;
  }
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = (double)(ulong)(uint)(int)(param_3 / 0.5625);
  dVar3 = (double)(float)(int)(param_3 / 0.5625);
  _objc_release(lVar1);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(param_5);
  if (param_4 - param_3 <= dVar3) {
    dVar3 = param_4 - param_3;
  }
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return dVar3 + dVar2;
}



/* Entry: 106134928; end: 1061349cb; -[SCDirectorModeMainViewController _cameraViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134928(double param_1,undefined8 param_2,double param_3,long param_4)

{
  if (*(char *)(param_4 + _DAT_1127401c4) == '\x01') {
    func_0x00010bf15f80(*(undefined8 *)(param_4 + _DAT_1127401d8));
  }
  else {
    func_0x00010bdd9740(param_4);
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(param_4);
    func_0x00010b69090c((param_3 - param_1) * 0.5,0,param_1,param_2);
  }
  return;
}



/* Entry: 1061349cc; end: 106134a53; -[SCDirectorModeMainViewController _cameraViewScaleWithTrayHeight:] */

double FUN_1061349cc(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bdd9700();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_5);
  dVar1 = ((dVar1 - param_1) + (param_4 - dVar1) + -20.0) / dVar1;
  if (dVar1 <= 0.4) {
    dVar1 = 0.4;
  }
  dVar2 = 1.0;
  if (dVar1 <= 1.0) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 106134a54; end: 106134b6f; -[SCDirectorModeMainViewController _setCameraViewScale:animationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134a54(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_3 + _DAT_1127401c4) == '\x01') {
    func_0x00010c228360(*(undefined8 *)(param_3 + _DAT_1127401d8));
    func_0x00010beca140(param_3);
  }
  else {
    dVar3 = param_1;
    uVar5 = param_2;
    func_0x00010bdd9740(param_3);
    dVar4 = param_1;
    func_0x00010b690ad8();
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar4 = (dVar4 - dVar3) * 0.5;
    uVar6 = 0;
    func_0x00010b69090c(dVar4,0,dVar3,uVar5);
    uVar2 = *(undefined8 *)(param_3 + _DAT_1127401dc);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar4,uVar6,dVar3,uVar5);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea2870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,PTR_s__setCameraOverlayAlphaForScale_a_1125863c0);
  return;
}



/* Entry: 106134b70; end: 106134c87; -[SCDirectorModeMainViewController _setCameraOverlayAlphaForScale:animationDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134b70(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0x3ff0000000000000;
  if (param_1 < 1.0) {
    uVar2 = 0;
  }
  if (0.0 < param_2) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106134c38;
    puStack_48 = &UNK_110848c48;
    lStack_40 = param_3;
    uStack_38 = uVar2;
    func_0x00010bf03400(param_2,PTR__OBJC_CLASS___UIView_1126aec20,param_4,&puStack_60);
    return;
  }
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127401c8);
  func_0x00010bf2a1a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106134c88; end: 106134d27; -[SCDirectorModeMainViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106134c88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127401d0);
  _objc_destroyWeak(param_1 + _DAT_1127401cc);
  _objc_storeStrong(param_1 + _DAT_1127401c0,0);
  _objc_storeStrong(param_1 + _DAT_1127401e0,0);
  _objc_storeStrong(param_1 + _DAT_1127401d8,0);
  _objc_storeStrong(param_1 + _DAT_1127401c8,0);
  _objc_storeStrong(param_1 + _DAT_1127401dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127401bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127401b8);
  return;
}



/* Entry: 106134d28; end: 106134fdf; -[SCDirectorModeWorkflow initWithPresentingUIContainer:sourcePageType:directorModeSource:replyConfiguration:systemScope:directorModeScopeDelegate:draftDelegate:sendSnapDelegate:transitionDelegate:shortcutContextAction:toolbarFeatureAllowlist:customVolumeServices:secretFeatureCheckingServices:appInsightsMetadataStorage:simpleSnapchatExperimentConfigProvider:] */

undefined8 *
FUN_106134d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain();
  puStack_70 = PTR_PTR_1126efd88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 7,param_8);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_storeWeak(puVar1 + 9,param_10);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106134fe0; end: 106135b4b; -[SCDirectorModeWorkflow beginWorkflowWithCameraResources:cameraViewType:publicCameraFeatureCatalog:cameraHardwareServices:cameraRequestHandlerServices:cameraDeviceSettingsResolver:cameraStabilityServices:appTerminationProvider:captureServiceScopeExposer:cameraBIPAScopeExposer:cameraBIPAScopeServices:featureSettingsService:legacyLensLogger:userTrackedLogger:touchController:cameraLensesViewControllerManager:cameraLensesViewControllerConfigurator:lensCarouselManager:storiesLegacySnapInfoCollector:cameraUIServices:cameraCircumstanceEngine:cameraFeatureLoggingServices:cameraLoggingServices:cameraUserLoggingServices:cameraPreviewPresenterServices:snapchattersDataFetcher:sounddEffects:audioSession:currentPageTracker:previewFilterDataProviderFactory:styleContextController:cameraConfigurationServices:cameraUIScope:renderAgent:renderTarget:nightModeServices:locationPermissionsManager:systemConfiguration:permissionRequestService:lensPlusTierService:notificationPermissionRequester:appStartExperimentReader:] */

void FUN_106134fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  puVar1 = PTR_PTR_1126c8450;
  _objc_alloc();
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  uVar13 = param_34;
  func_0x00010bf45e20(param_34);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_34;
  func_0x00010bf45e20(param_34);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c23c780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0634e0();
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf2b960(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c8458;
  _objc_alloc();
  func_0x00010bffc040();
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106135b4c;
  puStack_88 = &UNK_1109104b8;
  _objc_retain();
  puStack_80 = puVar6;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47700();
  _objc_release(uVar13);
  func_0x00010c176920(uVar5);
  func_0x00010c20c680(uVar5);
  func_0x00010bfaf8c0(uVar5);
  puVar7 = PTR_PTR_1126c8460;
  _objc_alloc();
  func_0x00010bffc040();
  puVar8 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar9 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar10 = PTR_PTR_1126c3b20;
  _objc_alloc();
  func_0x00010c038ea0();
  uVar13 = param_22;
  func_0x00010bf2b660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf2a1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a6c0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  func_0x00010c176380(uVar5);
  uVar13 = param_24;
  func_0x00010bf2ac60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7860(uVar5);
  _objc_release(uVar13);
  uVar13 = param_24;
  func_0x00010bf2a080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176ae0(uVar5);
  _objc_release(uVar13);
  uVar13 = param_24;
  func_0x00010bf52280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184120(uVar5);
  _objc_release(uVar13);
  uVar13 = param_24;
  func_0x00010c0f9d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dabc0(uVar5);
  _objc_release(uVar13);
  puVar11 = PTR_PTR_1126b7008;
  _objc_alloc_init();
  func_0x00010c176740(uVar5);
  _objc_release(puVar11);
  uVar13 = param_26;
  func_0x00010bf1cf00(param_26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177600(uVar5);
  _objc_release(uVar13);
  func_0x00010c205f20(uVar5);
  func_0x00010c206a00(uVar5);
  func_0x00010c16c360(uVar5);
  func_0x00010c1877a0(uVar5);
  func_0x00010c1e1ca0(uVar5);
  uVar13 = param_33;
  func_0x00010c269d40(param_33);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840(uVar5);
  _objc_release(uVar13);
  func_0x00010c1ffc40(uVar5);
  func_0x00010c177780(uVar5);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c1eb380(uVar5);
  }
  uVar13 = param_27;
  func_0x00010c1119c0(param_27);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2080(uVar5);
  _objc_release(uVar13);
  uVar13 = uVar5;
  func_0x00010bf29620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf29f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190bc0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  uVar13 = uVar5;
  func_0x00010bf29620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf7f420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  uVar13 = uVar5;
  func_0x00010bf29620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e500();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  uVar13 = uVar5;
  func_0x00010bf29620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191620();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_release(lVar2);
  uVar13 = uVar5;
  func_0x00010bf29620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010bf4f0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206fa0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar13);
  _objc_storeWeak(param_1 + 0x68,param_6);
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x78));
  _objc_initWeak(auStack_a8,param_1);
  uVar13 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010bf0c9a0(uVar13);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puStack_80);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106135b4c; end: 106135ba7;  */

void FUN_106135b4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106135ba8; end: 106135c63; -[SCDirectorModeWorkflow endWorkflow] */

void FUN_106135ba8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106135c64; end: 106135ca7;  */

void FUN_106135c64(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7f500();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106135ca8; end: 106135cff; -[SCDirectorModeWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_106135ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b520();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106135d00; end: 106135d77; -[SCDirectorModeWorkflow didPostStoryWithStoryTypes:] */

void FUN_106135d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78540();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106135d78; end: 106135def; -[SCDirectorModeWorkflow didSaveSnapWithParameters:] */

void FUN_106135d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7a380();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106135df0; end: 106135fcf; -[SCDirectorModeWorkflow _subscribeToObservables] */

void FUN_106135df0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    _objc_release(uVar3);
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    puStack_68 = &uStack_70;
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2a6420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106135fd0;
    puStack_90 = &UNK_1108e4dc0;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar2;
    puStack_88 = &uStack_70;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf72840(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    __Block_object_dispose(&uStack_70,8);
  }
  return;
}



/* Entry: 106135fd0; end: 1061360e7;  */

void FUN_106135fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x78);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      func_0x00010bf17b00(*(undefined8 *)(lVar1 + 0x78),param_2,1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061360e8; end: 1061361b7; -[SCDirectorModeWorkflow .cxx_destruct] */

void FUN_1061360e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061361b8; end: 10613622b; -[SCDirectorModeWorkflowServices initWithWorkflow:] */

undefined1 * FUN_1061361b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efd90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10613622c; end: 106136233; -[SCDirectorModeWorkflowServices workflow] */

undefined8 FUN_10613622c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106136234; end: 10613623f; -[SCDirectorModeWorkflowServices .cxx_destruct] */

void FUN_106136234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106136240; end: 10613624b; -[SCCameraMainCameraFeatureProviderMemoriesTransitionCoordinatorProvider .cxx_destruct] */

void FUN_106136240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10613624c; end: 10613634f;  */

void FUN_10613624c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c8470;
    _objc_alloc(PTR_PTR_1126c8470);
    uVar8 = *(undefined8 *)(lVar2 + 0x1b8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11a2a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar2 + 0x10);
    uVar5 = *(undefined8 *)(lVar2 + 0xa0);
    func_0x00010c1302a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + 0x38) == '\x01') {
      bVar6 = *(byte *)(param_1 + 0x39);
    }
    else {
      bVar6 = 0;
    }
    func_0x00010c023120(puVar7,param_2,uVar8,uVar1,uVar4,uVar9,uVar5,bVar6 & 1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106136350; end: 10613638b;  */

byte FUN_106136350(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  _objc_release();
  return bVar2 & 1;
}



/* Entry: 10613638c; end: 10613646b;  */

void FUN_10613638c(long param_1)

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
    func_0x00010bf2b840(param_1);
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


