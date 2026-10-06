/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c47b60; end: 105c47c9b; -[SCSafetyAndPrivacyViewController _createValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c47b60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(long *)(param_1 + _DAT_112732adc) != 0) {
    puVar1 = PTR_PTR_1126c3538;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112732af0;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010beb15e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224e20(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126c3540;
    _objc_alloc();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105c47c9c;
    puStack_50 = &UNK_110842e18;
    uVar3 = *(undefined8 *)(param_1 + _DAT_112732ad4);
    lStack_48 = param_1;
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031460(puVar1,param_2,&puStack_68,uVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112732af4);
    *(undefined **)(param_1 + _DAT_112732af4) = puVar1;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_alloc(PTR_PTR_1126c3548);
    func_0x00010c061d40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c47c9c; end: 105c47ca3;  */

void FUN_105c47c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onDismissButtonTapped_112616930);
  return;
}



/* Entry: 105c47ca4; end: 105c47cfb; -[SCSafetyAndPrivacyViewController onDismissButtonTapped] */

void FUN_105c47ca4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105c47cfc;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105c47cfc; end: 105c47d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c47cfc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112732aec;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c149380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c47d3c; end: 105c47def; -[SCSafetyAndPrivacyViewController _setupWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c47d3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c47df0; end: 105c47eab; -[SCSafetyAndPrivacyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c47df0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732af8,0);
  _objc_storeStrong(param_1 + _DAT_112732ad4,0);
  _objc_storeStrong(param_1 + _DAT_112732ae0,0);
  _objc_storeStrong(param_1 + _DAT_112732ad8,0);
  _objc_storeStrong(param_1 + _DAT_112732adc,0);
  _objc_storeStrong(param_1 + _DAT_112732ae8,0);
  _objc_storeStrong(param_1 + _DAT_112732ae4,0);
  _objc_storeStrong(param_1 + _DAT_112732af4,0);
  _objc_storeStrong(param_1 + _DAT_112732af0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732aec);
  return;
}



/* Entry: 105c47eac; end: 105c47eb7; +[SCCSettingsSwitchboardBugsSuggestionsComponent componentPath] */

undefined ** FUN_105c47eac(void)

{
  return &PTR____CFConstantStringClassReference_110e23a18;
}



/* Entry: 105c47eb8; end: 105c47ed7; -[SCCSettingsSwitchboardBugsSuggestionsComponent initWithViewModel:componentContext:runtime:] */

void FUN_105c47eb8(void)

{
  FUN_105c48074(PTR_PTR_1126ec798);
  return;
}



/* Entry: 105c47ed8; end: 105c47f0b; -[SCCSettingsSwitchboardBugsSuggestionsComponent setViewModel:] */

void FUN_105c47ed8(void)

