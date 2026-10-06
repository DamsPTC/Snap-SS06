/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106706844; end: 10670690f;  */

void FUN_106706844(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf398a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf398a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106706910; end: 106706adb; -[SCLensExplorerPressAndHoldOnboardingView _beginHoldAnimation] */

void FUN_106706910(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8;
  _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
  func_0x00010bff2f00();
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  func_0x00010c00eb20(0x3fd999999999999a);
  func_0x00010c1aa700(param_1);
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = param_1;
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106706adc;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bef6cc0(uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bef78c0(uVar3);
  _objc_release(uVar3);
  func_0x00010bfe8480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc80(0x3fe0000000000000);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 106706adc; end: 106706c2b;  */

void FUN_106706adc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_50 = uVar2;
    uStack_48 = uVar4;
    uStack_40 = uVar6;
    uStack_38 = uVar7;
    uStack_30 = uVar3;
    uStack_28 = uVar5;
    func_0x00010c219960();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfcff20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = uVar2;
    uStack_48 = uVar4;
    uStack_40 = uVar6;
    uStack_38 = uVar7;
    uStack_30 = uVar3;
    uStack_28 = uVar5;
    func_0x00010c219960();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf398a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    _CGAffineTransformMakeScale(&uStack_80,0x3fc999999999999a,0x3fc999999999999a);
    lVar1 = param_1;
    func_0x00010bf398a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    uStack_40 = uStack_70;
    uStack_28 = uStack_58;
    uStack_30 = uStack_60;
    func_0x00010c219960();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106706c2c; end: 106706c3f; -[SCLensExplorerPressAndHoldOnboardingView intrinsicContentSize] */

undefined1  [16] FUN_106706c2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4060e00000000000;
  auVar1._0_8_ = 0x406f000000000000;
  return auVar1;
}



/* Entry: 106706c40; end: 106706d9f; -[SCLensExplorerPressAndHoldOnboardingView _createCircleImage] */

void FUN_106706c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  func_0x00010c1bdd00(0x3ff8000000000000,puVar1);
  uVar4 = 0x4000000000000000;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0x4000000000000000,0x4000000000000000,0x4030000000000000,0x4030000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(0x4034000000000000,0x4034000000000000,uVar4,0);
  _objc_release();
  _UIGraphicsGetCurrentContext();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010c12fc60(puVar1,param_2,puVar2);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
  }
  _UIGraphicsEndImageContext();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106706da0; end: 106706daf; -[SCLensExplorerPressAndHoldOnboardingView imagePreviewPropertyAnimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106706da0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e920);
}



/* Entry: 106706db0; end: 106706def; -[SCLensExplorerPressAndHoldOnboardingView setImagePreviewPropertyAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106706db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e920;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106706df0; end: 106706dff; -[SCLensExplorerPressAndHoldOnboardingView previewView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106706df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e924);
}



/* Entry: 106706e00; end: 106706e3f; -[SCLensExplorerPressAndHoldOnboardingView setPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106706e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e924;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106706e40; end: 106706e4f; -[SCLensExplorerPressAndHoldOnboardingView circleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106706e40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e928);
}



/* Entry: 106706e50; end: 106706e8f; -[SCLensExplorerPressAndHoldOnboardingView setCircleView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106706e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e928;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106706e90; end: 106706e9f; -[SCLensExplorerPressAndHoldOnboardingView handView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106706e90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e92c);
}



/* Entry: 106706ea0; end: 106706edf; -[SCLensExplorerPressAndHoldOnboardingView setHandView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106706ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274e92c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106706ee0; end: 106706f6f; -[SCLensExplorerPressAndHoldOnboardingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106706ee0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e92c,0);
  _objc_storeStrong(param_1 + _DAT_11274e928,0);
  _objc_storeStrong(param_1 + _DAT_11274e924,0);
  _objc_storeStrong(param_1 + _DAT_11274e920,0);
  _objc_storeStrong(param_1 + _DAT_11274e91c,0);
  _objc_storeStrong(param_1 + _DAT_11274e910,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e914,0);
  return;
}



/* Entry: 106706f70; end: 1067070ff; -[SCLensExplorerSingleCategoryViewController initWithCategoryModelProvider:categoryPageProvider:isLensCollectionCategory:isModal:styleOverride:accessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106706f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f2a40;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_11274e930;
    *(undefined1 *)((long)puVar1 + lVar5) = param_6;
    lVar4 = (long)_DAT_11274e934;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e938;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e93c) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274e940) = param_7;
    lVar4 = (long)_DAT_11274e944;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release();
    if (*(char *)((long)puVar1 + lVar5) == '\x01') {
      func_0x00010b837400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_11274e948;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
      *(undefined8 *)((long)puVar1 + lVar4) = uVar2;
      _objc_release(uVar3);
      func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar4));
      func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
      func_0x00010c219b20(puVar1);
      func_0x00010c1c8b80(puVar1);
    }
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106707100; end: 1067071cb; -[SCLensExplorerSingleCategoryViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707100(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2a40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010beacf40(param_1);
  func_0x00010beadda0(param_1);
  func_0x00010beaa560(param_1);
  func_0x00010beabac0(param_1);
  func_0x00010be4cce0(param_1);
  func_0x00010bead480(param_1);
  return;
}



/* Entry: 1067071cc; end: 106707227; -[SCLensExplorerSingleCategoryViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067071cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  if (*(long *)(param_1 + _DAT_11274e94c) != 0) {
    func_0x00010c0f22e0();
  }
  return;
}



/* Entry: 106707228; end: 10670727b; -[SCLensExplorerSingleCategoryViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707228(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  if (*(long *)(param_1 + _DAT_11274e94c) != 0) {
    func_0x00010c0f2300();
  }
  return;
}



/* Entry: 10670727c; end: 10670727f; -[SCLensExplorerSingleCategoryViewController preferredStatusBarStyle] */

