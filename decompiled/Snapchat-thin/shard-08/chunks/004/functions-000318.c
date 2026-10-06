/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106181c68; end: 106181ca7; -[SCFeatureLensNightModeImpl setManagedCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740fd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106181ca8; end: 106181cc7; -[SCFeatureLensNightModeImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181ca8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106181cc8; end: 106181cdb; -[SCFeatureLensNightModeImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741000,param_3);
  return;
}



/* Entry: 106181cdc; end: 106181d1b; -[SCFeatureLensNightModeImpl setToolbarItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741008;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106181d1c; end: 106181d2b; -[SCFeatureLensNightModeImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106181d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740fd0);
}



/* Entry: 106181d2c; end: 106181d6b; -[SCFeatureLensNightModeImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740fd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106181d6c; end: 106181d7b; -[SCFeatureLensNightModeImpl canEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106181d6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740fd4);
}



/* Entry: 106181d7c; end: 106181d8b; -[SCFeatureLensNightModeImpl didUserToggleWithinCaptureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106181d7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741014);
}



/* Entry: 106181d8c; end: 106181d9b; -[SCFeatureLensNightModeImpl setDidUserToggleWithinCaptureSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181d8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112741014) = param_3;
  return;
}



/* Entry: 106181d9c; end: 106181dab; -[SCFeatureLensNightModeImpl nightModeButtonTapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106181d9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741004);
}



/* Entry: 106181dac; end: 106181dbb; -[SCFeatureLensNightModeImpl setNightModeButtonTapCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112741004) = param_3;
  return;
}



/* Entry: 106181dbc; end: 106181dcb; -[SCFeatureLensNightModeImpl lastBrightnessValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106181dbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741010);
}



/* Entry: 106181dcc; end: 106181ddb; -[SCFeatureLensNightModeImpl setLastBrightnessValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181dcc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112741010) = param_1;
  return;
}



/* Entry: 106181ddc; end: 106181edb; -[SCFeatureLensNightModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181ddc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740fd0,0);
  _objc_storeStrong(param_1 + _DAT_112741008,0);
  _objc_destroyWeak(param_1 + _DAT_112741000);
  _objc_storeStrong(param_1 + _DAT_112740fd8,0);
  _objc_storeStrong(param_1 + _DAT_112740fe0,0);
  _objc_storeStrong(param_1 + _DAT_112741024,0);
  _objc_storeStrong(param_1 + _DAT_112740fcc,0);
  _objc_storeStrong(param_1 + _DAT_112740fc8,0);
  _objc_storeStrong(param_1 + _DAT_11274100c,0);
  _objc_storeStrong(param_1 + _DAT_112740fdc,0);
  _objc_destroyWeak(param_1 + _DAT_112740ffc);
  _objc_storeStrong(param_1 + _DAT_112740ff4,0);
  _objc_destroyWeak(param_1 + _DAT_112740fec);
  _objc_destroyWeak(param_1 + _DAT_112740fe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740ff0,0);
  return;
}



/* Entry: 106181edc; end: 106181f2b; -[SCFeaturePrivacyViewImpl initWithUsesRuntimeViewfinderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181edc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eff48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741028) = param_3;
  }
  return;
}



/* Entry: 106181f2c; end: 106181f63; -[SCFeaturePrivacyViewImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274102c);
  *(undefined8 *)(param_1 + _DAT_11274102c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106181f64; end: 106181fbb; -[SCFeaturePrivacyViewImpl hidePrivacyView] */

void FUN_106181f64(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bee9220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bee9220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106181fbc; end: 10618229f; -[SCFeaturePrivacyViewImpl showPrivacyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106181fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_5;
  func_0x00010bee9220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  if (*(char *)(param_5 + _DAT_112741028) == '\x01') {
    lVar14 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_11274102c;
    lVar15 = *(long *)(param_5 + lVar16);
    _objc_release();
    if (lVar14 == lVar15) {
      func_0x00010c066fc0(*(undefined8 *)(param_5 + lVar16),param_6,lVar1,0);
    }
    else {
      func_0x00010c12c960(lVar1);
      func_0x00010c219b60(lVar1,param_6,0);
      func_0x00010c066fc0(*(undefined8 *)(param_5 + lVar16),param_6,lVar1,0);
      puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar14 = lVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar16);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010bf493a0(lVar14,param_6,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      lStack_88 = lVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + lVar16);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493a0(lVar3,param_6,uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      lStack_80 = lVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_5 + lVar16);
      func_0x00010c274200(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf493a0(lVar6,param_6,uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      lStack_78 = lVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_5 + lVar16);
      func_0x00010bf1ff80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010bf493a0(lVar9,param_6,uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_88,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar13,param_6,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
      _objc_release(uVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar15);
      _objc_release(uVar2);
      _objc_release(lVar14);
    }
    func_0x00010c08cdc0(*(undefined8 *)(param_5 + lVar16));
  }
  else {
    func_0x00010c066fc0(*(undefined8 *)(param_5 + _DAT_11274102c),param_6,lVar1,0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_112741030;
  lVar14 = *(long *)(lVar1 + lVar15);
  if (lVar14 == 0) {
    if (*(char *)(lVar1 + _DAT_112741028) == '\x01') {
      func_0x00010bf20c00(*(undefined8 *)(lVar1 + _DAT_11274102c));
    }
    else {
      puVar13 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar13);
    }
    puVar13 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar2 = *(undefined8 *)(lVar1 + lVar15);
    *(undefined **)(lVar1 + lVar15) = puVar13;
    _objc_release(uVar2);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(lVar1 + lVar15),param_6,puVar13);
    _objc_release(puVar13);
    func_0x00010c21e900(*(undefined8 *)(lVar1 + lVar15),param_6,0);
    lVar14 = *(long *)(lVar1 + lVar15);
  }
  _objc_retain(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
  return;
}



/* Entry: 1061822a0; end: 1061823c7; -[SCFeaturePrivacyViewImpl _view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061822a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112741030;
  lVar3 = *(long *)(param_5 + lVar4);
  if (lVar3 == 0) {
    if (*(char *)(param_5 + _DAT_112741028) == '\x01') {
      func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11274102c));
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    *(undefined **)(param_5 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar4),param_6,puVar1);
    _objc_release(puVar1);
    func_0x00010c21e900(*(undefined8 *)(param_5 + lVar4),param_6,0);
    lVar3 = *(long *)(param_5 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061823c8; end: 106182407; -[SCFeaturePrivacyViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061823c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741030,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274102c,0);
  return;
}



/* Entry: 106182408; end: 1061824e7; -[SCFeatureRecipientNameImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106182408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741040);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741038);
  _objc_retain(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1061824e8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010bcbe2c4("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_68 = PTR_PTR_1126eff50;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061824e8; end: 10618252f;  */

void FUN_1061824e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106182530; end: 106182557; -[SCFeatureRecipientNameImpl recipientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106182530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741038),PTR_s_target_112678178);
  return;
}



/* Entry: 106182558; end: 10618266f;  */

void FUN_106182558(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106182670; end: 1061826ef;  */

void FUN_106182670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c230d60();
  _objc_release(param_3);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061826f0; end: 10618275f;  */

void FUN_1061826f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106182760; end: 1061827d3;  */

void FUN_106182760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061827d4; end: 10618290b;  */

void FUN_1061827d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10618290c; end: 10618291b; -[SCFeatureRecipientNameImpl isRecipientViewCreated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618290c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741038),PTR_s_isCreated_1125f9830);
  return;
}



/* Entry: 10618291c; end: 106182a3f; -[SCFeatureRecipientNameImpl startAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618291c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  puVar2 = auStack_90;
  uVar4 = *(undefined8 *)(param_2 + _DAT_112741038);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_2 + _DAT_11274104c) == '\x01') {
    func_0x00010be982e0(param_2);
    pcVar3 = FUN_106182a40;
    puVar2 = auStack_68;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    _objc_release(puVar1);
    pcVar3 = FUN_106182a8c;
  }
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar2[1] = 0xc0000000;
  puVar2[2] = pcVar3;
  puVar2[3] = &UNK_110911ee8;
  puVar2[4] = 10.0 / param_1;
  _objc_retainBlock();
  (**(code **)(param_4 + 0x10))(param_4,uVar4,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 106182a40; end: 106182a8b;  */

void FUN_106182a40(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bfb68e0(param_2);
  _CGRectOffset();
  func_0x00010c19f0e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106182a8c; end: 106182b0f;  */

void FUN_106182a8c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  _objc_retain(param_5);
  func_0x00010bfb68e0(param_5);
  dVar1 = param_1;
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar2 = *(double *)(param_4 + 0x20);
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  func_0x00010c19f0e0(param_1,dVar1 - dVar2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106182b10; end: 106182ba7; -[SCFeatureRecipientNameImpl _runtimeNativeScaleForRecipientView:] */

ulong FUN_106182b10(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010c2a71e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  _objc_release(uVar1);
  _objc_release(param_4);
  if ((0x7fffffffffffffff < param_1 ||
      0x3fe < (param_1 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35) &&
      0xffffffffffffe < param_1 - 1) {
    param_1 = 0x3ff0000000000000;
  }
  return param_1;
}



/* Entry: 106182ba8; end: 106182bff; -[SCFeatureRecipientNameImpl _deactivateRuntimeLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106182ba8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741040;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741050,0);
  return;
}



/* Entry: 106182c00; end: 106182c67; -[SCFeatureRecipientNameImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106182c00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741040,0);
  _objc_destroyWeak(param_1 + _DAT_112741050);
  _objc_destroyWeak(param_1 + _DAT_112741048);
  _objc_storeStrong(param_1 + _DAT_11274103c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741038,0);
  return;
}



/* Entry: 106182c68; end: 106182caf; -[SCRecipientNameReplyView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106182c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741060);
  *(undefined8 *)(param_1 + _DAT_112741060) = param_3;
  _objc_release(uVar1);
  func_0x00010beda1a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106182cb0; end: 106182cbf; -[SCRecipientNameReplyView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106182cb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741060);
}



/* Entry: 106182cc0; end: 106182de3; -[SCRecipientNameReplyView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106182cc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741060,0);
  _objc_storeStrong(param_1 + _DAT_112741058,0);
  _objc_storeStrong(param_1 + _DAT_112741054,0);
  _objc_storeStrong(param_1 + _DAT_112741068,0);
  _objc_storeStrong(param_1 + _DAT_112741064,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274105c,0);
  return;
}



/* Entry: 106182de4; end: 106182de7;  */

void FUN_106182de4(void)

{
  return;
}



/* Entry: 106182de8; end: 106182e57; -[SCFeatureAutoEnableFlashInLowLightHandler dealloc] */

void FUN_106182de8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256460();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126eff60;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106182e58; end: 106182eeb;  */

void FUN_106182e58(long param_1,undefined1 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106182eec;
  puStack_38 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 106182eec; end: 106182f1f;  */

void FUN_106182eec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106182f20; end: 106182f23;  */

void FUN_106182f20(void)

{
  return;
}



/* Entry: 106182f24; end: 106182f4f; -[SCFeatureAutoEnableFlashInLowLightHandler stopObservingManagedDeviceCapacityAnalyzerEvent] */

void FUN_106182f24(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106182f50; end: 106182fb3; -[SCFeatureAutoEnableFlashInLowLightHandler didChangeRingFlashState:] */

void FUN_106182f50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (param_3 != lVar1) {
    if ((*(char *)(param_1 + 0x58) == '\x01') && (param_3 == *(long *)(param_1 + 0x50))) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(long *)(param_1 + 0x40) = param_3;
      if (*(char *)(param_1 + 0x59) == '\x01') {
        *(undefined1 *)(param_1 + 0x59) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be09830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endCameraSession_11255ffa8);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be18570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__followCurrentLightingCondition_112563af8);
      return;
    }
    *(long *)(param_1 + 0x40) = param_3;
    *(undefined1 *)(param_1 + 0x48) = 0;
    if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x38) & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x3a) = 1;
    }
  }
  return;
}



