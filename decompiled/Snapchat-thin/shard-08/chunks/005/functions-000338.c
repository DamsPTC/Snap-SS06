/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061d3100; end: 1061d3107; -[SCLensExplorerButtonController shouldDisplayBadge] */

void FUN_1061d3100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_shouldDisplayButtonBadge_112669720);
  return;
}



/* Entry: 1061d3108; end: 1061d310f; -[SCLensExplorerButtonController resetBadge] */

void FUN_1061d3108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_fulfilLensExplorerBadge_1125cc740);
  return;
}



/* Entry: 1061d3110; end: 1061d3217; -[SCLensExplorerButtonController _updateTintColor:] */

void FUN_1061d3110(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010c270f20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071c60(param_3,param_2,lVar1);
    _objc_release(lVar1);
    if ((uVar2 & 1) == 0) {
      lVar1 = param_1;
      func_0x00010c22f320();
      lVar3 = param_1;
      if ((int)lVar1 == 0) {
        func_0x00010bdf94a0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bdd2840(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      if (param_3 == 0) {
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + 8),param_2,lVar3);
      }
      else {
        lVar1 = lVar3;
        func_0x00010bfe9720(lVar3,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + 8),param_2,lVar1);
        _objc_release(lVar1);
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010bfe90c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160();
      _objc_release(uVar4);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d3218; end: 1061d339b; -[SCLensExplorerButtonController _prepareLensFeedButton] */

void FUN_1061d3218(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6138;
  _objc_alloc();
  dVar4 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar4,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21d680(*(undefined8 *)(param_1 + 8));
  func_0x00010c1aac60(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR_PTR_1126c89d8;
  func_0x00010c091ea0(PTR_PTR_1126c89d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar1);
  func_0x00010c092b40(PTR_PTR_1126c89d8);
  dVar4 = dVar4 * 0.5;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4);
  _objc_release(uVar3);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + 8));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 8));
  func_0x00010befbd40(*(undefined8 *)(param_1 + 8));
  lVar2 = param_1;
  func_0x00010bdf94a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 8));
  _objc_release(lVar2);
  func_0x00010c092b40(PTR_PTR_1126c89d8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  dVar5 = dVar4;
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar5 = (dVar4 - dVar5) * 0.5;
  _objc_release(uVar3);
  func_0x00010c1aa420(dVar5,dVar5,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c08ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_layoutFeatureContainer__112600d40,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1061d339c; end: 1061d344b; -[SCLensExplorerButtonController _lensFeedButtonPressed:] */

void FUN_1061d339c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78960();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bdf94a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 8));
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c138290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetBadge_11262bac0);
    return;
  }
  return;
}



/* Entry: 1061d344c; end: 1061d34b3; -[SCLensExplorerButtonController updateBadge] */

void FUN_1061d344c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_1;
    func_0x00010c22f320();
    lVar2 = param_1;
    if ((int)lVar1 == 0) {
      func_0x00010bdf94a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdd2840(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 8),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1061d34b4; end: 1061d351f; -[SCLensExplorerButtonController _defaultImage] */

void FUN_1061d34b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x105,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061d3520; end: 1061d358b; -[SCLensExplorerButtonController _badgedImage] */

void FUN_1061d3520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x105,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061d358c; end: 1061d35a3; -[SCLensExplorerButtonController delegate] */

void FUN_1061d358c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d35a4; end: 1061d35af; -[SCLensExplorerButtonController setDelegate:] */

void FUN_1061d35a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1061d35b0; end: 1061d360b; -[SCLensExplorerButtonController .cxx_destruct] */

void FUN_1061d35b0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061d360c; end: 1061d364b; -[SCLensExplorerNavigationProxy initWithDirectorsNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d360c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742694);
  *(undefined8 *)(param_1 + _DAT_112742694) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1061d364c; end: 1061d368b; -[SCLensExplorerNavigationProxy initWithSpectaclesNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d364c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742694);
  *(undefined8 *)(param_1 + _DAT_112742694) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1061d368c; end: 1061d369f; -[SCLensExplorerNavigationProxy setRoutingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d368c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742698,param_3);
  return;
}



