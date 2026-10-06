/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f487a4; end: 104f487f3; -[SCCContactMeSettingsView setViewModel:] */

void FUN_104f487a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104f487f4; end: 104f48837; -[SCCContactMeSettingsView viewModel] */

void FUN_104f487f4(undefined8 param_1)

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



/* Entry: 104f48838; end: 104f4883f; -[SCCPrivacyOptionType__Enum init] */

void FUN_104f48838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 104f48840; end: 104f4890b; -[SCCContactMeContext initWithOnDismissButtonTapped:onSettingsChanged:privacySettingsObservable:urlActionHandler:] */

undefined8 *
FUN_104f48840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_48 = PTR_PTR_1126e5288;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104f4890c; end: 104f4891f; +[SCCContactMeContext valdiMarshallableObjectDescriptor] */

void FUN_104f4890c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismissButtonTapped_11085d6c0;
  param_1[1] = &PTR_s_SCCPrivacySettings_11085d738;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f48920; end: 104f48953; -[SCCContactMeSettingsViewModel init] */

void FUN_104f48920(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5290;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104f48954; end: 104f48967; +[SCCContactMeSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_104f48954(undefined8 *param_1)

{
  *param_1 = &PTR_s_alertPresenter_11085d758;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_11085d7d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f48968; end: 104f489a3; -[SCCPrivacySettings initWithPrivacyOptionType:isMyContactsEnabled:] */

void FUN_104f48968(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5298;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104f489a4; end: 104f489c7; +[SCCPrivacySettings valdiMarshallableObjectDescriptor] */

void FUN_104f489a4(undefined8 *param_1)

{
  *param_1 = &PTR_s_privacyOptionType_11085d7e0;
  param_1[1] = &PTR_s_SCCPrivacyOptionType_11085d828;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f489c8; end: 104f48adf; -[SCCreateChatTooltipServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f489c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112717864);
  }
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126b29d8;
  _objc_alloc(PTR_PTR_1126b29d8);
  func_0x00010c006640();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104f48ae0; end: 104f48b1f;  */

void FUN_104f48ae0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f48b20; end: 104f48ba3; -[SCCreateChatTooltipServicesEntryPoint _createChatTooltipService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f48b20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b29e0;
  _objc_alloc(PTR_PTR_1126b29e0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112717860;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f48ba4; end: 104f48beb; -[SCCreateChatTooltipServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f48ba4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717864,0);
  _objc_destroyWeak(param_1 + _DAT_112717860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271785c);
  return;
}



/* Entry: 104f48bec; end: 104f48c5f; -[SCCreateChatTooltipServicesImpl initWithFeatureSettingsService:] */

undefined1 * FUN_104f48bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e52a0;
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



/* Entry: 104f48c60; end: 104f48c9f; -[SCCreateChatTooltipServicesImpl shouldDisplaySendToCreateGroupTooltip] */

uint FUN_104f48c60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157d20();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104f48ca0; end: 104f48cd7; -[SCCreateChatTooltipServicesImpl setSeenSendToCreateGroupTooltip] */

void FUN_104f48ca0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f48cd8; end: 104f48d17; -[SCCreateChatTooltipServicesImpl shouldDisplaySendToGroupInviteLinkBadgeInAddToGroup] */

uint FUN_104f48cd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157d40();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104f48d18; end: 104f48d4f; -[SCCreateChatTooltipServicesImpl setSeenSendToGroupInviteLinkBadgeInAddToGroup] */

void FUN_104f48d18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f48d50; end: 104f48d8f; -[SCCreateChatTooltipServicesImpl shouldDisplaySendToGroupInviteLinkBadgeInNewGroup] */

uint FUN_104f48d50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157d60();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 104f48d90; end: 104f48dc7; -[SCCreateChatTooltipServicesImpl setSeenSendToGroupInviteLinkBadgeInNewGroup] */

void FUN_104f48d90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f48dc8; end: 104f48dd3; -[SCCreateChatTooltipServicesImpl .cxx_destruct] */

void FUN_104f48dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f48dd4; end: 104f48ddf; -[SCFeatureSettingsService hasSeenSendToCreateGroupTooltip] */

void FUN_104f48dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbc038);
  return;
}



/* Entry: 104f48de0; end: 104f48deb; -[SCFeatureSettingsService seenSendToCreateGroupTooltipServerParam] */

undefined ** FUN_104f48de0(void)

{
  return &PTR____CFConstantStringClassReference_110dbc038;
}



/* Entry: 104f48dec; end: 104f48dfb; -[SCFeatureSettingsService setSeenSendToCreateGroupTooltip:] */

void FUN_104f48dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dbc038,param_3);
  return;
}



/* Entry: 104f48dfc; end: 104f48e03; -[SCFeatureSettingsService sendto_create_group_tooltip_tooltip_client_value:] */

undefined * FUN_104f48dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104f48e04; end: 104f48e0b; -[SCFeatureSettingsService sendto_create_group_tooltip_tooltip_server_value:] */

void FUN_104f48e04(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 104f48e0c; end: 104f48e1b; -[SCFeatureSettingsService seenSendToCreateGroupTooltip] */

void FUN_104f48e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dbc038,0);
  return;
}



