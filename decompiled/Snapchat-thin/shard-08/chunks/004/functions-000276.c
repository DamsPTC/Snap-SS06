/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060c4ae8; end: 1060c4b1b;  */

void FUN_1060c4ae8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c4b1c; end: 1060c4bbf;  */

void FUN_1060c4b1c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c4bc0; end: 1060c4c1f;  */

void FUN_1060c4bc0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf093c0(param_2);
  _objc_release(param_2);
  func_0x00010bea7e00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c4c20; end: 1060c4cc3;  */

void FUN_1060c4c20(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c4cc4; end: 1060c4d0b;  */

void FUN_1060c4cc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c4d0c; end: 1060c4d2b; -[SCFeatureToggleCameraVideoStabilizationButton _setStabilizationForIncompatibleMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4d0c(long param_1,undefined8 param_2,int param_3)

{
  if ((*(byte *)(param_1 + _DAT_11273edc0) & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf80910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disableStabilizationModeForIncom_1125bdbe8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf91e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enableStabilizationModeForIncomp_1125c2128);
  return;
}



/* Entry: 1060c4d2c; end: 1060c4e27; -[SCFeatureToggleCameraVideoStabilizationButton _updateBasedStabilizationStateFromObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4d2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf60220();
  *(bool *)(param_1 + _DAT_11273ed60) = lVar1 != 0;
  func_0x00010bee2560(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((*(byte *)(param_1 + _DAT_11273edc0) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c121e40(param_3);
    func_0x00010c0df760(puVar2,param_2,lVar1 != 0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273eda0);
    *(undefined **)(param_1 + _DAT_11273eda0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_3;
    func_0x00010bfbb220(param_3);
    func_0x00010c0df760(puVar2,param_2,lVar1 != 0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273ed9c);
    *(undefined **)(param_1 + _DAT_11273ed9c) = puVar2;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273ed84),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c4e28; end: 1060c4e57; -[SCFeatureToggleCameraVideoStabilizationButton disableStabilizationModeForIncompatibleMode] */

void FUN_1060c4e28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bee2560(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bea7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setStabilizationModeOn_userInit_112587930,0,0);
  return;
}



/* Entry: 1060c4e58; end: 1060c4fa7; -[SCFeatureToggleCameraVideoStabilizationButton enableStabilizationModeForIncompatibleMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4e58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bea2600(param_1,param_2,0,1);
  lVar1 = *(long *)(param_1 + _DAT_11273ed90);
  if (lVar1 != 0) {
    func_0x00010bf1f3c0();
    if ((int)lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0001000cb554();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273ed6c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b00d0;
    func_0x00010c209000(PTR_PTR_1126b00d0,param_2,1,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + _DAT_11273eda4);
  if (lVar1 != 0) {
    func_0x00010bf1f3c0();
    if ((int)lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0001000cb554();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273ed6c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b00d0;
    func_0x00010c209000(PTR_PTR_1126b00d0,param_2,0,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1060c4fa8; end: 1060c504f; -[SCFeatureToggleCameraVideoStabilizationButton _setButtonHidden:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c4fa8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273eda8;
  if (((*(long *)(param_1 + lVar1) != 0) && (*(byte *)(param_1 + _DAT_11273edc8) != param_3)) &&
     (*(char *)(param_1 + _DAT_11273edc8) = (char)param_3, *(long *)(param_1 + lVar1) != 0)) {
    param_1 = param_1 + _DAT_11273edac;
    _objc_loadWeakRetained(param_1);
    if ((param_3 & 1) == 0) {
      func_0x00010c23a840();
    }
    else {
      func_0x00010bfe2c00();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060c5050; end: 1060c50ab; -[SCFeatureToggleCameraVideoStabilizationButton _logUserActionForUIItem:isEnabling:] */

void FUN_1060c5050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1060c50ac;
  puStack_30 = &UNK_110861e68;
  uStack_28 = param_1;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  return;
}



/* Entry: 1060c50ac; end: 1060c512b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c50ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ed70;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b820();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c512c; end: 1060c521b; -[SCFeatureToggleCameraVideoStabilizationButton _handleCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c512c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11273ed94;
  bVar1 = *(byte *)(param_1 + lVar5);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf0acc0();
  if ((uint)bVar1 == (uint)lVar3) {
    lVar6 = (long)_DAT_11273edb4;
    cVar2 = *(char *)(param_1 + lVar6);
    lVar3 = param_3;
    func_0x00010bf70d80();
    lVar4 = param_3;
    func_0x00010bf0acc0();
    *(char *)(param_1 + lVar5) = (char)lVar4;
    lVar5 = param_3;
    func_0x00010bf70d80();
    _objc_release(param_3);
    *(bool *)(param_1 + lVar6) = lVar5 == 0;
    if ((bool)cVar2 == (lVar3 == 0)) {
      return;
    }
  }
  else {
    lVar3 = param_3;
    func_0x00010bf0acc0();
    *(char *)(param_1 + lVar5) = (char)lVar3;
    lVar3 = param_3;
    func_0x00010bf70d80();
    _objc_release(param_3);
    *(bool *)(param_1 + _DAT_11273edb4) = lVar3 == 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideButtonFromExperimentIfNeede_11256aef0);
  return;
}



/* Entry: 1060c521c; end: 1060c5223; -[SCFeatureToggleCameraVideoStabilizationButton modeEnabledStateChangedObservable] */

undefined8 FUN_1060c521c(void)

{
  return 0;
}



/* Entry: 1060c5224; end: 1060c522f; -[SCFeatureToggleCameraVideoStabilizationButton disableMode] */

void FUN_1060c5224(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setStabilizationModeOn_userInit_112587930,0,0);
  return;
}



