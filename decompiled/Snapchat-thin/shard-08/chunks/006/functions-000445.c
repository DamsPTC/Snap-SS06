/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106453f60; end: 106453f67; -[SCAdSnapViewLogParametersBuilder withTimeViewed:] */

void FUN_106453f60(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 106453f68; end: 106453f6f; -[SCAdSnapViewLogParametersBuilder withIsOnTopSnap:] */

void FUN_106453f68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106453f70; end: 106453f77; -[SCAdSnapViewLogParametersBuilder withSnapCount:] */

void FUN_106453f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106453f78; end: 106453f7f; -[SCAdSnapViewLogParametersBuilder withAdSkippableType:] */

void FUN_106453f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106453f80; end: 106453fb7; -[SCAdSnapViewLogParametersBuilder withLoadStatus:] */

long FUN_106453f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106453fb8; end: 106453fbf; -[SCAdSnapViewLogParametersBuilder withStoryType:] */

void FUN_106453fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 106453fc0; end: 106453fc7; -[SCAdSnapViewLogParametersBuilder withStoryTypeSpecific:] */

void FUN_106453fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106453fc8; end: 106453fff; -[SCAdSnapViewLogParametersBuilder withPosterId:] */

long FUN_106453fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454000; end: 106454007; -[SCAdSnapViewLogParametersBuilder withViewLocation:] */

void FUN_106454000(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 106454008; end: 10645400f; -[SCAdSnapViewLogParametersBuilder withViewSource:] */

void FUN_106454008(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 106454010; end: 106454017; -[SCAdSnapViewLogParametersBuilder withAdViewSourceSpecific:] */

void FUN_106454010(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 106454018; end: 10645401f; -[SCAdSnapViewLogParametersBuilder withSource:] */

void FUN_106454018(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 106454020; end: 106454027; -[SCAdSnapViewLogParametersBuilder withAutoAdvanceIndex:] */

void FUN_106454020(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 106454028; end: 10645402f; -[SCAdSnapViewLogParametersBuilder withAdIndexPos:] */

void FUN_106454028(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 106454030; end: 106454037; -[SCAdSnapViewLogParametersBuilder withAdIndexCount:] */

void FUN_106454030(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 106454038; end: 10645403f; -[SCAdSnapViewLogParametersBuilder withAdInsertPos:] */

void FUN_106454038(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 106454040; end: 106454047; -[SCAdSnapViewLogParametersBuilder withSnapIndexPos:] */

void FUN_106454040(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 106454048; end: 10645404f; -[SCAdSnapViewLogParametersBuilder withSnapIndexCount:] */

void FUN_106454048(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 106454050; end: 106454057; -[SCAdSnapViewLogParametersBuilder withEntryEvent:] */

void FUN_106454050(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 106454058; end: 10645405f; -[SCAdSnapViewLogParametersBuilder withExitEvent:] */

void FUN_106454058(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 106454060; end: 106454067; -[SCAdSnapViewLogParametersBuilder withEntryIntent:] */

void FUN_106454060(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 106454068; end: 10645406f; -[SCAdSnapViewLogParametersBuilder withExitIntent:] */

void FUN_106454068(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  return;
}



/* Entry: 106454070; end: 1064540a7; -[SCAdSnapViewLogParametersBuilder withStorySessionId:] */

long FUN_106454070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064540a8; end: 1064540af; -[SCAdSnapViewLogParametersBuilder withPreviousStoryItemType:] */

void FUN_1064540a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 1064540b0; end: 1064540b7; -[SCAdSnapViewLogParametersBuilder withNextStoryItemType:] */

void FUN_1064540b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 1064540b8; end: 1064540ef; -[SCAdSnapViewLogParametersBuilder withPublisherId:] */

long FUN_1064540b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064540f0; end: 106454127; -[SCAdSnapViewLogParametersBuilder withEditionId:] */

long FUN_1064540f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454128; end: 10645412f; -[SCAdSnapViewLogParametersBuilder withIsArchivedChannel:] */

void FUN_106454128(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 106454130; end: 106454167; -[SCAdSnapViewLogParametersBuilder withChannelDeepLinkId:] */

long FUN_106454130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454168; end: 10645416f; -[SCAdSnapViewLogParametersBuilder withChannelViewSource:] */

void FUN_106454168(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 106454170; end: 106454177; -[SCAdSnapViewLogParametersBuilder withEditionEntrySnapIndex:] */

void FUN_106454170(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x128) = param_3;
  return;
}



/* Entry: 106454178; end: 10645417f; -[SCAdSnapViewLogParametersBuilder withIsWithinPayToPromoteContent:] */

void FUN_106454178(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x130) = param_3;
  return;
}



/* Entry: 106454180; end: 1064541b7; -[SCAdSnapViewLogParametersBuilder withAdId:] */

long FUN_106454180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064541b8; end: 1064541ef; -[SCAdSnapViewLogParametersBuilder withAdKey:] */

long FUN_1064541b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064541f0; end: 106454227; -[SCAdSnapViewLogParametersBuilder withAdPlacementId:] */

long FUN_1064541f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454228; end: 10645425f; -[SCAdSnapViewLogParametersBuilder withAdLineItemId:] */

long FUN_106454228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454260; end: 106454297; -[SCAdSnapViewLogParametersBuilder withAdRequestClientId:] */

long FUN_106454260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454298; end: 1064542cf; -[SCAdSnapViewLogParametersBuilder withAdRequestId:] */

long FUN_106454298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064542d0; end: 106454307; -[SCAdSnapViewLogParametersBuilder withAdUnitId:] */

long FUN_1064542d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454308; end: 10645430f; -[SCAdSnapViewLogParametersBuilder withAdProductSourceType:] */

void FUN_106454308(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_3;
  return;
}



/* Entry: 106454310; end: 106454317; -[SCAdSnapViewLogParametersBuilder withAdType:] */

void FUN_106454310(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x178) = param_3;
  return;
}



/* Entry: 106454318; end: 10645431f; -[SCAdSnapViewLogParametersBuilder withOptimizationGoal:] */

void FUN_106454318(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}



/* Entry: 106454320; end: 106454327; -[SCAdSnapViewLogParametersBuilder withBrandSafetyInventoryType:] */

void FUN_106454320(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x188) = param_3;
  return;
}



/* Entry: 106454328; end: 10645432f; -[SCAdSnapViewLogParametersBuilder withAdReportFlaggedReason:] */

void FUN_106454328(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 106454330; end: 106454337; -[SCAdSnapViewLogParametersBuilder withAdReportExitType:] */

void FUN_106454330(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 106454338; end: 10645433f; -[SCAdSnapViewLogParametersBuilder withAdReportExitLevel:] */

void FUN_106454338(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
  return;
}



/* Entry: 106454340; end: 106454347; -[SCAdSnapViewLogParametersBuilder withAdSkipReason:] */

void FUN_106454340(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  return;
}



/* Entry: 106454348; end: 10645434f; -[SCAdSnapViewLogParametersBuilder withReachedAdSlot:] */

void FUN_106454348(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b0) = param_3;
  return;
}



/* Entry: 106454350; end: 106454357; -[SCAdSnapViewLogParametersBuilder withAdInsertRetryCount:] */

void FUN_106454350(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}



/* Entry: 106454358; end: 10645435f; -[SCAdSnapViewLogParametersBuilder withAdShareEntryEvent:] */

void FUN_106454358(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
  return;
}



/* Entry: 106454360; end: 106454367; -[SCAdSnapViewLogParametersBuilder withAdShareRecipientCount:] */

void FUN_106454360(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
  return;
}



/* Entry: 106454368; end: 10645436f; -[SCAdSnapViewLogParametersBuilder withVideoRollMinDegree:] */

void FUN_106454368(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1d0) = param_1;
  return;
}



/* Entry: 106454370; end: 106454377; -[SCAdSnapViewLogParametersBuilder withVideoRollMaxDegree:] */

void FUN_106454370(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1d8) = param_1;
  return;
}



/* Entry: 106454378; end: 10645437f; -[SCAdSnapViewLogParametersBuilder withLogTapPosition:] */

void FUN_106454378(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1e0) = param_3;
  return;
}



/* Entry: 106454380; end: 106454387; -[SCAdSnapViewLogParametersBuilder withTapPositionX:] */

void FUN_106454380(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1e8) = param_1;
  return;
}



/* Entry: 106454388; end: 10645438f; -[SCAdSnapViewLogParametersBuilder withTapPositionY:] */

void FUN_106454388(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1f0) = param_1;
  return;
}



/* Entry: 106454390; end: 106454397; -[SCAdSnapViewLogParametersBuilder withTapPositionXRelative:] */

void FUN_106454390(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x1f8) = param_1;
  return;
}



/* Entry: 106454398; end: 10645439f; -[SCAdSnapViewLogParametersBuilder withTapPositionYRelative:] */

void FUN_106454398(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x200) = param_1;
  return;
}



/* Entry: 1064543a0; end: 1064543a7; -[SCAdSnapViewLogParametersBuilder withLogCardMetrics:] */

void FUN_1064543a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x208) = param_3;
  return;
}



/* Entry: 1064543a8; end: 1064543af; -[SCAdSnapViewLogParametersBuilder withDeepLinkFromCard:] */

void FUN_1064543a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x209) = param_3;
  return;
}



/* Entry: 1064543b0; end: 1064543b7; -[SCAdSnapViewLogParametersBuilder withDeepLinkFallBackToAppStore:] */

void FUN_1064543b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20a) = param_3;
  return;
}