undefined8 FUN_10670727c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 106707280; end: 106707323; -[SCLensExplorerSingleCategoryViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707280(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274e950;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126af080;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1f8460(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c2162c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    uVar2 = 1;
    if (*(char *)(param_1 + _DAT_11274e930) == '\0') {
      uVar2 = 2;
    }
    func_0x00010c18f820(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106707324; end: 106707447; -[SCLensExplorerSingleCategoryViewController _setupLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707324(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126cd458;
  _objc_alloc();
  func_0x00010c014f60(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11274e954;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1d3220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106707448; end: 106707473;  */

void FUN_106707448(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4cce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106707474; end: 106707657; -[SCLensExplorerSingleCategoryViewController _setupAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707474(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11274e944;
  lVar2 = param_1;
  lStack_b0 = unaff_x22;
  if (*(long *)(param_1 + lVar7) != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x19 = *(long *)(param_1 + lVar7);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    lStack_78 = lVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493c0(0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    lVar2 = unaff_x19;
    _objc_release();
    lStack_b0 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106707658;
  lStack_a8 = unaff_x21;
  lStack_a0 = unaff_x20;
  lStack_98 = unaff_x19;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c209fc0(*(undefined8 *)(lVar2 + _DAT_11274e954));
  _objc_initWeak(auStack_b8,lVar2);
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11274e934);
  func_0x00010c135b40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_c0;
  _objc_copyWeak(puVar6,auStack_b8);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  return;
}



/* Entry: 106707658; end: 106707763; -[SCLensExplorerSingleCategoryViewController _loadCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707658(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e954),param_2,2);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e934);
  func_0x00010c135b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106707764; end: 1067077cb;  */

void FUN_106707764(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27060();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067077cc; end: 106707837; -[SCLensExplorerSingleCategoryViewController _handleCategoryFetchedWithCategoryModel:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067077cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e954),param_2,3);
  }
  else {
    func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e954),param_2,1);
    func_0x00010beaea80(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106707838; end: 106707adf; -[SCLensExplorerSingleCategoryViewController _setupPageWithCategoryModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707838(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11274e94c;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    func_0x00010c0d9840();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274e938);
    lVar4 = param_3;
    func_0x00010bf334a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1240(uVar5,param_2,lVar4,puVar1,1,*(undefined1 *)(param_1 + _DAT_11274e93c));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar3);
    _objc_release(lVar4);
    func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar4,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(lVar4);
    func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274e948);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067a20(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c152980(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"contentOffset");
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa220(uVar5,param_2,param_1,puVar2,1,0);
    _objc_release(puVar2);
    _objc_release(uVar5);
    func_0x00010beaea60(param_1);
    if (*(long *)(param_1 + _DAT_11274e944) != 0) {
      func_0x00010c1a7f60(*(long *)(param_1 + _DAT_11274e944),param_2,0);
      lVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21300();
      _objc_release(lVar4);
    }
    func_0x00010c0f22e0(*(undefined8 *)(param_1 + lVar6));
    lVar6 = param_3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdf5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11274e958;
  uVar5 = *(undefined8 *)(param_3 + lVar4);
  *(undefined **)(param_3 + lVar4) = puVar1;
  _objc_release(uVar5);
  func_0x00010c219b60(*(undefined8 *)(param_3 + lVar4),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28,
                      *(undefined8 *)(param_3 + _DAT_11274e940));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_3 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  lVar6 = param_3;
  func_0x00010bfdf5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187440(*(undefined8 *)(param_3 + lVar4),param_2,lVar6);
  _objc_release(lVar6);
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106707ae0; end: 106707bcb; -[SCLensExplorerSingleCategoryViewController _setupHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707ae0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11274e958;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28,
                      *(undefined8 *)(param_1 + _DAT_11274e940));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187440(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106707bcc; end: 106707fcb; -[SCLensExplorerSingleCategoryViewController _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707bcc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_11274e958;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_b8 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  lStack_c8 = lVar1;
  lStack_a8 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_e8 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_100 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11274e954;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_108 = uVar4;
  uStack_98 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_120 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_130 = uVar3;
  uStack_90 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_140 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_88 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_110);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lStack_148);
  _objc_release(lStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_130);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(uStack_d8);
  _objc_release(lStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  lVar9 = lStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_106707fcc;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(lVar9 + _DAT_11274e94c);
  puStack_1b0 = puVar8;
  uStack_1a8 = uVar4;
  lStack_1a0 = lVar12;
  uStack_198 = uVar7;
  uStack_190 = uVar3;
  lStack_188 = param_1;
  lStack_180 = lVar1;
  lStack_178 = lVar2;
  uStack_170 = uVar6;
  uStack_168 = uVar5;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  uStack_1e8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  uStack_1f8 = uVar3;
  uStack_1d8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  uStack_208 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  uStack_1d0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c29bf00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  uStack_1c8 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar9 + _DAT_11274e958);
  func_0x00010bf1ff80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c0 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_218);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lStack_210);
  _objc_release(lStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e0);
  _objc_release(uStack_1e8);
  uVar4 = uVar10;
  _objc_release(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_106708270;
  uVar5 = uVar4;
  uStack_240 = uVar3;
  uStack_238 = uVar10;
  ppuStack_230 = &puStack_160;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0936c0();
  _objc_release(uVar5);
  _objc_initWeak(auStack_248,uVar4);
  _objc_copyWeak(auStack_250,auStack_248);
  func_0x00010bf84b00(uVar4);
  _objc_destroyWeak(auStack_250);
  _objc_destroyWeak(auStack_248);
  return;
}



/* Entry: 106707fcc; end: 10670826f; -[SCLensExplorerSingleCategoryViewController _setupPageViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106707fcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e94c);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_98 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  uStack_a8 = uVar2;
  uStack_88 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  uStack_80 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  uStack_78 = uVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11274e958);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  _objc_release(uStack_98);
  uVar4 = uVar1;
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106708270;
  uVar6 = uVar4;
  uStack_f0 = uVar2;
  uStack_e8 = uVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0936c0();
  _objc_release(uVar6);
  _objc_initWeak(auStack_f8,uVar4);
  _objc_copyWeak(auStack_100,auStack_f8);
  func_0x00010bf84b00(uVar4);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  return;
}



/* Entry: 106708270; end: 106708337; -[SCLensExplorerSingleCategoryViewController _performDismiss] */

void FUN_106708270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0936c0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106708338; end: 1067083a3;  */

void FUN_106708338(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0936a0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067083a4; end: 1067083e7; -[SCLensExplorerSingleCategoryViewController setVerticalScrollEnabled:horizontalScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067083a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e94c);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067083e8; end: 1067084ef; -[SCLensExplorerSingleCategoryViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1067083e8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_8);
  lVar2 = param_8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar2 == lVar3) {
    uVar4 = *(undefined8 *)(param_5 + _DAT_11274e94c);
    func_0x00010c152980(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar2 = param_8;
    uVar5 = param_1;
    dVar6 = param_2;
    func_0x00010c09ef00(param_8,param_6,uVar4);
    uVar1 = (uint)lVar2;
    _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar5,dVar6);
    func_0x00010bf4cdc0(uVar4);
    uVar1 = uVar1 ^ 1;
    if (param_2 <= 0.0) {
      uVar1 = 1;
    }
    _objc_release(uVar4);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_8);
  return uVar1;
}



/* Entry: 1067084f0; end: 1067084ff; -[SCLensExplorerSingleCategoryViewController scrollViewForTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067084f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e94c),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 106708500; end: 106708503; -[SCLensExplorerSingleCategoryViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_106708500(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performDismiss_11257a070);
  return;
}



/* Entry: 106708504; end: 106708507; -[SCLensExplorerSingleCategoryViewController cardToExpandTransition] */

void FUN_106708504(void)

{
  return;
}



/* Entry: 106708508; end: 10670850b; -[SCLensExplorerSingleCategoryViewController cardTransitionWillBeginWithView:] */

void FUN_106708508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performDismiss_11257a070);
  return;
}



/* Entry: 10670850c; end: 10670856f; -[SCLensExplorerSingleCategoryViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10670850c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11274e94c);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  func_0x00010befda00(uVar1);
  _objc_release(uVar1);
  return param_2 + param_1 <= 0.0;
}



/* Entry: 106708570; end: 1067085fb; -[SCLensExplorerSingleCategoryViewController cardTransitionDidUpdateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106708570(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  if (5.0 < param_1 * param_4) {
    uVar2 = *(undefined8 *)(param_5 + _DAT_11274e94c);
    func_0x00010c152980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1067085fc; end: 106708643; -[SCLensExplorerSingleCategoryViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067085fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e94c);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106708644; end: 10670876b; -[SCLensExplorerSingleCategoryViewController observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106708644(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_3 + _DAT_11274e94c);
  _objc_retain(param_6);
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  if (param_6 == lVar3) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,"contentOffset");
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c071ae0(param_5,param_4,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar3);
    if ((int)uVar2 != 0) {
      uVar2 = param_7;
      func_0x00010c0e00e0(param_7,param_4,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1060();
      _objc_release(uVar2);
      func_0x00010c1f7da0(*(undefined8 *)(param_3 + _DAT_11274e958),param_4,(long)param_2);
    }
  }
  else {
    _objc_release(lVar3);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10670876c; end: 10670879b; -[SCLensExplorerSingleCategoryViewController defaultProjectNameV2] */

void FUN_10670876c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dcb5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dcb5d8);
  return;
}



/* Entry: 10670879c; end: 1067087cb; -[SCLensExplorerSingleCategoryViewController defaultSubProjectName] */

void FUN_10670879c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f82898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f82898);
  return;
}



