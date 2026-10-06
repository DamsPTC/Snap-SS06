/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a89800; end: 106a89aaf; -[SCViewControllerPresentationSlideAnimator animateTransition:] */

void FUN_106a89800(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  
  lVar1 = param_5 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4e0();
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar9 = -param_3;
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar5 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar8 = 0;
  func_0x00010c19f0e0(dVar9,0,param_3,*(undefined8 *)(param_5 + 0x40));
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_5 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bef76c0(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x40));
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar9,uVar8,param_3,param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18260();
  _objc_release(puVar7);
  uVar8 = 0x3fc999999999999a;
  if (param_7 == 0) {
    uVar8 = 0;
  }
  func_0x00010bf03440(uVar8,0,PTR__OBJC_CLASS___UIView_1126aec20);
  if (*(long *)(param_5 + 0x28) == 2) {
    func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_110959fd8);
  }
  else if (*(long *)(param_5 + 0x28) == 0) {
    func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  return;
}



/* Entry: 106a89ab0; end: 106a89b47;  */

void FUN_106a89ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  func_0x00010c1ba100(0,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x40));
  func_0x00010bfb68e0(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x40));
  lVar1 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,param_2,param_3,param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a89b48; end: 106a89be3;  */

void FUN_106a89b48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c29c320(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94a40();
  _objc_release(puVar3);
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a89be4; end: 106a89bef;  */

void FUN_106a89be4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_flush_1125ca570);
  return;
}



/* Entry: 106a89bf0; end: 106a89bf3; -[SCViewControllerPresentationSlideAnimator updateBaseView:] */

void FUN_106a89bf0(void)

{
  return;
}



/* Entry: 106a89bf4; end: 106a89bf7; -[SCViewControllerPresentationSlideAnimator setupAnimationForBaseView:] */

void FUN_106a89bf4(void)

{
  return;
}



/* Entry: 106a89bf8; end: 106a89c63; -[SCViewControllerPresentationSlideAnimator _initDarkBackgroundView] */

void FUN_106a89bf8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 106a89c64; end: 106a89c7b; -[SCViewControllerPresentationSlideAnimator delegate] */

void FUN_106a89c64(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a89c7c; end: 106a89c87; -[SCViewControllerPresentationSlideAnimator setDelegate:] */

void FUN_106a89c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106a89c88; end: 106a89c9f; -[SCViewControllerPresentationSlideAnimator baseViewDelegate] */

void FUN_106a89c88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a89ca0; end: 106a89cab; -[SCViewControllerPresentationSlideAnimator setBaseViewDelegate:] */

void FUN_106a89ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106a89cac; end: 106a89cb3; -[SCViewControllerPresentationSlideAnimator darkBackgroundView] */

undefined8 FUN_106a89cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106a89cb4; end: 106a89ccb; -[SCViewControllerPresentationSlideAnimator baseView] */

void FUN_106a89cb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a89ccc; end: 106a89cd7; -[SCViewControllerPresentationSlideAnimator startingFrame] */

undefined8 FUN_106a89ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106a89cd8; end: 106a89ce3; -[SCViewControllerPresentationSlideAnimator setStartingFrame:] */

void FUN_106a89cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x58) = param_1;
  *(undefined8 *)(param_5 + 0x60) = param_2;
  *(undefined8 *)(param_5 + 0x68) = param_3;
  *(undefined8 *)(param_5 + 0x70) = param_4;
  return;
}



/* Entry: 106a89ce4; end: 106a89ceb; -[SCViewControllerPresentationSlideAnimator dismissalMask] */

undefined8 FUN_106a89ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106a89cec; end: 106a89d43; -[SCViewControllerPresentationSlideAnimator .cxx_destruct] */

