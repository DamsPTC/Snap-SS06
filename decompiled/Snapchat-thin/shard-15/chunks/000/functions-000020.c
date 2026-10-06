/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b772eec; end: 10b772eef; -[SOJUFriendFeedItem initWithIds:] */

void FUN_10b772eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b772ef0; end: 10b772f67; +[SOJUFriendFeedItem registerMessageFields:] */

void FUN_10b772ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0b50;
  puVar1 = PTR_s_ids_112545740;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b772f68; end: 10b772f87; -[SOJUFriendFeedItemId initWithIdValue:type:] */

void FUN_10b772f68(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b772f88; end: 10b77309b; +[SOJUFriendFeedItemId registerMessageFields:] */

void FUN_10b772f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,0,
                      0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,0x10b77301c,FUN_10b77309c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77309c; end: 10b7730f7;  */

undefined ** FUN_10b77309c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x6b166938) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f6a818;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9c098;
  if (param_1 != 0x7c18fe9e) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9438;
  if (param_1 != -0x762210b) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7730f8; end: 10b773117; -[SOJUFriendFeedItemWithSignals initWithFeedItem:signalsDeprecated:serverSideSignals:] */

void FUN_10b7730f8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b773118; end: 10b7731d3; +[SOJUFriendFeedItemWithSignals registerMessageFields:] */

void FUN_10b773118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e0b58;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b7731d4();
  puVar1 = PTR_s_signalsDeprecated_112545758;
  puVar2 = PTR_PTR_1126e0b60;
  _objc_opt_class(PTR_PTR_1126e0b60);
  func_0x00010bf06b60(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f7e178,2,7,
                      puVar2,0,0,2);
  _objc_opt_class(PTR_PTR_1126e0b60);
  FUN_10b7731d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7731d4; end: 10b7731ef;  */

void FUN_10b7731d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7731f0; end: 10b77322b; -[SOJUFriendFeedRankingMetadata initWithAstGroupToUse:debugRankingMetadata:backgroundTimeThresholdInSeconds:rerankerStoryDemotionFactor:rerankerChatDemotionFactor:rerankerEnabled:lastFullRankingTimeThresholdInSecs:warmStartLastFullRankingTimeThresholdInSecs:warmStartFriendFeedTimeAwayThresholdInSecsDeprecated:friendFeedTimeAwayThresholdInSecs:warmStartBackgroundTimeThresholdInSeconds:rerankerV2Metadata:] */

void FUN_10b7731f0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77322c; end: 10b773347; +[SOJUFriendFeedRankingMetadata registerMessageFields:] */

void FUN_10b77322c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_PTR_1126e0b68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b773368();
  _objc_opt_class(PTR_PTR_1126e0b70);
  func_0x00010b773368();
  func_0x00010b773348();
  func_0x00010b773348();
  func_0x00010b773348();
  func_0x00010b77338c(param_3,param_2,PTR_s_rerankerEnabled_112545798,0,1,0,in_x6,in_x7,0,0);
  func_0x00010b773348();
  func_0x00010b773348();
  func_0x00010b77338c(param_3,param_2,PTR_s_warmStartFriendFeedTimeAwayThres_1125457b0,
                      &PTR____CFConstantStringClassReference_110f7e198,2,1,in_x6,in_x7,0,0);
  func_0x00010b773348();
  func_0x00010b773348();
  _objc_opt_class(PTR_PTR_1126e0b78);
  func_0x00010b773368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b773348; end: 10b773397;  */