/* Entry: 1067087cc; end: 1067087d3; -[SCLensExplorerSingleCategoryViewController pageViewName] */

undefined8 FUN_1067087cc(void)

{
  return 0x8e;
}



/* Entry: 1067087d4; end: 1067087d7; -[SCLensExplorerSingleCategoryViewController reset] */

void FUN_1067087d4(void)

{
  return;
}



/* Entry: 1067087d8; end: 1067087df; -[SCLensExplorerSingleCategoryViewController shouldPopToRootViewController] */

undefined8 FUN_1067087d8(void)

{
  return 0;
}



/* Entry: 1067087e0; end: 106708887; -[SCLensExplorerSingleCategoryViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067087e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_11274e94c);
  if (lVar1 != 0) {
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d580(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126f2a40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106708888; end: 10670888b; -[SCLensExplorerSingleCategoryViewController _setupKarma] */

void FUN_106708888(void)

{
  return;
}



/* Entry: 10670888c; end: 106708893; -[SCLensExplorerSingleCategoryViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_10670888c(void)

{
  return 0;
}



/* Entry: 106708894; end: 106708897; -[SCLensExplorerSingleCategoryViewController viewControllerDismissSelf:] */

void FUN_106708894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performDismiss_11257a070);
  return;
}



/* Entry: 106708898; end: 1067088b7; -[SCLensExplorerSingleCategoryViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106708898(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274e95c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067088b8; end: 1067088cb; -[SCLensExplorerSingleCategoryViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067088b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274e95c,param_3);
  return;
}



/* Entry: 1067088cc; end: 106708977; -[SCLensExplorerSingleCategoryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067088cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274e95c);
  _objc_storeStrong(param_1 + _DAT_11274e948,0);
  _objc_storeStrong(param_1 + _DAT_11274e954,0);
  _objc_storeStrong(param_1 + _DAT_11274e950,0);
  _objc_storeStrong(param_1 + _DAT_11274e958,0);
  _objc_storeStrong(param_1 + _DAT_11274e944,0);
  _objc_storeStrong(param_1 + _DAT_11274e938,0);
  _objc_storeStrong(param_1 + _DAT_11274e934,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e94c,0);
  return;
}



/* Entry: 106708978; end: 106708b03; -[SCLensExplorerTabLessViewController initWithCategoriesFetcher:pageProvider:selectedCategoryIdentifier:horizontalScrollEnabled:trayCollapseEnabled:transparentBackgroundEnabled:loadingViewEnabled:alwaysUseTrayGesture:styleOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106708978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126f2a48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_11274e960;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e964;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e968;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e96c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e96c) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e970) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e974) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e978) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e97c) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e980) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e984) = param_9._1_1_;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274e988) = param_11;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106708b04; end: 106708c53; -[SCLensExplorerTabLessViewController _setupScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106708b04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11274e98c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar4),param_2,2);
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c18e220(*(undefined8 *)(param_1 + lVar4),param_2,1);
  lVar3 = param_1;
  func_0x00010bee9300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR_PTR_1126cd468;
  _objc_alloc();
  func_0x00010c042880();
  lVar3 = (long)_DAT_11274e990;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar4),param_2,
                      *(undefined1 *)(param_1 + _DAT_11274e974));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106708c54; end: 106709127; -[SCLensExplorerTabLessViewController _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106708c54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_11274e98c;
  lVar1 = *(long *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  lStack_c0 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  lStack_d0 = lVar1;
  lStack_88 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  uStack_e0 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_f0 = uVar2;
  uStack_80 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_78 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  puStack_b0 = puVar8;
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(uStack_f0);
  _objc_release(lStack_e8);
  _objc_release(lStack_d8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_b8);
  _objc_release(lStack_c0);
  lVar13 = (long)_DAT_11274e994;
  lVar9 = *(long *)(param_1 + lVar13);
  if (lVar9 != 0) {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    lStack_c0 = lVar9;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_b8 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    lStack_d0 = lVar9;
    lStack_a8 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    uStack_e0 = uVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    uStack_a0 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar13);
    uStack_98 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puStack_b0);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lVar13);
    _objc_release(param_1);
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(lVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lStack_e8);
    _objc_release(lStack_d8);
    _objc_release(uStack_e0);
    _objc_release(lStack_d0);
    _objc_release(lStack_c8);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
  }
  puVar8 = puStack_b0;
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar11 = puStack_b0;
  func_0x00010bf51e00();
  func_0x00010beef8c0(puVar7);
  _objc_release(puVar11);
  puVar12 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_118 = puVar8;
  puStack_108 = puVar7;
  pcStack_f8 = FUN_106709128;
  if (puVar12[_DAT_11274e980] == '\x01') {
    puVar7 = PTR_PTR_1126cd458;
    lStack_120 = lVar1;
    puStack_110 = puVar11;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c014f60(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar9 = (long)_DAT_11274e994;
    uVar2 = *(undefined8 *)(puVar12 + lVar9);
    *(undefined **)(puVar12 + lVar9) = puVar7;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(puVar12 + lVar9));
    _objc_initWeak(auStack_128,puVar12);
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x00010c1d3220(*(undefined8 *)(puVar12 + lVar9));
    func_0x00010c29bf00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar12);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
  }
  return;
}



/* Entry: 106709128; end: 10670925f; -[SCLensExplorerTabLessViewController _setupLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709128(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + _DAT_11274e980) == '\x01') {
    puVar1 = PTR_PTR_1126cd458;
    _objc_alloc();
    func_0x00010c014f60(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar3 = (long)_DAT_11274e994;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1d3220(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106709260; end: 10670928b;  */

