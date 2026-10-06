/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b667ac8; end: 10b667aef;  */

undefined8 FUN_10b667ac8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 10b667af0; end: 10b667b6f;  */

void FUN_10b667af0(undefined8 param_1)

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
  pcStack_38 = FUN_10b667c80;
  puStack_30 = &UNK_1108d0d40;
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



/* Entry: 10b667b70; end: 10b667c63; -[SCSearchV2Context initWithGroupStore:friendStore:suggestedFriendStore:blockedUserStore:storySummaryInfoStore:friendmojiProvider:userInfoProvider:subscriptionStore:lensActionHandler:blizzardLogger:networkingClient:storyPlayer:nativeUserStoryFetcher:friendsFeedStatusHandlerProvider:actionSheetPresenter:flavorContext:studyValues:mapPresenter:locationStore:incomingFriendStore:contactAddressBookEntryStore:sharingFeatureSettings:contactUserStore:topicPageLauncher:actionsHandler:alertPresenter:nativeVenueStoryPlayer:searchUiScopedCofStore:userActionHandling:] */

void FUN_10b667b70(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127085b8;
  uStack_30 = param_1;
  func_0x00010b667cb8(&uStack_30,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b667c64; end: 10b667c7f; +[SCSearchV2Context valdiMarshallableObjectDescriptor] */

void FUN_10b667c64(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d3c8c8;
  param_1[1] = &PTR_s_SCValdiINavigator_110d3ce98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b667c80; end: 10b667caf;  */

void FUN_10b667c80(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b667cb0; end: 10b667cbf;  */

void FUN_10b667cb0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b667cc0; end: 10b667ce7; -[SCCChatParticipantInfo initWithUserId:userName:] */

void FUN_10b667cc0(void)

{
  func_0x00010b6683a8(PTR_PTR_1127085c0);
  func_0x00010b668384();
  return;
}



/* Entry: 10b667ce8; end: 10b667cf7; +[SCCChatParticipantInfo valdiMarshallableObjectDescriptor] */

void FUN_10b667ce8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d3d098;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b667cf8; end: 10b667fff; -[SCCFamilyCenterEntryPointContext initWithPageLauncher:deckHierarchy:supStore:actionSheetPresenter:alertPresenter:notificationPresenter:openUrl:onDismiss:onDismissAndDisplaySupportUrl:onReportUser:friendStore:userInfoProvider:userProvider:blizzardLogger:locationStore:staticMapUrlGenerator:openFamilyMap:sendLocationRequest:onTapShare:isSharingLocation:tweaks:] */

undefined8 *
FUN_10b667cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  func_0x00010b6683e8();
  _objc_retain(param_14);
  func_0x00010b6683e8();
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_10;
  _objc_retainBlock();
  _objc_release(param_10);
  _objc_retainBlock();
  uVar2 = param_11;
  func_0x00010b668400();
  func_0x00010b6683e0();
  func_0x00010b6683b8();
  _objc_retainBlock();
  uVar3 = param_20;
  func_0x00010b6683b8();
  func_0x00010b6683e0();
  uVar4 = uVar3;
  func_0x00010b6683b8();
  func_0x00010b6683e0();
  uVar5 = uVar4;
  func_0x00010b6683b8();
  func_0x00010b6683e0();
  func_0x00010b6683b8();
  puStack_70 = PTR_PTR_1127085c8;
  uStack_78 = param_1;
  func_0x00010b6683c0();
  puVar6 = &uStack_78;
  func_0x00010b6683a0();
  _objc_release(param_24);
  _objc_release(param_19);
  _objc_release(param_18);
  func_0x00010b6683b8();
  func_0x00010b6683f0();
  _objc_release(param_15);
  _objc_release(param_14);
  func_0x00010b668400();
  func_0x00010b668408();
  func_0x00010b668410();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_20);
  _objc_release(uVar2);
  _objc_release(param_11);
  _objc_release(uVar1);
  _objc_release(param_9);
  return puVar6;
}



/* Entry: 10b668000; end: 10b668013; +[SCCFamilyCenterEntryPointContext valdiMarshallableObjectDescriptor] */

void FUN_10b668000(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d0f8;
  param_1[1] = &PTR_DAT_110d3d308;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668014; end: 10b668037; -[SCCFamilyCenterEntryPointViewModel init] */

void FUN_10b668014(void)

{
  func_0x00010b6683cc(PTR_PTR_1127085d0);
  return;
}



/* Entry: 10b668038; end: 10b668047; +[SCCFamilyCenterEntryPointViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668038(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_source_110d3d388;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668048; end: 10b66806f; -[SCCFamilyCenterInviteMessageViewContext initWithPageLauncher:] */

void FUN_10b668048(void)

{
  func_0x00010b6683a8(PTR_PTR_1127085d8);
  func_0x00010b668384();
  return;
}



/* Entry: 10b668070; end: 10b668083; +[SCCFamilyCenterInviteMessageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b668070(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d400;
  param_1[1] = &PTR_DAT_110d3d460;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668084; end: 10b6680ab; -[SCCFamilyCenterInviteMessageViewModel initWithIsRecipient:chatParticipantInfo:] */

void FUN_10b668084(void)

{
  func_0x00010b6683a8(PTR_PTR_1127085e0);
  func_0x00010b668384();
  return;
}



/* Entry: 10b6680ac; end: 10b6680bf; +[SCCFamilyCenterInviteMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6680ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d478;
  param_1[1] = &PTR_DAT_110d3d4d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6680c0; end: 10b66816f; -[SCCFamilyCenterInvitePromptViewContext initWithPageLauncher:onDismissWithResult:alertPresenter:userInfoProvider:blizzardLogger:] */

undefined8 *
FUN_10b6680c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_7);
  func_0x00010b6683e8();
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_1127085e8;
  uStack_50 = param_1;
  func_0x00010b6683c0();
  puVar1 = &uStack_50;
  func_0x00010b6683a0(puVar1);
  func_0x00010b6683f0();
  func_0x00010b6683b8();
  func_0x00010b668408();
  func_0x00010b668410();
  func_0x00010b668400();
  return puVar1;
}



/* Entry: 10b668170; end: 10b668183; +[SCCFamilyCenterInvitePromptViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b668170(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d4e8;
  param_1[1] = &PTR_DAT_110d3d578;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668184; end: 10b6681c3; -[SCCFamilyCenterInvitePromptViewModel initWithParentUsername:] */

void FUN_10b668184(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b6683a8(PTR_PTR_1127085f0);
  func_0x00010b6683a0(auStack_20);
  return;
}



/* Entry: 10b6681c4; end: 10b6681d3; +[SCCFamilyCenterInvitePromptViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6681c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3d5a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6681d4; end: 10b66825b; -[SCCFamilyCenterLocationRequestMessageViewContext initWithDeckContainerFactory:pageLauncher:onTapShare:] */

undefined8 *
FUN_10b6681d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1127085f8;
  uStack_40 = param_1;
  func_0x00010b6683c0();
  puVar1 = &uStack_40;
  func_0x00010b6683a0(puVar1);
  func_0x00010b668408();
  func_0x00010b6683f0();
  func_0x00010b668410();
  return puVar1;
}



