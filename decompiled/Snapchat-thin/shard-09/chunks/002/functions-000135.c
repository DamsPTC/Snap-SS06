/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a8423c; end: 106a84263;  */

void FUN_106a8423c(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdcb590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__animationEnded_112550700);
  return;
}



/* Entry: 106a84264; end: 106a8451f; -[SCViewControllerAuxViewActionAnimator _handlePanChangeWithGesture:] */

/* WARNING: Possible PIC construction at 0x000106a8444c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106a844a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a84450) */
/* WARNING: Removing unreachable block (ram,0x000106a844ac) */
/* WARNING: Removing unreachable block (ram,0x000106a844e0) */

void FUN_106a84264(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  dVar9 = param_1;
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((*(byte *)(param_3 + 0x31) & 1) == 0) {
    *(undefined1 *)(param_3 + 0x31) = 1;
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x18);
  }
  func_0x00010be6df20(param_3);
  _CGRectGetMidX();
  dVar8 = dVar9;
  func_0x00010be6df20(param_3);
  _CGRectGetMidY();
  lVar1 = param_3 + 8;
  dVar3 = dVar8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  dVar4 = dVar3;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c60();
  dVar10 = dVar4;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be6df20(param_3);
  _CGRectGetMinX();
  dVar5 = dVar10;
  func_0x00010be6df20(param_3);
  _CGRectGetMaxY();
  if (*(long *)(param_3 + 0x20) == 0) {
    dVar3 = 0.0;
    if (param_2 <= 0.0) {
      dVar3 = param_2;
    }
    dVar8 = dVar3 + dVar8;
    _objc_loadWeakRetained(param_3 + 8);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_3 + 0x20) != 1) {
      return;
    }
    dVar10 = dVar10 - dVar3 * 0.381;
    dVar5 = dVar5 - dVar4 * 0.381;
    dVar11 = dVar5 + -64.0;
    func_0x00010be6df20(param_3);
    _CGRectGetWidth();
    dVar6 = 0.0;
    if (param_1 <= 0.0) {
      dVar6 = param_1;
    }
    dVar7 = -dVar6;
    if (0.0 <= dVar6) {
      dVar7 = dVar6;
    }
    func_0x00010be71300(dVar7,dVar5 * 0.08,param_3);
    _CGRectGetMidX(dVar10,dVar11,dVar3 * 0.381,dVar4 * 0.381);
    dVar9 = dVar9 + (dVar10 - dVar9) * dVar7;
    _objc_loadWeakRetained(param_3 + 8);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar9,dVar8);
  return;
}



/* Entry: 106a84520; end: 106a84543; -[SCViewControllerAuxViewActionAnimator _percentageForValue:fromValue:toValue:] */

double FUN_106a84520(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1 - param_2) / (param_3 - param_2);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = 1.0;
  if (dVar1 <= 1.0) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 106a84544; end: 106a8455b; -[SCViewControllerAuxViewActionAnimator delegate] */

void FUN_106a84544(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8455c; end: 106a84567; -[SCViewControllerAuxViewActionAnimator setDelegate:] */

void FUN_106a8455c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 106a84568; end: 106a8456f; -[SCViewControllerAuxViewActionAnimator baseView] */

undefined8 FUN_106a84568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106a84570; end: 106a8459f; -[SCViewControllerAuxViewActionAnimator setBaseView:] */

void FUN_106a84570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a845a0; end: 106a845a7; -[SCViewControllerAuxViewActionAnimator darkBackgroundView] */

undefined8 FUN_106a845a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106a845a8; end: 106a845d7; -[SCViewControllerAuxViewActionAnimator setDarkBackgroundView:] */

void FUN_106a845a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a845d8; end: 106a845e3; -[SCViewControllerAuxViewActionAnimator destinationFrame] */

undefined8 FUN_106a845d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106a845e4; end: 106a845ef; -[SCViewControllerAuxViewActionAnimator setDestinationFrame:] */

void FUN_106a845e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x98) = param_1;
  *(undefined8 *)(param_5 + 0xa0) = param_2;
  *(undefined8 *)(param_5 + 0xa8) = param_3;
  *(undefined8 *)(param_5 + 0xb0) = param_4;
  return;
}



/* Entry: 106a845f0; end: 106a845f7; -[SCViewControllerAuxViewActionAnimator topInset] */

undefined8 FUN_106a845f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106a845f8; end: 106a845ff; -[SCViewControllerAuxViewActionAnimator setTopInset:] */

void FUN_106a845f8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 106a84600; end: 106a84607; -[SCViewControllerAuxViewActionAnimator bottomInset] */

undefined8 FUN_106a84600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106a84608; end: 106a8460f; -[SCViewControllerAuxViewActionAnimator setBottomInset:] */

void FUN_106a84608(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x88) = param_1;
  return;
}



/* Entry: 106a84610; end: 106a84617; -[SCViewControllerAuxViewActionAnimator upNextPanRecognizer] */

undefined8 FUN_106a84610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106a84618; end: 106a84647; -[SCViewControllerAuxViewActionAnimator setUpNextPanRecognizer:] */

void FUN_106a84618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a84648; end: 106a846b3; -[SCViewControllerAuxViewActionAnimator .cxx_destruct] */

void FUN_106a84648(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a846b4; end: 106a848bf; -[SCViewControllerDismissalAnimator initWithParentViewController:childViewController:presentationAnimator:transitionMode:transitionConfigProvider:configProvider:] */

undefined1 *
FUN_106a846b4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f4878;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar7);
    puVar3 = (undefined1 *)((long)puVar1 + 0x10);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_release(puVar4);
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = 0xffffffffffffffff;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x70),param_8);
    func_0x00010c2288a0(puVar1);
    uVar7 = param_9;
    func_0x00010befdf20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c290280();
    func_0x00010c0cddc0(uVar7);
    dVar10 = (double)param_1;
    func_0x00010c0cd660(uVar7);
    *(char *)((long)puVar1 + 0xc0) = (char)uVar5;
    dVar9 = (double)param_1;
    *(undefined4 *)((long)puVar1 + 0xc1) = 0;
    *(undefined4 *)((long)puVar1 + 0xc4) = 0;
    *(double *)((long)puVar1 + 200) = dVar10;
    *(double *)((long)puVar1 + 0xd0) = dVar9;
    uVar5 = param_9;
    func_0x00010c0ecfe0();
    fVar8 = SUB84(dVar9,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c290280();
    func_0x00010c0cddc0(uVar5);
    dVar9 = (double)fVar8;
    func_0x00010c0cd660(uVar5);
    *(char *)((long)puVar1 + 0xd8) = (char)uVar6;
    *(undefined4 *)((long)puVar1 + 0xd9) = 0;
    *(undefined4 *)((long)puVar1 + 0xdc) = 0;
    *(double *)((long)puVar1 + 0xe0) = dVar9;
    *(double *)((long)puVar1 + 0xe8) = (double)fVar8;
    _objc_release(uVar5);
    _objc_release(uVar7);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106a848c0; end: 106a84927; -[SCViewControllerDismissalAnimator dealloc] */

void FUN_106a848c0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = *(long *)(param_1 + 0x110);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf83600(param_1);
  }
  puStack_28 = PTR_PTR_1126f4878;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a84928; end: 106a84a0f; -[SCViewControllerDismissalAnimator startTransition] */

void FUN_106a84928(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar4 = param_1 + 0x100;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c29c3e0();
  _objc_release(lVar4);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fe0(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  func_0x00010beae060(param_1);
  lVar4 = *(long *)(param_1 + 0xf8);
  func_0x00010c252440();
  if (lVar4 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be71b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performDismissalAnimation_11257a078);
  return;
}



/* Entry: 106a84a10; end: 106a84a63; -[SCViewControllerDismissalAnimator updateBaseView:topInset:transitionMode:] */

void FUN_106a84a10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x108) = param_4;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x128) = param_1;
  *(undefined8 *)(param_2 + 0x38) = param_5;
  *(undefined8 *)(param_2 + 0x40) = param_5;
  return;
}



/* Entry: 106a84a64; end: 106a84a6b; -[SCViewControllerDismissalAnimator updateTransitionMode:] */

void FUN_106a84a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106a84a6c; end: 106a84aaf; -[SCViewControllerDismissalAnimator _shouldUseConfiguredDismissTargetForAdSlideDown] */

uint FUN_106a84a6c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 7) {
    return 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    return 1;
  }
  _CGRectIsEmpty(*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                 *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
  return (uint)param_1 ^ 1;
}



/* Entry: 106a84ab0; end: 106a84ac3; -[SCViewControllerDismissalAnimator _isCircleTransition] */

bool FUN_106a84ab0(long param_1)

{
  return *(long *)(param_1 + 0x40) - 1U < 3;
}



/* Entry: 106a84ac4; end: 106a84d2f; -[SCViewControllerDismissalAnimator _circleMaskLayer] */

