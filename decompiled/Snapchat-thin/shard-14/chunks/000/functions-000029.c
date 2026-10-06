/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af35ed8; end: 10af35edb; -[SCCPlusManagementPageUpgradeTierType__Enum init] */

void FUN_10af35ed8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af35edc; end: 10af35edf; -[SCCPlusProductDiscountPaymentMode__Enum init] */

void FUN_10af35edc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af35ee0; end: 10af35ee7; -[SCCPlusSendToSourceType__Enum init] */

void FUN_10af35ee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10af35ee8; end: 10af35eeb; -[SCCPlusStatusBarStyle__Enum init] */

void FUN_10af35ee8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af35eec; end: 10af35ef3; -[SCCPlusSubscribePageTrayType__Enum init] */

void FUN_10af35eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10af35ef4; end: 10af35f9b; -[SCCPlusCampaignSource__Enum init] */

undefined8 FUN_10af35ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_113331c30;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f38eb8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc4a38;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110f18518;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0105e0(param_1,param_2,puVar1);
  func_0x00010af37758();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010af376e8(PTR_PTR_112702670);
  func_0x00010af376c4();
  return uVar2;
}



/* Entry: 10af35f9c; end: 10af35fc3; -[SCCPlusAppIcon initWithName:isDefault:] */

void FUN_10af35f9c(void)

{
  func_0x00010af376e8(PTR_PTR_112702670);
  func_0x00010af376c4();
  return;
}



/* Entry: 10af35fc4; end: 10af35fd3; +[SCCPlusAppIcon valdiMarshallableObjectDescriptor] */

void FUN_10af35fc4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c94160;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af35fd4; end: 10af3600b; -[SCCPlusAppthemePageV2Context initWithFeatureCatalog:navigator:subscribePagePresenter:captureColor:customAppTheme:] */

void FUN_10af35fd4(void)

{
  func_0x00010af376e8(PTR_PTR_112702678);
  func_0x00010af377c8();
  func_0x00010af37674();
  return;
}



/* Entry: 10af3600c; end: 10af3601f; +[SCCPlusAppthemePageV2Context valdiMarshallableObjectDescriptor] */

void FUN_10af3600c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c941d8;
  param_1[1] = &PTR_DAT_110c94340;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36020; end: 10af3603f; -[SCCPlusAppthemePageV2ViewModel init] */

void FUN_10af36020(void)

{
  func_0x00010af376d4(PTR_PTR_112702680);
  return;
}



/* Entry: 10af36040; end: 10af3604f; +[SCCPlusAppthemePageV2ViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36040(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e539f38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36050; end: 10af36073; -[SCCPlusBillboardCampaign initWithBillboardCampaignId:billboardCampaignCofName:campaign:] */

void FUN_10af36050(void)

{
  func_0x00010af376e8(PTR_PTR_112702688);
  func_0x00010af37674();
  return;
}



/* Entry: 10af36074; end: 10af36087; +[SCCPlusBillboardCampaign valdiMarshallableObjectDescriptor] */

void FUN_10af36074(undefined8 *param_1)