/* Entry: 104f48e1c; end: 104f48e27; -[SCFeatureSettingsService hasSeenSendToGroupInviteLinkBadgeInAddToGroup] */

void FUN_104f48e1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbc058);
  return;
}



/* Entry: 104f48e28; end: 104f48e33; -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInAddToGroupServerParam] */

undefined ** FUN_104f48e28(void)

{
  return &PTR____CFConstantStringClassReference_110dbc058;
}



/* Entry: 104f48e34; end: 104f48e43; -[SCFeatureSettingsService setSeenSendToGroupInviteLinkBadgeInAddToGroup:] */

void FUN_104f48e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dbc058,param_3);
  return;
}



/* Entry: 104f48e44; end: 104f48e4b; -[SCFeatureSettingsService sendto_group_invite_link_badge_in_add_to_group_tooltip_client_value:] */

undefined * FUN_104f48e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104f48e4c; end: 104f48e53; -[SCFeatureSettingsService sendto_group_invite_link_badge_in_add_to_group_tooltip_server_value:] */

void FUN_104f48e4c(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 104f48e54; end: 104f48e63; -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInAddToGroup] */

void FUN_104f48e54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dbc058,0);
  return;
}



/* Entry: 104f48e64; end: 104f48e6f; -[SCFeatureSettingsService hasSeenSendToGroupInviteLinkBadgeInNewGroup] */

void FUN_104f48e64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbc078);
  return;
}



/* Entry: 104f48e70; end: 104f48e7b; -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInNewGroupServerParam] */

undefined ** FUN_104f48e70(void)

{
  return &PTR____CFConstantStringClassReference_110dbc078;
}



/* Entry: 104f48e7c; end: 104f48e8b; -[SCFeatureSettingsService setSeenSendToGroupInviteLinkBadgeInNewGroup:] */

void FUN_104f48e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dbc078,param_3);
  return;
}



/* Entry: 104f48e8c; end: 104f48e93; -[SCFeatureSettingsService sendto_group_invite_link_badge_in_new_group_tooltip_client_value:] */

undefined * FUN_104f48e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104f48e94; end: 104f48e9b; -[SCFeatureSettingsService sendto_group_invite_link_badge_in_new_group_tooltip_server_value:] */

void FUN_104f48e94(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 104f48e9c; end: 104f48eab; -[SCFeatureSettingsService seenSendToGroupInviteLinkBadgeInNewGroup] */

void FUN_104f48e9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dbc078,0);
  return;
}



/* Entry: 104f48eac; end: 104f48f1f; -[SCCreateChatTooltipServices initWithCreateChatTooltipService:] */

undefined1 * FUN_104f48eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e52a8;
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



/* Entry: 104f48f20; end: 104f48f27; -[SCCreateChatTooltipServices createChatTooltipService] */

undefined8 FUN_104f48f20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f48f28; end: 104f48f33; -[SCCreateChatTooltipServices .cxx_destruct] */

void FUN_104f48f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f48f34; end: 104f48fb3; -[SCEmojiSelectionCell initWithFrame:] */

undefined1 * FUN_104f48f34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e52b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bfef4a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f48fb4; end: 104f4904b; -[SCEmojiSelectionCell setEmojiSelection:] */

void FUN_104f48fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b0d08;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00f540();
  _objc_release(param_3);
  puStack_38 = PTR_PTR_1126e52b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setSticker_presentationModelProv_112660428,puVar1,0,0,0,0,0);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f4904c; end: 104f490ff; -[SCEmojiSelectionCell contains:] */

ulong FUN_104f4904c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0d08;
  _objc_opt_class(PTR_PTR_1126b0d08);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  uVar2 = uVar3;
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0720c0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 104f49100; end: 104f4919b; -[SCEmojiSelectionCell setSelected:] */

