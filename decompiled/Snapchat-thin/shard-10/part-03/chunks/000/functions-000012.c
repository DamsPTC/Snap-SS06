/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d32858; end: 107d32893; -[SCContentOperaBoostProgressBarLayerView _viewedSegmentsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107d32858(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276ddcc);
  func_0x00010bf600e0(lVar1);
  return *(long *)(param_1 + _DAT_11276de40) + lVar1;
}



/* Entry: 107d32894; end: 107d3291b; -[SCContentOperaBoostProgressBarLayerView _singleProgressBarWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d32894(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11276ddb8));
  _CGRectGetWidth();
  lVar2 = (long)_DAT_11276ddcc;
  lVar1 = *(long *)(param_2 + lVar2);
  dVar3 = param_1;
  func_0x00010c276c00(lVar1);
  func_0x00010be82e80(param_2);
  dVar4 = *(double *)(param_2 + _DAT_11276ddb4);
  lVar2 = *(long *)(param_2 + lVar2);
  func_0x00010c276c00(lVar2);
  return ((param_1 - dVar3 * (double)(lVar1 + -1)) + dVar4 * -2.0) / (double)lVar2;
}



/* Entry: 107d3291c; end: 107d329db; -[SCContentOperaBoostProgressBarLayerView _progressBarLineSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d3291c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + _DAT_11276ddcc);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010c276c00();
  uVar2 = uVar3;
  if (0x50 < uVar1) {
    FUN_107d31184();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  uVar1 = uVar2;
  func_0x00010c276c00();
  uVar1 = (long)uVar1 / 10;
  if (1 < (long)uVar1) {
    uVar1 = 2;
  }
  _objc_release(uVar2);
  return (double)(8L >> (uVar1 & 0x3f)) + *(double *)(param_1 + _DAT_11276ddb4) * 2.0;
}



/* Entry: 107d329dc; end: 107d32a5f; -[SCContentOperaBoostProgressBarLayerView _startXPositionForMovingProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d329dc(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bebc320();
  lVar1 = param_2;
  func_0x00010bee9ee0(param_2);
  dVar2 = (double)lVar1;
  param_1 = param_1 * dVar2;
  func_0x00010be82e80(param_2);
  lVar1 = param_2;
  func_0x00010bee9ee0(param_2);
  dVar3 = (double)lVar1;
  dVar2 = dVar2 * dVar3;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11276ddb8));
  _CGRectGetMinX();
  return (dVar2 + param_1 + dVar3) - *(double *)(param_2 + _DAT_11276ddb4);
}



/* Entry: 107d32a60; end: 107d32ab3; -[SCContentOperaBoostProgressBarLayerView _formatTimeInterval:] */

void FUN_107d32a60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc44b8);
  return;
}



/* Entry: 107d32ab4; end: 107d32b93; -[SCContentOperaBoostProgressBarLayerView setScrubbingStateWithSeekingTimeMs:maxDurationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d32ab4(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_3 + _DAT_11276de24) == '\x01') {
    func_0x00010bede0a0(param_1 / param_2);
    lVar1 = param_3;
    func_0x00010be18b80(param_2 / 1000.0,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (*(double *)(param_3 + _DAT_11276ddd0) == 1.0) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    else {
      lVar2 = param_3;
      func_0x00010be18b80(param_1 / 1000.0,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1b7340(*(undefined8 *)(param_3 + _DAT_11276de30),param_4,lVar2,lVar1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107d32b94; end: 107d32c3f; -[SCContentOperaBoostProgressBarLayerView _updateLineWidth:rounded:] */

/* WARNING: Possible PIC construction at 0x000107d32c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d32c20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d32b94(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11276ddb0;
  *(double *)(param_2 + lVar2) = param_1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276ddb8);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(uVar1);
  dVar3 = 0.0;
  if ((param_4 & 1) == 0) {
    dVar3 = *(double *)(param_2 + lVar2) * 0.5;
  }
  *(double *)(param_2 + _DAT_11276ddb4) = dVar3;
                    /* WARNING: Could not recover jumptable at 0x00010c1bdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar2),*(undefined8 *)(param_2 + _DAT_11276ddbc),
             PTR_s_setLineWidth__11264d168);
  return;
}



/* Entry: 107d32c40; end: 107d32d4b; -[SCContentOperaBoostProgressBarLayerView hideScrubbingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d32c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_4 + _DAT_11276de24) == '\x01') {
    *(undefined1 *)(param_4 + _DAT_11276de44) = 0;
    lVar1 = *(long *)(param_4 + _DAT_11276de58);
    _objc_retain(lVar1);
    if (((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c252440(), lVar2 == 1)) &&
       (lVar2 = lVar1, func_0x00010c075c40(), (int)lVar2 != 0)) {
      func_0x00010c2559c0(lVar1);
    }
    _objc_release(lVar1);
    lVar1 = (long)_DAT_11276ddb8;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
    uVar3 = param_1;
    func_0x00010be82ec0(param_4);
    lVar2 = (long)_DAT_11276ddac;
    func_0x00010c19f0e0(param_1,uVar3,param_3,*(undefined8 *)(param_4 + lVar2),
                        *(undefined8 *)(param_4 + lVar1));
    lVar1 = (long)_DAT_11276de20;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar1));
    func_0x00010c1677c0(0,*(undefined8 *)(param_4 + _DAT_11276de30));
                    /* WARNING: Could not recover jumptable at 0x00010bedac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_4 + lVar2),param_4,PTR_s__updateLineWidth_rounded__1125944c8,1)
    ;
    return;
  }
  return;
}



/* Entry: 107d32d4c; end: 107d32d9f; -[SCContentOperaBoostProgressBarLayerView updateProgressBarHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d32d4c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276ddac) = param_1;
  *(undefined8 *)(param_2 + _DAT_11276ddb0) = param_1;
  func_0x00010c1393a0();
  if ((*(byte *)(param_2 + _DAT_11276de44) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hideScrubbingView_1125d63a8);
  return;
}



/* Entry: 107d32da0; end: 107d32fcf; -[SCContentOperaBoostProgressBarLayerView showScrubberView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d32da0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_90 [8];
  double dStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (*(char *)(param_4 + _DAT_11276de24) == '\x01') {
    lVar5 = (long)_DAT_11276de58;
    lVar4 = *(long *)(param_4 + lVar5);
    _objc_retain(lVar4);
    if (((lVar4 != 0) && (lVar6 = lVar4, func_0x00010c252440(), lVar6 == 1)) &&
       (lVar6 = lVar4, func_0x00010c075c40(), (int)lVar6 != 0)) {
      func_0x00010c2559c0(lVar4);
    }
    _objc_release(lVar4);
    lVar6 = (long)_DAT_11276de48;
    lVar4 = *(long *)(param_4 + lVar6);
    _objc_retain(lVar4);
    if (((lVar4 != 0) && (lVar1 = lVar4, func_0x00010c252440(), lVar1 == 1)) &&
       (lVar1 = lVar4, func_0x00010c075c40(), (int)lVar1 != 0)) {
      func_0x00010c2559c0(lVar4);
    }
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)(param_4 + lVar6);
    *(undefined8 *)(param_4 + lVar6) = 0;
    _objc_release(uVar2);
    func_0x00010c0f5fa0(param_4);
    *(undefined1 *)(param_4 + _DAT_11276de44) = 1;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_11276ddb8));
    dVar7 = param_1;
    func_0x00010be82ec0(param_4);
    dVar8 = *(double *)(param_4 + _DAT_11276ddac);
    lVar4 = (long)_DAT_11276de20;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar4));
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar4));
    uVar2 = *(undefined8 *)(param_4 + _DAT_11276de2c);
    _objc_initWeak(auStack_68,param_4);
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    _objc_copyWeak(auStack_90,auStack_68);
    uStack_70 = 0x4030000000000000;
    dStack_88 = param_1;
    dStack_80 = dVar7 + -16.0 + dVar8;
    uStack_78 = param_3;
    func_0x00010c00ea00(uVar2);
    uVar2 = *(undefined8 *)(param_4 + lVar5);
    *(undefined **)(param_4 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c24dc40(*(undefined8 *)(param_4 + lVar5));
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 107d32fd0; end: 107d33043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d32fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar1 + _DAT_11276de30));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(lVar1 + _DAT_11276ddb8));
    func_0x00010bedac80(0x4030000000000000,lVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d33044; end: 107d3315f; -[SCContentOperaBoostProgressBarLayerView highlightProgressBarWithColor:progressBarHeight:animationDuration:] */