{
  func_0x000105c48088();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c48098();
  func_0x000105c480b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c47f0c; end: 105c47f43; -[SCCSettingsSwitchboardBugsSuggestionsComponent viewModel] */

void FUN_105c47f0c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c480a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c47f44; end: 105c47f4f; +[SCCSettingsSwitchboardHelpCenterComponent componentPath] */

undefined ** FUN_105c47f44(void)

{
  return &PTR____CFConstantStringClassReference_110e23a38;
}



/* Entry: 105c47f50; end: 105c47f6f; -[SCCSettingsSwitchboardHelpCenterComponent initWithViewModel:componentContext:runtime:] */

void FUN_105c47f50(void)

{
  FUN_105c48074(PTR_PTR_1126ec7a0);
  return;
}



/* Entry: 105c47f70; end: 105c47fa3; -[SCCSettingsSwitchboardHelpCenterComponent setViewModel:] */

void FUN_105c47f70(void)

{
  func_0x000105c48088();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c48098();
  func_0x000105c480b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c47fa4; end: 105c47fdb; -[SCCSettingsSwitchboardHelpCenterComponent viewModel] */

void FUN_105c47fa4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c480a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c47fdc; end: 105c47fe7; +[SCCSettingsSwitchboardSafetyPrivacyComponent componentPath] */

undefined ** FUN_105c47fdc(void)

{
  return &PTR____CFConstantStringClassReference_110e23a58;
}



/* Entry: 105c47fe8; end: 105c48007; -[SCCSettingsSwitchboardSafetyPrivacyComponent initWithViewModel:componentContext:runtime:] */

void FUN_105c47fe8(void)

{
  FUN_105c48074(PTR_PTR_1126ec7a8);
  return;
}



/* Entry: 105c48008; end: 105c4803b; -[SCCSettingsSwitchboardSafetyPrivacyComponent setViewModel:] */

void FUN_105c48008(void)

{
  func_0x000105c48088();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c48098();
  func_0x000105c480b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105c4803c; end: 105c48073; -[SCCSettingsSwitchboardSafetyPrivacyComponent viewModel] */

void FUN_105c4803c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c480a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c48074; end: 105c480cf;  */

void FUN_105c48074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105c480d0; end: 105c481ff; -[SCCSettingsSwitchboardBugsSuggestionsContext initWithOnDismissButtonTapped:onReportBugTapped:onMakeSuggestionTapped:onShakeToReportTapped:onMadeForMePanelTapped:blizzardLogger:] */

undefined8 *
FUN_105c480d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain();
  func_0x000105c483f4();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar4 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_1126ec7b0;
  puVar5 = &uStack_60;
  uStack_60 = param_1;
  func_0x000105c483d4(puVar5,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000105c483fc();
  return puVar5;
}



/* Entry: 105c48200; end: 105c48213; +[SCCSettingsSwitchboardBugsSuggestionsContext valdiMarshallableObjectDescriptor] */

void FUN_105c48200(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_1108dfad8;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108dfb80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c48214; end: 105c48233; -[SCCSettingsSwitchboardBugsSuggestionsViewModel init] */

void FUN_105c48214(void)

{
  func_0x000105c483a4(PTR_PTR_1126ec7b8);
  return;
}



/* Entry: 105c48234; end: 105c48243; +[SCCSettingsSwitchboardBugsSuggestionsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c48234(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108dfb90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c48244; end: 105c482a7; -[SCCSettingsSwitchboardHelpCenterContext initWithOnDismissButtonTapped:blizzardLogger:] */

void FUN_105c48244(void)

{
  func_0x000105c483b8();
  func_0x000105c483f4();
  func_0x000105c483d4(&stack0xffffffffffffffc0,PTR_s_initWithFieldValues__1125e24b8);
  func_0x000105c483dc();
  func_0x000105c483fc();
  return;
}



/* Entry: 105c482a8; end: 105c482bb; +[SCCSettingsSwitchboardHelpCenterContext valdiMarshallableObjectDescriptor] */

void FUN_105c482a8(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_1108dfbd8;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108dfc38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c482bc; end: 105c482db; -[SCCSettingsSwitchboardHelpCenterViewModel init] */

void FUN_105c482bc(void)

{
  func_0x000105c483a4(PTR_PTR_1126ec7c8);
  return;
}



/* Entry: 105c482dc; end: 105c482eb; +[SCCSettingsSwitchboardHelpCenterViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c482dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddcc6f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c482ec; end: 105c4834b; -[SCCSettingsSwitchboardSafetyPrivacyContext initWithOnDismissButtonTapped:blizzardLogger:] */

void FUN_105c482ec(void)

{
  func_0x000105c483b8();
  func_0x000105c483f4();
  func_0x000105c483d4(&stack0xffffffffffffffc0,PTR_s_initWithFieldValues__1125e24b8);
  func_0x000105c483dc();
  func_0x000105c483fc();
  return;
}



/* Entry: 105c4834c; end: 105c4835f; +[SCCSettingsSwitchboardSafetyPrivacyContext valdiMarshallableObjectDescriptor] */

void FUN_105c4834c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_1108dfc50;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108dfc98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c48360; end: 105c4837f; -[SCCSettingsSwitchboardSafetyPrivacyViewModel init] */

void FUN_105c48360(void)

{
  func_0x000105c483a4(PTR_PTR_1126ec7d8);
  return;
}



/* Entry: 105c48380; end: 105c48403; +[SCCSettingsSwitchboardSafetyPrivacyViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c48380(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108dfca8;
  param_1[1] = &PTR_DAT_1108dfcd8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c48404; end: 105c485f3; -[SCSpectaclesSettingsRowProvider initWithScopeExposer:interstitialScopeExposer:spectaclesManager:devicesProvider:accountRow:deviceProductType:titleText:accessibilityIdentifier:] */

undefined1 *
FUN_105c48404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ec7e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010beed6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    func_0x00010bee37c0(puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c485f4; end: 105c48743; -[SCSpectaclesSettingsRowProvider _updateViewModel] */

void FUN_105c485f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f2b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_105c48678;
  }
  else {
LAB_105c48678:
    lVar1 = param_1;
    func_0x00010be3e780();
    if ((int)lVar1 != 0) {
      lVar3 = lVar2;
      func_0x00010c0d4f60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      goto LAB_105c486b8;
    }
  }
  lVar1 = 0;
LAB_105c486b8:
  puVar4 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  func_0x00010c053ba0();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  puVar5 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c48744; end: 105c48787; -[SCSpectaclesSettingsRowProvider _isBluetoothOn] */

bool FUN_105c48744(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1e6e0();
  _objc_release(lVar1);
  return lVar2 == 5;
}



/* Entry: 105c48788; end: 105c48957; -[SCSpectaclesSettingsRowProvider handleWithContext:] */

void FUN_105c48788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0df0e0();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      _objc_initWeak(auStack_58,param_1);
      puVar5 = PTR_PTR_1126b6a50;
      _objc_alloc(PTR_PTR_1126b6a50);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105c48958;
      puStack_68 = &UNK_1108434b0;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_copyWeak(auStack_88,auStack_58);
      func_0x00010c0026e0(puVar5);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_105c4882c;
    }
  }
  func_0x00010bebadc0(param_1);
LAB_105c4882c:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105c48958; end: 105c489cb;  */

void FUN_105c48958(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c489cc; end: 105c489eb; -[SCSpectaclesSettingsRowProvider _dismissInterstitial] */

void FUN_105c489cc(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105c489ec; end: 105c48a6b; -[SCSpectaclesSettingsRowProvider _showSettings:] */

void FUN_105c489ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3550;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c058720();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c48a6c; end: 105c48adf; -[SCSpectaclesSettingsRowProvider spectaclesSettingsScopeDidDismiss:] */

void FUN_105c48a6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c48ae0; end: 105c48ae3; -[SCSpectaclesSettingsRowProvider spectaclesDeviceDidUpdateDeviceName:] */

void FUN_105c48ae0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModel_112596798);
  return;
}



/* Entry: 105c48ae4; end: 105c48ae7; -[SCSpectaclesSettingsRowProvider statusCoordinatorBluetoothTurnedOff:] */

void FUN_105c48ae4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModel_112596798);
  return;
}



/* Entry: 105c48ae8; end: 105c48aeb; -[SCSpectaclesSettingsRowProvider statusCoordinatorBluetoothTurnedOn:] */

void FUN_105c48ae8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModel_112596798);
  return;
}