/* Entry: 106182fb4; end: 106183003; -[SCFeatureAutoEnableFlashInLowLightHandler _endCameraSession] */

void FUN_106182fb4(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') &&
     (lVar1 = param_1, func_0x00010be3e480(), (int)lVar1 != 0)) {
    if (*(char *)(param_1 + 0x58) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beca670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__takeBackAutoEnabledFlash_112590340);
      return;
    }
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  return;
}



/* Entry: 106183004; end: 10618305f; -[SCFeatureAutoEnableFlashInLowLightHandler _didChangeLowLightCondition:] */

void FUN_106183004(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x38) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x38) = (char)param_3;
  if ((param_3 & 1) != 0) {
    func_0x00010be0d4a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__autoEnableFlash_112551f40);
    return;
  }
  *(undefined1 *)(param_1 + 0x39) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdd1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__autoDisableFlash_112551f38);
  return;
}



/* Entry: 106183060; end: 106183073; -[SCFeatureAutoEnableFlashInLowLightHandler _treatment] */

void FUN_106183060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c8670,PTR_s_treatmentWithCircumstanceEngine__11267c828,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106183074; end: 10618308f; -[SCFeatureAutoEnableFlashInLowLightHandler _effectiveRingFlashState] */

undefined8 FUN_106183074(long param_1)

