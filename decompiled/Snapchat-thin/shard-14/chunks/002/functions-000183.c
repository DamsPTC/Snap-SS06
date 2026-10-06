/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b088a90; end: 10b088abf; -[SCTCallButtonParticipant initWithUserId:] */

void FUN_10b088a90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705260;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b088ac0; end: 10b088ad3; +[SCTCallButtonParticipant valdiMarshallableObjectDescriptor] */

void FUN_10b088ac0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110cb42d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088ad4; end: 10b088b7f; -[SCTCallButtonsContext initWithOnStartCallTapped:onResumeCallTapped:onJoinCallTapped:conversationId:isSpotlightChatHeaderButtonEnabled:] */

undefined8 * FUN_10b088ad4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain();
  func_0x00010b0899f4();
  func_0x00010b089994();
  func_0x00010b0899ac();
  _objc_retainBlock();
  func_0x00010b089920();
  func_0x00010b0898c0();
  func_0x00010b0898a8();
  puStack_58 = PTR_PTR_112705268;
  uStack_60 = param_1;
  func_0x00010b08989c();
  puVar1 = &uStack_60;
  func_0x00010b08987c(puVar1);
  func_0x00010b089894();
  func_0x00010b089920();
  func_0x00010b0898c8();
  func_0x00010b089928();
  return puVar1;
}



/* Entry: 10b088b80; end: 10b088ba3; +[SCTCallButtonsContext valdiMarshallableObjectDescriptor] */

void FUN_10b088b80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4348;
  param_1[1] = &PTR_DAT_110cb43d8;
  param_1[2] = &PTR_s_oi_v_110cb4318;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088ba4; end: 10b088bc7;  */

undefined8 FUN_10b088ba4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10b088bc8; end: 10b088c17;  */

void FUN_10b088bc8(void)

{
  func_0x00010b0899ec();
  func_0x00010b08999c();
  func_0x00010b089884(FUN_10b0897fc);
  func_0x00010b0899dc();
  func_0x00010b0898e8();
  func_0x00010b089894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b088c18; end: 10b088c87; -[SCTCallInfo initWithConversationName:callMedia:localParticipant:remoteParticipants:currentAudioDevice:availableAudioDevices:isLoading:isConnecting:isGroup:isHdVideoNegotiated:] */

void FUN_10b088c18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705270;
  uStack_20 = param_1;
  func_0x00010b08987c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b088c88; end: 10b088c9b; +[SCTCallInfo valdiMarshallableObjectDescriptor] */

void FUN_10b088c88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb43e8;
  param_1[1] = &PTR_DAT_110cb45e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088c9c; end: 10b088cfb; -[SCTCallJoinButtonContext initWithCallJoinButtonInfoObservable:onTap:] */

undefined1 * FUN_10b088c9c(void)

{
  undefined1 *puVar1;
  
  func_0x00010b089968();
  func_0x00010b089944();
  func_0x00010b08989c();
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b08987c(puVar1);
  func_0x00010b0898b0();
  func_0x00010b089894();
  return puVar1;
}



/* Entry: 10b088cfc; end: 10b088d0f; +[SCTCallJoinButtonContext valdiMarshallableObjectDescriptor] */

void FUN_10b088cfc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4620;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb4668;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088d10; end: 10b088d3f; -[SCTCallJoinButtonInfo initWithParticipants:] */

void FUN_10b088d10(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112705280;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b088d40; end: 10b088d53; +[SCTCallJoinButtonInfo valdiMarshallableObjectDescriptor] */

void FUN_10b088d40(undefined8 *param_1)

{
  *param_1 = &PTR_s_participants_110cb4680;
  param_1[1] = &PTR_DAT_110cb46b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088d54; end: 10b088ddb; -[SCTCallPageAndroidContext initWithCallPageTypeObservable:onParticipantPillTap:updateRingtone:isAudioScreenShareSupported:] */

undefined8 * FUN_10b088d54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  func_0x00010b089994();
  func_0x00010b0898c0();
  func_0x00010b08997c();
  func_0x00010b0898b0();
  puStack_48 = PTR_PTR_112705288;
  uStack_50 = param_1;
  func_0x00010b08989c();
  puVar1 = &uStack_50;
  func_0x00010b08987c(puVar1);
  func_0x00010b089920();
  func_0x00010b0898b8();
  func_0x00010b0898a8();
  return puVar1;
}



/* Entry: 10b088ddc; end: 10b088dff; +[SCTCallPageAndroidContext valdiMarshallableObjectDescriptor] */

void FUN_10b088ddc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb46f0;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb4768;
  param_1[2] = &PTR_s_oi_v_110cb46c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088e00; end: 10b088e8f; -[SCTCallPageIOSContext initWithShowNativeAudioDeviceSelector:onLensSafeRenderZoneChanged:onScreenshotCaptureButtonLayoutForLensRenderZone:] */

undefined8 * FUN_10b088e00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  func_0x00010b0899bc();
  func_0x00010b0898c0();
  func_0x00010b08997c();
  func_0x00010b0898b0();
  func_0x00010b089944();
  func_0x00010b089894();
  puStack_48 = PTR_PTR_112705290;
  uStack_50 = param_1;
  func_0x00010b08989c();
  puVar1 = &uStack_50;
  func_0x00010b08987c(puVar1);
  func_0x00010b0898b0();
  func_0x00010b089928();
  func_0x00010b0898a8();
  return puVar1;
}



/* Entry: 10b088e90; end: 10b088eab; +[SCTCallPageIOSContext valdiMarshallableObjectDescriptor] */

void FUN_10b088e90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb47b8;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_110cb4788;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b088eac; end: 10b088ed3;  */

undefined8 FUN_10b088eac(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],param_2[2],param_2[3],param_2[4],*param_2);
  return 0;
}