void FUN_107d33044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  uStack_50 = param_1;
  func_0x00010c00ea00(param_2,puVar1);
  func_0x00010c24dc40();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 107d33160; end: 107d331bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33160(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c16e440(*(undefined8 *)(lVar1 + _DAT_11276de20),param_2,
                        *(undefined8 *)(param_1 + 0x20));
    func_0x00010bedac80(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,1);
    func_0x00010c08d140(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d331bc; end: 107d3329b; -[SCContentOperaBoostProgressBarLayerView resetProgressBarHighlightWithAnimationDuration:] */

void FUN_107d331bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  puVar1 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c00ea00(param_1,puVar1);
  func_0x00010c24dc40();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107d3329c; end: 107d332cf;  */

void FUN_107d3329c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1393a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d332d0; end: 107d33363; -[SCContentOperaBoostProgressBarLayerView resetProgressBarHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d332d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_11276de14);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276de20),param_2,puVar1);
  func_0x00010bedac80(*(undefined8 *)(param_1 + _DAT_11276ddac),param_1,param_2,1);
  func_0x00010c08d140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d33364; end: 107d3337b; -[SCContentOperaBoostProgressBarLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d33364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276de50);
}



/* Entry: 107d3337c; end: 107d33393; -[SCContentOperaBoostProgressBarLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3337c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276de50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107d33394; end: 107d333a3; -[SCContentOperaBoostProgressBarLayerView pageBottomSafeAreaHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d33394(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276dda8);
}



/* Entry: 107d333a4; end: 107d333b3; -[SCContentOperaBoostProgressBarLayerView setPageBottomSafeAreaHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d333a4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276dda8) = param_1;
  return;
}



/* Entry: 107d333b4; end: 107d333c3; -[SCContentOperaBoostProgressBarLayerView isMixedFeedViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d333b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276de54);
}



/* Entry: 107d333c4; end: 107d333d3; -[SCContentOperaBoostProgressBarLayerView setIsMixedFeedViewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d333c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276de54) = param_3;
  return;
}



/* Entry: 107d333d4; end: 107d333e3; -[SCContentOperaBoostProgressBarLayerView decoupleContextLayerFromAppFooter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d333d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276de4c);
}



/* Entry: 107d333e4; end: 107d333f3; -[SCContentOperaBoostProgressBarLayerView setDecoupleContextLayerFromAppFooter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d333e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276de4c) = param_3;
  return;
}



/* Entry: 107d333f4; end: 107d33403; -[SCContentOperaBoostProgressBarLayerView isProgressBarAlignedToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d333f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276dddc);
}



/* Entry: 107d33404; end: 107d33413; -[SCContentOperaBoostProgressBarLayerView setIsProgressBarAlignedToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33404(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276dddc) = param_3;
  return;
}



/* Entry: 107d33414; end: 107d33423; -[SCContentOperaBoostProgressBarLayerView alwaysUseTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d33414(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276dde0);
}



/* Entry: 107d33424; end: 107d33433; -[SCContentOperaBoostProgressBarLayerView setAlwaysUseTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33424(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276dde0) = param_3;
  return;
}



/* Entry: 107d33434; end: 107d33523; -[SCContentOperaBoostProgressBarLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33434(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276de1c,0);
  _objc_storeStrong(param_1 + _DAT_11276de18,0);
  _objc_storeStrong(param_1 + _DAT_11276de0c,0);
  _objc_storeStrong(param_1 + _DAT_11276de58,0);
  _objc_storeStrong(param_1 + _DAT_11276de14,0);
  _objc_storeStrong(param_1 + _DAT_11276de10,0);
  _objc_storeStrong(param_1 + _DAT_11276de30,0);
  _objc_storeStrong(param_1 + _DAT_11276de48,0);
  _objc_storeStrong(param_1 + _DAT_11276ddc0,0);
  _objc_storeStrong(param_1 + _DAT_11276ddbc,0);
  _objc_storeStrong(param_1 + _DAT_11276de20,0);
  _objc_storeStrong(param_1 + _DAT_11276ddb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ddcc,0);
  return;
}



/* Entry: 107d33524; end: 107d3366b; -[SCContentOperaBoostProgressBarLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d33524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126faaf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11276de5c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276de60;
    *(undefined8 *)((long)puVar1 + lVar7) = 0x4000000000000000;
    lVar8 = *(long *)((long)puVar1 + lVar8);
    if (lVar8 != 0) {
      func_0x00010c067f00();
      *(double *)((long)puVar1 + lVar7) = (double)(int)lVar8;
    }
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf99b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010be89fa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107d3366c; end: 107d33813; -[SCContentOperaBoostProgressBarLayerViewController setupPlaybackProgressUpdateTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3366c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126faaf0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setupPlaybackProgressUpdateTrack_112667e70,param_3);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f3c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_1;
    func_0x00010c117a40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1005e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar3 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276de64);
    *(long *)(param_1 + _DAT_11276de64) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107d33814; end: 107d3385b;  */

void FUN_107d33814(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede060();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d3385c; end: 107d3386b; -[SCContentOperaBoostProgressBarLayerViewController delloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3385c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276de64),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 107d3386c; end: 107d33a4b; -[SCContentOperaBoostProgressBarLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3386c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11276de5c;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010c0b84a0(lVar1,param_3,&PTR____CFConstantStringClassReference_110eb9818,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c296d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126d7978;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf203e0();
  uVar4 = 0x3ff0000000000000;
  if ((int)lVar7 != 0) {
    func_0x00010bdd5440(param_2);
    uVar4 = param_1;
  }
  func_0x00010c014b40(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar4,puVar3,param_3,lVar5);
  lVar7 = (long)_DAT_11276de68;
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  *(undefined **)(param_2 + lVar7) = puVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  lVar5 = param_2;
  func_0x00010c08c520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_2 + lVar7));
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c08c520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0c40();
  func_0x00010c1d7f00(*(undefined8 *)(param_2 + lVar7));
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bf46560(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c29d360();
  func_0x00010c1b2920(*(undefined8 *)(param_2 + lVar7),param_3,lVar2 == 0x62);
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  func_0x000108f4afac(uVar4);
  func_0x00010c18a520(*(undefined8 *)(param_2 + lVar7),param_3,uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227960(0x3ff0000000000000);
  _objc_release(uVar4);
  func_0x00010c222380(param_2,param_3,*(undefined8 *)(param_2 + lVar7));
  func_0x00010c1e4720(*(undefined8 *)(param_2 + _DAT_11276de6c),param_3,
                      *(undefined8 *)(param_2 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d33a4c; end: 107d33c7b; -[SCContentOperaBoostProgressBarLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33a4c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126faaf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269780();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + (long)_DAT_11276de68));
  }
  lVar4 = (long)_DAT_11276de70;
  dVar6 = *(double *)(param_1 + lVar4);
  if (0.0 < dVar6) {
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c282880();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11276de68);
      dVar8 = *(double *)(param_1 + lVar4);
    }
    else {
      uVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282900();
      if (dVar6 <= 0.0) {
        dVar8 = *(double *)(param_1 + lVar4);
        dVar7 = dVar6;
      }
      else {
        uVar2 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282900();
        dVar7 = dVar6;
        _objc_release(uVar2);
        dVar8 = dVar6;
      }
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282840();
      _objc_release(uVar1);
      if ((0.0 < dVar7) && (0.0 < dVar8)) {
        dVar6 = 1.0;
        if (dVar7 / dVar8 <= 1.0) {
          dVar6 = dVar7 / dVar8;
        }
        func_0x00010c288d80(dVar6,dVar8 / 1000.0,*(undefined8 *)(param_1 + (long)_DAT_11276de68));
        *(double *)(param_1 + (long)_DAT_11276de74) = dVar7;
        goto LAB_107d33c0c;
      }
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11276de68);
    }
    func_0x00010c288d80(0,dVar8 / 1000.0,uVar3);
  }