/* Entry: 1061d36a0; end: 1061d36eb; -[SCLensExplorerNavigationProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d36a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112742694;
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar1,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061d36ec; end: 1061d3777; -[SCLensExplorerNavigationProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d36ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + _DAT_112742694);
  uVar1 = param_3;
  func_0x00010c15ac20(param_3);
  _objc_opt_respondsToSelector(uVar2,uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c16a2c0(param_3);
    func_0x00010c1fbb60(param_3);
  }
  func_0x00010c06ae40(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d3778; end: 1061d37d7; -[SCLensExplorerNavigationProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112742694;
  _objc_opt_respondsToSelector(*(undefined8 *)(param_1 + lVar1),param_3);
  func_0x00010c0cca80(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d37d8; end: 1061d37e7; -[SCLensExplorerNavigationProxy exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061d37d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112742690);
}



/* Entry: 1061d37e8; end: 1061d3823; -[SCLensExplorerNavigationProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d37e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112742698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742694,0);
  return;
}



/* Entry: 1061d3824; end: 1061d3957; -[SCFeatureLensExplorerFromCarouselOverlayColumnView initWithTileSize:spacing:images:animationPace:initialVerticalShift:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061d3824(undefined8 param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  lVar4 = param_8;
  func_0x00010bf529e0(param_8);
  puStack_68 = PTR_PTR_1126f03a8;
  uStack_70 = param_6;
  _objc_msgSendSuper2(0,0,param_1,(param_2 + param_3) * (double)(lVar4 - 1) - param_3,&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274269c) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11274269c))[1] = param_2;
    *(double *)((long)puVar1 + (long)_DAT_1127426a0) = param_3;
    lVar4 = (long)_DAT_1127426a4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(long *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127426a8) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127426ac) = param_5;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    func_0x00010bdf4be0(puVar1);
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d3958; end: 1061d399f; -[SCFeatureLensExplorerFromCarouselOverlayColumnView didMoveToWindow] */

void FUN_1061d3958(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f03a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010bebf680(param_1);
  return;
}