/* Entry: 1064543b8; end: 1064543bf; -[SCAdSnapViewLogParametersBuilder withDeepLinkFallBackToWebview:] */

void FUN_1064543b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20b) = param_3;
  return;
}



/* Entry: 1064543c0; end: 1064543c7; -[SCAdSnapViewLogParametersBuilder withDeepLinkFallBackToDefaultBrowser:] */

void FUN_1064543c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20c) = param_3;
  return;
}



/* Entry: 1064543c8; end: 1064543cf; -[SCAdSnapViewLogParametersBuilder withIsCameraAd:] */

void FUN_1064543c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20d) = param_3;
  return;
}



/* Entry: 1064543d0; end: 106454407; -[SCAdSnapViewLogParametersBuilder withAppInstallLoadStatus:] */

long FUN_1064543d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454408; end: 10645440f; -[SCAdSnapViewLogParametersBuilder withLogCollectionMetrics:] */

void FUN_106454408(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x218) = param_3;
  return;
}



/* Entry: 106454410; end: 106454417; -[SCAdSnapViewLogParametersBuilder withCollectionTotalItemCount:] */

void FUN_106454410(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x220) = param_3;
  return;
}



/* Entry: 106454418; end: 10645444f; -[SCAdSnapViewLogParametersBuilder withLastInteractiveItemIndex:] */

