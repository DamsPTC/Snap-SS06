/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107053070; end: 10705307f; -[SCMessageChatViewModelProps setHasSenderHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053070(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112763394) = param_3;
  return;
}



/* Entry: 107053080; end: 10705308f; -[SCMessageChatViewModelProps hasSenderLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053080(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112763398);
}



/* Entry: 107053090; end: 10705309f; -[SCMessageChatViewModelProps setHasSenderLine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053090(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112763398) = param_3;
  return;
}



/* Entry: 1070530a0; end: 1070530af; -[SCMessageChatViewModelProps hasFoldIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070530a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276339c);
}



/* Entry: 1070530b0; end: 1070530bf; -[SCMessageChatViewModelProps setHasFoldIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070530b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276339c) = param_3;
  return;
}



/* Entry: 1070530c0; end: 1070530cf; -[SCMessageChatViewModelProps senderDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070530c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633d4);
}



/* Entry: 1070530d0; end: 1070530db; -[SCMessageChatViewModelProps setSenderDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070530d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1070530dc; end: 1070530eb; -[SCMessageChatViewModelProps recipientDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070530dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633d8);
}



/* Entry: 1070530ec; end: 1070530f7; -[SCMessageChatViewModelProps setRecipientDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070530ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1070530f8; end: 107053107; -[SCMessageChatViewModelProps hasTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070530f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633a0);
}



/* Entry: 107053108; end: 107053117; -[SCMessageChatViewModelProps setHasTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053108(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633a0) = param_3;
  return;
}



/* Entry: 107053118; end: 107053127; -[SCMessageChatViewModelProps intervalFromPrevious] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053118(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633a4);
}



/* Entry: 107053128; end: 107053137; -[SCMessageChatViewModelProps setIntervalFromPrevious:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053128(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127633a4) = param_1;
  return;
}



/* Entry: 107053138; end: 107053147; -[SCMessageChatViewModelProps belowTheFold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053138(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633a8);
}



/* Entry: 107053148; end: 107053157; -[SCMessageChatViewModelProps setBelowTheFold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053148(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633a8) = param_3;
  return;
}



/* Entry: 107053158; end: 107053167; -[SCMessageChatViewModelProps isUnseenMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053158(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633ac);
}



/* Entry: 107053168; end: 107053177; -[SCMessageChatViewModelProps setIsUnseenMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053168(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633ac) = param_3;
  return;
}



/* Entry: 107053178; end: 107053187; -[SCMessageChatViewModelProps isStatusMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053178(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633b0);
}



/* Entry: 107053188; end: 107053197; -[SCMessageChatViewModelProps setIsStatusMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053188(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633b0) = param_3;
  return;
}



/* Entry: 107053198; end: 1070531a7; -[SCMessageChatViewModelProps senderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053198(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633dc);
}



/* Entry: 1070531a8; end: 1070531b3; -[SCMessageChatViewModelProps setSenderColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070531a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1070531b4; end: 1070531c3; -[SCMessageChatViewModelProps senderLineColorOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070531b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633e0);
}



/* Entry: 1070531c4; end: 1070531cf; -[SCMessageChatViewModelProps setSenderLineColorOption:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070531c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1070531d0; end: 1070531df; -[SCMessageChatViewModelProps userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070531d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633e4);
}



/* Entry: 1070531e0; end: 10705321f; -[SCMessageChatViewModelProps setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070531e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053220; end: 10705322f; -[SCMessageChatViewModelProps currentUserSnapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633e8);
}



/* Entry: 107053230; end: 10705326f; -[SCMessageChatViewModelProps setCurrentUserSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053270; end: 10705327f; -[SCMessageChatViewModelProps circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633ec);
}



/* Entry: 107053280; end: 1070532bf; -[SCMessageChatViewModelProps setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070532c0; end: 1070532cf; -[SCMessageChatViewModelProps messagingExperimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070532c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633f0);
}



/* Entry: 1070532d0; end: 10705330f; -[SCMessageChatViewModelProps setMessagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070532d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053310; end: 10705331f; -[SCMessageChatViewModelProps contentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633f4);
}



/* Entry: 107053320; end: 10705335f; -[SCMessageChatViewModelProps setContentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053360; end: 10705336f; -[SCMessageChatViewModelProps mediaFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633f8);
}



/* Entry: 107053370; end: 1070533af; -[SCMessageChatViewModelProps setMediaFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070533b0; end: 1070533bf; -[SCMessageChatViewModelProps snapchattersDataTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070533b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633fc);
}



/* Entry: 1070533c0; end: 1070533ff; -[SCMessageChatViewModelProps setSnapchattersDataTracking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070533c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127633fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053400; end: 10705340f; -[SCMessageChatViewModelProps ctpItemViewService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053400(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763400);
}



/* Entry: 107053410; end: 10705344f; -[SCMessageChatViewModelProps setCtpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763400;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053450; end: 10705345f; -[SCMessageChatViewModelProps group] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053450(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763404);
}



/* Entry: 107053460; end: 10705349f; -[SCMessageChatViewModelProps setGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763404;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070534a0; end: 1070534af; -[SCMessageChatViewModelProps snapchattersData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070534a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763408);
}



/* Entry: 1070534b0; end: 1070534ef; -[SCMessageChatViewModelProps setSnapchattersData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070534b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763408;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070534f0; end: 1070534ff; -[SCMessageChatViewModelProps isLockedConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070534f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633b4);
}



/* Entry: 107053500; end: 10705350f; -[SCMessageChatViewModelProps setIsLockedConversation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053500(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633b4) = param_3;
  return;
}



/* Entry: 107053510; end: 10705351f; -[SCMessageChatViewModelProps summarizedUserListsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053510(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633b8);
}



/* Entry: 107053520; end: 10705352f; -[SCMessageChatViewModelProps setSummarizedUserListsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053520(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633b8) = param_3;
  return;
}



/* Entry: 107053530; end: 10705353f; -[SCMessageChatViewModelProps conversationSubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633bc);
}



/* Entry: 107053540; end: 10705354f; -[SCMessageChatViewModelProps setConversationSubtype:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053540(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127633bc) = param_3;
  return;
}



/* Entry: 107053550; end: 10705355f; -[SCMessageChatViewModelProps postSnapActionsHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633c0);
}



/* Entry: 107053560; end: 10705356f; -[SCMessageChatViewModelProps setPostSnapActionsHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053560(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127633c0) = param_1;
  return;
}



/* Entry: 107053570; end: 10705357f; -[SCMessageChatViewModelProps postSnapActionsParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276340c);
}



/* Entry: 107053580; end: 10705358b; -[SCMessageChatViewModelProps setPostSnapActionsParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10705358c; end: 10705359b; -[SCMessageChatViewModelProps payloadHorizontalMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705358c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633c4);
}



/* Entry: 10705359c; end: 1070535ab; -[SCMessageChatViewModelProps setPayloadHorizontalMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705359c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127633c4) = param_1;
  return;
}



/* Entry: 1070535ac; end: 1070535bb; -[SCMessageChatViewModelProps payloadViewPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070535ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763410);
}



/* Entry: 1070535bc; end: 1070535c7; -[SCMessageChatViewModelProps setPayloadViewPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070535bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1070535c8; end: 1070535d7; -[SCMessageChatViewModelProps pluginManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070535c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763414);
}



/* Entry: 1070535d8; end: 107053617; -[SCMessageChatViewModelProps setPluginManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070535d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763414;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053618; end: 107053627; -[SCMessageChatViewModelProps urlSpamProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053618(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763418);
}



/* Entry: 107053628; end: 107053667; -[SCMessageChatViewModelProps setUrlSpamProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763418;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053668; end: 107053677; -[SCMessageChatViewModelProps isFirstViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107053668(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633c8);
}



/* Entry: 107053678; end: 107053687; -[SCMessageChatViewModelProps setIsFirstViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053678(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633c8) = param_3;
  return;
}



/* Entry: 107053688; end: 107053697; -[SCMessageChatViewModelProps snapCellState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053688(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127633cc);
}



/* Entry: 107053698; end: 1070536a7; -[SCMessageChatViewModelProps setSnapCellState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053698(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127633cc) = param_3;
  return;
}



/* Entry: 1070536a8; end: 1070536b7; -[SCMessageChatViewModelProps isSnapSentToSelf] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1070536a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127633d0);
}



/* Entry: 1070536b8; end: 1070536c7; -[SCMessageChatViewModelProps setIsSnapSentToSelf:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070536b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127633d0) = param_3;
  return;
}



/* Entry: 1070536c8; end: 1070536d7; -[SCMessageChatViewModelProps currentUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070536c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276341c);
}



/* Entry: 1070536d8; end: 107053717; -[SCMessageChatViewModelProps setCurrentUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070536d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276341c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053718; end: 107053727; -[SCMessageChatViewModelProps recipientUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053718(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763420);
}



/* Entry: 107053728; end: 107053767; -[SCMessageChatViewModelProps setRecipientUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763420;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053768; end: 107053777; -[SCMessageChatViewModelProps quotedRenderableViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053768(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763424);
}



/* Entry: 107053778; end: 1070537b7; -[SCMessageChatViewModelProps setQuotedRenderableViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763424;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070537b8; end: 1070537c7; -[SCMessageChatViewModelProps ctaAccessoryContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070537b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763428);
}



/* Entry: 1070537c8; end: 107053807; -[SCMessageChatViewModelProps setCtaAccessoryContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070537c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763428;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053808; end: 107053817; -[SCMessageChatViewModelProps belowMessageAccessoryContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276342c);
}



/* Entry: 107053818; end: 107053857; -[SCMessageChatViewModelProps setBelowMessageAccessoryContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276342c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107053858; end: 107053867; -[SCMessageChatViewModelProps reactableViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763430);
}



/* Entry: 107053868; end: 107053873; -[SCMessageChatViewModelProps setReactableViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107053874; end: 107053883; -[SCMessageChatViewModelProps blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107053874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763434);
}



/* Entry: 107053884; end: 1070538c3; -[SCMessageChatViewModelProps setBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107053884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763434;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070538c4; end: 1070538d3; -[SCMessageChatViewModelProps senderHeaderViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070538c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763438);
}



/* Entry: 1070538d4; end: 1070538df; -[SCMessageChatViewModelProps setSenderHeaderViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070538d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1070538e0; end: 107053a9f; -[SCMessageChatViewModelProps .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070538e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763438,0);
  _objc_storeStrong(param_1 + _DAT_112763434,0);
  _objc_storeStrong(param_1 + _DAT_112763430,0);
  _objc_storeStrong(param_1 + _DAT_11276342c,0);
  _objc_storeStrong(param_1 + _DAT_112763428,0);
  _objc_storeStrong(param_1 + _DAT_112763424,0);
  _objc_storeStrong(param_1 + _DAT_112763420,0);
  _objc_storeStrong(param_1 + _DAT_11276341c,0);
  _objc_storeStrong(param_1 + _DAT_112763418,0);
  _objc_storeStrong(param_1 + _DAT_112763414,0);
  _objc_storeStrong(param_1 + _DAT_112763410,0);
  _objc_storeStrong(param_1 + _DAT_11276340c,0);
  _objc_storeStrong(param_1 + _DAT_112763408,0);
  _objc_storeStrong(param_1 + _DAT_112763404,0);
  _objc_storeStrong(param_1 + _DAT_112763400,0);
  _objc_storeStrong(param_1 + _DAT_1127633fc,0);
  _objc_storeStrong(param_1 + _DAT_1127633f8,0);
  _objc_storeStrong(param_1 + _DAT_1127633f4,0);
  _objc_storeStrong(param_1 + _DAT_1127633f0,0);
  _objc_storeStrong(param_1 + _DAT_1127633ec,0);
  _objc_storeStrong(param_1 + _DAT_1127633e8,0);
  _objc_storeStrong(param_1 + _DAT_1127633e4,0);
  _objc_storeStrong(param_1 + _DAT_1127633e0,0);
  _objc_storeStrong(param_1 + _DAT_1127633dc,0);
  _objc_storeStrong(param_1 + _DAT_1127633d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127633d4,0);
  return;
}



/* Entry: 107053aa0; end: 107053aa7; -[SCMessageChatViewModel payloadVerticalMargin] */