/* Entry: 105c48aec; end: 105c48aef; -[SCSpectaclesSettingsRowProvider statusCoordinatorNumberOfDevicesUpdated:] */

void FUN_105c48aec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModel_112596798);
  return;
}



/* Entry: 105c48af0; end: 105c48af3; -[SCSpectaclesSettingsRowProvider statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105c48af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModel_112596798);
  return;
}



/* Entry: 105c48af4; end: 105c48afb; -[SCSpectaclesSettingsRowProvider sectionRow] */

undefined8 FUN_105c48af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105c48afc; end: 105c48b03; -[SCSpectaclesSettingsRowProvider rowViewModel] */

undefined8 FUN_105c48afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105c48b04; end: 105c48b87; -[SCSpectaclesSettingsRowProvider .cxx_destruct] */

void FUN_105c48b04(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c48b88; end: 105c48c2f; -[SCSpectaclesSettingsCheeriosDevicesProvider initWithAllPreviouslyPairedDevices:spectaclesAppStatusProvider:] */

undefined1 *
FUN_105c48b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec7e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c48c30; end: 105c48c3b; -[SCSpectaclesSettingsCheeriosDevicesProvider devices] */

void FUN_105c48c30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filterDevicesUsingBlock__1125631a0,
             &PTR___NSConcreteGlobalBlock_1108dfd38);
  return;
}