void FUN_104f49100(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e52b0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_isSelected_1125fcfa8);
  if (((param_3 & 1) == 0) && ((int)puVar1 != 0)) {
    func_0x00010c23b360(param_1);
  }
  uVar2 = param_1;
  func_0x00010c159320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  puStack_48 = PTR_PTR_1126e52b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setSelected__11265c598,param_3);
  return;
}



/* Entry: 104f4919c; end: 104f4928b; -[SCEmojiSelectionCell initSelectedBackgroundView] */

void FUN_104f4919c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010c1677c0(0x3fc3333333333333,puVar1);
  func_0x00010c1faee0(param_1,param_2,puVar1);
  func_0x00010c159320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f4928c; end: 104f4932f; -[SCFriendmojiFeatureManager initWithFriendmojiServices:plusServices:] */

undefined1 *
FUN_104f4928c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e52b8;
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



/* Entry: 104f49330; end: 104f493a7; -[SCFriendmojiFeatureManager updateFriendmojiToNewEmoji:] */

void FUN_104f49330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfb9740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2860c0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f493a8; end: 104f493f3; -[SCFriendmojiFeatureManager resetToDefaultFriendmoji] */

void FUN_104f493a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb9740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139940();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f493f4; end: 104f4949f; -[SCFriendmojiFeatureManager selectFriendmojiToUpdate:] */

void FUN_104f493f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb9740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c131340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f494a0; end: 104f4952b; -[SCFriendmojiFeatureManager selectedFriendmojiDescription] */

void FUN_104f494a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar2 = param_1;
    func_0x00010bf8e600(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf8e6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_release(uVar1);
  }
  else {
    _objc_retain(lVar3);
    lVar2 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
  }
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f4952c; end: 104f49573; -[SCFriendmojiFeatureManager selectedFriendmojiSource] */