void FUN_10b773348(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b773398; end: 10b773407; -[SOJUFriendFeedRequest initWithTimestamp:reqToken:username:snapchatUserId:chatFeedRequest:storyFriendFeedRequest:sessionId:requestId:callOriginationType:creationTimestamp:layoutType:conversationIdsToFetch:previousPagesItemIds:debugParam:lastFullSyncTimestamp:returnRankedStoriesOnly:notificationId:sinceTimestamp:limit:returnFriendStoriesOnly:returnFeedItemWithSignals:userStoryInteractionHistory:friendRankingSignals:filterOutUnidirectionalFriendStories:friendStoryRankingSignals:] */

void FUN_10b773398(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b773408; end: 10b7736b3; +[SOJUFriendFeedRequest registerMessageFields:] */

void FUN_10b773408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  func_0x00010b773718(param_3,param_2,puVar1,0,0);
  func_0x00010b7736d0();
  func_0x00010b773734();
  func_0x00010b773718();
  func_0x00010b7736d0();
  _objc_opt_class(PTR_PTR_1126e0b80);
  func_0x00010b7736b4();
  _objc_opt_class(PTR_PTR_1126e0b88);
  func_0x00010b7736b4();
  func_0x00010b7736d0();
  func_0x00010b7736d0();
  func_0x00010b7736ec();
  func_0x00010bf06b60();
  func_0x00010b773704();
  func_0x00010b773728();
  func_0x00010b7736ec();
  func_0x00010bf06b60();
  func_0x00010b773728(param_3,param_2,PTR_s_conversationIdsToFetch_1125457f0,0,1,7);
  func_0x00010c19a460(param_3,param_2,0x6ce751aa8dce35);
  _objc_opt_class(PTR_PTR_1126e0b58);
  func_0x00010b7736b4();
  _objc_opt_class(PTR_PTR_1126e0b90);
  func_0x00010b7736b4();
  func_0x00010b773704();
  func_0x00010b773728();
  func_0x00010b773704();
  func_0x00010b773728();
  func_0x00010b7736d0();
  func_0x00010b773704();
  func_0x00010b773728();
  func_0x00010b773734();
  func_0x00010b773728();
  func_0x00010b773704();
  func_0x00010b773728();
  func_0x00010b773704();
  func_0x00010b773728();
  _objc_opt_class(PTR_PTR_1126e0b98);
  func_0x00010b7736b4();
  _objc_opt_class(PTR_PTR_1126e0ba0);
  func_0x00010b7736b4();
  func_0x00010b773704();
  func_0x00010b773728();
  func_0x00010b7736d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7736b4; end: 10b773747;  */

void FUN_10b7736b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b773748; end: 10b773753; +[SOJUFriendFeedRequestBuilder messageClass] */

void FUN_10b773748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ba8);
  return;
}



/* Entry: 10b773754; end: 10b773757; +[SOJUFriendFeedRequestBuilder withJUFriendFeedRequest:] */