/* Entry: 105c48c3c; end: 105c48c7b;  */

undefined8 FUN_105c48c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06e7e0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105c48c7c; end: 105c48c87; -[SCSpectaclesSettingsCheeriosDevicesProvider pairedDevices] */

void FUN_105c48c7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filterDevicesUsingBlock__1125631a0,
             &PTR___NSConcreteGlobalBlock_1108dfd58);
  return;
}



/* Entry: 105c48c88; end: 105c48cf7;  */

uint FUN_105c48c88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e7e0();
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c082060(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105c48cf8; end: 105c48d8f; -[SCSpectaclesSettingsCheeriosDevicesProvider connectedDevices] */

void FUN_105c48cf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_1108dfd98);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfaea40(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105c48d90; end: 105c48dcf;  */

undefined8 FUN_105c48d90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06e7e0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105c48dd0; end: 105c48e0b; -[SCSpectaclesSettingsCheeriosDevicesProvider numberOfPairedDevices] */

undefined8 FUN_105c48dd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f2bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c48e0c; end: 105c48e77; -[SCSpectaclesSettingsCheeriosDevicesProvider connectedDeviceAtIndex:] */

void FUN_105c48e0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  if (((long)param_3 < 0) || (uVar1 = param_1, func_0x00010bf529e0(), uVar1 <= param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c48e78; end: 105c48ee3; -[SCSpectaclesSettingsCheeriosDevicesProvider pairedDeviceAtIndex:] */

void FUN_105c48e78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c0f2bc0();
  _objc_retainAutoreleasedReturnValue();
  if (((long)param_3 < 0) || (uVar1 = param_1, func_0x00010bf529e0(), uVar1 <= param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c48ee4; end: 105c48fc7; -[SCSpectaclesSettingsCheeriosDevicesProvider _filterDevicesUsingBlock:] */

void FUN_105c48ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c48fc8;
  puStack_40 = &UNK_1108dfdb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfaea40(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c48fc8; end: 105c48fd3;  */

void FUN_105c48fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c48fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c48fd4; end: 105c49003; -[SCSpectaclesSettingsCheeriosDevicesProvider .cxx_destruct] */

void FUN_105c48fd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c49004; end: 105c490ab; -[SCSpectaclesSettingsSpectaclesDevicesProvider initWithAllPreviouslyPairedDevices:spectaclesAppStatusProvider:] */

undefined1 *
FUN_105c49004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec7f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c490ac; end: 105c490b7; -[SCSpectaclesSettingsSpectaclesDevicesProvider devices] */

void FUN_105c490ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filterDevicesUsingBlock__1125631a0,
             &PTR___NSConcreteGlobalBlock_1108dfde8);
  return;
}



/* Entry: 105c490b8; end: 105c490f7;  */

uint FUN_105c490b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06e7e0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105c490f8; end: 105c49103; -[SCSpectaclesSettingsSpectaclesDevicesProvider pairedDevices] */

void FUN_105c490f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__filterDevicesUsingBlock__1125631a0,
             &PTR___NSConcreteGlobalBlock_1108dfe08);
  return;
}



/* Entry: 105c49104; end: 105c49173;  */

uint FUN_105c49104(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e7e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c082060(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105c49174; end: 105c4920b; -[SCSpectaclesSettingsSpectaclesDevicesProvider connectedDevices] */

void FUN_105c49174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_1108dfe28);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfaea40(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105c4920c; end: 105c4924b;  */

uint FUN_105c4920c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06e7e0();
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105c4924c; end: 105c49287; -[SCSpectaclesSettingsSpectaclesDevicesProvider numberOfPairedDevices] */

undefined8 FUN_105c4924c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f2bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105c49288; end: 105c492f3; -[SCSpectaclesSettingsSpectaclesDevicesProvider connectedDeviceAtIndex:] */

void FUN_105c49288(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  if (((long)param_3 < 0) || (uVar1 = param_1, func_0x00010bf529e0(), uVar1 <= param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c492f4; end: 105c4935f; -[SCSpectaclesSettingsSpectaclesDevicesProvider pairedDeviceAtIndex:] */

void FUN_105c492f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c0f2bc0();
  _objc_retainAutoreleasedReturnValue();
  if (((long)param_3 < 0) || (uVar1 = param_1, func_0x00010bf529e0(), uVar1 <= param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0dfd40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c49360; end: 105c49443; -[SCSpectaclesSettingsSpectaclesDevicesProvider _filterDevicesUsingBlock:] */

void FUN_105c49360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c49444;
  puStack_40 = &UNK_1108dfdb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfaea40(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c49444; end: 105c4944f;  */

void FUN_105c49444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c4944c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105c49450; end: 105c4947f; -[SCSpectaclesSettingsSpectaclesDevicesProvider .cxx_destruct] */

void FUN_105c49450(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c49480; end: 105c4984f; -[SCAdAutofillSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c49480(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar1 = param_1;
  FUN_105c49850();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c3560;
  _objc_alloc();
  lVar1 = param_1;
  func_0x000105c49874();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112732b48;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar19;
  func_0x00010c113e60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112732b40;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar20;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112732b4c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar21;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000105c49874();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112732b50;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar22;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
    lVar23 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112732b54;
    _objc_loadWeakRetained();
    lVar23 = param_1 + _DAT_112732b58;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar23;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  FUN_105c49850();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112732b5c;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar25;
  func_0x00010c156d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fc00(puVar5,param_2,lVar4,param_1,lVar3,lVar6,lVar7,lVar9,lVar12,lVar13,lVar24,
                      lVar15,lVar17,lVar18);
  _objc_release(lVar18);
  _objc_release(lVar25);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar23);
  _objc_release(lVar24);
  _objc_release(lVar13);
  _objc_release(lVar22);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar21);
  _objc_release(lVar7);
  _objc_release(lVar20);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112732b34;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105c49850; end: 105c49897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c49850(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112732b38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c49898; end: 105c498e3; -[SCAdAutofillSettingsEntryPoint browserSettingsViewControllerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c49898(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112732b34;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1fc0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c498e4; end: 105c49987; -[SCAdAutofillSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c498e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732b5c);
  _objc_destroyWeak(param_1 + _DAT_112732b58);
  _objc_destroyWeak(param_1 + _DAT_112732b54);
  _objc_destroyWeak(param_1 + _DAT_112732b50);
  _objc_destroyWeak(param_1 + _DAT_112732b4c);
  _objc_destroyWeak(param_1 + _DAT_112732b48);
  _objc_destroyWeak(param_1 + _DAT_112732b44);
  _objc_destroyWeak(param_1 + _DAT_112732b40);
  _objc_destroyWeak(param_1 + _DAT_112732b3c);
  _objc_destroyWeak(param_1 + _DAT_112732b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732b34);
  return;
}



/* Entry: 105c49988; end: 105c49d6f; -[SCBrowserSettingsViewController initWithValdiRuntime:delegate:alertPresenterFactory:browserPrivacyConsentInfoManager:webBrowsingConfigProvider:navigationDelegate:notificationPresenterFactory:circumstanceEngine:valdiCOFStoresServices:deckHierarchyFactory:valdiRuntimeProvider:webBrowsingSecureGuard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c49988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126ec7f8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112732b60;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_3;
    _objc_release(uVar3);
    _objc_storeWeak((undefined *)((long)puVar2 + (long)_DAT_112732b64),param_4);
    lVar8 = (long)_DAT_112732b68;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_9;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112732b6c;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112732b70;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_10;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112732b74;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_11;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112732b78;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_6;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112732b7c;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_7;
    _objc_release(uVar3);
    _objc_storeWeak((undefined *)((long)puVar2 + (long)_DAT_112732b80),param_8);
    lVar9 = (long)_DAT_112732b84;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_12;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112732b88;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_13;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112732b8c;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_14;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_112732b90);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112732b90) = uVar3;
    _objc_release(uVar7);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010bf1f440();
    puVar5 = puVar2;
    if (iVar1 == 0) {
      puVar4 = puVar2;
      func_0x00010bdec360(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdec340(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = (undefined8 *)PTR_PTR_1126c3568;
      func_0x00010c0b7ae0(PTR_PTR_1126c3568);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf4640(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126c3570;
    _objc_alloc();
    func_0x00010c061d40();
    lVar8 = (long)_DAT_112732b94;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar6;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c295200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c3578);
    func_0x00010c1275a0(uVar3);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105c49d70; end: 105c49dd3;  */

void FUN_105c49d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3578;
  _objc_alloc(PTR_PTR_1126c3578);
  puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_opt_new(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x00010c014100(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c49dd4; end: 105c49de3; -[SCBrowserSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c49dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112732b94));
  return;
}



/* Entry: 105c49de4; end: 105c49e43; -[SCBrowserSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c49de4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112732b64;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf21820();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126ec7f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c49e44; end: 105c49e7b; -[SCBrowserSettingsViewController _createComponentViewModel] */

void FUN_105c49e44(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3580;
  _objc_opt_new(PTR_PTR_1126c3580);
  func_0x00010c1a1620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c49e7c; end: 105c4a1f7; -[SCBrowserSettingsViewController _createComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c49e7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126c3588;
  _objc_opt_new(PTR_PTR_1126c3588);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732b74);
  func_0x00010bf3f680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  lVar4 = param_1 + _DAT_112732b80;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112732b6c);
  func_0x00010c0b7600(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112732b68);
  func_0x00010c0b75e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4c0(puVar2);
  _objc_release(uVar6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c4a1f8;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c17c7c0(puVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105c4a278;
  puStack_b8 = &UNK_110848ca8;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c1a3760(puVar2);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x105c4a2e8;
  puStack_e0 = &UNK_11089ef40;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c21c6c0(puVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112732b84);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf553a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a240(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar7);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105c4a34c;
  puStack_108 = &UNK_1108434b0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c18f360(puVar2);
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c17c0c0(puVar2);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c4a1f8; end: 105c4a26f;  */

void FUN_105c4a1f8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105c4a270;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105c4a270; end: 105c4a277;  */

void FUN_105c4a270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onClearCache_112577a80);
  return;
}



/* Entry: 105c4a278; end: 105c4a34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c4a278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112732b78);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfc9140();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105c4a34c; end: 105c4a403;  */

void FUN_105c4a34c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x105c4a3c4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105c4a404; end: 105c4a487;  */

void FUN_105c4a404(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b1588;
  _objc_opt_new(PTR_PTR_1126b1588);
  func_0x00010bfbb700();
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    puVar3 = puVar1;
    func_0x00010be1d100(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c4a488; end: 105c4a5cf; -[SCBrowserSettingsViewController _createSwiftComponentContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4a488(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126c3568;
  param_1 = param_1 + _DAT_112732b80;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0b7080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_70);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c4a5d0; end: 105c4a647;  */

void FUN_105c4a5d0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105c4a648;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105c4a648; end: 105c4a64f;  */

void FUN_105c4a648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onClearCache_112577a80);
  return;
}



/* Entry: 105c4a650; end: 105c4a71b; -[SCBrowserSettingsViewController _getAuthorizePromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4a650(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732b8c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf11140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105c4a71c;
  puStack_50 = &UNK_110860818;
  puStack_48 = puVar1;
  func_0x00010c297260(uVar3,param_2,&puStack_68,*(undefined8 *)(param_1 + _DAT_112732b90));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c4a71c; end: 105c4a72f;  */

void FUN_105c4a71c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithError__1125cc760);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,param_2);
  return;
}



/* Entry: 105c4a730; end: 105c4a73b; -[SCBrowserSettingsViewController _onClearCache] */

void FUN_105c4a730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4f58,PTR_s_clearBrowserCachesAndCookies_1125ac450);
  return;
}



/* Entry: 105c4a73c; end: 105c4a833; -[SCBrowserSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4a73c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732b90,0);
  _objc_storeStrong(param_1 + _DAT_112732b8c,0);
  _objc_storeStrong(param_1 + _DAT_112732b88,0);
  _objc_storeStrong(param_1 + _DAT_112732b84,0);
  _objc_storeStrong(param_1 + _DAT_112732b74,0);
  _objc_storeStrong(param_1 + _DAT_112732b70,0);
  _objc_storeStrong(param_1 + _DAT_112732b68,0);
  _objc_destroyWeak(param_1 + _DAT_112732b80);
  _objc_storeStrong(param_1 + _DAT_112732b7c,0);
  _objc_storeStrong(param_1 + _DAT_112732b78,0);
  _objc_storeStrong(param_1 + _DAT_112732b6c,0);
  _objc_destroyWeak(param_1 + _DAT_112732b64);
  _objc_storeStrong(param_1 + _DAT_112732b60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732b94,0);
  return;
}



/* Entry: 105c4a834; end: 105c4ac77; -[SCAdLifestyleAndInterestsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4a834(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112732bb4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar3 = PTR_PTR_1126c3598;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112732bbc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar14;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_105c4ac78();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112732bc0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar15;
  func_0x00010c228180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112732bb0;
    _objc_loadWeakRetained(lVar17);
  }
  lVar8 = lVar17;
  func_0x00010bf398e0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112732bb8;
    _objc_loadWeakRetained(lVar16);
  }
  lVar9 = lVar16;
  func_0x00010c1067a0(lVar16);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000105c4ac9c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f460();
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar16);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar12 = PTR_PTR_1126c35a0;
  _objc_alloc(PTR_PTR_1126c35a0);
  lVar14 = param_1;
  FUN_105c4ac78();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000105c4ac9c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112732ba4;
    _objc_loadWeakRetained(lVar15);
  }
  lVar7 = lVar15;
  func_0x00010bef5b80(lVar15);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112732bac;
    _objc_loadWeakRetained(lVar17);
  }
  lVar8 = lVar17;
  func_0x00010bef2520(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000105c4acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b60(puVar12);
  _objc_release(lVar16);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar14);
  puVar13 = PTR_PTR_1126c35a8;
  _objc_alloc(PTR_PTR_1126c35a8);
  func_0x00010c038a60();
  func_0x00010c21e940(puVar12);
  lVar14 = param_1;
  func_0x000105c4acc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_storeWeak(param_1 + _DAT_112732b98,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105c4ac78; end: 105c4ace3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ac78(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112732ba0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c4ace4; end: 105c4ad1f; -[SCAdLifestyleAndInterestsEntryPoint end] */

void FUN_105c4ace4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec800;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c4ad20; end: 105c4adc3; -[SCAdLifestyleAndInterestsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c4ad20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732bc0);
  _objc_destroyWeak(param_1 + _DAT_112732bbc);
  _objc_destroyWeak(param_1 + _DAT_112732bb8);
  _objc_destroyWeak(param_1 + _DAT_112732bb4);
  _objc_destroyWeak(param_1 + _DAT_112732bb0);
  _objc_destroyWeak(param_1 + _DAT_112732bac);
  _objc_destroyWeak(param_1 + _DAT_112732ba8);
  _objc_destroyWeak(param_1 + _DAT_112732ba4);
  _objc_destroyWeak(param_1 + _DAT_112732ba0);
  _objc_destroyWeak(param_1 + _DAT_112732b9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732b98);
  return;
}



/* Entry: 105c4adc4; end: 105c4af4f; -[SCAdSettingsService initWithRequestManager:settingsMetricsManager:circumstanceEngine:applicationPreferences:snapTokenProvider:] */

undefined1 *
FUN_105c4adc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ec808;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