/* Entry: 1060c5230; end: 1060c523b; -[SCFeatureToggleCameraVideoStabilizationButton incompatibleModes] */

undefined ** FUN_1060c5230(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117ff60;
}



/* Entry: 1060c523c; end: 1060c5243; -[SCFeatureToggleCameraVideoStabilizationButton modeType] */

undefined8 FUN_1060c523c(void)

{
  return 0x13;
}



/* Entry: 1060c5244; end: 1060c5297; -[SCFeatureToggleCameraVideoStabilizationButton onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c5244(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar1 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bea7e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setStabilizationModeOn_userInit_112587930,
               (*(byte *)(param_1 + _DAT_11273ed60) ^ 0xff) & 1,1);
    return;
  }
  return;
}



/* Entry: 1060c5298; end: 1060c529f; -[SCFeatureToggleCameraVideoStabilizationButton isHidden] */

undefined8 FUN_1060c5298(void)

{
  return 0;
}



/* Entry: 1060c52a0; end: 1060c52a3; -[SCFeatureToggleCameraVideoStabilizationButton secondaryOnTap:] */

void FUN_1060c52a0(void)

{
  return;
}



/* Entry: 1060c52a4; end: 1060c52b3; -[SCFeatureToggleCameraVideoStabilizationButton state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060c52a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273ed60);
}



/* Entry: 1060c52b4; end: 1060c52bb; -[SCFeatureToggleCameraVideoStabilizationButton secondaryButtonState] */

undefined8 FUN_1060c52b4(void)

{
  return 0;
}



/* Entry: 1060c52bc; end: 1060c52bf; -[SCFeatureToggleCameraVideoStabilizationButton toolbarButtonPositionDidChange:] */

void FUN_1060c52bc(void)

{
  return;
}



/* Entry: 1060c52c0; end: 1060c5407; -[SCFeatureToggleCameraVideoStabilizationButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c52c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ed84,0);
  _objc_storeStrong(param_1 + _DAT_11273ed98,0);
  _objc_storeStrong(param_1 + _DAT_11273edb0,0);
  _objc_storeStrong(param_1 + _DAT_11273ed90,0);
  _objc_storeStrong(param_1 + _DAT_11273eda4,0);
  _objc_storeStrong(param_1 + _DAT_11273eda0,0);
  _objc_storeStrong(param_1 + _DAT_11273ed9c,0);
  _objc_storeStrong(param_1 + _DAT_11273ed70,0);
  _objc_storeStrong(param_1 + _DAT_11273ed78,0);
  _objc_storeStrong(param_1 + _DAT_11273ed6c,0);
  _objc_storeStrong(param_1 + _DAT_11273ed68,0);
  _objc_storeStrong(param_1 + _DAT_11273ed64,0);
  _objc_storeStrong(param_1 + _DAT_11273eda8,0);
  _objc_destroyWeak(param_1 + _DAT_11273edac);
  _objc_storeStrong(param_1 + _DAT_11273ed74,0);
  _objc_storeStrong(param_1 + _DAT_11273edc4,0);
  _objc_destroyWeak(param_1 + _DAT_11273ed80);
  _objc_storeStrong(param_1 + _DAT_11273ed7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273edb8,0);
  return;
}



/* Entry: 1060c5408; end: 1060c54c3; -[SCFeatureContentLossLogger initWithCameraSnapCreationLogger:cameraCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060c5408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef8e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273edcc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273edd0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c54c4; end: 1060c5637; -[SCFeatureContentLossLogger beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c54c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1060c5638;
  puStack_68 = &UNK_11090d050;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar1 = param_4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273edd4);
  *(undefined8 *)(param_1 + _DAT_11273edd4) = uVar1;
  _objc_release(uVar2);
  _objc_copyWeak(auStack_88,auStack_58);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273edd8);
  *(undefined8 *)(param_1 + _DAT_11273edd8) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c5638; end: 1060c576b;  */

