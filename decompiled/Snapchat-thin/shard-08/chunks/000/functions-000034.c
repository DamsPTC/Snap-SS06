/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c443e8; end: 105c443f3; +[SCCRecentlyActiveIndicatorSettingsView componentPath] */

undefined ** FUN_105c443e8(void)

{
  return &PTR____CFConstantStringClassReference_110e23698;
}



/* Entry: 105c443f4; end: 105c44427; -[SCCRecentlyActiveIndicatorSettingsView initWithViewModel:componentContext:runtime:] */

void FUN_105c443f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec720;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c44428; end: 105c44477; -[SCCRecentlyActiveIndicatorSettingsView setViewModel:] */

void FUN_105c44428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c44478; end: 105c444bb; -[SCCRecentlyActiveIndicatorSettingsView viewModel] */

void FUN_105c44478(undefined8 param_1)

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



/* Entry: 105c444bc; end: 105c44573; -[SCCRecentlyActiveIndicatorContext initWithRecentlyActiveIndicatorEnabledObservable:onDismissButtonTapped:onSettingsChanged:] */

undefined8 *
FUN_105c444bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126ec728;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 105c44574; end: 105c4459b; +[SCCRecentlyActiveIndicatorContext valdiMarshallableObjectDescriptor] */

void FUN_105c44574(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108df858;
  param_1[1] = &PTR_s_SCBridgeObservable_1108df8b8;
  param_1[2] = &PTR_s_ob_v_1108df828;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c4459c; end: 105c445c3;  */

undefined8 FUN_105c4459c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105c445c4; end: 105c44643;  */

void FUN_105c445c4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c44690;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c44644; end: 105c44677; -[SCCRecentlyActiveIndicatorSettingsViewModel init] */

void FUN_105c44644(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec730;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105c44678; end: 105c4468f; +[SCCRecentlyActiveIndicatorSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c44678(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108df8c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c44690; end: 105c446bf;  */

void FUN_105c44690(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c446c0; end: 105c446cb; -[SCFeatureSettingsService isRecentlyActiveIndicatorEnabled] */

void FUN_105c446c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e236b8);
  return;
}



/* Entry: 105c446cc; end: 105c446d7; -[SCFeatureSettingsService recentlyActiveIndicatorEnabledServerParam] */

undefined ** FUN_105c446cc(void)

{
  return &PTR____CFConstantStringClassReference_110e236b8;
}



/* Entry: 105c446d8; end: 105c446e7; -[SCFeatureSettingsService setRecentlyActiveIndicatorEnabled:] */

void FUN_105c446d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e236b8,param_3);
  return;
}



/* Entry: 105c446e8; end: 105c446ef; -[SCFeatureSettingsService recently_active_indicator_toggle_client_value:] */

undefined * FUN_105c446e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105c446f0; end: 105c446f7; -[SCFeatureSettingsService recently_active_indicator_toggle_server_value:] */

void FUN_105c446f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c446f8; end: 105c44707; -[SCFeatureSettingsService recentlyActiveIndicatorEnabled] */

void FUN_105c446f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e236b8,1);
  return;
}



/* Entry: 105c44708; end: 105c44713; -[SCFeatureSettingsService isRecentlyActiveIndicatorHasForceDisabledByDefault] */

void FUN_105c44708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e236d8);
  return;
}



/* Entry: 105c44714; end: 105c4471f; -[SCFeatureSettingsService recentlyActiveIndicatorHasForceDisabledByDefaultServerParam] */

undefined ** FUN_105c44714(void)

{
  return &PTR____CFConstantStringClassReference_110e236d8;
}



/* Entry: 105c44720; end: 105c4472f; -[SCFeatureSettingsService setRecentlyActiveIndicatorHasForceDisabledByDefault:] */

void FUN_105c44720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e236d8,param_3);
  return;
}



/* Entry: 105c44730; end: 105c44737; -[SCFeatureSettingsService recently_active_indicator_has_force_disabled_by_default_client_value:] */

undefined * FUN_105c44730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105c44738; end: 105c4473f; -[SCFeatureSettingsService recently_active_indicator_has_force_disabled_by_default_server_value:] */