LAB_107d33c0c:
  lVar5 = (long)_DAT_11276de74;
  if (0.0 < *(double *)(param_1 + lVar5)) {
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf203e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010bede0c0(*(undefined8 *)(param_1 + lVar5),*(undefined8 *)(param_1 + lVar4),param_1)
      ;
    }
  }
  func_0x00010bed3ee0(param_1);
  return;
}



/* Entry: 107d33c7c; end: 107d33d57; -[SCContentOperaBoostProgressBarLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33c7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126faaf0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidFullyAppear_112684c88);
  *(undefined1 *)(param_1 + _DAT_11276de78) = 1;
  *(undefined1 *)(param_1 + _DAT_11276de7c) = 1;
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + _DAT_11276de80) = (char)lVar4;
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c239640(*(undefined8 *)(param_1 + _DAT_11276de68));
  return;
}



/* Entry: 107d33d58; end: 107d33e5b; -[SCContentOperaBoostProgressBarLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33d58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126faaf0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_11276de78) = 0;
  *(undefined1 *)(param_1 + _DAT_11276de7c) = 1;
  lVar4 = (long)_DAT_11276de68;
  func_0x00010c1393e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bfe27a0(*(undefined8 *)(param_1 + lVar4));
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c282880();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010c1393c0(0x3fceb851eb851eb8,*(undefined8 *)(param_1 + lVar4));
  }
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf11820();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  }
  return;
}



/* Entry: 107d33e5c; end: 107d34097; -[SCContentOperaBoostProgressBarLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d33e5c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b3b00;
  _objc_opt_class(PTR_PTR_1126b3b00);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b3b00;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar3 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(param_1 + _DAT_11276de70) = 0;
  if ((((uVar1 == 0) || (uVar4 = param_3, func_0x00010c282880(), (int)uVar4 == 0)) || (uVar3 == 0))
     || ((uVar4 = param_4, func_0x00010c282880(), (int)uVar4 == 0 ||
         (uVar4 = param_4, func_0x00010c2828a0(), (int)uVar4 != 0)))) {
    uVar4 = uVar3;
    func_0x00010c2828a0();
    if ((int)uVar4 == 0) {
      uVar4 = uVar1;
      func_0x00010c282880();
      if (((int)uVar4 != 0) && (uVar4 = uVar3, func_0x00010c282880(), (uVar4 & 1) == 0)) {
        func_0x00010c1393c0(0x3fceb851eb851eb8,*(undefined8 *)(param_1 + _DAT_11276de68));
      }
      lVar5 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da1c0();
      _objc_release(lVar5);
      lVar8 = (long)_DAT_11276de68;
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      lVar5 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beede60();
      func_0x00010c229920(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar2 = PTR_PTR_1126b2340;
      lVar5 = param_1;
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079440();
      if (((ulong)puVar2 & 1) == 0) {
        func_0x00010c230d40(uVar3);
      }
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276de68));
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d34098; end: 107d340ab; -[SCContentOperaBoostProgressBarLayerViewController setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d34098(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276de84,param_3);
  return;
}



/* Entry: 107d340ac; end: 107d34157; -[SCContentOperaBoostProgressBarLayerViewController _scrubbingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107d340ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_1 + _DAT_11276de70);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c276c00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf203e0();
  _objc_release(param_1);
  return (uint)(60.0 <= dVar4 && lVar3 == 1) & (uint)lVar1;
}



/* Entry: 107d34158; end: 107d341c7; -[SCContentOperaBoostProgressBarLayerViewController _updateBarThicknessIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d34158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf203e0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276de68);
    func_0x00010bdd5440(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c288db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_updateProgressBarHeight__11267fd90);
    return;
  }
  return;
}



/* Entry: 107d341c8; end: 107d342db; -[SCContentOperaBoostProgressBarLayerViewController _initializeScrubGestureIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d341c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1;
  func_0x00010be9c360();
  if (((int)lVar5 != 0) && (lVar5 = (long)_DAT_11276de6c, *(long *)(param_1 + lVar5) != 0)) {
    lVar6 = (long)_DAT_11276de84;
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 != lVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c29bf00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c9c0();
      _objc_release(uVar3);
      lVar1 = param_1 + lVar6;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 != 0) {
        puVar4 = PTR_PTR_1126d7980;
        _objc_alloc();
        func_0x00010c03b400();
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        *(undefined **)(param_1 + lVar5) = puVar4;
        _objc_release(uVar3);
        param_1 = param_1 + lVar6;
        _objc_loadWeakRetained(param_1);
        func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 107d342dc; end: 107d3437b; -[SCContentOperaBoostProgressBarLayerViewController _bottomBarThickness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d342dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + _DAT_11276de5c);
  if (uVar3 != 0) {
    puVar1 = PTR_PTR_1126c93e0;
    func_0x00010c152ee0(PTR_PTR_1126c93e0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067f00(uVar3,param_2,puVar2,0xffffffff,0);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (0 < (int)uVar3) {
      return (double)(uVar3 & 0xffffffff);
    }
  }
  return *(double *)(param_1 + _DAT_11276de60);
}



/* Entry: 107d3437c; end: 107d343db; -[SCContentOperaBoostProgressBarLayerViewController boostScrubberControlGestureDidStartDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3437c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c239ba0(*(undefined8 *)(param_1 + _DAT_11276de68));
  func_0x00010be7fbc0(param_1,param_2,1);
  puVar1 = PTR_PTR_1126c9400;
  func_0x00010c2999c0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d343dc; end: 107d343ef; -[SCContentOperaBoostProgressBarLayerViewController boostScrubberControlGesture:draggingContinuedToOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d343dc(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * *(double *)(param_2 + _DAT_11276de70),param_2,
             PTR_s__updateScrubberLabelTimestamp__1125955d0);
  return;
}



/* Entry: 107d343f0; end: 107d34553; -[SCContentOperaBoostProgressBarLayerViewController boostScrubberControlGesture:didFinishDraggingToOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d343f0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfe27a0(*(undefined8 *)(param_2 + _DAT_11276de68));
  func_0x00010be7fbc0(param_2,param_3,0);
  dVar5 = *(double *)(param_2 + _DAT_11276de70);
  lVar1 = param_2;
  func_0x00010c118dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010c157340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar2;
  func_0x00010c0df720(param_1 * dVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_60,&puStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(lVar1,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c2999a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_2,param_3,puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfe27a0(*(undefined8 *)(puVar2 + _DAT_11276de68));
  func_0x00010be7fbc0(puVar2,param_3,0);
  puVar3 = PTR_PTR_1126c9400;
  func_0x00010c2999a0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(puVar2,param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107d34554; end: 107d345b3; -[SCContentOperaBoostProgressBarLayerViewController boostScrubberControlGestureWasCanceled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d34554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bfe27a0(*(undefined8 *)(param_1 + _DAT_11276de68));
  func_0x00010be7fbc0(param_1,param_2,0);
  puVar1 = PTR_PTR_1126c9400;
  func_0x00010c2999a0(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d345b4; end: 107d34687; -[SCContentOperaBoostProgressBarLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d345b4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276de68));
  return;
}



/* Entry: 107d34688; end: 107d34703; -[SCContentOperaBoostProgressBarLayerViewController pageDidChangeResizingState:] */