void FUN_106a89cec(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a89d44; end: 106a89d6f; -[SCViewControllerPresentationThumbnailAnimator initWithParentViewController:childViewController:baseView:operaBounds:shouldUseOperaBounds:baseViewBehavior:baseViewOrientation:isCircleTransition:] */

void FUN_106a89d44(void)

{
  func_0x00010c034000();
  return;
}



/* Entry: 106a89d70; end: 106a89fb3; -[SCViewControllerPresentationThumbnailAnimator initWithParentViewController:childViewController:baseView:operaBounds:shouldUseOperaBounds:baseViewBehavior:baseViewOrientation:isCircleTransition:configProvider:thumbnailTransitionDurationMs:] */

undefined1 *
FUN_106a89d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined *param_15,int param_16)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar2 = &uStack_90;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  puStack_88 = PTR_PTR_1126f4888;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x10),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_8);
    *(undefined8 *)((long)puVar2 + 0x70) = param_1;
    *(undefined8 *)((long)puVar2 + 0x78) = param_2;
    *(undefined8 *)((long)puVar2 + 0x80) = param_3;
    *(undefined8 *)((long)puVar2 + 0x88) = param_4;
    *(undefined1 *)((long)puVar2 + 0x90) = param_10;
    *(undefined1 *)((long)puVar2 + 0x50) = param_13;
    *(undefined8 *)((long)puVar2 + 0x58) = param_11;
    *(undefined8 *)((long)puVar2 + 0x68) = param_12;
    puVar3 = param_15;
    func_0x00010c10f4c0();
    *(char *)((long)puVar2 + 0xb0) = (char)puVar3;
    if (param_15 == (undefined *)0x0) {
      uVar1 = 1;
    }
    else {
      puVar3 = param_15;
      func_0x00010c26e1c0();
      uVar1 = SUB81(puVar3,0);
    }
    *(undefined1 *)((long)puVar2 + 0xb1) = uVar1;
    puVar3 = param_15;
    func_0x00010c0eace0();
    _objc_retainAutoreleasedReturnValue();
    if ((((puVar3 == (undefined *)0x0) || (puVar4 = puVar3, func_0x00010c26e360(), (int)puVar4 == 0)
         ) || (puVar4 = puVar3, func_0x00010c26e340(), (int)puVar4 == 0)) ||
       (puVar4 = puVar3, func_0x00010c26d8e0(), puVar5 = puVar3, (int)puVar4 == 0)) {
      puVar5 = PTR_PTR_1126d0070;
      _objc_alloc_init();
      func_0x00010c214420();
      func_0x00010c214400(puVar5);
      func_0x00010c213f00(puVar5);
      _objc_release(puVar3);
    }
    if (0 < param_16) {
      func_0x00010c214420(puVar5);
    }
    puVar3 = PTR_PTR_1126afec0;
    puVar4 = puVar5;
    func_0x00010c26e360();
    dVar6 = (double)(int)puVar4;
    func_0x00010c0cd480(puVar3);
    *(double *)((long)puVar2 + 0x98) = dVar6;
    puVar3 = PTR_PTR_1126afec0;
    puVar4 = puVar5;
    func_0x00010c26e340();
    dVar6 = (double)(int)puVar4;
    func_0x00010c0cd480(puVar3);
    *(double *)((long)puVar2 + 0xa0) = dVar6;
    puVar3 = PTR_PTR_1126afec0;
    puVar4 = puVar5;
    func_0x00010c26d8e0();
    dVar6 = (double)(int)puVar4;
    func_0x00010c0cd480(puVar3);
    *(double *)((long)puVar2 + 0xa8) = dVar6;
    func_0x00010be39960(puVar2);
    func_0x00010c283ba0(puVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 106a89fb4; end: 106a89fbb; -[SCViewControllerPresentationThumbnailAnimator _scAllowManuallyTriggerAppearanceFix] */

undefined8 FUN_106a89fb4(void)

{
  return 0;
}



/* Entry: 106a89fbc; end: 106a8aacf; -[SCViewControllerPresentationThumbnailAnimator animateTransition:] */

void FUN_106a89fbc(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_140 [48];
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
  
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf17b60();
  *(undefined **)(param_1 + 0xb8) = puVar5;
  _objc_release(puVar4);
  lVar6 = param_1 + 0xc0;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c29c4e0();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010bdfb220(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0xd0));
  dVar18 = *(double *)(param_1 + 0xe8);
  uVar19 = *(undefined8 *)(param_1 + 0xf0);
  uVar20 = *(undefined8 *)(param_1 + 0xf8);
  uVar21 = *(undefined8 *)(param_1 + 0x100);
  dVar16 = dVar18;
  _CGRectGetMidX(dVar18,uVar19,uVar20,uVar21);
  _CGRectGetMidY(dVar18,uVar19,uVar20,uVar21);
  lVar6 = param_1 + 0x10;
  dVar14 = dVar18;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c06d1e0();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar9 = lVar6;
  func_0x00010c06d1a0();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar10 = lVar6;
  func_0x00010c0834c0();
  uVar1 = (uint)lVar10 ^ 1;
  if (lVar8 == 0) {
    uVar1 = 1;
  }
  _objc_release(lVar6);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar10 = lVar6;
  func_0x00010c0834c0();
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf664c0();
  _objc_release(lVar6);
  func_0x00010be9a640(param_1);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar8 = param_1 + 8;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bef7700(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar6);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  lVar6 = param_1;
  func_0x00010be9a640();
  if (((int)lVar6 != 0) && ((((uVar1 | (uint)lVar7 | (uint)lVar9 | (uint)lVar10) ^ 1) & 1) != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf17b00();
    _objc_release(lVar6);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained(lVar7);
  lVar9 = lVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar6);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  if (((param_3 & 1) == 0) && ((*(byte *)(param_1 + 0xb1) & 1) != 0)) {
    bVar3 = false;
  }
  else {
    func_0x00010bdfb220(param_1);
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar14,uVar19,uVar20,uVar21);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    bVar3 = true;
  }
  lVar6 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lVar9 = param_1 + 0xd8;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
  }
  else {
    _objc_retain(lVar8);
    lVar10 = lVar8;
  }
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  if (lVar6 == 0) {
    dVar14 = *(double *)(param_1 + 0xe8);
    uVar20 = *(undefined8 *)(param_1 + 0xf8);
    uVar21 = *(undefined8 *)(param_1 + 0x100);
  }
  else {
    func_0x00010bfb68e0(lVar10);
  }
  _CGRectGetWidth();
  dVar15 = dVar14;
  _objc_release(lVar6);
  lVar6 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _CGAffineTransformMakeScale(&uStack_110,dVar14 / dVar15,dVar14 / dVar15);
  uVar13 = *(long *)(param_1 + 0x68) - 1;
  uVar19 = 0;
  if (uVar13 < 7) {
    uVar19 = *(undefined8 *)(&UNK_10dde3b98 + uVar13 * 8);
  }
  _CGAffineTransformMakeRotation(auStack_140,uVar19);
  _CGAffineTransformConcat(&uStack_e0,&uStack_110,auStack_140);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  func_0x00010c219960();
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar16,dVar18);
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar6 == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  else {
    func_0x00010be78000(param_1);
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    lVar8 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar7);
    func_0x00010befbb60(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar6);
    lVar6 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c228460(param_1);
    _objc_release(lVar6);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar4;
    _objc_release(uVar19);
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    dVar16 = 0.5;
    uVar17 = 0x3fe0000000000000;
    func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
    _objc_release(uVar19);
    cVar2 = *(char *)(param_1 + 0x50);
    lVar6 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar6);
    if (cVar2 == '\x01') {
      func_0x00010c2a5040();
      lVar7 = param_1 + 0xd8;
      dVar14 = dVar16;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c2a5040();
      uVar19 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c08c0e0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = 0;
      uVar20 = 0;
      func_0x00010c19f0e0(0,0,dVar16,dVar14);
      _objc_release(uVar19);
      _objc_release(lVar7);
      _objc_release(lVar6);
      lVar6 = param_1 + 8;
      _objc_loadWeakRetained(lVar6);
      lVar7 = lVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      uVar19 = uVar21;
      _CGRectGetMidX();
      _CGRectGetMidY(uVar21,uVar20,dVar16,dVar14);
      uVar20 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c08c0e0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dee80(uVar19,uVar21);
      _objc_release(uVar20);
      _objc_release(lVar7);
      _objc_release(lVar6);
      func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c19f0e0(puVar4);
      puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf199a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      func_0x00010c1d9820(puVar4);
    }
    else {
      func_0x00010bfb68e0();
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar6);
      func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c19f0e0(puVar4);
      puVar12 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
      puVar5 = (undefined *)(param_1 + 0xd8);
      dVar14 = dVar16;
      _objc_loadWeakRetained(puVar5);
      puVar11 = puVar5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf525a0();
      lVar6 = param_1 + 0xd8;
      dVar18 = dVar14;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c2a5040();
      lVar7 = param_1 + 0xd8;
      dVar15 = dVar18;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf20ca0();
      func_0x00010bf19a00(dVar16,uVar17,uVar20,uVar21,dVar14 * (dVar18 / dVar15),puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      func_0x00010c1d9820(puVar4);
      _objc_release(puVar12);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar11);
    }
    _objc_release(puVar5);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar19);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08c0e0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar19);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18260();
  _objc_release(puVar4);
  uVar20 = 0;
  uVar19 = 0;
  if (param_3 != 0) {
    uVar19 = *(undefined8 *)(param_1 + 0xa8);
  }
  func_0x00010bf03400(uVar19,PTR__OBJC_CLASS___UIView_1126aec20);
  if (param_3 != 0) {
    uVar20 = *(undefined8 *)(param_1 + 0x98);
  }
  func_0x00010bf03460(uVar20,0,*(undefined8 *)(param_1 + 0xa0),0,PTR__OBJC_CLASS___UIView_1126aec20)
  ;
  if (bVar3) {
    func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  _objc_release(lVar10);
  return;
}



