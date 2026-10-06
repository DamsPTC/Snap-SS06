/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b638610; end: 10b63864f; -[SCNMessagingFeedEntryDisplayInfo initWithDisplayTimestamp:lastUpdateActorUserIds:lastSenderUserIds:feedItem:viewed:isFriendLinkPending:isLocked:] */

void FUN_10b638610(void)

{
  func_0x00010c00d6a0();
  return;
}



/* Entry: 10b638650; end: 10b638657; -[SCNMessagingFeedEntryDisplayInfo setDisplayTimestamp:] */

void FUN_10b638650(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b638658; end: 10b63865f; -[SCNMessagingFeedEntryDisplayInfo lastUpdateActorUserIds] */

undefined8 FUN_10b638658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b638660; end: 10b638667; -[SCNMessagingFeedEntryDisplayInfo setLastUpdateActorUserIds:] */

void FUN_10b638660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b638668; end: 10b63866f; -[SCNMessagingFeedEntryDisplayInfo lastSenderUserIds] */

undefined8 FUN_10b638668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b638670; end: 10b638677; -[SCNMessagingFeedEntryDisplayInfo setLastSenderUserIds:] */

void FUN_10b638670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b638678; end: 10b638697; -[SCNMessagingFeedEntryDisplayInfo setFeedItemCreatorId:] */

void FUN_10b638678(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638774();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638698; end: 10b63869f; -[SCNMessagingFeedEntryDisplayInfo feedItemMutatedMessageSenderId] */

undefined8 FUN_10b638698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6386a0; end: 10b6386bf; -[SCNMessagingFeedEntryDisplayInfo setFeedItemMutatedMessageSenderId:] */

void FUN_10b6386a0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638774();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6386c0; end: 10b6386df; -[SCNMessagingFeedEntryDisplayInfo setFeedItem:] */

void FUN_10b6386c0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638774();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6386e0; end: 10b6386e7; -[SCNMessagingFeedEntryDisplayInfo setViewed:] */

void FUN_10b6386e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6386e8; end: 10b6386ef; -[SCNMessagingFeedEntryDisplayInfo isFriendLinkPending] */

undefined1 FUN_10b6386e8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6386f0; end: 10b6386f7; -[SCNMessagingFeedEntryDisplayInfo setIsFriendLinkPending:] */

void FUN_10b6386f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b6386f8; end: 10b6386ff; -[SCNMessagingFeedEntryDisplayInfo setIsLocked:] */

void FUN_10b6386f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b638700; end: 10b638707; -[SCNMessagingFeedEntryDisplayInfo activityData] */

undefined8 FUN_10b638700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b638708; end: 10b638727; -[SCNMessagingFeedEntryDisplayInfo setActivityData:] */

void FUN_10b638708(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638774();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638728; end: 10b638773; -[SCNMessagingFeedEntryDisplayInfo .cxx_destruct] */

void FUN_10b638728(long param_1)

{
  func_0x00010b638784(param_1 + 0x40);
  func_0x00010b638784(param_1 + 0x38);
  func_0x00010b638784(param_1 + 0x30);
  func_0x00010b638784(param_1 + 0x28);
  func_0x00010b638784(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b638774; end: 10b638793;  */

void FUN_10b638774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b638794; end: 10b638807; -[SCNMessagingFeedEntryIdentifier initWithConversationId:] */

undefined1 * FUN_10b638794(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b6389ac();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x00010b6389bc();
  return puVar1;
}



/* Entry: 10b638808; end: 10b6388e7; -[SCNMessagingFeedEntryIdentifier isEqual:] */

undefined8 FUN_10b638808(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b6389ac();
  _objc_opt_class(PTR_PTR_1126daa10);
  uVar1 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain();
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x20;
    func_0x00010c071ae0(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    func_0x00010b6389bc();
  }
  func_0x00010b6389bc();
  return uVar2;
}



/* Entry: 10b6388e8; end: 10b638973; -[SCNMessagingFeedEntryIdentifier hash] */

ulong FUN_10b6388e8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  func_0x00010b6389bc();
  return uVar2 ^ uVar1;
}



/* Entry: 10b638974; end: 10b63897b; -[SCNMessagingFeedEntryIdentifier conversationId] */

undefined8 FUN_10b638974(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63897c; end: 10b63899f; -[SCNMessagingFeedEntryIdentifier setConversationId:] */

void FUN_10b63897c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6389ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6389a0; end: 10b6389c3; -[SCNMessagingFeedEntryIdentifier .cxx_destruct] */

void FUN_10b6389a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6389c4; end: 10b6389d7; -[SCNMessagingFeedItem init] */

void FUN_10b6389c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c046e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSnap_chat_call_conversat_1125ef588,0,0,0,0);
  return;
}



/* Entry: 10b6389d8; end: 10b6389f7; -[SCNMessagingFeedItem setSnap:] */

void FUN_10b6389d8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638a94();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6389f8; end: 10b638a17; -[SCNMessagingFeedItem setChat:] */

void FUN_10b6389f8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638a94();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638a18; end: 10b638a37; -[SCNMessagingFeedItem setCall:] */

void FUN_10b638a18(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638a94();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638a38; end: 10b638a57; -[SCNMessagingFeedItem setConversation:] */

void FUN_10b638a38(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638a94();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638a58; end: 10b638a93; -[SCNMessagingFeedItem .cxx_destruct] */

void FUN_10b638a58(long param_1)

{
  func_0x00010b638aac(param_1 + 0x20);
  func_0x00010b638aac(param_1 + 0x18);
  func_0x00010b638aac(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b638a94; end: 10b638ab3;  */

void FUN_10b638a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b638ab4; end: 10b638abb; -[SCNMessagingFeedPaginationUpdate setTimestamp:] */

void FUN_10b638ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b638abc; end: 10b638ac3; -[SCNMessagingFeedPaginationUpdate hasMore] */

undefined1 FUN_10b638abc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b638ac4; end: 10b638acb; -[SCNMessagingFeedPaginationUpdate setHasMore:] */

void FUN_10b638ac4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b638acc; end: 10b638b93; -[SCNMessagingFeedRequestErrorMetadata initWithTriggerType:trackingId:analyticsScenario:] */

undefined1 *
FUN_10b638acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706f58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b638b94; end: 10b638b9f; -[SCNMessagingFeedRequestErrorMetadata initWithTriggerType:] */

void FUN_10b638b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c055750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTriggerType_trackingId_a_1125f2fe0,param_3,0,0);
  return;
}



/* Entry: 10b638ba0; end: 10b638ba7; -[SCNMessagingFeedRequestErrorMetadata triggerType] */

undefined8 FUN_10b638ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b638ba8; end: 10b638baf; -[SCNMessagingFeedRequestErrorMetadata setTriggerType:] */

void FUN_10b638ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b638bb0; end: 10b638bb7; -[SCNMessagingFeedRequestErrorMetadata trackingId] */

undefined8 FUN_10b638bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b638bb8; end: 10b638bdb; -[SCNMessagingFeedRequestErrorMetadata setTrackingId:] */

void FUN_10b638bb8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638c38();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638bdc; end: 10b638be3; -[SCNMessagingFeedRequestErrorMetadata analyticsScenario] */

undefined8 FUN_10b638bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b638be4; end: 10b638c07; -[SCNMessagingFeedRequestErrorMetadata setAnalyticsScenario:] */

void FUN_10b638be4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638c38();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638c08; end: 10b638c37; -[SCNMessagingFeedRequestErrorMetadata .cxx_destruct] */

void FUN_10b638c08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b638c38; end: 10b638c47;  */

void FUN_10b638c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b638c48; end: 10b638c5f; -[SCNMessagingFeedUpdateMetadata initWithUpdateOperationIds:] */

void FUN_10b638c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStreamingUpdateEnd_feedU_1125f1400,0,0,param_3,0,0);
  return;
}



/* Entry: 10b638c60; end: 10b638c7f; -[SCNMessagingFeedUpdateMetadata setStreamingUpdateEnd:] */

void FUN_10b638c60(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638ce8();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638c80; end: 10b638c9f; -[SCNMessagingFeedUpdateMetadata setFeedUpdateTriggerType:] */

void FUN_10b638c80(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638ce8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638ca0; end: 10b638ca7; -[SCNMessagingFeedUpdateMetadata setUpdateOperationIds:] */

void FUN_10b638ca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b638ca8; end: 10b638cc7; -[SCNMessagingFeedUpdateMetadata setPaginationUpdate:] */

void FUN_10b638ca8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638ce8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638cc8; end: 10b638ce7; -[SCNMessagingFeedUpdateMetadata setFeedUpdateTypeMetadata:] */

void FUN_10b638cc8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638ce8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638ce8; end: 10b638cff;  */

void FUN_10b638ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b638d00; end: 10b638d0b; -[SCNMessagingFeedUpdateTypeMetadata init] */

void FUN_10b638d00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSyncMetadata_prefetchMet_1125f1958,0,0);
  return;
}



/* Entry: 10b638d0c; end: 10b638d2f; -[SCNMessagingFeedUpdateTypeMetadata setSyncMetadata:] */

void FUN_10b638d0c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638d54();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638d30; end: 10b638d53; -[SCNMessagingFeedUpdateTypeMetadata setPrefetchMetadata:] */

void FUN_10b638d30(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638d54();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638d54; end: 10b638d63;  */

void FUN_10b638d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b638d64; end: 10b638ec7; -[SCNMessagingFideliusInversePhiResult initWithIsSuccess:analyticsMessageId:inversePhiLatency:isDataReady:isRetried:failureReason:numDevicesWrapped:recipientKeyVersion:] */

undefined1 *
FUN_10b638d64(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112706f70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b638ec8; end: 10b638ef3; -[SCNMessagingFideliusInversePhiResult initWithIsSuccess:analyticsMessageId:inversePhiLatency:numDevicesWrapped:recipientKeyVersion:] */

void FUN_10b638ec8(void)

{
  func_0x00010c01f8c0();
  return;
}



/* Entry: 10b638ef4; end: 10b638efb; -[SCNMessagingFideliusInversePhiResult isSuccess] */

undefined1 FUN_10b638ef4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b638efc; end: 10b638f03; -[SCNMessagingFideliusInversePhiResult setIsSuccess:] */

void FUN_10b638efc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b638f04; end: 10b638f0b; -[SCNMessagingFideliusInversePhiResult analyticsMessageId] */

undefined8 FUN_10b638f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b638f0c; end: 10b638f13; -[SCNMessagingFideliusInversePhiResult setAnalyticsMessageId:] */

void FUN_10b638f0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b638f14; end: 10b638f1b; -[SCNMessagingFideliusInversePhiResult inversePhiLatency] */

undefined8 FUN_10b638f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b638f1c; end: 10b638f23; -[SCNMessagingFideliusInversePhiResult setInversePhiLatency:] */

void FUN_10b638f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b638f24; end: 10b638f2b; -[SCNMessagingFideliusInversePhiResult isDataReady] */

undefined8 FUN_10b638f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b638f2c; end: 10b638f4f; -[SCNMessagingFideliusInversePhiResult setIsDataReady:] */

void FUN_10b638f2c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638fe8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638f50; end: 10b638f57; -[SCNMessagingFideliusInversePhiResult isRetried] */

undefined8 FUN_10b638f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b638f58; end: 10b638f7b; -[SCNMessagingFideliusInversePhiResult setIsRetried:] */

void FUN_10b638f58(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b638fe8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b638f7c; end: 10b638f83; -[SCNMessagingFideliusInversePhiResult failureReason] */

undefined8 FUN_10b638f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b638f84; end: 10b638f8b; -[SCNMessagingFideliusInversePhiResult setFailureReason:] */

void FUN_10b638f84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b638f8c; end: 10b638f93; -[SCNMessagingFideliusInversePhiResult numDevicesWrapped] */

undefined8 FUN_10b638f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b638f94; end: 10b638f9b; -[SCNMessagingFideliusInversePhiResult setNumDevicesWrapped:] */

void FUN_10b638f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b638f9c; end: 10b638fa3; -[SCNMessagingFideliusInversePhiResult recipientKeyVersion] */

undefined8 FUN_10b638f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b638fa4; end: 10b638fab; -[SCNMessagingFideliusInversePhiResult setRecipientKeyVersion:] */

void FUN_10b638fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b638fac; end: 10b638fe7; -[SCNMessagingFideliusInversePhiResult .cxx_destruct] */

void FUN_10b638fac(long param_1)

{
  func_0x00010b638ff8(param_1 + 0x30);
  func_0x00010b638ff8(param_1 + 0x28);
  func_0x00010b638ff8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b638fe8; end: 10b638fff;  */

void FUN_10b638fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b639000; end: 10b63912f; -[SCNMessagingFideliusPhiResult initWithIsSuccess:analyticsMessageId:phiLatency:numDevicesWrapped:isDataReady:failureReason:] */

undefined1 *
FUN_10b639000(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112706f78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b639130; end: 10b63913b; -[SCNMessagingFideliusPhiResult initWithIsSuccess:analyticsMessageId:phiLatency:numDevicesWrapped:] */

void FUN_10b639130(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithIsSuccess_analyticsMessa_1125e5820);
  return;
}



/* Entry: 10b63913c; end: 10b639143; -[SCNMessagingFideliusPhiResult isSuccess] */

undefined1 FUN_10b63913c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b639144; end: 10b63914b; -[SCNMessagingFideliusPhiResult setIsSuccess:] */

void FUN_10b639144(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63914c; end: 10b639153; -[SCNMessagingFideliusPhiResult analyticsMessageId] */

undefined8 FUN_10b63914c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b639154; end: 10b63915b; -[SCNMessagingFideliusPhiResult setAnalyticsMessageId:] */

void FUN_10b639154(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63915c; end: 10b639163; -[SCNMessagingFideliusPhiResult phiLatency] */

undefined8 FUN_10b63915c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b639164; end: 10b63916b; -[SCNMessagingFideliusPhiResult setPhiLatency:] */

void FUN_10b639164(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63916c; end: 10b639173; -[SCNMessagingFideliusPhiResult numDevicesWrapped] */

undefined8 FUN_10b63916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b639174; end: 10b63917b; -[SCNMessagingFideliusPhiResult setNumDevicesWrapped:] */

void FUN_10b639174(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b63917c; end: 10b639183; -[SCNMessagingFideliusPhiResult isDataReady] */

undefined8 FUN_10b63917c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b639184; end: 10b6391b3; -[SCNMessagingFideliusPhiResult setIsDataReady:] */

void FUN_10b639184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6391b4; end: 10b6391bb; -[SCNMessagingFideliusPhiResult failureReason] */

undefined8 FUN_10b6391b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6391bc; end: 10b6391c3; -[SCNMessagingFideliusPhiResult setFailureReason:] */

void FUN_10b6391bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6391c4; end: 10b6391ff; -[SCNMessagingFideliusPhiResult .cxx_destruct] */

void FUN_10b6391c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b639200; end: 10b6392bf; -[SCNMessagingForwardMessageData initWithMessage:platformAnalytics:] */

undefined1 *
FUN_10b639200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706f80;
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



/* Entry: 10b6392c0; end: 10b6392c7; -[SCNMessagingForwardMessageData message] */

undefined8 FUN_10b6392c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6392c8; end: 10b6392eb; -[SCNMessagingForwardMessageData setMessage:] */

void FUN_10b6392c8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639348();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6392ec; end: 10b6392f3; -[SCNMessagingForwardMessageData platformAnalytics] */

undefined8 FUN_10b6392ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6392f4; end: 10b639317; -[SCNMessagingForwardMessageData setPlatformAnalytics:] */

void FUN_10b6392f4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639348();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639318; end: 10b639347; -[SCNMessagingForwardMessageData .cxx_destruct] */

void FUN_10b639318(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b639348; end: 10b639357;  */

void FUN_10b639348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b639358; end: 10b6393a7; -[SCNMessagingFriendLinkData initWithFriendLink:isContact:] */

void FUN_10b639358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706f88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b6393a8; end: 10b6393af; -[SCNMessagingFriendLinkData friendLink] */

undefined8 FUN_10b6393a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6393b0; end: 10b6393b7; -[SCNMessagingFriendLinkData setFriendLink:] */

void FUN_10b6393b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}