void FUN_10b773754(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b773758; end: 10b7737d7;  */

undefined8 FUN_10b773758(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e11318;
  func_0x00010b77382c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x760271c8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e1b8;
    func_0x00010b77382c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x4cfba731;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7cff8;
      func_0x00010b77382c();
      uVar2 = 0x6a43239a;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7737d8; end: 10b773833;  */

undefined ** FUN_10b7737d8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x4cfba731) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7e1b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7cff8;
  if (param_1 != 0x6a43239a) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e11318;
  if (param_1 != 0x760271c8) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b773834; end: 10b77388f; -[SOJUFriendFeedRequestDebugParam initWithIsDebugRequest:disableFriendsSignalMemcache:disableStoriesAdapter:disableFriendsSignalAdapter:disableConversationsAdapter:disableConversationsMultiGetAdapter:trackItems:isReplayRequest:numRecentConversationsToFetch:numStoriesToSelectFromRanking:numFriendsToSelectFromRanking:conversationsScoringModelToUse:storiesScoringModelToUse:friendsScoringModelToUse:shouldReturnAllSignals:disableConversationsPreFetchAdapter:studyIdToUse:shouldReturnDebugInfoHtml:shouldReturnStoryScores:] */

void FUN_10b773834(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b773890; end: 10b773a13; +[SOJUFriendFeedRequestDebugParam registerMessageFields:] */

void FUN_10b773890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b773a54();
  func_0x00010b773a48();
  func_0x00010b773a14();
  func_0x00010b773a14();
  func_0x00010b773a14();
  func_0x00010b773a14();
  func_0x00010b773a14();
  _objc_opt_class(PTR_PTR_1126e0b58);
  func_0x00010b773a54();
  func_0x00010bf06b60();
  func_0x00010b773a14();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a14();
  func_0x00010b773a14();
  func_0x00010b773a34();
  func_0x00010b773a48();
  func_0x00010b773a14();
  func_0x00010b773a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b773a14; end: 10b773a67;  */

void FUN_10b773a14(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b773a68; end: 10b773adb;  */

undefined8 FUN_10b773a68(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff9462ac7c;
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e1d8;
  func_0x00010b773b30();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e1f8;
    func_0x00010b773b30();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff9462ac7d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e218;
      func_0x00010b773b30();
      uVar2 = 0xffffffff9462ac8c;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b773adc; end: 10b773b37;  */

undefined ** FUN_10b773adc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x6b9d5383) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7e1f8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e218;
  if (param_1 != -0x6b9d5374) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e1d8;
  if (param_1 != -0x6b9d5384) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b773b38; end: 10b773b5b; -[SOJUFriendFeedRerankerV2Metadata initWithEnable:maxBoost:maxStoriesToBoost:targetPosStart:targetPosInc:] */

void FUN_10b773b38(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b773b5c; end: 10b773bf3; +[SOJUFriendFeedRerankerV2Metadata registerMessageFields:] */

void FUN_10b773b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_enable_1125c1570;
  _objc_retain(param_3);
  func_0x00010b773c14(param_3,param_2,puVar1,0,0,0,in_x6,in_x7,0,0);
  func_0x00010b773c14(param_3,param_2,PTR_s_maxBoost_1125458f0,0,1,3,in_x6,in_x7,0,0);
  func_0x00010b773bf4();
  func_0x00010b773bf4();
  func_0x00010b773bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b773bf4; end: 10b773c1f;  */

void FUN_10b773bf4(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b773c20; end: 10b773c23; -[SOJUFriendFeedUserSignals initWithSignals:] */

void FUN_10b773c20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b773c24; end: 10b773c9b; +[SOJUFriendFeedUserSignals registerMessageFields:] */

void FUN_10b773c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0b60;
  puVar1 = PTR_s_signals_112545918;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b773c9c; end: 10b773cd7; -[SOJUFriendSearchResultItem initWithUserId:username:displayName:storyPrivacy:friendmojiCategories:friendmojiDictionary:position:keywords:latestStoryThumbnailUrl:latestStoryThumbnailIv:latestStoryMediaKey:displayUsername:] */

void FUN_10b773c9c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b773cd8; end: 10b773e5f; +[SOJUFriendSearchResultItem registerMessageFields:] */

void FUN_10b773cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b773ea8();
  func_0x00010b773e80();
  func_0x00010b773e9c();
  func_0x00010b773e80();
  func_0x00010b773e60();
  func_0x00010b773e9c();
  func_0x00010bf06b60();
  func_0x00010b773e9c();
  func_0x00010b773e90();
  func_0x00010c19a460(param_3,param_2,0x256b727ea1140c);
  _objc_opt_class(PTR_PTR_1126e0bb0);
  func_0x00010b773ea8();
  func_0x00010bf06b60();
  func_0x00010b773e9c();
  func_0x00010b773e90();
  func_0x00010b773e9c();
  func_0x00010b773e90();
  func_0x00010c19a460(param_3,param_2,0x33d71a66c6dc67);
  func_0x00010b773e60();
  func_0x00010b773e60();
  func_0x00010b773e60();
  func_0x00010b773e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b773e60; end: 10b773ebb;  */

void FUN_10b773e60(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b773ebc; end: 10b773edf; -[SOJUFriendShortcut initWithShortcutId:emoji:imageSrc:name:userIds:] */

void FUN_10b773ebc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b773ee0; end: 10b773f9b; +[SOJUFriendShortcut registerMessageFields:] */

void FUN_10b773ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_shortcutId_112668fb8;
  _objc_retain(param_3);
  func_0x00010b773fbc(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b773f9c();
  func_0x00010b773f9c();
  func_0x00010b773f9c();
  func_0x00010b773fbc(param_3,param_2,PTR_s_userIds_1126823f0,0,0,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0x338bf9f5f2e5b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b773f9c; end: 10b773fc7;  */

void FUN_10b773f9c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b773fc8; end: 10b773fd3; +[SOJUFriendShortcutBuilder messageClass] */

void FUN_10b773fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0bb8);
  return;
}



/* Entry: 10b773fd4; end: 10b773fd7; +[SOJUFriendShortcutBuilder withJUFriendShortcut:] */

void FUN_10b773fd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b773fd8; end: 10b77403b; -[SOJUFriendStories initWithUsername:stories:displayName:isLocal:profileDescription:deepLinkUrl:sharedId:matureContent:adPlacementMetadata:thumbnails:allowStoryExplorer:hasCustomDescription:showViewingJit:featuredStory:isManifestStory:type:publisherId:officialStoriesMetadata:sojuNewStoryCount:userId:mobType:] */

void FUN_10b773fd8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77403c; end: 10b77422f; +[SOJUFriendStories registerMessageFields:] */

void FUN_10b77403c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010b7742a0();
  func_0x00010b774270();
  puVar1 = PTR_s_stories_112673a38;
  _objc_opt_class(PTR_PTR_1126e0bc0);
  func_0x00010b7742b4(param_3,param_2,puVar1,0,0);
  func_0x00010b774230();
  func_0x00010b774250();
  func_0x00010b774230();
  func_0x00010b774230();
  func_0x00010b774230();
  func_0x00010b774250();
  _objc_opt_class(PTR_PTR_1126e0bc8);
  func_0x00010b77427c();
  _objc_opt_class(PTR_PTR_1126e0bd0);
  func_0x00010b7742a0();
  func_0x00010b7742b4();
  func_0x00010b774250();
  func_0x00010b774250();
  func_0x00010b774250();
  _objc_opt_class(PTR_PTR_1126e0bd8);
  func_0x00010b77427c();
  func_0x00010b774250();
  func_0x00010b7742c0(param_3,param_2,PTR_s_type_11267d188,0,0);
  func_0x00010b774230();
  _objc_opt_class(PTR_PTR_1126e0be0);
  func_0x00010b77427c();
  func_0x00010b774270(param_3,param_2,PTR_s_sojuNewStoryCount_1125459b8,
                      &PTR____CFConstantStringClassReference_110f7e238,2,1);
  func_0x00010b774230();
  func_0x00010b7742c0(param_3,param_2,PTR_s_mobType_112544d60,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b774230; end: 10b7742cb;  */

void FUN_10b774230(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7742cc; end: 10b7742eb; -[SOJUFriendStory initWithStory:viewed:flushableStoryId:] */

void FUN_10b7742cc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7742ec; end: 10b77439f; +[SOJUFriendStory registerMessageFields:] */

void FUN_10b7742ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cf0d0;
  puVar1 = PTR_s_story_112673df8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  FUN_10b7743a0(param_3,param_2,PTR_s_viewed_1126854c0,0,0,0);
  FUN_10b7743a0(param_3,param_2,PTR_s_flushableStoryId_1125ca690,0,1,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7743a0; end: 10b7743ab;  */

void FUN_10b7743a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7743ac; end: 10b7743cf; -[SOJUFriendStoryInteraction initWithIdValue:totalImpressionTimeMs:latestImpressionTimestamp:numWatches:latestWatchTimestamp:] */

void FUN_10b7743ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7743d0; end: 10b774477; +[SOJUFriendStoryInteraction registerMessageFields:] */

void FUN_10b7743d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b774478(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6,in_x6,
                in_x7,0,0);
  func_0x00010b774484();
  FUN_10b774478();
  func_0x00010b774484();
  FUN_10b774478();
  func_0x00010b774484();
  FUN_10b774478();
  func_0x00010b774484();
  FUN_10b774478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b774478; end: 10b774497;  */

void FUN_10b774478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b774498; end: 10b7744b7; -[SOJUFriendmoji initWithCategoryName:expirationTime:] */

void FUN_10b774498(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7744b8; end: 10b77452b; +[SOJUFriendmoji registerMessageFields:] */

void FUN_10b7744b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_categoryName_1125aa700;
  _objc_retain(param_3);
  FUN_10b77452c(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b77452c(param_3,param_2,PTR_s_expirationTime_1125c4ba8,0,1,2,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77452c; end: 10b774537;  */

void FUN_10b77452c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b774538; end: 10b77455b; -[SOJUFriendsRequest initWithFriendsSyncToken:requestTokenOnlyDeprecated:addedFriendsSyncToken:isRequestFromBackground:excludeIncomingFriends:] */

void FUN_10b774538(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77455c; end: 10b77455f; +[SOJUFriendsRequestBuilder withJUFriendsRequest:] */

void FUN_10b77455c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b774560; end: 10b7745a7; -[SOJUFriendsResponse initWithFriends:friendsSyncToken:friendsSyncType:addedFriends:bests:extraFriendmojiMutableDict:extraFriendmojiReadOnlyDict:addedFriendsSyncToken:addedFriendsSyncType:partialFriends:bestsUserIds:isResponseWithPartialColumns:invitedUsers:isNumberOneBestFriendPinned:reverseBestFriends:extendedBestsUserIds:] */

void FUN_10b774560(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7745a8; end: 10b774613;  */

undefined8 FUN_10b7745a8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e278;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e278,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x5787e90;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e298;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e298,param_2,param_1);
    uVar2 = 0xffffffff904761e0;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b774614; end: 10b77464f;  */

undefined ** FUN_10b774614(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e298;
  if (param_1 != -0x6fb89e20) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e278;
  if (param_1 != 0x5787e90) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b774650; end: 10b77465b; +[SOJUFriendsResponseBuilder messageClass] */

void FUN_10b774650(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126db020);
  return;
}



/* Entry: 10b77465c; end: 10b7746af; +[SOJUFriendsResponseBuilder withJUFriendsResponse:] */

void FUN_10b77465c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7746b0; end: 10b7746cf; -[SOJUGalleryAltitudeInfoFilter initWithAltitude:type:units:] */

void FUN_10b7746b0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7746d0; end: 10b77476b; +[SOJUGalleryAltitudeInfoFilter registerMessageFields:] */

void FUN_10b7746d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_altitude_11259e168;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,4,0,0,0,0);
  FUN_10b77476c();
  FUN_10b77476c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77476c; end: 10b774783;  */

void FUN_10b77476c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b774784; end: 10b77478f; +[SOJUGalleryAltitudeInfoFilterBuilder messageClass] */

void FUN_10b774784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0bf0);
  return;
}



/* Entry: 10b774790; end: 10b774793; +[SOJUGalleryAltitudeInfoFilterBuilder withJUGalleryAltitudeInfoFilter:] */

void FUN_10b774790(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b774794; end: 10b7747b3; -[SOJUGalleryAltitudeInfoFilterStyle initWithType:units:] */

void FUN_10b774794(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7747b4; end: 10b77482f; +[SOJUGalleryAltitudeInfoFilterStyle registerMessageFields:] */

void FUN_10b7747b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  FUN_10b774830(param_3,param_2,puVar1);
  FUN_10b774830(param_3,param_2,PTR_s_units_11267dc20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b774830; end: 10b774843;  */

void FUN_10b774830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0);
  return;
}



/* Entry: 10b774844; end: 10b77484f; +[SOJUGalleryAltitudeInfoFilterStyleBuilder messageClass] */

void FUN_10b774844(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0bf8);
  return;
}



/* Entry: 10b774850; end: 10b774853; +[SOJUGalleryAltitudeInfoFilterStyleBuilder withJUGalleryAltitudeInfoFilterStyle:] */

void FUN_10b774850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b774854; end: 10b7748bf;  */

undefined8 FUN_10b774854(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e2d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e2d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x40758d9;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
    uVar2 = 0x273d2d;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7748c0; end: 10b7748f7;  */

undefined ** FUN_10b7748c0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
  if (param_1 != 0x273d2d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e2d8;
  if (param_1 != 0x40758d9) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7748f8; end: 10b774963;  */

undefined8 FUN_10b7748f8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e2f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e2f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x20ddae;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed2af8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ed2af8,param_2,param_1);
    uVar2 = 0xffffffff8758ba0a;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b774964; end: 10b77499b;  */

undefined ** FUN_10b774964(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed2af8;
  if (param_1 != -0x78a745f6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e2f8;
  if (param_1 != 0x20ddae) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77499c; end: 10b774a07;  */

undefined8 FUN_10b77499c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e2d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e2d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x40758d9;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
    uVar2 = 0x273d2d;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b774a08; end: 10b774a3f;  */

undefined ** FUN_10b774a08(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
  if (param_1 != 0x273d2d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e2d8;
  if (param_1 != 0x40758d9) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b774a40; end: 10b774aab;  */

undefined8 FUN_10b774a40(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e2f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e2f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x20ddae;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed2af8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ed2af8,param_2,param_1);
    uVar2 = 0xffffffff8758ba0a;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b774aac; end: 10b774ae3;  */

undefined ** FUN_10b774aac(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed2af8;
  if (param_1 != -0x78a745f6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e2f8;
  if (param_1 != 0x20ddae) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b774ae4; end: 10b774b07; -[SOJUGalleryAppStickerStyle initWithAppName:attachmentUrl:type:appId:] */

void FUN_10b774ae4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b774b08; end: 10b774bab; +[SOJUGalleryAppStickerStyle registerMessageFields:] */

void FUN_10b774b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_appName_11259f090;
  _objc_retain(param_3);
  FUN_10b774bac(param_3,param_2,puVar1);
  FUN_10b774bac(param_3,param_2,PTR_s_attachmentUrl_1125a0f50);
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b774bc4,FUN_10b774c60,0);
  FUN_10b774bac(param_3,param_2,PTR_s_appId_11259ee68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b774bac; end: 10b774bc3;  */

void FUN_10b774bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b774bc4; end: 10b774c5f;  */

undefined8 FUN_10b774bc4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f16f38;
  func_0x00010b774ccc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3fa644c1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f282b8;
    func_0x00010b774ccc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff9d5855b0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e318;
      func_0x00010b774ccc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x2074267c;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7e338;
        func_0x00010b774ccc();
        uVar2 = 0xfffffffff0575f4d;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b774c60; end: 10b774cd3;  */

undefined ** FUN_10b774c60(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x62a7aa50) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f282b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e318;
  if (param_1 != 0x2074267c) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e338;
  if (param_1 != -0xfa8a0b3) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f16f38;
  if (param_1 != 0x3fa644c1) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b774cd4; end: 10b774cf3; -[SOJUGalleryAutoCaptions initWithTransform:phrases:] */

void FUN_10b774cd4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b774cf4; end: 10b774d73; +[SOJUGalleryAutoCaptions registerMessageFields:] */

void FUN_10b774cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3fe8;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b774d74();
  _objc_opt_class(PTR_PTR_1126d90f8);
  FUN_10b774d74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b774d74; end: 10b774d8f;  */

void FUN_10b774d74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b774d90; end: 10b774d9b; +[SOJUGalleryAutoCaptionsBuilder messageClass] */

void FUN_10b774d90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d9100);
  return;
}



/* Entry: 10b774d9c; end: 10b774d9f; +[SOJUGalleryAutoCaptionsBuilder withJUGalleryAutoCaptions:] */

void FUN_10b774d9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b774da0; end: 10b774dbf; -[SOJUGalleryAutoCaptionsPhrase initWithText:startTimeMs:endTimeMs:] */

void FUN_10b774da0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b774dc0; end: 10b774e33; +[SOJUGalleryAutoCaptionsPhrase registerMessageFields:] */

void FUN_10b774dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_text_1126787e8;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,0,0,0);
  FUN_10b774e34();
  FUN_10b774e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b774e34; end: 10b774e53;  */

void FUN_10b774e34(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b774e54; end: 10b774e5f; +[SOJUGalleryAutoCaptionsPhraseBuilder messageClass] */

void FUN_10b774e54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d90f8);
  return;
}



/* Entry: 10b774e60; end: 10b774e63; +[SOJUGalleryAutoCaptionsPhraseBuilder withJUGalleryAutoCaptionsPhrase:] */

void FUN_10b774e60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b774e64; end: 10b774e67; -[SOJUGalleryBatteryInfoFilter initWithLevel:] */

void FUN_10b774e64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b774e68; end: 10b774eb3; +[SOJUGalleryBatteryInfoFilter registerMessageFields:] */

void FUN_10b774e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_level_112603c90,0,0,6,0,FUN_10b774ec4,FUN_10b774f30,0);
  return;
}



/* Entry: 10b774eb4; end: 10b774ebf; +[SOJUGalleryBatteryInfoFilterBuilder messageClass] */

void FUN_10b774eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0c00);
  return;
}



/* Entry: 10b774ec0; end: 10b774ec3; +[SOJUGalleryBatteryInfoFilterBuilder withJUGalleryBatteryInfoFilter:] */

void FUN_10b774ec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b774ec4; end: 10b774f2f;  */

undefined8 FUN_10b774ec4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d0b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x211a8f;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45bf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45bf8,param_2,param_1);
    uVar2 = 0x3f08d2d;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b774f30; end: 10b774f67;  */

undefined ** FUN_10b774f30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45bf8;
  if (param_1 != 0x3f08d2d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d0b8;
  if (param_1 != 0x211a8f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b774f68; end: 10b774f6b; -[SOJUGalleryBounceState initWithOffset:] */

void FUN_10b774f68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b774f6c; end: 10b774fab; +[SOJUGalleryBounceState registerMessageFields:] */

void FUN_10b774f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_offset_112616128,0,0,4,0,0,0,0);
  return;
}



/* Entry: 10b774fac; end: 10b774fcb; -[SOJUGalleryCameraRollStickerStyle initWithType:imageUrl:] */

void FUN_10b774fac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b774fcc; end: 10b77505b; +[SOJUGalleryCameraRollStickerStyle registerMessageFields:] */

void FUN_10b774fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b77506c,FUN_10b775178,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_imageUrl_1125d7dc0,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77505c; end: 10b775067; +[SOJUGalleryCameraRollStickerStyleBuilder messageClass] */

void FUN_10b77505c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0c08);
  return;
}



/* Entry: 10b775068; end: 10b77506b; +[SOJUGalleryCameraRollStickerStyleBuilder withJUGalleryCameraRollStickerStyle:] */

void FUN_10b775068(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}