/* Entry: 106a8aad0; end: 106a8acbb;  */

void FUN_106a8aad0(double param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_90 [48];
  
  cVar1 = *(char *)(*(long *)(param_2 + 0x20) + 0x50);
  lVar2 = *(long *)(param_2 + 0x20) + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010bfe0640();
    dVar8 = param_1 + 20.0;
    lVar4 = *(long *)(param_2 + 0x20) + 8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5040();
    dVar8 = (dVar8 / param_1) * 1.5;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _CGAffineTransformMakeScale(auStack_90,dVar8,dVar8);
  }
  else {
    func_0x00010bf20c60();
    lVar4 = *(long *)(param_2 + 0x20) + 8;
    dVar8 = param_1;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    _CGAffineTransformMakeScale(auStack_90,0x3ff3333333333333,param_1 / dVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_2 + 0x20) + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0bc120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166440();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 106a8acbc; end: 106a8adf3;  */

void FUN_106a8acbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_5 + 0x20) + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1677c0(0);
  _objc_release(lVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0xd0));
  lVar1 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bdfb220(*(undefined8 *)(param_5 + 0x20));
  uVar4 = uVar3;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar3,uVar5,param_3,param_4);
  lVar1 = *(long *)(param_5 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar4,uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106a8adf4; end: 106a8b20b;  */

void FUN_106a8adf4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
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
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar2 = (undefined *)(*(long *)(param_1 + 0x20) + 0xd8);
  _objc_loadWeakRetained(puVar2);
  if (lVar9 != 0) {
    func_0x00010c1677c0(0x3ff0000000000000,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    lVar9 = *(long *)(param_1 + 0x20) + 0xd8;
    _objc_loadWeakRetained(lVar9);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7c80(puVar4,param_2,lVar9,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + 0x20) + 0xd8;
    _objc_loadWeakRetained();
    if (lVar9 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_70,lVar9);
    }
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(puVar2,param_2,&uStack_a0);
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + 0x20) + 0xd8;
    _objc_loadWeakRetained(lVar9);
    func_0x00010bf345e0();
    func_0x00010c17a6a0(puVar2);
    _objc_release(lVar9);
    func_0x00010c1677c0(0,puVar2);
    lVar9 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar9);
    lVar5 = lVar9;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    _objc_release(lVar9);
    func_0x00010be954a0(*(undefined8 *)(param_1 + 0x20));
  }
  lVar9 = *(long *)(param_1 + 0x20) + 200;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c29c320();
  _objc_release(lVar9);
  lVar9 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar9 + 0x50) & 1) == 0) {
    lVar9 = lVar9 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar9;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0bc120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0);
    *(long *)(*(long *)(param_1 + 0x20) + 0xe0) = lVar7;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  lVar9 = lVar9 + 8;
  _objc_loadWeakRetained(lVar9);
  lVar5 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94a40();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  lVar9 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar9);
  lVar5 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf77e80(lVar9,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be9a640();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    lVar9 = *(long *)(param_1 + 0x20) + 8;
    _objc_loadWeakRetained(lVar9);
    func_0x00010bf941a0();
    _objc_release(lVar9);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
  }
  lVar9 = *(long *)(param_1 + 0x20) + 0xc0;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c29c460();
  _objc_release(lVar9);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 106a8b20c; end: 106a8b33b; -[SCViewControllerPresentationThumbnailAnimator setupAnimationForBaseView:] */