void FUN_105c44738(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c44740; end: 105c4474f; -[SCFeatureSettingsService recentlyActiveIndicatorHasForceDisabledByDefault] */

void FUN_105c44740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e236d8,0);
  return;
}



/* Entry: 105c44750; end: 105c4475b; +[SCCSettingsFindFriendsView componentPath] */

undefined ** FUN_105c44750(void)

{
  return &PTR____CFConstantStringClassReference_110e236f8;
}



/* Entry: 105c4475c; end: 105c4478f; -[SCCSettingsFindFriendsView initWithViewModel:componentContext:runtime:] */

void FUN_105c4475c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec738;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c44790; end: 105c447df; -[SCCSettingsFindFriendsView setViewModel:] */

void FUN_105c44790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c447e0; end: 105c44823; -[SCCSettingsFindFriendsView viewModel] */

void FUN_105c447e0(undefined8 param_1)

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



/* Entry: 105c44824; end: 105c44917; -[SCCSettingsFindFriendsContext initWithOnDismissButtonTapped:openUrl:onFindFriendsChanged:onShowMeInFindFriendsChanged:] */

undefined8 *
FUN_105c44824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126ec740;
  puVar4 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105c44918; end: 105c44937; +[SCCSettingsFindFriendsContext valdiMarshallableObjectDescriptor] */