/* Entry: 1061d39a0; end: 1061d3a33; -[SCFeatureLensExplorerFromCarouselOverlayColumnView _startAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d39a0(long param_1)

{
  if (1.1920928955078125e-07 < ABS(*(double *)(param_1 + _DAT_1127426a8))) {
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1061d3a34; end: 1061d3c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3a34(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double in_d3;
  double dVar12;
  double dVar13;
  
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_retain(param_2);
  func_0x00010bf04040(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eabe0(0x7f800000);
  func_0x00010c186980(puVar3);
  lVar1 = (long)_DAT_11274269c;
  lVar2 = (long)_DAT_1127426a0;
  dVar12 = -(*(double *)(*(long *)(param_1 + 0x20) + lVar1 + 8) * 0.5) -
           *(double *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bf20c00();
  lVar8 = *(long *)(param_1 + 0x20);
  lVar9 = (long)_DAT_1127426a8;
  dVar13 = in_d3 + *(double *)(lVar8 + lVar2) + *(double *)(lVar8 + lVar1 + 8) * 0.5;
  dVar11 = dVar12;
  dVar10 = dVar13;
  if (0.0 < *(double *)(lVar8 + lVar9)) {
    dVar11 = dVar13;
    dVar10 = dVar12;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar10,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar3);
  _objc_release(puVar4);
  dVar11 = *(double *)(*(long *)(param_1 + 0x20) + lVar9);
  dVar10 = -dVar11;
  if (0.0 <= dVar11) {
    dVar10 = dVar11;
  }
  func_0x00010c192d40((dVar13 - dVar12) / dVar10,puVar3);
  dVar10 = *(double *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127426ac);
  dVar11 = dVar10 / *(double *)(*(long *)(param_1 + 0x20) + lVar9);
  func_0x00010bf8b160(puVar3);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010c261580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  func_0x00010c214e40(dVar11 + (double)param_3 * (dVar10 / (double)uVar6),puVar3);
  _objc_release(uVar5);
  uVar7 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef6c20(uVar7);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1061d3c28; end: 1061d3c87; -[SCFeatureLensExplorerFromCarouselOverlayColumnView _createTiles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3c28(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1061d3c88;
  puStack_20 = &UNK_1108e93a0;
  lStack_18 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + _DAT_1127426a4),param_2,&puStack_38);
  return;
}



/* Entry: 1061d3c88; end: 1061d3d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3c88(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c8a10;
  lVar2 = *(long *)(param_1 + 0x20);
  dVar3 = *(double *)(lVar2 + _DAT_1127426a0);
  uVar6 = *(undefined8 *)(lVar2 + _DAT_11274269c);
  dVar5 = (double)((undefined8 *)(lVar2 + _DAT_11274269c))[1];
  dVar4 = *(double *)(lVar2 + _DAT_1127426ac);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c014680(0,dVar4 + (double)param_3 * (dVar5 + dVar3),uVar6,dVar5);
  _objc_release(param_2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061d3d3c; end: 1061d3d4f; -[SCFeatureLensExplorerFromCarouselOverlayColumnView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127426a4,0);
  return;
}



/* Entry: 1061d3d50; end: 1061d3e7b; -[SCFeatureLensExplorerFromCarouselOverlayGridView initWithFrame:imageProvider:animationsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061d3d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f03b0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127426b0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127426b4) = param_8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe6666666666666);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bdc6520(puVar1);
    func_0x00010bdc7000(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d3e7c; end: 1061d3f1f; -[SCFeatureLensExplorerFromCarouselOverlayGridView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3e7c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f03b0;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar1 = *(double *)(param_5 + _DAT_1127426b8);
  dVar2 = param_4 - dVar1;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (param_4 <= dVar1) {
    dVar1 = param_4;
  }
  func_0x00010c19f0e0(0,dVar2,param_3,dVar1,*(undefined8 *)(param_5 + _DAT_1127426bc));
  func_0x00010c17a6a0(param_3 * 0.5,param_4 * 0.5,*(undefined8 *)(param_5 + _DAT_1127426c0));
  return;
}



/* Entry: 1061d3f20; end: 1061d409f; -[SCFeatureLensExplorerFromCarouselOverlayGridView _addGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d3f20(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_1127426bc;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar7);
  func_0x00010c209760(0,0,*(undefined8 *)(param_1 + lVar8));
  func_0x00010c196020(0,0x3ff0000000000000,*(undefined8 *)(param_1 + lVar8));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar3;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar8),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  lVar6 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(lVar6);
  *(undefined8 *)(param_1 + _DAT_1127426b8) = 0x4077200000000000;
  lVar6 = *(long *)(param_1 + lVar8);
  func_0x00010c200c80(lVar6,param_2,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4085480000000000,0x4093d80000000000);
  uVar7 = *(undefined8 *)(lVar6 + _DAT_1127426b0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  uVar10 = 0;
  do {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar11 = 6;
    lVar9 = lVar8;
    do {
      uVar12 = uVar7;
      func_0x00010c0946e0(0x405f400000000000,0x4069000000000000,uVar7,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,uVar12);
      _objc_release(uVar12);
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    bVar1 = (uVar10 & 1) != 0;
    uVar12 = 0x401c000000000000;
    if (bVar1) {
      uVar12 = 0xc01c000000000000;
    }
    uVar13 = 0;
    if (bVar1) {
      uVar13 = 0x4064100000000000;
    }
    if (*(char *)(lVar6 + _DAT_1127426b4) == '\0') {
      uVar12 = 0;
    }
    puVar4 = PTR_PTR_1126c8a18;
    _objc_alloc(PTR_PTR_1126c8a18);
    func_0x00010c052240(0x405f400000000000,0x4069000000000000,0x402c000000000000,uVar12,uVar13);
    func_0x00010bfb68e0();
    func_0x00010c19f0e0((double)uVar10 * 139.0,puVar4);
    func_0x00010befbb60(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar10 = uVar10 + 1;
    lVar8 = lVar8 + 6;
  } while (uVar10 != 5);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
  }
  else {
    func_0x00010befe660(&uStack_170,puVar3);
  }
  _CGAffineTransformRotate(&uStack_138,0x3fe0000000000000,&uStack_170);
  puVar4 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uStack_130;
  uStack_170 = uStack_138;
  uStack_158 = uStack_120;
  uStack_160 = uStack_128;
  uStack_148 = uStack_110;
  uStack_150 = uStack_118;
  func_0x00010c166440();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010befbb60(lVar6,param_2,puVar2);
  uVar12 = *(undefined8 *)(lVar6 + _DAT_1127426c0);
  *(undefined **)(lVar6 + _DAT_1127426c0) = puVar2;
  _objc_release(uVar12);
  _objc_release(uVar7);
  return;
}



/* Entry: 1061d40a0; end: 1061d433b; -[SCFeatureLensExplorerFromCarouselOverlayGridView _addColumns] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d40a0(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,0x4085480000000000,0x4093d80000000000);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127426b0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  uVar8 = 0;
  do {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar9 = 6;
    lVar6 = lVar7;
    do {
      uVar10 = uVar3;
      func_0x00010c0946e0(0x405f400000000000,0x4069000000000000,uVar3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,uVar10);
      _objc_release(uVar10);
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    bVar1 = (uVar8 & 1) != 0;
    uVar10 = 0x401c000000000000;
    if (bVar1) {
      uVar10 = 0xc01c000000000000;
    }
    uVar11 = 0;
    if (bVar1) {
      uVar11 = 0x4064100000000000;
    }
    if (*(char *)(param_1 + _DAT_1127426b4) == '\0') {
      uVar10 = 0;
    }
    puVar5 = PTR_PTR_1126c8a18;
    _objc_alloc(PTR_PTR_1126c8a18);
    func_0x00010c052240(0x405f400000000000,0x4069000000000000,0x402c000000000000,uVar10,uVar11);
    func_0x00010bfb68e0();
    func_0x00010c19f0e0((double)uVar8 * 139.0,puVar5);
    func_0x00010befbb60(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 6;
  } while (uVar8 != 5);
  puVar4 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010befe660(&uStack_110,puVar4);
  }
  _CGAffineTransformRotate(&uStack_d8,0x3fe0000000000000,&uStack_110);
  puVar5 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_d0;
  uStack_110 = uStack_d8;
  uStack_f8 = uStack_c0;
  uStack_100 = uStack_c8;
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  func_0x00010c166440();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010befbb60(param_1,param_2,puVar2);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127426c0);
  *(undefined **)(param_1 + _DAT_1127426c0) = puVar2;
  _objc_release(uVar10);
  _objc_release(uVar3);
  return;
}



/* Entry: 1061d433c; end: 1061d438b; -[SCFeatureLensExplorerFromCarouselOverlayGridView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d433c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127426b0,0);
  _objc_storeStrong(param_1 + _DAT_1127426c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127426bc,0);
  return;
}



/* Entry: 1061d438c; end: 1061d455b; -[SCFeatureLensExplorerFromCarouselOverlayTileView initWithFrame:image:] */