/* Entry: 10b088ed4; end: 10b088f23;  */

void FUN_10b088ed4(void)

{
  func_0x00010b0899ec();
  func_0x00010b08999c();
  func_0x00010b089884(0x10b089818);
  func_0x00010b0899dc();
  func_0x00010b0898e8();
  func_0x00010b089894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b088f24; end: 10b0894df; -[SCTCallViewContext initWithInitialConversationId:declineCall:switchCamera:selectAudioDevice:updatePublishedMedia:startScreenSharing:stopScreenSharing:callInfoObservable:notificationPresenter:actionSheetPresenter:alertPresenter:onDismiss:onMinimize:onFullscreenStateChanged:updateLocalVideoState:enableLenses:disableLenses:forceFullscreen:navigator:friendStore:addParticipantsToCall:callViewFactory:displayWebUpsellSheet:reportSponsoredLens:displayAboutAds:displayReplyWithSnap:retryCall:sendScreenshot:supStore:dismissAndDisplayCallFeedbackTray:onLoadingComplete:copyInviteLink:isFromInvite:deckContainerFactory:sharedLensTouchAlwaysEnabled:connectedLensLetterboxingEnabled:isNativeExplorerTranslationEnabled:gamesInCallEnabled:localTileLensIconMode:lensCarouselAlwaysOnEnabled:lensExplorerActionBarButtonEnabled:] */

undefined8 *
FUN_10b088f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d8;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(in_stack_000000c8);
  func_0x00010b0898f4();
  func_0x00010b0899f4();
  _objc_retain(in_stack_000000b0);
  func_0x00010b0899bc();
  func_0x00010b0899c4();
  func_0x00010b089994();
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000080);
  func_0x00010b0899cc();
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000050);
  func_0x00010b0899bc();
  func_0x00010b0898f4();
  _objc_retain(param_18);
  _objc_retain(param_17);
  func_0x00010b0899c4();
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  func_0x00010b0899f4();
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010b0899cc();
  func_0x00010b089994();
  _objc_retain(param_3);
  _objc_retainBlock();
  _objc_retainBlock();
  uVar1 = param_5;
  func_0x00010b089920();
  func_0x00010b08994c();
  uVar2 = uVar1;
  func_0x00010b0898b8();
  func_0x00010b0899ac();
  func_0x00010b089928();
  uVar3 = param_8;
  _objc_retainBlock();
  _objc_release();
  func_0x00010b0898c0();
  uVar4 = param_8;
  func_0x00010b0898a8();
  func_0x00010b089984();
  func_0x00010b0898c8();
  _objc_retainBlock();
  func_0x00010b0899d4();
  uVar5 = param_18;
  _objc_retainBlock();
  _objc_release();
  func_0x00010b089944();
  uVar6 = param_18;
  func_0x00010b089894();
  func_0x00010b08997c();
  func_0x00010b0898b0();
  _objc_retainBlock();
  uVar7 = in_stack_00000050;
  func_0x00010b0899d4();
  func_0x00010b089944();
  uVar8 = uVar7;
  func_0x00010b089894();
  func_0x00010b08994c();
  uVar9 = uVar8;
  func_0x00010b0898b8();
  func_0x00010b08994c();
  uVar10 = uVar9;
  func_0x00010b0898b8();
  func_0x00010b08994c();
  uVar11 = uVar10;
  func_0x00010b0898b8();
  func_0x00010b089984();
  uVar12 = uVar11;
  func_0x00010b0898c8();
  func_0x00010b089984();
  uVar13 = uVar12;
  func_0x00010b0898c8();
  func_0x00010b0898c0();
  uVar14 = uVar13;
  func_0x00010b0898a8();
  func_0x00010b0898c0();
  uVar15 = uVar14;
  func_0x00010b0898a8();
  func_0x00010b0898c0();
  uVar16 = uVar15;
  func_0x00010b0898a8();
  func_0x00010b0898c0();
  func_0x00010b0898a8();
  puStack_80 = PTR_PTR_112705298;
  uStack_88 = param_1;
  func_0x00010b08989c();
  puVar17 = &uStack_88;
  func_0x00010b08987c();
  _objc_release(in_stack_000000d8);
  func_0x00010b089928();
  func_0x00010b0898c8();
  func_0x00010b0898b8();
  func_0x00010b0899d4();
  func_0x00010b089920();
  func_0x00010b0898a8();
  _objc_release(param_12);
  func_0x00010b0898b0();
  func_0x00010b089894();
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
  _objc_release(in_stack_00000050);
  _objc_release(uVar6);
  _objc_release(param_18);
  _objc_release(uVar5);
  _objc_release(param_17);
  _objc_release(uVar4);
  _objc_release(param_8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar17;
}