void FUN_106709260(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10670928c; end: 1067092e7; -[SCLensExplorerTabLessViewController _viewBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670928c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + _DAT_11274e97c) & 1) == 0) {
    func_0x00010c23bae0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21,
                        *(undefined8 *)(param_1 + _DAT_11274e988));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067092e8; end: 10670938f; -[SCLensExplorerTabLessViewController viewDidLoad] */

void FUN_1067092e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2a48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010bee9300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010beaf8a0(param_1);
  func_0x00010beadda0(param_1);
  func_0x00010beabac0(param_1);
  func_0x00010be90ac0(param_1);
  return;
}



/* Entry: 106709390; end: 10670941f; -[SCLensExplorerTabLessViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709390(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a48;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  if ((*(byte *)(param_1 + _DAT_11274e970) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11274e970) = 1;
    func_0x00010beab780(param_1);
    func_0x00010beac860(param_1);
    func_0x00010be9dfe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      func_0x00010c0f22e0(param_1);
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106709420; end: 1067094a7; -[SCLensExplorerTabLessViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709420(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2a48;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  if (*(char *)(param_1 + _DAT_11274e970) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274e970) = 0;
    lVar1 = param_1;
    func_0x00010be9dfe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c0f2300(lVar1);
    }
    func_0x00010c137fe0(param_1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1067094a8; end: 10670966b; -[SCLensExplorerTabLessViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067094a8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126f2a48;
  lStack_108 = param_5;
  _objc_msgSendSuper2(&lStack_108,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar6 = (long)_DAT_11274e98c;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar6));
  lVar5 = *(long *)(param_5 + _DAT_11274e998);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = 0.0;
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar3 = *(undefined8 *)(lVar7 * 8);
        func_0x00010c29bf00(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(dVar8,0,param_3,param_4);
        _objc_release(uVar3);
        dVar8 = param_3 + dVar8;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  func_0x00010c1827c0(dVar8,param_4,*(undefined8 *)(param_5 + lVar6));
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  uVar4 = *(ulong *)(param_5 + _DAT_11274e990);
  func_0x00010c159d00(uVar4);
  func_0x00010c182300(param_3 * (double)uVar4,0,uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_retain(&PTR____CFConstantStringClassReference_110dcb5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
              (&PTR____CFConstantStringClassReference_110dcb5d8);
    return;
  }
  return;
}



/* Entry: 10670966c; end: 10670969b; -[SCLensExplorerTabLessViewController defaultProjectNameV2] */