undefined8 *
FUN_1061d438c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f03b8;
  puVar1 = &uStack_60;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c182220(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3fd51eb851eb851f,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar1);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c80();
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,puVar1);
    puVar4 = auStack_70;
    _objc_copyWeak(puVar4,auStack_68);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(param_7);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1061d455c; end: 1061d45bb;  */

void FUN_1061d455c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010c1a9f00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d45bc; end: 1061d45fb;  */

void FUN_1061d45bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061d45fc; end: 1061d4603;  */

undefined8 FUN_1061d45fc(void)

{
  return 1;
}



/* Entry: 1061d4604; end: 1061d47a7; -[SCSnapPlusLensOverlayFeatureProviderPlugin _createFeature] */

void FUN_1061d4604(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = PTR_PTR_1126c8a20;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126c8a28;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126c8a30;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126c8a38;
  _objc_alloc();
  func_0x00010bff6500();
  puVar9 = PTR_PTR_1126c8a40;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022f00(puVar9,param_2,uVar1,puVar8,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar12 = PTR_PTR_1126c8a48;
  _objc_alloc(PTR_PTR_1126c8a48);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6e60(puVar12,param_2,puVar9,uVar14,uVar1,uVar2,uVar10,uVar3,uVar11,uVar4,uVar13,
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  _objc_release(uVar13);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1061d47a8; end: 1061d487f; -[SCSnapPlusLensOverlayFeatureProviderPlugin .cxx_destruct] */

void FUN_1061d47a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061d4880; end: 1061d4923; -[SCFeatureLensOverlayCtaView initWithCtaStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1061d4880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f03c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c16e060(puVar1);
    func_0x00010bdc9ca0(puVar1);
    func_0x00010c166c00(puVar1);
    func_0x00010c207380(0x4018000000000000,puVar1);
    func_0x00010c181cc0(0x447a0000,puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274270c) = param_3;
    func_0x00010bdf44e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061d4924; end: 1061d4927; -[SCFeatureLensOverlayCtaView animatableSubviews] */

void FUN_1061d4924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c261590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subviews_112675f88);
  return;
}



/* Entry: 1061d4928; end: 1061d4967; -[SCFeatureLensOverlayCtaView pointInsideActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4928(long param_1)

{
  if (*(long *)(param_1 + _DAT_112742710) != 0) {
    func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return;
  }
  return;
}



/* Entry: 1061d4968; end: 1061d4a23; -[SCFeatureLensOverlayCtaView updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112742714),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112742718),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf25a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed2720(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d4a24; end: 1061d4a73; -[SCFeatureLensOverlayCtaView _updateActionButtonTitle:] */

void FUN_1061d4a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be35500(param_1);
  }
  else {
    func_0x00010beb82a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d4a74; end: 1061d4b37; -[SCFeatureLensOverlayCtaView _createSubviews] */

/* WARNING: Possible PIC construction at 0x0001061d4b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061d4b04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4a74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf4ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112742714;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bdf44a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742718);
  *(long *)(param_1 + _DAT_112742718) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bdec920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742710);
  *(long *)(param_1 + _DAT_112742710) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef6d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addArrangedSubview__11259b500,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 1061d4b38; end: 1061d4b3f; -[SCFeatureLensOverlayCtaView _alignmentForCtaStyle:] */

undefined8 FUN_1061d4b38(void)

{
  return 3;
}



/* Entry: 1061d4b40; end: 1061d4bff; -[SCFeatureLensOverlayCtaView _createTitleLabel] */

void FUN_1061d4b40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_2,0);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061d4c00; end: 1061d4cbf; -[SCFeatureLensOverlayCtaView _createSubtitleLabel] */

void FUN_1061d4c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_2,0);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061d4cc0; end: 1061d4d23; -[SCFeatureLensOverlayCtaView _createCtaButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8a50;
  _objc_alloc(PTR_PTR_1126c8a50);
  func_0x00010c04ea80();
  func_0x00010befbd40();
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f30eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061d4d24; end: 1061d4db7; -[SCFeatureLensOverlayCtaView _showButtonWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112742710;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11274271c);
    func_0x00010c0720c0(uVar1,param_2,param_3);
    if ((uVar1 & 1) != 0) goto LAB_1061d4da4;
  }
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274271c);
  *(undefined8 *)(param_1 + _DAT_11274271c) = uVar2;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