void FUN_1060c5638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1060c576c;
  puStack_60 = &UNK_11084ebd0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1060c57d4;
  puStack_88 = &UNK_11090d020;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c576c; end: 1060c57d3;  */

void FUN_1060c576c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c9e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c57d4; end: 1060c581b;  */

void FUN_1060c57d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68bc0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c581c; end: 1060c5883;  */

void FUN_1060c581c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68da0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c5884; end: 1060c5a1f;  */

void FUN_1060c5884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060c5a20;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1060c5a88;
  puStack_98 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1060c5b18;
  puStack_c0 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c5a20; end: 1060c5a87;  */

void FUN_1060c5a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb3c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c5a88; end: 1060c5b17;  */

void FUN_1060c5a88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc1e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c5b18; end: 1060c5b5f;  */

void FUN_1060c5b18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb9a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c5b60; end: 1060c5bc7;  */

void FUN_1060c5b60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb920();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c5bc8; end: 1060c5e17; -[SCFeatureContentLossLogger _onWillCaptureImageWithConfiguration:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c5bc8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c064e80();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273edd0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf311e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a29a0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar10 = (long)_DAT_11273edcc;
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf311e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c243320(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0982a0(param_4);
    uVar6 = param_3;
    func_0x00010bef0a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bef0520(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010bf70d80();
    func_0x0001092240b8();
    uVar9 = param_3;
    func_0x00010c243400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4f80(uVar4,param_2,uVar2,uVar5,1,uVar3,uVar6,uVar7,uVar8,uVar9);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf311e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c094b40();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3d7d8;
    if ((int)uVar5 == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    uVar5 = param_3;
    func_0x00010bf16740(param_3);
    uVar6 = param_3;
    func_0x00010bf2b540();
    func_0x00010c0a2440(uVar3,param_2,uVar2,&PTR____CFConstantStringClassReference_110f4c218,ppuVar1
                        ,0,uVar5,0,uVar6,0);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c5e18; end: 1060c5ee3; -[SCFeatureContentLossLogger _onDidCaptureImageWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c5e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273edcc);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf16740(param_3);
  uVar3 = param_3;
  func_0x00010bf2b540();
  _objc_release(param_3);
  func_0x00010c0a2440(uVar4,param_2,uVar1,&PTR____CFConstantStringClassReference_110f4c238,0,0,uVar2
                      ,0,uVar3,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1060c5ee4; end: 1060c60cb; -[SCFeatureContentLossLogger _onDidReceiveError:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c5ee4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar4 != 0) {
      lVar1 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e17af8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar2 = puVar5;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273edcc);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf311e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf16740(param_4);
  _objc_release(param_4);
  func_0x00010c0a4fa0(uVar6,param_2,uVar7,1,0,uVar8,0xffffffffffffffff,puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c60cc; end: 1060c6343; -[SCFeatureContentLossLogger _willStartRecordWithConfiguration:currentState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c60cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  *(undefined1 *)(param_1 + _DAT_11273eddc) = 0;
  uVar10 = *(undefined8 *)(param_1 + _DAT_11273edd0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a29a0(uVar10,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar10);
  lVar9 = (long)_DAT_11273edcc;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c243320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0982a0(param_4);
  uVar7 = param_3;
  func_0x00010bef0a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef0520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf70d80();
  _objc_release(param_4);
  func_0x0001092240b8();
  uVar6 = param_3;
  func_0x00010c243400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4f80(uVar2,param_2,uVar1,uVar10,0,uVar3,uVar7,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf31440();
  func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110e3d7f8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf16740(param_3);
  uVar3 = param_3;
  func_0x00010bf2b540();
  _objc_release(param_3);
  func_0x00010c0a2440(uVar7,param_2,uVar1,&PTR____CFConstantStringClassReference_110f4c218,puVar8,0,
                      uVar10,0,uVar3,0);
  _objc_release(puVar8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1060c6344; end: 1060c655b; -[SCFeatureContentLossLogger _didAbortRecordWithConfiguration:didCancelCapturerRecording:cancelReason:callsite:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6344(long param_1,undefined8 param_2,ulong param_3,byte param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(byte *)(param_1 + _DAT_11273eddc) = param_4;
  uVar4 = param_3;
  if (((param_4 & 1) == 0) && (uVar1 = param_3, func_0x00010c2701a0(), (uVar1 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273edcc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf16740(param_3);
    uVar5 = param_3;
    func_0x00010bf2b540();
    uVar6 = uVar4;
    func_0x00010c0a2440(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110f4c298,0,0,
                        uVar1,0,uVar5,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273edcc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf16740(param_3);
    uVar5 = param_3;
    func_0x00010bf2b540();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f4c438;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f4c458;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_78 = param_5;
    uStack_70 = param_6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&ppuStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0a2440(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110f4c3d8,0,0,
                        uVar1,0,uVar5,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + (long)_DAT_11273edcc);
  _objc_retain(uVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf311e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf16740(uVar6);
  uVar5 = uVar6;
  func_0x00010bf2b540();
  _objc_release(uVar6);
  func_0x00010c0a2440(uVar2,param_2,uVar4,&PTR____CFConstantStringClassReference_110f4c238,0,0,uVar1
                      ,0,uVar5,0);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060c655c; end: 1060c6627; -[SCFeatureContentLossLogger _capturerDidFinishRecordingWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c655c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273edcc);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf16740(param_3);
  uVar3 = param_3;
  func_0x00010bf2b540();
  _objc_release(param_3);
  func_0x00010c0a2440(uVar4,param_2,uVar1,&PTR____CFConstantStringClassReference_110f4c238,0,0,uVar2
                      ,0,uVar3,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1060c6628; end: 1060c674b; -[SCFeatureContentLossLogger _capturerDidFailRecordingWithConfiguration:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273edcc);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf16740(param_3);
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf3ec40();
  _objc_release(param_4);
  uVar7 = uVar3;
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4fa0(uVar6,param_2,uVar1,0,0,uVar2,0xffffffffffffffff,puVar5,uVar7,uVar4);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1060c674c; end: 1060c6823; -[SCFeatureContentLossLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c674c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ede0,0);
  _objc_storeStrong(param_1 + _DAT_11273ede4,0);
  _objc_storeStrong(param_1 + _DAT_11273edd8,0);
  _objc_storeStrong(param_1 + _DAT_11273edd4,0);
  _objc_storeStrong(param_1 + _DAT_11273edd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273edcc,0);
  return;
}



/* Entry: 1060c6824; end: 1060c682f;  */

void FUN_1060c6824(void)

{
  return;
}



/* Entry: 1060c6830; end: 1060c686f; -[SCFeatureSessionLogger _logCameraSessionEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6830(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ede8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf948e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c6870; end: 1060c68bf; -[SCFeatureSessionLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6870(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ede8,0);
  _objc_storeStrong(param_1 + _DAT_11273edf0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273edec,0);
  return;
}



/* Entry: 1060c68c0; end: 1060c6a4f; -[SCFeatureCameraImageDegradationLevelLogger initWithBlizzardLogger:cameraHardwareResource:modelProvider:imageDegradationLevelLoggerConfig:applicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060c68c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ef8f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273edf4),param_3);
    lVar5 = (long)_DAT_11273edf8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273edfc),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273ee00),param_6);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ee04);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ee04) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010be65ba0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c6a50; end: 1060c6a93; -[SCFeatureCameraImageDegradationLevelLogger dealloc] */

void FUN_1060c6a50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec33a0();
  puStack_28 = PTR_PTR_1126ef8f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1060c6a94; end: 1060c6b97; -[SCFeatureCameraImageDegradationLevelLogger beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11273ee08;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar1 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c6b98; end: 1060c6c43;  */

void FUN_1060c6b98(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c6c44; end: 1060c6e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6c44(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar8 = (long)_DAT_11273ee00;
    lVar1 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c149840();
    lVar2 = param_1;
    func_0x00010beb57c0();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126aff08;
    if ((param_2 != 0) && ((int)lVar2 != 0)) {
      func_0x00010bf70d80(param_5);
      func_0x00010c073f00();
      if ((int)puVar3 != 0) {
        uVar4 = param_4;
        func_0x00010bef0a60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar4 == 0) {
          lVar8 = param_1 + lVar8;
          _objc_loadWeakRetained();
          lVar1 = lVar8;
          func_0x00010bf9abe0();
          if ((int)lVar1 == 0) {
            _objc_release(lVar8);
          }
          else {
            uVar4 = param_4;
            func_0x00010c0773c0();
            _objc_release(lVar8);
            if ((uVar4 & 1) != 0) goto LAB_1060c6e10;
          }
          uVar5 = *(undefined8 *)(param_1 + _DAT_11273edf8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010bf70ba0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf70ce0();
          _objc_release(uVar6);
          _objc_release(uVar7);
          _objc_release(uVar5);
          uVar7 = *(undefined8 *)(param_1 + _DAT_11273ee04);
          _objc_retain(param_2);
          _objc_retain(param_4);
          func_0x00010c0f7fc0(uVar7);
          _objc_release(param_4);
          _objc_release(param_2);
        }
      }
    }
  }
LAB_1060c6e10:
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c6e50; end: 1060c6e5f;  */

void FUN_1060c6e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onDidCaptureImageWithStillImage_112577c98,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1060c6e60; end: 1060c712b; -[SCFeatureCameraImageDegradationLevelLogger _onDidCaptureImageWithStillImageData:configuration:deviceOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c6e60(double param_1,double param_2,long param_3,undefined8 param_4,undefined *param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010be4dfc0(param_3);
  lVar7 = (long)_DAT_11273ee0c;
  if (*(long *)(param_3 + lVar7) != 0) {
    _objc_autoreleasePoolPush();
    puVar2 = param_5;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 != (undefined *)0x0) && (*(long *)(param_3 + lVar7) != 0)) {
      _objc_retain(puVar2);
      lVar8 = (long)_DAT_11273ee00;
      lVar7 = param_3 + lVar8;
      _objc_loadWeakRetained();
      lVar3 = lVar7;
      func_0x00010c232f60();
      _objc_release(lVar7);
      puVar5 = puVar2;
      dVar12 = param_2;
      if ((int)lVar3 != 0) {
        func_0x00010c0c2640(PTR_PTR_1126bf720);
        puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        dVar13 = param_1;
        dVar12 = param_2;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        dVar11 = dVar13;
        _objc_release(puVar4);
        func_0x00010c23d0a0(puVar2);
        func_0x00010c23d0a0(puVar2);
        param_1 = param_1 * dVar13;
        if (dVar12 <= dVar11) {
          dVar11 = dVar12;
        }
        dVar14 = param_1;
        if (param_2 * dVar13 <= param_1) {
          dVar14 = param_2 * dVar13;
        }
        lVar7 = param_3 + lVar8;
        _objc_loadWeakRetained(lVar7);
        fVar9 = SUB84(param_1,0);
        func_0x00010bfe8aa0();
        fVar10 = (float)(dVar11 / dVar14) + -1.0;
        param_1 = (double)(ulong)(uint)fVar10;
        _objc_release(lVar7);
        if (fVar9 < ABS(fVar10)) {
          func_0x00010c23d0a0(puVar2);
          func_0x00010c23d0a0(puVar2);
          dVar13 = (double)(float)(dVar11 / dVar14);
          param_1 = param_1 / dVar13;
          dVar12 = dVar12 / dVar13;
          func_0x00010c14e680(param_1,dVar12,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
        }
      }
      lVar8 = param_3 + lVar8;
      _objc_loadWeakRetained();
      lVar7 = lVar8;
      func_0x00010c232ce0();
      _objc_release(lVar8);
      puVar4 = puVar5;
      if (((int)lVar7 != 0) && (param_7 - 2U < 3)) {
        param_1 = *(double *)(&UNK_10ddd3d20 + (param_7 - 2U) * 8);
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8a20(param_1,PTR__OBJC_CLASS___UIImage_1126aea68,param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      uVar6 = param_6;
      func_0x00010bf311e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(puVar4);
      func_0x00010c23d0a0(puVar4);
      func_0x00010be39060(param_3,param_4,puVar4,uVar6,(long)param_1,(long)dVar12);
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_autoreleasePoolPop(lVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1060c712c; end: 1060c73db; -[SCFeatureCameraImageDegradationLevelLogger _loadModelIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c712c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar13 = (long)_DAT_11273ee0c;
  if (*(long *)(param_1 + lVar13) == 0) {
    lVar12 = (long)_DAT_11273ee00;
    lVar1 = param_1 + lVar12;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfe7400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar10 = (long)_DAT_11273edfc;
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bfe7400();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c0d0160();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf04b00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfe70c0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar13);
      *(long *)(param_1 + lVar13) = lVar9;
      _objc_release(uVar11);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar10);
      lVar13 = lVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1 + lVar12;
      _objc_loadWeakRetained(lVar12);
      lVar1 = lVar12;
      func_0x00010bfe7400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar13;
      func_0x00010c291940(lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar12);
      _objc_release(lVar13);
      _objc_release(lVar10);
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_1060c73dc;
      uStack_70 = 0x1060c73ec;
      uStack_68 = 0;
      func_0x00010c0bf0a0(lVar4);
      uVar14 = puStack_88[5];
      lVar13 = (long)_DAT_11273ee10;
      _objc_retain(uVar14);
      uVar11 = *(undefined8 *)(param_1 + lVar13);
      *(undefined8 *)(param_1 + lVar13) = uVar14;
      _objc_release(uVar11);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1060c73dc; end: 1060c73f3;  */

void FUN_1060c73dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060c73f4; end: 1060c742b;  */

void FUN_1060c73f4(long param_1,undefined8 param_2)

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



/* Entry: 1060c742c; end: 1060c74a3; -[SCFeatureCameraImageDegradationLevelLogger _imageWithImage:convertToSize:] */

void FUN_1060c742c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _UIGraphicsBeginImageContext(param_1,param_2);
  func_0x00010bf89920(0,0,param_1,param_2,param_5);
  _objc_release(param_5);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1060c74a4; end: 1060c782b; -[SCFeatureCameraImageDegradationLevelLogger _inferAndLogDegradationLevelWithImage:captureSessionId:pixelWidth:pixelHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c74a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273ee0c);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b30e0;
  _objc_alloc(PTR_PTR_1126b30e0);
  func_0x00010bff3e00(0);
  func_0x00010c1064a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_1060c73dc;
  uStack_90 = 0x1060c73ec;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e3d838;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_1060c73dc;
  uStack_c0 = 0x1060c73ec;
  uStack_b8 = 0;
  func_0x00010c0bf0a0(uVar7);
  lVar3 = puStack_d8[5];
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar4 = puStack_d8[5];
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c7c18;
    _objc_opt_new(PTR_PTR_1126c7c18);
    func_0x00010c179280();
    uVar5 = uVar4;
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8d80(puVar2);
    _objc_release(puVar1);
    func_0x00010c1c56e0(puVar2);
    func_0x00010c1c4860(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273ee10);
    func_0x00010c296f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8da0(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar6);
    param_1 = param_1 + _DAT_11273edf4;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(ppuStack_88);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_e0,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_b0);
  __Unwind_Resume();
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  return;
}



/* Entry: 1060c782c; end: 1060c78bb;  */

void FUN_1060c782c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1060c78bc; end: 1060c790f; -[SCFeatureCameraImageDegradationLevelLogger _shouldSampleWithRate:] */

bool FUN_1060c78bc(float param_1)

{
  ulong uVar1;
  
  if (0.0 < param_1) {
    uVar1 = 10000;
    _arc4random_uniform();
    return (float)(uVar1 & 0xffffffff) < (float)(int)(param_1 * 10000.0);
  }
  return false;
}



/* Entry: 1060c7910; end: 1060c7a13; -[SCFeatureCameraImageDegradationLevelLogger _observeApplicationLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c7910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273ee14);
  *(undefined8 *)(param_1 + _DAT_11273ee14) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c7a14; end: 1060c7a5b;  */

void FUN_1060c7a14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c7a5c; end: 1060c7b27; -[SCFeatureCameraImageDegradationLevelLogger _didReceiveMemoryWarning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c7a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ee04);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c7b28; end: 1060c7b53;  */

void FUN_1060c7b28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c7b54; end: 1060c7bab; -[SCFeatureCameraImageDegradationLevelLogger _respondToMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c7b54(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ee0c);
  *(undefined8 *)(param_1 + _DAT_11273ee0c) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ee18);
  *(undefined **)(param_1 + _DAT_11273ee18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c7bac; end: 1060c7c3b; -[SCFeatureCameraImageDegradationLevelLogger _shouldProcessImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060c7bac(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273ee18;
  if (*(long *)(param_2 + lVar3) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
    if (param_1 < 1000.0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    *(undefined8 *)(param_2 + lVar3) = 0;
    _objc_release(uVar2);
  }
  return 1;
}



/* Entry: 1060c7c3c; end: 1060c7c93; -[SCFeatureCameraImageDegradationLevelLogger _stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c7c3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ee14;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11273ee08;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c7c94; end: 1060c7d47; -[SCFeatureCameraImageDegradationLevelLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c7c94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ee18,0);
  _objc_storeStrong(param_1 + _DAT_11273ee10,0);
  _objc_storeStrong(param_1 + _DAT_11273ee0c,0);
  _objc_storeStrong(param_1 + _DAT_11273edf8,0);
  _objc_destroyWeak(param_1 + _DAT_11273ee00);
  _objc_destroyWeak(param_1 + _DAT_11273edfc);
  _objc_destroyWeak(param_1 + _DAT_11273edf4);
  _objc_storeStrong(param_1 + _DAT_11273ee04,0);
  _objc_storeStrong(param_1 + _DAT_11273ee14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ee08,0);
  return;
}



/* Entry: 1060c7d48; end: 1060c7ea7; -[SCFeatureSnapRecoveryImpl initWithUserSession:activeVideoPaths:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060c7d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef8f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c26b240(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c7c20;
    _objc_alloc();
    func_0x00010c051040();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ee1c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ee1c) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c7ea8; end: 1060c7f9b; -[SCFeatureSnapRecoveryImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c7ea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ee20);
  *(undefined8 *)(param_1 + _DAT_11273ee20) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c7f9c; end: 1060c812f;  */

void FUN_1060c7f9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1060c8130;
  puStack_70 = &UNK_11090d2a0;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1060c815c;
  puStack_98 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1060c8188;
  puStack_c0 = &UNK_11090d380;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c8130; end: 1060c8187;  */

void FUN_1060c8130(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c8188; end: 1060c8207;  */

void FUN_1060c8188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc700();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c8208; end: 1060c8233;  */

void FUN_1060c8208(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060c8234; end: 1060c839f; -[SCFeatureSnapRecoveryImpl recordedVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8234(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = (long)_DAT_11273ee1c;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010c123d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c123d00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29bb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0(puVar4,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (puVar4 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_58,puVar4);
    }
    _CMTimeGetSeconds(&uStack_58);
    puVar5 = PTR_PTR_1126ae558;
    if (param_1 <= 0.0) {
      func_0x00010c12a9c0(*(undefined8 *)(param_2 + lVar6));
      lVar1 = param_2 + _DAT_11273ee24;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf79a20();
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar1 = *(long *)(param_2 + lVar6);
      func_0x00010c123d00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar5,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    if ((*(byte *)(param_2 + _DAT_11273ee28) & 1) == 0) {
      func_0x00010c1e8ec0(*(undefined8 *)(param_2 + lVar6),param_3,0);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060c83a0; end: 1060c83a3; -[SCFeatureSnapRecoveryImpl reset] */

void FUN_1060c83a0(void)

{
  return;
}



/* Entry: 1060c83a4; end: 1060c83b3; -[SCFeatureSnapRecoveryImpl generateURLForRecordedVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c83a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc03b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ee1c),
             PTR_s_generateTempOutputURLAndAddActiv_1125cda90);
  return;
}



/* Entry: 1060c83b4; end: 1060c83c3; -[SCFeatureSnapRecoveryImpl _didAbortRecord] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c83b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ee1c),
             PTR_s_removeActiveRecordingURLOfRecord_112628490);
  return;
}



/* Entry: 1060c83c4; end: 1060c83d3; -[SCFeatureSnapRecoveryImpl _didRecceiveError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c83c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ee1c),
             PTR_s_removeActiveRecordingURLOfRecord_112628490);
  return;
}



/* Entry: 1060c83d4; end: 1060c845b; -[SCFeatureSnapRecoveryImpl _didCaptureVideo:configuration:currentCapturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c83d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf16740();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_4, func_0x00010c0753e0(), (uVar1 & 1) == 0)) &&
     (*(char *)(param_1 + _DAT_11273ee28) == '\x01')) {
    func_0x00010c1e8ec0(*(undefined8 *)(param_1 + _DAT_11273ee1c),param_2,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060c845c; end: 1060c846b; -[SCFeatureSnapRecoveryImpl _didBeginVideoRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c845c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ee1c),
             PTR_s_addRecordingURLToActiveVideoPath_11259c508);
  return;
}



/* Entry: 1060c846c; end: 1060c847f; -[SCFeatureSnapRecoveryImpl _applicationWillResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c846c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273ee28) = 1;
  return;
}



/* Entry: 1060c8480; end: 1060c848f; -[SCFeatureSnapRecoveryImpl _applicationDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8480(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273ee28) = 0;
  return;
}



/* Entry: 1060c8490; end: 1060c84af; -[SCFeatureSnapRecoveryImpl snapRecoveryDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8490(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273ee24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060c84b0; end: 1060c84c3; -[SCFeatureSnapRecoveryImpl setSnapRecoveryDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c84b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273ee24,param_3);
  return;
}



/* Entry: 1060c84c4; end: 1060c850f; -[SCFeatureSnapRecoveryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c84c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ee24);
  _objc_storeStrong(param_1 + _DAT_11273ee1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ee20,0);
  return;
}



/* Entry: 1060c8510; end: 1060c85b3; -[SCRecordingFileManager initWithTemporaryDatastore:activeVideoPaths:] */

undefined1 *
FUN_1060c8510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef900;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060c85b4; end: 1060c86cf; -[SCRecordingFileManager generateTempOutputURLAndAddActiveVideoURL] */

void FUN_1060c85b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3d858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8020(0x40f5180000000000,uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e3d878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8020(0x40f5180000000000,uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060c86d0; end: 1060c8707; -[SCRecordingFileManager restoreActiveVideoURLs] */

void FUN_1060c86d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13c500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060c8708; end: 1060c876f; -[SCRecordingFileManager addRecordingURLToActiveVideoPaths] */

void FUN_1060c8708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0899c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc900(uVar1,param_2,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1060c8770; end: 1060c87eb; -[SCRecordingFileManager removeActiveRecordingURLOfRecordedVideo] */

void FUN_1060c8770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0899c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c87ec; end: 1060c87f3; -[SCRecordingFileManager recordedVideo] */

undefined8 FUN_1060c87ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060c87f4; end: 1060c8823; -[SCRecordingFileManager setRecordedVideo:] */

void FUN_1060c87f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060c8824; end: 1060c8883; -[SCRecordingFileManager .cxx_destruct] */

void FUN_1060c8824(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060c8884; end: 1060c88cf; -[SCFeatureAfterCaptureActionTrackerImpl didTriggerAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8884(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ee44);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060c88d0; end: 1060c88e3; -[SCFeatureAfterCaptureActionTrackerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c88d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273ee44,0);
  return;
}



/* Entry: 1060c88e4; end: 1060c89d7; -[SCFeatureVideoCaptureFailureMessageImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c88e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ee48);
  *(undefined8 *)(param_1 + _DAT_11273ee48) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060c89d8; end: 1060c8a9f;  */

void FUN_1060c89d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060c8aa0; end: 1060c8aef;  */

void FUN_1060c8aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfdae0(param_1,param_2,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060c8af0; end: 1060c8b03; -[SCFeatureVideoCaptureFailureMessageImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060c8af0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273ee4c,param_3);
  return;
}