void FUN_106a8b20c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  _objc_retain(param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  dVar3 = param_1;
  func_0x00010bf20ca0(param_7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(&uStack_90,param_1 / dVar3,param_1 / dVar3);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c219960(param_7,param_6,&uStack_c0);
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_70;
  uVar6 = uStack_80;
  func_0x00010bf20c00();
  uVar5 = uVar4;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar4,uVar6,param_3,param_4);
  func_0x00010c17a6a0(uVar5,uVar4,param_7);
  _objc_release(param_7);
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 106a8b33c; end: 106a8b6ff; -[SCViewControllerPresentationThumbnailAnimator updateBaseView:] */

void FUN_106a8b33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  
  _objc_retain(param_7);
  uVar7 = (uint)(*(long *)(param_5 + 0x58) == 1);
  if (*(long *)(param_5 + 0x58) == 0) {
    if (param_7 != (undefined *)0x0) {
      puVar1 = param_7;
      func_0x00010c27ad80();
      uVar7 = (uint)puVar1 ^ 1;
      goto joined_r0x000106a8b398;
    }
  }
  else {
joined_r0x000106a8b398:
    if ((param_7 != (undefined *)0x0) && (uVar7 != 0)) {
      if (*(char *)(param_5 + 0xb0) == '\x01') {
        puVar1 = param_7;
        func_0x00010c245f60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 == (undefined *)0x0) goto LAB_106a8b3fc;
        uVar8 = *(undefined8 *)(param_5 + 0x28);
        *(undefined **)(param_5 + 0x28) = puVar1;
        _objc_retain();
        _objc_release(uVar8);
        _objc_storeWeak(param_5 + 0xd8,puVar1);
      }
      else {
LAB_106a8b3fc:
        puVar1 = PTR_PTR_1126d0068;
        func_0x00010bf16420(PTR_PTR_1126d0068);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be67f40(param_5);
      }
      _objc_release(puVar1);
      goto LAB_106a8b430;
    }
  }
  _objc_storeWeak(param_5 + 0xd8,param_7);
LAB_106a8b430:
  if (((*(char *)(param_5 + 0x60) == '\x01') && (*(long *)(param_5 + 0x20) == 0)) &&
     ((*(byte *)(param_5 + 0x50) & 1) == 0)) {
    *(undefined1 *)(param_5 + 0x60) = 0;
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    *(undefined **)(param_5 + 0x20) = puVar1;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 0.5;
    uVar14 = 0x3fe0000000000000;
    func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
    _objc_release(uVar8);
    lVar3 = param_5 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x20));
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_5 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar10 = dVar9;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar9,uVar14,param_3,param_4);
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(dVar10,dVar9);
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
    func_0x00010c19f0e0(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
    lVar3 = param_5 + 0xd8;
    dVar11 = dVar10;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    lVar4 = param_5 + 0xd8;
    dVar12 = dVar11;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c2a5040();
    lVar6 = param_5 + 0xd8;
    dVar13 = dVar12;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf20ca0();
    func_0x00010bf19a00(dVar10,dVar9,param_3,param_4,dVar11 * (dVar12 / dVar13),puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_5 + 8;
    _objc_loadWeakRetained(param_5);
    lVar3 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(param_5);
    _objc_release(uVar8);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106a8b700; end: 106a8b72b; -[SCViewControllerPresentationThumbnailAnimator operaBoundsDidChange:] */

void FUN_106a8b700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x70) = param_1;
  *(undefined8 *)(param_5 + 0x78) = param_2;
  *(undefined8 *)(param_5 + 0x80) = param_3;
  *(undefined8 *)(param_5 + 0x88) = param_4;
  func_0x00010bdfb220();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_5 + 0xd0),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106a8b72c; end: 106a8b7bb; -[SCViewControllerPresentationThumbnailAnimator _destinationFrame] */

undefined8 FUN_106a8b72c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(char *)(param_2 + 0x90) == '\x01') {
    param_1 = *(undefined8 *)(param_2 + 0x70);
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



/* Entry: 106a8b7bc; end: 106a8b823; -[SCViewControllerPresentationThumbnailAnimator _onBaseViewImageReady:] */

void FUN_106a8b7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a8b824; end: 106a8b903; -[SCViewControllerPresentationThumbnailAnimator _prepareBaseViewForAnimation] */

void FUN_106a8b824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_5 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0xd8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  *(long *)(param_5 + 0x18) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_5 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfb68e0();
  *(undefined8 *)(param_5 + 0x30) = uVar3;
  *(undefined8 *)(param_5 + 0x38) = uVar4;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  _objc_release(lVar1);
  return;
}



/* Entry: 106a8b904; end: 106a8b9c7; -[SCViewControllerPresentationThumbnailAnimator _restoreBaseViewForAnimation] */

void FUN_106a8b904(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010befbb60(uVar2,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c219960();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c19f0e0(uVar2,uVar3,uVar4,uVar5);
  _objc_release(param_1);
  return;
}



/* Entry: 106a8b9c8; end: 106a8ba4b; -[SCViewControllerPresentationThumbnailAnimator _initDarkBackgroundView] */

void FUN_106a8b9c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0xd0));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0xd0));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 106a8ba4c; end: 106a8ba63; -[SCViewControllerPresentationThumbnailAnimator delegate] */

void FUN_106a8ba4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8ba64; end: 106a8ba6f; -[SCViewControllerPresentationThumbnailAnimator setDelegate:] */

void FUN_106a8ba64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 106a8ba70; end: 106a8ba87; -[SCViewControllerPresentationThumbnailAnimator baseViewDelegate] */

void FUN_106a8ba70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8ba88; end: 106a8ba93; -[SCViewControllerPresentationThumbnailAnimator setBaseViewDelegate:] */