{
  long lVar1;
  
  lVar1 = 0x50;
  if (*(char *)(param_1 + 0x58) == '\0') {
    lVar1 = 0x40;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 106183090; end: 1061830af; -[SCFeatureAutoEnableFlashInLowLightHandler _isAutoEnabledFlashHeldForCameraSession] */

bool FUN_106183090(ulong param_1)

{
  func_0x00010be071e0();
  return (param_1 & 0xfffffffffffffffe) == 2;
}



/* Entry: 1061830b0; end: 1061830eb; -[SCFeatureAutoEnableFlashInLowLightHandler _takeBackAutoEnabledFlash] */

void FUN_1061830b0(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x00010be0c420(param_1,param_2,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf11640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061830ec; end: 106183123; -[SCFeatureAutoEnableFlashInLowLightHandler _expectFlashStateWeRequested:] */

void FUN_1061830ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be071e0();
  if (param_3 != lVar1) {
    *(long *)(param_1 + 0x50) = param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* Entry: 106183124; end: 10618317f; -[SCFeatureAutoEnableFlashInLowLightHandler .cxx_destruct] */

void FUN_106183124(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106183180; end: 106183187;  */

void FUN_106183180(void)

{
  return;
}



/* Entry: 106183188; end: 1061831df;  */

void FUN_106183188(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061831e0; end: 1061831e3;  */

void FUN_1061831e0(void)

{
  return;
}



/* Entry: 1061831e4; end: 10618320f; -[SCFeatureAutoEnableRingFlashHandler dismissAutoEnableTooltipView] */

void FUN_1061831e4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf82f40(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106183210; end: 10618329b; -[SCFeatureAutoEnableRingFlashHandler isNextStateRingFlash] */

bool FUN_106183210(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (((*(long *)(param_1 + 0xa8) == 0) && (*(char *)(param_1 + 0xa1) == '\x01')) &&
     (*(char *)(param_1 + 0xa0) == '\x01')) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf70d80();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10618329c; end: 106183313; -[SCFeatureAutoEnableRingFlashHandler dealloc] */

void FUN_10618329c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  func_0x00010bec3380(param_1);
  func_0x00010bec3360(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126eff68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106183314; end: 10618337b; -[SCFeatureAutoEnableRingFlashHandler _logUserTrackedEvent:] */

void FUN_106183314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618337c; end: 10618344b; -[SCFeatureAutoEnableRingFlashHandler _logCameraModeTooltipEvent] */

void FUN_10618337c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c8688;
  _objc_opt_new();
  uVar2 = 0x14;
  func_0x00010baee46c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176a40(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010be5a680(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bdfcaa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10618344c; end: 106183493;  */

void FUN_10618344c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcaa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106183494; end: 1061834f3; -[SCFeatureAutoEnableRingFlashHandler stopObservingCapturerStateUpdate] */

void FUN_106183494(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xd0));
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061834f4; end: 1061834f7;  */

void FUN_1061834f4(void)

{
  return;
}



/* Entry: 1061834f8; end: 106183523; -[SCFeatureAutoEnableRingFlashHandler stopObservingManagedDeviceCapacityAnalyzerEvent] */

void FUN_1061834f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106183524; end: 10618354f; -[SCFeatureAutoEnableRingFlashHandler _stopObservingCameraModeObserver] */

void FUN_106183524(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106183550; end: 10618357b; -[SCFeatureAutoEnableRingFlashHandler _stopObservingCameraModeLabelsObserver] */

void FUN_106183550(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10618357c; end: 106183583;  */

void FUN_10618357c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__autoEnableRingFlashIfNeeded_112551f58);
  return;
}



/* Entry: 106183584; end: 1061835eb; -[SCFeatureAutoEnableRingFlashHandler _didChangeLowLightCondition:] */

void FUN_106183584(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(byte *)(param_1 + 0xa1) != param_3) {
    *(char *)(param_1 + 0xa1) = (char)param_3;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1061835ec;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 1061835ec; end: 1061835f3;  */

void FUN_1061835ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__autoEnableRingFlashIfNeeded_112551f58);
  return;
}



/* Entry: 1061835f4; end: 106183637; -[SCFeatureAutoEnableRingFlashHandler _resetAutoEnableTooltipCounter] */

void FUN_1061835f4(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06cc20();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c16cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setAutoEnableRingFlashTooltipSee_112638d80,0)
      ;
      return;
    }
  }
  return;
}



/* Entry: 106183638; end: 106183673; -[SCFeatureAutoEnableRingFlashHandler _autoEnableRingFlashTooltipSeenCount] */

undefined8 FUN_106183638(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06cc20();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bf11770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_autoEnableRingFlashTooltipSeenCo_1125a1f80);
    return uVar2;
  }
  return 0xffffffffffffffff;
}



/* Entry: 106183674; end: 1061836bb; -[SCFeatureAutoEnableRingFlashHandler _increaseTooltipSeenCount] */

void FUN_106183674(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06cc20();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdd1700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c16cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_setAutoEnableRingFlashTooltipSee_112638d80,param_1 + 1);
    return;
  }
  return;
}



/* Entry: 1061836bc; end: 1061836c7; -[SCFeatureAutoEnableRingFlashHandler _canAutoEnableWithDevicePosition:] */

bool FUN_1061836bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 1061836c8; end: 1061836f7; -[SCFeatureAutoEnableRingFlashHandler _cancelAutoEnableRingLight] */

void FUN_1061836c8(undefined8 param_1)

{
  func_0x00010bf65f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061836f8; end: 106183763; -[SCFeatureAutoEnableRingFlashHandler _autoEnableRingFlash] */

void FUN_1061836f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010beb2920();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010be342a0(), (int)uVar1 != 0)) {
    func_0x00010bebb840(param_1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea2120(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106183764; end: 1061837eb; -[SCFeatureAutoEnableRingFlashHandler _setAutoEnableLastUsedDate:] */

void FUN_106183764(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  _objc_retain(param_4);
  param_2 = param_2 + 0x88;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c19de00((float)(double)CONCAT44(uVar3,uVar2),lVar1,param_3,
                      &PTR____CFConstantStringClassReference_110e43418);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061837ec; end: 10618382b; -[SCFeatureAutoEnableRingFlashHandler _hasNotExceededSeenCount] */

bool FUN_1061837ec(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bdd1700();
  if (lVar2 == -1) {
    bVar1 = false;
  }
  else {
    func_0x00010bdd1700(param_1);
    bVar1 = param_1 < 1;
  }
  return bVar1;
}



/* Entry: 10618382c; end: 106183a5b; -[SCFeatureAutoEnableRingFlashHandler _showTooltipForAutoEnableRingLight] */

long FUN_10618382c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010c29cfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar1 != 0) {
    lVar9 = *(long *)(param_1 + 0x98);
    if (lVar9 == 0) {
      puVar2 = PTR_PTR_1126b09c0;
      _objc_alloc();
      func_0x00010c051640();
      uVar8 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar2;
      _objc_release(uVar8);
      lVar9 = *(long *)(param_1 + 0x98);
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfe12e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c740(0x4008000000000000,lVar9,param_2,uVar8);
    _objc_release(uVar8);
    func_0x00010c1798c0(*(undefined8 *)(param_1 + 0x98),param_2,1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c274200(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bf493c0(0x4014000000000000,uVar3,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uStack_78 = uVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c08e400(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0xc02c000000000000,uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(lVar9);
    _objc_release(uVar3);
    func_0x00010be381e0(param_1);
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
    func_0x00010be51260(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + 0xd8);
}



/* Entry: 106183a5c; end: 106183a63; -[SCFeatureAutoEnableRingFlashHandler tooltipShowCountMetric] */

undefined8 FUN_106183a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106183a64; end: 106183a6b; -[SCFeatureAutoEnableRingFlashHandler setTooltipShowCountMetric:] */

void FUN_106183a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 106183a6c; end: 106183a73; -[SCFeatureAutoEnableRingFlashHandler autoEnabledCountMetric] */

undefined8 FUN_106183a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106183a74; end: 106183a7b; -[SCFeatureAutoEnableRingFlashHandler setAutoEnabledCountMetric:] */

void FUN_106183a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 106183a7c; end: 106183a83; -[SCFeatureAutoEnableRingFlashHandler toolbarItem] */

undefined8 FUN_106183a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106183a84; end: 106183a8b; -[SCFeatureAutoEnableRingFlashHandler debounceTimer] */

undefined8 FUN_106183a84(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 106183a8c; end: 106183abb; -[SCFeatureAutoEnableRingFlashHandler setDebounceTimer:] */

void FUN_106183a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106183abc; end: 106183bf3; -[SCFeatureAutoEnableRingFlashHandler .cxx_destruct] */

void FUN_106183abc(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106183bf4; end: 106183bf7;  */

void FUN_106183bf4(void)

{
  return;
}



/* Entry: 106183bf8; end: 106183cef;  */

void FUN_106183bf8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106183cf0; end: 106183e2b; -[SCFeatureRingFlashImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106183cf0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c256420();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741158);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  if (((*(char *)(param_1 + _DAT_1127411bc) == '\x01') &&
      ((*(byte *)(param_1 + _DAT_1127411c0) & 1) == 0)) &&
     (lVar4 = (long)_DAT_1127411c4, *(long *)(param_1 + lVar4) != 0)) {
    uVar2 = *(ulong *)(param_1 + _DAT_1127411b8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf91920();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf51e00();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106183e2c;
      puStack_40 = &UNK_110842e18;
      uStack_38 = uVar1;
      _objc_retain();
      func_0x0001000d76cc("APPSTORE",&puStack_58);
      _objc_release(uStack_38);
      _objc_release(uVar1);
    }
  }
  puStack_60 = PTR_PTR_1126eff70;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106183e2c; end: 106183ec7;  */

void FUN_106183e2c(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  func_0x00010bfb2c80(*(undefined8 *)(param_2 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173c60((double)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106183ec8; end: 106183ed7; -[SCFeatureRingFlashImpl getRingFlashDisableCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106183ec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127411c8);
}



/* Entry: 106183ed8; end: 106183fe3; -[SCFeatureRingFlashImpl autoEnableRingFlash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106183ed8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + _DAT_11274115c) != 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741184);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c8690;
    _objc_alloc(PTR_PTR_1126c8690);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0401e0(puVar2,param_2,2,puVar3,puVar4,*(undefined8 *)(param_1 + _DAT_1127411d0));
    func_0x00010c1ee3e0(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + _DAT_112741174) = 2;
  }
  return;
}



/* Entry: 106183fe4; end: 10618410b; -[SCFeatureRingFlashImpl autoEnableFlashForTreatment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106183fe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  if (*(long *)(param_1 + _DAT_11274115c) == 0) {
    lVar5 = param_1;
    func_0x00010be975c0();
    if (lVar5 != 0) {
      lVar6 = (long)_DAT_112741178;
      dVar7 = *(double *)(param_1 + lVar6);
      if (*(double *)(param_1 + lVar6) <= 0.30000001192092896) {
        dVar7 = 0.30000001192092896;
      }
      *(double *)(param_1 + lVar6) = dVar7;
      uVar1 = *(undefined8 *)(param_1 + _DAT_112741184);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c8690;
      _objc_alloc(PTR_PTR_1126c8690);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                          PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(*(undefined8 *)(param_1 + lVar6),PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0401e0(puVar2,param_2,lVar5,puVar3,puVar4,
                          *(undefined8 *)(param_1 + _DAT_1127411d0));
      func_0x00010c1ee3e0(uVar1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar1);
    }
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}



/* Entry: 10618410c; end: 1061841ff; -[SCFeatureRingFlashImpl autoDisableFlash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618410c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(long *)(param_1 + _DAT_11274115c) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741184);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c8690;
    _objc_alloc(PTR_PTR_1126c8690);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_11274117c),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + _DAT_112741178),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0401e0(puVar2,param_2,0,puVar3,puVar4,*(undefined8 *)(param_1 + _DAT_1127411d0));
    func_0x00010c1ee3e0(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106184200; end: 106184267; -[SCFeatureRingFlashImpl _ringFlashStateForAutoEnableTreatment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106184200(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be40ac0();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else if (param_3 == 2) {
    uVar2 = 1;
    if ((int)lVar1 != 0) {
      uVar2 = 2;
    }
  }
  else if ((param_3 == 1) && ((int)lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112741174);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 106184268; end: 10618435f; -[SCFeatureRingFlashImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184268(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11274114c;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1,param_2,uVar2,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106184360; end: 1061843ef; -[SCFeatureRingFlashImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106184360(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741188);
  *(undefined **)(param_1 + _DAT_112741188) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274118c);
  *(undefined **)(param_1 + _DAT_11274118c) = puVar1;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127411d8;
  func_0x00010c217200(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c16cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setAutoEnabledCountMetric__112638d90,0);
  return;
}



/* Entry: 1061843f0; end: 1061845ff; -[SCFeatureRingFlashImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061843f0(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c8500;
  func_0x00010c1594a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8500;
  func_0x00010c159680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8500;
  func_0x00010c141220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c8500;
  func_0x00010c141200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar11 = (long)_DAT_1127411d8;
  func_0x00010c273fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf117c0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be26d20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106184600; end: 106184647;  */

void FUN_106184600(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26d20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