void FUN_10670966c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110dcb5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110dcb5d8);
  return;
}



/* Entry: 10670969c; end: 1067096cb; -[SCLensExplorerTabLessViewController defaultSubProjectName] */

void FUN_10670969c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f82898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f82898);
  return;
}



/* Entry: 1067096cc; end: 1067096d3; -[SCLensExplorerTabLessViewController pageViewName] */

undefined8 FUN_1067096cc(void)

{
  return 0x8e;
}



/* Entry: 1067096d4; end: 1067096db; -[SCLensExplorerTabLessViewController shouldPopToRootViewController] */

undefined8 FUN_1067096d4(void)

{
  return 0;
}



/* Entry: 1067096dc; end: 10670982b; -[SCLensExplorerTabLessViewController setVerticalScrollEnabled:horizontalScrollEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1067096dc(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5
                   ,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  undefined1 *puVar3;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_8 == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)(param_5 + _DAT_11274e974);
  }
  func_0x00010c1f7b20(*(undefined8 *)(param_5 + _DAT_11274e98c),param_6,bVar8 & 1);
  uVar13 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar9 = *(ulong *)(param_5 + _DAT_11274e998);
  _objc_retain(uVar9);
  puVar7 = auStack_d8;
  uVar11 = uVar9;
  func_0x00010bf52a60();
  if (uVar11 != 0) {
    lVar10 = *plStack_110;
    do {
      uVar12 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(uVar9);
        }
        uVar2 = *(undefined8 *)(lStack_118 + uVar12 * 8);
        func_0x00010c152980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f7b20();
        _objc_release(uVar2);
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
      puVar7 = auStack_d8;
      uVar11 = uVar9;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (*(char *)(uVar9 + (long)_DAT_11274e978) == '\x01') {
    if ((*(byte *)(uVar9 + (long)_DAT_11274e984) & 1) == 0) {
      uVar11 = uVar9;
      func_0x00010c29bf00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      uVar12 = uVar9;
      uVar2 = uVar13;
      dVar14 = param_2;
      func_0x00010c29bf00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c09ef00();
      iVar1 = (int)puVar3;
      _CGRectContainsPoint(uVar13,param_2,param_3,param_4,uVar2,dVar14);
      _objc_release(uVar12);
      _objc_release(uVar11);
      puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      if (iVar1 != 0) {
        _objc_retain(puVar7);
        _objc_opt_class(puVar4);
        puVar5 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar4);
        puVar3 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar3 = (undefined1 *)0x0;
        }
        _objc_retain(puVar3);
        _objc_release(puVar7);
        if (puVar3 == (undefined1 *)0x0) {
          uVar11 = 0;
        }
        else {
          func_0x00010c297a00(puVar7);
          dVar14 = param_2;
          func_0x00010bdf7060(uVar9);
          _objc_retainAutoreleasedReturnValue();
          if (param_2 <= 0.0) {
            if (0.0 <= param_2) {
              uVar11 = 0;
            }
            else {
              func_0x00010bf4d5e0(uVar9);
              dVar15 = dVar14;
              func_0x00010bfb68e0(uVar9);
              func_0x00010bf4cdc0(uVar9);
              uVar11 = (ulong)((float)(int)(dVar14 - param_4) <= (float)(int)dVar15);
            }
          }
          else {
            func_0x00010bf4cdc0(uVar9);
            uVar11 = (ulong)(dVar14 <= 0.0);
          }
          _objc_release(uVar9);
        }
        _objc_release(puVar3);
        goto LAB_1067099f8;
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
LAB_1067099f8:
  _objc_release(puVar7);
  _objc_release(puVar6);
  return uVar11;
}



/* Entry: 10670982c; end: 106709a27; -[SCLensExplorerTabLessViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10670982c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  ulong uVar5;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (*(char *)(param_5 + _DAT_11274e978) == '\x01') {
    if ((*(byte *)(param_5 + _DAT_11274e984) & 1) == 0) {
      lVar3 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      lVar4 = param_5;
      uVar8 = param_1;
      dVar9 = param_2;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_8;
      func_0x00010c09ef00();
      iVar2 = (int)uVar5;
      _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar8,dVar9);
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar6 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      if (iVar2 != 0) {
        _objc_retain(param_8);
        _objc_opt_class(puVar6);
        uVar7 = param_8;
        _objc_opt_isKindOfClass(param_8,puVar6);
        uVar5 = param_8;
        if ((uVar7 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(param_8);
        if (uVar5 == 0) {
          bVar1 = false;
        }
        else {
          func_0x00010c297a00(param_8);
          dVar9 = param_2;
          func_0x00010bdf7060(param_5);
          _objc_retainAutoreleasedReturnValue();
          if (param_2 <= 0.0) {
            if (0.0 <= param_2) {
              bVar1 = false;
            }
            else {
              func_0x00010bf4d5e0(param_5);
              dVar10 = dVar9;
              func_0x00010bfb68e0(param_5);
              func_0x00010bf4cdc0(param_5);
              bVar1 = (float)(int)(dVar9 - param_4) <= (float)(int)dVar10;
            }
          }
          else {
            func_0x00010bf4cdc0(param_5);
            bVar1 = dVar9 <= 0.0;
          }
          _objc_release(param_5);
        }
        _objc_release(uVar5);
        goto LAB_1067099f8;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
LAB_1067099f8:
  _objc_release(param_8);
  _objc_release(param_7);
  return bVar1;
}



/* Entry: 106709a28; end: 106709a2b; -[SCLensExplorerTabLessViewController scrollViewForTray:] */