void FUN_106a84ac4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)(param_2 + 0x40) == 2) {
    dVar8 = param_1 / 329.0;
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0xbfe0000000000000,0xbfe0000000000000,param_1 + 1.0,param_1 + 1.0,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(dVar8 * -42.5,dVar8 * 10.5,dVar8 * 119.0,dVar8 * 119.0,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010bf19940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f40(puVar6,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar5,param_3,puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar5,param_3,puVar4);
    _objc_release(puVar3);
    puVar3 = puVar6;
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar5,param_3,puVar3);
    func_0x00010c19f0e0(0,0,param_1,param_1,puVar5);
    func_0x00010c1842e0(param_1 * 0.5,puVar5);
    func_0x00010c1c2d20(puVar5,param_3,1);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,param_1,param_1,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar5,param_3,puVar7);
    _objc_release(puVar6);
    func_0x00010c19f0e0(0,0,param_1,param_1,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a84d30; end: 106a85243; -[SCViewControllerDismissalAnimator _setupMaskLayerView] */

void FUN_106a84d30(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_a0 [48];
  
  func_0x00010bde08e0();
  lVar5 = *(long *)(param_2 + 0x40);
  if (lVar5 < 4) {
    if (lVar5 - 1U < 3) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      *(undefined **)(param_2 + 0x68) = puVar3;
      _objc_release(uVar6);
      lVar5 = param_2 + 8;
      _objc_loadWeakRetained(lVar5);
      lVar4 = lVar5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      lVar2 = param_2 + 8;
      dVar10 = param_1;
      _objc_loadWeakRetained(lVar2);
      lVar1 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a5040();
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1739e0(0,0,param_1,dVar10);
      _objc_release(uVar6);
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar5);
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      dVar7 = 0.5;
      uVar9 = 0x3fe0000000000000;
      func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
      _objc_release(uVar6);
      lVar5 = param_2 + 8;
      _objc_loadWeakRetained(lVar5);
      lVar2 = lVar5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar8 = dVar7;
      _CGRectGetMidX();
      _CGRectGetMidY(dVar7,uVar9,param_1,dVar10);
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dee80(dVar8,dVar7);
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(lVar5);
      *(undefined8 *)(param_2 + 0x48) = 0x4014000000000000;
      lVar5 = param_2 + 8;
      _objc_loadWeakRetained(lVar5);
      lVar4 = lVar5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c60();
      dVar10 = dVar8 + 20.0;
      lVar2 = param_2 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar1 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20ca0();
      *(double *)(param_2 + 0x50) = dVar10 / dVar8;
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar5);
      _CGAffineTransformMakeScale(auStack_a0,0x4014000000000000,*(undefined8 *)(param_2 + 0x50));
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166440();
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010bddeb60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb20(uVar6);
      _objc_release(lVar5);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c08c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_2 + 8;
      _objc_loadWeakRetained(param_2);
      lVar5 = param_2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(lVar2);
      _objc_release(lVar5);
      _objc_release(param_2);
      _objc_release(uVar6);
      return;
    }
    if (lVar5 != 0) {
      return;
    }
LAB_106a850ec:
    lVar2 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010010fab4();
    lVar5 = lVar2;
    if ((int)lVar4 == 0) {
      lVar5 = 0;
    }
    _objc_retain(lVar5);
    _objc_release(lVar2);
    if (lVar5 == 0) goto LAB_106a8521c;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c0bc280(lVar2);
  }
  else {
    if (5 < lVar5) {
      if (lVar5 != 6) {
        if (lVar5 != 7) {
          return;
        }
        goto LAB_106a85090;
      }
      goto LAB_106a850ec;
    }
    if (lVar5 != 4) {
      if (lVar5 != 5) {
        return;
      }
      goto LAB_106a850ec;
    }
LAB_106a85090:
    lVar5 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    func_0x00010010fab4();
    _objc_release(lVar5);
    if ((lVar5 == 0) || ((int)lVar2 == 0)) {
      return;
    }
    lVar5 = param_2 + 8;
    _objc_loadWeakRetained(lVar5);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c0bc280(lVar5);
  }
  func_0x00010c013de0();
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined **)(param_2 + 0x68) = puVar3;
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + 0x68));
  _objc_release(puVar3);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  if (param_1 != 0.0) {
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  lVar2 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(uVar6);
LAB_106a8521c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106a85244; end: 106a852c7; -[SCViewControllerDismissalAnimator _clearMaskLayerView] */

void FUN_106a85244(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106a852c8; end: 106a852d3; -[SCViewControllerDismissalAnimator setDelegate:] */

void FUN_106a852c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 106a852d4; end: 106a85377; -[SCViewControllerDismissalAnimator animationEnded:] */

void FUN_106a852d4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94a40();
  _objc_release(puVar1);
  *(undefined2 *)(param_1 + 0x30) = 0;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissCompleted__1125be728,1);
    return;
  }
  lVar2 = param_1 + 0x120;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2241a0(0x3ff0000000000000);
  _objc_release(lVar2);
  param_1 = param_1 + 0x100;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a85378; end: 106a8542f; -[SCViewControllerDismissalAnimator dismissCompleted:] */

void FUN_106a85378(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x110));
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c12b760(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x108));
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x100;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a85430; end: 106a854bb; -[SCViewControllerDismissalAnimator setupDismissPanRecognizer] */

void FUN_106a85430(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined **)(param_1 + 0xf8) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xf8),param_2,param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a854bc; end: 106a8557b; -[SCViewControllerDismissalAnimator gestureRecognizerShouldBegin:] */

long FUN_106a854bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0xf8);
  if (param_3 == lVar2) {
    lVar1 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264780(lVar2,param_2,lVar1);
    *(long *)(param_1 + 0x28) = lVar2;
    _objc_release(lVar1);
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar1 = 1;
    }
    else {
      param_1 = param_1 + 0x100;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c29c4a0();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  else {
    lVar1 = 1;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106a8557c; end: 106a855fb; -[SCViewControllerDismissalAnimator gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_106a8557c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  FUN_106a894b4(param_3,param_4,uVar2,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106a855fc; end: 106a85733; -[SCViewControllerDismissalAnimator _didPan:] */

void FUN_106a855fc(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    func_0x00010be17060(param_3,param_4,param_5);
    goto LAB_106a8571c;
  }
  if (lVar1 == 2) {
    uVar2 = param_3;
    func_0x00010be42cc0();
    if (((uVar2 & 1) != 0) || (uVar2 = param_3, func_0x00010be3fb40(), (int)uVar2 != 0)) {
      lVar1 = param_3 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      lVar1 = param_3 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219ba0(0,param_2,param_5,param_4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar1);
    }
  }
  else {
    if (lVar1 != 1) goto LAB_106a8571c;
    _CACurrentMediaTime();
    *(undefined8 *)(param_3 + 0xb8) = param_1;
    func_0x00010c2514a0(param_3);
    uVar2 = param_3;
    func_0x00010be3ee80();
    if ((int)uVar2 == 0) goto LAB_106a8571c;
  }
  func_0x00010bfd1dc0(param_3,param_4,param_5);
LAB_106a8571c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106a85734; end: 106a85747; -[SCViewControllerDismissalAnimator handlePanChangeWithGesture:] */

void FUN_106a85734(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be2db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePanChangeForSlideToDismis_112569078)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2db90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePanChangeWithGesture__112569080);
  return;
}



/* Entry: 106a85748; end: 106a858eb; -[SCViewControllerDismissalAnimator _handlePanChangeWithGesture:] */

void FUN_106a85748(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5,param_4,lVar2);
  dVar4 = param_1;
  uVar6 = param_2;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,lVar2);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010be499e0(param_1,param_2,dVar4,uVar6,param_3);
  func_0x00010bec93a0(param_1,param_2,param_3);
  uVar3 = param_3;
  dVar4 = param_1;
  func_0x00010be42cc0();
  if (((uVar3 & 1) == 0) && (uVar3 = param_3, func_0x00010be3fb40(), (int)uVar3 == 0)) {
    func_0x00010be71300(param_1,0,0x4069000000000000,param_3);
    dVar4 = 1.0 - param_1;
  }
  else {
    lVar1 = param_3 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _objc_release(lVar2);
    _objc_release(lVar1);
    dVar5 = 1.0 - param_1 / dVar4;
    dVar4 = 0.0;
    if (0.0 <= dVar5) {
      dVar4 = dVar5;
    }
  }
  func_0x00010c1677c0(dVar4,*(undefined8 *)(param_3 + 0x110));
  lVar1 = param_3 + 0x120;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2241a0(dVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a858ec; end: 106a8597b; -[SCViewControllerDismissalAnimator _sourceBounds] */

undefined8 FUN_106a858ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    param_1 = *(undefined8 *)(param_2 + 0x150);
  }
  else {
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained(param_2);
    lVar1 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar1);
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 106a8597c; end: 106a85df3; -[SCViewControllerDismissalAnimator _handlePanChangeForSlideToDismissWithGesture:] */

void FUN_106a8597c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b0 [48];
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5,param_4,lVar2);
  dVar12 = param_1;
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((*(byte *)(param_3 + 0xa8) & 1) == 0) {
    *(undefined1 *)(param_3 + 0xa8) = 1;
    *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_3 + 0x28);
  }
  func_0x00010bebe580(param_3);
  _CGRectGetWidth();
  dVar11 = dVar12;
  func_0x00010bebe580(param_3);
  _CGRectGetHeight();
  dVar9 = dVar11;
  func_0x00010bebe580(param_3);
  _CGRectGetMidX();
  dVar5 = dVar9;
  func_0x00010bebe580(param_3);
  _CGRectGetMidY();
  if (2 < *(long *)(param_3 + 0xb0) - 1U) {
    if (*(long *)(param_3 + 0xb0) != 0) {
      return;
    }
    dVar12 = 0.0;
    if (param_2 <= 0.0) {
      dVar12 = param_2;
    }
    param_2 = -dVar12;
    if (0.0 <= dVar12) {
      param_2 = dVar12;
    }
    dVar6 = param_2;
    func_0x00010be71300(param_2,dVar11 * 0.08,dVar11,param_3);
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106a85d80;
  }
  lVar1 = param_3 + 8;
  dVar11 = dVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  dVar10 = dVar11 * 0.381;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c60();
  dVar11 = dVar11 * 0.381;
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)(param_3 + 0xb0) == 3) {
    dVar6 = 0.0;
    param_2 = param_1;
    if (param_1 <= 0.0) {
      param_2 = 0.0;
    }
    lVar1 = param_3 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140820();
    dVar8 = dVar6;
LAB_106a85bc0:
    lVar3 = param_3 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fec0();
    dVar13 = (dVar6 - dVar11) + -64.0;
  }
  else {
    if (*(long *)(param_3 + 0xb0) == 1) {
      dVar6 = 0.0;
      if (param_1 <= 0.0) {
        dVar6 = param_1;
      }
      param_2 = -dVar6;
      if (0.0 <= dVar6) {
        param_2 = dVar6;
      }
      lVar1 = param_3 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e360();
      dVar8 = dVar6 - dVar10;
      goto LAB_106a85bc0;
    }
    dVar13 = 0.0;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    lVar1 = param_3 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34840();
    dVar8 = dVar13 + dVar10 * -0.5;
    lVar3 = param_3 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fec0();
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar6 = param_2;
  func_0x00010be71300(param_2,dVar12 * 0.08,dVar12,param_3);
  dVar7 = dVar8;
  _CGRectGetMidX(dVar8,dVar13,dVar10,dVar11);
  _CGRectGetMidY(dVar8,dVar13,dVar10,dVar11);
  dVar12 = dVar8 - dVar5;
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar8 = (dVar8 - (dVar8 - dVar10) * dVar6) / dVar8;
  _CGAffineTransformMakeScale(auStack_b0,dVar8,dVar8);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar9 = dVar9 + (dVar7 - dVar9) * dVar6;
  dVar12 = dVar12 * dVar6;
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
LAB_106a85d80:
  func_0x00010c17a6a0(dVar9,dVar5 + dVar12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (0.0 < param_2) {
    func_0x00010c1677c0(1.0 - dVar6,*(undefined8 *)(param_3 + 0x110));
    param_3 = param_3 + 0x120;
    _objc_loadWeakRetained(param_3);
    func_0x00010c2241a0(1.0 - dVar6);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 106a85df4; end: 106a85f37; -[SCViewControllerDismissalAnimator _finishPan:] */

undefined8
FUN_106a85df4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  uVar3 = 0;
  *(undefined1 *)(param_3 + 0xa8) = 0;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_3 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5,param_4,lVar2);
      uVar3 = param_1;
      uVar4 = param_2;
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5,param_4,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010beb3260(param_1,param_2,uVar3,uVar4);
      if ((int)lVar1 != 0) {
        func_0x00010be71b60(param_3);
        uVar3 = 1;
        goto LAB_106a85f14;
      }
    }
    func_0x00010bddafc0(param_3);
    uVar3 = 0;
  }