void FUN_106a8ba88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 106a8ba94; end: 106a8ba9b; -[SCViewControllerPresentationThumbnailAnimator darkBackgroundView] */

undefined8 FUN_106a8ba94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106a8ba9c; end: 106a8bab3; -[SCViewControllerPresentationThumbnailAnimator baseView] */

void FUN_106a8ba9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8bab4; end: 106a8babf; -[SCViewControllerPresentationThumbnailAnimator startingFrame] */

undefined8 FUN_106a8bab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106a8bac0; end: 106a8bacb; -[SCViewControllerPresentationThumbnailAnimator setStartingFrame:] */

void FUN_106a8bac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xe8) = param_1;
  *(undefined8 *)(param_5 + 0xf0) = param_2;
  *(undefined8 *)(param_5 + 0xf8) = param_3;
  *(undefined8 *)(param_5 + 0x100) = param_4;
  return;
}



/* Entry: 106a8bacc; end: 106a8bad3; -[SCViewControllerPresentationThumbnailAnimator dismissalMask] */

undefined8 FUN_106a8bacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106a8bad4; end: 106a8bb4f; -[SCViewControllerPresentationThumbnailAnimator .cxx_destruct] */

void FUN_106a8bad4(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a8bb50; end: 106a8bde3; -[SCViewControllerTransitionAnimator initWithParentViewController:childViewController:baseView:topInset:bottomInset:baseViewBehavior:baseViewOrientation:transitionMode:auxViewActionEnabled:operaBounds:configProvider:transitionConfigProvider:] */

undefined8 *
FUN_106a8bb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  uVar7 = param_3;
  uVar8 = param_4;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_a0 = PTR_PTR_1126f4890;
  puVar1 = &uStack_a8;
  uStack_a8 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x14,param_11);
    _objc_storeWeak(puVar1 + 0x11,param_9);
    _objc_storeWeak(puVar1 + 0x12,param_10);
    puVar1[1] = param_14;
    puVar1[2] = param_12;
    puVar1[7] = param_1;
    puVar1[8] = param_2;
    puVar1[6] = param_13;
    *(undefined1 *)((long)puVar1 + 0x4b) = param_15;
    puVar1[10] = param_3;
    puVar1[0xb] = param_4;
    puVar1[0xc] = param_5;
    puVar1[0xd] = param_6;
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_18);
    puVar3 = puVar1 + 0x14;
    _objc_loadWeakRetained();
    if (puVar3 == (undefined8 *)0x0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_e0,puVar3);
    }
    _objc_release(puVar3);
    puVar3 = puVar1 + 0x14;
    _objc_loadWeakRetained(puVar3);
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960();
    _objc_release(puVar3);
    puVar3 = puVar1 + 0x14;
    _objc_loadWeakRetained(puVar3);
    _objc_retain();
    func_0x00010bf20c00(puVar3);
    puVar4 = puVar1 + 0x11;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51460(puVar3);
    _objc_release(puVar3);
    puVar1[0x16] = uVar2;
    puVar1[0x17] = uVar6;
    puVar1[0x18] = uVar7;
    puVar1[0x19] = uVar8;
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1 + 0x14;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c219960();
    _objc_release(puVar3);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 106a8bde4; end: 106a8be1f; -[SCViewControllerTransitionAnimator present:] */

void FUN_106a8bde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beaf060();
  func_0x00010beac1c0(param_1);
  func_0x00010beb0e80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf03270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_animateTransition__11259e640,param_3);
  return;
}



/* Entry: 106a8be20; end: 106a8bea7; -[SCViewControllerTransitionAnimator operaBoundsDidChange:] */

void FUN_106a8be20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  
  *(undefined8 *)(param_5 + 0x50) = param_1;
  *(undefined8 *)(param_5 + 0x58) = param_2;
  *(undefined8 *)(param_5 + 0x60) = param_3;
  *(undefined8 *)(param_5 + 0x68) = param_4;
  func_0x00010c1d5340(*(undefined8 *)(param_5 + 0x18));
  uVar1 = *(ulong *)(param_5 + 0x28);
  _objc_opt_respondsToSelector(uVar1,PTR_s_operaBoundsDidChange__112618220);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ea030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x28),
               PTR_s_operaBoundsDidChange__112618220);
    return;
  }
  return;
}



/* Entry: 106a8bea8; end: 106a8c0d3; -[SCViewControllerTransitionAnimator dismiss:] */

void FUN_106a8bea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
    *(char *)(param_1 + 0x4a) = (char)param_3;
    return;
  }
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22f160();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar4 = param_1 + 0x90;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0cfc20();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((uVar6 & 1) == 0) {
      if ((int)lVar2 != 0) {
        lVar1 = param_1 + 0x90;
        _objc_loadWeakRetained();
        lVar3 = lVar1;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c10fd00();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + 0x90;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar7);
        _objc_release(lVar3);
        _objc_release(lVar1);
        if (lVar7 != lVar2) goto LAB_106a8c058;
      }
      puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf07b60();
      _objc_release(puVar8);
      if (puVar9 != (undefined *)0x0) {
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_106a8c0e8;
        puStack_90 = &UNK_110842e18;
        lStack_88 = param_1;
        func_0x000100162d98("APPSTORE",&puStack_a8);
        return;
      }
      lVar1 = param_1 + 0x90;
      _objc_loadWeakRetained(lVar1);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106a8c0d4;
      puStack_68 = &UNK_110845ce0;
      lStack_60 = param_1;
      uStack_58 = (char)param_3;
      func_0x00010bf84b00();
      _objc_release(lVar1);
      return;
    }
  }