void FUN_106709a28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__currentScrollView_11255b5b8);
  return;
}



/* Entry: 106709a2c; end: 106709a33; -[SCLensExplorerTabLessViewController trayCanExpandWhenScrollAtBottom:] */

undefined8 FUN_106709a2c(void)

{
  return 1;
}



/* Entry: 106709a34; end: 106709a73; -[SCLensExplorerTabLessViewController pageCoordinator:willDisplayPageAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e998);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f22e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106709a74; end: 106709ab3; -[SCLensExplorerTabLessViewController pageCoordinator:willHidePageAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e998);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106709ab4; end: 106709ac3; -[SCLensExplorerTabLessViewController numberOfPagesForPageCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e998),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106709ac4; end: 106709ae7; -[SCLensExplorerTabLessViewController pageWidthForPageCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106709ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + _DAT_11274e98c));
  return param_3;
}



/* Entry: 106709ae8; end: 106709baf; -[SCLensExplorerTabLessViewController pageCoordinator:didSelectPageAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709ae8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274e99c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c0dfd40(lVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf334a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      param_1 = param_1 + _DAT_11274e9a0;
      _objc_loadWeakRetained(param_1);
      lVar3 = lVar2;
      func_0x00010bf334a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c092dc0(param_1,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106709bb0; end: 106709bbf; -[SCLensExplorerTabLessViewController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e96c),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 106709bc0; end: 106709c1b; -[SCLensExplorerTabLessViewController lensExplorer_activeCategoryPage] */

void FUN_106709bc0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010be9dfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd428;
  _objc_opt_class(PTR_PTR_1126cd428);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106709c1c; end: 106709d5b; -[SCLensExplorerTabLessViewController _setupCategoriesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709c1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e960);
  func_0x00010bf33140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274e9a4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106709d5c; end: 106709dab;  */