LAB_106a85f14:
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 106a85f38; end: 106a85f5b; -[SCViewControllerDismissalAnimator _percentageForValue:fromValue:toValue:] */

double FUN_106a85f38(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1 - param_2) / (param_3 - param_2);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = 1.0;
  if (dVar1 <= 1.0) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 106a85f5c; end: 106a85fb3; -[SCViewControllerDismissalAnimator dismiss:] */

void FUN_106a85f5c(long param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) != 0) {
    *(undefined8 *)(param_1 + 0xb0) = 3;
    *(undefined1 *)(param_1 + 0x32) = 1;
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      func_0x00010c2514a0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010be71b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performDismissalAnimation_11257a078);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf83610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissCompleted__1125be728,0);
  return;
}



/* Entry: 106a85fb4; end: 106a86133; -[SCViewControllerDismissalAnimator _containerMaskView] */

void FUN_106a85fb4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = *(double *)(param_5 + 0x128);
  if (dVar7 <= 0.0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_5 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar2);
    _objc_release(lVar1);
    dVar8 = *(double *)(param_5 + 0x128);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(dVar7,param_2 + dVar8,param_3,param_4 - dVar8);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_6,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    param_5 = param_5 + 0x10;
    _objc_loadWeakRetained(param_5);
    lVar1 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0(puVar6);
    _objc_release(lVar1);
    _objc_release(param_5);
    puVar4 = puVar3;
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c08c0e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a86134; end: 106a86c2f; -[SCViewControllerDismissalAnimator _performDismissalAnimation] */

void FUN_106a86134(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auStack_2e0 [48];
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  double dStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  double dStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  puStack_288 = unaff_x19;
  if ((param_5[0x31] & 1) != 0) goto LAB_106a86a78;
  *(undefined2 *)(param_5 + 0x31) = 1;
  puVar3 = param_5;
  func_0x00010be42cc0();
  if ((int)puVar3 == 0) {
    puVar3 = param_5;
    func_0x00010be3fb40();
    if ((int)puVar3 == 0) goto LAB_106a86490;
    puVar3 = param_5 + 0x70;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010bf5f820();
    if (((ulong)puVar4 & 1) == 0) goto LAB_106a8644c;
    puVar4 = param_5;
    func_0x00010beb7160();
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) != 0) goto LAB_106a86490;
    uVar8 = *(undefined8 *)(param_5 + 0xf8);
    puVar7 = param_5 + 0x10;
    _objc_loadWeakRetained(puVar7);
    puVar3 = puVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(uVar8,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar7);
    puVar7 = param_5 + 0x10;
    _objc_loadWeakRetained(puVar7);
    puVar3 = puVar7;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    unaff_x22 = param_5 + 8;
    _objc_loadWeakRetained();
    unaff_x23 = unaff_x22;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar3);
    _objc_release(puVar7);
    unaff_x20 = PTR__OBJC_CLASS___UIView_1126aec20;
    param_1 = ABS(param_1 - param_2);
    puVar7 = param_5 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010bf8b1e0();
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_106a86c30;
    puStack_190 = &UNK_110842e18;
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_106a86d04;
    puStack_1b8 = &UNK_110841f20;
    puStack_1b0 = param_5;
    puStack_188 = param_5;
    func_0x00010bf03460(unaff_x20,param_6,0,&puStack_1a8,&puStack_1d0);
    unaff_x21 = puVar7;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar8 = *(undefined8 *)(param_5 + 0x68);
    *(undefined **)(param_5 + 0x68) = puVar3;
    _objc_release(uVar8);
    puVar3 = param_5 + 8;
    _objc_loadWeakRetained(puVar3);
    puVar1 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    puVar4 = param_5 + 8;
    param_4 = param_1;
    _objc_loadWeakRetained(puVar4);
    puVar2 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    unaff_x24 = *(undefined **)(param_5 + 0x68);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(0,0,param_1,param_4);
    _objc_release(unaff_x24);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    dVar14 = 0.5;
    uVar16 = 0x3fe0000000000000;
    func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
    _objc_release(uVar8);
    puVar3 = param_5 + 8;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar15 = dVar14;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar14,uVar16,param_1,param_4);
    uVar8 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar15,dVar14);
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_5 + 8;
    _objc_loadWeakRetained(puVar3);
    puVar1 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    dVar14 = dVar15 + 20.0;
    puVar4 = param_5 + 8;
    _objc_loadWeakRetained(puVar4);
    puVar2 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ca0();
    *(double *)(param_5 + 0x50) = dVar14 / dVar15;
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _CGAffineTransformMakeScale(&uStack_148,0x4014000000000000,*(undefined8 *)(param_5 + 0x50));
    uVar8 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uStack_140;
    uStack_180 = uStack_148;
    uStack_168 = uStack_130;
    dStack_170 = dStack_138;
    uStack_158 = uStack_120;
    dStack_160 = dStack_128;
    func_0x00010c166440();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_5 + 0x68);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010bddeb60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20(uVar8,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar8);
    puVar3 = *(undefined **)(param_5 + 0x68);
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5 + 8;
    _objc_loadWeakRetained();
    puVar1 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(unaff_x23);
    _objc_release(puVar1);
    param_3 = param_1;
    _objc_release(puVar4);
    param_1 = dStack_128;
    param_2 = dStack_138;
LAB_106a8644c:
    _objc_release(puVar3);