LAB_1061d4da4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d4db8; end: 1061d4e0f; -[SCFeatureLensOverlayCtaView _hideButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4db8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742710;
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar2),param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274271c);
  *(undefined8 *)(param_1 + _DAT_11274271c) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1061d4e10; end: 1061d4e2b; -[SCFeatureLensOverlayCtaView _handleExploreTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4e10(long param_1)

{
  if (*(long *)(param_1 + _DAT_112742720) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001061d4e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112742720) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1061d4e2c; end: 1061d4e3b; -[SCFeatureLensOverlayCtaView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061d4e2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742720);
}



/* Entry: 1061d4e3c; end: 1061d4e47; -[SCFeatureLensOverlayCtaView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4e3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061d4e48; end: 1061d4eb7; -[SCFeatureLensOverlayCtaView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d4e48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742720,0);
  _objc_storeStrong(param_1 + _DAT_11274271c,0);
  _objc_storeStrong(param_1 + _DAT_112742710,0);
  _objc_storeStrong(param_1 + _DAT_112742718,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742714,0);
  return;
}



/* Entry: 1061d4eb8; end: 1061d4f7b; -[SCLensExplorerCarouselOverlayViewModel initWithEmptyState:] */

undefined8 FUN_1061d4eb8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x0001061e09c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if (param_3 == 0) {
    func_0x0001061e0990();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001061e09a8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001061e09d8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001061e09f0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c053240(param_1,param_2,uVar2,uVar3,uVar1,0,0);
  _objc_retain();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 1061d4f7c; end: 1061d4fe7; +[SCLensExplorerCarouselOverlayViewModel exclusiveLensPassOverlayWithOverlayAllowsTouchPassThrough:buttonTitle:] */

void FUN_1061d4f7c(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126c8a58;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c053240();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061d4fe8; end: 1061d503f; -[SCLensOverlayCTA initWithStyle:] */

undefined1 * FUN_1061d4fe8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f03d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb0dc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061d5040; end: 1061d5087; -[SCLensOverlayCTA layoutSubviews] */

void FUN_1061d5040(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f03d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be49040(param_1);
  return;
}



/* Entry: 1061d5088; end: 1061d528b; -[SCLensOverlayCTA _layoutContentIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d5088(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112742724;
  if (*(long *)(param_5 + lVar3) != 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf20c00(param_5);
    func_0x00010c1842e0(param_4 * 0.5,*(undefined8 *)(param_5 + lVar3));
  }
  lVar3 = (long)_DAT_112742728;
  if (*(long *)(param_5 + lVar3) != 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf20c00(param_5);
    param_3 = param_3 + -2.0;
    func_0x00010bf20c00(param_5);
    param_4 = param_4 + -2.0;
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(0x3ff0000000000000,0x3ff0000000000000,param_3,param_4,param_4 * 0.5,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_5 + _DAT_11274272c),param_6,puVar2);
    _objc_release(puVar1);
  }
  lVar3 = (long)_DAT_112742730;
  if (*(long *)(param_5 + lVar3) != 0) {
    func_0x00010bfb68e0(param_5);
    func_0x00010bfb68e0(param_5);
    func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_5 + lVar3));
  }
  lVar3 = (long)_DAT_112742734;
  if (*(long *)(param_5 + lVar3) != 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  }
  lVar4 = (long)_DAT_112742738;
  if (*(long *)(param_5 + lVar4) != 0) {
    func_0x00010bfb68e0(param_5);
    func_0x00010bfb68e0(param_5);
    param_4 = param_4 + -4.0;
    func_0x00010c19f0e0(0x4000000000000000,0x4000000000000000,param_3 + -4.0,param_4,
                        *(undefined8 *)(param_5 + lVar4));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010c1842e0(param_4 * 0.5,*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf20c00(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  }
  lVar3 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar3);
  func_0x00010bfb68e0(param_5);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_4 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061d528c; end: 1061d529f; -[SCLensOverlayCTA setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d528c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274273c),PTR_s_setTitle_forState__1126632c0,param_3,0)
  ;
  return;
}



/* Entry: 1061d52a0; end: 1061d52b3; -[SCLensOverlayCTA addTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d52a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274273c),
             PTR_s_addTarget_action_forControlEvent_11259c900,param_3,param_4,0x40);
  return;
}



/* Entry: 1061d52b4; end: 1061d5523; -[SCLensOverlayCTA _setupUIWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d52b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 1) {
    func_0x00010be8e1e0(param_1);
  }
  lVar21 = param_1;
  func_0x00010bdeb880(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11274273c;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(long *)(param_1 + lVar20) = lVar21;
  _objc_release(uVar19);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar20));
  puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = *(long *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf493a0(lVar1,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  lStack_88 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar11,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar19);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  ___stack_chk_fail();
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_new();
  uVar19 = *(undefined8 *)(lVar1 + _DAT_112742724);
  *(undefined **)(lVar1 + _DAT_112742724) = puVar11;
  _objc_release(uVar19);
  puVar11 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112742734;
  uVar19 = *(undefined8 *)(lVar1 + lVar21);
  *(undefined **)(lVar1 + lVar21) = puVar11;
  _objc_release(uVar19);
  func_0x00010c21acc0(*(undefined8 *)(lVar1 + lVar21),param_2,
                      *(undefined8 *)PTR__kCAGradientLayerConic_110346d08);
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fef9f9f9f9f9fa0,0x3fe8d8d8d8d8d8d9,0x3fe9f9f9f9f9f9fa,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar11;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_188 = puVar10;
  func_0x00010bf41620(0x3feededededededf,0x3fdc1c1c1c1c1c1c,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_180 = puVar10;
  func_0x00010bf41620(0x3fd0909090909091,0x3fe9d9d9d9d9d9da,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar13;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_178 = puVar10;
  func_0x00010bf41620(0x3fb9191919191919,0x3fecdcdcdcdcdcdd,0x3fec1c1c1c1c1c1c,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar14;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_170 = puVar10;
  func_0x00010bf41620(0x3ff0000000000000,0x3fee5e5e5e5e5e5e,0x3fe7171717171717,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar15;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_168 = puVar10;
  func_0x00010bf41620(0x3ff0000000000000,0x3fee5e5e5e5e5e5e,0x3fe7171717171717,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar16;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_160 = puVar10;
  func_0x00010bf41620(0x3fef9f9f9f9f9fa0,0x3fe8d8d8d8d8d8d9,0x3fe9f9f9f9f9f9fa,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar17;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_158 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_188,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(lVar1 + lVar21),param_2,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  func_0x00010c1bff00(*(undefined8 *)(lVar1 + lVar21),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180218);
  func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(lVar1 + lVar21));
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)(lVar1 + lVar21));
  puVar11 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112742738;
  uVar19 = *(undefined8 *)(lVar1 + lVar21);
  *(undefined **)(lVar1 + lVar21) = puVar11;
  _objc_release(uVar19);
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0,0,0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar11;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1a8 = puVar10;
  func_0x00010bf41620(0,0,0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar15;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1a0 = puVar12;
  func_0x00010bf41620(0,0,0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_198 = puVar12;
  func_0x00010bf41620(0,0,0,0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar14;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_190 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(lVar1 + lVar21),param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar15);
  _objc_release(puVar11);
  func_0x00010c1bff00(*(undefined8 *)(lVar1 + lVar21),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180230);
  func_0x00010c209760(0x3fe0000000000000,0,*(undefined8 *)(lVar1 + lVar21));
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,*(undefined8 *)(lVar1 + lVar21));
  func_0x00010c1c2d20(*(undefined8 *)(lVar1 + lVar21),param_2,1);
  puVar11 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112742730;
  uVar19 = *(undefined8 *)(lVar1 + lVar21);
  *(undefined **)(lVar1 + lVar21) = puVar11;
  _objc_release(uVar19);
  puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0,0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar15;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1c8 = puVar11;
  func_0x00010bf41620(0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar14;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1c0 = puVar11;
  func_0x00010bf41620(0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar13;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1b8 = puVar11;
  func_0x00010bf41620(0,0,0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(lVar1 + lVar21),param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar15);
  func_0x00010c1bff00(*(undefined8 *)(lVar1 + lVar21),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180248);
  func_0x00010c209760(0,0x3fe0000000000000,*(undefined8 *)(lVar1 + lVar21));
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)(lVar1 + lVar21));
  lVar21 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar21);
  lVar21 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar21);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return lVar1;
  }
  ___stack_chk_fail();
  return 3;
}



/* Entry: 1061d5524; end: 1061d5bb7; -[SCLensOverlayCTA _renderExclusiveLensCTAOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061d5524(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
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
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112742724);
  *(undefined **)(param_1 + _DAT_112742724) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112742734;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  func_0x00010c21acc0(*(undefined8 *)(param_1 + lVar11),param_2,
                      *(undefined8 *)PTR__kCAGradientLayerConic_110346d08);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fef9f9f9f9f9fa0,0x3fe8d8d8d8d8d8d9,0x3fe9f9f9f9f9f9fa,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_d8 = puVar2;
  func_0x00010bf41620(0x3feededededededf,0x3fdc1c1c1c1c1c1c,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_d0 = puVar2;
  func_0x00010bf41620(0x3fd0909090909091,0x3fe9d9d9d9d9d9da,0x3ff0000000000000,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_c8 = puVar2;
  func_0x00010bf41620(0x3fb9191919191919,0x3fecdcdcdcdcdcdd,0x3fec1c1c1c1c1c1c,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_c0 = puVar2;
  func_0x00010bf41620(0x3ff0000000000000,0x3fee5e5e5e5e5e5e,0x3fe7171717171717,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_b8 = puVar2;
  func_0x00010bf41620(0x3ff0000000000000,0x3fee5e5e5e5e5e5e,0x3fe7171717171717,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_b0 = puVar2;
  func_0x00010bf41620(0x3fef9f9f9f9f9fa0,0x3fe8d8d8d8d8d8d9,0x3fe9f9f9f9f9f9fa,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar11),param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c1bff00(*(undefined8 *)(param_1 + lVar11),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180218);
  func_0x00010c209760(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112742738;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0,0,0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_f8 = puVar2;
  func_0x00010bf41620(0,0,0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_f0 = puVar2;
  func_0x00010bf41620(0,0,0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_e8 = puVar2;
  func_0x00010bf41620(0,0,0,0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e0 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar11),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  func_0x00010c1bff00(*(undefined8 *)(param_1 + lVar11),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180230);
  func_0x00010c209760(0x3fe0000000000000,0,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1c2d20(*(undefined8 *)(param_1 + lVar11),param_2,1);
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112742730;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0,0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_118 = puVar1;
  func_0x00010bf41620(0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_110 = puVar1;
  func_0x00010bf41620(0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_108 = puVar1;
  func_0x00010bf41620(0,0,0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar11),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  func_0x00010c1bff00(*(undefined8 *)(param_1 + lVar11),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180248);
  func_0x00010c209760(0,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)(param_1 + lVar11));
  lVar11 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(lVar11);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_1;
  }
  ___stack_chk_fail();
  return 3;
}



/* Entry: 1061d5bb8; end: 1061d5bbf; -[SCLensOverlayCTA _sigButtonTypeForStyle:] */

undefined8 FUN_1061d5bb8(void)

{
  return 3;
}



/* Entry: 1061d5bc0; end: 1061d5c47; -[SCLensOverlayCTA _createButtonWithStyle:] */

void FUN_1061d5bc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bebbfa0();
  func_0x00010bf25cc0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 1) {
    func_0x00010c20eaa0(puVar1,param_2,6);
    func_0x00010c216380(puVar1,param_2,0xd5,0);
  }
  else if (param_3 == 0) {
    func_0x00010c20eaa0(puVar1,param_2,4);
  }
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061d5c48; end: 1061d5cd7; -[SCLensOverlayCTA .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d5c48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742730,0);
  _objc_storeStrong(param_1 + _DAT_112742738,0);
  _objc_storeStrong(param_1 + _DAT_112742734,0);
  _objc_storeStrong(param_1 + _DAT_11274272c,0);
  _objc_storeStrong(param_1 + _DAT_112742728,0);
  _objc_storeStrong(param_1 + _DAT_112742724,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274273c,0);
  return;
}



/* Entry: 1061d5cd8; end: 1061d5d4b; -[SCARBarOverlayActionHandler initWithARBar:] */

undefined1 * FUN_1061d5cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f03d8;
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



/* Entry: 1061d5d4c; end: 1061d5d4f; -[SCARBarOverlayActionHandler handleCaptureButtonTapped] */

void FUN_1061d5d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateCurrentARBarFeature_11254ec90);
  return;
}