LAB_106a8c058:
                    /* WARNING: Could not recover jumptable at 0x00010bf82f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_dismiss__1125be580,param_3);
  return;
}



/* Entry: 106a8c0d4; end: 106a8c0e7;  */

void FUN_106a8c0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_dismiss__1125be580,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a8c0e8; end: 106a8c133;  */

void FUN_106a8c0e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf84b00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf82f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_dismiss__1125be580,0);
  return;
}



/* Entry: 106a8c134; end: 106a8c193; -[SCViewControllerTransitionAnimator setBaseViewFrame:] */

void FUN_106a8c134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xb0) = param_1;
  *(undefined8 *)(param_5 + 0xb8) = param_2;
  *(undefined8 *)(param_5 + 0xc0) = param_3;
  *(undefined8 *)(param_5 + 200) = param_4;
  func_0x00010c209d00(*(undefined8 *)(param_5 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c18c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x18),
             PTR_s_setDestinationFrame__112640ad8);
  return;
}



/* Entry: 106a8c194; end: 106a8c22f; -[SCViewControllerTransitionAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:] */

void FUN_106a8c194(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_2 + 8) = param_6;
  *(undefined8 *)(param_2 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126d0068;
  _objc_retain(param_4);
  func_0x00010bf16420(puVar1,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be68f20(param_1,param_2,param_3,puVar1,param_4,param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8c230; end: 106a8c23b; -[SCViewControllerTransitionAnimator updateTransitionMode:] */

void FUN_106a8c230(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateTransitionMode__112680760);
  return;
}



/* Entry: 106a8c23c; end: 106a8c243; -[SCViewControllerTransitionAnimator transitionMode] */

undefined8 FUN_106a8c23c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106a8c244; end: 106a8c293; -[SCViewControllerTransitionAnimator updateDismissalAnimationVolumeControl:] */

/* WARNING: Possible PIC construction at 0x000106a8c26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a8c270) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106a8c244(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c224270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setVolumeController__112666ac0,lVar2);
  return;
}



/* Entry: 106a8c294; end: 106a8c29b; -[SCViewControllerTransitionAnimator dismissalSwipeDirection] */

void FUN_106a8c294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c264750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_swipeDirection_112676bf8);
  return;
}



/* Entry: 106a8c29c; end: 106a8c2cf; -[SCViewControllerTransitionAnimator viewControllerTransitionAnimatorWillBeginPresenting] */

void FUN_106a8c29c(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8c2d0; end: 106a8c327; -[SCViewControllerTransitionAnimator viewControllerTransitionAnimatorDidFinishPresenting] */

void FUN_106a8c2d0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar1 = param_1 + 0x98;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c460();
  _objc_release(lVar1);
  if (*(char *)(param_1 + 0x49) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_dismiss__1125be580,*(undefined1 *)(param_1 + 0x4a));
    return;
  }
  return;
}



/* Entry: 106a8c328; end: 106a8c36b; -[SCViewControllerTransitionAnimator viewControllerPresentationAnimatorDidCreateBaseViewForDismissal:] */

void FUN_106a8c328(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xa0,param_3);
  func_0x00010c16f460(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8c36c; end: 106a8c497; -[SCViewControllerTransitionAnimator setBaseView:] */

void FUN_106a8c36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c960();
  _objc_release(lVar1);
  func_0x00010c283ba0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf16300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0xa0,uVar2);
  _objc_release(uVar2);
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010befbb60(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1677c0(0);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c228460(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c16f460(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a8c498; end: 106a8c4bf; -[SCViewControllerTransitionAnimator resetGestureIfNecessary] */

/* WARNING: Possible PIC construction at 0x000106a8c4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a8c4b0) */

void FUN_106a8c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_resetGestureIfNecessary_11262bd38);
  return;
}



/* Entry: 106a8c4c0; end: 106a8c4c7; -[SCViewControllerTransitionAnimator enableFadeTransitionInDismissal:fadingViews:] */

void FUN_106a8c4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf90330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_enableFadeTransition_fadingViews_1125c1a70);
  return;
}



/* Entry: 106a8c4c8; end: 106a8c4cf; -[SCViewControllerTransitionAnimator disableFadeTransitionInDismissal] */

void FUN_106a8c4c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_disableFadeTransition_1125bd968);
  return;
}



/* Entry: 106a8c4d0; end: 106a8c587; -[SCViewControllerTransitionAnimator _setupPresentationAnimator] */