LAB_106a86490:
    func_0x00010bde7680();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar3 = param_5 + 0x10;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_5 + 8;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(puVar7,param_6,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    puVar3 = param_5;
    func_0x00010be3ee80();
    if ((((ulong)puVar3 & 1) != 0) || (puVar3 = param_5, func_0x00010be42cc0(), (int)puVar3 != 0)) {
      fVar12 = SUB84(param_1,0);
      puVar3 = param_5 + 8;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0bc120();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar13 = fVar12;
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_5 + 8;
      _objc_loadWeakRetained();
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c0bc120();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = unaff_x24;
      func_0x00010c296f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(puVar1);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(puVar4);
      _objc_release(puVar3);
      param_1 = 5.26354424712089e-315;
      if ((1.0 < fVar12) || (1.0 < fVar13)) {
        puVar3 = param_5 + 8;
        _objc_loadWeakRetained();
        puVar4 = puVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = puVar4;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c0bc120();
        _objc_retainAutoreleasedReturnValue();
        uStack_178 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_180 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_168 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        param_2 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        param_1 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        dStack_170 = param_2;
        dStack_160 = param_1;
        func_0x00010c166440();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
    puVar3 = param_5 + 8;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18260();
    _objc_release(puVar3);
    puVar3 = param_5 + 0x100;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c29c4c0();
    _objc_release(puVar3);
    if (param_5[0x78] == '\x01') {
      uVar8 = *(undefined8 *)(param_5 + 0x80);
      func_0x00010bf04a20(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf345e0();
      puVar3 = param_5 + 8;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a6a0(param_1,param_2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_5 + 8;
      _objc_loadWeakRetained(puVar3);
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar15 = param_1;
      _CGRectGetMidX();
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      lStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      lVar9 = *(long *)(param_5 + 0x80);
      _objc_retain(lVar9);
      lVar6 = lVar9;
      func_0x00010bf52a60(lVar9,param_6,&uStack_210,auStack_118,0x10);
      if (lVar6 != 0) {
        lVar10 = *plStack_200;
        uStack_248 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_250 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        uStack_258 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        dStack_260 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_268 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        dStack_270 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        do {
          lVar11 = 0;
          do {
            if (*plStack_200 != lVar10) {
              _objc_enumerationMutation(lVar9);
            }
            unaff_x24 = *(undefined **)(lStack_208 + lVar11 * 8);
            uStack_178 = uStack_248;
            uStack_180 = uStack_250;
            uStack_168 = uStack_258;
            dStack_170 = dStack_260;
            uStack_158 = uStack_268;
            dStack_160 = dStack_270;
            func_0x00010c219960(unaff_x24,param_6,&uStack_180);
            func_0x00010c17a6a0(dVar15,param_1,unaff_x24);
            lVar11 = lVar11 + 1;
          } while (lVar6 != lVar11);
          lVar6 = lVar9;
          func_0x00010bf52a60(lVar9,param_6,&uStack_210,auStack_118,0x10);
        } while (lVar6 != 0);
      }
      _objc_release(lVar9);
      _CGAffineTransformMakeScale
                (&uStack_240,*(undefined8 *)(param_5 + 0xa0),*(undefined8 *)(param_5 + 0xa0));
      puVar3 = param_5 + 8;
      _objc_loadWeakRetained();
      unaff_x23 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uStack_178 = uStack_238;
      uStack_180 = uStack_240;
      uStack_168 = uStack_228;
      dStack_170 = dStack_230;
      uStack_158 = uStack_218;
      dStack_160 = dStack_220;
      func_0x00010c219960();
      _objc_release(unaff_x23);
      _objc_release(puVar3);
      _objc_release(uVar8);
    }
    unaff_x22 = param_5 + 0x18;
    _objc_loadWeakRetained();
    puVar3 = unaff_x22;
    func_0x00010bf84ec0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = (undefined *)(ulong)(puVar3 != (undefined *)0x0);
    if (puVar3 == (undefined *)0x0) {
LAB_106a86a34:
      _objc_release(unaff_x22);
    }
    else {
      unaff_x24 = param_5 + 8;
      _objc_loadWeakRetained();
      puVar4 = unaff_x24;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0bc120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      _objc_release(puVar4);
      _objc_release(unaff_x24);
      _objc_release(puVar3);
      _objc_release(unaff_x22);
      if (puVar2 == (undefined *)0x0) {
        unaff_x22 = param_5 + 0x18;
        _objc_loadWeakRetained();
        unaff_x23 = unaff_x22;
        func_0x00010bf84ec0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = param_5 + 8;
        _objc_loadWeakRetained();
        puVar3 = unaff_x24;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2c00();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        goto LAB_106a86a34;
      }
      unaff_x21 = (undefined *)0x0;
      unaff_x23 = puVar3;
    }
    param_1 = 0.0;
    func_0x00010bea3440(0,param_5,param_6,1);
    unaff_x20 = puVar7;
    if (*(long *)(param_5 + 0x40) == 5) {
      func_0x00010bdcb0e0();
    }
    else {
      func_0x00010bdcab40(param_5,param_6,puVar7,unaff_x21);
    }
  }
  _objc_release();
  puStack_288 = param_5;
LAB_106a86a78:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_278 = FUN_106a86c30;
  lVar6 = *(long *)(puVar7 + 0x20) + 0x10;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = unaff_x23;
  puStack_2a0 = unaff_x22;
  puStack_298 = unaff_x21;
  puStack_290 = unaff_x20;
  puStack_280 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar6);
  lVar10 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(auStack_2e0,0,param_1);
  lVar9 = *(long *)(puVar7 + 0x20) + 8;
  _objc_loadWeakRetained(lVar9);
  lVar11 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar6);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(puVar7 + 0x20) + 0x110));
  return;
}



/* Entry: 106a86c30; end: 106a86d03;  */

void FUN_106a86c30(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [48];
  
  lVar1 = *(long *)(param_2 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGAffineTransformMakeTranslation(auStack_70,0,param_1);
  lVar3 = *(long *)(param_2 + 0x20) + 8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x110));
  return;
}



/* Entry: 106a86d04; end: 106a86d0f;  */

void FUN_106a86d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf03c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_animationEnded__11259e8a8,1);
  return;
}



/* Entry: 106a86d10; end: 106a86e0f; -[SCViewControllerDismissalAnimator _animateDismissWithContainerMaskView:useDismissalMask:] */

void FUN_106a86d10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar2 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf8b1e0();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a86e10;
  puStack_60 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106a8742c;
  puStack_98 = &UNK_1109446f8;
  uStack_90 = param_4;
  lStack_88 = param_2;
  uStack_80 = param_5;
  lStack_58 = param_2;
  _objc_retain(param_4);
  func_0x00010bf03460(param_1,0,0x3ff0000000000000,0,puVar1,param_3,0,&puStack_78,&puStack_b0);
  _objc_release(lVar2);
  _objc_release(uStack_90);
  _objc_release(param_4);
  return;
}



/* Entry: 106a86e10; end: 106a8742b;  */

void FUN_106a86e10(double param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [48];
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
  
  lVar8 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar8 + 0x108) == 0) {
    param_1 = *(double *)(lVar8 + 0x130);
    _CGRectGetWidth(param_1,*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140),
                    *(undefined8 *)(lVar8 + 0x148));
  }
  else {
    func_0x00010bf20ca0();
  }
  lVar8 = *(long *)(param_2 + 0x20) + 8;
  dVar16 = param_1;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  param_1 = param_1 / dVar16;
  _objc_release(lVar2);
  _objc_release(lVar8);
  _CGAffineTransformMakeScale(&uStack_f0,param_1,param_1);
  lVar8 = *(long *)(param_2 + 0x20);
  uVar9 = *(long *)(lVar8 + 0x118) - 1;
  uVar11 = 0;
  if (uVar9 < 7) {
    uVar11 = *(undefined8 *)(&UNK_10dde3b60 + uVar9 * 8);
  }
  _CGAffineTransformMakeRotation(auStack_120,uVar11);
  _CGAffineTransformConcat(&uStack_c0,&uStack_f0,auStack_120);
  lVar8 = lVar8 + 8;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar8);
  lVar8 = *(long *)(param_2 + 0x20);
  dVar14 = *(double *)(lVar8 + 0x130);
  uVar15 = *(undefined8 *)(lVar8 + 0x138);
  uVar11 = *(undefined8 *)(lVar8 + 0x140);
  uVar17 = *(undefined8 *)(lVar8 + 0x148);
  dVar16 = dVar14;
  _CGRectGetMidX(dVar14,uVar15,uVar11,uVar17);
  _CGRectGetMidY(dVar14,uVar15,uVar11,uVar17);
  lVar8 = *(long *)(param_2 + 0x20) + 8;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar14);
  _objc_release(lVar2);
  _objc_release(lVar8);
  uVar9 = *(ulong *)(param_2 + 0x20);
  func_0x00010be3ee80();
  dVar12 = dVar16;
  if ((uVar9 & 1) == 0) {
    uVar9 = *(ulong *)(param_2 + 0x20);
    func_0x00010be42cc0();
    dVar12 = dVar16;
    if ((uVar9 & 1) == 0) {
      lVar8 = *(long *)(param_2 + 0x20) + 8;
      _objc_loadWeakRetained();
      lVar2 = lVar8;
      func_0x00010010fab4();
      _objc_release(lVar8);
      dVar12 = dVar16;
      if ((lVar8 != 0) && ((int)lVar2 != 0)) {
        lVar8 = *(long *)(param_2 + 0x20) + 8;
        _objc_loadWeakRetained(lVar8);
        func_0x00010c0bc280();
        _CGRectGetMidY();
        lVar2 = *(long *)(param_2 + 0x20) + 0x10;
        dVar12 = dVar16;
        _objc_loadWeakRetained(lVar2);
        lVar3 = lVar2;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        _CGRectGetMidY();
        dVar16 = dVar16 - dVar12;
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (dVar16 != 0.0) {
          lVar10 = *(long *)(*(long *)(param_2 + 0x20) + 0x118);
          lVar2 = *(long *)(param_2 + 0x20) + 8;
          _objc_loadWeakRetained(lVar2);
          lVar3 = lVar2;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf345e0();
          if ((lVar10 - 2U & 0xfffffffffffffffa) == 0) {
            dVar13 = -dVar16;
            if ((*(long *)(*(long *)(param_2 + 0x20) + 0x118) - 2U & 0xfffffffffffffffb) != 0) {
              dVar13 = dVar16;
            }
            lVar10 = *(long *)(param_2 + 0x20) + 8;
            _objc_loadWeakRetained(lVar10);
            lVar4 = lVar10;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf345e0();
            dVar12 = dVar12 + param_1 * dVar13;
            dVar16 = dVar14;
          }
          else {
            lVar10 = *(long *)(param_2 + 0x20) + 8;
            _objc_loadWeakRetained(lVar10);
            lVar4 = lVar10;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf345e0();
            dVar16 = dVar14 + param_1 * -dVar16;
          }
          dVar14 = dVar12;
          lVar5 = *(long *)(param_2 + 0x20) + 8;
          _objc_loadWeakRetained(lVar5);
          lVar6 = lVar5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17a6a0(dVar14,dVar16);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar10);
          _objc_release(lVar3);
          _objc_release(lVar2);
          func_0x00010c0bc280(lVar8);
          dVar12 = dVar14;
          _CGRectGetMidX();
          _CGRectGetMidY(dVar14,dVar16,uVar11,uVar17);
          func_0x00010c17a6a0(dVar12,dVar14,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x108));
        }
        _objc_release(lVar8);
      }
    }
  }
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010be3ee80();
  lVar8 = *(long *)(param_2 + 0x20);
  if (iVar1 == 0) {
    lVar2 = 0x140;
    if ((*(long *)(lVar8 + 0x118) - 2U & 0xfffffffffffffffa) != 0) {
      lVar2 = 0x148;
    }
    dVar16 = *(double *)(lVar8 + lVar2);
    lVar8 = lVar8 + 8;
    _objc_loadWeakRetained(lVar8);
    lVar3 = lVar8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _CGAffineTransformMakeScale(&uStack_150,0x3ff0000000000000,(dVar16 / dVar12) / param_1);
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uStack_148;
    uStack_f0 = uStack_150;
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    uStack_c8 = uStack_128;
    uStack_d0 = uStack_130;
    func_0x00010c166440();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  else {
    lVar8 = lVar8 + 8;
    _objc_loadWeakRetained(lVar8);
    lVar3 = lVar8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar16 = dVar12;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar12,dVar14,uVar11,uVar17);
    lVar2 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar10 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar16,dVar12);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar8);
    lVar8 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar8);
    lVar3 = lVar8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_f0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_e0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c166440();
  }
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar8);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x108));
  return;
}