void FUN_106709d5c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee3640(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106709dac; end: 106709ecf; -[SCLensExplorerTabLessViewController _setupExternalSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709dac(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e968);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106709ed0; end: 106709fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709ed0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11274e99c;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + lVar2);
      _objc_retain(param_2);
      func_0x00010bfece40();
      if (lVar1 != 0x7fffffffffffffff) {
        func_0x00010c158f40(*(undefined8 *)(param_1 + _DAT_11274e990));
      }
      _objc_release(param_2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106709fac; end: 106709ff3;  */

undefined8 FUN_106709fac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf334a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106709ff4; end: 10670a02f; -[SCLensExplorerTabLessViewController _requestCategoriesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106709ff4(long param_1,undefined8 param_2)

{
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e994),param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010c134e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274e960),PTR_s_requestCategoriesIfNeeded_11262ada8);
  return;
}



/* Entry: 10670a030; end: 10670a3ef; -[SCLensExplorerTabLessViewController _updateViewControllersWithCategoiresAggregator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a030(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *unaff_x22;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined *)(long)_DAT_11274e99c;
  puVar6 = *(undefined **)(puVar8 + param_1);
  puVar2 = puVar1;
  func_0x00010c071b60();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(puVar1);
    uVar3 = *(undefined8 *)(puVar8 + param_1);
    *(undefined **)(puVar8 + param_1) = puVar1;
    _objc_release(uVar3);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    uVar7 = 3;
    if (puVar2 != (undefined *)0x0) {
      uVar7 = 1;
    }
    func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11274e994),param_2,uVar7);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar2 = puVar1;
    func_0x00010bf529e0(puVar1);
    puVar8 = unaff_x22;
    func_0x00010bf0a0e0(unaff_x22,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
    puStack_138 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      lVar10 = 0;
      lStack_140 = *plStack_120;
      puStack_148 = puVar8;
      do {
        unaff_x22 = (undefined *)0x0;
        do {
          if (*plStack_120 != lStack_140) {
            _objc_enumerationMutation(puVar1);
          }
          uVar11 = *(undefined8 *)(lStack_128 + (long)unaff_x22 * 8);
          uVar3 = uVar11;
          func_0x00010bf334a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_1;
          func_0x00010bddc0c0(param_1,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          if (lVar12 == 0) {
            uVar3 = uVar11;
            func_0x00010bf334a0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_1;
            func_0x00010bddc0a0(param_1,param_2,uVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            lVar12 = *(long *)(param_1 + _DAT_11274e964);
            uVar3 = uVar11;
            func_0x00010bf334a0(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f1240(lVar12,param_2,uVar3,lVar4,0,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            func_0x00010bef7700(param_1,param_2,lVar12);
            if (*(char *)(param_1 + _DAT_11274e97c) == '\x01') {
              puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar12;
              func_0x00010c29bf00(lVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c16e440();
              _objc_release(lVar5);
              _objc_release(puVar2);
            }
            uVar3 = *(undefined8 *)(param_1 + _DAT_11274e98c);
            lVar5 = lVar12;
            func_0x00010c29bf00(lVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befbb60(uVar3,param_2,lVar5);
            _objc_release(lVar5);
            func_0x00010bf77e80(lVar12,param_2,param_1);
            _objc_release(lVar4);
            puVar8 = puStack_148;
          }
          func_0x00010befa120(puVar8,param_2,lVar12);
          puVar2 = param_3;
          func_0x00010c1593e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071ae0(uVar11,param_2,puVar2);
          _objc_release(puVar2);
          if ((int)uVar11 != 0) {
            func_0x00010c0f22e0(lVar12);
            func_0x00010c1fb420(*(undefined8 *)(param_1 + _DAT_11274e990),param_2,lVar10);
          }
          lVar10 = lVar10 + 1;
          _objc_release(lVar12);
          unaff_x22 = unaff_x22 + 1;
        } while (puStack_138 != unaff_x22);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
        puStack_138 = puVar2;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar2 = puVar8;
    func_0x00010bf51e00();
    puVar6 = puVar2;
    func_0x00010beaa100(param_1);
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar8 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_10670a3f0;
  puStack_180 = unaff_x22;
  lStack_178 = param_1;
  puStack_170 = puVar1;
  puStack_168 = puVar8;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  uVar9 = *(undefined8 *)(param_3 + _DAT_11274e9a4);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_10670a4c8;
  puStack_190 = &UNK_110936610;
  puStack_188 = puVar6;
  _objc_retain(puVar6);
  func_0x00010bf43280(uVar9,param_2,&puStack_1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(puStack_188);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 10670a3f0; end: 10670a4c7; -[SCLensExplorerTabLessViewController _categoryObservableForCategoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e9a4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10670a4c8;
  puStack_40 = &UNK_110936610;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf43280(uVar3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10670a4c8; end: 10670a5af;  */

