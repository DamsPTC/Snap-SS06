/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6734fc; end: 10b67350f; +[SCCCommonProfileProfileSwitcherViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6734fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4c930;
  param_1[1] = &PTR_DAT_110d4c990;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673510; end: 10b67353f; -[SCCCommonProfileSwitcherButtonViewModel initWithVisible:] */

void FUN_10b673510(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709278);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b673540; end: 10b67354f; +[SCCCommonProfileSwitcherButtonViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b673540(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTap_110d4c9a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673550; end: 10b67356f; -[SCCMutualFriendsPillContext init] */

void FUN_10b673550(void)

{
  func_0x00010b67441c(PTR_PTR_112709280);
  return;
}



/* Entry: 10b673570; end: 10b67357f; +[SCCMutualFriendsPillContext valdiMarshallableObjectDescriptor] */

void FUN_10b673570(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTap_110d4ca08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673580; end: 10b6735b3; -[SCCPrivateProfileBirthdayPillViewContext initWithBirthday:] */

void FUN_10b673580(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709288);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b6735b4; end: 10b6735c7; +[SCCPrivateProfileBirthdayPillViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b6735b4(undefined8 *param_1)

{
  *param_1 = &PTR_s_iconType_110d4ca38;
  param_1[1] = &PTR_DAT_110d4cac8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6735c8; end: 10b673663; -[SCCPrivateProfileCommunityPillsContext initWithOnCommunityPillTap:onCommunityPillLongPress:] */

undefined8 *
FUN_10b6735c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010b6744a4();
  puStack_38 = PTR_PTR_112709290;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x00010b674414(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  func_0x00010b67449c();
  return puVar1;
}



/* Entry: 10b673664; end: 10b67368b; +[SCCPrivateProfileCommunityPillsContext valdiMarshallableObjectDescriptor] */

void FUN_10b673664(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4cb40;
  param_1[1] = &PTR_DAT_110d4ccc0;
  param_1[2] = &PTR_s_oi_v_110d4caf8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67368c; end: 10b6736af;  */

undefined8 FUN_10b67368c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10b6736b0; end: 10b67370f;  */

void FUN_10b6736b0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b6744bc(FUN_10b67429c);
  _objc_retainBlock(&puStack_48);
  func_0x00010b674574();
  func_0x00010b6744a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b673710; end: 10b67373b;  */

undefined8 FUN_10b673710(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,param_2[2],param_2[3]);
  return 0;
}



/* Entry: 10b67373c; end: 10b67379b;  */

void FUN_10b67373c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b6744bc(0x10b6742c4);
  _objc_retainBlock(&puStack_48);
  func_0x00010b674574();
  func_0x00010b6744a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67379c; end: 10b6737cb; -[SCCPrivateProfileNowPlayingPillViewContext initWithNowPlayingObservable:] */

void FUN_10b67379c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709298);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b6737cc; end: 10b6737df; +[SCCPrivateProfileNowPlayingPillViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b6737cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4cd00;
  param_1[1] = &PTR_s_SCBridgeObservable_110d4cd60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6737e0; end: 10b6737ff; -[SCCPrivateProfileSaturnCalendarPillViewContext init] */

void FUN_10b6737e0(void)

{
  func_0x00010b67441c(PTR_PTR_1127092a0);
  return;
}



/* Entry: 10b673800; end: 10b67380f; +[SCCPrivateProfileSaturnCalendarPillViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b673800(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4cd80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673810; end: 10b67383f; -[SCCPrivateProfileSnapScorePillViewContext initWithSnapScoreObservable:highlightObservable:] */

void FUN_10b673810(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_1127092a8);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b673840; end: 10b673853; +[SCCPrivateProfileSnapScorePillViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b673840(undefined8 *param_1)

{
  *param_1 = &PTR_s_onImpression_110d4cdf8;
  param_1[1] = &PTR_DAT_110d4ce70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673854; end: 10b673883; -[SCCPrivateProfileZodiacPillViewContext initWithBirthday:] */

void FUN_10b673854(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_1127092b0);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b673884; end: 10b673897; +[SCCPrivateProfileZodiacPillViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b673884(undefined8 *param_1)

{
  *param_1 = &PTR_s_onImpression_110d4ce88;
  param_1[1] = &PTR_s_SCBridgeObservable_110d4cee8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673898; end: 10b6738bf; -[SCImpalaPublicProfileState initWithEncodedBusinessProfileAndUserData:subscribed:optInNotifications:optInNotificationsAllowed:] */

void FUN_10b673898(void)

{
  func_0x00010b674378(PTR_PTR_1127092b8);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b6738c0; end: 10b6738cf; +[SCImpalaPublicProfileState valdiMarshallableObjectDescriptor] */

void FUN_10b6738c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4cf08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6738d0; end: 10b6738f7; -[SCImpalaServiceConfigValue initWithBaseUrl:snapTokenScope:routeTag:snapProHeader:] */

void FUN_10b6738d0(void)

{
  func_0x00010b674378(PTR_PTR_1127092c0);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b6738f8; end: 10b67391f; -[SCImpalaServiceConfigValue initWithBaseUrl:snapTokenScope:routeTag:] */

void FUN_10b6738f8(void)

{
  func_0x00010b674378(PTR_PTR_1127092c0);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b673920; end: 10b673947; -[SCImpalaServiceConfigValue initWithBaseUrl:snapTokenScope:] */

void FUN_10b673920(void)

{
  func_0x00010b674378(PTR_PTR_1127092c0);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b673948; end: 10b673957; +[SCImpalaServiceConfigValue valdiMarshallableObjectDescriptor] */

void FUN_10b673948(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4cf80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673958; end: 10b67397f; -[SCImpalaSnapInsightsChatConversation initWithConversationId:messages:] */

void FUN_10b673958(void)

{
  func_0x00010b6743ec(PTR_PTR_1127092c8);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b673980; end: 10b673993; +[SCImpalaSnapInsightsChatConversation valdiMarshallableObjectDescriptor] */

void FUN_10b673980(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110d4cff8;
  param_1[1] = &PTR_DAT_110d4d040;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673994; end: 10b6739c3; -[SCImpalaSnapInsightsChatMessage initWithSenderSequenceNumber:timestampMs:viewTimestampMs:retentionInMinutes:sent:] */

void FUN_10b673994(void)

{
  func_0x00010b674378(PTR_PTR_1127092d0);
  func_0x00010b67434c();
  return;
}



/* Entry: 10b6739c4; end: 10b6739d3; +[SCImpalaSnapInsightsChatMessage valdiMarshallableObjectDescriptor] */

void FUN_10b6739c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4d050;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6739d4; end: 10b6739fb; -[SCImpalaSnapInsightsCompositeConversationId initWithLegacyConversationId:senderUserId:] */

void FUN_10b6739d4(void)

{
  func_0x00010b6743ec(PTR_PTR_1127092d8);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b6739fc; end: 10b673a0b; +[SCImpalaSnapInsightsCompositeConversationId valdiMarshallableObjectDescriptor] */

void FUN_10b6739fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4d0e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673a0c; end: 10b673a33; -[SCImpalaSnapInsightsConfiguration initWithIsEligibleForSpotlight:] */

void FUN_10b673a0c(void)

{
  func_0x00010b6743ec(PTR_PTR_1127092e0);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b673a34; end: 10b673a43; +[SCImpalaSnapInsightsConfiguration valdiMarshallableObjectDescriptor] */

void FUN_10b673a34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4d128;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673a44; end: 10b673a6b; -[SCImpalaSnapInsightsServiceConfig initWithAccountServiceBaseUrl:storyServiceBaseUrl:] */

void FUN_10b673a44(void)

{
  func_0x00010b674378(PTR_PTR_1127092e8);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b673a6c; end: 10b673a7f; +[SCImpalaSnapInsightsServiceConfig valdiMarshallableObjectDescriptor] */

void FUN_10b673a6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4d158;
  param_1[1] = &PTR_DAT_110d4d1d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673a80; end: 10b673ab7; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:thumbnailInfo:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:isSavedStorySnap:deleteConfiguration:snapInsightsConfiguration:isFanPassStory:isMyStorySnap:] */

void FUN_10b673a80(void)

{
  func_0x00010b674430();
  func_0x00010b67445c();
  func_0x00010b674330();
  return;
}



/* Entry: 10b673ab8; end: 10b673af3; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:thumbnailInfo:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:isSavedStorySnap:deleteConfiguration:snapInsightsConfiguration:isFanPassStory:] */

void FUN_10b673ab8(void)

{
  func_0x00010b674430();
  func_0x00010b67452c();
  func_0x00010b674330();
  return;
}



/* Entry: 10b673af4; end: 10b673b2f; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:thumbnailInfo:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:isSavedStorySnap:deleteConfiguration:snapInsightsConfiguration:] */

void FUN_10b673af4(void)

{
  func_0x00010b674430();
  func_0x00010b67445c();
  func_0x00010b674330();
  return;
}



/* Entry: 10b673b30; end: 10b673b63; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:thumbnailInfo:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:isSavedStorySnap:deleteConfiguration:] */

void FUN_10b673b30(void)

{
  func_0x00010b674430();
  func_0x00010b67452c();
  func_0x00010b674330();
  return;
}



/* Entry: 10b673b64; end: 10b673b9b; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:thumbnailInfo:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:isSavedStorySnap:] */

void FUN_10b673b64(void)

{
  func_0x00010b674430();
  func_0x00010b67445c();
  func_0x00010b674330();
  return;
}



/* Entry: 10b673b9c; end: 10b673bdf; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:thumbnailInfo:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:] */

void FUN_10b673b9c(void)

{
  func_0x00010b674430();
  func_0x00010b674330();
  return;
}



/* Entry: 10b673be0; end: 10b673c33; -[SCImpalaSnapInsightsSnap initWithSnapId:clientId:thumbnailUrl:metrics:attachmentUrl:timestampMs:caption:canSave:canDelete:] */

void FUN_10b673be0(undefined8 param_1)

{
  func_0x00010b67435c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b673c34; end: 10b673c47; +[SCImpalaSnapInsightsSnap valdiMarshallableObjectDescriptor] */

void FUN_10b673c34(undefined8 *param_1)

{
  *param_1 = &PTR_s_snapId_110d4d1e0;
  param_1[1] = &PTR_DAT_110d4d360;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673c48; end: 10b673c6f; -[SCImpalaSnapInsightsSnapDeleteConfiguration initWithCallSource:] */

void FUN_10b673c48(void)

{
  func_0x00010b6743ec(PTR_PTR_1127092f8);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b673c70; end: 10b673c7f; +[SCImpalaSnapInsightsSnapDeleteConfiguration valdiMarshallableObjectDescriptor] */

void FUN_10b673c70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4d388;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b673c80; end: 10b673cc3; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:paidReach:rewatches:avgViewTime:avgViewRate:reposts:comments:] */

void FUN_10b673c80(void)

{
  undefined8 in_stack_00000050;
  undefined1 auStack_30 [16];
  
  func_0x00010b674588();
  func_0x00010b674544(in_stack_00000050);
  func_0x00010b6743c0();
  func_0x00010b67436c(auStack_30);
  return;
}



/* Entry: 10b673cc4; end: 10b673d07; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:paidReach:rewatches:avgViewTime:avgViewRate:reposts:] */

void FUN_10b673cc4(void)

{
  undefined8 in_stack_00000050;
  undefined1 auStack_30 [16];
  
  func_0x00010b674588();
  func_0x00010b6744fc(in_stack_00000050);
  func_0x00010b6743c0();
  func_0x00010b67436c(auStack_30);
  return;
}



/* Entry: 10b673d08; end: 10b673d47; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:paidReach:rewatches:avgViewTime:avgViewRate:] */

void FUN_10b673d08(void)

{
  undefined8 in_stack_00000040;
  undefined1 auStack_30 [16];
  
  func_0x00010b674588();
  func_0x00010b674544(in_stack_00000040);
  func_0x00010b6743c0();
  func_0x00010b67436c(auStack_30);
  return;
}



/* Entry: 10b673d48; end: 10b673d87; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:paidReach:rewatches:avgViewTime:] */

void FUN_10b673d48(void)

{
  undefined8 in_stack_00000040;
  undefined1 auStack_30 [16];
  
  func_0x00010b674588();
  func_0x00010b6744fc(in_stack_00000040);
  func_0x00010b6743c0();
  func_0x00010b67436c(auStack_30);
  return;
}



/* Entry: 10b673d88; end: 10b673dc3; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:paidReach:rewatches:] */

void FUN_10b673d88(void)

{
  undefined8 in_stack_00000030;
  
  func_0x00010b6743fc(in_stack_00000030);
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673dc4; end: 10b673e03; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:paidReach:] */

void FUN_10b673dc4(void)

{
  undefined8 in_stack_00000030;
  
  func_0x00010b6743d0(in_stack_00000030);
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673e04; end: 10b673e3b; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:paidViews:] */

void FUN_10b673e04(void)

{
  undefined8 in_stack_00000020;
  
  func_0x00010b6743fc(in_stack_00000020);
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673e3c; end: 10b673e77; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:combinedReach:] */

void FUN_10b673e3c(void)

{
  undefined8 in_stack_00000020;
  
  func_0x00010b6743d0(in_stack_00000020);
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673e78; end: 10b673eaf; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:combinedViews:] */

void FUN_10b673e78(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010b6743fc(in_stack_00000010);
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673eb0; end: 10b673eef; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:swipeAways:] */

void FUN_10b673eb0(void)

{
  undefined8 in_stack_00000010;
  
  func_0x00010b6743d0(in_stack_00000010);
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673ef0; end: 10b673f1b; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:swipeUps:] */

void FUN_10b673ef0(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010b6743fc(in_stack_00000000);
  func_0x00010b674484();
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673f1c; end: 10b673f5f; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:tapBackwards:] */

void FUN_10b673f1c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  func_0x00010b674394(in_stack_00000000,param_1,PTR_s_initWithFieldValues__1125e24b8);
  func_0x00010b67434c();
  return;
}



/* Entry: 10b673f60; end: 10b673f8b; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:tapForwards:] */

void FUN_10b673f60(void)

{
  func_0x00010b674378(PTR_PTR_112709300);
  func_0x00010b674484();
  func_0x00010b6742f0();
  return;
}



/* Entry: 10b673f8c; end: 10b673fc3; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:reach:] */

void FUN_10b673f8c(void)

{
  func_0x00010b674378(PTR_PTR_112709300);
  func_0x00010b674394();
  func_0x00010b67434c();
  return;
}



/* Entry: 10b673fc4; end: 10b673ff7; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:subscribes:] */

void FUN_10b673fc4(void)

{
  func_0x00010b674378(PTR_PTR_112709300);
  func_0x00010b674484();
  func_0x00010b67430c();
  return;
}



/* Entry: 10b673ff8; end: 10b67402f; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:shares:] */

void FUN_10b673ff8(void)

{
  func_0x00010b674378(PTR_PTR_112709300);
  func_0x00010b674394();
  func_0x00010b67434c();
  return;
}



/* Entry: 10b674030; end: 10b67405f; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:boosts:] */

void FUN_10b674030(void)

{
  func_0x00010b674378(PTR_PTR_112709300);
  func_0x00010b674484();
  func_0x00010b67430c();
  return;
}



/* Entry: 10b674060; end: 10b674097; -[SCImpalaSnapInsightsSnapMetrics initWithViews:screenshots:storyReplies:] */

void FUN_10b674060(void)

{
  func_0x00010b674378(PTR_PTR_112709300);
  func_0x00010b674394();
  func_0x00010b67434c();
  return;
}



/* Entry: 10b674098; end: 10b6740a7; +[SCImpalaSnapInsightsSnapMetrics valdiMarshallableObjectDescriptor] */

void FUN_10b674098(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4d3d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6740a8; end: 10b6740cf; -[SCImpalaWatchedStateCacheItem initWithItemId:encodedWatchedState:] */

void FUN_10b6740a8(void)

{
  func_0x00010b6743ec(PTR_PTR_112709308);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b6740d0; end: 10b6740df; +[SCImpalaWatchedStateCacheItem valdiMarshallableObjectDescriptor] */

void FUN_10b6740d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_itemId_110d4d5c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6740e0; end: 10b67411f; -[SCLocalStoryItem initWithClientId:storyType:creationTimestamp:] */

void FUN_10b6740e0(void)

{
  func_0x00010b674378(PTR_PTR_112709310);
  func_0x00010b67435c();
  return;
}



/* Entry: 10b674120; end: 10b674133; +[SCLocalStoryItem valdiMarshallableObjectDescriptor] */

void FUN_10b674120(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4d610;
  param_1[1] = &PTR_DAT_110d4d778;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674134; end: 10b674153; -[SCLocalStoryQuery init] */

void FUN_10b674134(void)

{
  func_0x00010b67441c(PTR_PTR_112709318);
  return;
}



/* Entry: 10b674154; end: 10b674167; +[SCLocalStoryQuery valdiMarshallableObjectDescriptor] */

void FUN_10b674154(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4d798;
  param_1[1] = &PTR_DAT_110d4d7e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674168; end: 10b674193; -[SCLocalStorySnapshot initWithItems:timestamp:] */

void FUN_10b674168(void)

{
  func_0x00010b6743ec(PTR_PTR_112709320);
  func_0x00010b6743b4();
  return;
}



/* Entry: 10b674194; end: 10b6741a7; +[SCLocalStorySnapshot valdiMarshallableObjectDescriptor] */

void FUN_10b674194(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4d7f0;
  param_1[1] = &PTR_DAT_110d4d838;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6741a8; end: 10b6741eb; -[SCOwnedStorySnap initWithIsPending:isFailed:] */

void FUN_10b6741a8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709328);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b6741ec; end: 10b6741ff; +[SCOwnedStorySnap valdiMarshallableObjectDescriptor] */

void FUN_10b6741ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4d848;
  param_1[1] = &PTR_DAT_110d4d950;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674200; end: 10b67424f; -[SCOwnedStoryState initWithHasFriendStory:friendStoryUnviewed:pendingFriendStorySnapsCount:ownedStorySnaps:] */

void FUN_10b674200(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674378(PTR_PTR_112709330);
  func_0x00010b674414(auStack_20);
  return;
}



/* Entry: 10b674250; end: 10b674263; +[SCOwnedStoryState valdiMarshallableObjectDescriptor] */

void FUN_10b674250(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4d968;
  param_1[1] = &PTR_DAT_110d4dae8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674264; end: 10b67428b; -[SCProfileBirthday initWithMonthOfYear:dayOfMonth:auraEnabled:] */

void FUN_10b674264(void)

{
  func_0x00010b674378(PTR_PTR_112709338);
  func_0x00010b67434c();
  return;
}



/* Entry: 10b67428c; end: 10b67429b; +[SCProfileBirthday valdiMarshallableObjectDescriptor] */

void FUN_10b67428c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4db08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b67429c; end: 10b6742ef;  */

void FUN_10b67429c(undefined8 param_1,undefined4 param_2)

{
  func_0x00010b674568(param_2);
  return;
}



/* Entry: 10b6742f0; end: 10b674593;  */

void FUN_10b6742f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000008 = param_2;
  uStack0000000000000010 = param_5;
  uStack0000000000000018 = param_6;
  uStack0000000000000020 = param_7;
  uStack0000000000000028 = param_8;
  uStack0000000000000030 = param_9;
  uStack0000000000000038 = param_10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)(unaff_x29 + -0x10,param_4,0);
  return;
}



/* Entry: 10b674594; end: 10b674647; -[SCCBirthdayPageBirthdayPageLoggingSource__Enum init] */

undefined * FUN_10b674594(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_1133bb420;
  puStack_40 = PTR_PTR_1133bb428;
  puStack_38 = PTR_PTR_1133bb430;
  puStack_30 = PTR_PTR_1133bb438;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b674718(PTR_PTR_112709340);
  return puVar1;
}



/* Entry: 10b674648; end: 10b67466b; -[SCCBirthdayPageBirthdayPageComponentContext initWithNavigator:handlers:providers:] */

void FUN_10b674648(void)

{
  func_0x00010b674718(PTR_PTR_112709340);
  return;
}



/* Entry: 10b67466c; end: 10b67467f; +[SCCBirthdayPageBirthdayPageComponentContext valdiMarshallableObjectDescriptor] */

void FUN_10b67466c(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d4db68;
  param_1[1] = &PTR_s_SCValdiINavigator_110d4dbc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674680; end: 10b6746a3; -[SCCBirthdayPageBirthdayPageContext initWithNavigator:handlers:providers:] */

void FUN_10b674680(void)

{
  func_0x00010b674718(PTR_PTR_112709348);
  return;
}



/* Entry: 10b6746a4; end: 10b6746b7; +[SCCBirthdayPageBirthdayPageContext valdiMarshallableObjectDescriptor] */

void FUN_10b6746a4(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d4dbe8;
  param_1[1] = &PTR_s_SCValdiINavigator_110d4dc48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6746b8; end: 10b6746f3; -[SCCBirthdayPageBirthdayPageViewModel initWithHandlers:] */

void FUN_10b6746b8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709350;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b6746f4; end: 10b674737; +[SCCBirthdayPageBirthdayPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b6746f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4dc68;
  param_1[1] = &PTR_DAT_110d4dcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674738; end: 10b674773; -[SCCActivityCenterSharedOpenDeeplinkRequest initWithUrl:] */

void FUN_10b674738(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709358;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b674774; end: 10b674783; +[SCCActivityCenterSharedOpenDeeplinkRequest valdiMarshallableObjectDescriptor] */

void FUN_10b674774(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_110d4dcc0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674784; end: 10b6747b7; -[SCCActivityCenterSharedOpenDeeplinkResponse init] */

void FUN_10b674784(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709360;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b6747b8; end: 10b6747d3; +[SCCActivityCenterSharedOpenDeeplinkResponse valdiMarshallableObjectDescriptor] */

void FUN_10b6747b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_error_110d4dcf0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b6747d4; end: 10b6747db; -[SCAuraOperaActionBarIcon__Enum init] */

void FUN_10b6747d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b6747dc; end: 10b6747e3; -[SCAuraOperaActionBarViewStyle__Enum init] */

void FUN_10b6747dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b6747e4; end: 10b6747eb; -[SCAuraZodiac__Enum init] */

void FUN_10b6747e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xc);
  return;
}



/* Entry: 10b6747ec; end: 10b674843; -[SCAuraCompatibilityDiviningPageViewContext initWithUpdateAuraData:diviningPageDidComplete:] */

void FUN_10b6747ec(void)

{
  func_0x00010b674fb8();
  func_0x00010b675054();
  func_0x00010b675010();
  func_0x00010b675004();
  func_0x00010b675038();
  func_0x00010b674fe8();
  func_0x00010b67501c();
  func_0x00010b675044();
  return;
}



/* Entry: 10b674844; end: 10b674853; +[SCAuraCompatibilityDiviningPageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b674844(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d4dd20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b674854; end: 10b674887; -[SCAuraCompatibilityDiviningPageViewModel initWithMyZodiac:friendZodiac:] */

void FUN_10b674854(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b674ff4(PTR_PTR_112709370);
  func_0x00010b675030(auStack_20);
  return;
}



/* Entry: 10b674888; end: 10b67489b; +[SCAuraCompatibilityDiviningPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b674888(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d4dd68;
  param_1[1] = &PTR_DAT_110d4ddf8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