/* Entry: 106a8742c; end: 106a874cb;  */

void FUN_106a8742c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf03c00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x28) + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106a874cc; end: 106a875cb; -[SCViewControllerDismissalAnimator _animateSlideToDismissWithContainerMaskView:useDismissalMask:] */

void FUN_106a874cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar2 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf8b1e0();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a875cc;
  puStack_60 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106a878e8;
  puStack_98 = &UNK_1109446f8;
  uStack_90 = param_4;
  lStack_88 = param_2;
  uStack_80 = param_5;
  lStack_58 = param_2;
  _objc_retain(param_4);
  func_0x00010bf03460(param_1,0,0x3ff0000000000000,0,puVar1,param_3,0,&puStack_78,&puStack_b0);
  _objc_release(lVar2);
  _objc_release(uStack_90);
  _objc_release(param_4);
  return;
}



/* Entry: 106a875cc; end: 106a878e7;  */

void FUN_106a875cc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_100 [48];
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
  
  lVar3 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar3 + 0xb0) - 1U < 3) {
    lVar3 = lVar3 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ca0();
    dVar8 = param_1 * 0.381;
    _objc_release(lVar1);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    dVar9 = param_1 * 0.381;
    _objc_release(lVar1);
    _objc_release(lVar3);
    lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0xb0);
    lVar3 = *(long *)(param_2 + 0x20) + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 3) {
      func_0x00010c140820();
      dVar10 = param_1;
LAB_106a87728:
      lVar5 = *(long *)(param_2 + 0x20) + 0x10;
      _objc_loadWeakRetained(lVar5);
      lVar2 = lVar5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1fec0();
      param_1 = (param_1 - dVar9) + -64.0;
    }
    else {
      if (lVar5 == 1) {
        func_0x00010c08e360();
        dVar10 = param_1 - dVar8;
        goto LAB_106a87728;
      }
      func_0x00010bf34840();
      dVar10 = param_1 + dVar8 * -0.5;
      lVar5 = *(long *)(param_2 + 0x20) + 0x10;
      _objc_loadWeakRetained(lVar5);
      lVar2 = lVar5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1fec0();
    }
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _CGAffineTransformMakeScale(&uStack_d0,0x3fd8624dd2f1a9fc,0x3fd8624dd2f1a9fc);
    lVar3 = *(long *)(param_2 + 0x20);
    uVar4 = *(long *)(lVar3 + 0x118) - 1;
    uVar6 = 0;
    if (uVar4 < 7) {
      uVar6 = *(undefined8 *)(&UNK_10dde3b60 + uVar4 * 8);
    }
    _CGAffineTransformMakeRotation(auStack_100,uVar6);
    _CGAffineTransformConcat(&uStack_a0,&uStack_d0,auStack_100);
    lVar3 = lVar3 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    func_0x00010c219960();
    _objc_release(lVar1);
    _objc_release(lVar3);
    dVar7 = dVar10;
    _CGRectGetMidX(dVar10,param_1,dVar8,dVar9);
    _CGRectGetMidY(dVar10,param_1,dVar8,dVar9);
    lVar3 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar7,dVar10);
  }
  else {
    if (*(long *)(lVar3 + 0xb0) != 0) goto LAB_106a878b4;
    lVar3 = lVar3 + 0x10;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274140();
    lVar1 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173440(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
LAB_106a878b4:
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x108));
  return;
}



/* Entry: 106a878e8; end: 106a87987;  */

void FUN_106a878e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf03c00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x28) + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106a87988; end: 106a87ae7; -[SCViewControllerDismissalAnimator _cancelTransition] */

void FUN_106a87988(ulong param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    ppuVar2 = &puStack_90;
    *(undefined1 *)(param_1 + 0x31) = 1;
    puStack_68 = puVar3;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106a87ae8;
    puStack_50 = &UNK_110842e18;
    ppuVar1 = &puStack_68;
    uStack_48 = param_1;
    _objc_retainBlock();
    puStack_90 = puVar3;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106a87f20;
    puStack_78 = &UNK_110841f20;
    uStack_70 = param_1;
    _objc_retainBlock();
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18260();
    _objc_release(puVar3);
    uVar4 = param_1;
    func_0x00010bdd9960();
    func_0x00010bea3440(0x3ff0000000000000,param_1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    if ((uVar4 & 1) == 0) {
      lVar5 = param_1 + 0x70;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bf8b1e0();
      func_0x00010bf03460(puVar3);
      _objc_release(lVar5);
    }
    else {
      (*(code *)ppuVar1[2])(ppuVar1);
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,1);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
  }
  return;
}



/* Entry: 106a87ae8; end: 106a87f1f;  */

void FUN_106a87ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_5 + 0x20);
  func_0x00010be3ee80();
  if (iVar1 != 0) {
    lVar5 = *(long *)(param_5 + 0x20);
    _CGAffineTransformMakeScale
              (auStack_1b8,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50));
    lVar5 = lVar5 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar2 = lVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166440();
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_5 + 0x20) + 8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    param_2 = uStack_198;
    uVar7 = uStack_1a8;
    func_0x00010bf20c00();
    param_1 = param_2;
    _CGRectGetMidX();
    _CGRectGetMidY(param_2,uVar7,param_3,param_4);
    lVar2 = *(long *)(param_5 + 0x20) + 8;
    _objc_loadWeakRetained(lVar2);
    lVar8 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(param_1,param_2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  func_0x00010bebe580(*(undefined8 *)(param_5 + 0x20));
  uVar7 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  lVar5 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar7,param_1);
  _objc_release(lVar2);
  _objc_release(lVar5);
  lVar5 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar5);
  lVar5 = *(long *)(param_5 + 0x20);
  if (*(char *)(lVar5 + 0x78) == '\x01') {
    lVar6 = *(long *)(lVar5 + 0x80);
    _objc_retain(lVar6);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        func_0x00010c17a6a0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x90),
                            *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x98),uVar7);
        func_0x00010c219960(uVar7);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    lVar6 = *(long *)(*(long *)(param_5 + 0x20) + 0x88);
    _objc_retain(lVar6);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    lVar5 = *(long *)(param_5 + 0x20);
  }
  func_0x00010c1677c0(0,*(undefined8 *)(lVar5 + 0x108));
  lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0x110);
  func_0x00010c1677c0(0x3ff0000000000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bde08e0(*(undefined8 *)(lVar5 + 0x20));
  func_0x00010bf03c00(*(undefined8 *)(lVar5 + 0x20));
  if (*(char *)(*(long *)(lVar5 + 0x20) + 0x32) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be71b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(lVar5 + 0x20),PTR_s__performDismissalAnimation_11257a078);
    return;
  }
  return;
}



/* Entry: 106a87f20; end: 106a87f6b;  */

void FUN_106a87f20(long param_1)

{
  func_0x00010bde08e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf03c00(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x32) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be71b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__performDismissalAnimation_11257a078);
    return;
  }
  return;
}



/* Entry: 106a87f6c; end: 106a88037; -[SCViewControllerDismissalAnimator _canCancelTransitionWithoutAnimation] */

bool FUN_106a87f6c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  dVar3 = param_1;
  dVar5 = param_2;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bebe580(param_5);
  dVar4 = dVar3;
  _CGRectGetMidX();
  _CGRectGetMidY(dVar3,dVar5,param_3,param_4);
  return (param_2 - dVar3) * (param_2 - dVar3) + (param_1 - dVar4) * (param_1 - dVar4) < 4.0;
}



/* Entry: 106a88038; end: 106a880f3; -[SCViewControllerDismissalAnimator _setDarkBackgroundViewAlpha:animated:] */

void FUN_106a88038(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a880f4;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_2;
  uStack_38 = param_1;
  _objc_retainBlock();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_4 == 0) {
    (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
  }
  else {
    param_2 = param_2 + 0x70;
    _objc_loadWeakRetained(param_2);
    func_0x00010bf8b1e0();
    func_0x00010bf03420(puVar1,param_3,ppuVar2,0);
    _objc_release(param_2);
  }
  _objc_release(ppuVar2);
  return;
}



/* Entry: 106a880f4; end: 106a88103;  */

void FUN_106a880f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a88104; end: 106a88113; -[SCViewControllerDismissalAnimator _isPostDismissalCircleMode] */