{
  *param_1 = &PTR_s_billboardCampaignId_110c94398;
  param_1[1] = &PTR_DAT_110c943f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36088; end: 10af360af; -[SCCPlusBuddyPassData initWithId2:senderUserId:receiverUserId:createdTimeMs:expiresTimeMs:] */

void FUN_10af36088(void)

{
  func_0x00010af376e8(PTR_PTR_112702690);
  func_0x00010af37674();
  return;
}



/* Entry: 10af360b0; end: 10af360bf; +[SCCPlusBuddyPassData valdiMarshallableObjectDescriptor] */

void FUN_10af360b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_id_110c94408;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af360c0; end: 10af360fb; -[SCCPlusCampaign initWithCampaignId:title:subtitle:data:fhpLayoutVariant:] */

void FUN_10af360c0(void)

{
  func_0x00010af376e8(PTR_PTR_112702698);
  func_0x00010af37674();
  return;
}



/* Entry: 10af360fc; end: 10af3610f; +[SCCPlusCampaign valdiMarshallableObjectDescriptor] */

void FUN_10af360fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_campaignId_110c94498;
  param_1[1] = &PTR_DAT_110c945a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36110; end: 10af36137; -[SCCPlusCampaignButton initWithText:onClickLink:] */

void FUN_10af36110(void)

{
  func_0x00010af3772c(PTR_PTR_1127026a0);
  func_0x00010af37708();
  return;
}



/* Entry: 10af36138; end: 10af36147; +[SCCPlusCampaignButton valdiMarshallableObjectDescriptor] */

void FUN_10af36138(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_text_110c945b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36148; end: 10af3616f; -[SCCPlusCampaignImpressionLoggingContext initWithReceivedCampaignIds:] */

void FUN_10af36148(void)

{
  func_0x00010af376e8(PTR_PTR_1127026a8);
  func_0x00010af37698();
  return;
}



/* Entry: 10af36170; end: 10af3617f; +[SCCPlusCampaignImpressionLoggingContext valdiMarshallableObjectDescriptor] */

void FUN_10af36170(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c94600;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36180; end: 10af361af; -[SCCPlusCampaignProduct initWithRefId:price:tier:isFamilyPlan:isConsumable:isStorage:] */

void FUN_10af36180(void)

{
  func_0x00010af376e8(PTR_PTR_1127026b0);
  func_0x00010af376c4();
  return;
}



/* Entry: 10af361b0; end: 10af361c3; +[SCCPlusCampaignProduct valdiMarshallableObjectDescriptor] */

void FUN_10af361b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c94660;
  param_1[1] = &PTR_DAT_110c94738;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af361c4; end: 10af361fb; -[SCCPlusChatWallpaperUserPickerPageContext initWithChatWallpaperPresenter:friendStore:groupStore:userInfoProvider:friendmojiProvider:alertPresenter:navigator:] */

void FUN_10af361c4(undefined8 param_1)

{
  func_0x00010af37828(param_1,PTR_s_initWithFieldValues__1125e24b8);
  func_0x00010af376c4();
  return;
}



/* Entry: 10af361fc; end: 10af3620f; +[SCCPlusChatWallpaperUserPickerPageContext valdiMarshallableObjectDescriptor] */

void FUN_10af361fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c94760;
  param_1[1] = &PTR_DAT_110c94838;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36210; end: 10af36243; -[SCCPlusCustomNotificationSoundPageContext initWithNavigator:playerFactory:localSubscriptionStore:subscribePagePresenter:customNotificationSoundProvider:alertPresenter:] */

void FUN_10af36210(void)

{
  func_0x00010af376e8(PTR_PTR_1127026c0);
  func_0x00010af37828();
  func_0x00010af376c4();
  return;
}



/* Entry: 10af36244; end: 10af36257; +[SCCPlusCustomNotificationSoundPageContext valdiMarshallableObjectDescriptor] */

void FUN_10af36244(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110c94880;
  param_1[1] = &PTR_s_SCValdiINavigator_110c94970;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36258; end: 10af3627f; -[SCCPlusCustomNotificationSoundPageViewModel initWithSoundType:] */

void FUN_10af36258(void)

{
  func_0x00010af3772c(PTR_PTR_1127026c8);
  func_0x00010af37708();
  return;
}



/* Entry: 10af36280; end: 10af36293; +[SCCPlusCustomNotificationSoundPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36280(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c949c0;
  param_1[1] = &PTR_DAT_110c94a08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36294; end: 10af362bf; -[SCCPlusDefaultTabTrayViewContext initWithNavigator:subscribePagePresenter:plusAppStartConfig:blizzardLogger:loggingContext:subscriptionStore:] */

void FUN_10af36294(void)

{
  func_0x00010af376e8(PTR_PTR_1127026d0);
  func_0x00010af37674();
  return;
}



/* Entry: 10af362c0; end: 10af362d3; +[SCCPlusDefaultTabTrayViewContext valdiMarshallableObjectDescriptor] */

void FUN_10af362c0(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110c94a18;
  param_1[1] = &PTR_s_SCValdiINavigator_110c94ad8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af362d4; end: 10af362fb; -[SCCPlusEmoji initWithEmoji:] */

void FUN_10af362d4(void)

{
  func_0x00010af376e8(PTR_PTR_1127026d8);
  func_0x00010af37698();
  return;
}



/* Entry: 10af362fc; end: 10af3630f; +[SCCPlusEmoji valdiMarshallableObjectDescriptor] */

void FUN_10af362fc(undefined8 *param_1)

{
  *param_1 = &PTR_s_emoji_110c94b18;
  param_1[1] = &PTR_DAT_110c94b78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36310; end: 10af36337; -[SCCPlusEmojiCollection initWithEmojis:] */

void FUN_10af36310(void)

{
  func_0x00010af3772c(PTR_PTR_1127026e0);
  func_0x00010af37708();
  return;
}



/* Entry: 10af36338; end: 10af3634b; +[SCCPlusEmojiCollection valdiMarshallableObjectDescriptor] */

void FUN_10af36338(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c94b88;
  param_1[1] = &PTR_DAT_110c94bd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af3634c; end: 10af36373; -[SCCPlusEmojiSkinTones initWithLight:mediumLight:medium:mediumDark:dark:] */

void FUN_10af3634c(void)

{
  func_0x00010af376e8(PTR_PTR_1127026e8);
  func_0x00010af37674();
  return;
}



/* Entry: 10af36374; end: 10af36383; +[SCCPlusEmojiSkinTones valdiMarshallableObjectDescriptor] */

void FUN_10af36374(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_light_110c94be0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36384; end: 10af363a3; -[SCCPlusEntryInfo init] */

void FUN_10af36384(void)

{
  func_0x00010af376d4(PTR_PTR_1127026f0);
  return;
}



/* Entry: 10af363a4; end: 10af363b3; +[SCCPlusEntryInfo valdiMarshallableObjectDescriptor] */

void FUN_10af363a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c94c70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af363b4; end: 10af363d3; -[SCCPlusFeatureCatalog init] */

void FUN_10af363b4(void)

{
  func_0x00010af376d4(PTR_PTR_1127026f8);
  return;
}



/* Entry: 10af363d4; end: 10af363e7; +[SCCPlusFeatureCatalog valdiMarshallableObjectDescriptor] */

void FUN_10af363d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c94ca0;
  param_1[1] = &PTR_DAT_110c951c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af363e8; end: 10af3640f; -[SCCPlusFetchProductsResponse initWithProducts:subscribePageConfig:] */

void FUN_10af363e8(void)

{
  func_0x00010af3772c(PTR_PTR_112702700);
  func_0x00010af37708();
  return;
}



/* Entry: 10af36410; end: 10af36423; +[SCCPlusFetchProductsResponse valdiMarshallableObjectDescriptor] */

void FUN_10af36410(undefined8 *param_1)

{
  *param_1 = &PTR_s_products_110c951e0;
  param_1[1] = &PTR_DAT_110c95228;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36424; end: 10af3644b; -[SCCPlusFetchReferralProductsResponse initWithProducts:encodedResponse:] */

void FUN_10af36424(void)

{
  func_0x00010af3772c(PTR_PTR_112702708);
  func_0x00010af37708();
  return;
}



/* Entry: 10af3644c; end: 10af3645f; +[SCCPlusFetchReferralProductsResponse valdiMarshallableObjectDescriptor] */

void FUN_10af3644c(undefined8 *param_1)

{
  *param_1 = &PTR_s_products_110c95238;
  param_1[1] = &PTR_DAT_110c95280;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36460; end: 10af3647f; -[SCCPlusFriendProfileGiftingCardContext initWithGiftingPagePresenter:] */

void FUN_10af36460(void)

{
  func_0x00010af376a8(PTR_PTR_112702710);
  return;
}



/* Entry: 10af36480; end: 10af36493; +[SCCPlusFriendProfileGiftingCardContext valdiMarshallableObjectDescriptor] */

void FUN_10af36480(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c95290;
  param_1[1] = &PTR_DAT_110c952c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36494; end: 10af364b3; -[SCCPlusFriendProfileGiftingCardViewModel initWithFriendName:] */

void FUN_10af36494(void)

{
  func_0x00010af376a8(PTR_PTR_112702718);
  return;
}



/* Entry: 10af364b4; end: 10af364c3; +[SCCPlusFriendProfileGiftingCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af364b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c952d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af364c4; end: 10af365ef; -[SCCPlusFriendProfileSectionViewContext initWithLaunchSubscribePage:launchSubscriptionManagement:launchPinBestFriendAlert:launchSendBuddyPass:localInAppPurchaseService:loggingContext:blizzardLogger:] */

undefined8 *
FUN_10af364c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x00010af377f4();
  _objc_retain(param_8);
  func_0x00010af37820();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010af37848();
  _objc_retainBlock();
  _objc_release(param_5);
  uVar1 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_68 = PTR_PTR_112702720;
  uStack_70 = param_1;
  func_0x00010af3774c();
  puVar2 = &uStack_70;
  func_0x00010af37744(puVar2);
  func_0x00010af377c0();
  func_0x00010af3777c();
  func_0x00010af37790();
  _objc_release(uVar1);
  func_0x00010af37848();
  func_0x00010af37834();
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10af365f0; end: 10af36613; +[SCCPlusFriendProfileSectionViewContext valdiMarshallableObjectDescriptor] */

void FUN_10af365f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c95330;
  param_1[1] = &PTR_DAT_110c95450;
  param_1[2] = &PTR_s_ob_v_110c95300;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36614; end: 10af3663b;  */

undefined8 FUN_10af36614(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10af3663c; end: 10af366a3;  */

void FUN_10af3663c(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10af3763c;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  func_0x00010af37820();
  _objc_retainBlock(&puStack_48);
  func_0x00010af37850();
  func_0x00010af37790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af366a4; end: 10af366d3; -[SCCPlusFriendProfileSectionViewModel initWithSubscriptionInfo:friendUserId:] */

void FUN_10af366a4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af376e8(PTR_PTR_112702728);
  func_0x00010af37744(auStack_20);
  return;
}



/* Entry: 10af366d4; end: 10af366e7; +[SCCPlusFriendProfileSectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af366d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c95480;
  param_1[1] = &PTR_DAT_110c954f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af366e8; end: 10af3674f; -[SCCPlusFstHalfSheetContext initWithNavigator:blizzardLogger:openLinkAfterDismissal:] */

undefined1 * FUN_10af366e8(void)

{
  undefined1 *puVar1;
  
  func_0x00010af377a8();
  func_0x00010af377f4();
  func_0x00010af377fc();
  func_0x00010af3774c();
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010af37744(puVar1);
  func_0x00010af3777c();
  func_0x00010af377c0();
  func_0x00010af37790();
  return puVar1;
}



/* Entry: 10af36750; end: 10af36763; +[SCCPlusFstHalfSheetContext valdiMarshallableObjectDescriptor] */

void FUN_10af36750(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110c95510;
  param_1[1] = &PTR_s_SCValdiINavigator_110c95570;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36764; end: 10af367bb; -[SCCPlusFstHalfSheetViewModel initWithCampaign:onCampaignEvent:] */

undefined8 FUN_10af36764(undefined8 param_1)

{
  func_0x00010af37804();
  func_0x00010af377fc();
  func_0x00010af3774c();
  func_0x00010af37708();
  func_0x00010af3777c();
  func_0x00010af37790();
  return param_1;
}



/* Entry: 10af367bc; end: 10af367df; +[SCCPlusFstHalfSheetViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af367bc(undefined8 *param_1)

{
  *param_1 = &PTR_s_campaign_110c955b8;
  param_1[1] = &PTR_DAT_110c95600;
  param_1[2] = &PTR_s_oi_v_110c95588;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af367e0; end: 10af36803;  */

undefined8 FUN_10af367e0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10af36804; end: 10af3686b;  */

void FUN_10af36804(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10af37658;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  func_0x00010af37820();
  _objc_retainBlock(&puStack_48);
  func_0x00010af37850();
  func_0x00010af37790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af3686c; end: 10af36893; -[SCCPlusGenAiStickersPAndLTrayContext initWithNavigator:genAiStickersPAndLService:alertPresenter:] */

void FUN_10af3686c(void)

{
  func_0x00010af376e8(PTR_PTR_112702740);
  func_0x00010af376c4();
  return;
}



/* Entry: 10af36894; end: 10af368a7; +[SCCPlusGenAiStickersPAndLTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10af36894(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110c95618;
  param_1[1] = &PTR_s_SCValdiINavigator_110c95690;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af368a8; end: 10af368cf; -[SCCPlusGiftingChatStatusMessageViewContext initWithGiftingPagePresenter:userProvider:] */

void FUN_10af368a8(void)

{
  func_0x00010af3772c(PTR_PTR_112702748);
  func_0x00010af37708();
  return;
}



/* Entry: 10af368d0; end: 10af368e3; +[SCCPlusGiftingChatStatusMessageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10af368d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c956b8;
  param_1[1] = &PTR_DAT_110c95700;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af368e4; end: 10af3690b; -[SCCPlusGiftingChatStatusMessageViewModel initWithIsSelfInitiated:otherUserId:] */

void FUN_10af368e4(void)

{
  func_0x00010af376e8(PTR_PTR_112702750);
  func_0x00010af37698();
  return;
}



/* Entry: 10af3690c; end: 10af3691b; +[SCCPlusGiftingChatStatusMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af3690c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c95718;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af3691c; end: 10af3694b; -[SCCPlusGiftingFeature initWithBadge:purchasingEnabled:] */

void FUN_10af3691c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af376e8(PTR_PTR_112702758);
  func_0x00010af37744(auStack_20);
  return;
}



/* Entry: 10af3694c; end: 10af3695f; +[SCCPlusGiftingFeature valdiMarshallableObjectDescriptor] */

void FUN_10af3694c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c95778;
  param_1[1] = &PTR_DAT_110c957f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36960; end: 10af36987; -[SCCPlusGiftingLinkTrayContext initWithNavigator:loggingContext:giftingPagePresenter:systemShareSheetPresenter:billboardStringsService:] */

void FUN_10af36960(void)

{
  func_0x00010af376e8(PTR_PTR_112702760);
  func_0x00010af37674();
  return;
}



/* Entry: 10af36988; end: 10af3699b; +[SCCPlusGiftingLinkTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10af36988(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110c95810;
  param_1[1] = &PTR_s_SCValdiINavigator_110c958a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af3699c; end: 10af36a07; -[SCCPlusGiftingPageViewContext initWithFeatureCatalog:navigator:subscriptionStore:giftingPurchaseService:subscriptionShopGrpcService:alertPresenter:actionSheetPresenter:inAppBrowserPresenter:blizzardLogger:userInfoProvider:friendStore:friendmojiProvider:loggingContext:billboardStringsService:presentationType:] */

void FUN_10af3699c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112702768;
  uStack_30 = param_1;
  func_0x00010af37828(param_1,PTR_s_initWithFieldValues__1125e24b8);
  func_0x00010af37720(&uStack_30);
  return;
}



/* Entry: 10af36a08; end: 10af36a1b; +[SCCPlusGiftingPageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10af36a08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c958d0;
  param_1[1] = &PTR_DAT_110c95ab0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36a1c; end: 10af36a3b; -[SCCPlusGiftingPageViewModel init] */

void FUN_10af36a1c(void)

{
  func_0x00010af376d4(PTR_PTR_112702770);
  return;
}



/* Entry: 10af36a3c; end: 10af36a4b; +[SCCPlusGiftingPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36a3c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c95b50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36a4c; end: 10af36a7b; -[SCCPlusHalfSheetUi initWithLayout:] */

void FUN_10af36a4c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af376e8(PTR_PTR_112702778);
  func_0x00010af37744(auStack_20);
  return;
}



/* Entry: 10af36a7c; end: 10af36a8f; +[SCCPlusHalfSheetUi valdiMarshallableObjectDescriptor] */

void FUN_10af36a7c(undefined8 *param_1)

{
  *param_1 = &PTR_s_layout_110c95b98;
  param_1[1] = &PTR_DAT_110c95c10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36a90; end: 10af36ab7; -[SCCPlusHandleCampaignEventContext initWithCampaignData:eventType:campaignSource:] */

void FUN_10af36a90(void)

{
  func_0x00010af376e8(PTR_PTR_112702780);
  func_0x00010af37674();
  return;
}



/* Entry: 10af36ab8; end: 10af36acb; +[SCCPlusHandleCampaignEventContext valdiMarshallableObjectDescriptor] */

void FUN_10af36ab8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c95c28;
  param_1[1] = &PTR_DAT_110c95cb8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36acc; end: 10af36aeb; -[SCCPlusManagementPageFeatureSettings init] */

void FUN_10af36acc(void)

{
  func_0x00010af376d4(PTR_PTR_112702788);
  return;
}



/* Entry: 10af36aec; end: 10af36aff; +[SCCPlusManagementPageFeatureSettings valdiMarshallableObjectDescriptor] */

void FUN_10af36aec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c95ce0;
  param_1[1] = &PTR_DAT_110c95ea8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36b00; end: 10af36b83; -[SCCPlusManagementPageViewContext initWithNavigator:alertPresenter:subscriptionShopGrpcService:localSubscriptionStore:inAppBrowserPresenter:blizzardLogger:networkingClient:subscribePagePresenter:] */

void FUN_10af36b00(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112702790;
  uStack_30 = param_1;
  func_0x00010af37828(param_1,PTR_s_initWithFieldValues__1125e24b8);
  func_0x00010af37720(&uStack_30);
  return;
}



/* Entry: 10af36b84; end: 10af36b97; +[SCCPlusManagementPageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10af36b84(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110c95eb8;
  param_1[1] = &PTR_s_SCValdiINavigator_110c964d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36b98; end: 10af36bcf; -[SCCPlusManagementPageViewModel initWithFeatureCatalog:] */

void FUN_10af36b98(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af376e8(PTR_PTR_112702798);
  func_0x00010af37744(auStack_20);
  return;
}



/* Entry: 10af36bd0; end: 10af36be3; +[SCCPlusManagementPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36bd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c966b0;
  param_1[1] = &PTR_DAT_110c96740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36be4; end: 10af36c27; -[SCCPlusMyProfileCreatorFanPassSectionContext initWithPresentManagementPage:] */

void FUN_10af36be4(void)

{
  func_0x00010af37784();
  func_0x00010af3774c();
  func_0x00010af37708();
  func_0x00010af37758();
  return;
}



/* Entry: 10af36c28; end: 10af36c37; +[SCCPlusMyProfileCreatorFanPassSectionContext valdiMarshallableObjectDescriptor] */

void FUN_10af36c28(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c96758;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36c38; end: 10af36c57; -[SCCPlusMyProfileCreatorFanPassSectionViewModel init] */

void FUN_10af36c38(void)

{
  func_0x00010af376d4(PTR_PTR_1127027a8);
  return;
}



/* Entry: 10af36c58; end: 10af36c67; +[SCCPlusMyProfileCreatorFanPassSectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36c58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e539f50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36c68; end: 10af36d27; -[SCCPlusMyProfileSectionViewContext initWithPresentSubscribePage:presentManagementPage:onUpsellImpression:] */

undefined8 * FUN_10af36c68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  func_0x00010af377f4();
  func_0x00010af377fc();
  _objc_retainBlock();
  func_0x00010af377c0();
  _objc_retainBlock();
  func_0x00010af3777c();
  puStack_48 = PTR_PTR_1127027b0;
  uStack_50 = param_1;
  func_0x00010af3774c();
  func_0x00010af377c8();
  puVar1 = &uStack_50;
  func_0x00010af37744(puVar1);
  func_0x00010af377c0();
  func_0x00010af37834();
  func_0x00010af37790();
  return puVar1;
}



/* Entry: 10af36d28; end: 10af36d3b; +[SCCPlusMyProfileSectionViewContext valdiMarshallableObjectDescriptor] */

void FUN_10af36d28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c96788;
  param_1[1] = &PTR_DAT_110c96968;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36d3c; end: 10af36d77; -[SCCPlusMyProfileSectionViewModel initWithSubscriptionInfo:] */

void FUN_10af36d3c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af376e8(PTR_PTR_1127027b8);
  func_0x00010af37744(auStack_20);
  return;
}



/* Entry: 10af36d78; end: 10af36d8b; +[SCCPlusMyProfileSectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36d78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c969e0;
  param_1[1] = &PTR_DAT_110c96aa0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36d8c; end: 10af36dcf; -[SCCPlusMyProfileSubscriberFanPassSectionContext initWithPresentSubscriptionManagementPage:] */

void FUN_10af36d8c(void)

{
  func_0x00010af37784();
  func_0x00010af3774c();
  func_0x00010af37708();
  func_0x00010af37758();
  return;
}



/* Entry: 10af36dd0; end: 10af36ddf; +[SCCPlusMyProfileSubscriberFanPassSectionContext valdiMarshallableObjectDescriptor] */

void FUN_10af36dd0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c96ac0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36de0; end: 10af36e13; -[SCCPlusMyProfileSubscriberFanPassSectionViewModel initWithActiveSubscriptionsCount:] */

void FUN_10af36de0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af376e8(PTR_PTR_1127027c8);
  func_0x00010af37744(auStack_20);
  return;
}



/* Entry: 10af36e14; end: 10af36e27; +[SCCPlusMyProfileSubscriberFanPassSectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af36e14(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c96b08;
  param_1[1] = &PTR_DAT_110c96b80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af36e28; end: 10af36e6b; -[SCCPlusNavigationProvider initWithOpenProfileBackgroundPicker:] */

void FUN_10af36e28(void)

{
  func_0x00010af37784();
  func_0x00010af3774c();
  func_0x00010af37708();
  func_0x00010af37758();
  return;
}



/* Entry: 10af36e6c; end: 10af36e7b; +[SCCPlusNavigationProvider valdiMarshallableObjectDescriptor] */

void FUN_10af36e6c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c96b90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