long FUN_106454418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454450; end: 106454457; -[SCAdSnapViewLogParametersBuilder withCollectionTotalViewCount:] */

void FUN_106454450(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x230) = param_3;
  return;
}



/* Entry: 106454458; end: 10645445f; -[SCAdSnapViewLogParametersBuilder withCollectionUniqueViewCount:] */

void FUN_106454458(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x238) = param_3;
  return;
}



/* Entry: 106454460; end: 106454467; -[SCAdSnapViewLogParametersBuilder withCollectionMaxInteractedItemIndex:] */

void FUN_106454460(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x240) = param_3;
  return;
}



/* Entry: 106454468; end: 10645446f; -[SCAdSnapViewLogParametersBuilder withWebViewPageLoadCount:] */

void FUN_106454468(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x248) = param_3;
  return;
}



/* Entry: 106454470; end: 106454477; -[SCAdSnapViewLogParametersBuilder withWebViewPageLoadErrorCount:] */

void FUN_106454470(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x250) = param_3;
  return;
}



/* Entry: 106454478; end: 10645447f; -[SCAdSnapViewLogParametersBuilder withWebViewLoadedOnEntry:] */

void FUN_106454478(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 600) = param_3;
  return;
}



/* Entry: 106454480; end: 106454487; -[SCAdSnapViewLogParametersBuilder withWebViewLoadedOnExit:] */

void FUN_106454480(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x259) = param_3;
  return;
}



/* Entry: 106454488; end: 10645448f; -[SCAdSnapViewLogParametersBuilder withWebViewVisiblePageLoadTimeInSec:] */

void FUN_106454488(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x260) = param_1;
  return;
}