/* Entry: 1061d5d50; end: 1061d5d53; -[SCARBarOverlayActionHandler handleOverlayCTATapped] */

void FUN_1061d5d50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateCurrentARBarFeature_11254ec90);
  return;
}



/* Entry: 1061d5d54; end: 1061d5d8b; -[SCARBarOverlayActionHandler _activateCurrentARBarFeature] */

void FUN_1061d5d54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d5d8c; end: 1061d5d97; -[SCARBarOverlayActionHandler .cxx_destruct] */

void FUN_1061d5d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061d5d98; end: 1061d5e63; -[SCFeatureLensExplorerBaseOverlay initWithLensCarouselManager:controller:uiUpdatesPerformer:] */

undefined1 *
FUN_1061d5d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f03e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d5e64; end: 1061d6257; -[SCFeatureLensExplorerBaseOverlay activate] */

void FUN_1061d5e64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061d6258;
    puStack_88 = &UNK_11084eff0;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c095ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1061d62cc;
    puStack_b0 = &UNK_110842c58;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bef0d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1061d631c;
    puStack_d8 = &UNK_110842a38;
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9cd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x1061d6374;
    puStack_100 = &UNK_1108485e8;
    _objc_copyWeak(auStack_f8,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf14540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_120,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  return;
}



/* Entry: 1061d6258; end: 1061d62cb;  */