/* WARNING: Possible PIC construction at 0x000107d346e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d346e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d34688(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    uVar1 = *(undefined1 *)(param_1 + _DAT_11276de88);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276de68);
  }
  else {
    lVar3 = (long)_DAT_11276de68;
    uVar1 = (undefined1)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c074c20();
    *(undefined1 *)(param_1 + _DAT_11276de88) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setHidden__1126479f8,uVar1);
  return;
}



/* Entry: 107d34704; end: 107d3488f; -[SCContentOperaBoostProgressBarLayerViewController boostScrubberControlGestureShouldRecognize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107d34704(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar15 = *(double *)(param_1 + _DAT_11276de70);
  if (dVar15 < 60.0) {
LAB_107d347e4:
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0c418;
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccb98;
    pppuVar10 = &ppuStack_58;
    uVar11 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf7e940(param_1);
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar14 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar14;
    func_0x00010c158200();
    _objc_release(lVar14);
    if (lVar1 != 1) goto LAB_107d347e4;
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_48 = &PTR____CFConstantStringClassReference_110f0c418;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccb80;
    puVar12 = (undefined *)0x1;
    pppuVar10 = &ppuStack_48;
    uVar11 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf7e940(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(pppuVar10);
  _objc_retain(uVar11);
  puVar2 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar12 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
    goto LAB_107d34cdc;
  }
  if (*(char *)(param_3 + (long)_DAT_11276de78) != '\x01') goto LAB_107d34cdc;
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c29aaa0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar12 != 0) {
    uVar7 = param_3;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    lVar14 = (long)_DAT_11276de80;
    if ((*(char *)(param_3 + lVar14) == '\x01') && ((uVar3 & 1) == 0)) {
      dVar15 = 0.24;
      func_0x00010c1393c0(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
    }
    *(char *)(param_3 + lVar14) = (char)uVar3;
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bf8b340(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010c0e00e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar14 = (long)_DAT_11276de70;
    *(double *)(param_3 + lVar14) = dVar15;
    _objc_release(uVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010c0e00e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar18 = dVar15;
    _objc_release(uVar7);
    _objc_release(puVar2);
    uVar7 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282900();
    dVar16 = dVar18;
    _objc_release(uVar7);
    dVar17 = dVar16;
    if (0.0 < dVar18) {
      dVar18 = *(double *)(param_3 + lVar14);
      uVar7 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282900();
      dVar17 = dVar16;
      _objc_release(uVar7);
      if (dVar18 != dVar16) {
        uVar7 = param_3;
        func_0x00010c08c0e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282900();
        *(double *)(param_3 + lVar14) = dVar17;
        _objc_release(uVar7);
      }
    }
    uVar7 = param_3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c282880();
    _objc_release(uVar7);
    if ((int)uVar8 != 0) {
      func_0x00010c13d680(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
      uVar7 = param_3;
      func_0x00010c08c0e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282840();
      dVar18 = dVar17;
      _objc_release(uVar7);
      if (0.0 <= dVar17) {
        uVar7 = param_3;
        func_0x00010c08c0e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282840();
        dVar15 = dVar15 + dVar18;
        _objc_release(uVar7);
      }
      else {
        dVar15 = *(double *)(param_3 + lVar14);
      }
    }
    func_0x00010bede0c0(dVar15,*(undefined8 *)(param_3 + lVar14),param_3);
    func_0x00010be3ba60(param_3);
    goto LAB_107d34cdc;
  }
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c157400(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar12 == 0) {
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010c0720c0();
    if ((int)puVar12 == 0) {
      puVar12 = PTR_PTR_1126b2ea8;
      func_0x00010c235940(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c0720c0();
      _objc_release(puVar12);
      _objc_release(puVar2);
      if ((int)puVar4 == 0) {
        puVar2 = PTR_PTR_1126b2638;
        func_0x00010c0f5e80(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar5;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar12 == 0) {
          puVar2 = PTR_PTR_1126b2638;
          func_0x00010c13d5c0(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar12 != 0) {
LAB_107d34d4c:
            func_0x00010c13d680(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
            goto LAB_107d34cdc;
          }
          puVar2 = puVar5;
          func_0x00010c0720c0();
          if ((int)puVar2 != 0) {
            puVar2 = PTR_PTR_1126b2348;
            func_0x00010bf8b340(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar11;
            func_0x00010c0e00e0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            _objc_release(uVar7);
            _objc_release(puVar2);
            *(undefined1 *)(param_3 + (long)_DAT_11276de7c) = 1;
            func_0x00010bede0c0(0,dVar15,param_3);
            goto LAB_107d34cdc;
          }
          puVar2 = PTR_PTR_1126c9400;
          func_0x00010c2999c0(PTR_PTR_1126c9400);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar5;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar12 == 0) {
            puVar2 = PTR_PTR_1126c9400;
            func_0x00010c2999e0(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar5;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)puVar12 == 0) {
              puVar2 = PTR_PTR_1126c9400;
              func_0x00010c2999a0(PTR_PTR_1126c9400);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar5;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)puVar12 != 0) {
                func_0x00010bfe27a0(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
                goto LAB_107d34e2c;
              }
              puVar2 = PTR_PTR_1126c9460;
              func_0x00010c29ae40(PTR_PTR_1126c9460);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar5;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)puVar12 != 0) {
                puVar2 = PTR_PTR_1126b2348;
                func_0x00010bf5fb40(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar11;
                func_0x00010c0e00e0(uVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                dVar18 = dVar15;
                _objc_release(uVar7);
                _objc_release(puVar2);
                uVar7 = param_3;
                func_0x00010c08c0e0(param_3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1582a0();
                _objc_release(uVar7);
                _objc_initWeak(auStack_e8,param_3);
                puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_110 = 0xc2000000;
                pcStack_108 = FUN_107d3516c;
                puStack_100 = &UNK_110846540;
                _objc_copyWeak(auStack_f8,auStack_e8);
                lStack_f0 = (long)((dVar15 / dVar18) / 1000.0);
                func_0x000100162d98("APPSTORE",&puStack_118);
                _objc_destroyWeak(auStack_f8);
                _objc_destroyWeak(auStack_e8);
                goto LAB_107d34cdc;
              }
              puVar2 = PTR_PTR_1126b2638;
              func_0x00010c2a59e0(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar5;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)puVar12 != 0) {
                pppuVar6 = pppuVar10;
                func_0x00010c264ee0();
                if (((ulong)pppuVar6 & 1) == 0) {
                  func_0x00010c0f5fa0(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
                }
                goto LAB_107d34cdc;
              }
              puVar2 = PTR_PTR_1126b2638;
              func_0x00010bf75b40(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar5;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)puVar12 != 0) goto LAB_107d34d4c;
              puVar2 = PTR_PTR_1126b2338;
              func_0x00010c282960(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar5;
              func_0x00010c0720c0();
              if (((ulong)puVar12 & 1) != 0) {
                uVar7 = param_3;
                func_0x00010c08c0e0();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010c282880();
                if ((uVar8 & 1) != 0) {
                  uVar8 = param_3;
                  func_0x00010c08c0e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar9 = uVar8;
                  func_0x00010c23df60();
                  _objc_release(uVar8);
                  _objc_release(uVar7);
                  _objc_release(puVar2);
                  if ((int)uVar9 == 0) goto LAB_107d34cdc;
                  uVar13 = *(undefined8 *)(param_3 + (long)_DAT_11276de68);
                  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfe3280(0x4010000000000000,0x3fceb851eb851eb8,uVar13);
                  _objc_release(puVar2);
                  goto LAB_107d34cd4;
                }
                goto LAB_107d34ea0;
              }
            }
            else {
              puVar2 = PTR_PTR_1126c9408;
              func_0x00010c157360(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar11;
              func_0x00010c0e00e0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              func_0x00010bedf0a0(param_3);
LAB_107d34ea0:
              _objc_release(uVar7);
            }
            _objc_release(puVar2);
          }
          else {
            func_0x00010c239ba0(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
LAB_107d34e2c:
            func_0x00010be7fbc0(param_3);
          }
          goto LAB_107d34cdc;
        }
      }
    }
    else {
      _objc_release(puVar2);
    }
    func_0x00010c0f5fa0(*(undefined8 *)(param_3 + (long)_DAT_11276de68));
  }
  else {
    lVar14 = (long)_DAT_11276de68;
    func_0x00010c27fc20(*(undefined8 *)(param_3 + lVar14));
    func_0x00010c239640(*(undefined8 *)(param_3 + lVar14));
  }
LAB_107d34cd4:
  *(undefined1 *)(param_3 + (long)_DAT_11276de7c) = 1;
LAB_107d34cdc:
  _objc_release(uVar11);
  _objc_release(pppuVar10);
  _objc_release(puVar5);
  return puVar5;
}



/* Entry: 107d34890; end: 107d3516b; -[SCContentOperaBoostProgressBarLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d34890(double param_1,ulong param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 auStack_88 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
    goto LAB_107d34cdc;
  }
  if (*(char *)(param_2 + (long)_DAT_11276de78) != '\x01') goto LAB_107d34cdc;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c29aaa0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    uVar2 = param_2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf1f3c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11276de80;
    if ((*(char *)(param_2 + lVar8) == '\x01') && ((uVar3 & 1) == 0)) {
      param_1 = 0.24;
      func_0x00010c1393c0(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
    }
    *(char *)(param_2 + lVar8) = (char)uVar3;
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf8b340(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    lVar8 = (long)_DAT_11276de70;
    *(double *)(param_2 + lVar8) = param_1;
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010bf5fb40(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    func_0x00010c0e00e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar11 = param_1;
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282900();
    dVar9 = dVar11;
    _objc_release(uVar2);
    dVar10 = dVar9;
    if (0.0 < dVar11) {
      dVar11 = *(double *)(param_2 + lVar8);
      uVar2 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282900();
      dVar10 = dVar9;
      _objc_release(uVar2);
      if (dVar11 != dVar9) {
        uVar2 = param_2;
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282900();
        *(double *)(param_2 + lVar8) = dVar10;
        _objc_release(uVar2);
      }
    }
    uVar2 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c282880();
    _objc_release(uVar2);
    if ((int)uVar5 != 0) {
      func_0x00010c13d680(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
      uVar2 = param_2;
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282840();
      dVar11 = dVar10;
      _objc_release(uVar2);
      if (0.0 <= dVar10) {
        uVar2 = param_2;
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282840();
        param_1 = param_1 + dVar11;
        _objc_release(uVar2);
      }
      else {
        param_1 = *(double *)(param_2 + lVar8);
      }
    }
    func_0x00010bede0c0(param_1,*(undefined8 *)(param_2 + lVar8),param_2);
    func_0x00010be3ba60(param_2);
    goto LAB_107d34cdc;
  }
  puVar1 = PTR_PTR_1126c9400;
  func_0x00010c157400(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      puVar4 = PTR_PTR_1126b2ea8;
      func_0x00010c235940(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126b2638;
        func_0x00010c0f5e80(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)uVar2 == 0) {
          puVar1 = PTR_PTR_1126b2638;
          func_0x00010c13d5c0(PTR_PTR_1126b2638);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)uVar2 != 0) {
LAB_107d34d4c:
            func_0x00010c13d680(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
            goto LAB_107d34cdc;
          }
          uVar2 = param_4;
          func_0x00010c0720c0();
          if ((int)uVar2 != 0) {
            puVar1 = PTR_PTR_1126b2348;
            func_0x00010bf8b340(PTR_PTR_1126b2348);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_6;
            func_0x00010c0e00e0(param_6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf885a0();
            _objc_release(uVar2);
            _objc_release(puVar1);
            *(undefined1 *)(param_2 + (long)_DAT_11276de7c) = 1;
            func_0x00010bede0c0(0,param_1,param_2);
            goto LAB_107d34cdc;
          }
          puVar1 = PTR_PTR_1126c9400;
          func_0x00010c2999c0(PTR_PTR_1126c9400);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            puVar1 = PTR_PTR_1126c9400;
            func_0x00010c2999e0(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = param_4;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)uVar2 == 0) {
              puVar1 = PTR_PTR_1126c9400;
              func_0x00010c2999a0(PTR_PTR_1126c9400);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)uVar2 != 0) {
                func_0x00010bfe27a0(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
                goto LAB_107d34e2c;
              }
              puVar1 = PTR_PTR_1126c9460;
              func_0x00010c29ae40(PTR_PTR_1126c9460);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)uVar2 != 0) {
                puVar1 = PTR_PTR_1126b2348;
                func_0x00010bf5fb40(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = param_6;
                func_0x00010c0e00e0(param_6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                dVar11 = param_1;
                _objc_release(uVar2);
                _objc_release(puVar1);
                uVar2 = param_2;
                func_0x00010c08c0e0(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1582a0();
                _objc_release(uVar2);
                _objc_initWeak(auStack_88,param_2);
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0xc2000000;
                pcStack_a8 = FUN_107d3516c;
                puStack_a0 = &UNK_110846540;
                _objc_copyWeak(auStack_98,auStack_88);
                lStack_90 = (long)((param_1 / dVar11) / 1000.0);
                func_0x000100162d98("APPSTORE",&puStack_b8);
                _objc_destroyWeak(auStack_98);
                _objc_destroyWeak(auStack_88);
                goto LAB_107d34cdc;
              }
              puVar1 = PTR_PTR_1126b2638;
              func_0x00010c2a59e0(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)uVar2 != 0) {
                uVar2 = param_5;
                func_0x00010c264ee0();
                if ((uVar2 & 1) == 0) {
                  func_0x00010c0f5fa0(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
                }
                goto LAB_107d34cdc;
              }
              puVar1 = PTR_PTR_1126b2638;
              func_0x00010bf75b40(PTR_PTR_1126b2638);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)uVar2 != 0) goto LAB_107d34d4c;
              puVar1 = PTR_PTR_1126b2338;
              func_0x00010c282960(PTR_PTR_1126b2338);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_4;
              func_0x00010c0720c0();
              if ((uVar2 & 1) != 0) {
                uVar2 = param_2;
                func_0x00010c08c0e0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar2;
                func_0x00010c282880();
                if ((uVar5 & 1) != 0) {
                  uVar5 = param_2;
                  func_0x00010c08c0e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar5;
                  func_0x00010c23df60();
                  _objc_release(uVar5);
                  _objc_release(uVar2);
                  _objc_release(puVar1);
                  if ((int)uVar6 == 0) goto LAB_107d34cdc;
                  uVar7 = *(undefined8 *)(param_2 + (long)_DAT_11276de68);
                  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bfe3280(0x4010000000000000,0x3fceb851eb851eb8,uVar7);
                  _objc_release(puVar1);
                  goto LAB_107d34cd4;
                }
                goto LAB_107d34ea0;
              }
            }
            else {
              puVar1 = PTR_PTR_1126c9408;
              func_0x00010c157360(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              func_0x00010bedf0a0(param_2);
LAB_107d34ea0:
              _objc_release(uVar2);
            }
            _objc_release(puVar1);
          }
          else {
            func_0x00010c239ba0(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
LAB_107d34e2c:
            func_0x00010be7fbc0(param_2);
          }
          goto LAB_107d34cdc;
        }
      }
    }
    else {
      _objc_release(puVar1);
    }
    func_0x00010c0f5fa0(*(undefined8 *)(param_2 + (long)_DAT_11276de68));
  }
  else {
    lVar8 = (long)_DAT_11276de68;
    func_0x00010c27fc20(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c239640(*(undefined8 *)(param_2 + lVar8));
  }
LAB_107d34cd4:
  *(undefined1 *)(param_2 + (long)_DAT_11276de7c) = 1;
LAB_107d34cdc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107d3516c; end: 107d351c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3516c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2899e0(*(double *)(lVar1 + _DAT_11276de70) / 1000.0,
                        *(undefined8 *)(lVar1 + _DAT_11276de68),param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d351c8; end: 107d352e7; -[SCContentOperaBoostProgressBarLayerViewController _preventAutoAdvanceWhileScrubbing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d351c8(double param_1,ulong param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  puVar6 = param_4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c282880();
  _objc_release();
  if ((uVar2 & 1) == 0) {
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010c0c5840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_48 = puVar3;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_40,&puStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf7e940(param_2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
    uVar1 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = puVar6;
  func_0x00010c252880();
  if (puVar3 + -1 < (undefined *)0x2) {
    *(undefined1 *)(uVar1 + (long)_DAT_11276de7c) = 1;
    func_0x00010c0f5fa0(*(undefined8 *)(uVar1 + (long)_DAT_11276de68));
  }
  else if (puVar3 == (undefined *)0x0) {
    uVar2 = uVar1;
    func_0x00010c117a40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276460();
    dVar7 = param_1 * 1000.0;
    _objc_release(uVar2);
    func_0x00010bf5fc00(puVar6);
    func_0x00010bede0c0(param_1 * 1000.0,dVar7,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107d352e8; end: 107d353a3; -[SCContentOperaBoostProgressBarLayerViewController _updateProgressBarOnEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d352e8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c252880();
  if (lVar1 - 1U < 2) {
    *(undefined1 *)(param_2 + _DAT_11276de7c) = 1;
    func_0x00010c0f5fa0(*(undefined8 *)(param_2 + _DAT_11276de68));
  }
  else if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c117a40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276460();
    dVar2 = param_1 * 1000.0;
    _objc_release(lVar1);
    func_0x00010bf5fc00(param_4);
    func_0x00010bede0c0(param_1 * 1000.0,dVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d353a4; end: 107d3549f; -[SCContentOperaBoostProgressBarLayerViewController _updateProgressViewWithCurrentPositionMs:durationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d353a4(double param_1,double param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  if (0.0 < param_2) {
    dVar3 = param_1;
    func_0x00010028941c();
    lVar2 = param_3;
    dVar4 = dVar3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c220();
    _objc_release(lVar2);
    iVar1 = _DAT_11276de7c;
    if ((0.0 < dVar4) && (dVar4 < dVar3 - *(double *)(param_3 + _DAT_11276de8c))) {
      *(undefined1 *)(param_3 + _DAT_11276de7c) = 1;
    }
    lVar2 = (long)_DAT_11276de74;
    if ((param_1 <= *(double *)(param_3 + lVar2)) || (*(char *)(param_3 + iVar1) == '\x01')) {
      *(undefined1 *)(param_3 + iVar1) = 0;
      *(double *)(param_3 + _DAT_11276de8c) = dVar3;
      func_0x00010c288d80(param_1 / param_2,param_2 / 1000.0,
                          *(undefined8 *)(param_3 + _DAT_11276de68),param_4,0);
    }
    *(double *)(param_3 + lVar2) = param_1;
  }
  return;
}



/* Entry: 107d354a0; end: 107d35717; -[SCContentOperaBoostProgressBarLayerViewController _registeredEventsForOperaSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d354a0(undefined8 param_1)

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
  long lVar16;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c29aaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c157400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2ea8;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9400;
  func_0x00010c2999e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2638;
  func_0x00010bf75b40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2638;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9400;
  func_0x00010c2999c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9400;
  func_0x00010c2999a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9460;
  func_0x00010c29ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2338;
  func_0x00010c282960();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2638;
  func_0x00010c0f5e80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2638;
  func_0x00010c13d5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1f7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(puVar1 + _DAT_11276de70),
             *(undefined8 *)(puVar1 + _DAT_11276de68),
             PTR_s_setScrubbingStateWithSeekingTime_11265ba10);
  return;
}



/* Entry: 107d35718; end: 107d35737; -[SCContentOperaBoostProgressBarLayerViewController _updateScrubberLabelTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35718(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + _DAT_11276de70),
             *(undefined8 *)(param_2 + _DAT_11276de68),
             PTR_s_setScrubbingStateWithSeekingTime_11265ba10);
  return;
}



/* Entry: 107d35738; end: 107d35757; -[SCContentOperaBoostProgressBarLayerViewController delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35738(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276de84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d35758; end: 107d357c3; -[SCContentOperaBoostProgressBarLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35758(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276de84);
  _objc_storeStrong(param_1 + _DAT_11276de6c,0);
  _objc_storeStrong(param_1 + _DAT_11276de5c,0);
  _objc_storeStrong(param_1 + _DAT_11276de64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276de68,0);
  return;
}



/* Entry: 107d357c4; end: 107d35813; -[SCDiscoverFeedScrubberLabel initWithFrame:] */

