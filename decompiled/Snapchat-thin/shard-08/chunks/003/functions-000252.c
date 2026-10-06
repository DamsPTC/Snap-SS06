/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106057520; end: 1060575c3; -[SCSessionManagementRowProvider initWithSessionManagementScopeExposer:sessionManagementScopeServices:] */

undefined1 *
FUN_106057520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060575c4; end: 1060575d3; -[SCSessionManagementRowProvider sectionRow] */

void FUN_1060575c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,0x13);
  return;
}



/* Entry: 1060575d4; end: 1060576c3; -[SCSessionManagementRowProvider rowViewModel] */

void FUN_1060575d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_PTR_1126ae750;
  puVar5 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  FUN_106057e14();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_106057e14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1,param_2,puVar2,0,0,0,1,&PTR____CFConstantStringClassReference_110e3aaf8
                      ,puVar3);
  func_0x00010c0ec800(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060576c4; end: 10605776f; -[SCSessionManagementRowProvider handleWithContext:] */

void FUN_1060576c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf24220(uVar2,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106057770; end: 1060577b7; -[SCSessionManagementRowProvider sessionManagementPageDismissed] */

void FUN_106057770(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1060577b8; end: 1060577e7; -[SCSessionManagementRowProvider .cxx_destruct] */

void FUN_1060577b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060577e8; end: 1060579c7; -[SCSessionManagementViewController initWithValdiRuntimeProvider:composerCoreUIServices:blizzardLogger:webBrowsingScopeExposer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060577e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  undefined *puStack_68;
  
  plVar2 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar6 = (long)_DAT_11273db7c;
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_5;
  _objc_retain(param_3);
  _objc_release(uVar4);
  lVar6 = (long)_DAT_11273db80;
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_4;
  _objc_release(uVar4);
  lVar6 = (long)_DAT_11273db84;
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_6;
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = (long)_DAT_11273db88;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar1);
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
  }
  lVar6 = param_1;
  func_0x00010bdf57c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11273db8c;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar6;
  _objc_release(uVar4);
  puStack_68 = PTR_PTR_1126ef550;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_initWithValdiView__1125f5a88,*(undefined8 *)(param_1 + lVar5)
                     );
  if (plVar2 != (long *)0x0) {
    func_0x00010c1c1bc0(puVar3);
    lVar6 = (long)_DAT_11273db90;
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)((long)plVar2 + lVar6);
    *(undefined **)((long)plVar2 + lVar6) = puVar3;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)plVar2 + (long)_DAT_11273db94),param_7);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)plVar2;
}



/* Entry: 1060579c8; end: 106057bc7; -[SCSessionManagementViewController _createView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060579c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (*(long *)(param_1 + _DAT_11273db88) == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273db98);
    *(undefined **)(param_1 + _DAT_11273db98) = puVar6;
    _objc_release(uVar5);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273db80);
    func_0x00010beff660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126c7578;
    _objc_alloc();
    puVar3 = PTR_PTR_1126b0380;
    func_0x00010c291260(PTR_PTR_1126b0380);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a860(puVar6,param_2,puVar3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273db9c);
    *(undefined **)(param_1 + _DAT_11273db9c) = puVar6;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar6 = PTR_PTR_1126c7580;
    _objc_alloc();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106057bc8;
    puStack_60 = &UNK_110842e18;
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273db7c);
    lStack_58 = param_1;
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031440(puVar6,param_2,&puStack_78,uVar2,uVar5);
    lVar7 = (long)_DAT_11273dba0;
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar6;
    _objc_release(uVar1);
    _objc_release(uVar5);
    lVar4 = param_1;
    func_0x00010beb15e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224e20(*(undefined8 *)(param_1 + lVar7),param_2,lVar4);
    _objc_release(lVar4);
    puVar6 = PTR_PTR_1126c7588;
    _objc_alloc(PTR_PTR_1126c7588);
    func_0x00010c061d40();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106057bc8; end: 106057bcf;  */

void FUN_106057bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onDismissButtonTapped_112577d40);
  return;
}



/* Entry: 106057bd0; end: 106057c27; -[SCSessionManagementViewController _onDismissButtonTapped] */