void FUN_1061d6258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2b300(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d62cc; end: 1061d63ff;  */

void FUN_1061d62cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6c300(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061d6400; end: 1061d642f; -[SCFeatureLensExplorerBaseOverlay _onUpdatedLensOrder:] */

void FUN_1061d6400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d6430; end: 1061d6473; -[SCFeatureLensExplorerBaseOverlay configureWithContainerView:] */

void FUN_1061d6430(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  func_0x00010bf47d20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d6474; end: 1061d647b; -[SCFeatureLensExplorerBaseOverlay pointInsideActionableArea:] */

void FUN_1061d6474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pointInsideActionButton__11261e4f0);
  return;
}



/* Entry: 1061d647c; end: 1061d6483; -[SCFeatureLensExplorerBaseOverlay refresh] */

void FUN_1061d647c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleLensActivated__112568660,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1061d6484; end: 1061d648b; -[SCFeatureLensExplorerBaseOverlay updateActionButtonTitle:] */

void FUN_1061d6484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateActionButtonTitle__11267e700);
  return;
}



/* Entry: 1061d648c; end: 1061d65eb; -[SCFeatureLensExplorerBaseOverlay indexOfLensByLensId:] */

undefined8 FUN_1061d648c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar4 = 0xffffffffffffffff;
  if (lVar5 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0xffffffffffffffff;
    _objc_retain(param_3);
    func_0x00010bf97e80(lVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      _objc_release(uVar4);
      _objc_release(uVar1);
      puVar3 = puStack_58;
    }
    else {
      lVar5 = puStack_58[3];
      _objc_release(uVar4);
      _objc_release(uVar1);
      puVar3 = puStack_58;
      if (0 < lVar5) {
        puStack_58[3] = puStack_58[3] + -1;
      }
    }
    uVar4 = puVar3[3];
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1061d65ec; end: 1061d665f;  */

void FUN_1061d65ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1061d6660; end: 1061d6777; -[SCFeatureLensExplorerBaseOverlay _handleLensActivated:] */

void FUN_1061d6660(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  cVar1 = *(char *)(param_1 + 0x40);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar4 = param_1 + 0x48;
    _objc_loadWeakRetained();
    lVar2 = lVar4;
    func_0x00010c233860();
    *(char *)(param_1 + 0x40) = (char)lVar2;
    _objc_release(lVar4);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      lVar2 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010c29d740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c23ae60(*(undefined8 *)(param_1 + 0x20),param_2,lVar4);
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_3;
      _objc_release(uVar3);
      lVar2 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf72f40();
      _objc_release(lVar2);
      goto LAB_1061d6734;
    }
  }
  func_0x00010bfe1560(*(undefined8 *)(param_1 + 0x20));
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_1061d6734:
  _objc_release(lVar4);
  if (cVar1 != *(char *)(param_1 + 0x40)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c138440();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061d6778; end: 1061d67d3; -[SCFeatureLensExplorerBaseOverlay _handleCarouselActivationState:] */

void FUN_1061d6778(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 & 1) == 0) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c230d00();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_hide_1125d5f18);
      return;
    }
  }
  return;
}