undefined1 * FUN_107d357c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faaf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c229820(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d35814; end: 107d35c77; -[SCDiscoverFeedScrubberLabel setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar20 = (long)_DAT_11276de90;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar19);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar20),param_2,2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar20),param_2,0x14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar20));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar22 = (long)_DAT_11276de94;
  uVar19 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar19);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar22),param_2,0x14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar22),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar21 = (long)_DAT_11276de98;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar1;
  _objc_release(uVar19);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar21),param_2,1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar21),param_2,0x14);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar21),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar21));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22),param_2,0);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar21),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar21);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  lStack_98 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010bf493c0(0xc020000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  uStack_90 = uVar19;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4020000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar20);
  uStack_88 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar21);
  uStack_80 = uVar11;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar22);
  uStack_78 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 6;
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010beef8c0(puVar1,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar21);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar20);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar19 = *(undefined8 *)(lVar2 + _DAT_11276de90);
  _objc_retain(uVar18);
  func_0x00010c212f20(uVar19,param_2,puVar17);
  func_0x00010c212f20(*(undefined8 *)(lVar2 + _DAT_11276de98),param_2,
                      &PTR____CFConstantStringClassReference_110dacf38);
  func_0x00010c212f20(*(undefined8 *)(lVar2 + _DAT_11276de94),param_2,uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 107d35c78; end: 107d35cf7; -[SCDiscoverFeedScrubberLabel setLabelsWithLeft:right:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35c78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276de90);
  _objc_retain(param_4);
  func_0x00010c212f20(uVar1,param_2,param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276de98),param_2,
                      &PTR____CFConstantStringClassReference_110dacf38);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276de94),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d35cf8; end: 107d35d47; -[SCDiscoverFeedScrubberLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35cf8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276de94,0);
  _objc_storeStrong(param_1 + _DAT_11276de98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276de90,0);
  return;
}