void FUN_106a8c4d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x90;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar3 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1;
    func_0x00010be7f740(param_1,param_2,lVar1,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    func_0x00010c16f4c0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    func_0x00010c209d00(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                        *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a8c588; end: 106a8c6ef; -[SCViewControllerTransitionAnimator _setupDismissalAnimator] */

void FUN_106a8c588(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x90;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = PTR_PTR_1126d0078;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 8);
    lVar4 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c034060(puVar3,param_2,lVar1,lVar2,uVar5,uVar6,lVar4,*(undefined8 *)(param_1 + 0x78)
                       );
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar4);
    lVar4 = param_1 + 0x98;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf63480(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1893e0(*(undefined8 *)(param_1 + 0x18),param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010c18c2e0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                        *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x18));
    func_0x00010c1d5340(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x18));
    func_0x00010c201580(*(undefined8 *)(param_1 + 0x18),param_2,1);
    lVar4 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c224260(*(undefined8 *)(param_1 + 0x18),param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c217440(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18));
    func_0x00010c18c460(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a8c6f0; end: 106a8c7ef; -[SCViewControllerTransitionAnimator _setupUpNextAnimator] */

void FUN_106a8c6f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x90;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (lVar2 != 0)) && (*(char *)(param_1 + 0x4b) == '\x01')) {
    puVar3 = PTR_PTR_1126d0060;
    _objc_alloc();
    func_0x00010c034040(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar5);
    lVar4 = param_1 + 0x98;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar4);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf63480(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1893e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010c18c2e0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                        *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                        *(undefined8 *)(param_1 + 0x20));
    func_0x00010c217440(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    func_0x00010c173600(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a8c7f0; end: 106a8c8df; -[SCViewControllerTransitionAnimator _presentationAnimatorWithParentVC:childVC:baseView:] */

void FUN_106a8c7f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0080;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = param_1;
  func_0x00010be3ee80();
  func_0x00010c26e360();
  func_0x00010c034000(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),puVar1,param_2
                      ,param_3,param_4,param_5,1,uVar3,uVar4,(char)lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a8c8e0; end: 106a8c8f3; -[SCViewControllerTransitionAnimator _isCircleTransition] */

bool FUN_106a8c8e0(long param_1)

{
  return *(long *)(param_1 + 8) - 1U < 3;
}



/* Entry: 106a8c8f4; end: 106a8ca9f; -[SCViewControllerTransitionAnimator _onDismissalBaseViewImageReady:baseView:topInset:transitionMode:] */

void FUN_106a8c8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010c01bf60();
  _objc_release(param_7);
  func_0x00010c228460(*(undefined8 *)(param_5 + 0x28));
  uVar4 = 0;
  func_0x00010c1677c0(puVar1);
  lVar2 = param_5 + 0x90;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_storeWeak(param_5 + 0xa0,puVar1);
  func_0x00010bf20c00(param_8);
  lVar2 = param_5 + 0x88;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_8);
  _objc_release(param_8);
  *(undefined8 *)(param_5 + 0xb0) = uVar4;
  *(undefined8 *)(param_5 + 0xb8) = param_2;
  *(undefined8 *)(param_5 + 0xc0) = param_3;
  *(undefined8 *)(param_5 + 200) = param_4;
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_5 + 0x18);
  lVar2 = param_5 + 0xa0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c283be0(param_1,uVar4);
  _objc_release(lVar2);
  func_0x00010c18c2e0(*(undefined8 *)(param_5 + 0xb0),*(undefined8 *)(param_5 + 0xb8),
                      *(undefined8 *)(param_5 + 0xc0),*(undefined8 *)(param_5 + 200),
                      *(undefined8 *)(param_5 + 0x18));
  func_0x00010c18c460(*(undefined8 *)(param_5 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8caa0; end: 106a8cab7; -[SCViewControllerTransitionAnimator parentVC] */

void FUN_106a8caa0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8cab8; end: 106a8cacf; -[SCViewControllerTransitionAnimator childVC] */

void FUN_106a8cab8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8cad0; end: 106a8cadb; -[SCViewControllerTransitionAnimator setChildVC:] */

void FUN_106a8cad0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106a8cadc; end: 106a8caf3; -[SCViewControllerTransitionAnimator delegate] */

void FUN_106a8cadc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8caf4; end: 106a8caff; -[SCViewControllerTransitionAnimator setDelegate:] */

void FUN_106a8caf4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 106a8cb00; end: 106a8cb17; -[SCViewControllerTransitionAnimator baseView] */

void FUN_106a8cb00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8cb18; end: 106a8cb23; -[SCViewControllerTransitionAnimator baseViewFrame] */

undefined8 FUN_106a8cb18(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106a8cb24; end: 106a8cb3b; -[SCViewControllerTransitionAnimator volumeController] */

void FUN_106a8cb24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8cb3c; end: 106a8cb47; -[SCViewControllerTransitionAnimator setVolumeController:] */

void FUN_106a8cb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106a8cb48; end: 106a8cb4f; -[SCViewControllerTransitionAnimator thumbnailTransitionDurationMs] */

undefined4 FUN_106a8cb48(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



/* Entry: 106a8cb50; end: 106a8cb57; -[SCViewControllerTransitionAnimator setThumbnailTransitionDurationMs:] */

void FUN_106a8cb50(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 106a8cb58; end: 106a8cbcf; -[SCViewControllerTransitionAnimator .cxx_destruct] */

void FUN_106a8cb58(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106a8cbd0; end: 106a8cbd3; +[SCViewControllerTransitionHelper baseViewImageForBaseView:baseViewOrientation:] */

void FUN_106a8cbd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddb530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__captureBaseViewImageForBaseView_1125546e8);
  return;
}



/* Entry: 106a8cbd4; end: 106a8ccdb; +[SCViewControllerTransitionHelper _captureBaseViewImageForBaseView:baseViewOrientation:] */

void FUN_106a8cbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c98e0;
  _objc_retain(param_3);
  func_0x00010bf18180(puVar1,param_2,&PTR____CFConstantStringClassReference_110e69378);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar3,param_2,param_3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar3;
  if ((param_4 - 2U & 0xfffffffffffffffa) == 0) {
    func_0x00010bdd2c20(param_1,param_2,param_4);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  func_0x00010bf94960(PTR_PTR_1126c98e0,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a8ccdc; end: 106a8ccfb; +[SCViewControllerTransitionHelper _baseViewRotatationDegreeForOrientation:] */

undefined8 FUN_106a8ccdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 - 2U < 6) {
    uVar1 = *(undefined8 *)(&UNK_10dde3bd0 + (param_3 - 2U) * 8);
  }
  return uVar1;
}



/* Entry: 106a8ccfc; end: 106a8ce0b;  */

void FUN_106a8ccfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126c0fa8;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a8ce1c;
  puStack_48 = &UNK_11095a0a8;
  uStack_40 = param_1;
  _objc_retain(puVar2);
  puStack_38 = puVar2;
  _objc_retain(param_1);
  func_0x00010c0c1320(uVar3,param_2,&PTR___NSConcreteGlobalBlock_11095a028,
                      &PTR___NSConcreteGlobalBlock_11095a048,&PTR___NSConcreteGlobalBlock_11095a068,
                      &PTR___NSConcreteGlobalBlock_11095a088,&puStack_60,
                      &PTR___NSConcreteGlobalBlock_11095a0d8,&PTR___NSConcreteGlobalBlock_11095a0f8)
  ;
  _objc_release(uVar3);
  puVar1 = puStack_38;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_40);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a8ce0c; end: 106a8ce1b;  */

void FUN_106a8ce0c(void)

{
  return;
}



/* Entry: 106a8ce1c; end: 106a8cee7;  */

void FUN_106a8ce1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0fb0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010846d990(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1805c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c202be0(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8cee8; end: 106a8ceef;  */

void FUN_106a8cee8(void)

{
  return;
}



/* Entry: 106a8cef0; end: 106a8cf73;  */

void FUN_106a8cef0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d0088;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c21e620(puVar1);
  _objc_release(uVar2);
  func_0x00010c1e5a20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8cf74; end: 106a8d093;  */

void FUN_106a8cf74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0fb0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010846d990(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c202be0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8d094; end: 106a8d253;  */

void FUN_106a8d094(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0090;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c11af80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b1e0();
  func_0x00010c1e5b60(puVar1);
  _objc_release(uVar2);
  func_0x00010bf8c980(param_2);
  func_0x00010c193c40(puVar1);
  uVar2 = param_2;
  func_0x00010c11af80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5b80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1e5c20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8d254; end: 106a8d373;  */

void FUN_106a8d254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0fb0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bf82200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010846d990(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c202be0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8d374; end: 106a8d43f; -[SCSpotlightOperaDislikeRequester initWithUserSession:httpMetadataService:httpRequestModifier:] */

undefined1 *
FUN_106a8d374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4898;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 106a8d440; end: 106a8d6db; -[SCSpotlightOperaDislikeRequester submitDislikeRequestWithDislikeSelection:storySnap:completion:] */

void FUN_106a8d440(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0fa0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar1);
  _objc_release(puVar3);
  func_0x00010c216900(puVar1);
  func_0x00010c206c40(puVar1);
  uVar2 = param_4;
  FUN_106a8ccfc(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c20d3a0(puVar1);
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c0720c0();
  if (((uVar4 & 1) != 0) || (uVar4 = param_3, func_0x00010c0720c0(), (int)uVar4 != 0)) {
    func_0x00010c1a8480(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar2,&PTR____CFConstantStringClassReference_110def498,
                      &PTR____CFConstantStringClassReference_110e15c38,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c25f600(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106a8d6dc; end: 106a8d6f7;  */

void FUN_106a8d6dc(long param_1)

{
  long lVar1;
  long in_x5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a8d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,in_x5 == 0);
    return;
  }
  return;
}



/* Entry: 106a8d6f8; end: 106a8d8df; -[SCSpotlightOperaDislikeRequester submitNotInterestedRequestWithStorySnap:completion:] */

void FUN_106a8d6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c0fa8;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar3 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a8cef0;
  puStack_60 = &UNK_110900858;
  _objc_retain(puVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a8cf74;
  puStack_88 = &UNK_11095a118;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106a8d094;
  puStack_b0 = &UNK_11095a148;
  puStack_80 = puVar2;
  _objc_retain(puVar2);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x106a8d174;
  puStack_d8 = &UNK_11095a178;
  puStack_a8 = puVar2;
  _objc_retain(puVar2);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106a8d254;
  puStack_100 = &UNK_11095a1a8;
  puStack_d0 = puVar2;
  _objc_retain(puVar2);
  puStack_f8 = puVar2;
  func_0x00010c0bf680(uVar3,param_2,&puStack_78,&puStack_a0,0,&puStack_c8,&puStack_f0,0,0,0,
                      &puStack_118);
  _objc_release(uVar3);
  puVar1 = puStack_f8;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_d0);
  _objc_release(puStack_a8);
  _objc_release(puStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  func_0x00010bec62c0(param_1,param_2,puVar2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a8d8e0; end: 106a8d943; -[SCSpotlightOperaDislikeRequester submitNotInterestedRequestWithSnapPlaybackMetadata:completion:] */

void FUN_106a8d8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  FUN_106a8ccfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec62c0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8d944; end: 106a8db77; -[SCSpotlightOperaDislikeRequester _submitNotInterestedRequestWithStoryKey:completion:] */

void FUN_106a8d944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0fa0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar1);
  _objc_release(puVar3);
  func_0x00010c216900(puVar1);
  func_0x00010c206c40(puVar1);
  func_0x00010c20d3a0(puVar1);
  _objc_release(param_3);
  func_0x00010c1a8480(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar2,&PTR____CFConstantStringClassReference_110def498,
                      &PTR____CFConstantStringClassReference_110e15c38,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c25f600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a8db78; end: 106a8db93;  */

void FUN_106a8db78(long param_1)

{
  long lVar1;
  long in_x5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106a8db8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,in_x5 == 0);
    return;
  }
  return;
}



/* Entry: 106a8db94; end: 106a8dbcf; -[SCSpotlightOperaDislikeRequester .cxx_destruct] */

void FUN_106a8db94(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a8dbd0; end: 106a8dd2b; -[SCSpotlightRepliesOperaPlugin initWithSpotlightRepliesScopeExposer:circumstanceEngine:story:pageSessionId:prependedCommentIds:repliesTrayOpenSource:playbackShareId:] */

undefined1 *
FUN_106a8dbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f48a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a8dd2c; end: 106a8dd2f; -[SCSpotlightRepliesOperaPlugin setPlaylistItemController:] */

void FUN_106a8dd2c(void)

{
  return;
}