void FUN_10670a4c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf33060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = param_2;
  func_0x00010bfb2040(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10670a5b0; end: 10670a697; -[SCLensExplorerTabLessViewController _categoryPageForIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e998);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10670a650;
  puStack_30 = &UNK_1109365e0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2040(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10670a698; end: 10670a83b; -[SCLensExplorerTabLessViewController _setViewControllerPages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a698(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = (long)_DAT_11274e998;
  lVar4 = *(long *)(param_1 + lVar6);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar2 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar5);
        if ((uVar2 & 1) == 0) {
          func_0x00010c2a6740(uVar5,param_2,0);
          uVar3 = uVar5;
          func_0x00010c29bf00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12c960();
          _objc_release(uVar3);
          func_0x00010c12c8e0(uVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(ulong *)(param_1 + lVar6) = param_3;
  _objc_release(uVar5);
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x00010be9dfe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + _DAT_11274e98c);
    _objc_retain(lVar4);
  }
  else {
    lVar4 = lVar1;
    func_0x00010c152980(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10670a83c; end: 10670a8a3; -[SCLensExplorerTabLessViewController _currentScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a83c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be9dfe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_11274e98c);
    _objc_retain(lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c152980(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10670a8a4; end: 10670a91b; -[SCLensExplorerTabLessViewController _selectedPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a8a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11274e990;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c159d00();
  lVar6 = (long)_DAT_11274e998;
  uVar2 = *(ulong *)(param_1 + lVar6);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c159d00(uVar3);
    func_0x00010c0dfd40(uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10670a91c; end: 10670a93b; -[SCLensExplorerTabLessViewController pageTransitionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a91c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274e9a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10670a93c; end: 10670a94f; -[SCLensExplorerTabLessViewController setPageTransitionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a93c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274e9a0,param_3);
  return;
}



/* Entry: 10670a950; end: 10670aa1b; -[SCLensExplorerTabLessViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10670a950(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274e9a0);
  _objc_storeStrong(param_1 + _DAT_11274e990,0);
  _objc_storeStrong(param_1 + _DAT_11274e96c,0);
  _objc_storeStrong(param_1 + _DAT_11274e9a4,0);
  _objc_storeStrong(param_1 + _DAT_11274e99c,0);
  _objc_storeStrong(param_1 + _DAT_11274e998,0);
  _objc_storeStrong(param_1 + _DAT_11274e994,0);
  _objc_storeStrong(param_1 + _DAT_11274e98c,0);
  _objc_storeStrong(param_1 + _DAT_11274e968,0);
  _objc_storeStrong(param_1 + _DAT_11274e964,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e960,0);
  return;
}



/* Entry: 10670aa1c; end: 10670aabf; -[SCLensExplorerTablessPageCoordinator initWithScrollView:delegate:] */

undefined1 *
FUN_10670aa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2a50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10670aac0; end: 10670ab33; -[SCLensExplorerTablessPageCoordinator setSelectedPageIndex:] */

void FUN_10670aac0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0df0c0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x30) != param_3) {
    func_0x00010be64a20(param_1);
  }
  *(long *)(param_1 + 0x30) = param_3;
  *(long *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be64a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__notifyIfNeededSelectedPageAtInd_112576c30,param_3,lVar2);
  return;
}



/* Entry: 10670ab34; end: 10670abd7; -[SCLensExplorerTablessPageCoordinator selectPageAtIndex:animated:] */

void FUN_10670ab34(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  
  if (param_4 != *(ulong *)(param_2 + 0x30)) {
    lVar1 = param_2 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0f2360();
    _objc_release(lVar1);
    func_0x00010bea1dc0(param_2);
    func_0x00010c182300(param_1 * (double)param_4,0,*(undefined8 *)(param_2 + 8));
    if ((param_5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setSelectedPageIndex__11265c730,param_4);
      return;
    }
  }
  return;
}



/* Entry: 10670abd8; end: 10670ac07; -[SCLensExplorerTablessPageCoordinator scrollViewWillBeginDragging:] */

void FUN_10670abd8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_2 + 0x28) = 1;
  func_0x00010bf4cdc0(param_4);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10670ac08; end: 10670ad1f; -[SCLensExplorerTablessPageCoordinator scrollViewDidScroll:] */

void FUN_10670ac08(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c070ea0();
  if (((int)uVar2 != 0) && (*(char *)(param_2 + 0x28) == '\x01')) {
    func_0x00010bf4cdc0(param_4);
    dVar8 = *(double *)(param_2 + 0x20);
    lVar4 = param_2 + 0x10;
    dVar6 = param_1;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0f2360();
    _objc_release(lVar4);
    lVar4 = param_2 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010c0df0c0();
    _objc_release(lVar4);
    dVar5 = ABS(param_1 - dVar8);
    dVar7 = ABS(dVar5 - dVar6);
    dVar6 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
      bVar1 = dVar7 < dVar6;
    }
    if (!bVar1) {
      param_1 = param_1 - dVar8;
      if (0.0 <= param_1) {
        if ((param_1 <= 0.0) || (*(long *)(param_2 + 0x30) == lVar3 + -1)) goto LAB_10670ad04;
        lVar4 = *(long *)(param_2 + 0x30) + 1;
      }
      else {
        if (*(long *)(param_2 + 0x30) == 0) goto LAB_10670ad04;
        lVar4 = *(long *)(param_2 + 0x30) + -1;
      }
      func_0x00010bea1dc0(param_2,param_3,lVar4);
    }
  }
LAB_10670ad04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