void FUN_105c44918(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_1108df928;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1108df8f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c44938; end: 105c4495f;  */

undefined8 FUN_105c44938(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105c44960; end: 105c449df;  */

void FUN_105c44960(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c44a38;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c449e0; end: 105c44a1f; -[SCCSettingsFindFriendsViewModel initWithFindFriendsSettingEligible:findFriendsEnabled:showMeInFindFriendsEnabled:] */

void FUN_105c449e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec748;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105c44a20; end: 105c44a37; +[SCCSettingsFindFriendsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c44a20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108df9a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c44a38; end: 105c44a67;  */

void FUN_105c44a38(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c44a68; end: 105c44a73; +[SCCMutualFriendsSettingsPage componentPath] */

undefined ** FUN_105c44a68(void)

{
  return &PTR____CFConstantStringClassReference_110e23718;
}



/* Entry: 105c44a74; end: 105c44aa7; -[SCCMutualFriendsSettingsPage initWithViewModel:componentContext:runtime:] */

void FUN_105c44a74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec750;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c44aa8; end: 105c44af7; -[SCCMutualFriendsSettingsPage setViewModel:] */

void FUN_105c44aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105c44af8; end: 105c44b3b; -[SCCMutualFriendsSettingsPage viewModel] */

void FUN_105c44af8(undefined8 param_1)

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



/* Entry: 105c44b3c; end: 105c44bd3; -[SCCMutualFriendsSettingsContext initWithOnDismissButtonTapped:openUrl:] */

undefined8 *
FUN_105c44b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126ec758;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105c44bd4; end: 105c44be3; +[SCCMutualFriendsSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_105c44bd4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismissButtonTapped_1108dfa00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c44be4; end: 105c44c17; -[SCCMutualFriendsSettingsViewModel init] */

void FUN_105c44be4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec760;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105c44c18; end: 105c44c33; +[SCCMutualFriendsSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c44c18(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddcc6d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c44c34; end: 105c44cfb; -[QuickAddPrivacySettingsViewController initWithQuickAddPrivacyProvider:quickAddPrivacyMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c44c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ec768;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112732a68;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732a6c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c44cfc; end: 105c44d03; -[QuickAddPrivacySettingsViewController pageViewName] */

undefined8 FUN_105c44cfc(void)

{
  return 0xef;
}



/* Entry: 105c44d04; end: 105c4521f; -[QuickAddPrivacySettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c44d04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ec768;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar9);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar10 = (long)_DAT_112732a70;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1eeb20(*(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8,
                      *(undefined8 *)(param_1 + lVar10));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1974c0(0x404e000000000000,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  _objc_opt_class(PTR_PTR_1126b5a18);
  func_0x00010c125fe0(uVar8);
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  uStack_a8 = uVar8;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  uStack_b8 = uVar8;
  uStack_88 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  uStack_c8 = uVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_e0 = uVar2;
  uStack_80 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar8;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(uStack_e0);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  _objc_release(uStack_a8);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar9 = (long)_DAT_112732a74;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar9));
  _objc_release();
  func_0x000105c4617c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar9));
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(uVar8);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105c45220;
  puStack_108 = PTR_PTR_1126ec768;
  puStack_110 = puVar1;
  uStack_100 = uVar8;
  puStack_f8 = puVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_110,PTR_s_viewDidLoad_112684cd8);
  puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010be86660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112732a78);
  *(undefined **)(puVar1 + _DAT_112732a78) = puVar7;
  _objc_release(uVar8);
  func_0x00010c128b60(*(undefined8 *)(puVar1 + _DAT_112732a70));
  return;
}



/* Entry: 105c45220; end: 105c452d7; -[QuickAddPrivacySettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45220(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec768;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010be86660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732a78);
  *(long *)(param_1 + _DAT_112732a78) = lVar2;
  _objc_release(uVar3);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732a70));
  return;
}



/* Entry: 105c452d8; end: 105c452db; -[QuickAddPrivacySettingsViewController getTitle] */

void FUN_105c452d8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e237b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e237b8,
                      &PTR____CFConstantStringClassReference_110e237d8,0);
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



/* Entry: 105c452dc; end: 105c45367; -[QuickAddPrivacySettingsViewController _readQuickAddPrivacy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c452dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112732a68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b15b0;
    func_0x00010c0da8c0(PTR_PTR_1126b15b0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c45368; end: 105c45373; -[QuickAddPrivacySettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105c45368(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c45374; end: 105c453cb; -[QuickAddPrivacySettingsViewController saveSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45374(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010be86660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112732a78;
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    func_0x00010bede3e0(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c453cc; end: 105c454bb; -[QuickAddPrivacySettingsViewController _updateQuickAddPrivacySetting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c453cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732a6c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2890c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105c454bc; end: 105c45563;  */

void FUN_105c454bc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c07e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105c45564; end: 105c4560b;  */

void FUN_105c45564(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105c4560c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105c4560c; end: 105c4563f;  */

void FUN_105c4560c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c45640; end: 105c456c7; -[QuickAddPrivacySettingsViewController _presentMessageInMainThread:] */

void FUN_105c45640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010be46800(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10d3a0(puVar1,param_2,param_1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c456c8; end: 105c456cb; -[QuickAddPrivacySettingsViewController viewWillResignActive] */

void FUN_105c456c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveSetting_112630570);
  return;
}



/* Entry: 105c456cc; end: 105c456cf; -[QuickAddPrivacySettingsViewController leftSwipePrepare] */

void FUN_105c456cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_saveSetting_112630570);
  return;
}



/* Entry: 105c456d0; end: 105c4576f; -[QuickAddPrivacySettingsViewController _learnMoreClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c456d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + _DAT_112732a64) = 1;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e23758);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd5b0;
  _objc_alloc(PTR_PTR_1126bd5b0);
  func_0x00010c057840();
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c45770; end: 105c45777; -[QuickAddPrivacySettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c45770(void)

{
  return 1;
}



/* Entry: 105c45778; end: 105c4577f; -[QuickAddPrivacySettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105c45778(void)

{
  return 1;
}



/* Entry: 105c45780; end: 105c459a7; -[QuickAddPrivacySettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45780(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010bf6e060(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000105c46164();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27f7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b0d78;
  func_0x000105c46164();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2658e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112732a78);
  puVar4 = PTR_PTR_1126b15b0;
  func_0x00010bf9a640(PTR_PTR_1126b15b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar5);
  func_0x00010c1d1360(puVar3);
  _objc_release(puVar4);
  func_0x00010c0699c0(puVar3);
  func_0x00010c0699c0(puVar3);
  func_0x00010c19f0e0(0,0,param_1,param_2,puVar3);
  _objc_initWeak(auStack_68,param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c211ae0(puVar3);
  uVar5 = uVar1;
  func_0x00010c27f7a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c459a8; end: 105c459d3;  */

void FUN_105c459a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beccec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c459d4; end: 105c45a6b; -[QuickAddPrivacySettingsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_105c459d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_class_1125ac0b8;
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec768;
  uStack_50 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_50,puVar1);
  puVar3 = (undefined1 *)puVar2;
  func_0x000105c461ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0780(puVar2);
  _objc_release(param_4);
  _objc_release(puVar3);
  return param_1;
}



/* Entry: 105c45a6c; end: 105c45adf; -[QuickAddPrivacySettingsViewController tableView:viewForHeaderInSection:] */

void FUN_105c45a6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec768;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_class_1125ac0b8);
  puVar2 = (undefined1 *)puVar1;
  func_0x000105c461ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cd60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c45ae0; end: 105c45aeb; -[QuickAddPrivacySettingsViewController tableView:heightForFooterInSection:] */

undefined8 FUN_105c45ae0(void)

{
  return 0x4046000000000000;
}



/* Entry: 105c45aec; end: 105c45cc7; -[QuickAddPrivacySettingsViewController tableView:viewForFooterInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45aec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar8,param_2,puVar1);
  _objc_release(puVar1);
  lVar10 = (long)_DAT_112732a74;
  func_0x00010befbb60(puVar8,param_2,*(undefined8 *)(param_1 + lVar10));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf348e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puStack_b8 = puVar1;
    pcStack_88 = FUN_105c45cc8;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    uStack_c0 = uVar7;
    puStack_b0 = puVar3;
    uStack_a8 = uVar2;
    uStack_a0 = uVar4;
    puStack_98 = puVar8;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf52a60(puVar3,param_2,&uStack_190,auStack_148,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar10 = *plStack_180;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_180 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          puVar8 = *(undefined **)(lStack_188 + (long)puVar9 * 8);
          puVar6 = puVar8;
          func_0x00010c075e80();
          if ((int)puVar6 != 0) {
            _objc_retain(puVar8);
            goto LAB_105c45db8;
          }
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_190,auStack_148,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    puVar8 = (undefined *)0x0;
LAB_105c45db8:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      lVar10 = (long)_DAT_112732a78;
      uVar7 = *(undefined8 *)(puVar3 + lVar10);
      puVar1 = PTR_PTR_1126b15b0;
      func_0x00010bf9a640(PTR_PTR_1126b15b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(uVar7,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b15b0;
      if ((int)uVar7 == 0) {
        func_0x00010bf9a640();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0da8c0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = *(undefined8 *)(puVar3 + lVar10);
      *(undefined **)(puVar3 + lVar10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105c45cc8; end: 105c45df7; -[QuickAddPrivacySettingsViewController _keyWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (puVar1 != (undefined *)0x0) {
    lVar5 = *plStack_100;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = *(undefined8 *)(lStack_108 + (long)puVar6 * 8);
        uVar3 = uVar4;
        func_0x00010c075e80();
        if ((int)uVar3 != 0) {
          _objc_retain(uVar4);
          goto LAB_105c45db8;
        }
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar6);
      puVar1 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (puVar1 != (undefined *)0x0);
  }
  uVar4 = 0;
LAB_105c45db8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_112732a78;
  uVar3 = *(undefined8 *)(puVar2 + lVar5);
  puVar1 = PTR_PTR_1126b15b0;
  func_0x00010bf9a640(PTR_PTR_1126b15b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b15b0;
  if ((int)uVar3 == 0) {
    func_0x00010bf9a640();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(puVar2 + lVar5);
  *(undefined **)(puVar2 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105c45df8; end: 105c45e8f; -[QuickAddPrivacySettingsViewController _toggleSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112732a78;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR_PTR_1126b15b0;
  func_0x00010bf9a640(PTR_PTR_1126b15b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b15b0;
  if ((int)uVar2 == 0) {
    func_0x00010bf9a640();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c45e90; end: 105c45eff; -[QuickAddPrivacySettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c45e90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732a6c,0);
  _objc_storeStrong(param_1 + _DAT_112732a68,0);
  _objc_storeStrong(param_1 + _DAT_112732a74,0);
  _objc_storeStrong(param_1 + _DAT_112732a70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732a78,0);
  return;
}



/* Entry: 105c45f00; end: 105c45fa3; -[SCQuickAddPrivacySettingsRowProvider initWithQuickAddPrivacyProvider:quickAddPrivacyMutator:] */

undefined1 *
FUN_105c45f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec770;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c45fa4; end: 105c45fb3; -[SCQuickAddPrivacySettingsRowProvider sectionRow] */

void FUN_105c45fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_whoCanWithRow__112686d28,7);
  return;
}



/* Entry: 105c45fb4; end: 105c46097; -[SCQuickAddPrivacySettingsRowProvider rowViewModel] */

void FUN_105c45fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105c46194();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105c46194();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1,param_2,puVar2,0,0,0,1,&PTR____CFConstantStringClassReference_110e23798
                      ,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae6b8;
  puVar3 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c46098; end: 105c4611b; -[SCQuickAddPrivacySettingsRowProvider handleWithContext:] */

void FUN_105c46098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c34e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03c880();
  uVar2 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11c520(uVar2,param_2,puVar1,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c4611c; end: 105c4614b; -[SCQuickAddPrivacySettingsRowProvider .cxx_destruct] */

void FUN_105c4611c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c4614c; end: 105c461c3;  */

void FUN_105c4614c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e237b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e237b8,
                      &PTR____CFConstantStringClassReference_110e237d8,0);
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



/* Entry: 105c461c4; end: 105c46237; -[UNISCMFFootsteps initWithUnifiedGrpcService:] */

undefined1 * FUN_105c461c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec778;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c46238; end: 105c46307; -[UNISCMFFootsteps streamMemoriesWithOptionsBuilder:eventHandler:] */

void FUN_105c46238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8580;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c34f0;
  _objc_opt_class(PTR_PTR_1126c34f0);
  func_0x00010c0199c0(puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19be0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e23878,param_3,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b8590;
  _objc_alloc(PTR_PTR_1126b8590);
  func_0x00010c0199a0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105c46308; end: 105c463eb; -[UNISCMFFootsteps sendMemoriesWithRequest:callOptionsBuilder:handler:] */

void FUN_105c46308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c34f8;
  _objc_opt_class(PTR_PTR_1126c34f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e23898,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c463ec; end: 105c464cf; -[UNISCMFFootsteps clearFootstepsWithRequest:callOptionsBuilder:handler:] */

void FUN_105c463ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c3500;
  _objc_opt_class(PTR_PTR_1126c3500);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e238b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c464d0; end: 105c464db; -[UNISCMFFootsteps .cxx_destruct] */

void FUN_105c464d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c464dc; end: 105c46543; +[SCMFStreamMemoriesRequest descriptor] */

void FUN_105c464dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92b70,
                        &PTR____CFConstantStringClassReference_110e238d8,&PTR_DAT_11311f6a8,
                        &PTR_DAT_11311f6e0,2,0x10,0x1c);
    puRam00000001136c1d20 = puVar1;
  }
  return;
}



/* Entry: 105c46544; end: 105c465ab; +[SCMFStreamMemoriesResponse descriptor] */

void FUN_105c46544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92bc0,
                        &PTR____CFConstantStringClassReference_110e238f8,&PTR_DAT_11311f6a8,
                        &PTR_s_success_11311f720,2,0x10,0x1c);
    puRam00000001136c1d28 = puVar1;
  }
  return;
}



