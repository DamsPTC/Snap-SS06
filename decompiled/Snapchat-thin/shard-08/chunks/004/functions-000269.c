/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060a1460; end: 1060a1463; -[SCFeatureMultiCamModeImpl onboardingDialogTitle] */

void FUN_1060a1460(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e99238;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e99238,
                      &PTR____CFConstantStringClassReference_110e99118,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060a1464; end: 1060a1467; -[SCFeatureMultiCamModeImpl onboardingDialogDescription] */

void FUN_1060a1464(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e99258;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e99258,
                      &PTR____CFConstantStringClassReference_110e99118,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060a1468; end: 1060a14a3; -[SCFeatureMultiCamModeImpl hasSeenOnboardingDialog] */

undefined8 FUN_1060a1468(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdb9e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060a14a4; end: 1060a14df; -[SCFeatureMultiCamModeImpl newBadgeFirstShownDate] */

undefined8 FUN_1060a14a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc7b20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060a14e0; end: 1060a174f; -[SCFeatureMultiCamModeImpl enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a14e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  if ((*(byte *)(param_1 + _DAT_11273e7cc) & 1) == 0) {
    func_0x00010c1afce0(param_1,param_2,1);
    lVar5 = param_1;
    func_0x00010c0753e0();
    if ((int)lVar5 != 0) {
      func_0x00010bdf51e0(param_1);
    }
    lVar6 = (long)_DAT_11273e7a0;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    lVar5 = param_1;
    func_0x00010bf29960(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70d80();
    func_0x00010c06b6a0(param_1);
    func_0x00010c2a62c0(uVar4);
    _objc_release(lVar1);
    _objc_release(lVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c06b6a0(param_1);
    func_0x00010c0aa7c0(uVar4);
    func_0x00010c212700(*(undefined8 *)(param_1 + _DAT_11273e784));
    if (*(char *)(param_1 + _DAT_11273e7ac) == '\x01') {
      *(undefined1 *)(param_1 + _DAT_11273e7ac) = 0;
      func_0x00010bf69a80(param_1);
      func_0x00010bea3280(param_1);
    }
    puStack_58 = PTR_PTR_1126ef848;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_enable_1125c1570);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e768);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c080be0();
    lVar5 = (long)_DAT_11273e7d0;
    *(char *)(param_1 + lVar5) = (char)uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (*(char *)(param_1 + lVar5) == '\x01') {
      _objc_initWeak(auStack_68,param_1);
      param_1 = param_1 + _DAT_11273e764;
      _objc_loadWeakRetained(param_1);
      lVar5 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c1c9320(lVar5);
      _objc_release(lVar5);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    else {
      func_0x00010bec0700(param_1);
    }
  }
  return;
}



/* Entry: 1060a1750; end: 1060a177b;  */

void FUN_1060a1750(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec0700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a177c; end: 1060a182f; -[SCFeatureMultiCamModeImpl disable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a177c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + _DAT_11273e7d4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf8ae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dualCameraLensActive__1125c0540,1);
    return;
  }
  puStack_28 = PTR_PTR_1126ef848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_disable_1125bd820);
  func_0x00010bed6da0(param_1);
  func_0x00010c0e3d80(*(undefined8 *)(param_1 + _DAT_11273e7c0));
  func_0x00010c0e3be0(*(undefined8 *)(param_1 + _DAT_11273e7a0));
  func_0x00010c212700(*(undefined8 *)(param_1 + _DAT_11273e784));
  func_0x00010c1afce0(param_1);
  return;
}



/* Entry: 1060a1830; end: 1060a1887; -[SCFeatureMultiCamModeImpl autoEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1830(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_autoEnable_1125a1f48);
  func_0x00010bea3280(param_1);
  return;
}



/* Entry: 1060a1888; end: 1060a18a3; -[SCFeatureMultiCamModeImpl autoEnableWithLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1888(long param_1,undefined8 param_2,int param_3)

{
  if (4 < param_3 - 1U) {
    param_3 = 0;
  }
  *(int *)(param_1 + _DAT_11273e7c4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bf11690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_autoEnable_1125a1f48);
  return;
}



/* Entry: 1060a18a4; end: 1060a1957; -[SCFeatureMultiCamModeImpl autoEnableFromDeepLinkWithQueryParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a18a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  FUN_1060bdb3c(uVar1);
  _objc_release(uVar1);
  func_0x00010bf117a0(param_1);
  func_0x00010c0a23e0(*(undefined8 *)(param_1 + _DAT_11273e7a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060a1958; end: 1060a19b7; -[SCFeatureMultiCamModeImpl onCameraModeLensInCarouselActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1958(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef848;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_onCameraModeLensInCarouselActiva_112616520);
  func_0x00010c0e2c20(*(undefined8 *)(param_1 + _DAT_11273e7c0));
  func_0x00010c0aa7a0(*(undefined8 *)(param_1 + _DAT_11273e7a0));
  return;
}



/* Entry: 1060a19b8; end: 1060a1a07; -[SCFeatureMultiCamModeImpl onCameraModeReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a19b8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273e7c8) = 1;
  *(ulong *)(param_1 + _DAT_11273e7b4) = *(ulong *)(param_1 + _DAT_11273e7b4) | 1;
  func_0x00010c0e3da0(*(undefined8 *)(param_1 + _DAT_11273e7c0));
                    /* WARNING: Could not recover jumptable at 0x00010c24f870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startObservingCanTapEvent_112671840);
  return;
}



/* Entry: 1060a1a08; end: 1060a1a2f; -[SCFeatureMultiCamModeImpl onMultiCamSessionToggled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1a08(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = 2;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(ulong *)(param_1 + _DAT_11273e7b4) =
       *(ulong *)(param_1 + _DAT_11273e7b4) & 0xfffffffffffffffd | uVar1;
  return;
}



/* Entry: 1060a1a30; end: 1060a1a6b; -[SCFeatureMultiCamModeImpl onCaptureDevicePositionDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1a30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf926c0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf73150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11273e7a0),
               PTR_s_didChangeDevicePositionWhileMode_1125ba5f8);
    return;
  }
  return;
}



/* Entry: 1060a1a6c; end: 1060a1a9f; -[SCFeatureMultiCamModeImpl onOnboardingDialogShown] */

void FUN_1060a1a6c(undefined8 param_1)

{
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a1aa0; end: 1060a1afb; -[SCFeatureMultiCamModeImpl onNewBadgeFirstShown] */

void FUN_1060a1aa0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1c9440(param_2,param_3,(long)param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060a1afc; end: 1060a1b83; -[SCFeatureMultiCamModeImpl clearNewBadgeAndOnboardingDialogStatus] */

void FUN_1060a1afc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf2b520(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126ef848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_newBadgeFirstShownDate_112613b58);
  func_0x00010c1c9440(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1060a1b84; end: 1060a1ce3; -[SCFeatureMultiCamModeImpl didRegisterProviderToken:noFormatFoundError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1b84(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    if (*(int *)(param_1 + _DAT_11273e7c4) != 3) goto LAB_1060a1cc0;
    lVar5 = param_1;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf70d80();
    _objc_release(lVar1);
    _objc_release(lVar5);
    if (lVar2 == 0) goto LAB_1060a1cc0;
    lVar5 = param_1 + _DAT_11273e764;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afed0;
    func_0x00010bf13820(PTR_PTR_1126afed0);
    puVar6 = &UNK_10f363fb5;
    uVar7 = 0x2d8;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db92b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cd00(lVar1,param_2,0,puVar3,&PTR___NSConcreteGlobalBlock_11090bb20,puVar4,param_7
                        ,param_8,puVar6,uVar7);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  else {
    lVar5 = *(long *)(param_1 + _DAT_11273e7d8);
    *(undefined8 *)(param_1 + _DAT_11273e7d8) = 0;
  }
  _objc_release(lVar5);
LAB_1060a1cc0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060a1ce4; end: 1060a1ce7;  */

void FUN_1060a1ce4(void)

{
  return;
}



/* Entry: 1060a1ce8; end: 1060a1cff; -[SCFeatureMultiCamModeImpl didUnregisterProviderToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1ce8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7d8);
  *(undefined8 *)(param_1 + _DAT_11273e7d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060a1d00; end: 1060a1d0b; -[SCFeatureMultiCamModeImpl featureNameForToken:] */

undefined ** FUN_1060a1d00(void)

{
  return &PTR____CFConstantStringClassReference_110e3cf98;
}



/* Entry: 1060a1d0c; end: 1060a1da3; -[SCFeatureMultiCamModeImpl didFailToEnableLensModeWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_didFailToEnableLensModeWithError_1125bb278;
  puStack_38 = PTR_PTR_1126ef848;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273e7a4);
  uVar2 = param_3;
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c09cd00(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1060a1da4; end: 1060a1da7; -[SCFeatureMultiCamModeImpl enabled] */

void FUN_1060a1da4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isCameraModeEnabled_1125f91c0);
  return;
}



/* Entry: 1060a1da8; end: 1060a1dfb; -[SCFeatureMultiCamModeImpl loggingParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1da8(int param_1)

{
  func_0x00010bf926c0();
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126b01b0);
    func_0x00010c013300();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060a1dfc; end: 1060a1e4f; -[SCFeatureMultiCamModeImpl contextInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1dfc(int param_1)

{
  func_0x00010bf926c0();
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126b01b8);
    func_0x00010c021cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060a1e50; end: 1060a1e5f; -[SCFeatureMultiCamModeImpl toolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e7c0),PTR_s_toolbarItem_11267a8a8);
  return;
}



/* Entry: 1060a1e60; end: 1060a201b; -[SCFeatureMultiCamModeImpl _setCurrentLayout:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a1e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  
  iVar5 = (int)param_3;
  *(int *)(param_1 + _DAT_11273e7c4) = iVar5;
  if (iVar5 < 3) {
    if (iVar5 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7a8);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c46a8;
    }
    else if (iVar5 == 1) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7a8);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c46c0;
    }
    else {
      if (iVar5 != 2) goto LAB_1060a1fe4;
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7a8);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c46f0;
    }
  }
  else {
    if (iVar5 == 3) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273e7a8),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c46d8);
      lVar2 = param_1;
      func_0x00010c06dec0();
      puVar4 = PTR_PTR_1126aff08;
      if ((int)lVar2 != 0) {
        lVar2 = param_1 + _DAT_11273e764;
        _objc_loadWeakRetained(lVar2);
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf70d80();
        func_0x00010c06cea0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((int)puVar4 != 0) {
          uVar1 = *(undefined8 *)(param_1 + _DAT_11273e77c);
          func_0x00010bfa1820(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c272720();
          _objc_release(uVar1);
        }
      }
      goto LAB_1060a1fe4;
    }
    if (iVar5 == 4) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7a8);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4708;
    }
    else {
      if (iVar5 != 5) goto LAB_1060a1fe4;
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273e7a8);
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4720;
    }
  }
  func_0x00010c0d9840(uVar1,param_2,ppuVar6);
LAB_1060a1fe4:
  func_0x00010c0e2de0(*(undefined8 *)(param_1 + _DAT_11273e7c0));
                    /* WARNING: Could not recover jumptable at 0x00010bec41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__storeSelectedLayoutForPersistan_11258ea10,param_3);
  return;
}



/* Entry: 1060a201c; end: 1060a20db; -[SCFeatureMultiCamModeImpl defaultLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1060a201c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1 + _DAT_11273e778;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  else {
    func_0x00010c067ec0(uVar4);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1060a20dc; end: 1060a2167; -[SCFeatureMultiCamModeImpl setCameraModeParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a20dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf90100();
  if ((int)uVar1 != 0) {
    lVar2 = (long)_DAT_11273e7dc;
    if (*(long *)(param_1 + lVar2) == 0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = param_3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf8ae40(uVar1);
      func_0x00010bf117a0(param_1,param_2,uVar1);
      func_0x00010c0a2400(*(undefined8 *)(param_1 + _DAT_11273e7a0),param_2,
                          *(undefined8 *)(param_1 + lVar2));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060a2168; end: 1060a21b3; -[SCFeatureMultiCamModeImpl onViewWillDisappear] */

void FUN_1060a2168(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_onViewWillDisappear_112617878);
  func_0x00010c1afce0(param_1);
  return;
}



/* Entry: 1060a21b4; end: 1060a232b; -[SCFeatureMultiCamModeImpl setIsCameraModeLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a21b4(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_1 + (long)_DAT_11273e7e0) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_DAT_11273e7e0) = (char)param_3;
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010bf09860();
    if ((int)uVar1 == 0) {
      func_0x00010c09ccc0(*(undefined8 *)(param_1 + (long)_DAT_11273e7a4));
      func_0x00010c0e3d80(*(undefined8 *)(param_1 + (long)_DAT_11273e7c0));
    }
    else {
      func_0x00010c09cd80();
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11273e7c0);
      func_0x00010c06b6a0(param_1);
      func_0x00010c0e3000(uVar3);
    }
    uVar1 = param_1;
    func_0x00010bf29960(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d560();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    *(ulong *)(param_1 + (long)_DAT_11273e7b4) = (ulong)*(byte *)(param_1 + (long)_DAT_11273e7c8);
    func_0x00010c09cd40(*(undefined8 *)(param_1 + (long)_DAT_11273e7a4));
    func_0x00010c0e69c0(*(undefined8 *)(param_1 + (long)_DAT_11273e7c0));
    uVar1 = param_1;
    func_0x00010bf29960(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa260();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c06b6a0();
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c210730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + (long)_DAT_11273e7b8),
             PTR_s_setSwipeNavigationRecognizerEnab_112661bf0,param_3 ^ 1);
  return;
}



/* Entry: 1060a232c; end: 1060a2347; -[SCFeatureMultiCamModeImpl areAllDependenciesLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060a232c(long param_1)

{
  return (~*(uint *)(param_1 + _DAT_11273e7b4) & 7) == 0;
}



/* Entry: 1060a2348; end: 1060a234f; -[SCFeatureMultiCamModeImpl featureName] */

undefined8 FUN_1060a2348(void)

{
  return 0x1d;
}



/* Entry: 1060a2350; end: 1060a23eb; -[SCFeatureMultiCamModeImpl pendingDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11273e7b4;
  uVar2 = (uint)*(ulong *)(param_1 + lVar3);
  if ((*(ulong *)(param_1 + lVar3) & 1) == 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3cf38);
    uVar2 = (uint)*(undefined8 *)(param_1 + lVar3);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3cf18);
    uVar2 = (uint)*(undefined8 *)(param_1 + lVar3);
  }
  if ((uVar2 >> 2 & 1) == 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3cf58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060a23ec; end: 1060a23f3; -[SCFeatureMultiCamModeImpl loadTimeout] */

undefined8 FUN_1060a23ec(void)

{
  return 1000;
}



/* Entry: 1060a23f4; end: 1060a24fb; -[SCFeatureMultiCamModeImpl startObservingCanTapEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a23f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2da40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  lVar3 = lVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e7e4);
  *(long *)(param_1 + _DAT_11273e7e4) = lVar3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1060a24fc; end: 1060a255f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a24fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + _DAT_11273e7cc) == '\x01')) {
    func_0x00010c200140(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060a2560; end: 1060a26eb; -[SCFeatureMultiCamModeImpl startObservingDualCameraLensState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar6 = uVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11273e7e8);
  *(undefined8 *)(param_1 + _DAT_11273e7e8) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1060a26ec; end: 1060a2773;  */

void FUN_1060a26ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2949e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1060a2774; end: 1060a285b; -[SCFeatureMultiCamModeImpl dualCameraLensActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e76c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c158980();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    *(char *)(param_1 + _DAT_11273e7cc) = (char)param_3;
    func_0x00010bfe21e0(*(undefined8 *)(param_1 + _DAT_11273e7c0),param_2,param_3);
    if ((int)param_3 != 0) {
      lVar3 = param_1;
      func_0x00010c273a00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c07d660();
      _objc_release(lVar3);
      if ((int)lVar4 != 0) {
        func_0x00010bf7f9e0(param_1);
      }
    }
    *(char *)(param_1 + _DAT_11273e7d4) = (char)param_3;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060a285c; end: 1060a286b; -[SCFeatureMultiCamModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a285c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28fc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e7a0),PTR_s_usageMetrics_112681948);
  return;
}



/* Entry: 1060a286c; end: 1060a287b; -[SCFeatureMultiCamModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a286c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e7a0),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1060a287c; end: 1060a2973; -[SCFeatureMultiCamModeImpl _updateDeviceFormatsWithShouldEnableMultiCam:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a287c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = (long)_DAT_11273e7d8;
    if (*(long *)(param_1 + lVar5) == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273e75c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281f80();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273e75c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e758);
    func_0x00010c0d1ca0(uVar2,param_2,*(undefined8 *)(param_1 + _DAT_11273e788));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c1276a0(uVar1,param_2,uVar2,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273e7d8);
    *(undefined8 *)(param_1 + _DAT_11273e7d8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060a2974; end: 1060a29f7; -[SCFeatureMultiCamModeImpl _storeSelectedLayoutForPersistance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2974(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273e778;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060a29f8; end: 1060a29ff; -[SCFeatureMultiCamModeImpl _startMultiCameraSession] */

void FUN_1060a29f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDeviceFormatsWithShouldEn_112593510,1)
  ;
  return;
}



/* Entry: 1060a2a00; end: 1060a2a0f; -[SCFeatureMultiCamModeImpl layoutObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060a2a00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e7a8);
}



/* Entry: 1060a2a10; end: 1060a2a1f; -[SCFeatureMultiCamModeImpl currentLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1060a2a10(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11273e7c4);
}



/* Entry: 1060a2a20; end: 1060a2a2f; -[SCFeatureMultiCamModeImpl setCurrentLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2a20(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_11273e7c4) = param_3;
  return;
}



/* Entry: 1060a2a30; end: 1060a2a3f; -[SCFeatureMultiCamModeImpl isCameraModeLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060a2a30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273e7e0);
}



/* Entry: 1060a2a40; end: 1060a2c0f; -[SCFeatureMultiCamModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2a40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e7bc,0);
  _objc_storeStrong(param_1 + _DAT_11273e7e4,0);
  _objc_storeStrong(param_1 + _DAT_11273e7e8,0);
  _objc_storeStrong(param_1 + _DAT_11273e774,0);
  _objc_storeStrong(param_1 + _DAT_11273e770,0);
  _objc_storeStrong(param_1 + _DAT_11273e780,0);
  _objc_storeStrong(param_1 + _DAT_11273e7a4,0);
  _objc_storeStrong(param_1 + _DAT_11273e76c,0);
  _objc_storeStrong(param_1 + _DAT_11273e7dc,0);
  _objc_storeStrong(param_1 + _DAT_11273e7a0,0);
  _objc_storeStrong(param_1 + _DAT_11273e7b8,0);
  _objc_storeStrong(param_1 + _DAT_11273e7c0,0);
  _objc_storeStrong(param_1 + _DAT_11273e79c,0);
  _objc_destroyWeak(param_1 + _DAT_11273e798);
  _objc_storeStrong(param_1 + _DAT_11273e794,0);
  _objc_storeStrong(param_1 + _DAT_11273e790,0);
  _objc_storeStrong(param_1 + _DAT_11273e78c,0);
  _objc_storeStrong(param_1 + _DAT_11273e7d8,0);
  _objc_storeStrong(param_1 + _DAT_11273e75c,0);
  _objc_storeStrong(param_1 + _DAT_11273e758,0);
  _objc_destroyWeak(param_1 + _DAT_11273e778);
  _objc_storeStrong(param_1 + _DAT_11273e7b0,0);
  _objc_storeStrong(param_1 + _DAT_11273e784,0);
  _objc_storeStrong(param_1 + _DAT_11273e77c,0);
  _objc_storeStrong(param_1 + _DAT_11273e7a8,0);
  _objc_storeStrong(param_1 + _DAT_11273e768,0);
  _objc_destroyWeak(param_1 + _DAT_11273e764);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e760);
  return;
}



/* Entry: 1060a2c10; end: 1060a2d2f; -[SCMultiCamModeCameraToolbarItem initWithPosition:] */

undefined1 * FUN_1060a2c10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithPosition__1125eb8f8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1cdb60(puVar1);
    func_0x00010c1fb140(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c160fc0(puVar1);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(puVar1);
    _objc_release(puVar2);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(puVar1);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c177460(puVar1);
    func_0x00010b0aeb64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(puVar1);
    _objc_release(puVar2);
    func_0x00010b0aeb64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(puVar1);
    _objc_release(puVar2);
    func_0x00010c201380(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060a2d30; end: 1060a2eaf; -[SCMultiCamModeUI initWithContainerView:cameraToolbar:valdiRuntimeProvider:camModeConfig:cameraTooltipsService:isDirectorMode:isModeReadyToEnable:isCutoutLayoutDisabled:toolbarIndexFeature:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060a2d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000010);
  puVar1 = auStack_68;
  _objc_loadWeakRetained(puVar1);
  puStack_70 = PTR_PTR_1126ef858;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithContainerView_cameraTool_1125de3d0,param_3,puVar1,param_5
                      ,param_6,param_7,param_8,(undefined1)param_9);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11273e7ec;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_6;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273e7f0) = param_9._1_1_;
    lVar4 = (long)_DAT_11273e7f4;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(in_stack_00000010);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1060a2eb0; end: 1060a2ed3; -[SCMultiCamModeUI createDualStreamCamModeToolbarItem] */

void FUN_1060a2eb0(void)

{
  _objc_alloc(PTR_PTR_1126c7930);
  func_0x00010c037be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060a2ed4; end: 1060a2efb; -[SCMultiCamModeUI createLayouts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1060a2ed4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117ff18;
  if (*(char *)(param_1 + _DAT_11273e7f0) == '\0') {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117ff30;
  }
  return ppuVar1;
}



/* Entry: 1060a2efc; end: 1060a2eff; -[SCMultiCamModeUI createLayoutTitle] */

void FUN_1060a2efc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5bc18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5bc18,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060a2f00; end: 1060a308f; -[SCMultiCamModeUI onCameraModeLensInCarouselActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a2f00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bfc35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c273a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25540(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010beb6760();
  if ((int)lVar4 != 0) {
    func_0x00010703ced8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237be0(0x4008000000000000,lVar2);
    _objc_release(lVar4);
    lVar4 = (long)_DAT_11273e7f4;
    func_0x00010bf8ada0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1921c0(*(undefined8 *)(param_1 + lVar4));
  }
  lVar4 = param_1;
  func_0x00010beb5c40();
  if ((int)lVar4 != 0) {
    puVar3 = auStack_38;
    _objc_initWeak(puVar3,param_1);
    func_0x00010703cef0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c236160(0x4008000000000000,0x4008000000000000,lVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1060a3090; end: 1060a30db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3090(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11273e7f4;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf8ade0(lVar1);
    func_0x00010c1921e0(*(undefined8 *)(param_1 + lVar2),param_2,lVar1 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a30dc; end: 1060a318b; -[SCMultiCamModeUI _shouldShowToolbarLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060a30dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_11273e7ec);
  func_0x00010c269d40();
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
    bVar4 = false;
  }
  else {
    func_0x00010bf8adc0();
    if (lVar2 == -1) {
      bVar4 = true;
    }
    else {
      lVar3 = *(long *)(param_1 + _DAT_11273e7f4);
      func_0x00010bf8ada0(lVar3);
      bVar4 = lVar3 < lVar2;
    }
  }
  _objc_release(lVar1);
  return bVar4;
}



/* Entry: 1060a318c; end: 1060a323b; -[SCMultiCamModeUI _shouldShowBalloonTooltips] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060a318c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_11273e7ec);
  func_0x00010c269d40();
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
    bVar4 = false;
  }
  else {
    func_0x00010bf8ae00();
    if (lVar2 == -1) {
      bVar4 = true;
    }
    else {
      lVar3 = *(long *)(param_1 + _DAT_11273e7f4);
      func_0x00010bf8ade0(lVar3);
      bVar4 = lVar3 < lVar2;
    }
  }
  _objc_release(lVar1);
  return bVar4;
}



/* Entry: 1060a323c; end: 1060a327b; -[SCMultiCamModeUI .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a323c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e7f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e7ec,0);
  return;
}



/* Entry: 1060a327c; end: 1060a328f; -[SCFeatureMultiSnapImpl defaultRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a327c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c276a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e804),
             PTR_s_totalRecordingTimeWithMultiSnapE_11267b4b0,1);
  return;
}



/* Entry: 1060a3290; end: 1060a3383; -[SCFeatureMultiSnapImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273e81c);
  *(undefined8 *)(param_1 + _DAT_11273e81c) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060a3384; end: 1060a3447;  */

void FUN_1060a3384(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060a3448; end: 1060a34e7;  */

void FUN_1060a3448(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf311e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar3 = param_2;
  func_0x00010c2701a0();
  if ((uVar3 & 1) == 0) {
    func_0x00010c0753e0(param_2);
  }
  func_0x00010c1096e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060a34e8; end: 1060a34f7; -[SCFeatureMultiSnapImpl enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060a34e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273e820);
}



/* Entry: 1060a34f8; end: 1060a3567; -[SCFeatureMultiSnapImpl frameForPreviewTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060a34f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273e824);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1060a3568; end: 1060a3577; -[SCFeatureMultiSnapImpl viewForPreviewTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273e824),PTR_s_view_1126849e8);
  return;
}



/* Entry: 1060a3578; end: 1060a358f; -[SCFeatureMultiSnapImpl shouldFadeForPreviewTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060a3578(long param_1)

{
  return *(long *)(param_1 + _DAT_11273e824) == 0;
}



/* Entry: 1060a3590; end: 1060a35e3; -[SCFeatureMultiSnapImpl finalizeCurrentSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e828;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c2842a0(*(undefined8 *)(param_1 + _DAT_11273e824),param_2,*(long *)(param_1 + lVar2)
                        ,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1060a35e4; end: 1060a365f; -[SCFeatureMultiSnapImpl configurationWithFinalDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a35e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e824;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf46560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2842c0();
  _objc_release(uVar1);
  func_0x00010bf46560(*(undefined8 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060a3660; end: 1060a36b7; -[SCFeatureMultiSnapImpl prepareForRecordingWithCaptureSessionId:showMultiSnapThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3660(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    func_0x00010bdc6360(param_1);
  }
  func_0x00010bdc5dc0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e82c);
  *(undefined8 *)(param_1 + _DAT_11273e82c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060a36b8; end: 1060a3847; -[SCFeatureMultiSnapImpl _addCaptureLifecycleTasks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a36b8(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  
  *(undefined1 *)(param_2 + _DAT_11273e820) = 0;
  func_0x00010be9d5a0();
  _objc_initWeak(auStack_88,param_2);
  uVar3 = 0;
  lVar4 = (long)_DAT_11273e800;
  do {
    uVar1 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CMTimeMake(auStack_a0,(long)(param_1 * (double)uVar3 * 1000.0),1000);
    _objc_copyWeak(auStack_b0,auStack_88);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_a8 = uVar3;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfa0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_b0);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 6);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 1060a3848; end: 1060a388b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3848(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (0 < *(long *)(param_1 + 0x28))) {
    *(undefined1 *)(lVar1 + _DAT_11273e820) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1060a388c; end: 1060a3a0f; -[SCFeatureMultiSnapImpl _addAnimationLifecycleTasks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a388c(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  
  func_0x00010be9d5a0();
  _objc_initWeak(auStack_88,param_2);
  lVar3 = (long)_DAT_11273e800;
  uVar4 = 1;
  do {
    uVar1 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CMTimeMake(auStack_a0,(long)(param_1 * (double)uVar4 * 1000.0),1000);
    _objc_copyWeak(auStack_b0,auStack_88);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_a8 = uVar4;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfa0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_b0);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 6);
  _objc_destroyWeak(auStack_88);
  return;
}



/* Entry: 1060a3a10; end: 1060a3a7f;  */

void FUN_1060a3a10(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8f40();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a3a80; end: 1060a3aef; -[SCFeatureMultiSnapImpl _segmentRecordingTimeAdjustedForSpeedMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1060a3a80(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c1584c0(*(undefined8 *)(param_2 + _DAT_11273e804));
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273e814);
  dVar2 = param_1;
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249d20();
  _objc_release(uVar1);
  dVar3 = param_1 * dVar2;
  if (dVar2 <= 0.0) {
    dVar3 = param_1;
  }
  return dVar3;
}



/* Entry: 1060a3af0; end: 1060a3af3; -[SCFeatureMultiSnapImpl recoverWithSnapSessionContext:contentLossReason:] */

void FUN_1060a3af0(void)

{
  return;
}



/* Entry: 1060a3af4; end: 1060a3baf; -[SCFeatureMultiSnapImpl _multiSnapViewFrameForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1060a3af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273e818;
  func_0x00010bf2b2e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c106b60();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetWidth();
  return 0;
}



/* Entry: 1060a3bb0; end: 1060a3c07; -[SCFeatureMultiSnapImpl _configureMultiSnapView:] */

void FUN_1060a3bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c21e900(param_3,param_2,0);
  func_0x00010be61720(param_1,param_2,param_3);
  func_0x00010c19f0e0(param_3);
  func_0x00010c16d4a0(param_3,param_2,10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060a3c08; end: 1060a3c27; -[SCFeatureMultiSnapImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3c08(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273e830);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060a3c28; end: 1060a3c37; -[SCFeatureMultiSnapImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060a3c28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e818);
}



/* Entry: 1060a3c38; end: 1060a3c47; -[SCFeatureMultiSnapImpl userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060a3c38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e7f8);
}



/* Entry: 1060a3c48; end: 1060a3c5b; -[SCFeatureMultiSnapImpl sampledImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1060a3c48(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11273e7fc);
}



/* Entry: 1060a3c5c; end: 1060a3c6f; -[SCFeatureMultiSnapImpl setSampledImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3c5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273e7fc;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 1060a3c70; end: 1060a3c7f; -[SCFeatureMultiSnapImpl currentMultiSnapSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060a3c70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e828);
}



/* Entry: 1060a3c80; end: 1060a3cbf; -[SCFeatureMultiSnapImpl setCurrentMultiSnapSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e828;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060a3cc0; end: 1060a3ccf; -[SCFeatureMultiSnapImpl multiSnapV2ViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060a3cc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273e824);
}



/* Entry: 1060a3cd0; end: 1060a3d0f; -[SCFeatureMultiSnapImpl setMultiSnapV2ViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273e824;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060a3d10; end: 1060a3deb; -[SCFeatureMultiSnapImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3d10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e824,0);
  _objc_storeStrong(param_1 + _DAT_11273e828,0);
  _objc_storeStrong(param_1 + _DAT_11273e7f8,0);
  _objc_storeStrong(param_1 + _DAT_11273e818,0);
  _objc_destroyWeak(param_1 + _DAT_11273e830);
  _objc_storeStrong(param_1 + _DAT_11273e814,0);
  _objc_storeStrong(param_1 + _DAT_11273e810,0);
  _objc_storeStrong(param_1 + _DAT_11273e804,0);
  _objc_storeStrong(param_1 + _DAT_11273e808,0);
  _objc_storeStrong(param_1 + _DAT_11273e800,0);
  _objc_storeStrong(param_1 + _DAT_11273e81c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e82c,0);
  return;
}



/* Entry: 1060a3dec; end: 1060a3eb3; -[SCFeatureVerticalToolbarCollapsingImpl initWithCameraToolbarUIOrchestrator:lensCarouselManager:alwaysOnCarouselEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060a3dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef868;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273e834;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273e838;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273e83c) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060a3eb4; end: 1060a3fc7; -[SCFeatureVerticalToolbarCollapsingImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a3eb4(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + _DAT_11273e840) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11273e840) = 1;
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273e844);
    *(undefined **)(param_1 + _DAT_11273e844) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273e834);
    puVar2 = auStack_40;
    _objc_copyWeak(puVar2,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(uVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1060a3fc8; end: 1060a4037;  */

void FUN_1060a3fc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be66440(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a4038; end: 1060a4277; -[SCFeatureVerticalToolbarCollapsingImpl _observeLensActiveState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a4038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11273e844));
  uVar1 = param_3;
  if ((*(byte *)(param_1 + _DAT_11273e83c) & 1) == 0) {
    func_0x00010bef0d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1060a4278;
    puStack_78 = &UNK_110842a38;
    puVar6 = auStack_70;
    _objc_copyWeak(puVar6,auStack_68);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  else {
    func_0x00010bef0ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_98;
    _objc_copyWeak(puVar6,auStack_68);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(puVar6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1060a4278; end: 1060a436f;  */

void FUN_1060a4278(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be016e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060a4370; end: 1060a4413; -[SCFeatureVerticalToolbarCollapsingImpl _didUpdateLensesActiveState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a4370(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c7808;
    _objc_alloc(PTR_PTR_1126c7808);
    func_0x00010c062540();
  }
  puVar1 = PTR_PTR_1126c7938;
  _objc_alloc(PTR_PTR_1126c7938);
  func_0x00010c00c6a0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273e838);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136820();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1060a4414; end: 1060a4463; -[SCFeatureVerticalToolbarCollapsingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060a4414(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e834,0);
  _objc_storeStrong(param_1 + _DAT_11273e844,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e838,0);
  return;
}



/* Entry: 1060a4464; end: 1060a45b3;  */

void FUN_1060a4464(long param_1)

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
    func_0x00010c2726a0(param_1);
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



/* Entry: 1060a45b4; end: 1060a4713;  */

void FUN_1060a45b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c7948;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf30c00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0xb8);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29c2c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf29960(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf296c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2bbc0();
    uVar8 = *(undefined8 *)(param_1 + 200);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c13a4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffb680(puVar9,param_2,uVar1,uVar2,uVar10,uVar11,uVar3,uVar4,uVar5,uVar6,uVar8,uVar7
                       );
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1060a4714; end: 1060a4743;  */

bool FUN_1060a4714(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1060a4744; end: 1060a4b13;  */

void FUN_1060a4744(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126c7950;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar14 = *(undefined8 *)(lVar2 + 0x70);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060a4b14;
    puStack_88 = &UNK_11084e7d0;
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar21);
    ppuVar3 = &puStack_a0;
    uStack_80 = uVar21;
    FUN_1060a4b14();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar2 + 0x58);
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar2 + 0xc0);
    uVar4 = *(undefined8 *)(lVar2 + 0x88);
    func_0x00010bf299a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1060a4c60;
    puStack_b0 = &UNK_11084e7d0;
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar22);
    ppuVar5 = &puStack_c8;
    uStack_a8 = uVar22;
    FUN_1060a4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar2 + 0x28);
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1060a4dac;
    puStack_d8 = &UNK_11084e7d0;
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar22);
    ppuVar6 = &puStack_f0;
    uStack_d0 = uVar22;
    FUN_1060a4dac();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(lVar2 + 0x88);
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1060a4ef8;
    puStack_100 = &UNK_11084e7d0;
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar23);
    ppuVar7 = &puStack_118;
    uStack_f8 = uVar23;
    FUN_1060a4ef8();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c247d20();
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c0d6ca0();
    uVar9 = *(undefined8 *)(lVar2 + 0x1e0);
    func_0x00010bef0220();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar2 + 0x30);
    uVar17 = *(undefined8 *)(lVar2 + 0x40);
    uVar18 = *(undefined8 *)(lVar2 + 0x1e8);
    uVar19 = *(undefined8 *)(lVar2 + 0x1d8);
    uVar26 = *(undefined8 *)(lVar2 + 200);
    puStack_140 = puVar1;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_1060a5044;
    puStack_128 = &UNK_11084e7d0;
    uVar24 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar24);
    ppuVar10 = &puStack_140;
    uStack_120 = uVar24;
    FUN_1060a5044();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c150aa0();
    uVar11 = *(undefined8 *)(lVar2 + 0x110);
    func_0x00010c090c40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar1;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_1060a5190;
    puStack_150 = &UNK_11084e7d0;
    uVar28 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar28);
    ppuVar13 = &puStack_168;
    uStack_148 = uVar28;
    FUN_1060a5190();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(lVar2 + 0x10);
    uVar28 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c0b6900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d140(puVar25,param_2,uVar14,ppuVar3,uVar21,uVar15,uVar4,ppuVar5,uVar16,ppuVar6,
                        uVar22,ppuVar7,uVar23,uVar8,uVar9,uVar20,uVar17,uVar18,uVar19,uVar26,
                        ppuVar10,uVar24,uVar11,uVar12,ppuVar13,uVar27,uVar28);
    _objc_release(uVar28);
    _objc_release(ppuVar13);
    _objc_release(uStack_148);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(ppuVar10);
    _objc_release(uStack_120);
    _objc_release(uVar9);
    _objc_release(ppuVar7);
    _objc_release(uStack_f8);
    _objc_release(uVar22);
    _objc_release(ppuVar6);
    _objc_release(uStack_d0);
    _objc_release(ppuVar5);
    _objc_release(uStack_a8);
    _objc_release(uVar4);
    _objc_release(uVar21);
    _objc_release(ppuVar3);
    _objc_release(uStack_80);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}