void FUN_106057bd0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106057c28;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106057c28; end: 106057c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106057c28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11273db94;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c160240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106057c68; end: 106057d1b; -[SCSessionManagementViewController _setupWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106057c68(void)

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



/* Entry: 106057d1c; end: 106057d27; -[SCSessionManagementViewController defaultProjectNameV2] */

undefined ** FUN_106057d1c(void)

{
  return &PTR____CFConstantStringClassReference_110e3ab18;
}



/* Entry: 106057d28; end: 106057e13; -[SCSessionManagementViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106057d28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273db84,0);
  _objc_storeStrong(param_1 + _DAT_11273db7c,0);
  _objc_storeStrong(param_1 + _DAT_11273db80,0);
  _objc_storeStrong(param_1 + _DAT_11273db98,0);
  _objc_storeStrong(param_1 + _DAT_11273dba4,0);
  _objc_storeStrong(param_1 + _DAT_11273db88,0);
  _objc_storeStrong(param_1 + _DAT_11273db90,0);
  _objc_storeStrong(param_1 + _DAT_11273dba8,0);
  _objc_storeStrong(param_1 + _DAT_11273dbac,0);
  _objc_storeStrong(param_1 + _DAT_11273db8c,0);
  _objc_storeStrong(param_1 + _DAT_11273dba0,0);
  _objc_storeStrong(param_1 + _DAT_11273db9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273db94);
  return;
}



/* Entry: 106057e14; end: 106057e2b;  */

void FUN_106057e14(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3aaf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3aaf8,
                      &PTR____CFConstantStringClassReference_110e3ab38,0);
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



/* Entry: 106057e2c; end: 106057e37; +[SCCSessionManagementSessionManagementComponent componentPath] */

undefined ** FUN_106057e2c(void)

{
  return &PTR____CFConstantStringClassReference_110e3ab58;
}



/* Entry: 106057e38; end: 106057e6b; -[SCCSessionManagementSessionManagementComponent initWithViewModel:componentContext:runtime:] */

void FUN_106057e38(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef558;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106057e6c; end: 106057ebb; -[SCCSessionManagementSessionManagementComponent setViewModel:] */

void FUN_106057e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106057ebc; end: 106057eff; -[SCCSessionManagementSessionManagementComponent viewModel] */

void FUN_106057ebc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106057f00; end: 106057f9b; -[SCCSessionManagementSessionManagementContext initWithOnDismissButtonTapped:alertPresenter:blizzardLogger:] */

undefined8 *
FUN_106057f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ef560;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106057f9c; end: 106057fbb; +[SCCSessionManagementSessionManagementContext valdiMarshallableObjectDescriptor] */

void FUN_106057f9c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_110909b78;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_110909bf0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106057fbc; end: 106057ff7; -[SCCSessionManagementSessionManagementViewModel initWithUserAgentString:] */

void FUN_106057fbc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef568;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106057ff8; end: 10605800f; +[SCCSessionManagementSessionManagementViewModel valdiMarshallableObjectDescriptor] */

void FUN_106057ff8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110909c10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106058010; end: 106058117; -[GenerateRecoveryCodePasswordViewController initWithUserSession:emailInfoProvider:reauthenticationService:searchabilityService:passwordNetworkRequester:settingsEventLogger:userPhoneVerificationScopeExposer:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106058010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ef570;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserSession_emailInfoPro_11252e928,param_3,param_4,0,
                      param_6,param_8,param_7,param_9,param_10);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11273dbb0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dbb4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106058118; end: 10605811f; -[GenerateRecoveryCodePasswordViewController pageViewName] */

undefined8 FUN_106058118(void)

{
  return 0xf4;
}



/* Entry: 106058120; end: 106058123; -[GenerateRecoveryCodePasswordViewController getTitle] */

void FUN_106058120(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3ac98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3ac98,
                      &PTR____CFConstantStringClassReference_110e3af18,0);
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



/* Entry: 106058124; end: 106058127; -[GenerateRecoveryCodePasswordViewController getInfo] */

void FUN_106058124(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3b1b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3b1b8,
                      &PTR____CFConstantStringClassReference_110e3af18,0);
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



/* Entry: 106058128; end: 10605828b; -[GenerateRecoveryCodePasswordViewController continueButtonBarPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c24e680(param_1);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10605828c;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar2 = &puStack_80;
  _objc_retainBlock(ppuVar2);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10605836c;
  puStack_90 = &UNK_110870850;
  _objc_copyWeak(auStack_88,auStack_58);
  ppuVar3 = &puStack_a8;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273dbb0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121fc0();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10605828c; end: 10605836b;  */

void FUN_10605828c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a00();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1049a0();
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10605836c; end: 1060583cf;  */

void FUN_10605836c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010c1ad320(param_1,param_2,param_3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060583d0; end: 1060583d7; -[GenerateRecoveryCodePasswordViewController disableLeftSwipe] */

undefined8 FUN_1060583d0(void)

{
  return 1;
}



/* Entry: 1060583d8; end: 1060583e3; -[GenerateRecoveryCodePasswordViewController defaultProjectNameV3] */

void FUN_1060583d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 1060583e4; end: 1060583ef; -[GenerateRecoveryCodePasswordViewController defaultProjectNameV2] */

void FUN_1060583e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 1060583f0; end: 10605842f; -[GenerateRecoveryCodePasswordViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060583f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dbb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dbb0,0);
  return;
}



/* Entry: 106058430; end: 1060585b7; -[SCTwoFaServiceClient initWithPerformer:unifiedGRPCClientFactory:] */

undefined1 *
FUN_106058430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef578;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_retain(uVar4);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c7590;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060585b8; end: 106058637; -[SCTwoFaServiceClient getTwoFaSettingsWithRequest:completion:] */

void FUN_1060585b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae748;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb7c0(uVar2,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106058638; end: 106058673; -[SCTwoFaServiceClient .cxx_destruct] */

void FUN_106058638(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106058674; end: 1060586c3; -[SCTwoFAErrorView initWithFrame:] */

undefined1 * FUN_106058674(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef580;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060586c4; end: 10605871f; -[SCTwoFAErrorView populateWithError:] */

void FUN_1060586c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1972e0(param_1,param_2,param_3);
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106058720; end: 106058daf; -[SCTwoFAErrorView _setupViews] */

void FUN_106058720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c197140(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010bf98ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_80 = uVar5;
  func_0x00010bf98ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  uStack_78 = uVar9;
  func_0x00010bf98ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf98ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed900(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c13f440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13f440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c13f440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf98ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493c0(0x403e000000000000,uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uStack_a0 = uVar6;
  func_0x00010c13f440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  uStack_98 = uVar10;
  func_0x00010c13f440();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  uStack_90 = uVar15;
  func_0x00010c13f440();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf49500(uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13f440(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001060783e4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c13f440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106058db0; end: 106058de7; -[SCTwoFAErrorView _retryButtonTapped] */

void FUN_106058db0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7d380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106058de8; end: 106058e07; -[SCTwoFAErrorView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058de8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273dbc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106058e08; end: 106058e1b; -[SCTwoFAErrorView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058e08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273dbc4,param_3);
  return;
}



/* Entry: 106058e1c; end: 106058e2b; -[SCTwoFAErrorView errorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106058e1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dbc8);
}



/* Entry: 106058e2c; end: 106058e6b; -[SCTwoFAErrorView setErrorLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dbc8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106058e6c; end: 106058e7b; -[SCTwoFAErrorView retryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106058e6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dbcc);
}



/* Entry: 106058e7c; end: 106058ebb; -[SCTwoFAErrorView setRetryButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dbcc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106058ebc; end: 106058ecb; -[SCTwoFAErrorView errorString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106058ebc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dbd0);
}



/* Entry: 106058ecc; end: 106058ed7; -[SCTwoFAErrorView setErrorString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106058ed8; end: 106058f33; -[SCTwoFAErrorView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058ed8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dbd0,0);
  _objc_storeStrong(param_1 + _DAT_11273dbcc,0);
  _objc_storeStrong(param_1 + _DAT_11273dbc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273dbc4);
  return;
}



/* Entry: 106058f34; end: 10605932b; -[SCTwoFASettingsScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106058f34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar1 = param_1 + _DAT_11273dbd4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_11273dbd8);
  *(long *)(param_1 + _DAT_11273dbd8) = lVar2;
  _objc_release(uVar24);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf58be0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_11273dbdc);
  *(long *)(param_1 + _DAT_11273dbdc) = lVar1;
  _objc_release(uVar24);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10605932c;
  puStack_78 = &UNK_110909c40;
  puVar3 = PTR_PTR_1126ae720;
  lStack_70 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c75a0;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11273dbe0;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11273dc04;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11273dc08;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11273dc0c;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_11273dbfc;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_11273dbf4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0f54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11273dbf8;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11273dc00;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11273dc10;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c154a40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11273dc14;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf46520();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11273dc1c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c2280e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + _DAT_11273dc20);
  _objc_retain(uVar26);
  lVar22 = param_1 + _DAT_11273dc18;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044e80(puVar4,param_2,puVar3,0x124,puVar5,lVar6,lVar7,lVar25,lVar8,lVar9,lVar11,
                      lVar13,lVar15,lVar17,lVar19,lVar21,uVar26,lVar23);
  lVar27 = (long)_DAT_11273dbe4;
  uVar24 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar4;
  _objc_release(uVar24);
  _objc_release(uVar26);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar25);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(puVar5);
  func_0x00010c1fe4c0(*(undefined8 *)(param_1 + lVar27),param_2,param_1);
  lVar2 = param_1;
  FUN_106059370();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0d5e20();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11273dbe8;
  uVar24 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar1;
  _objc_release(uVar24);
  _objc_release(lVar2);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar25),param_2,*(undefined8 *)(param_1 + lVar27));
  _objc_release(puVar3);
  return;
}



/* Entry: 10605932c; end: 10605936f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605932c(void)

{
  _objc_alloc(PTR_PTR_1126c7598);
  func_0x00010c0351e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106059370; end: 106059393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106059370(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273dbf0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106059394; end: 1060593fb; -[SCTwoFASettingsScopeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106059394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11273dbe8;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ef588;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060593fc; end: 10605948f; -[SCTwoFASettingsScopeEntryPoint createServicePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060593fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11273dbec;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106059490; end: 1060594d7; -[SCTwoFASettingsScopeEntryPoint settingFinished] */

void FUN_106059490(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_106059370();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2280a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dbc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060594d8; end: 1060594db; -[SCTwoFASettingsScopeEntryPoint settingDismissed] */

void FUN_1060594d8(void)

{
  return;
}



/* Entry: 1060594dc; end: 10605961f; -[SCTwoFASettingsScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060594dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dc20,0);
  _objc_destroyWeak(param_1 + _DAT_11273dc1c);
  _objc_destroyWeak(param_1 + _DAT_11273dc18);
  _objc_destroyWeak(param_1 + _DAT_11273dbe0);
  _objc_destroyWeak(param_1 + _DAT_11273dbec);
  _objc_destroyWeak(param_1 + _DAT_11273dbd4);
  _objc_destroyWeak(param_1 + _DAT_11273dc14);
  _objc_destroyWeak(param_1 + _DAT_11273dc10);
  _objc_destroyWeak(param_1 + _DAT_11273dc0c);
  _objc_destroyWeak(param_1 + _DAT_11273dc08);
  _objc_destroyWeak(param_1 + _DAT_11273dc04);
  _objc_destroyWeak(param_1 + _DAT_11273dc00);
  _objc_destroyWeak(param_1 + _DAT_11273dbfc);
  _objc_destroyWeak(param_1 + _DAT_11273dbf8);
  _objc_destroyWeak(param_1 + _DAT_11273dbf4);
  _objc_destroyWeak(param_1 + _DAT_11273dbf0);
  _objc_storeStrong(param_1 + _DAT_11273dc24,0);
  _objc_storeStrong(param_1 + _DAT_11273dbe4,0);
  _objc_storeStrong(param_1 + _DAT_11273dc28,0);
  _objc_storeStrong(param_1 + _DAT_11273dbd8,0);
  _objc_storeStrong(param_1 + _DAT_11273dbdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dbe8,0);
  return;
}



/* Entry: 106059620; end: 10605966f; -[SCTwoFAVerifiedDeviceCell initWithStyle:reuseIdentifier:] */

undefined1 * FUN_106059620(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef590;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106059670; end: 1060596bb; -[SCTwoFAVerifiedDeviceCell prepareForReuse] */

void FUN_106059670(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef590;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bea4d40(param_1);
  return;
}



/* Entry: 1060596bc; end: 1060598af; -[SCTwoFAVerifiedDeviceCell populateWithDevice:] */

void FUN_1060596bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010c18c700(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf70c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_1060783cc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf70c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c0894c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5960(puVar3,param_2,uVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010607866c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  func_0x00010bea4d40(param_1,param_2,0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1060598b0; end: 10605a1bf; -[SCTwoFAVerifiedDeviceCell _setupView] */

void FUN_1060598b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c1fbac0(param_1);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea440(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf33880();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c12b540();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_c8 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_d8 = uVar2;
  uStack_90 = uVar2;
  func_0x00010c12b540();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_f0 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_108 = uVar3;
  uStack_88 = uVar3;
  func_0x00010c12b540();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_118 = uVar2;
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  uStack_80 = uVar2;
  func_0x00010c12b540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc();
  func_0x00010bff0f20();
  func_0x00010c207e20(param_1);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c249ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_1;
  func_0x00010c249ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = param_1;
  func_0x00010c249ec0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_c8 = uVar4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_d8 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010c249ec0();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_f0 = uVar3;
  func_0x00010c12b540();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  uStack_108 = uVar3;
  uStack_a8 = uVar3;
  func_0x00010c249ec0();
  _objc_retainAutoreleasedReturnValue();
  uStack_110 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  uStack_118 = uVar9;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_a0 = uVar9;
  func_0x00010c249ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  lVar16 = 0;
  uVar3 = param_1;
  func_0x00010bea4d40(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10605a1c0;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = uVar2;
  uStack_168 = uVar9;
  uStack_160 = uVar7;
  uStack_158 = uVar8;
  puStack_150 = puVar1;
  uStack_148 = uVar6;
  uStack_140 = uVar5;
  uStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(lVar16);
  puVar10 = auStack_190;
  _objc_initWeak(puVar10,uVar3);
  puVar1 = PTR_PTR_1126af180;
  func_0x000106078bdc();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_198,auStack_190);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar11 = PTR_PTR_1126af180;
  func_0x00010607845c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar12 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x0001060786fc();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x0001060786e4();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_188 = puVar1;
  puStack_180 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar12);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_190);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_198);
  _objc_destroyWeak(auStack_190);
  __Unwind_Resume(lVar16);
  lVar16 = lVar16 + 0x20;
  _objc_loadWeakRetained(lVar16);
  func_0x00010be71d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar16);
  return;
}



/* Entry: 10605a1c0; end: 10605a3f7; -[SCTwoFAVerifiedDeviceCell _removeButtonPressed:] */

void FUN_10605a1c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126af180;
  func_0x000106078bdc();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126af180;
  func_0x00010607845c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0001060786fc();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x0001060786e4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be71d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10605a3f8; end: 10605a423;  */

void FUN_10605a3f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10605a424; end: 10605a433;  */

void FUN_10605a424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 10605a434; end: 10605a4c7; -[SCTwoFAVerifiedDeviceCell _setIsLoading:] */

void FUN_10605a434(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c249ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c2558c0();
  }
  else {
    func_0x00010c24dbc0();
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c249ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c12b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10605a4c8; end: 10605a52b; -[SCTwoFAVerifiedDeviceCell _performForgetOneDevice] */

void FUN_10605a4c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bea4d40(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb55e0(uVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10605a52c; end: 10605a54b; -[SCTwoFAVerifiedDeviceCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605a52c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273dc2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10605a54c; end: 10605a55f; -[SCTwoFAVerifiedDeviceCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605a54c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273dc2c,param_3);
  return;
}



/* Entry: 10605a560; end: 10605a56f; -[SCTwoFAVerifiedDeviceCell removeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10605a560(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dc30);
}



/* Entry: 10605a570; end: 10605a5af; -[SCTwoFAVerifiedDeviceCell setRemoveButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605a570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dc30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10605a5b0; end: 10605a5bf; -[SCTwoFAVerifiedDeviceCell spinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10605a5b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dc34);
}



/* Entry: 10605a5c0; end: 10605a5ff; -[SCTwoFAVerifiedDeviceCell setSpinner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605a5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dc34;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10605a600; end: 10605a60f; -[SCTwoFAVerifiedDeviceCell device] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10605a600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dc38);
}



/* Entry: 10605a610; end: 10605a64f; -[SCTwoFAVerifiedDeviceCell setDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605a610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dc38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10605a650; end: 10605a6ab; -[SCTwoFAVerifiedDeviceCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605a650(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dc38,0);
  _objc_storeStrong(param_1 + _DAT_11273dc34,0);
  _objc_storeStrong(param_1 + _DAT_11273dc30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273dc2c);
  return;
}



/* Entry: 10605a6ac; end: 10605a81b; -[SCTwoFaSettingsRowProvider initWithTwoFASettingsScopeServices:settingsScopeExposer:] */

undefined8 *
FUN_10605a6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ef598;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeaf0;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000106078b94();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000106078b64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae6b8;
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10605a81c; end: 10605a82b; -[SCTwoFaSettingsRowProvider sectionRow] */

void FUN_10605a81c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,0xd);
  return;
}



/* Entry: 10605a82c; end: 10605a853; -[SCTwoFaSettingsRowProvider rowViewModel] */

void FUN_10605a82c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10605a854; end: 10605a8ff; -[SCTwoFaSettingsRowProvider handleWithContext:] */

void FUN_10605a854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf23460(uVar2,param_2,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10605a900; end: 10605a91f; -[SCTwoFaSettingsRowProvider twoFASettingsFinished] */

void FUN_10605a900(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10605a920; end: 10605a95b; -[SCTwoFaSettingsRowProvider .cxx_destruct] */

void FUN_10605a920(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10605a95c; end: 10605a96b; -[TwoFADisabledSettingsViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10605a95c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dc48);
}



/* Entry: 10605a96c; end: 10605a96f; -[TwoFADisabledSettingsViewController getTitle] */

void FUN_10605a96c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 10605a970; end: 10605ad1b; -[TwoFADisabledSettingsViewController initWithPageViewName:title:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10605a970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126ef5a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273dc48) = param_3;
    func_0x00010c216240(puVar1);
    lVar3 = (long)_DAT_11273dc4c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc50;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc54;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc58;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc5c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc60;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc64;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc68;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc6c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_15;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc70;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc74;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc78;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc7c;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dc80;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dc84) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273dc88) = param_6;
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10605ad1c; end: 10605ad7f; -[TwoFADisabledSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605ad1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef5a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bf8f400(param_1);
  func_0x00010bf557a0(param_1);
  func_0x00010bf56920(param_1);
  return;
}



/* Entry: 10605ad80; end: 10605adbf; -[TwoFADisabledSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605ad80(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10605adc0; end: 10605b1a7; -[TwoFADisabledSettingsViewController createInfoLabels] */

void FUN_10605adc0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  
  uVar1 = param_4;
  func_0x0001060785ac();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf56c00(param_4,param_5,uVar1,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  dVar9 = param_3 * 0.07999999821186066;
  param_3 = param_3 * 0.10000000149011612;
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10605b1a8;
  puStack_98 = &UNK_1108471b0;
  uStack_90 = param_4;
  func_0x00010c0bbfc0(puVar4,param_5,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar3,param_5,puVar6);
  _objc_release(puVar6);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  puStack_e8 = puVar2;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10605b2e8;
  puStack_d0 = &UNK_110909c90;
  _objc_retain(puVar4);
  puStack_c8 = puVar4;
  uStack_c0 = param_4;
  dStack_b8 = param_3;
  func_0x00010c0bbfc0(uVar3,param_5,&puStack_e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                      &PTR____CFConstantStringClassReference_110e3abf8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000106078564();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf56b20(dVar9,param_3,param_4,param_5,puVar6,puVar7,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                      &PTR____CFConstantStringClassReference_110e3ac18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010607857c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf56b20(dVar9,param_3,param_4,param_5,puVar6,puVar7,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                      &PTR____CFConstantStringClassReference_110e3ac38);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000106078594();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf56b20(dVar9,param_3,param_4,param_5,puVar6,puVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar8);
  puStack_120 = puVar2;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10605b50c;
  puStack_108 = &UNK_11084fc88;
  uStack_100 = uVar1;
  uStack_f8 = param_4;
  puStack_f0 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(uVar1);
  func_0x00010c0bbfc0(puVar5,param_5,&puStack_120);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puStack_f0);
  _objc_release(uStack_100);
  _objc_release(uVar1);
  _objc_release(puStack_c8);
  _objc_release(puVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10605b1a8; end: 10605b2e7;  */

void FUN_10605b1a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10605b2e8; end: 10605b50b;  */

void FUN_10605b2e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(-*(double *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10605b50c; end: 10605b71b;  */

void FUN_10605b50c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bbf20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10605b71c; end: 10605b99b; -[TwoFADisabledSettingsViewController createItemWithEmoji:description:belowView:topMargin:sideMargin:] */

void FUN_10605b71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c7340(0x4040000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf56c00(param_3,param_4,param_5,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf56c00(param_3,param_4,param_6,puVar1,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(uVar3,param_4,puVar1);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x4020000000000000;
  if (puVar5 != (undefined *)0x1) {
    uStack_78 = 0;
  }
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10605b99c;
  puStack_a8 = &UNK_110909cc0;
  uStack_a0 = param_7;
  uStack_98 = uVar3;
  uStack_90 = param_3;
  uStack_88 = param_1;
  uStack_80 = param_2;
  _objc_retain(uVar3);
  _objc_retain(param_7);
  func_0x00010c0bbfc0(uVar2,param_4,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x10605bcbc;
  puStack_d8 = &UNK_11084fc28;
  uStack_d0 = param_3;
  uStack_c8 = param_2;
  func_0x00010c0bbfc0(uVar3,param_4,&puStack_f0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uVar3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10605b99c; end: 10605bda7;  */

void FUN_10605b99c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x38));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bbf80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(-*(double *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10605bda8; end: 10605be57; -[TwoFADisabledSettingsViewController createLabelWithText:font:textAlignment:] */

void FUN_10605bda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c212f20();
  _objc_release(param_3);
  func_0x00010c19e480(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c213040(puVar1,param_2,param_5);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10605be58; end: 10605c27b; -[TwoFADisabledSettingsViewController createContinueButton] */

void FUN_10605be58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1837a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x0001060784a4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10605c27c; end: 10605c27f; -[TwoFADisabledSettingsViewController continueButtonPressed] */

void FUN_10605c27c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentTwoFAWarningView_112621508);
  return;
}



/* Entry: 10605c280; end: 10605c287; -[TwoFADisabledSettingsViewController disableLeftSwipe] */

undefined8 FUN_10605c280(void)

{
  return 0;
}



/* Entry: 10605c288; end: 10605c3bf; -[TwoFADisabledSettingsViewController presentTwoFAWarningView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605c288(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c75b0;
  _objc_alloc(PTR_PTR_1126c75b0);
  puVar2 = puVar1;
  func_0x0001060789b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033620(puVar1,param_2,300,puVar2,*(undefined1 *)(param_1 + _DAT_11273dc84),
                      *(undefined1 *)(param_1 + _DAT_11273dc88),
                      *(undefined8 *)(param_1 + _DAT_11273dc4c),
                      *(undefined8 *)(param_1 + _DAT_11273dc50),
                      *(undefined8 *)(param_1 + _DAT_11273dc54),
                      *(undefined8 *)(param_1 + _DAT_11273dc58),
                      *(undefined8 *)(param_1 + _DAT_11273dc5c),
                      *(undefined8 *)(param_1 + _DAT_11273dc60),
                      *(undefined8 *)(param_1 + _DAT_11273dc64),
                      *(undefined8 *)(param_1 + _DAT_11273dc68),
                      *(undefined8 *)(param_1 + _DAT_11273dc6c),
                      *(undefined8 *)(param_1 + _DAT_11273dc70),
                      *(undefined8 *)(param_1 + _DAT_11273dc74),
                      *(undefined8 *)(param_1 + _DAT_11273dc78),
                      *(undefined8 *)(param_1 + _DAT_11273dc7c));
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe4c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10605c3c0; end: 10605c3cb; -[TwoFADisabledSettingsViewController defaultProjectNameV3] */

void FUN_10605c3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 10605c3cc; end: 10605c3d7; -[TwoFADisabledSettingsViewController defaultProjectNameV2] */

void FUN_10605c3cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}