bool FUN_106a88104(long param_1)

{
  return *(long *)(param_1 + 0x40) == 6;
}



/* Entry: 106a88114; end: 106a88123; -[SCViewControllerDismissalAnimator _isDismissSlideDown] */

bool FUN_106a88114(long param_1)

{
  return *(long *)(param_1 + 0x40) == 7;
}



/* Entry: 106a88124; end: 106a8818b; -[SCViewControllerDismissalAnimator _getDismissGestureConfig] */

void FUN_106a88124(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_2 + 0x70;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5f820();
  _objc_release(lVar2);
  lVar2 = 0xc0;
  if ((int)lVar3 == 0) {
    lVar2 = 0xd8;
  }
  puVar1 = (undefined8 *)(param_2 + lVar2);
  uVar4 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar4;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 106a8818c; end: 106a881af; -[SCViewControllerDismissalAnimator _swipeDistanceForDismissalThreshold] */

undefined8 FUN_106a8818c(void)

{
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  
  func_0x00010be1eac0(auStack_28);
  return uStack_18;
}



/* Entry: 106a881b0; end: 106a88293; -[SCViewControllerDismissalAnimator _ratio:] */

double FUN_106a881b0(double param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = 1.0;
  if (0.0 < param_1) {
    uVar1 = param_2;
    func_0x00010be42cc0();
    if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010be3fb40(), (int)uVar1 == 0)) {
      dVar6 = param_1 / -600.0 + 1.0;
      dVar5 = *(double *)(param_2 + 0x130);
      _CGRectGetHeight(dVar5,*(undefined8 *)(param_2 + 0x138),*(undefined8 *)(param_2 + 0x140),
                       *(undefined8 *)(param_2 + 0x148));
      lVar2 = param_2 + 8;
      dVar4 = dVar5;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c60();
      dVar4 = (dVar5 / dVar4) * 0.85;
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (dVar4 <= dVar6) {
        dVar4 = dVar6;
      }
    }
    else {
      func_0x00010bec9300(param_2);
      if (dVar4 <= param_1) {
        param_1 = dVar4;
      }
      func_0x00010bec9300(param_2);
      dVar4 = (param_1 / dVar4) * -0.050000000000000044 + 1.0;
    }
  }
  return dVar4;
}



/* Entry: 106a88294; end: 106a8836b; -[SCViewControllerDismissalAnimator _layoutViewsForTranslation:currentPosition:] */

void FUN_106a88294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  if (*(char *)(param_5 + 0x78) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be0df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,param_4,param_5,
               PTR_s__fadeLayoutViewsForTranslation_c_112561180);
    return;
  }
  lVar1 = param_5;
  func_0x00010be3ee80();
  if ((int)lVar1 != 0) {
    if (*(long *)(param_5 + 0x40) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bddeb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_5,PTR_s__circleLayoutViewsForHorizontalT_112555468);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bddeb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,param_4,param_5,
               PTR_s__circleLayoutViewsForVerticalTra_112555470);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be87e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_5,
             PTR_s__rectLayoutViewsForTranslation_c_11257f920);
  return;
}



/* Entry: 106a8836c; end: 106a8874f; -[SCViewControllerDismissalAnimator _circleLayoutViewsForVerticalTranslation:currentPosition:] */

void FUN_106a8836c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  dVar12 = *(double *)(param_5 + 0x58);
  dVar13 = *(double *)(param_5 + 0x60);
  if (*(long *)(param_5 + 0x108) == 0) {
    dVar5 = (double)_CGRectGetWidth(*(undefined8 *)(param_5 + 0x130),
                                    *(undefined8 *)(param_5 + 0x138),
                                    *(undefined8 *)(param_5 + 0x140),
                                    *(undefined8 *)(param_5 + 0x148));
  }
  else {
    dVar5 = (double)func_0x00010bf20ca0();
  }
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  dVar6 = (double)func_0x00010bf20ca0();
  dVar5 = dVar5 / dVar6;
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar6 = *(double *)(param_5 + 0x48);
  auVar8 = NEON_fmov(0xbff0000000000000,8);
  auVar10 = NEON_fmov(0x3ff0000000000000,8);
  dVar9 = auVar10._0_8_ + (param_2 / -20.0 + auVar10._0_8_) * (dVar6 + auVar8._0_8_);
  dVar11 = auVar10._8_8_ +
           (param_2 / -40.0 + auVar10._8_8_) * (*(double *)(param_5 + 0x50) + auVar8._8_8_);
  dVar9 = (double)((ulong)dVar5 ^ ((ulong)dVar5 ^ (ulong)dVar9) & -(ulong)(dVar5 < dVar9));
  dVar5 = (double)((ulong)dVar5 ^ ((ulong)dVar5 ^ (ulong)dVar11) & -(ulong)(dVar5 < dVar11));
  dVar9 = (double)((ulong)dVar9 ^
                  ((ulong)dVar9 ^ (ulong)*(double *)(param_5 + 0x48)) & -(ulong)(dVar6 < dVar9));
  dVar5 = (double)((ulong)dVar5 ^
                  ((ulong)dVar5 ^ *(ulong *)(param_5 + 0x50)) &
                  -(ulong)(*(double *)(param_5 + 0x50) < dVar5));
  dVar6 = dVar5;
  if (dVar5 <= dVar9) {
    dVar6 = dVar9;
  }
  if (dVar6 <= 1.0) {
    dVar6 = (param_2 + -40.0) / -600.0 + 1.0;
    _CGAffineTransformMakeScale(&uStack_b0,dVar6,dVar6);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    dStack_d0 = dStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    func_0x00010c166440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)func_0x00010bf345e0();
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0((param_3 - dVar12) + dVar5,dVar6 * (param_4 - dVar13) + dStack_a0);
  }
  else {
    if (param_2 <= 0.0) {
      dVar12 = (double)_log10(10.0 - param_2);
      param_2 = param_2 / dVar12;
    }
    _CGAffineTransformMakeScale(&uStack_110,dVar6,dVar5);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = uStack_f8;
    dStack_d0 = dStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    func_0x00010c166440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    dVar12 = dStack_100;
    uVar7 = func_0x00010bebe580(param_5);
    dVar13 = (double)_CGRectGetMidX();
    dVar12 = (double)_CGRectGetMidY(uVar7,dVar12,extraout_d2,extraout_d3);
    dVar12 = param_2 + dVar12;
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar13 + 0.0,dVar12);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar7 = func_0x00010bebe580(param_5);
    dVar13 = (double)_CGRectGetMidX();
    dVar12 = (double)_CGRectGetMidY(uVar7,dVar12,extraout_d2_00,extraout_d3_00);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar13 + 0.0,dVar12 - param_2);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  *(double *)(param_5 + 0x58) = param_3;
  *(double *)(param_5 + 0x60) = param_4;
  return;
}



/* Entry: 106a88750; end: 106a889e7; -[SCViewControllerDismissalAnimator _circleLayoutViewsForHorizontalTranslation:currentPosition:] */