/* Entry: 10b66825c; end: 10b66826f; +[SCCFamilyCenterLocationRequestMessageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b66825c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d648;
  param_1[1] = &PTR_DAT_110d3d6a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668270; end: 10b66829f; -[SCCFamilyCenterLocationRequestMessageViewModel initWithSenderUserId:chatParticipantInfo:alreadySharingObservable:currentUserId:] */

void FUN_10b668270(void)

{
  func_0x00010b6683a8(PTR_PTR_112708600);
  func_0x00010b668384();
  return;
}



/* Entry: 10b6682a0; end: 10b6682b3; +[SCCFamilyCenterLocationRequestMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6682a0(undefined8 *param_1)

{
  *param_1 = &PTR_s_senderUserId_110d3d6c0;
  param_1[1] = &PTR_DAT_110d3d750;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6682b4; end: 10b6682e7; -[SCCFamilyCenterProfileSectionContext initWithPageLauncher:supStore:] */

void FUN_10b6682b4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708608;
  uStack_20 = param_1;
  func_0x00010b6683c0();
  func_0x00010b6683a0(&uStack_20);
  return;
}



/* Entry: 10b6682e8; end: 10b6682fb; +[SCCFamilyCenterProfileSectionContext valdiMarshallableObjectDescriptor] */