/* Entry: 107d35d48; end: 107d35da3; -[SCContentOperaBoostProgressBarLayerViewModel initWithTotalSnapCount:currentSnapIndex:autoFadeOut:] */

void FUN_107d35d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fab00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 107d35da4; end: 107d35dc7; -[SCContentOperaBoostProgressBarLayerViewModel copyWithZone:] */

undefined8 FUN_107d35da4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d35dc8; end: 107d35e2b; -[SCContentOperaBoostProgressBarLayerViewModel hash] */

undefined8 * FUN_107d35dc8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 8) == param_3[8]);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 107d35e2c; end: 107d35ed3; -[SCContentOperaBoostProgressBarLayerViewModel isEqual:] */

bool FUN_107d35e2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d35ed4; end: 107d35edb; -[SCContentOperaBoostProgressBarLayerViewModel totalSnapCount] */

undefined8 FUN_107d35ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d35edc; end: 107d35ee3; -[SCContentOperaBoostProgressBarLayerViewModel currentSnapIndex] */

undefined8 FUN_107d35edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d35ee4; end: 107d35eeb; -[SCContentOperaBoostProgressBarLayerViewModel autoFadeOut] */

undefined1 FUN_107d35ee4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d35eec; end: 107d35f6f; -[SCSpotlightViewWithWidget layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35eec(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fab08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11276dea8;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf21300(param_1);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 107d35f70; end: 107d35fef; -[SCSpotlightViewWithWidget setWidget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35f70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276dea8;
  if (param_3 == 0) {
    _objc_storeWeak(param_1 + lVar2,0);
  }
  else {
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12c960();
    _objc_release(lVar1);
    _objc_storeWeak(param_1 + lVar2,param_3);
    func_0x00010befbb60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d35ff0; end: 107d3608b; -[SCSpotlightViewWithWidget didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d35ff0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fab08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_11276deac;
    lVar1 = *(long *)(param_1 + lVar3);
    if (lVar1 != 0) {
      _objc_retainBlock();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
      (**(code **)(lVar1 + 0x10))(lVar1);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 107d3608c; end: 107d360ab; -[SCSpotlightViewWithWidget widget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3608c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276dea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d360ac; end: 107d360bb; -[SCSpotlightViewWithWidget didMoveToWindowBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d360ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276deac);
}



/* Entry: 107d360bc; end: 107d360c7; -[SCSpotlightViewWithWidget setDidMoveToWindowBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d360bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d360c8; end: 107d36103; -[SCSpotlightViewWithWidget .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d360c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276deac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276dea8);
  return;
}



/* Entry: 107d36104; end: 107d3611f;  */

undefined ** FUN_107d36104(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9838;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb9858;
  }
  return ppuVar1;
}



/* Entry: 107d36120; end: 107d36173;  */

void FUN_107d36120(undefined **param_1,int param_2)

{
  undefined **ppuVar1;
  
  _objc_retain();
  if (param_1 == (undefined **)0x0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccbb0;
    if (param_2 == 0) {
      ppuVar1 = (undefined **)0x0;
    }
  }
  else {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107d36174; end: 107d361f3;  */

ulong FUN_107d36174(ulong param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c1070e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    uVar2 = (ulong)(param_2 ^ 1);
  }
  else {
    uVar1 = param_1;
    func_0x00010c1070e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107d361f4; end: 107d36363; +[SCOperaPropertiesUtils gestureToolTipsSupportedGestures] */

undefined * FUN_107d361f4(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126d7988;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9878;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb9878,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar8 = PTR_PTR_1126d7988;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb9898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb9898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar7 = PTR_PTR_1126d7988;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb98b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb98b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  puStack_58 = puVar8;
  puStack_50 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126d7988;
  ppuVar6 = &puStack_a0;
  pcStack_68 = FUN_107d36364;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = &PTR____CFConstantStringClassReference_110eb98d8;
  puStack_90 = puVar8;
  ppuStack_88 = ppuVar1;
  puStack_80 = puVar9;
  puStack_78 = puVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb98d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  puVar2 = (undefined *)ppuVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == puVar8) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = (undefined *)ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9ae8;
  func_0x00010bfc1c80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010bf529e0();
    puVar9 = puVar2;
    func_0x00010bf529e0();
    if (puVar8 == puVar9) {
      puVar8 = puVar7;
      func_0x00010bf529e0();
      if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)0x1;
      }
      else {
        puVar9 = (undefined *)0x0;
        do {
          puVar4 = puVar7;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          func_0x00010c0dfd40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          func_0x00010c071ae0();
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (((ulong)puVar8 & 1) == 0) break;
          puVar9 = puVar9 + 1;
          puVar4 = puVar7;
          func_0x00010bf529e0();
        } while (puVar9 < puVar4);
      }
      goto LAB_107d36588;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_107d36588:
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  return puVar8;
}



/* Entry: 107d36364; end: 107d3642f; +[SCOperaPropertiesUtils gestureToolTipsSupportedCheetahGestures] */

undefined * FUN_107d36364(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126d7988;
  ppuVar5 = &puStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb98d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb98d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc1d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar2 = (undefined *)ppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == puVar7) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = (undefined *)ppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9ae8;
  func_0x00010bfc1c80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x00010bf529e0();
    puVar8 = puVar2;
    func_0x00010bf529e0();
    if (puVar7 == puVar8) {
      puVar7 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x1;
      }
      else {
        puVar8 = (undefined *)0x0;
        do {
          puVar3 = puVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010c0dfd40(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c071ae0();
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (((ulong)puVar7 & 1) == 0) break;
          puVar8 = puVar8 + 1;
          puVar3 = puVar6;
          func_0x00010bf529e0();
        } while (puVar8 < puVar3);
      }
      goto LAB_107d36588;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_107d36588:
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  return puVar7;
}



/* Entry: 107d36430; end: 107d365c3; +[SCOperaPropertiesUtils containsToolTipsSupportedCheetahGestures:] */

undefined * FUN_107d36430(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0d278);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == puVar5) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0d278);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ae8;
  func_0x00010bfc1c80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010bf529e0();
    puVar6 = puVar1;
    func_0x00010bf529e0();
    if (puVar5 == puVar6) {
      puVar5 = puVar4;
      func_0x00010bf529e0();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = (undefined *)0x1;
      }
      else {
        puVar6 = (undefined *)0x0;
        do {
          puVar2 = puVar4;
          func_0x00010c0dfd40(puVar4,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c0dfd40(puVar1,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          func_0x00010c071ae0(puVar2,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if (((ulong)puVar5 & 1) == 0) break;
          puVar6 = puVar6 + 1;
          puVar2 = puVar4;
          func_0x00010bf529e0();
        } while (puVar6 < puVar2);
      }
      goto LAB_107d36588;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107d36588:
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107d365c4; end: 107d36703; +[SCOperaPropertiesUtils isChatContext:] */

undefined1 FUN_107d365c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar3 = uVar1;
  func_0x00010bfa29a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar3);
  uVar2 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107d36704; end: 107d36743;  */

void FUN_107d36704(long param_1)

{
  long in_x4;
  long in_x6;
  
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_x6 != -1 || in_x4 != 0;
  return;
}



/* Entry: 107d36744; end: 107d367c7; +[SCOperaPropertiesUtils isGalleryContext:] */

bool FUN_107d36744(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c99e0;
  _objc_retain(param_3);
  func_0x00010bf24b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 107d367c8; end: 107d36823; +[SCOperaSupportedGesture gestureWithType:description:] */

void FUN_107d367c8(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126d7988;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c017a40();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d36824; end: 107d368a7; -[SCOperaSupportedGesture initWithGestureType:description:] */

undefined1 *
FUN_107d36824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fab10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d368a8; end: 107d369cb; -[SCOperaSupportedGesture isEqual:] */

bool FUN_107d368a8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d7988;
  _objc_opt_class();
  if (puVar2 != puVar4) {
    bVar1 = false;
    goto LAB_107d369ac;
  }
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_107d369ac;
  }
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 0x10);
  puVar2 = param_3;
  func_0x00010bfc1960();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  if (puVar4 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar4);
LAB_107d36978:
    puVar3 = *(undefined **)(param_1 + 8);
    puVar4 = param_3;
    func_0x00010bfc1d00(param_3);
    bVar1 = puVar3 == puVar4;
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    else {
      puVar3 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar4);
      if ((int)puVar3 != 0) goto LAB_107d36978;
    }
    bVar1 = false;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_107d369ac:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d369cc; end: 107d369d3; -[SCOperaSupportedGesture gestureType] */

undefined8 FUN_107d369cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d369d4; end: 107d369db; -[SCOperaSupportedGesture gestureDescription] */

undefined8 FUN_107d369d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d369dc; end: 107d369e7; -[SCOperaSupportedGesture .cxx_destruct] */

void FUN_107d369dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d369e8; end: 107d36a0b;  */

bool FUN_107d369e8(double param_1)

{
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return 0.0 < param_1;
}



/* Entry: 107d36a0c; end: 107d36aab;  */

void FUN_107d36a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c17d4c0(param_3,param_4,1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c14cf20();
  uVar2 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar1 == 0) {
    func_0x00010c1842e0(param_2);
    _objc_release(uVar2);
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ce0();
  }
  else {
    func_0x00010c1842e0(param_1);
    param_3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d36aac; end: 107d36b0b;  */

undefined8 FUN_107d36aac(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010be6dc00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bfbb0e0(0,param_1,lVar1,param_3,param_2);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 107d36b0c; end: 107d36bef;  */

undefined8 FUN_107d36b0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_3;
  func_0x00010be6dc00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x0001008cd514(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    _objc_release(param_3);
  }
  else {
    func_0x00010bfbb100(param_1,param_2,lVar1,param_4,param_3);
    param_2 = param_1;
  }
  _objc_release(lVar1);
  return param_2;
}



/* Entry: 107d36bf0; end: 107d36c8f;  */

void FUN_107d36bf0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c0d9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be6dc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d36c90; end: 107d3710f;  */

void FUN_107d36c90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107d37110;
  puStack_108 = &UNK_11098df58;
  puStack_100 = puVar1;
  puStack_f8 = puVar2;
  _objc_retain();
  _objc_retain(puVar1);
  ppuVar3 = &puStack_120;
  _objc_retainBlock();
  uVar14 = param_1;
  func_0x00010bfb9220(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d37164();
  _objc_release(uVar14);
  uVar14 = param_1;
  func_0x00010c0edf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d37164();
  _objc_release(uVar14);
  func_0x00010c246ba0(puVar1);
  func_0x00010c246ba0(puVar2);
  func_0x00010bfb91e0(param_1);
  func_0x00010bf529e0(puVar1);
  uVar14 = param_1;
  func_0x00010bfb9220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar14);
  func_0x00010c0edf40(param_1);
  func_0x00010bf529e0(puVar2);
  uVar14 = param_1;
  func_0x00010c0edf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar14);
  func_0x00010bfb8ac0(param_1);
  FUN_107d3734c(puVar1);
  uVar14 = param_1;
  func_0x00010bfb9220(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d3734c();
  _objc_release(uVar14);
  func_0x00010c0edf20(param_1);
  FUN_107d3734c(puVar2);
  uVar14 = param_1;
  func_0x00010c0edf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107d3734c();
  _objc_release(uVar14);
  func_0x00010bf1f680(param_1);
  func_0x00010c22a980(param_1);
  func_0x00010c140600(param_1);
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0d478;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0d498;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar4;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0d4f8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar5;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0d518;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar6;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0d4b8;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar7;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f0d4d8;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar8;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f0d5b8;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar9;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0d5d8;
  puStack_80 = puVar10;
  func_0x00010c234040(param_1);
  _objc_release(param_1);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &puStack_b0;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar11;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puStack_f8);
  _objc_release(puStack_100);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  uVar14 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(ppuVar13);
  func_0x00010befa160(uVar14);
  func_0x00010befa160(*(undefined8 *)(puVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
  return;
}



/* Entry: 107d37110; end: 107d37163;  */

void FUN_107d37110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010befa160(uVar1);
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d37164; end: 107d3734b;  */

undefined1 * FUN_107d37164(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_1);
        }
        uVar12 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x000100bf119c();
        _objc_release(uVar12);
        puVar5 = puVar1;
        if ((int)uVar4 == 0) {
          puVar5 = puVar2;
        }
        func_0x00010befa120(puVar5);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = param_1;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar6 = puVar2;
  func_0x00010bf51e00();
  puVar9 = puVar5;
  (**(code **)(param_2 + 0x10))(param_2,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar8 = &uStack_240;
    pcStack_138 = FUN_107d3734c;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_170 = puVar6;
    puStack_168 = puVar5;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    lStack_150 = param_2;
    puStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar14 = puVar3;
    func_0x00010bf52a60();
    if (puVar14 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10 = (undefined1 *)0x0;
      lVar13 = *plStack_230;
      do {
        puVar11 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(puVar3);
          }
          uVar7 = *(ulong *)(lStack_238 + (long)puVar11 * 8);
          func_0x00010c151b40();
          puVar10 = puVar10 + (uVar7 & 0xffffffff);
          puVar11 = puVar11 + 1;
        } while (puVar14 != puVar11);
        puVar14 = puVar3;
        puVar8 = &uStack_240;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined1 *)0x0);
    }
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_retain(puVar9);
      func_0x00010c2709c0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010c2709c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar3 = (undefined1 *)puVar8;
      func_0x00010bf433a0(puVar8);
      _objc_release(puVar1);
      _objc_release(puVar8);
      return puVar3;
    }
    return puVar10;
  }
  return puVar3;
}