/* Entry: 1061d67d4; end: 1061d67eb; -[SCFeatureLensExplorerBaseOverlay delegate] */

void FUN_1061d67d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d67ec; end: 1061d67f7; -[SCFeatureLensExplorerBaseOverlay setDelegate:] */

void FUN_1061d67ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1061d67f8; end: 1061d67ff; -[SCFeatureLensExplorerBaseOverlay isShown] */

undefined1 FUN_1061d67f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 1061d6800; end: 1061d686f; -[SCFeatureLensExplorerBaseOverlay .cxx_destruct] */

void FUN_1061d6800(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061d6870; end: 1061d69af; -[SCFeatureLensExplorerFromCarouselOverlayImpl initWithBaseOverlay:lensExplorerBadgeUsageTracking:cameraViewType:lensLogger:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1061d6870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f03e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112742778;
  }
  else {
    lVar3 = (long)_DAT_112742768;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274276c) = param_5;
    lVar3 = (long)_DAT_112742770;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742774;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112742778;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061d69b0; end: 1061d69bf; -[SCFeatureLensExplorerFromCarouselOverlayImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d69b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742778),PTR_s_activate_112599760);
  return;
}



/* Entry: 1061d69c0; end: 1061d69cf; -[SCFeatureLensExplorerFromCarouselOverlayImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d69c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf477d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742778),PTR_s_configureWithContainerView__1125af798);
  return;
}



/* Entry: 1061d69d0; end: 1061d69d7; -[SCFeatureLensExplorerFromCarouselOverlayImpl shouldShowForLens:] */

void FUN_1061d69d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isFeedLens_1125fa528);
  return;
}



/* Entry: 1061d69d8; end: 1061d69df; -[SCFeatureLensExplorerFromCarouselOverlayImpl shouldHideOnCarouselDeactivate] */

undefined8 FUN_1061d69d8(void)

{
  return 1;
}



/* Entry: 1061d69e0; end: 1061d6a3f; -[SCFeatureLensExplorerFromCarouselOverlayImpl viewModelForLens:] */

void FUN_1061d69e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8a58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0717e0(param_3);
  _objc_release(param_3);
  func_0x00010c00f700(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061d6a40; end: 1061d6abb; -[SCFeatureLensExplorerFromCarouselOverlayImpl didTapOverlayActionOverLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d6a40(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd1d60(*(undefined8 *)(param_1 + _DAT_112742774));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742768);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb660();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742770);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d6abc; end: 1061d6abf; -[SCFeatureLensExplorerFromCarouselOverlayImpl didTapOverlayBackground] */

void FUN_1061d6abc(void)

{
  return;
}



/* Entry: 1061d6ac0; end: 1061d6ac3; -[SCFeatureLensExplorerFromCarouselOverlayImpl didChangeActiveLens:] */

void FUN_1061d6ac0(void)

{
  return;
}



/* Entry: 1061d6ac4; end: 1061d6b13; -[SCFeatureLensExplorerFromCarouselOverlayImpl captureButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d6ac4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfd0780(*(undefined8 *)(param_1 + _DAT_112742774));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742768);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061d6b14; end: 1061d6b23; -[SCFeatureLensExplorerFromCarouselOverlayImpl pointInsideActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d6b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742778),PTR_s_pointInsideActionableArea__11261e4f8);
  return;
}



/* Entry: 1061d6b24; end: 1061d6b33; -[SCFeatureLensExplorerFromCarouselOverlayImpl cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061d6b24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274276c);
}



/* Entry: 1061d6b34; end: 1061d6b43; -[SCFeatureLensExplorerFromCarouselOverlayImpl setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061d6b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11274276c) = param_3;
  return;
}