/* Entry: 106454490; end: 106454497; -[SCAdSnapViewLogParametersBuilder withWebViewUserPermissionPromptCount:] */

void FUN_106454490(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x268) = param_3;
  return;
}



/* Entry: 106454498; end: 10645449f; -[SCAdSnapViewLogParametersBuilder withWebViewUserPermissionPromptAllowedCount:] */

void FUN_106454498(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x270) = param_3;
  return;
}



/* Entry: 1064544a0; end: 1064544d7; -[SCAdSnapViewLogParametersBuilder withWebViewAutofillDetectedFields:] */

long FUN_1064544a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064544d8; end: 10645450f; -[SCAdSnapViewLogParametersBuilder withWebViewDetectedFields:] */

long FUN_1064544d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454510; end: 106454547; -[SCAdSnapViewLogParametersBuilder withWebViewOnEditAutofilledFields:] */

long FUN_106454510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454548; end: 10645454f; -[SCAdSnapViewLogParametersBuilder withLensIsLoadedOnEntry:] */

void FUN_106454548(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x290) = param_3;
  return;
}



/* Entry: 106454550; end: 106454557; -[SCAdSnapViewLogParametersBuilder withLensIsLoadedOnExit:] */

void FUN_106454550(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x291) = param_3;
  return;
}



/* Entry: 106454558; end: 10645458f; -[SCAdSnapViewLogParametersBuilder withLensSessionId:] */

long FUN_106454558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454590; end: 106454597; -[SCAdSnapViewLogParametersBuilder withLensLoadTimeInSec:] */

void FUN_106454590(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x2a0) = param_1;
  return;
}



/* Entry: 106454598; end: 1064545cf; -[SCAdSnapViewLogParametersBuilder withServeItemId:] */

long FUN_106454598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064545d0; end: 1064545d7; -[SCAdSnapViewLogParametersBuilder withIsDynamicInsertionEligible:] */

void FUN_1064545d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b0) = param_3;
  return;
}



/* Entry: 1064545d8; end: 10645460f; -[SCAdSnapViewLogParametersBuilder withAdRankingContext:] */

long FUN_1064545d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454610; end: 106454617; -[SCAdSnapViewLogParametersBuilder withAdDisclaimerNumOfEntry:] */

void FUN_106454610(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2c0) = param_3;
  return;
}



/* Entry: 106454618; end: 10645461f; -[SCAdSnapViewLogParametersBuilder withAdDisclaimerTotalTimeSec:] */

void FUN_106454618(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x2c8) = param_1;
  return;
}



/* Entry: 106454620; end: 106454657; -[SCAdSnapViewLogParametersBuilder withDetailedGestureParameters:] */

long FUN_106454620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454658; end: 10645465f; -[SCAdSnapViewLogParametersBuilder withAdStartTimeMs:] */

void FUN_106454658(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x2d8) = param_1;
  return;
}



/* Entry: 106454660; end: 106454697; -[SCAdSnapViewLogParametersBuilder withAdClientRenderTypes:] */

long FUN_106454660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454698; end: 10645469f; -[SCAdSnapViewLogParametersBuilder withAdAttachmentTriggerType:] */

void FUN_106454698(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2e8) = param_3;
  return;
}



/* Entry: 1064546a0; end: 1064546d7; -[SCAdSnapViewLogParametersBuilder withLastNSnaps:] */

long FUN_1064546a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064546d8; end: 10645470f; -[SCAdSnapViewLogParametersBuilder withSnapsInLastNSeconds:] */

long FUN_1064546d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106454710; end: 106454717; -[SCAdSnapViewLogParametersBuilder withAdDemandSource:] */

void FUN_106454710(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x300) = param_3;
  return;
}



/* Entry: 106454718; end: 10645485b; -[SCAdSnapViewLogParametersBuilder .cxx_destruct] */

void FUN_106454718(long param_1)

{
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0x70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 10645485c; end: 106454943; -[SCAdPromotedStoryShareParameters initWithAdId:lineItemId:posterId:recipientCount:] */

undefined1 *
FUN_10645485c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1338;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106454944; end: 106454967; -[SCAdPromotedStoryShareParameters copyWithZone:] */

undefined8 FUN_106454944(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