/* Entry: 105c465ac; end: 105c46613; +[SCMFSendMemoriesRequest descriptor] */

void FUN_105c465ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92c10,
                        &PTR____CFConstantStringClassReference_110e23918,&PTR_DAT_11311f6a8,
                        &PTR_DAT_11311f6c0,1,0x10,0x1c);
    puRam00000001136c1d30 = puVar1;
  }
  return;
}



/* Entry: 105c46614; end: 105c4667b; +[SCMFSendMemoriesResponse descriptor] */

void FUN_105c46614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92c60,
                        &PTR____CFConstantStringClassReference_110e23938,&PTR_DAT_11311f6a8,0,0,4,
                        0x1c);
    puRam00000001136c1d38 = puVar1;
  }
  return;
}



/* Entry: 105c4667c; end: 105c466f7; +[SCMFMemoriesMetadata descriptor] */

undefined * FUN_105c4667c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92cb0,
                        &PTR____CFConstantStringClassReference_110e23958,&PTR_DAT_11311f6a8,
                        &PTR_s_snapId_11311f760,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1d40 = puVar1;
  }
  return puRam00000001136c1d40;
}



/* Entry: 105c466f8; end: 105c4675f; +[SCMFClearFootstepsRequest descriptor] */

void FUN_105c466f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92d00,
                        &PTR____CFConstantStringClassReference_110e23978,&PTR_DAT_11311f6a8,0,0,4,
                        0x1c);
    puRam00000001136c1d48 = puVar1;
  }
  return;
}



