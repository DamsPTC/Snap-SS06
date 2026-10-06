/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10618da3c; end: 10618daff; -[SCFeatureSelfieSettingsImpl autoEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618da3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if ((*(byte *)(param_1 + _DAT_1127416f4) & 1) == 0) {
    func_0x00010bea4e20(param_1,param_2,1);
  }
  *(undefined1 *)(param_1 + _DAT_112741314) = 1;
  *(undefined1 *)(param_1 + _DAT_112741310) = 1;
  puStack_38 = PTR_PTR_1126eff90;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_autoEnable_1125a1f48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90a80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bedab60(param_1);
  }
  return;
}



/* Entry: 10618db00; end: 10618db5f; -[SCFeatureSelfieSettingsImpl autoDisable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618db00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eff90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_autoDisable_1125a1f30);
  *(undefined1 *)(param_1 + _DAT_112741310) = 0;
  func_0x00010beb5620(param_1);
  func_0x00010c200ec0(param_1);
  return;
}



/* Entry: 10618db60; end: 10618db67; -[SCFeatureSelfieSettingsImpl featureName] */

undefined8 FUN_10618db60(void)

{
  return 0x46;
}



/* Entry: 10618db68; end: 10618db6f; -[SCFeatureSelfieSettingsImpl loadTimeout] */

undefined8 FUN_10618db68(void)

{
  return 1000;
}



/* Entry: 10618db70; end: 10618db7b; -[SCFeatureSelfieSettingsImpl pendingDependencies] */

undefined * FUN_10618db70(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10618db7c; end: 10618db8b; -[SCFeatureSelfieSettingsImpl onCameraModePreparationStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618db7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127412dc),PTR_s_loadingDidStart_112604d60);
  return;
}



/* Entry: 10618db8c; end: 10618dbd3; -[SCFeatureSelfieSettingsImpl onCameraModeReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618db8c(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + _DAT_11274130c) = 1;
  func_0x00010c1b2440(*(undefined8 *)(param_1 + _DAT_112741300),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c09cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127412dc),PTR_s_loadingDidSucceed_112604d70);
  return;
}



/* Entry: 10618dbd4; end: 10618dc33; -[SCFeatureSelfieSettingsImpl onCaptureDevicePositionDidChange] */

void FUN_10618dbd4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eff90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_onCaptureDevicePositionDidChange_112616568);
  func_0x00010bee2580(param_1);
  func_0x00010beb5620(param_1);
  func_0x00010c200ec0(param_1);
  return;
}



/* Entry: 10618dc34; end: 10618dc6f; -[SCFeatureSelfieSettingsImpl newBadgeFirstShownDate] */

undefined8 FUN_10618dc34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15b0e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10618dc70; end: 10618dccb; -[SCFeatureSelfieSettingsImpl onNewBadgeFirstShown] */

void FUN_10618dc70(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1fbda0(param_2,param_3,(long)param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10618dccc; end: 10618dccf; -[SCFeatureSelfieSettingsImpl dismissCameraModePendingRestoration] */

void FUN_10618dccc(void)

{
  return;
}



/* Entry: 10618dcd0; end: 10618dcd3; -[SCFeatureSelfieSettingsImpl onboardingDialogTitle] */

void FUN_10618dcd0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e43cd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e43cd8,
                      &PTR____CFConstantStringClassReference_110e43a98,0);
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



/* Entry: 10618dcd4; end: 10618dcd7; -[SCFeatureSelfieSettingsImpl onboardingDialogDescription] */

void FUN_10618dcd4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e43cf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e43cf8,
                      &PTR____CFConstantStringClassReference_110e43a98,0);
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



/* Entry: 10618dcd8; end: 10618dd0b; -[SCFeatureSelfieSettingsImpl onOnboardingDialogShown] */

void FUN_10618dcd8(undefined8 param_1)

{
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618dd0c; end: 10618dd47; -[SCFeatureSelfieSettingsImpl hasSeenOnboardingDialog] */

undefined8 FUN_10618dd0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2b520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdbb80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10618dd48; end: 10618dea7; -[SCFeatureSelfieSettingsImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618dd48(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    lVar3 = (long)_DAT_112741318;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c200860();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar2);
      func_0x00010be95580(param_1);
    }
  }
  else {
    func_0x00010be8afc0(param_1);
    lVar3 = (long)_DAT_112741318;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200860();
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274131c;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1809a0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5e00(*(undefined8 *)(param_1 + _DAT_1127412ac),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10618dea8; end: 10618df7f; -[SCFeatureSelfieSettingsImpl _rememberDisplacedFooterItemConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618dea8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c232ae0();
  _objc_release(uVar2);
  if ((int)uVar4 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_1127412ac);
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar5 = (long)_DAT_11274131c;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      lVar5 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == lVar5) goto LAB_10618df5c;
    }
    lVar5 = (long)_DAT_112741320;
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar3;
    _objc_release(uVar4);
  }