/* Entry: 10b0894e0; end: 10b089503; +[SCTCallViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b0894e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4860;
  param_1[1] = &PTR_DAT_110cb4cf8;
  param_1[2] = &PTR_s_oi_v_110cb4818;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089504; end: 10b08952b;  */

undefined8 FUN_10b089504(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b08952c; end: 10b08957b;  */

void FUN_10b08952c(void)

{
  func_0x00010b0899ec();
  func_0x00010b08999c();
  func_0x00010b089884(0x10b089848);
  func_0x00010b0899dc();
  func_0x00010b0898e8();
  func_0x00010b089894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b08957c; end: 10b08959f; -[SCTCallViewFactory init] */

void FUN_10b08957c(void)

{
  func_0x00010b089954(PTR_PTR_1127052a0);
  return;
}



/* Entry: 10b0895a0; end: 10b0895b3; +[SCTCallViewFactory valdiMarshallableObjectDescriptor] */

void FUN_10b0895a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4d88;
  param_1[1] = &PTR_s_SCValdiViewFactory_110cb4db8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0895b4; end: 10b0895e3; -[SCTConnectedLensState initWithLensId:isPublishingSelfStream:] */

void FUN_10b0895b4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127052a8;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b0895e4; end: 10b0895f7; +[SCTConnectedLensState valdiMarshallableObjectDescriptor] */

void FUN_10b0895e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110cb4dc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0895f8; end: 10b089653; -[SCTParticipant initWithUserId:displayName:color:callState:publishedMedia:isPausedVideo:isSpeaking:mediaIssueType:] */

void FUN_10b0895f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127052b0;
  uStack_20 = param_1;
  func_0x00010b08987c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b089654; end: 10b089667; +[SCTParticipant valdiMarshallableObjectDescriptor] */

void FUN_10b089654(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_110cb4e10;
  param_1[1] = &PTR_DAT_110cb4f78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089668; end: 10b0896a7; -[SCTPipInfo initWithLocalParticipant:remoteParticipants:] */

void FUN_10b089668(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127052b8;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b0896a8; end: 10b0896bb; +[SCTPipInfo valdiMarshallableObjectDescriptor] */

void FUN_10b0896a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb4fb0;
  param_1[1] = &PTR_DAT_110cb5070;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0896bc; end: 10b08971f; -[SCTPipViewContext initWithPipInfoObservable:onUserVideoStreamVisibilityChanged:] */

undefined1 * FUN_10b0896bc(void)

{
  undefined1 *puVar1;
  
  func_0x00010b089968();
  func_0x00010b089944();
  func_0x00010b08989c();
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b08987c(puVar1);
  func_0x00010b0898b0();
  func_0x00010b089894();
  return puVar1;
}



/* Entry: 10b089720; end: 10b089733; +[SCTPipViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b089720(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5090;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb5108;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089734; end: 10b089767; -[SCTScreenShareState initWithUserId:remoteVideoStreamStatus:] */

void FUN_10b089734(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127052c8;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b089768; end: 10b08977b; +[SCTScreenShareState valdiMarshallableObjectDescriptor] */

void FUN_10b089768(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_110cb5130;
  param_1[1] = &PTR_DAT_110cb51a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08977c; end: 10b08979f; -[SCTSelectedLens init] */

void FUN_10b08977c(void)

{
  func_0x00010b089954(PTR_PTR_1127052d0);
  return;
}



/* Entry: 10b0897a0; end: 10b0897b3; +[SCTSelectedLens valdiMarshallableObjectDescriptor] */

void FUN_10b0897a0(undefined8 *param_1)

{
  *param_1 = &PTR_s_url_110cb51b8;
  param_1[1] = &PTR_DAT_110cb5248;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0897b4; end: 10b0897e7; -[SCTSponsoredLensDetails initWithAdId:adServeItemId:hasAttachment:] */

void FUN_10b0897b4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127052d8;
  uStack_20 = param_1;
  func_0x00010b08989c();
  func_0x00010b08987c(&uStack_20);
  return;
}



/* Entry: 10b0897e8; end: 10b0897fb; +[SCTSponsoredLensDetails valdiMarshallableObjectDescriptor] */

void FUN_10b0897e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb5258;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0897fc; end: 10b089863;  */

void FUN_10b0897fc(void)

{
  func_0x00010b0898d0();
  return;
}



/* Entry: 10b089864; end: 10b0899fb;  */

void FUN_10b089864(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0899fc; end: 10b089a9b; -[SCTCallFeedbackTraySource__Enum init] */

undefined **
FUN_10b0899fc(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_38 = PTR_PTR_113369428;
  puStack_30 = PTR_PTR_113369430;
  uVar5 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0105e0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(uVar5);
  _objc_retainBlock();
  uVar3 = uVar5;
  _objc_retainBlock();
  _objc_release(uVar5);
  uVar5 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_88 = PTR_PTR_1127052e0;
  ppuVar4 = &puStack_90;
  puStack_90 = puVar1;
  _objc_msgSendSuper2(ppuVar4,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return ppuVar4;
}



/* Entry: 10b089a9c; end: 10b089b7b; -[SCTCallFeedbackTrayContext initWithOnDismiss:displayReportPage:submitReport:notificationPresenter:] */

undefined8 *
FUN_10b089a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  puStack_48 = PTR_PTR_1127052e0;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b089b7c; end: 10b089b8f; +[SCTCallFeedbackTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10b089b7c(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_110cb5300;
  param_1[1] = &PTR_s_SCCNotificationPresenter_110cb5378;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089b90; end: 10b089bcb; -[SCTCallFeedbackTrayViewModel initWithCallId:source:] */

void FUN_10b089b90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127052e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b089bcc; end: 10b089bef; +[SCTCallFeedbackTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b089bcc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5388;
  param_1[1] = &PTR_DAT_110cb53d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089bf0; end: 10b089bf7; -[SCTCCallEndReason__Enum init] */

void FUN_10b089bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}



/* Entry: 10b089bf8; end: 10b089c4b;  */

void FUN_10b089bf8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f3ef0 != -1) {
    func_0x000107c27d9c(0x1137f3ef0,&PTR___NSConcreteGlobalBlock_110cb53e0);
  }
  uVar1 = uRam00000001137f3ef8;
  _objc_retain(uRam00000001137f3ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b089c4c; end: 10b089c63;  */

void FUN_10b089c4c(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137f3ef8;
  ppuRam00000001137f3ef8 = &PTR__OBJC_CLASS___NSConstantArray_111183a88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b089c64; end: 10b089c67; -[SCTCCallState__Enum init] */

void FUN_10b089c64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b089c68; end: 10b089c6f; -[SCTCConnectivityNetworkType__Enum init] */

void FUN_10b089c68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,8);
  return;
}



/* Entry: 10b089c70; end: 10b089c73; -[SCTCDisposeReason__Enum init] */

void FUN_10b089c70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b089c74; end: 10b089c77; -[SCTCFrameSize__Enum init] */

void FUN_10b089c74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b089c78; end: 10b089c7f; -[SCTCFrameSizeLimit__Enum init] */

void FUN_10b089c78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b089c80; end: 10b089c83; -[SCTCLensCarouselType__Enum init] */

void FUN_10b089c80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b089c84; end: 10b089c8b; -[SCTCMediaSource__Enum init] */

void FUN_10b089c84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b089c8c; end: 10b089c8f; -[SCTCNotificationDeliveryMechanism__Enum init] */

void FUN_10b089c8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b089c90; end: 10b089c93; -[SCTCNotificationDisplayType__Enum init] */

void FUN_10b089c90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b089c94; end: 10b089c97; -[SCTCPlatform__Enum init] */

void FUN_10b089c94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b089c98; end: 10b089c9b; -[SCTCThermalState__Enum init] */

void FUN_10b089c98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b089c9c; end: 10b089c9f; -[SCTCUIState__Enum init] */

void FUN_10b089c9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b089ca0; end: 10b089ca3; -[SCTCUnknownSnapchatterMode__Enum init] */

void FUN_10b089ca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b089ca4; end: 10b089d0f; -[SCTCDuplexRegistryMode__Enum init] */

void FUN_10b089ca4(void)

{
  undefined1 in_ZR;
  
  func_0x00010b08a6e4();
  func_0x00010b08a6cc(PTR_PTR_113369448);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b08a69c();
  func_0x00010b08a688();
  func_0x00010b08a6fc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b08a6e4();
    func_0x00010b08a6cc(PTR_PTR_113369468);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b08a69c();
    func_0x00010b08a688();
    func_0x00010b08a6fc();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b08a5f0(PTR_PTR_1127052f0);
      return;
    }
  }
  return;
}



/* Entry: 10b089d10; end: 10b089d7b; -[SCTCMedia__Enum init] */

void FUN_10b089d10(void)

{
  undefined1 in_ZR;
  
  func_0x00010b08a6e4();
  func_0x00010b08a6cc(PTR_PTR_113369468);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b08a69c();
  func_0x00010b08a688();
  func_0x00010b08a6fc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b08a5f0(PTR_PTR_1127052f0);
  return;
}



/* Entry: 10b089d7c; end: 10b089d9b; -[SCTCAudioSuppressionEvent initWithSuppressed:] */

void FUN_10b089d7c(void)

{
  FUN_10b08a5f0(PTR_PTR_1127052f0);
  return;
}



/* Entry: 10b089d9c; end: 10b089dab; +[SCTCAudioSuppressionEvent valdiMarshallableObjectDescriptor] */

void FUN_10b089d9c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb5400;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089dac; end: 10b089e1f; -[SCTCCallingDependencies initWithIncomingCallRequestDelegate:getUnknownSnapchatterMode:] */

undefined8 * FUN_10b089dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1127052f8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010b08a678(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_3);
  func_0x00010b08a714();
  return puVar1;
}



/* Entry: 10b089e20; end: 10b089e47; +[SCTCCallingDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b089e20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5460;
  param_1[1] = &PTR_DAT_110cb54c0;
  param_1[2] = &PTR_DAT_110cb5430;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089e48; end: 10b089e67;  */

ulong FUN_10b089e48(code *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  (*param_1)(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 10b089e68; end: 10b089ee3;  */

void FUN_10b089e68(undefined8 param_1)

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
  pcStack_38 = FUN_10b08a5d0;
  puStack_30 = &UNK_110cb6050;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010b08a714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b089ee4; end: 10b089f6b; -[SCTCCallingSessionBridge initWithInitialState:sessionEvents:dispose:] */

undefined8 *
FUN_10b089ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_112705300;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010b08a678(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010b08a714();
  return puVar1;
}



/* Entry: 10b089f6c; end: 10b089f7f; +[SCTCCallingSessionBridge valdiMarshallableObjectDescriptor] */

void FUN_10b089f6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb54d8;
  param_1[1] = &PTR_DAT_110cb5538;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089f80; end: 10b089fb7; -[SCTCCallingSessionState initWithConversationId:localParticipant:remoteParticipants:isConnecting:isHdVideoNegotiated:] */

void FUN_10b089f80(void)

{
  func_0x00010b08a668(PTR_PTR_112705308);
  func_0x00010b08a638();
  return;
}



/* Entry: 10b089fb8; end: 10b089fcb; +[SCTCCallingSessionState valdiMarshallableObjectDescriptor] */

void FUN_10b089fb8(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110cb5560;
  param_1[1] = &PTR_DAT_110cb5650;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b089fcc; end: 10b089ff3; -[SCTCCallingSessionStateUpdate initWithState:] */

void FUN_10b089fcc(void)

{
  func_0x00010b08a628(PTR_PTR_112705310);
  func_0x00010b08a61c();
  return;
}



/* Entry: 10b089ff4; end: 10b08a007; +[SCTCCallingSessionStateUpdate valdiMarshallableObjectDescriptor] */

void FUN_10b089ff4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5668;
  param_1[1] = &PTR_DAT_110cb56b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a008; end: 10b08a027; -[SCTCDismissCall init] */

void FUN_10b08a008(void)

{
  func_0x00010b08a654(PTR_PTR_112705318);
  return;
}



/* Entry: 10b08a028; end: 10b08a037; +[SCTCDismissCall valdiMarshallableObjectDescriptor] */

void FUN_10b08a028(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e553e28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a038; end: 10b08a087; -[SCTCDuplexRegistryConfig initWithGetMode:] */

undefined8 FUN_10b08a038(undefined8 param_1)

{
  _objc_retainBlock();
  func_0x00010b08a61c();
  func_0x00010b08a688();
  return param_1;
}



/* Entry: 10b08a088; end: 10b08a09b; +[SCTCDuplexRegistryConfig valdiMarshallableObjectDescriptor] */

void FUN_10b08a088(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb56c8;
  param_1[1] = &PTR_DAT_110cb56f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a09c; end: 10b08a0c3; -[SCTCIncomingCallIntent initWithPayload:senderUserId:] */

void FUN_10b08a09c(void)

{
  func_0x00010b08a628(PTR_PTR_112705328);
  func_0x00010b08a61c();
  return;
}



/* Entry: 10b08a0c4; end: 10b08a0d3; +[SCTCIncomingCallIntent valdiMarshallableObjectDescriptor] */

void FUN_10b08a0c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_payload_110cb5708;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a0d4; end: 10b08a0ff; -[SCTCIncomingCallRequest initWithConversationId:isGroup:isVideoCall:senderUserId:payload:] */

void FUN_10b08a0d4(void)

{
  func_0x00010b08a668(PTR_PTR_112705330);
  func_0x00010b08a638();
  return;
}



/* Entry: 10b08a100; end: 10b08a10f; +[SCTCIncomingCallRequest valdiMarshallableObjectDescriptor] */

void FUN_10b08a100(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_conversationId_110cb5750;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a110; end: 10b08a13f; -[SCTCIncomingMessage initWithConversationId:senderUserId:payload:] */

void FUN_10b08a110(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b08a668(PTR_PTR_112705338);
  func_0x00010b08a678(auStack_20);
  return;
}



/* Entry: 10b08a140; end: 10b08a14f; +[SCTCIncomingMessage valdiMarshallableObjectDescriptor] */

void FUN_10b08a140(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_conversationId_110cb57e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a150; end: 10b08a16f; -[SCTCJoinCallIntent initWithJoinCallMediaSelection:] */

void FUN_10b08a150(void)

{
  FUN_10b08a5f0(PTR_PTR_112705340);
  return;
}



/* Entry: 10b08a170; end: 10b08a183; +[SCTCJoinCallIntent valdiMarshallableObjectDescriptor] */

void FUN_10b08a170(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5858;
  param_1[1] = &PTR_DAT_110cb5888;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a184; end: 10b08a1ab; -[SCTCLens initWithLensId:carouselType:isSharedLens:] */

void FUN_10b08a184(void)

{
  func_0x00010b08a668(PTR_PTR_112705348);
  func_0x00010b08a638();
  return;
}



/* Entry: 10b08a1ac; end: 10b08a1bf; +[SCTCLens valdiMarshallableObjectDescriptor] */

void FUN_10b08a1ac(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110cb5898;
  param_1[1] = &PTR_DAT_110cb58f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a1c0; end: 10b08a1df; -[SCTCLensSelectionEvent init] */

void FUN_10b08a1c0(void)

{
  func_0x00010b08a654(PTR_PTR_112705350);
  return;
}



/* Entry: 10b08a1e0; end: 10b08a1f3; +[SCTCLensSelectionEvent valdiMarshallableObjectDescriptor] */

void FUN_10b08a1e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5908;
  param_1[1] = &PTR_DAT_110cb5938;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a1f4; end: 10b08a213; -[SCTCLocalCallEvent init] */

void FUN_10b08a1f4(void)

{
  func_0x00010b08a654(PTR_PTR_112705358);
  return;
}



/* Entry: 10b08a214; end: 10b08a227; +[SCTCLocalCallEvent valdiMarshallableObjectDescriptor] */

void FUN_10b08a214(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5948;
  param_1[1] = &PTR_DAT_110cb5990;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a228; end: 10b08a247; -[SCTCLocalVideoSuppressionEvent initWithSuppressed:] */

void FUN_10b08a228(void)

{
  FUN_10b08a5f0(PTR_PTR_112705360);
  return;
}



/* Entry: 10b08a248; end: 10b08a257; +[SCTCLocalVideoSuppressionEvent valdiMarshallableObjectDescriptor] */

void FUN_10b08a248(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb59a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a258; end: 10b08a27f; -[SCTCMediaSelection initWithAudio:video:] */

void FUN_10b08a258(void)

{
  func_0x00010b08a668(PTR_PTR_112705368);
  func_0x00010b08a638();
  return;
}



/* Entry: 10b08a280; end: 10b08a293; +[SCTCMediaSelection valdiMarshallableObjectDescriptor] */

void FUN_10b08a280(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb59d8;
  param_1[1] = &PTR_DAT_110cb5a38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a294; end: 10b08a2bb; -[SCTCNotificationDisplay initWithDisplayType:deliveryMechanism:] */

void FUN_10b08a294(void)

{
  func_0x00010b08a628(PTR_PTR_112705370);
  func_0x00010b08a61c();
  return;
}



/* Entry: 10b08a2bc; end: 10b08a2cf; +[SCTCNotificationDisplay valdiMarshallableObjectDescriptor] */

void FUN_10b08a2bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb5a48;
  param_1[1] = &PTR_DAT_110cb5a90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b08a2d0; end: 10b08a2ef; -[SCTCNotificationDisplayEvent initWithNotificationDisplay:] */

void FUN_10b08a2d0(void)

{
  FUN_10b08a5f0(PTR_PTR_112705378);
  return;
}