/* Entry: 105c46760; end: 105c467c7; +[SCMFClearFootstepsResponse descriptor] */

void FUN_105c46760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a92d50,
                        &PTR____CFConstantStringClassReference_110e23998,&PTR_DAT_11311f6a8,0,0,4,
                        0x1c);
    puRam00000001136c1d50 = puVar1;
  }
  return;
}



/* Entry: 105c467c8; end: 105c46b7b; -[SCPlusSettingsRowProvider initWithComposerServices:plusServices:storeKitServices:featureSettingsService:circumstanceEngine:taskManagementServices:composerPeopleBridgeUserInfoServices:composerNetworkingBridgeServices:composerCoreUIServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:managementScopeExposer:giftingScopeExposer:snapchatterServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:] */

undefined8 *
FUN_105c467c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ec780;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[4];
    puVar1[4] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c46b7c; end: 105c46b8b; -[SCPlusSettingsRowProvider sectionRow] */

void FUN_105c46b7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,5);
  return;
}



/* Entry: 105c46b8c; end: 105c46d03; -[SCPlusSettingsRowProvider rowViewModel] */

void FUN_105c46b8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfa1900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf05f20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105c46d04; end: 105c46e37; -[SCPlusSettingsRowProvider handleWithContext:] */

void FUN_105c46d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c3508;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c295440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040d00(puVar1,param_2,uVar4,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar3 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02e4c0(puVar5,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010bf0c980(puVar5,param_2,puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c46e38; end: 105c46f1b; -[SCPlusSettingsRowProvider .cxx_destruct] */

void FUN_105c46e38(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105c46f1c; end: 105c4761b; -[SCPlusSettingsViewController initWithRuntime:plusServices:storeKitServices:featureSettingsService:circumstanceEngine:taskManagementServices:composerPeopleBridgeUserInfoServices:composerNetworkingBridgeServices:composerCoreUIServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:managementScopeExposer:giftingScopeExposer:snapchatterServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c46f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  uVar1 = param_1;
  func_0x000106c733b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1da8;
  _objc_alloc();
  func_0x00010c04abe0();
  uVar3 = param_4;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bfa1900(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x000106c6927c(uVar14,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b33f0;
  _objc_alloc();
  func_0x00010c040b80();
  puVar8 = PTR_PTR_1126b35c8;
  _objc_alloc();
  func_0x00010c057140();
  puVar9 = PTR_PTR_1126c3510;
  _objc_alloc();
  func_0x00010c056ce0();
  uVar3 = param_1;
  func_0x000106c733fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c3518;
  _objc_alloc(PTR_PTR_1126c3518);
  func_0x00010c011980();
  puVar11 = PTR_PTR_1126b34d8;
  _objc_alloc(PTR_PTR_1126b34d8);
  func_0x00010c037880();
  func_0x00010c1bf300(puVar10);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126b35b8;
  _objc_alloc(PTR_PTR_1126b35b8);
  func_0x00010c011d00();
  func_0x00010c168a80(puVar10);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126b35c0;
  _objc_alloc(PTR_PTR_1126b35c0);
  uVar14 = param_8;
  func_0x00010c0f98e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012060(puVar11);
  func_0x00010c1df500(puVar10);
  _objc_release(puVar11);
  _objc_release(uVar14);
  uVar14 = param_11;
  func_0x00010beff660(param_11);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  uVar14 = param_9;
  func_0x00010c2928c0(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar10);
  _objc_release(uVar4);
  _objc_release(uVar14);
  uVar14 = param_12;
  func_0x00010bf1cf00(param_12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar10);
  _objc_release(uVar4);
  _objc_release(uVar14);
  uVar14 = param_8;
  func_0x00010c0f98e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x000106c77d90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f5c0(puVar10);
  _objc_release(uVar4);
  _objc_release(uVar14);
  puVar11 = PTR_PTR_1126b34e8;
  _objc_alloc(PTR_PTR_1126b34e8);
  func_0x00010c046960();
  func_0x00010c1ab5e0(puVar10);
  _objc_release(puVar11);
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105c4761c;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010c1e10e0(puVar10);
  puVar12 = PTR_PTR_1126c3520;
  _objc_alloc();
  func_0x00010c061d40();
  puVar11 = puVar12;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010c1275a0(puVar11);
  _objc_release(puVar11);
  puStack_a0 = PTR_PTR_1126ec788;
  puVar13 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar13,PTR_s_initWithValdiView__1125f5a88,puVar12);
  if (puVar13 != (undefined8 *)0x0) {
    func_0x00010c1c1bc0(puVar7);
    lVar15 = (long)_DAT_112732acc;
    _objc_retain(puVar7);
    uVar14 = *(undefined8 *)((long)puVar13 + lVar15);
    *(undefined **)((long)puVar13 + lVar15) = puVar7;
    _objc_release(uVar14);
    lVar15 = (long)_DAT_112732ad0;
    _objc_retain(param_15);
    uVar14 = *(undefined8 *)((long)puVar13 + lVar15);
    *(undefined8 *)((long)puVar13 + lVar15) = param_15;
    _objc_release(uVar14);
  }
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar13;
}



/* Entry: 105c4761c; end: 105c476ab;  */

void FUN_105c4761c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c476ac; end: 105c47797; -[SCPlusSettingsViewController _presentManagementPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c476ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112732ad0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000106c733fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  puVar3 = PTR_PTR_1126b3470;
  _objc_alloc(PTR_PTR_1126b3470);
  func_0x00010c056ec0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c47798; end: 105c477ef; -[SCPlusSettingsViewController plusManagementDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c47798(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112732ad0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c477f0; end: 105c4782f; -[SCPlusSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c477f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732ad0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732acc,0);
  return;
}



/* Entry: 105c47830; end: 105c4785f;  */

void FUN_105c47830(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e239b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e239b8,
                      &PTR____CFConstantStringClassReference_110e239d8,0);
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



/* Entry: 105c47860; end: 105c47a3f; -[SCSafetyAndPrivacyViewController initWithValdiRuntimeProvider:composerCoreUIServices:blizzardLogger:webBrowsingScopeExposer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c47860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  lVar6 = (long)_DAT_112732ad4;
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_5;
  _objc_retain(param_3);
  _objc_release(uVar4);
  lVar6 = (long)_DAT_112732ad8;
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_4;
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar6 = (long)_DAT_112732adc;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_112732ae0;
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_6;
  _objc_release(uVar4);
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
  }
  lVar6 = param_1;
  func_0x00010bdf5660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112732ae4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar6;
  _objc_release(uVar4);
  puStack_68 = PTR_PTR_1126ec790;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_initWithValdiView__1125f5a88,*(undefined8 *)(param_1 + lVar5)
                     );
  if (plVar2 != (long *)0x0) {
    func_0x00010c1c1bc0(puVar3);
    lVar6 = (long)_DAT_112732ae8;
    _objc_retain(puVar3);
    uVar4 = *(undefined8 *)((long)plVar2 + lVar6);
    *(undefined **)((long)plVar2 + lVar6) = puVar3;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)plVar2 + (long)_DAT_112732aec),param_7);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)plVar2;
}



/* Entry: 105c47a40; end: 105c47b5f; +[SCSafetyAndPrivacyViewController makeViewControllerWithComposerServices:composerCoreUIServices:valdiBlizzardLoggingServices:webBrowsingScopeExposer:delegate:] */

void FUN_105c47a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c3530;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c295440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf1cf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c05fe00(puVar1,param_2,uVar3,param_4,uVar4,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