undefined8 FUN_107053aa0(void)

{
  return 0;
}



/* Entry: 107053aa8; end: 107053adf; -[SCMessageChatViewModel payloadHeight] */

double FUN_107053aa8(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c0f6480();
  dVar1 = param_1;
  func_0x00010c0f6660(param_2);
  return param_1 + dVar1;
}



/* Entry: 107053ae0; end: 107053b33; -[SCMessageChatViewModel payloadBodyHeight] */

undefined8 FUN_107053ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 107053b34; end: 107053b3b; -[SCMessageChatViewModel payloadLabelHeight] */

undefined8 FUN_107053b34(void)

{
  return 0;
}



/* Entry: 107053b3c; end: 107053b8f; -[SCMessageChatViewModel payloadAccessoryHeight] */

undefined8 FUN_107053b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x00010bf19480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ec40(param_3);
  func_0x00010bf4d660(uVar1);
  _objc_release(uVar1);
  return param_2;
}



/* Entry: 107053b90; end: 107053bdf; -[SCMessageChatViewModel bodyWidth] */

undefined8 FUN_107053b90(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107053be0; end: 107053c13; -[SCMessageChatViewModel payloadWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107053be0(double param_1,long param_2)

{
  func_0x00010bf1ec40();
  return param_1 + *(double *)(param_2 + _DAT_11276343c) * -2.0;
}



/* Entry: 107053c14; end: 107053c6f; -[SCMessageChatViewModel payloadContentWidth] */

double FUN_107053c14(double param_1,double param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  func_0x00010c0f6780();
  func_0x00010c0f6540(param_5);
  param_1 = param_1 - param_2;
  func_0x00010c0f6540(param_5);
  param_1 = param_1 - param_4;
  func_0x00010c0f6740(param_5);
  func_0x00010c0f6740(param_5);
  return param_1 + param_2 + param_4;
}



/* Entry: 107053c70; end: 107053cc3; -[SCMessageChatViewModel bodyContentWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107053c70(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_5);
  _objc_exception_throw();
  func_0x00010c0f65e0();
  dVar4 = param_1;
  func_0x00010c0f6700(puVar1);
  dVar5 = 2.0;
  dVar6 = dVar4 * 2.0;
  func_0x00010bfb3820(puVar1);
  dVar6 = param_1 + dVar6 + dVar4;
  func_0x00010bf652a0(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010bf65340(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010bf651e0(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010bf65260(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010bf65220(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010c15dc40(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010c15dce0(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010c15dc20(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010c0f6540(puVar1);
  dVar6 = dVar6 + dVar4;
  func_0x00010c0f6540(puVar1);
  func_0x00010c0f6740(puVar1);
  dVar6 = dVar6 + param_3 + dVar4;
  puVar2 = puVar1;
  func_0x00010c11edc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c11ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f65a0(puVar1);
  func_0x00010bf4d660(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c0f6440(puVar1);
  dVar4 = dVar6 + dVar5 + dVar4;
  dVar6 = dVar4 + *(double *)(puVar1 + _DAT_112763440) + 4.0;
  if (*(double *)(puVar1 + _DAT_112763440) <= 0.0) {
    dVar6 = dVar4;
  }
  puVar2 = puVar1;
  func_0x00010c234240();
  dVar4 = dVar6;
  if ((int)puVar2 != 0) {
    func_0x00010c234460();
    dVar4 = dVar6 + 15.0;
    if ((int)puVar1 == 0) {
      dVar4 = dVar6;
    }
  }
  return dVar4;
}



/* Entry: 107053cc4; end: 107053e33; -[SCMessageChatViewModel bodyHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107053cc4(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010c0f65e0();
  dVar3 = param_1;
  func_0x00010c0f6700(param_4);
  dVar4 = 2.0;
  dVar5 = dVar3 * 2.0;
  func_0x00010bfb3820(param_4);
  dVar5 = param_1 + dVar5 + dVar3;
  func_0x00010bf652a0(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010bf65340(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010bf651e0(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010bf65260(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010bf65220(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010c15dc40(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010c15dce0(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010c15dc20(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010c0f6540(param_4);
  dVar5 = dVar5 + dVar3;
  func_0x00010c0f6540(param_4);
  func_0x00010c0f6740(param_4);
  dVar5 = dVar5 + param_3 + dVar3;
  lVar1 = param_4;
  func_0x00010c11edc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f65a0(param_4);
  func_0x00010bf4d660(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c0f6440(param_4);
  dVar3 = dVar5 + dVar4 + dVar3;
  dVar5 = dVar3 + *(double *)(param_4 + _DAT_112763440) + 4.0;
  if (*(double *)(param_4 + _DAT_112763440) <= 0.0) {
    dVar5 = dVar3;
  }
  lVar1 = param_4;
  func_0x00010c234240();
  dVar3 = dVar5;
  if ((int)lVar1 != 0) {
    func_0x00010c234460();
    dVar3 = dVar5 + 15.0;
    if ((int)param_4 == 0) {
      dVar3 = dVar5;
    }
  }
  return dVar3;
}



/* Entry: 107053e34; end: 107054593; -[SCMessageChatViewModel initWithMessage:props:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107053e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8648;
  puVar1 = &uStack_50;
  uStack_50 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithProps__1125ec800,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112763444;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(long *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010c27dd80();
    *(long *)((long)puVar1 + (long)_DAT_112763448) = lVar5;
    lVar5 = param_4;
    func_0x00010bf9fe80();
    *(char *)((long)puVar1 + (long)_DAT_11276344c) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010c15dfc0();
    *(char *)((long)puVar1 + (long)_DAT_112763450) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763454);
    *(long *)((long)puVar1 + (long)_DAT_112763454) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763458);
    *(long *)((long)puVar1 + (long)_DAT_112763458) = lVar3;
    _objc_release(uVar2);
    _objc_release(lVar5);
    lVar5 = param_5;
    func_0x00010bfd6220();
    *(char *)((long)puVar1 + (long)_DAT_11276345c) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010bfdbdc0();
    *(char *)((long)puVar1 + (long)_DAT_112763460) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010bfdbde0();
    *(char *)((long)puVar1 + (long)_DAT_112763464) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010bfdd620();
    *(char *)((long)puVar1 + (long)_DAT_112763468) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010bfd7340();
    *(char *)((long)puVar1 + (long)_DAT_11276346c) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010c07f920();
    *(char *)((long)puVar1 + (long)_DAT_112763470) = (char)lVar5;
    func_0x00010c069920(param_5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763474) = param_1;
    lVar5 = param_5;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763478);
    *(long *)((long)puVar1 + (long)_DAT_112763478) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c0cbd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276347c);
    *(long *)((long)puVar1 + (long)_DAT_11276347c) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763480);
    *(long *)((long)puVar1 + (long)_DAT_112763480) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c0c4e40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763484);
    *(long *)((long)puVar1 + (long)_DAT_112763484) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c244b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763488);
    *(long *)((long)puVar1 + (long)_DAT_112763488) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c15db40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276348c);
    *(long *)((long)puVar1 + (long)_DAT_11276348c) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c15dea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763490);
    *(long *)((long)puVar1 + (long)_DAT_112763490) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763494);
    *(long *)((long)puVar1 + (long)_DAT_112763494) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763498);
    *(long *)((long)puVar1 + (long)_DAT_112763498) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276349c);
    *(long *)((long)puVar1 + (long)_DAT_11276349c) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)((long)puVar1 + (long)_DAT_1127634a0) = lVar5 != 0;
    _objc_release();
    lVar5 = param_5;
    func_0x00010c076ee0();
    *(char *)((long)puVar1 + (long)_DAT_1127634a4) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634a8);
    *(long *)((long)puVar1 + (long)_DAT_1127634a8) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c15dba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634ac);
    *(long *)((long)puVar1 + (long)_DAT_1127634ac) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c122b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634b0);
    *(long *)((long)puVar1 + (long)_DAT_1127634b0) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c244a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634b4);
    *(long *)((long)puVar1 + (long)_DAT_1127634b4) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c2628e0();
    *(char *)((long)puVar1 + (long)_DAT_1127634b8) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010bf50920();
    *(long *)((long)puVar1 + (long)_DAT_1127634bc) = lVar5;
    lVar5 = param_5;
    func_0x00010bf194c0();
    *(char *)((long)puVar1 + (long)_DAT_1127634c0) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010c082100();
    *(char *)((long)puVar1 + (long)_DAT_1127634c4) = (char)lVar5;
    func_0x00010c0f6600(param_5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276343c) = param_1;
    lVar5 = param_5;
    func_0x00010c0f6760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634c8);
    *(long *)((long)puVar1 + (long)_DAT_1127634c8) = lVar5;
    _objc_release(uVar2);
    func_0x00010c0730e0();
    func_0x00010c1b1100(puVar1);
    lVar5 = param_5;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634cc);
    *(long *)((long)puVar1 + (long)_DAT_1127634cc) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010c0c72c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634d0);
    *(long *)((long)puVar1 + (long)_DAT_1127634d0) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010c0c6c20();
    *(long *)((long)puVar1 + (long)_DAT_1127634d4) = lVar5;
    lVar5 = param_5;
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634d8);
    *(long *)((long)puVar1 + (long)_DAT_1127634d8) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bf2c500();
    *(char *)((long)puVar1 + (long)_DAT_1127634dc) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010c131d80();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)((long)puVar1 + (long)_DAT_1127634e0) = lVar5 != 0;
    _objc_release();
    lVar3 = param_4;
    func_0x00010c121240();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0xc2000000;
    _objc_retain(puVar1);
    lVar5 = lVar3;
    func_0x00010c14ccc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634e4);
    *(long *)((long)puVar1 + (long)_DAT_1127634e4) = lVar5;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar5 = param_5;
    func_0x00010c11edc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634e8);
    *(long *)((long)puVar1 + (long)_DAT_1127634e8) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010bf5d020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634ec);
    *(long *)((long)puVar1 + (long)_DAT_1127634ec) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010bf19480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634f0);
    *(long *)((long)puVar1 + (long)_DAT_1127634f0) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c1050e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634f4);
    *(long *)((long)puVar1 + (long)_DAT_1127634f4) = lVar5;
    _objc_release(uVar2);
    func_0x00010c1050c0(param_5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763440) = uVar6;
    lVar5 = param_4;
    func_0x00010bf2c580();
    *(char *)((long)puVar1 + (long)_DAT_1127634f8) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010bf374c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127634fc);
    *(long *)((long)puVar1 + (long)_DAT_1127634fc) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bf37480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763500);
    *(long *)((long)puVar1 + (long)_DAT_112763500) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bf37440();
    *(char *)((long)puVar1 + (long)_DAT_112763504) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010c07d080();
    *(char *)((long)puVar1 + (long)_DAT_112763508) = (char)lVar5;
    lVar5 = param_4;
    func_0x00010c07d0e0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    *(char *)((long)puVar1 + (long)_DAT_11276350c) = (char)lVar5;
    func_0x00010c0ecae0();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763510);
    *(undefined **)((long)puVar1 + (long)_DAT_112763510) = puVar4;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c1209c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763514);
    *(long *)((long)puVar1 + (long)_DAT_112763514) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763518);
    *(long *)((long)puVar1 + (long)_DAT_112763518) = lVar5;
    _objc_release(uVar2);
    lVar5 = param_5;
    func_0x00010c15dd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276351c);
    *(long *)((long)puVar1 + (long)_DAT_11276351c) = lVar5;
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107054594; end: 1070545bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107054594(long param_1,undefined8 param_2)

{
  func_0x00010c071ae0(param_2,param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112763458));
  return (uint)param_2 ^ 1;
}



/* Entry: 1070545c0; end: 1070545eb; -[SCMessageChatViewModel canChatReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1070545c0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + _DAT_1127634a4) & 1) != 0) {
    return false;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_112763444);
  _objc_retain();
  _objc_retain(0);
  uVar3 = uVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c07c540();
  _objc_release(uVar3);
  if (((int)uVar4 == 0) || (uVar3 = uVar2, func_0x00010c15dfc0(), (uVar3 & 1) != 0)) {
    bVar1 = false;
    goto LAB_1070703ac;
  }
  uVar4 = 0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf2ce80();
  _objc_release(uVar4);
  if ((uVar3 & 1) != 0) {
    bVar1 = true;
    goto LAB_1070703ac;
  }
  uVar3 = uVar2;
  func_0x00010c27dd80();
  uVar4 = uVar2;
  func_0x00010c0cb340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0cba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar3 < 0x27) {
    if ((1L << (uVar3 & 0x3f) & 0x4000010d86U) == 0) {
      if (uVar3 != 0x24) goto LAB_1070704b8;
      uVar3 = uVar5;
      func_0x00010c22ac40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c25a420();
      _objc_release(uVar3);
      bVar1 = uVar6 == 1;
    }
    else {
      bVar1 = true;
    }
  }
  else {
LAB_1070704b8:
    bVar1 = false;
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_1070703ac:
  _objc_release(0);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1070545ec; end: 107054613; -[SCMessageChatViewModel canSnapReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070545ec(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_1127634a4) & 1) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112763444);
                    /* WARNING: Could not recover jumptable at 0x00010bf2d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_canSnapReply_1125a8fc8);
  return uVar1;
}



/* Entry: 107054614; end: 107054617; -[SCMessageChatViewModel needsExtraSpacingOnTop] */

void FUN_107054614(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c234250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldShowSenderHeader_11266aab8);
  return;
}



/* Entry: 107054618; end: 107054627; -[SCMessageChatViewModel shouldShowDateHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107054618(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276345c);
}