void FUN_104f4952c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf8e600(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f49574; end: 104f49683; -[SCFriendmojiFeatureManager fetchLatestFriendmojis] */

void FUN_104f49574(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb9740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c246d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d4420();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c252440();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar2 = uVar8;
  if (lVar7 == 0) {
    func_0x0001006372a4(uVar8,&PTR___NSConcreteGlobalBlock_11085d868);
    _objc_release(uVar8);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 104f49684; end: 104f496ab;  */

uint FUN_104f49684(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110f5ef98);
  return (uint)param_2 ^ 1;
}



/* Entry: 104f496ac; end: 104f4974f; -[SCFriendmojiFeatureManager emojiInfoWithSymbol:] */

void FUN_104f496ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfb9740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8c540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f49750; end: 104f49757; -[SCFriendmojiFeatureManager friendmojis] */

undefined8 FUN_104f49750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f49758; end: 104f4975f; -[SCFriendmojiFeatureManager replacementEmojis] */

undefined8 FUN_104f49758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f49760; end: 104f497cb; -[SCFriendmojiFeatureManager .cxx_destruct] */

void FUN_104f49760(long param_1)

{
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



/* Entry: 104f497cc; end: 104f4985b; -[SCFriendmojiPickerViewController initWithFeatureManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104f497cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e52c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271788c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f4985c; end: 104f498a3; -[SCFriendmojiPickerViewController loadView] */

void FUN_104f4985c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e52c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010bfee640(param_1);
  return;
}



/* Entry: 104f498a4; end: 104f49c9b; -[SCFriendmojiPickerViewController initCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f498a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f93e0(0x4028000000000000,0x4014000000000000,0x4046800000000000,0x4014000000000000);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar5 = (long)_DAT_112717890;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  _objc_release(lVar4);
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010c1c9b40(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR_PTR_1126b29e8;
  _objc_opt_class(PTR_PTR_1126b29e8);
  func_0x00010c126000(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110dbc098);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
  _objc_opt_class(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
  func_0x00010c126060(uVar3,param_2,puVar2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,
                      &PTR____CFConstantStringClassReference_110dbc0b8);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104f49b2c;
  puStack_50 = &UNK_1108471b0;
  lStack_48 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_112717894;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  lVar4 = param_1;
  func_0x00010bf8e680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar4);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar5),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f49c9c; end: 104f49dcb; -[SCFriendmojiPickerViewController animate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f49c9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112717890;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfed040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010bf33b60(lVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112717898;
  lVar2 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    if (lVar2 != 0) {
      func_0x00010c23b360();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar3);
    }
  }
  else {
    if (lVar2 != 0 && lVar2 != lVar4) {
      func_0x00010c23b360();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar3);
    }
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 == 1) {
      _objc_retain(lVar4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(long *)(param_1 + lVar5) = lVar4;
      _objc_release(uVar3);
      func_0x00010bfcf9a0(lVar4);
    }
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 == 3) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar3);
      func_0x00010c23b360(lVar4);
      func_0x00010bf40740(param_1,param_2,lVar4,uVar1);
    }
  }
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f49dcc; end: 104f49e13; -[SCFriendmojiPickerViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f49dcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271788c);
  func_0x00010c131320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104f49e14; end: 104f49f97; -[SCFriendmojiPickerViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f49e14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112717890);
  func_0x00010bf6e0c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dbc098,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c142240();
  lVar7 = (long)_DAT_11271788c;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010c131320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar6 <= lVar3) {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c131320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c142240(param_4);
    uVar5 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194700(uVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c1596e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf4b4c0(uVar1,param_2,uVar4);
    _objc_release(uVar4);
    func_0x00010c1fadc0(uVar1,param_2,uVar5);
    if ((int)uVar5 != 0) {
      lVar6 = (long)_DAT_11271789c;
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(long *)(param_1 + lVar6) = param_4;
      _objc_release(uVar5);
      func_0x00010c158b60(param_3,param_2,param_4,1,0);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f49f98; end: 104f49ff7; -[SCFriendmojiPickerViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_104f49f98(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126b29e8;
  _objc_opt_class(PTR_PTR_1126b29e8);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c2a5f80(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 104f49ff8; end: 104f4a007; -[SCFriendmojiPickerViewController collectionView:layout:sizeForItemAtIndexPath:] */

void FUN_104f49ff8(void)

{
  return;
}



/* Entry: 104f4a008; end: 104f4a00f; -[SCFriendmojiPickerViewController collectionView:layout:minimumInteritemSpacingForSectionAtIndex:] */

undefined8 FUN_104f4a008(void)

{
  return 0x4014000000000000;
}



/* Entry: 104f4a010; end: 104f4a017; -[SCFriendmojiPickerViewController collectionView:layout:minimumLineSpacingForSectionAtIndex:] */

undefined8 FUN_104f4a010(void)

{
  return 0x4034000000000000;
}



/* Entry: 104f4a018; end: 104f4a18b; -[SCFriendmojiPickerViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf6e120(param_3,param_2,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00,
                      &PTR____CFConstantStringClassReference_110dbc0b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + _DAT_11271788c);
  func_0x00010c1596c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar5 = (long)_DAT_1127178a0;
    if (*(long *)(param_1 + lVar5) == 0) {
      puStack_38 = PTR_PTR_1126e52c0;
      plVar3 = &lStack_40;
      lStack_40 = param_1;
      _objc_msgSendSuper2(plVar3,PTR_s_class_1125ac0b8);
      func_0x00010bf56720();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(long **)(param_1 + lVar5) = plVar3;
      _objc_release(uVar4);
      func_0x00010befbb60(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      _objc_retain(param_3);
      func_0x00010c0bbfc0(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    else {
      func_0x00010c212f20();
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104f4a18c; end: 104f4a4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a18c(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_1127178a0);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4a4c0; end: 104f4a617; -[SCFriendmojiPickerViewController collectionViewCellSelected:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a4c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_112717890);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c158b60(uVar6);
  uVar2 = param_3;
  func_0x00010c253880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b0d08;
  _objc_opt_class(PTR_PTR_1126b0d08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2860e0(*(undefined8 *)(param_1 + _DAT_11271788c));
  lVar5 = param_1;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(lVar5);
  func_0x00010c1881a0(param_1);
  _objc_release(param_4);
  lVar5 = param_1;
  func_0x00010bf63780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    func_0x00010bf63780(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285740();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f4a618; end: 104f4a627; -[SCFriendmojiPickerViewController getTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1596f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271788c),PTR_s_selectedFriendmojiSource_112633fd8);
  return;
}



/* Entry: 104f4a628; end: 104f4a6fb; -[SCFriendmojiPickerViewController collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104f4a628(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_class_1125ac0b8;
  plVar2 = &lStack_50;
  puStack_48 = PTR_PTR_1126e52c0;
  lStack_50 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11271788c);
  func_0x00010c1596c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0780(plVar2);
  uVar4 = param_1;
  _objc_release(param_4);
  _objc_release(uVar3);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(param_2);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 104f4a6fc; end: 104f4a7a3; -[SCFriendmojiPickerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_104f4a6fc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c08e9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_3 == param_1) {
    _objc_release(param_1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    _objc_release(param_1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_104f4a788;
    }
  }
  uVar3 = 0;
LAB_104f4a788:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 104f4a7a4; end: 104f4a84f; -[SCFriendmojiPickerViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_104f4a7a4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc1a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_3 == param_1) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    _objc_release(param_1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_104f4a834;
    }
  }
  else {
    _objc_release(param_1);
  }
  uVar3 = 0;
LAB_104f4a834:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 104f4a850; end: 104f4a86f; -[SCFriendmojiPickerViewController dataDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a850(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127178a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f4a870; end: 104f4a883; -[SCFriendmojiPickerViewController setDataDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a870(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127178a4,param_3);
  return;
}



/* Entry: 104f4a884; end: 104f4a893; -[SCFriendmojiPickerViewController emojiPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4a884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112717890);
}



/* Entry: 104f4a894; end: 104f4a8d3; -[SCFriendmojiPickerViewController setEmojiPicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112717890;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4a8d4; end: 104f4a8e3; -[SCFriendmojiPickerViewController currentlySelectedCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4a8d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271789c);
}



/* Entry: 104f4a8e4; end: 104f4a923; -[SCFriendmojiPickerViewController setCurrentlySelectedCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271789c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4a924; end: 104f4a933; -[SCFriendmojiPickerViewController animateCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4a924(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112717898);
}



/* Entry: 104f4a934; end: 104f4a973; -[SCFriendmojiPickerViewController setAnimateCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112717898;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4a974; end: 104f4a983; -[SCFriendmojiPickerViewController gestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4a974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112717894);
}



/* Entry: 104f4a984; end: 104f4a9c3; -[SCFriendmojiPickerViewController setGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112717894;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4a9c4; end: 104f4a9d3; -[SCFriendmojiPickerViewController headerCellLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4a9c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127178a0);
}



/* Entry: 104f4a9d4; end: 104f4aa13; -[SCFriendmojiPickerViewController setHeaderCellLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4a9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127178a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4aa14; end: 104f4aa23; -[SCFriendmojiPickerViewController featureManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f4aa14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271788c);
}



/* Entry: 104f4aa24; end: 104f4aa63; -[SCFriendmojiPickerViewController setFeatureManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4aa24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271788c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f4aa64; end: 104f4aaef; -[SCFriendmojiPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4aa64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271788c,0);
  _objc_storeStrong(param_1 + _DAT_1127178a0,0);
  _objc_storeStrong(param_1 + _DAT_112717894,0);
  _objc_storeStrong(param_1 + _DAT_112717898,0);
  _objc_storeStrong(param_1 + _DAT_11271789c,0);
  _objc_storeStrong(param_1 + _DAT_112717890,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127178a4);
  return;
}



/* Entry: 104f4aaf0; end: 104f4ab8f; -[SCFriendmojiTableCellView initWithReuseIdentifier:] */

undefined1 * FUN_104f4aaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e52c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528,0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
    func_0x00010c161260(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010beed360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfee4e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f4ab90; end: 104f4ac47;  */

void FUN_104f4ab90(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f4ac48; end: 104f4ad43; -[SCFriendmojiTableCellView initBottomBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4ac48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_1127178a8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf1ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 104f4ad44; end: 104f4ae67;  */

void FUN_104f4ad44(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f4ae68; end: 104f4af0f; +[SCFriendmojiTableCellView formatedLabel:fontSize:] */

void FUN_104f4ae68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar1);
  func_0x00010c212f20(puVar1,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c1cfce0(puVar1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f4af10; end: 104f4af97; +[SCFriendmojiTableCellView formatedLabel:fontSize:color:] */

void FUN_104f4af10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_class(param_2);
  func_0x00010bfb5f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c213180(param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104f4af98; end: 104f4b13f; -[SCFriendmojiTableCellView updateEmojiWithSymbol:emojiInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4af98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_1127178ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c247520(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127178b0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    lVar4 = param_1;
    _objc_opt_class();
    func_0x00010bfb5f20(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf8e2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  func_0x00010c212f20(lVar4,param_2,uVar1);
  uVar3 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2857a0(param_1,param_2,uVar3);
  uVar2 = param_4;
  func_0x00010bf8e3a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285780(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f4b140; end: 104f4b2a7;  */

void FUN_104f4b140(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
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
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
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



/* Entry: 104f4b2a8; end: 104f4b3e3; -[SCFriendmojiTableCellView updateEmojiTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f4b2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127178b4;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    lVar1 = param_1;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5f40(0x402e000000000000,lVar1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf8ea00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


