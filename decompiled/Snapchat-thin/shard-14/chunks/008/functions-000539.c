/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b65e138; end: 10b65e147; +[SCCBusinessIapPurchasePayload valdiMarshallableObjectDescriptor] */

void FUN_10b65e138(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_productId_110d303b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e148; end: 10b65e16f; -[SCCBusinessIapPurchaseResult initWithCode:] */

void FUN_10b65e148(void)

{
  func_0x00010b65e1d8(PTR_PTR_112707bb0);
  func_0x00010b65e1c8();
  return;
}



/* Entry: 10b65e170; end: 10b65e18f; +[SCCBusinessIapPurchaseResult valdiMarshallableObjectDescriptor] */

void FUN_10b65e170(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110d30410;
  param_1[1] = &PTR_DAT_110d30470;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e190; end: 10b65e1b7; -[SCCBusinessIapTransaction initWithTransactionId:productId:] */

void FUN_10b65e190(void)

{
  func_0x00010b65e1d8(PTR_PTR_112707bb8);
  func_0x00010b65e1c8();
  return;
}



/* Entry: 10b65e1b8; end: 10b65e1fb; +[SCCBusinessIapTransaction valdiMarshallableObjectDescriptor] */

void FUN_10b65e1b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_transactionId_110d30488;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e1fc; end: 10b65e203; -[SCCBusinessPromotionInsightsAdStatus__Enum init] */

void FUN_10b65e1fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b65e204; end: 10b65e213; -[SCCBusinessPromotionInsightsMediaType__Enum init] */

void FUN_10b65e204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133ba510,2);
  return;
}



/* Entry: 10b65e214; end: 10b65e21b; -[SCCBusinessPromotionInsightsPromotionInsightsLaunchSource__Enum init] */

void FUN_10b65e214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b65e21c; end: 10b65e2bb; -[SCCBusinessPromotionInsightsPromotionInsightsTrayActions__Enum init] */

undefined ** FUN_10b65e21c(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e49418;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e49438;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b65e2bc;
  puStack_58 = PTR_PTR_112707bc0;
  puStack_60 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010b65e550();
  ppuVar2 = &puStack_60;
  func_0x00010b65e548(ppuVar2);
  return ppuVar2;
}



/* Entry: 10b65e2bc; end: 10b65e2ef; -[SCCBusinessPromotionInsightsProfileInsightsButtonResult initWithAdStatus:adViewsString:] */

void FUN_10b65e2bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707bc0;
  uStack_20 = param_1;
  func_0x00010b65e550();
  func_0x00010b65e548(&uStack_20);
  return;
}



/* Entry: 10b65e2f0; end: 10b65e303; +[SCCBusinessPromotionInsightsProfileInsightsButtonResult valdiMarshallableObjectDescriptor] */

void FUN_10b65e2f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d304e8;
  param_1[1] = &PTR_DAT_110d30530;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e304; end: 10b65e40f; -[SCCBusinessPromotionInsightsPromotionInsightsContext initWithNetworkingClient:navigator:alertPresenter:onTapViewPromotionsButton:onTapPromoteButton:dismiss:] */

undefined8 *
FUN_10b65e304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  uVar2 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  puStack_58 = PTR_PTR_112707bc8;
  uStack_60 = param_1;
  func_0x00010b65e550();
  puVar3 = &uStack_60;
  func_0x00010b65e548(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  return puVar3;
}



/* Entry: 10b65e410; end: 10b65e423; +[SCCBusinessPromotionInsightsPromotionInsightsContext valdiMarshallableObjectDescriptor] */