LAB_10618df5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10618df80; end: 10618e06b; -[SCFeatureSelfieSettingsImpl _restoreDisplacedFooterItemConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618df80(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_112741320;
  lVar5 = *(long *)(param_1 + lVar6);
  _objc_retain(lVar5);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = 0;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c232ae0();
  _objc_release(uVar3);
  if ((int)uVar2 != 0 && lVar5 != 0) {
    lVar6 = (long)_DAT_11274131c;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      lVar7 = (long)_DAT_1127412ac;
      lVar4 = *(long *)(param_1 + lVar7);
      func_0x00010c0841c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar4 == lVar6) {
        func_0x00010c1b5e00(*(undefined8 *)(param_1 + lVar7),param_2,lVar5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10618e06c; end: 10618e113; -[SCFeatureSelfieSettingsImpl _setIsModePersisted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618e06c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127412a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_112741324) = param_3;
  lVar3 = param_1;
  func_0x00010beb5620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c200ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldRestoreMode__11265ddd8,lVar3);
  return;
}



/* Entry: 10618e114; end: 10618e16b;  */

void FUN_10618e114(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (param_1 != 0)) {
    func_0x00010bea4e20(param_1);
    func_0x00010bea4d80(param_1);
    func_0x00010c200ec0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618e16c; end: 10618e21f; -[SCFeatureSelfieSettingsImpl _setIsRestoreRestricted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618e16c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127412d0;
  if (*(long *)(param_1 + lVar3) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127412a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06f840();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        func_0x00010c280c40();
      }
      else {
        func_0x00010c09fb40();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10618e220; end: 10618e2c3; -[SCFeatureSelfieSettingsImpl _shouldRestoreWithCurrentCameraPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10618e220(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071960();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010bf29960(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf70d80();
    _objc_release(lVar4);
    _objc_release(param_1);
    bVar1 = (lVar5 + 1U & 0xfffffffffffffffd) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10618e2c4; end: 10618e443;  */

void FUN_10618e2c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10618e444; end: 10618e707; -[SCFeatureSelfieSettingsImpl _createTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618e444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c081c80();
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    puVar18 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    puVar1 = puVar18;
    func_0x00010c21e900();
    func_0x0001008b0f28();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar18,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar18,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c21ad00(puVar18,param_2,5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar18,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1fe7a0(0,0,puVar18);
    func_0x00010c1677c0(0,puVar18);
    func_0x00010c219b60(puVar18,param_2,0);
    lVar19 = (long)_DAT_1127412e8;
    lVar20 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar20);
    func_0x00010befbb60();
    _objc_release(lVar20);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar18;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + lVar19;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf493a0(puVar1,param_2,lVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar18;
    puStack_78 = puVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112741334);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf493a0(puVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release();
  }
  else {
    puVar18 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = *(undefined **)(puVar1 + _DAT_1127412a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c081c80();
    _objc_release();
    if (((ulong)puVar2 & 1) == 0) {
      puVar18 = PTR_PTR_1126b6138;
      _objc_alloc_init();
      func_0x00010c160fc0();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar18,param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110db68f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(puVar18,param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c1677c0(0,puVar18);
      func_0x00010befbd40(puVar18,param_2,puVar1,PTR_s__didTapCancelButton_1125281b8);
      func_0x00010c219b60(puVar18,param_2,0);
      lVar20 = (long)_DAT_1127412e8;
      puVar2 = puVar1 + lVar20;
      _objc_loadWeakRetained(puVar2);
      func_0x00010befbb60();
      _objc_release(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = puVar18;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar18;
      puStack_118 = puVar6;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf49420(0x4040000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar18;
      puStack_110 = puVar9;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1 + lVar20;
      _objc_loadWeakRetained(puVar2);
      puVar11 = puVar2;
      func_0x00010bf2ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493c0(0x4024000000000000,puVar10,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar18;
      puStack_108 = puVar12;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar1 + lVar20;
      _objc_loadWeakRetained();
      puVar14 = puVar1;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010bf493c0(0x4028000000000000,puVar13,param_2,puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_118,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar16);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar1);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release();
    }
    else {
      puVar18 = (undefined *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      puVar18 = PTR_PTR_1126aec40;
      func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(puVar18,param_2,puVar1);
      _objc_release(puVar1);
      uVar17 = *(undefined8 *)(puVar8 + _DAT_1127412a0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar17;
      func_0x00010c081c80();
      uVar5 = 0x6c;
      if ((int)uVar4 == 0) {
        uVar5 = 0x5f;
      }
      _objc_release(uVar17);
      puVar1 = puVar18;
      func_0x00010c16e480(puVar18,param_2,uVar5,0);
      func_0x00010619f6c4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(puVar18,param_2,puVar1,0);
      _objc_release(puVar1);
      func_0x00010befbd60(puVar18,param_2,puVar8,PTR_s__didTapSaveButton_11255de28,0x40);
      func_0x00010c1677c0(0,puVar18);
      func_0x00010c219b60(puVar18,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 10618e708; end: 10618ea2b; -[SCFeatureSelfieSettingsImpl _createCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618e708(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c081c80();
  _objc_release();
  if (((ulong)puVar3 & 1) == 0) {
    puVar16 = PTR_PTR_1126b6138;
    _objc_alloc_init();
    func_0x00010c160fc0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar16,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110db68f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar16,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1677c0(0,puVar16);
    func_0x00010befbd40(puVar16,param_2,param_1,PTR_s__didTapCancelButton_1125281b8);
    func_0x00010c219b60(puVar16,param_2,0);
    lVar17 = (long)_DAT_1127412e8;
    lVar4 = param_1 + lVar17;
    _objc_loadWeakRetained(lVar4);
    func_0x00010befbb60();
    _objc_release(lVar4);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar16;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar16;
    puStack_98 = puVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    puStack_90 = puVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar17;
    _objc_loadWeakRetained(lVar4);
    lVar9 = lVar4;
    func_0x00010bf2ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493c0(0x4024000000000000,puVar8,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar16;
    puStack_88 = puVar10;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar17;
    _objc_loadWeakRetained();
    lVar17 = param_1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf493c0(0x4028000000000000,puVar11,param_2,lVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar17);
    _objc_release(param_1);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
  }
  else {
    puVar16 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar16 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar16,param_2,puVar3);
    _objc_release(puVar3);
    uVar14 = *(undefined8 *)(puVar2 + _DAT_1127412a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c081c80();
    uVar1 = 0x6c;
    if ((int)uVar15 == 0) {
      uVar1 = 0x5f;
    }
    _objc_release(uVar14);
    puVar3 = puVar16;
    func_0x00010c16e480(puVar16,param_2,uVar1,0);
    func_0x00010619f6c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar16,param_2,puVar3,0);
    _objc_release(puVar3);
    func_0x00010befbd60(puVar16,param_2,puVar2,PTR_s__didTapSaveButton_11255de28,0x40);
    func_0x00010c1677c0(0,puVar16);
    func_0x00010c219b60(puVar16,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10618ea2c; end: 10618eb4b; -[SCFeatureSelfieSettingsImpl _createSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618ea2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c081c80();
  uVar1 = 0x6c;
  if ((int)uVar5 == 0) {
    uVar1 = 0x5f;
  }
  _objc_release(uVar4);
  puVar3 = puVar2;
  func_0x00010c16e480(puVar2,param_2,uVar1,0);
  func_0x00010619f6c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar2,param_2,puVar3,0);
  _objc_release(puVar3);
  func_0x00010befbd60(puVar2,param_2,param_1,PTR_s__didTapSaveButton_11255de28,0x40);
  func_0x00010c1677c0(0,puVar2);
  func_0x00010c219b60(puVar2,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10618eb4c; end: 10618ec77; -[SCFeatureSelfieSettingsImpl _createCancelButtonV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618eb4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081c80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c16e480(puVar4,param_2,0x6c,0);
    FUN_10619f6ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar4,param_2,puVar3,0);
    _objc_release(puVar3);
    func_0x00010c165e00(puVar4,param_2,1);
    func_0x00010befbd60(puVar4,param_2,param_1,PTR_s__didTapCancelButton_1125281b8,0x40);
    func_0x00010c1677c0(0,puVar4);
    func_0x00010c219b60(puVar4,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10618ec78; end: 10618eceb; -[SCFeatureSelfieSettingsImpl _createFooterItemConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618ec78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8700;
  _objc_alloc(PTR_PTR_1126c8700);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741318);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020400(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  func_0x00010c201980(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10618ecec; end: 10618f26f; -[SCFeatureSelfieSettingsImpl _createFooterItemView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618ecec(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c8708;
  _objc_alloc();
  func_0x00010c05f940();
  puVar3 = puVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined **)(param_1 + _DAT_112741338);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127412a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c081c80();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if ((int)uVar6 == 0) {
    puVar7 = puVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar7;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar3;
    func_0x00010c1408a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar20;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar3;
    func_0x00010bf348e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puStack_e8;
    param_2 = puVar23;
    func_0x00010bf493a0(puStack_e8,puVar23,puVar23);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puStack_f8;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
  }
  else {
    puVar7 = *(undefined **)(param_1 + _DAT_11274132c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar18 = puVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar23;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puStack_f8;
    func_0x00010bf49420(0x4060400000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_108;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf49420(0x4060400000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puVar23);
  _objc_release(puStack_e8);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010be28400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10618f270; end: 10618f373;  */

void FUN_10618f270(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10618f374; end: 10618f37f; -[SCFeatureSelfieSettingsImpl _handleChildItemWillTapEvent] */

void FUN_10618f374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setEditingModeActive_withSaveSe_112586800,1,0);
  return;
}



/* Entry: 10618f380; end: 10618f3d3; -[SCFeatureSelfieSettingsImpl _handleCanShowChildItemEventWithResult:] */

void FUN_10618f380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c273a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  func_0x00010c201100(param_3,param_2,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10618f3d4; end: 10618f45b; -[SCFeatureSelfieSettingsImpl _handleDidChangeSelectedEvent:] */

void FUN_10618f3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c273a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d660();
  _objc_release(uVar1);
  func_0x00010bea5b40(param_1,param_2,uVar2);
  uVar1 = param_3;
  func_0x00010c273a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1cbd00(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10618f45c; end: 10618f50b; -[SCFeatureSelfieSettingsImpl _handleToolbarItemWillTapEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618f45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + _DAT_1127412fc) = 1;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112741300);
  _objc_retain(param_3);
  func_0x00010c07d660(uVar2);
  func_0x00010be51440(param_1);
  uVar2 = param_3;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010c07d660();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea4d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsModePersisted__112586d08,0);
    return;
  }
  return;
}



/* Entry: 10618f50c; end: 10618f557; -[SCFeatureSelfieSettingsImpl _didTapCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618f50c(long param_1,undefined8 param_2)

{
  func_0x00010bea4d80(param_1,param_2,1);
  func_0x00010bea3960(param_1,param_2,0,PTR____kCFBooleanFalse_11034ab60);
  *(long *)(param_1 + _DAT_1127412f8) = *(long *)(param_1 + _DAT_1127412f8) + 1;
  return;
}



/* Entry: 10618f558; end: 10618f5a3; -[SCFeatureSelfieSettingsImpl _didTapSaveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618f558(long param_1,undefined8 param_2)

{
  func_0x00010bea4d80(param_1,param_2,1);
  func_0x00010bea3960(param_1,param_2,0,PTR____kCFBooleanTrue_11034ab68);
  *(long *)(param_1 + _DAT_1127412f4) = *(long *)(param_1 + _DAT_1127412f4) + 1;
  return;
}



/* Entry: 10618f5a4; end: 10618f5cb; -[SCFeatureSelfieSettingsImpl _setModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618f5a4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112741304) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112741304) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable_1125c1570);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disable_1125bd820);
  return;
}



/* Entry: 10618f5cc; end: 10618f9cb; -[SCFeatureSelfieSettingsImpl _setEditingModeActive:withSaveSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618f5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_4);
  lVar9 = (long)_DAT_112741308;
  if ((uint)*(byte *)(param_1 + lVar9) == (uint)param_3) {
    *(undefined1 *)(param_1 + _DAT_112741314) = 0;
  }
  else {
    if ((uint)param_3 == 0) {
      lVar8 = (long)_DAT_1127412e8;
      lVar7 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c200860();
      _objc_release(lVar7);
      lVar7 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c166e60(0x3fc3333333333333);
      _objc_release(lVar7);
      func_0x00010bea3980(0x3fc3333333333333,param_1,param_2,1,1);
      lVar7 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar7);
      lVar1 = lVar7;
      func_0x00010c131ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar7);
      *(undefined1 *)(param_1 + lVar9) = 0;
      *(undefined1 *)(param_1 + _DAT_112741314) = 0;
      if (*(long *)(param_1 + _DAT_1127412a4) != 0) {
        lVar7 = (long)_DAT_1127412b0;
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c07be60();
        _objc_release(uVar3);
        if ((int)uVar6 != 0) {
          uVar3 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010bfa1820(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c122ee0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7f60();
          _objc_release(uVar6);
          _objc_release(uVar3);
        }
      }
    }
    else {
      if (*(char *)(param_1 + _DAT_112741314) == '\x01') {
        *(undefined1 *)(param_1 + _DAT_112741314) = 0;
        func_0x00010bedab60(param_1,param_2,PTR____kCFBooleanFalse_11034ab60,0);
        goto LAB_10618f9a8;
      }
      func_0x00010bea3980(0x3fc3333333333333,param_1,param_2,0,1);
      lVar8 = (long)_DAT_1127412e8;
      lVar7 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c166e60(0x3fc3333333333333);
      _objc_release(lVar7);
      lVar7 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c200860();
      _objc_release(lVar7);
      lVar7 = param_1 + lVar8;
      _objc_loadWeakRetained(lVar7);
      lVar1 = lVar7;
      func_0x00010c131ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar7);
      if (*(long *)(param_1 + _DAT_1127412a4) != 0) {
        lVar7 = (long)_DAT_1127412b0;
        uVar3 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010c07be60();
        _objc_release(uVar3);
        if ((int)uVar6 != 0) {
          uVar4 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c122ee0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c074c20();
          *(char *)(param_1 + _DAT_112741344) = (char)uVar3;
          _objc_release(uVar6);
          _objc_release(uVar4);
          uVar3 = *(undefined8 *)(param_1 + lVar7);
          func_0x00010bfa1820(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c122ee0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a7f60();
          _objc_release(uVar6);
          _objc_release(uVar3);
        }
      }
      *(undefined1 *)(param_1 + lVar9) = 1;
    }
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127412e4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)(param_1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedab60(param_1,param_2,puVar5,param_4);
    _objc_release(puVar5);
    param_1 = param_1 + lVar8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c210720();
    _objc_release(param_1);
  }
LAB_10618f9a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10618f9cc; end: 1061902a3; -[SCFeatureSelfieSettingsImpl _setEditingModeInterfaceElementsHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10618f9cc(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar31 = 0.0;
  uVar32 = 0;
  if (param_3 == 0) {
    uVar32 = 0x3ff0000000000000;
  }
  if (param_4 == 0) {
    uVar33 = *(undefined8 *)(param_1 + _DAT_112741330);
    func_0x00010c269d40(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar32);
    _objc_release(uVar33);
    uVar33 = *(undefined8 *)(param_1 + _DAT_112741334);
    func_0x00010c269d40(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar32);
    _objc_release(uVar33);
    uVar33 = *(undefined8 *)(param_1 + _DAT_112741338);
    func_0x00010c269d40(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar32);
    _objc_release(uVar33);
    uVar33 = *(undefined8 *)(param_1 + _DAT_11274132c);
    func_0x00010c269d40(uVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar32);
    _objc_release(uVar33);
  }
  else {
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1061902a4;
    puStack_f8 = &UNK_110848c48;
    lStack_f0 = param_1;
    uStack_e8 = uVar32;
    func_0x00010bf03400(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_110);
  }
  if (*(long *)(param_1 + _DAT_1127412ac) == 0) {
    if (param_3 == 0) {
      lVar29 = (long)_DAT_1127412e8;
      lVar3 = param_1 + lVar29;
      _objc_loadWeakRetained(lVar3);
      lVar28 = (long)_DAT_112741338;
      uVar32 = *(undefined8 *)(param_1 + lVar28);
      func_0x00010c269d40(uVar32);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar3,param_2,uVar32);
      _objc_release(uVar32);
      _objc_release(lVar3);
      uVar33 = *(undefined8 *)(param_1 + _DAT_1127412a0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar33;
      func_0x00010c081c80();
      _objc_release(uVar33);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      if ((int)uVar32 == 0) {
        lVar2 = *(long *)(param_1 + lVar28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lStack_120 = lVar2;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lStack_118 = param_1 + lVar29;
        _objc_loadWeakRetained();
        lStack_128 = lStack_118;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lStack_130 = lStack_120;
        func_0x00010bf493c0(0x4030000000000000,lStack_120,param_2,lStack_128);
        _objc_retainAutoreleasedReturnValue();
        uStack_138 = *(undefined8 *)(param_1 + lVar28);
        lStack_e0 = lStack_130;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar32 = uStack_138;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1 + lVar29;
        _objc_loadWeakRetained();
        lVar18 = lVar3;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = uVar32;
        func_0x00010bf493c0(0xc030000000000000,uVar32,param_2,lVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar19 = *(undefined8 *)(param_1 + lVar28);
        uStack_d8 = uVar33;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar19;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = param_1 + lVar29;
        _objc_loadWeakRetained(lVar21);
        lVar22 = lVar21;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar29 = param_1 + lVar29;
        _objc_loadWeakRetained(lVar29);
        func_0x00010c148fc0();
        uVar23 = uVar20;
        func_0x00010bf493c0(-dVar31,uVar20,param_2,lVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar24 = *(undefined8 *)(param_1 + lVar28);
        uStack_d0 = uVar23;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar24;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar25;
        func_0x00010bf49420(0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_c8 = uVar26;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_e0,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1,param_2,puVar27);
        _objc_release(puVar27);
        _objc_release(uVar26);
        _objc_release(uVar25);
        _objc_release(uVar24);
        _objc_release(uVar23);
        _objc_release(lVar29);
        _objc_release(lVar22);
        _objc_release(lVar21);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar33);
        _objc_release(lVar18);
        _objc_release(lVar3);
      }
      else {
        lVar3 = param_1 + lVar29;
        _objc_loadWeakRetained(lVar3);
        lVar30 = (long)_DAT_11274132c;
        uVar32 = *(undefined8 *)(param_1 + lVar30);
        func_0x00010c269d40(uVar32);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar3,param_2,uVar32);
        _objc_release(uVar32);
        _objc_release(lVar3);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        lVar2 = *(long *)(param_1 + lVar28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lStack_120 = lVar2;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_118 = param_1 + lVar29;
        _objc_loadWeakRetained();
        lStack_128 = lStack_118;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lStack_130 = lStack_120;
        func_0x00010bf493c0(0xc030000000000000,lStack_120,param_2,lStack_128);
        _objc_retainAutoreleasedReturnValue();
        uStack_138 = *(undefined8 *)(param_1 + lVar28);
        lStack_c0 = lStack_130;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar32 = uStack_138;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1 + lVar29;
        _objc_loadWeakRetained();
        lVar18 = lVar3;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = param_1 + lVar29;
        _objc_loadWeakRetained();
        func_0x00010c148fc0();
        uVar33 = uVar32;
        func_0x00010bf493c0(-dVar31,uVar32,param_2,lVar18);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar28);
        uStack_b8 = uVar33;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar4;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar20;
        func_0x00010bf49420(0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar28);
        uStack_b0 = uVar23;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar5;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar25;
        func_0x00010bf49420(0x4060400000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar30);
        uStack_a8 = uVar26;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar6;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar29 = param_1 + lVar29;
        _objc_loadWeakRetained();
        lVar22 = lVar29;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar19;
        func_0x00010bf493c0(0x4030000000000000,uVar19,param_2,lVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar30);
        uStack_a0 = uVar24;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + lVar28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar8;
        func_0x00010bf493a0(uVar8,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(param_1 + lVar30);
        uStack_98 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010bf49420(0x4044000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + lVar30);
        uStack_90 = uVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar16;
        func_0x00010bf49420(0x4060400000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_88 = uVar17;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_c0,8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1,param_2,puVar27);
        _objc_release(puVar27);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar24);
        _objc_release(lVar22);
        _objc_release(lVar29);
        _objc_release(uVar19);
        _objc_release(uVar6);
        _objc_release(uVar26);
        _objc_release(uVar25);
        _objc_release(uVar5);
        _objc_release(uVar23);
        _objc_release(uVar20);
        _objc_release(uVar4);
        _objc_release(uVar33);
        _objc_release(lVar21);
        _objc_release(lVar18);
        _objc_release(lVar3);
      }
      _objc_release(uVar32);
      _objc_release(uStack_138);
      _objc_release(lStack_130);
      _objc_release(lStack_128);
      _objc_release(lStack_118);
      _objc_release(lStack_120);
    }
    else {
      uVar32 = *(undefined8 *)(param_1 + _DAT_112741338);
      func_0x00010c269d40(uVar32);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar32);
      lVar2 = *(long *)(param_1 + _DAT_11274132c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
    }
  }
  else {
    func_0x00010bf29020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136e00();
    lVar2 = param_1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar33 = *(undefined8 *)(lVar2 + 0x28);
  uVar32 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)_DAT_112741330);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar33);
  _objc_release(uVar32);
  uVar33 = *(undefined8 *)(lVar2 + 0x28);
  uVar32 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)_DAT_112741334);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar33);
  _objc_release(uVar32);
  uVar33 = *(undefined8 *)(lVar2 + 0x28);
  uVar32 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)_DAT_112741338);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar33);
  _objc_release(uVar32);
  uVar33 = *(undefined8 *)(lVar2 + 0x28);
  uVar32 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)_DAT_11274132c);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar33);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar32);
  return;
}



/* Entry: 1061902a4; end: 106190393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061902a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741330);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741334);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741338);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274132c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106190394; end: 10619046b; -[SCFeatureSelfieSettingsImpl _updateLensWithShowUI:saveSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c86f8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127412c0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010be4c0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046660(puVar1,param_2,param_3,param_4,lVar2,param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10619046c; end: 106190483; -[SCFeatureSelfieSettingsImpl _applyAutoEffect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619046c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127412c4),PTR_s_next__112614028,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 106190484; end: 106190487; -[SCFeatureSelfieSettingsImpl triggerAutoApply] */

void FUN_106190484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcdb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyAutoEffect_112551060);
  return;
}



/* Entry: 106190488; end: 10619049f; -[SCFeatureSelfieSettingsImpl cancelAutoApply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127412c8),PTR_s_next__112614028,
             PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1061904a0; end: 10619050f; -[SCFeatureSelfieSettingsImpl _lensUITopMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061904a0(long param_1)

{
  double in_d3;
  
  param_1 = param_1 + _DAT_1127412e8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb68e0();
  _objc_release(param_1);
  if (0.0 < in_d3) {
    func_0x00010c0df720(10.0 / in_d3,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106190510; end: 1061905a3; -[SCFeatureSelfieSettingsImpl _lensUIBottomMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190510(long param_1)

{
  int iVar1;
  long lVar2;
  double in_d3;
  
  lVar2 = param_1;
  func_0x0001008522a8();
  iVar1 = (int)lVar2;
  if ((iVar1 == 0) || (func_0x0001007f8afc(), iVar1 != 0)) {
    param_1 = param_1 + _DAT_1127412e8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb68e0();
    _objc_release(param_1);
    if (0.0 < in_d3) {
      func_0x00010c0df720(40.0 / in_d3,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061905a4; end: 106190693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061905a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf2b3c0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + _DAT_112741300), lVar2 != 0)) {
      _objc_retain(lVar2);
      func_0x00010c0be6c0(param_2);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106190694; end: 1061906af;  */

void FUN_106190694(void)

{
  return;
}



/* Entry: 1061906b0; end: 106190737; -[SCFeatureSelfieSettingsImpl _logCameraUserActionTapWithItem:isActivatingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061906b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127412bc;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b820();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106190738; end: 10619077f; -[SCFeatureSelfieSettingsImpl didEnableLensMode] */

void FUN_106190738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bea4e20(param_1,param_2,0);
  puStack_28 = PTR_PTR_1126eff90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didEnableLensMode_1125baf50);
  return;
}



/* Entry: 106190780; end: 106190823; -[SCFeatureSelfieSettingsImpl didFailToEnableLensModeWithError:] */

void FUN_106190780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106190824;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106190824; end: 10619088f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190824(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274130c) = 0;
  func_0x00010c1b2440(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741300),param_2,0);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puStack_28 = PTR_PTR_1126eff90;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didFailToEnableLensModeWithError_1125bb278,
                      *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106190890; end: 1061908d7; -[SCFeatureSelfieSettingsImpl onCameraModePreparationFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127412dc);
  func_0x00010c09e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09cd00(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061908d8; end: 1061908e7; -[SCFeatureSelfieSettingsImpl isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061908d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741304);
}



/* Entry: 1061908e8; end: 1061908f7; -[SCFeatureSelfieSettingsImpl selfieSettingsEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061908e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127412c0);
}



/* Entry: 1061908f8; end: 106190907; -[SCFeatureSelfieSettingsImpl selfieSettingsApplyAutoEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061908f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127412c4);
}



/* Entry: 106190908; end: 106190917; -[SCFeatureSelfieSettingsImpl selfieSettingsAutoApplyCancelObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106190908(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127412c8);
}



/* Entry: 106190918; end: 106190937; -[SCFeatureSelfieSettingsImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190918(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106190938; end: 106190977; -[SCFeatureSelfieSettingsImpl setEditingModeStateObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127412e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106190978; end: 106190b4b; -[SCFeatureSelfieSettingsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190978(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112741348);
  _objc_storeStrong(param_1 + _DAT_1127412dc,0);
  _objc_storeStrong(param_1 + _DAT_1127412e0,0);
  _objc_storeStrong(param_1 + _DAT_1127412d4,0);
  _objc_storeStrong(param_1 + _DAT_1127412e4,0);
  _objc_storeStrong(param_1 + _DAT_112741320,0);
  _objc_storeStrong(param_1 + _DAT_112741318,0);
  _objc_storeStrong(param_1 + _DAT_11274131c,0);
  _objc_storeStrong(param_1 + _DAT_11274132c,0);
  _objc_storeStrong(param_1 + _DAT_112741338,0);
  _objc_storeStrong(param_1 + _DAT_112741334,0);
  _objc_storeStrong(param_1 + _DAT_112741330,0);
  _objc_storeStrong(param_1 + _DAT_112741340,0);
  _objc_storeStrong(param_1 + _DAT_11274133c,0);
  _objc_storeStrong(param_1 + _DAT_112741300,0);
  _objc_destroyWeak(param_1 + _DAT_1127412e8);
  _objc_storeStrong(param_1 + _DAT_1127412d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127412cc);
  _objc_storeStrong(param_1 + _DAT_1127412c8,0);
  _objc_storeStrong(param_1 + _DAT_1127412c4,0);
  _objc_storeStrong(param_1 + _DAT_1127412c0,0);
  _objc_storeStrong(param_1 + _DAT_1127412bc,0);
  _objc_storeStrong(param_1 + _DAT_1127412b8,0);
  _objc_storeStrong(param_1 + _DAT_1127412b4,0);
  _objc_storeStrong(param_1 + _DAT_1127412b0,0);
  _objc_storeStrong(param_1 + _DAT_1127412ac,0);
  _objc_storeStrong(param_1 + _DAT_1127412a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127412a0,0);
  return;
}



/* Entry: 106190b4c; end: 106190b53; -[SCCameraSelfieSettingsFooterItemView init] */

void FUN_106190b4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05f950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUsesRuntimeViewfinderGeo_1125f5860,0)
  ;
  return;
}



/* Entry: 106190b54; end: 106190e4b; -[SCCameraSelfieSettingsFooterItemView initWithUsesRuntimeViewfinderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106190b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126eff98;
  puVar1 = &uStack_a0;
  uStack_a0 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741354) = param_5;
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar18 = (long)_DAT_112741358;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar2;
    _objc_release(uVar17);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = *(undefined8 **)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar17;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar13;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0(puVar1);
    uVar15 = uVar14;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (*(char *)((long)puVar3 + (long)_DAT_112741354) != '\x01') {
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _objc_release(puVar3);
    }
    func_0x000100594f4c();
    return puVar3;
  }
  return puVar1;
}



/* Entry: 106190e4c; end: 106190ec3; -[SCCameraSelfieSettingsFooterItemView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_106190e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_4 + _DAT_112741354) == '\x01') {
    param_3 = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar1);
  }
  func_0x000100594f4c();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 106190ec4; end: 106190f07; -[SCCameraSelfieSettingsFooterItemView setHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190ec4(long param_1)

{
  long lStack_20;
  undefined *puStack_18;
  
  if ((*(byte *)(param_1 + _DAT_11274134c) & 1) == 0) {
    puStack_18 = PTR_PTR_1126eff98;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_setHidden__1126479f8);
  }
  return;
}



/* Entry: 106190f08; end: 106191177; -[SCCameraSelfieSettingsFooterItemView beginTransition:transitionIn:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106190f08(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar14 = param_4;
  _objc_retain(param_3);
  if (param_4 != 0) {
    func_0x00010befbb60(param_3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    iVar14 = 4;
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar16);
  }
  func_0x00010c069fa0(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = 0x3ff0000000000000;
  if (iVar14 != param_5) {
    func_0x00010c12c960(0x3ff0000000000000,param_3);
    uVar16 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar16,*(undefined8 *)(param_3 + _DAT_112741358),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106191178; end: 1061911b7; -[SCCameraSelfieSettingsFooterItemView endTransition:transitionIn:complete:context:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191178(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (param_4 != param_5) {
    func_0x00010c12c960(0x3ff0000000000000,param_1);
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112741358),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061911b8; end: 1061911d7; -[SCCameraSelfieSettingsFooterItemView performAnimations:context:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061911b8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112741358),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061911d8; end: 1061911db; -[SCCameraSelfieSettingsFooterItemView setBackgroundAlpha:] */

void FUN_1061911d8(void)

{
  return;
}



/* Entry: 1061911dc; end: 1061911eb; -[SCCameraSelfieSettingsFooterItemView overrideTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061911dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274135c);
}



/* Entry: 1061911ec; end: 1061911f7; -[SCCameraSelfieSettingsFooterItemView setOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061911ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061911f8; end: 106191207; -[SCCameraSelfieSettingsFooterItemView dimUnselectedIcons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061911f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741350);
}



/* Entry: 106191208; end: 106191217; -[SCCameraSelfieSettingsFooterItemView setDimUnselectedIcons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191208(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112741350) = param_3;
  return;
}



/* Entry: 106191218; end: 106191227; -[SCCameraSelfieSettingsFooterItemView shouldIgnoreVisibilityChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106191218(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274134c);
}



/* Entry: 106191228; end: 106191237; -[SCCameraSelfieSettingsFooterItemView setShouldIgnoreVisibilityChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191228(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274134c) = param_3;
  return;
}



/* Entry: 106191238; end: 106191247; -[SCCameraSelfieSettingsFooterItemView containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106191238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741358);
}



/* Entry: 106191248; end: 106191287; -[SCCameraSelfieSettingsFooterItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191248(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274135c,0);
  return;
}



/* Entry: 106191288; end: 1061913e7;  */

void FUN_106191288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
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
  _objc_retain(param_3);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beef6e0();
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061913e8;
  puStack_60 = &UNK_110912468;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106191440;
  puStack_88 = &UNK_110846320;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0bd620(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1061913e8; end: 10619143f;  */

void FUN_1061913e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87ca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106191440; end: 1061914f7;  */

void FUN_106191440(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x0001008e3740();
  func_0x00010bee0120(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061914f8; end: 10619159b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061914f8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106191580;
  lVar1 = param_2;
  func_0x00010c2827c0();
  if (1 < lVar1 - 1U) {
    if (lVar1 != 3) goto LAB_106191580;
    uVar2 = *(ulong *)(param_1 + _DAT_112741374);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22da60();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_106191580;
  }
  func_0x00010be93ba0(param_1);
LAB_106191580:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10619159c; end: 1061915c7;  */

void FUN_10619159c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061915c8; end: 106191653; -[SCFeatureCameraSnapDoc dealloc] */

void FUN_1061915c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126effa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106191654; end: 106191687; -[SCFeatureCameraSnapDoc stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191654(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741388;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106191688; end: 106191803; -[SCFeatureCameraSnapDoc beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106191804;
  puStack_78 = &UNK_11084ec60;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  uVar1 = param_4;
  func_0x00010c25ff60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106191804; end: 10619191b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191804(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + _DAT_112741378);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b680();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      func_0x00010c0bd6a0(param_2);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10619191c; end: 1061919e3;  */

void FUN_10619191c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf0aca0(param_3);
  func_0x00010c0744a0(param_3);
  func_0x00010c074840(param_3);
  uVar1 = param_3;
  func_0x00010bef0a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bee0200(param_1,param_2);
  _objc_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061919e4; end: 106191adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061919e4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + _DAT_112741378);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b680();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      func_0x00010c0c17a0(param_2);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106191ae0; end: 106191bdb;  */

void FUN_106191ae0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf31440();
  if (lVar1 != 3) {
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    uVar2 = param_3;
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0aca0(param_5);
    func_0x00010c0744a0(param_5);
    func_0x00010c074840(param_5);
    lVar1 = param_5;
    func_0x00010bef0a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0120(param_1,param_2);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106191bdc; end: 1061927b3; -[SCFeatureCameraSnapDoc _recoverFromSnapSessionContext:contentLossReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106191bdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_10619278c;
  lVar17 = param_3;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c240200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar17);
  if (lVar2 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126b25b8;
    _objc_alloc();
    lVar17 = param_3;
    func_0x00010c2407e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar17;
    func_0x00010c240200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar19;
    func_0x00010bf9e140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2407e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c240200();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar5;
    func_0x00010c0c46a0();
    func_0x00010c011280(puVar18,param_2,lVar1,lVar16);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar19);
    _objc_release(lVar17);
  }
  lVar16 = (long)_DAT_112741360;
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c2407e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139f20(uVar15,param_2,lVar19,puVar18);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + lVar16);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c0ff580(lVar19,param_2,puVar6,&PTR___NSConcreteGlobalBlock_1109124f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(lVar5);
  if (lVar2 == 0) {
    func_0x00010be93ba0(param_1);
  }
  else {
    lVar5 = *(long *)(param_1 + lVar16);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar17;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar19;
    func_0x00010c0ff640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar17);
    _objc_release(lVar5);
    if (lVar1 == 0) {
      func_0x00010be93ba0(param_1);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar4;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar1;
      func_0x00010c0c3fe0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar17;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar15;
      func_0x00010c0c6240(uVar15,param_2,lVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar19);
      _objc_release(lVar17);
      _objc_release(uVar15);
      _objc_release(uVar4);
      _objc_release(uVar7);
      lVar19 = (long)_DAT_112741364;
      lVar17 = param_1 + lVar19;
      _objc_loadWeakRetained(lVar17);
      lVar5 = lVar17;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c1109c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182160();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      _objc_release(lVar17);
      lVar17 = param_1 + lVar19;
      _objc_loadWeakRetained(lVar17);
      lVar5 = lVar17;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c1109c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b1580();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      _objc_release(lVar17);
      lVar17 = param_1 + lVar19;
      _objc_loadWeakRetained(lVar17);
      lVar5 = lVar17;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c1109c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c06a0();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      _objc_release(lVar17);
      lVar17 = param_3;
      func_0x00010c2407e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar17;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar17);
      puVar10 = *(undefined **)(param_1 + _DAT_112741368);
      func_0x00010beec300();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c1115a0();
      if (((int)puVar6 == 0) || (lVar17 = lVar5, func_0x00010bfd84e0(), (int)lVar17 == 0)) {
LAB_1061921f0:
        _objc_release(puVar10);
      }
      else {
        lVar17 = lVar5;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar17;
        func_0x00010bfe5ea0();
        _objc_release(lVar17);
        _objc_release(puVar10);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (0 < lVar8) {
          lVar17 = lVar5;
          func_0x00010c08fb40(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar17;
          func_0x00010bfe5ea0();
          func_0x00010c0df7c0(puVar6,param_2,lVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar6;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(lVar17);
          lVar17 = param_1 + lVar19;
          _objc_loadWeakRetained(lVar17);
          lVar8 = lVar17;
          func_0x00010c1119c0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c1119c0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar9;
          func_0x00010c1109c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c06a0();
          _objc_release(lVar11);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar17);
          goto LAB_1061921f0;
        }
      }
      uVar4 = uVar3;
      func_0x00010c0c6c20();
      lVar17 = param_1 + lVar19;
      _objc_loadWeakRetained();
      lVar8 = lVar17;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c1119c0();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar4 == 3) {
        uVar12 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c0cfdc0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar4;
        func_0x00010c240000();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar1;
        func_0x00010c0c3fe0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar11;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar15;
        func_0x00010c0c6f80(uVar15,param_2,lVar13);
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_106192808;
        puStack_70 = &UNK_11086f208;
        _objc_retain(lVar1);
        uVar14 = uVar7;
        lStack_68 = lVar1;
        func_0x00010c0b8600(uVar7,param_2,&puStack_88);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf47ce0(lVar9,param_2,uVar14);
        _objc_release(uVar14);
        _objc_release(uVar7);
        _objc_release(lVar13);
        _objc_release(lVar11);
        _objc_release(uVar15);
        _objc_release(uVar4);
        _objc_release(uVar12);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar17);
        lVar17 = param_1 + lVar19;
        _objc_loadWeakRetained(lVar17);
        lVar8 = lVar17;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16c080();
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar17);
        lVar17 = (long)_DAT_112741374;
        uVar15 = *(undefined8 *)(param_1 + lVar17);
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar15;
        func_0x00010c06ba20();
        _objc_release(uVar15);
        if ((int)uVar4 != 0) {
          lVar8 = param_3;
          func_0x00010c2407e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c243340();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = *(undefined8 *)(param_1 + lVar17);
          func_0x00010bfa1820(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar15;
          func_0x00010c10ffa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c215ae0();
          _objc_release(uVar4);
          _objc_release(uVar15);
          _objc_release(lVar9);
          _objc_release(lVar8);
          uVar15 = *(undefined8 *)(param_1 + lVar17);
          func_0x00010bfa1820(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar15;
          func_0x00010c10ffa0();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = param_1 + lVar19;
          _objc_loadWeakRetained(lVar17);
          lVar8 = lVar17;
          func_0x00010c1119c0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c1119c0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar9;
          func_0x00010c1109c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1654e0();
          _objc_release(lVar11);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar17);
          _objc_release(uVar4);
          _objc_release(uVar15);
        }
        _objc_release(lStack_68);
LAB_10619261c:
        lVar17 = param_3;
        func_0x00010c2407e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c0cfdc0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar15;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2042c0();
        _objc_release(uVar4);
        _objc_release(uVar15);
        _objc_release(lVar17);
        param_1 = param_1 + lVar19;
        _objc_loadWeakRetained(param_1);
        lVar17 = param_1;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10da20();
        _objc_release(lVar17);
        _objc_release(param_1);
      }
      else {
        if ((int)uVar4 == 2) {
          uVar12 = *(undefined8 *)(param_1 + lVar16);
          func_0x00010c0cfdc0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar4;
          func_0x00010c240000();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar1;
          func_0x00010c0c3fe0(lVar1);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar11;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar15;
          func_0x00010c0c7240(uVar15,param_2,lVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar7;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf47920(lVar9,param_2,uVar14);
          _objc_release(uVar14);
          _objc_release(uVar7);
          _objc_release(lVar13);
          _objc_release(lVar11);
          _objc_release(uVar15);
          _objc_release(uVar4);
          _objc_release(uVar12);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar17);
          goto LAB_10619261c;
        }
        lVar16 = lVar9;
        func_0x00010c1109c0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b1580();
        _objc_release(lVar16);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar17);
        lVar19 = param_1 + lVar19;
        _objc_loadWeakRetained(lVar19);
        lVar17 = lVar19;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar17;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar16;
        func_0x00010c1109c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c06a0();
        _objc_release(lVar8);
        _objc_release(lVar16);
        _objc_release(lVar17);
        _objc_release(lVar19);
        func_0x00010be93ba0(param_1);
      }
      _objc_release(lVar5);
      _objc_release(uVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(puVar18);
LAB_10619278c:
  _objc_release(param_3);
  return;
}



/* Entry: 1061927b4; end: 1061927f7;  */

bool FUN_1061927b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 1061927f8; end: 106192807;  */

void FUN_1061927f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_sc_imageWithData__112630e30,param_2);
  return;
}



/* Entry: 106192808; end: 1061928a7;  */

void FUN_106192808(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126b5fb0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c4bc0();
  func_0x00010c0613a0((double)(uVar3 & 0xffffffff) / 1000.0,puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061928a8; end: 1061929b7; -[SCFeatureCameraSnapDoc _resetSnapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061928a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112741360;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061929b8; end: 106192b43; -[SCFeatureCameraSnapDoc _updateSnapDocWithImage:contentAspectRatio:isGenAI:isGreenScreen:appliedLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061929b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11274136c);
  uStack_80 = uVar5;
  _objc_retain(param_7);
  fVar4 = (float)uVar5;
  func_0x00010c293220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfe8c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010bfb2c80(uVar1);
  if (fVar4 != INFINITY) {
    func_0x00010bfb2c80(uVar1);
    _CMTimeMakeWithSeconds(&uStack_80,(double)fVar4,1000);
  }
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  uStack_90 = uStack_70;
  puVar2 = PTR_PTR_1126affc0;
  func_0x00010c27eee0(PTR_PTR_1126affc0,param_3,param_4,&uStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000108069028(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee00e0(param_1,param_2,param_3,puVar2,uVar5,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106192b44; end: 106192c8f; -[SCFeatureCameraSnapDoc _updateSnapDocWithVideo:contentAspectRatio:isGenAI:isGreenScreen:appliedLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106192b44(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126affc0;
  uVar5 = param_1;
  _objc_retain(param_7);
  func_0x00010c29bb40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29a0a0(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11274136c);
  func_0x00010c293220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29b300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar5 = (ulong)((uVar5 & 0x7fffffffffffffff) == 0x7ff0000000000000);
  func_0x000108068fc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee00e0(param_1,param_2,param_3,puVar1,uVar5,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106192c90; end: 1061931e7; -[SCFeatureCameraSnapDoc _updateSnapDocWithBaseMediaInput:playbackCharacteristics:contentAspectRatio:isGenAI:isGreenScreen:appliedLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106192c90(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  int param_6,int param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar13 = (long)_DAT_112741360;
  lVar1 = *(long *)(param_2 + lVar13);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c195460(lVar14);
  lVar2 = lVar14;
  if ((lVar14 != 0) && (lVar1 = lVar14, func_0x00010bf30e80(), (int)lVar1 == 3)) {
    lVar1 = lVar14;
    func_0x00010bf5a600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010be93ba0(param_2);
      lVar13 = *(long *)(param_2 + lVar13);
      func_0x00010c0cfdc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c240000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar1);
      _objc_release(lVar13);
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112741368);
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3c1a0();
    _objc_release(uVar3);
    dVar16 = 1.60807493534087e-314;
    _objc_retain(param_5);
    _objc_retain(param_8);
    func_0x00010c28a040(lVar2);
    fVar17 = (float)param_1;
    func_0x0001008e3740();
    lVar14 = 0;
    fVar15 = ABS(fVar17 - (float)dVar16);
    if ((1.1754944e-38 <= fVar15) && (ABS(fVar17 + (float)dVar16) * 1.1920929e-07 <= fVar15)) {
      lVar14 = 0;
      fVar15 = ABS(fVar17);
      dVar16 = (double)(ulong)(uint)fVar15;
      if ((1.1754944e-38 <= fVar15) && (ABS(fVar17 + 0.0) * 1.1920929e-07 <= fVar15)) {
        uVar4 = param_2 + _DAT_112741364;
        _objc_loadWeakRetained();
        uVar5 = uVar4;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c1119c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = uVar6;
        func_0x00010c2a67c0();
        if ((uVar4 & 1) == 0) {
          lVar14 = lVar2;
          func_0x00010bfce280();
          func_0x0001080697a0(dVar16 / param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar14 = 0;
        }
        _objc_release(uVar6);
      }
    }
    puVar7 = PTR_PTR_1126affc8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    if (param_7 == 0) {
      puVar8 = PTR_PTR_1126affd8;
      func_0x00010c0cb140(PTR_PTR_1126affd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d00(puVar7);
      _objc_release(puVar8);
      puVar9 = *(undefined **)(param_2 + _DAT_11274137c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar9;
      func_0x00010c0c54c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar7;
        func_0x00010c0c5b40(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbee0();
        _objc_release(puVar9);
      }
    }
    else {
      puVar8 = PTR_PTR_1126affd0;
      func_0x00010c0cb140(PTR_PTR_1126affd0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4d40(puVar7);
    }
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    if (param_6 != 0) {
      puVar10 = PTR_PTR_1126affc8;
      func_0x00010c0cb140(PTR_PTR_1126affc8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126c8210;
      func_0x00010c0cb140(PTR_PTR_1126c8210);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4ce0(puVar10);
      _objc_release(puVar11);
      func_0x00010bf09f60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar10);
    }
    puVar8 = PTR_PTR_1126affe0;
    lVar1 = (long)_DAT_11274138c;
    func_0x00010bfb24e0(*(undefined8 *)(param_2 + lVar1));
    func_0x00010bf70d80(*(undefined8 *)(param_2 + lVar1));
    param_2 = param_2 + _DAT_112741364;
    _objc_loadWeakRetained();
    lVar1 = param_2;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar1;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c232560();
    func_0x00010bef70e0(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(lVar14);
    _objc_release(param_8);
    _objc_release(param_5);
  }
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500();
  _objc_release(uVar3);
  if (*(long *)(param_4 + 0x28) == 0) {
    if (*(char *)(param_4 + 0x30) == '\x01') {
      func_0x00010c1ba8a0(param_3);
    }
  }
  else {
    func_0x00010c0b4ca0();
    uVar3 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061931e8; end: 106193293;  */

void FUN_1061931e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010c1ba8a0(param_2);
    }
  }
  else {
    func_0x00010c0b4ca0();
    uVar1 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106193294; end: 10619336f; -[SCFeatureCameraSnapDoc .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106193294(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741384,0);
  _objc_storeStrong(param_1 + _DAT_11274138c,0);
  _objc_storeStrong(param_1 + _DAT_11274137c,0);
  _objc_storeStrong(param_1 + _DAT_112741378,0);
  _objc_storeStrong(param_1 + _DAT_112741374,0);
  _objc_storeStrong(param_1 + _DAT_112741370,0);
  _objc_storeStrong(param_1 + _DAT_112741388,0);
  _objc_storeStrong(param_1 + _DAT_112741380,0);
  _objc_storeStrong(param_1 + _DAT_11274136c,0);
  _objc_storeStrong(param_1 + _DAT_112741368,0);
  _objc_destroyWeak(param_1 + _DAT_112741364);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741360,0);
  return;
}



/* Entry: 106193370; end: 10619369b; -[SCFeatureSpeedModeImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:valdiRuntimeProvider:directorModeActive:featureUpdateEventSubject:cameraConfiguration:cameraDeviceSettingsResolver:cameraUsageTier:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106193370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126effa8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_112741394) = 1;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112741398,param_4);
    lVar5 = (long)_DAT_11274139c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127413a0,param_6);
    lVar5 = (long)_DAT_1127413a4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127413a8) = param_11;
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127413ac,param_10);
    lVar5 = (long)_DAT_1127413b0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127413b4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127413b4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127413b8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127413b8) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127413bc) = param_7;
    lVar5 = (long)_DAT_1127413c0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127413c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127413c4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127413c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127413c8) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10619369c; end: 1061936c7;  */

void FUN_10619369c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