void FUN_106a88750(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
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
  
  dVar13 = *(double *)(param_5 + 0x58);
  dVar14 = *(double *)(param_5 + 0x60);
  if (*(long *)(param_5 + 0x108) == 0) {
    dVar5 = (double)_CGRectGetWidth(*(undefined8 *)(param_5 + 0x130),
                                    *(undefined8 *)(param_5 + 0x138),
                                    *(undefined8 *)(param_5 + 0x140),
                                    *(undefined8 *)(param_5 + 0x148));
  }
  else {
    dVar5 = (double)func_0x00010bf20ca0();
  }
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  dVar6 = (double)func_0x00010bf20ca0();
  dVar5 = dVar5 / dVar6;
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar9 = SQRT(param_2 * param_2 + param_1 * param_1);
  dVar7 = *(double *)(param_5 + 0x48);
  dVar6 = *(double *)(param_5 + 0x50);
  auVar8 = NEON_fmov(0xbff0000000000000,8);
  auVar11 = NEON_fmov(0x3ff0000000000000,8);
  dVar10 = auVar11._0_8_ + (dVar9 / -30.0 + auVar11._0_8_) * (dVar7 + auVar8._0_8_);
  dVar12 = auVar11._8_8_ + (dVar9 / -40.0 + auVar11._8_8_) * (dVar6 + auVar8._8_8_);
  dVar10 = (double)((ulong)dVar5 ^ ((ulong)dVar5 ^ (ulong)dVar10) & -(ulong)(dVar5 < dVar10));
  dVar5 = (double)((ulong)dVar5 ^ ((ulong)dVar5 ^ (ulong)dVar12) & -(ulong)(dVar5 < dVar12));
  dVar7 = (double)((ulong)dVar7 ^ ((ulong)dVar7 ^ (ulong)dVar10) & ~-(ulong)(dVar7 < dVar10));
  dVar6 = (double)((ulong)dVar6 ^ ((ulong)dVar6 ^ (ulong)dVar5) & ~-(ulong)(dVar6 < dVar5));
  if (dVar6 <= dVar7) {
    dVar6 = dVar7;
  }
  if (dVar6 <= 1.0) {
    dVar5 = (dVar9 + -25.0) / -300.0 + 1.0;
    _CGAffineTransformMakeScale(&uStack_b0,dVar5,dVar5);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    func_0x00010c166440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    auVar8 = func_0x00010bf345e0();
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0((param_3 - dVar13) + auVar8._0_8_,(param_4 - dVar14) + auVar8._8_8_);
  }
  else {
    _CGAffineTransformMakeScale(&uStack_110);
    lVar1 = param_5 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    func_0x00010c166440();
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  *(double *)(param_5 + 0x58) = param_3;
  *(double *)(param_5 + 0x60) = param_4;
  return;
}



/* Entry: 106a889e8; end: 106a88bfb; -[SCViewControllerDismissalAnimator _rectLayoutViewsForTranslation:currentPosition:] */

void FUN_106a889e8(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  
  dVar6 = param_1;
  func_0x00010bec93a0();
  dVar4 = dVar6;
  func_0x00010bebe580(param_5);
  _CGRectGetMidX();
  dVar5 = dVar4;
  func_0x00010bebe580(param_5);
  _CGRectGetMidY();
  if (dVar6 <= 0.0) {
    dVar6 = 10.0 - dVar6;
    if ((*(ulong *)(param_5 + 0x28) & 0xfffffffffffffffd) == 0) {
      _log10();
      param_2 = param_2 / dVar6;
    }
    else {
      _log10();
      param_1 = param_1 / dVar6;
    }
  }
  else {
    uVar1 = param_5;
    func_0x00010be42cc0();
    if (((uVar1 & 1) == 0) && (uVar1 = param_5, func_0x00010be3fb40(), (int)uVar1 == 0)) {
      func_0x00010be85e40(param_5);
      _CGAffineTransformMakeScale(&uStack_100);
      lVar2 = param_5 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uStack_f8;
      uStack_d0 = uStack_100;
      uStack_b8 = uStack_e8;
      uStack_c0 = uStack_f0;
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      func_0x00010c219960();
      _objc_release(lVar3);
      _objc_release(lVar2);
      param_1 = param_1 + ((param_3 - param_1) - dVar4) * (1.0 - dVar6);
      param_2 = param_2 + ((param_4 - param_2) - dVar5) * (1.0 - dVar6);
    }
    else {
      func_0x00010be85e40(param_5);
      param_2 = param_2 + ((param_4 - param_2) - dVar5) * (1.0 - dVar6);
      _CGAffineTransformMakeScale(&uStack_a0);
      lVar2 = param_5 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uStack_98;
      uStack_d0 = uStack_a0;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      func_0x00010c219960();
      _objc_release(lVar3);
      _objc_release(lVar2);
      param_1 = 0.0;
    }
  }
  if ((!NAN(dVar4 + param_1)) && (!NAN(dVar5 + param_2))) {
    lVar2 = param_5 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar4 + param_1,dVar5 + param_2);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 106a88bfc; end: 106a88f23; -[SCViewControllerDismissalAnimator _fadeLayoutViewsForTranslation:currentPosition:] */

ulong FUN_106a88bfc(double param_1,double param_2,double param_3,double param_4,long param_5,
                   undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  char acStack_3a8 [8];
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  long lStack_360;
  ulong uStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  undefined1 auStack_198 [128];
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = param_1;
  dVar16 = param_4;
  func_0x00010bec93a0();
  dVar18 = *(double *)(param_5 + 0x90);
  dVar19 = *(double *)(param_5 + 0x98);
  if (dVar17 <= 0.0) {
    dVar20 = 10.0 - dVar17;
    if ((*(ulong *)(param_5 + 0x28) & 0xfffffffffffffffd) == 0) {
      _log10();
      param_2 = param_2 / dVar20;
    }
    else {
      _log10();
      param_1 = param_1 / dVar20;
    }
  }
  else {
    dVar20 = param_4 - param_2;
    param_4 = param_3 - param_1;
    param_3 = dVar17;
    func_0x00010be85e40(param_5);
    *(double *)(param_5 + 0xa0) = param_3;
    param_4 = param_4 - dVar18;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar8 = *(long *)(param_5 + 0x80);
    _objc_retain(lVar8);
    lVar9 = lVar8;
    func_0x00010bf52a60(lVar8,param_6,&uStack_260,auStack_118,0x10);
    if (lVar9 != 0) {
      lVar12 = *plStack_250;
      do {
        lVar13 = 0;
        do {
          if (*plStack_250 != lVar12) {
            _objc_enumerationMutation(lVar8);
          }
          uVar10 = *(undefined8 *)(lStack_258 + lVar13 * 8);
          _CGAffineTransformMakeScale(&uStack_290,param_3,param_3);
          uStack_2b8 = uStack_288;
          uStack_2c0 = uStack_290;
          uStack_2a8 = uStack_278;
          uStack_2b0 = uStack_280;
          uStack_298 = uStack_268;
          uStack_2a0 = uStack_270;
          func_0x00010c219960(uVar10,param_6,&uStack_2c0);
          lVar13 = lVar13 + 1;
        } while (lVar9 != lVar13);
        lVar9 = lVar8;
        func_0x00010bf52a60(lVar8,param_6,&uStack_260,auStack_118,0x10);
      } while (lVar9 != 0);
    }
    _objc_release(lVar8);
    param_1 = param_1 + param_4 * (1.0 - param_3);
    param_2 = param_2 + (dVar20 - dVar19) * (1.0 - param_3);
  }
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  lStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  lVar9 = *(long *)(param_5 + 0x80);
  _objc_retain(lVar9);
  lVar8 = lVar9;
  func_0x00010bf52a60(lVar9,param_6,&uStack_300,auStack_198,0x10);
  if (lVar8 != 0) {
    lVar12 = *plStack_2f0;
    param_1 = dVar18 + param_1;
    param_2 = dVar19 + param_2;
    do {
      lVar13 = 0;
      do {
        if (*plStack_2f0 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(lStack_2f8 + lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar8 != lVar13);
      lVar8 = lVar9;
      func_0x00010bf52a60(lVar9,param_6,&uStack_300,auStack_198,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar9);
  dVar20 = 200.0;
  dVar15 = 0.0;
  func_0x00010be71300(param_5);
  dVar19 = 0.0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uVar7 = *(ulong *)(param_5 + 0x88);
  _objc_retain(uVar7);
  uVar5 = uVar7;
  func_0x00010bf52a60(uVar7,param_6,&uStack_340,auStack_218,0x10);
  if (uVar5 != 0) {
    dVar17 = 1.0 - dVar17;
    lVar8 = *plStack_330;
    do {
      uVar11 = 0;
      do {
        if (*plStack_330 != lVar8) {
          _objc_enumerationMutation(uVar7);
        }
        dVar19 = dVar17;
        func_0x00010c1677c0(*(undefined8 *)(lStack_338 + uVar11 * 8));
        uVar11 = uVar11 + 1;
      } while (uVar5 != uVar11);
      uVar5 = uVar7;
      func_0x00010bf52a60(uVar7,param_6,&uStack_340,auStack_218,0x10);
      lVar9 = 0;
    } while (uVar5 != 0);
  }
  uVar5 = uVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return uVar5;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_106a88f24;
  dVar14 = dVar19;
  dStack_390 = dVar18;
  dStack_388 = param_4;
  dStack_380 = param_3;
  dStack_378 = param_1;
  dStack_370 = param_2;
  dStack_368 = dVar17;
  lStack_360 = lVar9;
  uStack_358 = uVar7;
  puStack_350 = &stack0xfffffffffffffff0;
  func_0x00010bec9300();
  if (dVar14 <= 0.0) {
    dVar17 = dVar19;
    func_0x00010bec93a0(dVar19,dVar15,uVar5);
    if ((*(ulong *)(uVar5 + 0x28) & 0xfffffffffffffffd) != 0) {
      dVar19 = dVar15;
    }
    func_0x00010bec93a0(dVar20,dVar16,uVar5);
    func_0x00010be1eac0(acStack_3a8,uVar5);
    dVar19 = ABS(dVar19);
    if (acStack_3a8[0] == '\x01') {
      bVar2 = true;
      bVar3 = false;
      if (dStack_3a0 <= dVar17) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar17) && !NAN(dVar19)) {
          bVar2 = dVar17 < dVar19;
          bVar3 = false;
        }
      }
      if (bVar2 == bVar3) {
        uVar5 = 1;
      }
      else {
        uVar6 = 0;
        if (0.0 <= dVar17) {
          uVar6 = (uint)(dStack_398 <= dVar20);
        }
        uVar1 = 0;
        if (dVar19 <= dVar17) {
          uVar1 = uVar6;
        }
        uVar5 = (ulong)uVar1;
      }
    }
    else {
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if (dStack_3a0 < dVar17) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar17) && !NAN(dVar19)) {
          bVar2 = dVar17 < dVar19;
          bVar3 = dVar17 == dVar19;
          bVar4 = false;
        }
      }
      if (bVar3 || bVar2 != bVar4) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)(dStack_398 < dVar20);
      }
    }
  }
  else {
    func_0x00010bec93a0(dVar20,dVar16,uVar5);
    dVar17 = dVar20;
    func_0x00010bec9300(uVar5);
    uVar5 = (ulong)(dVar17 <= dVar20);
  }
  return uVar5;
}



/* Entry: 106a88f24; end: 106a89047; -[SCViewControllerDismissalAnimator _shouldDismissWithVelocity:translation:] */

bool FUN_106a88f24(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  char acStack_68 [8];
  double dStack_60;
  double dStack_58;
  
  dVar4 = param_1;
  func_0x00010bec9300();
  if (dVar4 <= 0.0) {
    dVar4 = param_1;
    func_0x00010bec93a0(param_1,param_2,param_5);
    if ((*(ulong *)(param_5 + 0x28) & 0xfffffffffffffffd) != 0) {
      param_1 = param_2;
    }
    func_0x00010bec93a0(param_3,param_4,param_5);
    func_0x00010be1eac0(acStack_68,param_5);
    param_1 = ABS(param_1);
    if (acStack_68[0] == '\x01') {
      bVar1 = true;
      bVar2 = false;
      if (dStack_60 <= dVar4) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar4) && !NAN(param_1)) {
          bVar1 = dVar4 < param_1;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        bVar1 = true;
      }
      else {
        bVar1 = param_1 <= dVar4 && (0.0 <= dVar4 && dStack_58 <= param_3);
      }
    }
    else {
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (dStack_60 < dVar4) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar4) && !NAN(param_1)) {
          bVar1 = dVar4 < param_1;
          bVar2 = dVar4 == param_1;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        bVar1 = false;
      }
      else {
        bVar1 = dStack_58 < param_3;
      }
    }
  }
  else {
    func_0x00010bec93a0(param_3,param_4,param_5);
    dVar4 = param_3;
    func_0x00010bec9300(param_5);
    bVar1 = dVar4 <= param_3;
  }
  return bVar1;
}