void FUN_10b65e410(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_110d30540;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110d305e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e424; end: 10b65e473; -[SCCBusinessPromotionInsightsPromotionInsightsLaunchPayload initWithOrganizationId:profileId:launchSource:mediaId:mediaType:enablePromoteButton:] */

void FUN_10b65e424(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707bd0;
  uStack_20 = param_1;
  func_0x00010b65e550();
  func_0x00010b65e548(&uStack_20);
  return;
}



/* Entry: 10b65e474; end: 10b65e487; +[SCCBusinessPromotionInsightsPromotionInsightsLaunchPayload valdiMarshallableObjectDescriptor] */

void FUN_10b65e474(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d30608;
  param_1[1] = &PTR_DAT_110d30740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e488; end: 10b65e4c3; -[SCCBusinessPromotionInsightsPromotionInsightsOptions initWithOrgId:snapId:encodedBusinessProfileAndUserData:networkingClient:] */

void FUN_10b65e488(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707bd8;
  uStack_20 = param_1;
  func_0x00010b65e550();
  func_0x00010b65e548(&uStack_20);
  return;
}



/* Entry: 10b65e4c4; end: 10b65e4d7; +[SCCBusinessPromotionInsightsPromotionInsightsOptions valdiMarshallableObjectDescriptor] */

void FUN_10b65e4c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d30758;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110d307e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e4d8; end: 10b65e523; -[SCCBusinessPromotionInsightsPromotionInsightsTrayViewModel initWithOrganizationId:mediaId:mediaType:profileId:launchSource:encodedBusinessProfileAndUserData:enablePromoteButton:] */

void FUN_10b65e4d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707be0;
  uStack_20 = param_1;
  func_0x00010b65e548(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b65e524; end: 10b65e55b; +[SCCBusinessPromotionInsightsPromotionInsightsTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b65e524(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d307f8;
  param_1[1] = &PTR_DAT_110d308e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e55c; end: 10b65e607; -[SCCBusinessCreatorHubCreatorHubSource__Enum init] */

undefined1 * FUN_10b65e55c(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f6a9f8;
  puStack_38 = PTR_PTR_1133ba520;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f6aa18;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_60;
  pcStack_48 = FUN_10b65e608;
  puStack_58 = PTR_PTR_112707be8;
  puStack_60 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
  return (undefined1 *)ppuVar2;
}



/* Entry: 10b65e608; end: 10b65e63b; -[SCCBusinessCreatorHubCreatorHubDeeplinkAction init] */

void FUN_10b65e608(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707be8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b65e63c; end: 10b65e64f; +[SCCBusinessCreatorHubCreatorHubDeeplinkAction valdiMarshallableObjectDescriptor] */

void FUN_10b65e63c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d30900;
  param_1[1] = &PTR_DAT_110d30948;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e650; end: 10b65e687; -[SCCBusinessCreatorHubCreatorHubPageLaunchPayload initWithProfileId:source:] */

void FUN_10b65e650(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707bf0;
  uStack_20 = param_1;
  func_0x00010b65e930();
  func_0x00010b65e91c(&uStack_20);
  return;
}



/* Entry: 10b65e688; end: 10b65e69b; +[SCCBusinessCreatorHubCreatorHubPageLaunchPayload valdiMarshallableObjectDescriptor] */

void FUN_10b65e688(undefined8 *param_1)

{
  *param_1 = &PTR_s_profileId_110d30960;
  param_1[1] = &PTR_DAT_110d309c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e69c; end: 10b65e86f; -[SCCBusinessCreatorHubCreatorHubWorkflowRouterProps initWithDeckHierarchy:onExitedFlow:encodedBusinessProfileAndUserData:source:networkingClient:webLauncher:copyToClipboard:emailLauncher:pageLauncher:notificationPresenter:cameraRollLibrary:memoriesTranscoder:tempFileProvider:] */

undefined8 *
FUN_10b65e69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  puStack_70 = PTR_PTR_112707bf8;
  uStack_78 = param_1;
  func_0x00010b65e930();
  puVar2 = &uStack_78;
  func_0x00010b65e91c();
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 10b65e870; end: 10b65e883; +[SCCBusinessCreatorHubCreatorHubWorkflowRouterProps valdiMarshallableObjectDescriptor] */

void FUN_10b65e870(undefined8 *param_1)

{
  *param_1 = &PTR_s_deckHierarchy_110d309d8;
  param_1[1] = &PTR_s_SCCDeckHierarchyInterface_110d30b40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e884; end: 10b65e8b7; -[SCCBusinessCreatorHubOpenDeliverableDetailAction initWithProjectId:deliverableId:] */

void FUN_10b65e884(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707c00;
  uStack_20 = param_1;
  func_0x00010b65e930();
  func_0x00010b65e91c(&uStack_20);
  return;
}



/* Entry: 10b65e8b8; end: 10b65e8c7; +[SCCBusinessCreatorHubOpenDeliverableDetailAction valdiMarshallableObjectDescriptor] */

void FUN_10b65e8b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d30ba0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e8c8; end: 10b65e8fb; -[SCCBusinessCreatorHubOpenProjectOverviewAction initWithProjectId:] */

void FUN_10b65e8c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707c08;
  uStack_20 = param_1;
  func_0x00010b65e930();
  func_0x00010b65e91c(&uStack_20);
  return;
}



/* Entry: 10b65e8fc; end: 10b65e93b; +[SCCBusinessCreatorHubOpenProjectOverviewAction valdiMarshallableObjectDescriptor] */

void FUN_10b65e8fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d30be8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e93c; end: 10b65e943; -[SCCBusinessAdCreationCommonClientObjective__Enum init] */

void FUN_10b65e93c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 10b65e944; end: 10b65e94b; -[SCCBusinessAdCreationCommonPromotableContentType__Enum init] */

void FUN_10b65e944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b65e94c; end: 10b65e97f; -[SCCBusinessAdCreationCommonAdsApiMediaItem initWithMediaId:thumbnailUrl:isVideo:] */

void FUN_10b65e94c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65ea3c(PTR_PTR_112707c10);
  func_0x00010b65ea54(auStack_20);
  return;
}



/* Entry: 10b65e980; end: 10b65e993; +[SCCBusinessAdCreationCommonAdsApiMediaItem valdiMarshallableObjectDescriptor] */

void FUN_10b65e980(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_mediaId_110d30c18;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e994; end: 10b65e9cf; -[SCCBusinessAdCreationCommonCameraSnapMediaItem initWithIsVideo:thumbnailUrl:durationMs:height:width:] */

void FUN_10b65e994(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65ea3c(PTR_PTR_112707c18);
  func_0x00010b65ea54(auStack_20);
  return;
}



/* Entry: 10b65e9d0; end: 10b65e9e3; +[SCCBusinessAdCreationCommonCameraSnapMediaItem valdiMarshallableObjectDescriptor] */

void FUN_10b65e9d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d30c78;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65e9e4; end: 10b65ea1f; -[SCCBusinessAdCreationCommonPromotableContent initWithType:] */

void FUN_10b65e9e4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65ea3c(PTR_PTR_112707c20);
  func_0x00010b65ea54(auStack_20);
  return;
}



/* Entry: 10b65ea20; end: 10b65ea5b; +[SCCBusinessAdCreationCommonPromotableContent valdiMarshallableObjectDescriptor] */

void FUN_10b65ea20(undefined8 *param_1)

{
  *param_1 = &PTR_s_snapId_110d30d38;
  param_1[1] = &PTR_DAT_110d30df8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65ea5c; end: 10b65eb1b; -[SCCBusinessMediaPickerBusinessMediaPickerPayload initWithOnItemsSelected:closeOnItemsSelected:onDismissed:allowMultiSelect:] */

undefined8 *
FUN_10b65ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_112707c28;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b65eb1c; end: 10b65eb43; +[SCCBusinessMediaPickerBusinessMediaPickerPayload valdiMarshallableObjectDescriptor] */

void FUN_10b65eb1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d30e60;
  param_1[1] = &PTR_DAT_110d30ff8;
  param_1[2] = &PTR_s_ob_v_110d30e30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65eb44; end: 10b65eb6b;  */

undefined8 FUN_10b65eb44(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b65eb6c; end: 10b65ebeb;  */

void FUN_10b65eb6c(undefined8 param_1)

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
  pcStack_38 = FUN_10b65ebec;
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



/* Entry: 10b65ebec; end: 10b65ec1b;  */

void FUN_10b65ebec(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b65ec1c; end: 10b65ec93; -[SCCBusinessProfessionalProfileProfessionalProfileFlowType__Enum init] */

undefined8 *** FUN_10b65ec1c(void)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  func_0x00010b65ef38();
  pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b65ef14();
  func_0x00010b65eefc();
  func_0x00010b65ef24(extraout_x8);
  if ((bool)in_ZR) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  pppuVar3 = &ppuStack_70;
  func_0x00010b65ef38();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f6aa78;
  uVar4 = 1;
  pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = extraout_x8_00;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b65ef14();
  pppuVar2 = pppuVar1;
  func_0x00010b65eefc();
  func_0x00010b65ef24(uStack_68);
  if ((bool)in_ZR) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  _objc_retain(in_x4);
  _objc_retain(uVar4);
  _objc_retain(pppuVar3);
  _objc_retainBlock();
  puStack_b8 = PTR_PTR_112707c30;
  pppuVar1 = &ppuStack_c0;
  ppuStack_c0 = pppuVar2;
  _objc_msgSendSuper2(pppuVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  func_0x00010b65eefc();
  _objc_release(uVar4);
  _objc_release(pppuVar3);
  _objc_release(in_x5);
  return pppuVar1;
}



/* Entry: 10b65ec94; end: 10b65ed03; -[SCCBusinessProfessionalProfileProfessionalProfilePageLaunchSource__Enum init] */

undefined8 *** FUN_10b65ec94(void)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 extraout_x8;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  pppuVar3 = &ppuStack_30;
  func_0x00010b65ef38();
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f6aa78;
  uVar4 = 1;
  pppuVar1 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b65ef14();
  pppuVar2 = pppuVar1;
  func_0x00010b65eefc();
  func_0x00010b65ef24(uStack_28);
  if ((bool)in_ZR) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  _objc_retain(in_x4);
  _objc_retain(uVar4);
  _objc_retain(pppuVar3);
  _objc_retainBlock();
  puStack_78 = PTR_PTR_112707c30;
  pppuVar1 = &ppuStack_80;
  ppuStack_80 = pppuVar2;
  _objc_msgSendSuper2(pppuVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  func_0x00010b65eefc();
  _objc_release(uVar4);
  _objc_release(pppuVar3);
  _objc_release(in_x5);
  return pppuVar1;
}



/* Entry: 10b65ed04; end: 10b65edb7; -[SCCBusinessProfessionalProfileProfessionalProfilePageLaunchPayload initWithProfileId:source:starterPageType:updateBusinessProfile:] */

undefined8 *
FUN_10b65ed04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_112707c30;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  func_0x00010b65eefc();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 10b65edb8; end: 10b65edcb; +[SCCBusinessProfessionalProfileProfessionalProfilePageLaunchPayload valdiMarshallableObjectDescriptor] */

void FUN_10b65edb8(undefined8 *param_1)

{
  *param_1 = &PTR_s_profileId_110d31018;
  param_1[1] = &PTR_DAT_110d31090;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65edcc; end: 10b65eee7; -[SCCBusinessProfessionalProfileProfessionalProfileWorkflowRouterProps initWithDeckHierarchy:encodedBusinessProfileAndUserData:source:starterPageType:notificationPresenter:onExitedFlow:updateBusinessProfile:] */

undefined8 *
FUN_10b65edcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  puStack_68 = PTR_PTR_112707c38;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010b65eefc();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_8);
  return puVar2;
}



/* Entry: 10b65eee8; end: 10b65ef4b; +[SCCBusinessProfessionalProfileProfessionalProfileWorkflowRouterProps valdiMarshallableObjectDescriptor] */

void FUN_10b65eee8(undefined8 *param_1)

{
  *param_1 = &PTR_s_deckHierarchy_110d310a8;
  param_1[1] = &PTR_s_SCCDeckHierarchyInterface_110d31168;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65ef4c; end: 10b65ef7f; -[SCCBusinessSnapPromoteSnapPromoteDataSourceOptions init] */

void FUN_10b65ef4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707c40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b65ef80; end: 10b65ef9f; +[SCCBusinessSnapPromoteSnapPromoteDataSourceOptions valdiMarshallableObjectDescriptor] */

void FUN_10b65ef80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d31190;
  param_1[1] = &PTR_DAT_110d31250;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65efa0; end: 10b65efa7; -[SCCBusinessSponsoredSponsorStatus__Enum init] */

void FUN_10b65efa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b65efa8; end: 10b65efe3; -[SCCBusinessSponsoredAddPaidPartnershipPageContext initWithAlertPresenter:pageHandlers:webLauncher:networkingClient:userInfoProvider:] */

void FUN_10b65efa8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f11c(PTR_PTR_112707c48);
  func_0x00010b65f138(auStack_20);
  return;
}



/* Entry: 10b65efe4; end: 10b65eff7; +[SCCBusinessSponsoredAddPaidPartnershipPageContext valdiMarshallableObjectDescriptor] */

void FUN_10b65efe4(undefined8 *param_1)

{
  *param_1 = &PTR_s_alertPresenter_110d31270;
  param_1[1] = &PTR_s_SCComposerFoundationAlertPresent_110d31330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65eff8; end: 10b65f02b; -[SCCBusinessSponsoredAddPaidPartnershipPageViewModel initWithEncodedBusinessProfileAndUserDataList:] */

void FUN_10b65eff8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f11c(PTR_PTR_112707c50);
  func_0x00010b65f138(auStack_20);
  return;
}



/* Entry: 10b65f02c; end: 10b65f03f; +[SCCBusinessSponsoredAddPaidPartnershipPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b65f02c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d31370;
  param_1[1] = &PTR_DAT_110d313e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f040; end: 10b65f063; -[SCCBusinessSponsoredPaidPartnershipInfoTrayViewModel init] */

void FUN_10b65f040(void)

{
  func_0x00010b65f108(PTR_PTR_112707c58);
  return;
}



/* Entry: 10b65f064; end: 10b65f073; +[SCCBusinessSponsoredPaidPartnershipInfoTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b65f064(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismiss_110d313f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f074; end: 10b65f097; -[SCCBusinessSponsoredSponsorInfo init] */

void FUN_10b65f074(void)

{
  func_0x00010b65f108(PTR_PTR_112707c60);
  return;
}



/* Entry: 10b65f098; end: 10b65f0ab; +[SCCBusinessSponsoredSponsorInfo valdiMarshallableObjectDescriptor] */

void FUN_10b65f098(undefined8 *param_1)

{
  *param_1 = &PTR_s_status_110d31428;
  param_1[1] = &PTR_DAT_110d31488;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f0ac; end: 10b65f0e7; -[SCCBusinessSponsoredSponsorableProfile initWithId2:] */

void FUN_10b65f0ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f11c(PTR_PTR_112707c68);
  func_0x00010b65f138(auStack_20);
  return;
}



/* Entry: 10b65f0e8; end: 10b65f13f; +[SCCBusinessSponsoredSponsorableProfile valdiMarshallableObjectDescriptor] */

void FUN_10b65f0e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110d31498;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f140; end: 10b65f147; -[SCContentSyncJobTrigger__Enum init] */

void FUN_10b65f140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b65f148; end: 10b65f14f; -[SCDiscoverVisibilityEvent__Enum init] */

void FUN_10b65f148(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b65f150; end: 10b65f157; -[SCNativeModelGenerationScheduler__Enum init] */

void FUN_10b65f150(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b65f158; end: 10b65f1af; -[SCCContentDiscoverFriendOfGroupStoryEducationContext initWithComplete:] */

undefined8 * FUN_10b65f158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112707c70;
  uStack_30 = param_1;
  func_0x00010b65f704();
  puVar1 = &uStack_30;
  func_0x00010b65f6fc(puVar1);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b65f1b0; end: 10b65f1c7; +[SCCContentDiscoverFriendOfGroupStoryEducationContext valdiMarshallableObjectDescriptor] */

void FUN_10b65f1b0(undefined8 *param_1)

{
  *param_1 = &PTR_s_complete_110d31558;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110d31528;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f1c8; end: 10b65f1ef;  */

undefined8 FUN_10b65f1c8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b65f1f0; end: 10b65f24f;  */

void FUN_10b65f1f0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b65f710(FUN_10b65f670);
  _objc_retainBlock(&puStack_48);
  func_0x00010b65f748();
  func_0x00010b65f720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b65f250; end: 10b65f283; -[SCCContentDiscoverViewModel init] */

void FUN_10b65f250(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707c78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b65f284; end: 10b65f293; +[SCCContentDiscoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b65f284(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d31588;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f294; end: 10b65f2f7; -[SCCDiscoverContext initWithNetworkClient:grpcServiceFactory:friendStore:deckContainer:] */

void FUN_10b65f294(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112707c80;
  uStack_30 = param_1;
  func_0x00010b65f704();
  func_0x00010b65f6fc(&uStack_30);
  return;
}



/* Entry: 10b65f2f8; end: 10b65f30b; +[SCCDiscoverContext valdiMarshallableObjectDescriptor] */

void FUN_10b65f2f8(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkClient_110d315b8;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110d318e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f30c; end: 10b65f35f; -[SCCDiscoverFeedImpressionEvent initWithEventTimeSec:viewWidth:viewHeight:visibleWidth:visibleHeight:visible:impressionId:positionInSection:sectionId:cardData:cardFormat:requestId:] */

void FUN_10b65f30c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f6dc(PTR_PTR_112707c88);
  func_0x00010b65f6fc(auStack_20);
  return;
}



/* Entry: 10b65f360; end: 10b65f36f; +[SCCDiscoverFeedImpressionEvent valdiMarshallableObjectDescriptor] */

void FUN_10b65f360(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d319e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f370; end: 10b65f3e7; -[SCCIFSPlaybackToValdiBindings initWithCurrentlyFinishedPlayback:paginatedItems:] */

undefined8 *
FUN_10b65f370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_112707c90;
  uStack_40 = param_1;
  func_0x00010b65f704();
  puVar1 = &uStack_40;
  func_0x00010b65f6fc(puVar1);
  func_0x00010b65f720();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b65f3e8; end: 10b65f407; +[SCCIFSPlaybackToValdiBindings valdiMarshallableObjectDescriptor] */

void FUN_10b65f3e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d31b80;
  param_1[1] = &PTR_DAT_110d31bc8;
  param_1[2] = &PTR_DAT_110d31b50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f408; end: 10b65f433;  */

undefined8 FUN_10b65f408(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2,param_2[2],param_2[3]);
  return 0;
}



/* Entry: 10b65f434; end: 10b65f493;  */

void FUN_10b65f434(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b65f710(0x10b65f6a0);
  _objc_retainBlock(&puStack_48);
  func_0x00010b65f748();
  func_0x00010b65f720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b65f494; end: 10b65f4c3; -[SCCNativeStoryClientModelGenerationRequest initWithRawStoryCards:scheduler:] */

void FUN_10b65f494(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f6dc(PTR_PTR_112707c98);
  func_0x00010b65f6fc(auStack_20);
  return;
}



/* Entry: 10b65f4c4; end: 10b65f4d7; +[SCCNativeStoryClientModelGenerationRequest valdiMarshallableObjectDescriptor] */

void FUN_10b65f4c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d31be8;
  param_1[1] = &PTR_DAT_110d31c48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f4d8; end: 10b65f50b; -[SCCNativeStoryClientModelGenerationRequestOptions initWithPrepareManagedPlayback:] */

void FUN_10b65f4d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707ca0;
  uStack_20 = param_1;
  func_0x00010b65f704();
  func_0x00010b65f6fc(&uStack_20);
  return;
}



/* Entry: 10b65f50c; end: 10b65f51b; +[SCCNativeStoryClientModelGenerationRequestOptions valdiMarshallableObjectDescriptor] */

void FUN_10b65f50c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d31c68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f51c; end: 10b65f553; -[SCCStoryRawStoryCard initWithRawStoryCard:feedType:compositeStoryId:itemPosition:] */

void FUN_10b65f51c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f6dc(PTR_PTR_112707ca8);
  func_0x00010b65f6fc(auStack_20);
  return;
}



/* Entry: 10b65f554; end: 10b65f563; +[SCCStoryRawStoryCard valdiMarshallableObjectDescriptor] */

void FUN_10b65f554(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d31cb0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f564; end: 10b65f5a7; -[SCContentDataServiceSyncerContext initWithNetworkClient:grpcServiceFactory:contentRequestInfoProvider:] */

void FUN_10b65f564(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f6dc(PTR_PTR_112707cb0);
  func_0x00010b65f6fc(auStack_20);
  return;
}



/* Entry: 10b65f5a8; end: 10b65f5bb; +[SCContentDataServiceSyncerContext valdiMarshallableObjectDescriptor] */

void FUN_10b65f5a8(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkClient_110d31d28;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110d31e18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f5bc; end: 10b65f60f; -[SCNativePromotedStoryCtaTweaks initWithPromotedStoryEnableCtaLocally:promotedStoryShowCtaLocally:promotedStoryCtaAnimationDurationLocally:promotedStoryCtaAnimationDelayLocally:promotedStoryCtaZoomAnimationDurationLocally:promotedStoryCtaZoomAnimationDelayLocally:promotedStoryCtaZoomRatioLocally:promotedStorySupportedAdTypes:promotedStoryCtaTapAreaPaddingTopLocally:promotedStoryCtaTapAreaPaddingBottomLocally:promotedStoryCtaTapAreaPaddingLeftLocally:promotedStoryCtaTapAreaPaddingRightLocally:promotedStoryCtaShowTapAreaVisualOverlay:promotedStoryCtaShowOnReplay:promotedStoryCtaEnableZeroTapTarget:] */

void FUN_10b65f5bc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f6dc(PTR_PTR_112707cb8);
  func_0x00010b65f6fc(auStack_20);
  return;
}



/* Entry: 10b65f610; end: 10b65f61f; +[SCNativePromotedStoryCtaTweaks valdiMarshallableObjectDescriptor] */

void FUN_10b65f610(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d31e68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f620; end: 10b65f65f; -[SCPromotedStoryTapEvent initWithItem:positionInSection:xPositionRelativePx:yPositionRelativePx:xPositionAbsolutePx:yPositionAbsolutePx:tileWidth:tileHeight:feedType:] */

void FUN_10b65f620(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b65f6dc(PTR_PTR_112707cc0);
  func_0x00010b65f6fc(auStack_20);
  return;
}



/* Entry: 10b65f660; end: 10b65f66f; +[SCPromotedStoryTapEvent valdiMarshallableObjectDescriptor] */

void FUN_10b65f660(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_item_110d32000;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f670; end: 10b65f6cf;  */

void FUN_10b65f670(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b65f6d0; end: 10b65f753;  */

void FUN_10b65f6d0(undefined8 *param_1)

{
  undefined8 in_x9;
  
  *param_1 = in_x9;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f754; end: 10b65f797; -[SCCBillingAddressOption initWithId2:firstName:lastName:fullName:streetAddressLine1:streetAddressLine2:city:state:postalCode:formattedFirstLineAddress:formattedSecondLineAddress:] */

void FUN_10b65f754(undefined8 param_1)

{
  func_0x00010b65f8ac(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b65f798; end: 10b65f7a7; +[SCCBillingAddressOption valdiMarshallableObjectDescriptor] */

void FUN_10b65f798(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110d320f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f7a8; end: 10b65f7ef; -[SCCCreditCardOption initWithCreditCardHolder:creditCardType:lastFourDigits:expiredMonth:expiredYear:isDefault:] */

void FUN_10b65f7a8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707cd0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b65f7f0; end: 10b65f7ff; +[SCCCreditCardOption valdiMarshallableObjectDescriptor] */

void FUN_10b65f7f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d32210;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f800; end: 10b65f84f; -[SCCInputAddress initWithFirstName:lastName:fullName:streetAddressLine1:streetAddressLine2:city:state:postalCode:] */

void FUN_10b65f800(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112707cd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b65f850; end: 10b65f85f; +[SCCInputAddress valdiMarshallableObjectDescriptor] */

void FUN_10b65f850(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110d322d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b65f860; end: 10b65f88f; -[SCCInputCreditCard initWithCardNumber:cvc:expMoth:expYear:] */

void FUN_10b65f860(undefined8 param_1)

{
  func_0x00010b65f8ac(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}