void FUN_10b6682e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d768;
  param_1[1] = &PTR_DAT_110d3d7b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6682fc; end: 10b66831f; -[SCCFamilyCenterProfileSectionViewModel init] */

void FUN_10b6682fc(void)

{
  func_0x00010b6683cc(PTR_PTR_112708610);
  return;
}



/* Entry: 10b668320; end: 10b66832f; +[SCCFamilyCenterProfileSectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668320(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3d7c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668330; end: 10b668363; -[SCCFamilyCenterTweaks initWithDisableOnboarding:] */

void FUN_10b668330(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708618;
  uStack_20 = param_1;
  func_0x00010b6683c0();
  func_0x00010b6683a0(&uStack_20);
  return;
}



/* Entry: 10b668364; end: 10b668417; +[SCCFamilyCenterTweaks valdiMarshallableObjectDescriptor] */

void FUN_10b668364(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3d7f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668418; end: 10b66841f; -[SCCAttachmentCardViewType__Enum init] */

void FUN_10b668418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b668420; end: 10b668427; -[SCCAttachmentCtaButtonStyle__Enum init] */

void FUN_10b668420(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b668428; end: 10b66845f; -[SCCAttachmentCardListViewModel initWithModels:] */

void FUN_10b668428(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708620;
  uStack_20 = param_1;
  func_0x00010b6688a4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b668460; end: 10b668473; +[SCCAttachmentCardListViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668460(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d828;
  param_1[1] = &PTR_DAT_110d3d858;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668474; end: 10b668493; -[SCCAttachmentCardViewContext init] */

void FUN_10b668474(void)

{
  func_0x00010b668868(PTR_PTR_112708628);
  return;
}



/* Entry: 10b668494; end: 10b6684a7; +[SCCAttachmentCardViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b668494(undefined8 *param_1)

{
  *param_1 = &PTR_s_webViewFactory_110d3d868;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d3d8b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6684a8; end: 10b6684eb; -[SCCAttachmentCardViewModel initWithAttachmentCardType:] */

void FUN_10b6684a8(void)

{
  func_0x00010b668894(PTR_PTR_112708630);
  func_0x00010b668884();
  return;
}



/* Entry: 10b6684ec; end: 10b66850f; +[SCCAttachmentCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6684ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3d8f8;
  param_1[1] = &PTR_DAT_110d3da48;
  param_1[2] = &PTR_s_ob_v_110d3d8c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668510; end: 10b668537;  */

undefined8 FUN_10b668510(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b668538; end: 10b6685b7;  */

void FUN_10b668538(undefined8 param_1)

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
  pcStack_38 = FUN_10b668828;
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



/* Entry: 10b6685b8; end: 10b6685d7; -[SCCAttachmentCtaButtonViewModel init] */

void FUN_10b6685b8(void)

{
  func_0x00010b668868(PTR_PTR_112708638);
  return;
}



/* Entry: 10b6685d8; end: 10b6685eb; +[SCCAttachmentCtaButtonViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6685d8(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_110d3da80;
  param_1[1] = &PTR_DAT_110d3db10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6685ec; end: 10b66860b; -[SCCChatAttachmentCardViewModel init] */

void FUN_10b6685ec(void)

{
  func_0x00010b668868(PTR_PTR_112708640);
  return;
}



/* Entry: 10b66860c; end: 10b66861f; +[SCCChatAttachmentCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b66860c(undefined8 *param_1)

{
  *param_1 = &PTR_s_primaryText_110d3db20;
  param_1[1] = &PTR_DAT_110d3dc28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668620; end: 10b668657; -[SCCHtmlContentViewContext initWithWebViewFactory:] */

void FUN_10b668620(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112708648;
  uStack_20 = param_1;
  func_0x00010b6688a4(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b668658; end: 10b66866b; +[SCCHtmlContentViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b668658(undefined8 *param_1)

{
  *param_1 = &PTR_s_webViewFactory_110d3dc40;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d3dc88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66866c; end: 10b6686ab; -[SCCHtmlContentViewModel initWithHtml:] */

void FUN_10b66866c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b668894(PTR_PTR_112708650);
  func_0x00010b6688a4(auStack_20);
  return;
}



/* Entry: 10b6686ac; end: 10b6686c7; +[SCCHtmlContentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6686ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3dcd0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110d3dca0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6686c8; end: 10b6686ef; -[SCCPdfContentViewModel initWithImageUrl:] */

void FUN_10b6686c8(void)

{
  func_0x00010b668894(PTR_PTR_112708658);
  func_0x00010b668884();
  return;
}



/* Entry: 10b6686f0; end: 10b668703; +[SCCPdfContentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6686f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3dd90;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668704; end: 10b668723; -[SCCRichPreviewContentViewContext init] */

void FUN_10b668704(void)

{
  func_0x00010b668868(PTR_PTR_112708660);
  return;
}



/* Entry: 10b668724; end: 10b668737; +[SCCRichPreviewContentViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b668724(undefined8 *param_1)

{
  *param_1 = &PTR_s_webViewFactory_110d3ddf0;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d3de38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668738; end: 10b668757; -[SCCRichPreviewContentViewModel init] */

void FUN_10b668738(void)

{
  func_0x00010b668868(PTR_PTR_112708668);
  return;
}



/* Entry: 10b668758; end: 10b66876b; +[SCCRichPreviewContentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668758(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3de50;
  param_1[1] = &PTR_DAT_110d3de98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b66876c; end: 10b66878b; -[SCCUrlCardViewContext init] */

void FUN_10b66876c(void)

{
  func_0x00010b668868(PTR_PTR_112708670);
  return;
}



/* Entry: 10b66878c; end: 10b66879f; +[SCCUrlCardViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b66878c(undefined8 *param_1)

{
  *param_1 = &PTR_s_webViewFactory_110d3deb0;
  param_1[1] = &PTR_s_SCValdiViewFactory_110d3df10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6687a0; end: 10b6687cf; -[SCCUrlCardViewModel initWithUrl:] */

void FUN_10b6687a0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b668894(PTR_PTR_112708678);
  func_0x00010b6688a4(auStack_20);
  return;
}



/* Entry: 10b6687d0; end: 10b6687e3; +[SCCUrlCardViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6687d0(undefined8 *param_1)

{
  *param_1 = &PTR_s_url_110d3df30;
  param_1[1] = &PTR_DAT_110d3dfa8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6687e4; end: 10b66880b; -[SCCUrlImageContentViewModel initWithImageUrl:] */

void FUN_10b6687e4(void)

{
  func_0x00010b668894(PTR_PTR_112708680);
  func_0x00010b668884();
  return;
}



/* Entry: 10b66880c; end: 10b668827; +[SCCUrlImageContentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b66880c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3dfe8;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110d3dfb8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668828; end: 10b668857;  */

void FUN_10b668828(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b668858; end: 10b6688bb;  */

void FUN_10b668858(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6688bc; end: 10b6688ff; -[SCCUrlPreview initWithUrlString:] */

void FUN_10b6688bc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b668a28(PTR_PTR_112708688);
  func_0x00010b668a38(auStack_20);
  return;
}



/* Entry: 10b668900; end: 10b668913; +[SCCUrlPreview valdiMarshallableObjectDescriptor] */

void FUN_10b668900(undefined8 *param_1)

{
  *param_1 = &PTR_s_urlString_110d3e048;
  param_1[1] = &PTR_DAT_110d3e138;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668914; end: 10b668943; -[SCCUrlPreviewAccessoryLink initWithTitle:urlForTap:] */

void FUN_10b668914(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b668a28(PTR_PTR_112708690);
  func_0x00010b668a38(auStack_20);
  return;
}



/* Entry: 10b668944; end: 10b668953; +[SCCUrlPreviewAccessoryLink valdiMarshallableObjectDescriptor] */

void FUN_10b668944(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110d3e150;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668954; end: 10b668983; -[SCCUrlPreviewHtmlContent initWithHtml:] */

void FUN_10b668954(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b668a28(PTR_PTR_112708698);
  func_0x00010b668a38(auStack_20);
  return;
}



/* Entry: 10b668984; end: 10b668993; +[SCCUrlPreviewHtmlContent valdiMarshallableObjectDescriptor] */

void FUN_10b668984(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3e1b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668994; end: 10b6689c3; -[SCCUrlPreviewPdfContent initWithImageUrl:] */

void FUN_10b668994(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b668a28(PTR_PTR_1127086a0);
  func_0x00010b668a38(auStack_20);
  return;
}



/* Entry: 10b6689c4; end: 10b6689d3; +[SCCUrlPreviewPdfContent valdiMarshallableObjectDescriptor] */

void FUN_10b6689c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3e228;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6689d4; end: 10b668a07; -[SCCUrlPreviewRichContent init] */

void FUN_10b6689d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127086a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b668a08; end: 10b668a57; +[SCCUrlPreviewRichContent valdiMarshallableObjectDescriptor] */

void FUN_10b668a08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3e288;
  param_1[1] = &PTR_DAT_110d3e2d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668a58; end: 10b668a5f; -[SCCScreenCaptureMessageType__Enum init] */

void FUN_10b668a58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b668a60; end: 10b668a93; -[SCCChatStatusLabelViewModel initWithValue:] */

void FUN_10b668a60(undefined8 param_1)

{
  func_0x00010b668be0(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b668a94; end: 10b668aa3; +[SCCChatStatusLabelViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668a94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_value_110d3e2e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668aa4; end: 10b668ac7; -[SCCChatStreaksEducationContext init] */

void FUN_10b668aa4(void)

{
  func_0x00010b668bcc(PTR_PTR_1127086b8);
  return;
}



/* Entry: 10b668ac8; end: 10b668adb; +[SCCChatStreaksEducationContext valdiMarshallableObjectDescriptor] */

void FUN_10b668ac8(undefined8 *param_1)

{
  *param_1 = &PTR_s_userProvider_110d3e330;
  param_1[1] = &PTR_s_SCComposerPeopleUserProviding_110d3e3a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668adc; end: 10b668b2b; -[SCCChatStreaksEducationStatusViewModel initWithIsStreakStart:streakCount:] */

void FUN_10b668adc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127086c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b668b2c; end: 10b668b3b; +[SCCChatStreaksEducationStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668b2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3e3d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668b3c; end: 10b668b5f; -[SCCRemovedUserScreenCapStatusViewContext init] */

void FUN_10b668b3c(void)

{
  func_0x00010b668bcc(PTR_PTR_1127086c8);
  return;
}



/* Entry: 10b668b60; end: 10b668b73; +[SCCRemovedUserScreenCapStatusViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b668b60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3e490;
  param_1[1] = &PTR_s_SCBridgeObservable_110d3e508;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668b74; end: 10b668ba7; -[SCCRemovedUserScreenCapStatusViewModel initWithCaptureType:currentUserId:] */

void FUN_10b668b74(undefined8 param_1)

{
  func_0x00010b668be0(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b668ba8; end: 10b668bf7; +[SCCRemovedUserScreenCapStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b668ba8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3e528;
  param_1[1] = &PTR_DAT_110d3e570;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668bf8; end: 10b668c37; -[SCCPlaceAlertsAPIFamilyCenterPageLauncherPayload initWithIsParentView:] */

void FUN_10b668bf8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127086d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b668c38; end: 10b668c4f; +[SCCPlaceAlertsAPIFamilyCenterPageLauncherPayload valdiMarshallableObjectDescriptor] */

void FUN_10b668c38(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3e580;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668c50; end: 10b668c8f; -[SCCGameLaunchInfo initWithGameId:gameShareInfo:] */

void FUN_10b668c50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127086e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b668c90; end: 10b668c9f; +[SCCGameLaunchInfo valdiMarshallableObjectDescriptor] */

void FUN_10b668c90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3e5e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668ca0; end: 10b668ccb; -[SCComposerGameInfo initWithGameId:displayName:gameDescription:loadingPageImageUrl:logoUrl:iconUrl:contentUrl:numSupportedPlayers:isMini:horizontalImageUrl:] */

void FUN_10b668ca0(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010b668db4(in_stack_00000010);
  func_0x00010b668d9c();
  return;
}



/* Entry: 10b668ccc; end: 10b668d07; -[SCComposerGameInfo initWithGameId:displayName:gameDescription:loadingPageImageUrl:logoUrl:iconUrl:contentUrl:numSupportedPlayers:isMini:] */

void FUN_10b668ccc(undefined8 param_1)

{
  func_0x00010b668d9c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b668d08; end: 10b668d2f; -[SCComposerGameInfo initWithGameId:displayName:gameDescription:loadingPageImageUrl:logoUrl:iconUrl:contentUrl:numSupportedPlayers:] */

void FUN_10b668d08(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010b668db4(in_stack_00000000);
  func_0x00010b668d9c();
  return;
}



/* Entry: 10b668d30; end: 10b668d4f; +[SCComposerGameInfo valdiMarshallableObjectDescriptor] */

void FUN_10b668d30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3e658;
  param_1[1] = &PTR_DAT_110d3e760;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668d50; end: 10b668d8b; -[SCComposerGameNumSupportedPlayers initWithMinNumPlayers:maxNumPlayers:] */

void FUN_10b668d50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127086f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b668d8c; end: 10b668ddf; +[SCComposerGameNumSupportedPlayers valdiMarshallableObjectDescriptor] */

void FUN_10b668d8c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d3e770;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668de0; end: 10b668de7; -[SCCStoriesRxCustomTTL__Enum init] */

void FUN_10b668de0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,8);
  return;
}



/* Entry: 10b668de8; end: 10b668def; -[SCCStoriesRxStorySharingSource__Enum init] */

void FUN_10b668de8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b668df0; end: 10b668df7; -[SCCStoriesRxStoryType__Enum init] */

void FUN_10b668df0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xc);
  return;
}



/* Entry: 10b668df8; end: 10b668e1b; -[SCCStoriesRxAvatarIconConfig initWithAvatarId:selfieId:] */

void FUN_10b668df8(void)

{
  func_0x00010b668f20(PTR_PTR_1127086f8);
  return;
}



/* Entry: 10b668e1c; end: 10b668e33; +[SCCStoriesRxAvatarIconConfig valdiMarshallableObjectDescriptor] */

void FUN_10b668e1c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_avatarId_110d3e7b8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b668e34; end: 10b668e57; -[SCCStoriesRxCustomTTLInfo initWithIsAvailable:customTTL:] */

void FUN_10b668e34(void)

{
  func_0x00010b668f20(PTR_PTR_112708700);
  return;
}



/* Entry: 10b668e58; end: 10b668e6b; +[SCCStoriesRxCustomTTLInfo valdiMarshallableObjectDescriptor] */

void FUN_10b668e58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d3e800;
  param_1[1] = &PTR_DAT_110d3e848;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