/* Entry: 106a89048; end: 106a89093; -[SCViewControllerDismissalAnimator _swipeProgressForTranslation:] */

double FUN_106a89048(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x28);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      return -param_2;
    }
    if (lVar1 == 1) {
      return -param_1;
    }
  }
  else {
    if (lVar1 == 2) {
      return param_2;
    }
    if (lVar1 == 3) {
      return param_1;
    }
  }
  return 0.0;
}



/* Entry: 106a89094; end: 106a8909b; -[SCViewControllerDismissalAnimator gestureDescription] */

void FUN_106a89094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xf8),PTR_s_description_1125b9278);
  return;
}



/* Entry: 106a8909c; end: 106a8911f; -[SCViewControllerDismissalAnimator resetGestureIfNecessary] */

void FUN_106a8909c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  func_0x00010c252440();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c2288b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupDismissPanRecognizer_112667c50);
    return;
  }
  return;
}



/* Entry: 106a89120; end: 106a891c7; -[SCViewControllerDismissalAnimator enableFadeTransition:fadingViews:] */

void FUN_106a89120(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_3 + 0x78) = 1;
  uVar1 = *(undefined8 *)(param_3 + 0x80);
  *(undefined8 *)(param_3 + 0x80) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(param_3 + 0x88) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010bf04a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010bf345e0(uVar1);
  *(undefined8 *)(param_3 + 0x90) = param_1;
  *(undefined8 *)(param_3 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a891c8; end: 106a8920f; -[SCViewControllerDismissalAnimator disableFadeTransition] */

void FUN_106a891c8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)PTR__CGPointZero_110347540;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}



/* Entry: 106a89210; end: 106a89217; -[SCViewControllerDismissalAnimator swipeDirection] */

undefined8 FUN_106a89210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a89218; end: 106a8921f; -[SCViewControllerDismissalAnimator _iOS_simulator_swipeDirectionForAboutToBeginDismissGesture:] */

undefined8 FUN_106a89218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 106a89220; end: 106a892d3; -[SCViewControllerDismissalAnimator _iOS_simulator_velocityOfPanGestureInTargetView] */

undefined1  [16]
FUN_106a89220(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)(param_3 + 0xf8);
  lVar1 = param_3 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(uVar3,param_4,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_3 + 0xf8);
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(uVar3,param_4,lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 106a892d4; end: 106a892db; -[SCViewControllerDismissalAnimator dismissPanRecognizer] */

undefined8 FUN_106a892d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 106a892dc; end: 106a8930b; -[SCViewControllerDismissalAnimator setDismissPanRecognizer:] */

void FUN_106a892dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a8930c; end: 106a89323; -[SCViewControllerDismissalAnimator delegate] */

void FUN_106a8930c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a89324; end: 106a8932b; -[SCViewControllerDismissalAnimator baseView] */

undefined8 FUN_106a89324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 106a8932c; end: 106a8935b; -[SCViewControllerDismissalAnimator setBaseView:] */

void FUN_106a8932c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a8935c; end: 106a89363; -[SCViewControllerDismissalAnimator darkBackgroundView] */

undefined8 FUN_106a8935c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 106a89364; end: 106a89393; -[SCViewControllerDismissalAnimator setDarkBackgroundView:] */

void FUN_106a89364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a89394; end: 106a8939f; -[SCViewControllerDismissalAnimator destinationFrame] */

undefined8 FUN_106a89394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 106a893a0; end: 106a893ab; -[SCViewControllerDismissalAnimator setDestinationFrame:] */

void FUN_106a893a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x130) = param_1;
  *(undefined8 *)(param_5 + 0x138) = param_2;
  *(undefined8 *)(param_5 + 0x140) = param_3;
  *(undefined8 *)(param_5 + 0x148) = param_4;
  return;
}



/* Entry: 106a893ac; end: 106a893b7; -[SCViewControllerDismissalAnimator operaBounds] */

undefined8 FUN_106a893ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 106a893b8; end: 106a893c3; -[SCViewControllerDismissalAnimator setOperaBounds:] */

void FUN_106a893b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x150) = param_1;
  *(undefined8 *)(param_5 + 0x158) = param_2;
  *(undefined8 *)(param_5 + 0x160) = param_3;
  *(undefined8 *)(param_5 + 0x168) = param_4;
  return;
}



/* Entry: 106a893c4; end: 106a893cb; -[SCViewControllerDismissalAnimator shouldUseOperaBounds] */

undefined1 FUN_106a893c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}



/* Entry: 106a893cc; end: 106a893d3; -[SCViewControllerDismissalAnimator setShouldUseOperaBounds:] */

void FUN_106a893cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 106a893d4; end: 106a893db; -[SCViewControllerDismissalAnimator destinationeFrameOrientation] */

undefined8 FUN_106a893d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 106a893dc; end: 106a893e3; -[SCViewControllerDismissalAnimator setDestinationeFrameOrientation:] */

void FUN_106a893dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 106a893e4; end: 106a893fb; -[SCViewControllerDismissalAnimator volumeController] */

void FUN_106a893e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a893fc; end: 106a89407; -[SCViewControllerDismissalAnimator setVolumeController:] */

void FUN_106a893fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 106a89408; end: 106a8940f; -[SCViewControllerDismissalAnimator topInset] */

undefined8 FUN_106a89408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 106a89410; end: 106a89417; -[SCViewControllerDismissalAnimator setTopInset:] */

void FUN_106a89410(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x128) = param_1;
  return;
}



/* Entry: 106a89418; end: 106a894b3; -[SCViewControllerDismissalAnimator .cxx_destruct] */

void FUN_106a89418(long param_1)

{
  _objc_destroyWeak(param_1 + 0x120);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a894b4; end: 106a8973f;  */

uint FUN_106a894b4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  ulong param_6,long param_7,ulong param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_5 != param_7) {
LAB_106a894f4:
    uVar5 = 1;
    goto LAB_106a89568;
  }
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  uVar2 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
    _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
    uVar2 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar1);
    puVar1 = PTR_DAT_1126a56e8;
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_6);
      uVar2 = param_6;
      func_0x00010010fab4(param_6,puVar1);
      _objc_release(param_6);
      if ((param_6 == 0) || ((uVar2 & 1) == 0)) {
        puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
        uVar2 = param_6;
        _objc_opt_isKindOfClass(param_6,puVar1);
        if ((uVar2 & 1) == 0) {
LAB_106a89670:
          uVar3 = param_6;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010010fab4();
          uVar2 = uVar3;
          if ((int)uVar4 == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar3);
          if (uVar2 != 0) {
            puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
            _objc_opt_class(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
            uVar2 = param_6;
            _objc_opt_isKindOfClass(param_6,puVar1);
            _objc_release(uVar3);
            if ((uVar2 & 1) != 0) {
              uVar3 = param_6;
              func_0x00010c29bf00();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar3;
              func_0x00010010fab4();
              uVar2 = uVar3;
              if ((int)uVar4 == 0) {
                uVar2 = 0;
              }
              _objc_retain(uVar2);
              _objc_release(uVar3);
              uVar3 = uVar2;
              func_0x00010c22e560(uVar2);
              _objc_release(uVar2);
              uVar5 = (uint)uVar3 ^ 1;
              goto LAB_106a89568;
            }
          }
          goto LAB_106a894f4;
        }
        uVar2 = param_6;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_8;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar2 == uVar3) {
          uVar5 = 0;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
          _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
          uVar3 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar1);
          if ((uVar3 & 1) == 0) {
            _objc_release(uVar2);
            goto LAB_106a89670;
          }
          _objc_retain(uVar2);
          func_0x00010bf4d5e0(uVar2);
          dVar6 = param_1;
          func_0x00010bf20c00(uVar2);
          if (param_1 <= param_3) {
LAB_106a89640:
            func_0x00010c2bf2a0(uVar2);
            dVar7 = dVar6;
            func_0x00010c0ce7a0(uVar2);
            uVar5 = (uint)(dVar6 <= dVar7);
          }
          else {
            func_0x00010bf4d5e0(uVar2);
            func_0x00010bf20c00(uVar2);
            if (param_4 < param_2) goto LAB_106a89640;
            uVar5 = 0;
          }
          _objc_release(uVar2);
        }
        _objc_release(uVar2);
        goto LAB_106a89568;
      }
    }
  }
  uVar5 = 0;
LAB_106a89568:
  _objc_release(param_8);
  _objc_release(param_6);
  return uVar5;
}



/* Entry: 106a89740; end: 106a897f7; -[SCViewControllerPresentationSlideAnimator initWithParentViewController:childViewController:baseView:baseViewBehavior:baseViewOrientation:caTransactionFlushMode:] */

undefined1 *
FUN_106a89740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f4880;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x00010be39960(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a897f8; end: 106a897ff; -[SCViewControllerPresentationSlideAnimator operaBoundsDidChange:] */

void FUN_106a897f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_setFrame__112645658);
  return;
}


