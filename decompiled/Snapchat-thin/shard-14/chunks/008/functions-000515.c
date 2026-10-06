/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b63a314; end: 10b63a31b; -[SCNMessagingJoinGroupConversationMetadata title] */

undefined8 FUN_10b63a314(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63a31c; end: 10b63a323; -[SCNMessagingJoinGroupConversationMetadata setTitle:] */

void FUN_10b63a31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a324; end: 10b63a32b; -[SCNMessagingJoinGroupConversationMetadata participants] */

undefined8 FUN_10b63a324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63a32c; end: 10b63a333; -[SCNMessagingJoinGroupConversationMetadata setParticipants:] */

void FUN_10b63a32c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a334; end: 10b63a33b; -[SCNMessagingJoinGroupConversationMetadata createdTimestampMs] */

undefined8 FUN_10b63a334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63a33c; end: 10b63a35f; -[SCNMessagingJoinGroupConversationMetadata setCreatedTimestampMs:] */

void FUN_10b63a33c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63a3c8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63a360; end: 10b63a367; -[SCNMessagingJoinGroupConversationMetadata communityId] */

undefined8 FUN_10b63a360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63a368; end: 10b63a38b; -[SCNMessagingJoinGroupConversationMetadata setCommunityId:] */

void FUN_10b63a368(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63a3c8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63a38c; end: 10b63a3c7; -[SCNMessagingJoinGroupConversationMetadata .cxx_destruct] */

void FUN_10b63a38c(long param_1)

{
  func_0x00010b63a3d8(param_1 + 0x20);
  func_0x00010b63a3d8(param_1 + 0x18);
  func_0x00010b63a3d8(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63a3c8; end: 10b63a3df;  */

void FUN_10b63a3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63a3e0; end: 10b63a45b; -[SCNMessagingKickedParticipant initWithParticipantId:] */

undefined1 * FUN_10b63a3e0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b63a494();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10b63a45c; end: 10b63a463; -[SCNMessagingKickedParticipant participantId] */

undefined8 FUN_10b63a45c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63a464; end: 10b63a487; -[SCNMessagingKickedParticipant setParticipantId:] */

void FUN_10b63a464(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b63a494();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63a488; end: 10b63a4a3; -[SCNMessagingKickedParticipant .cxx_destruct] */

void FUN_10b63a488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63a4a4; end: 10b63a547; -[SCNMessagingLocalMediaReference initWithId:] */

undefined1 * FUN_10b63a4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706ff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63a548; end: 10b63a54f; -[SCNMessagingLocalMediaReference id] */

undefined8 FUN_10b63a548(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63a550; end: 10b63a557; -[SCNMessagingLocalMediaReference setId:] */

void FUN_10b63a550(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a558; end: 10b63a563; -[SCNMessagingLocalMediaReference .cxx_destruct] */

void FUN_10b63a558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63a564; end: 10b63a8b3; -[SCNMessagingLocalMessageContent initWithContent:contentType:platformAnalytics:localMediaReferences:savePolicy:incidentalAttachments:allowsTranscription:quotedMessageId:feedDisplayInfo:botMention:messageTypeMetadata:remoteMediaReferences:bundleMetadata:externalContentMetadata:messageBehaviorHint:snapModeInfo:localPlatformData:] */

undefined8 *
FUN_10b63a564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010b63ab58();
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_112706ff8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00010b63ab50(uVar3);
    puVar1[3] = param_4;
    func_0x00010b63ab58();
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x00010b63ab50(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x00010b63ab50(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x00010b63ab50(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_13;
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x00010b63ab50(uVar3);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    func_0x00010b63ab58();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x00010b63ab50(uVar3);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b63a8b4; end: 10b63a8f3; -[SCNMessagingLocalMessageContent initWithContent:contentType:platformAnalytics:localMediaReferences:savePolicy:incidentalAttachments:allowsTranscription:botMention:] */

void FUN_10b63a8b4(void)

{
  func_0x00010c002ba0();
  return;
}



/* Entry: 10b63a8f4; end: 10b63a8fb; -[SCNMessagingLocalMessageContent content] */

undefined8 FUN_10b63a8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63a8fc; end: 10b63a903; -[SCNMessagingLocalMessageContent setContent:] */

void FUN_10b63a8fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a904; end: 10b63a90b; -[SCNMessagingLocalMessageContent contentType] */

undefined8 FUN_10b63a904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63a90c; end: 10b63a913; -[SCNMessagingLocalMessageContent setContentType:] */

void FUN_10b63a90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63a914; end: 10b63a91b; -[SCNMessagingLocalMessageContent platformAnalytics] */

undefined8 FUN_10b63a914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63a91c; end: 10b63a93b; -[SCNMessagingLocalMessageContent setPlatformAnalytics:] */

void FUN_10b63a91c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63a93c; end: 10b63a943; -[SCNMessagingLocalMessageContent localMediaReferences] */

undefined8 FUN_10b63a93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63a944; end: 10b63a94b; -[SCNMessagingLocalMessageContent setLocalMediaReferences:] */

void FUN_10b63a944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a94c; end: 10b63a953; -[SCNMessagingLocalMessageContent savePolicy] */

undefined8 FUN_10b63a94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63a954; end: 10b63a95b; -[SCNMessagingLocalMessageContent setSavePolicy:] */

void FUN_10b63a954(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b63a95c; end: 10b63a963; -[SCNMessagingLocalMessageContent incidentalAttachments] */

undefined8 FUN_10b63a95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b63a964; end: 10b63a96b; -[SCNMessagingLocalMessageContent setIncidentalAttachments:] */

void FUN_10b63a964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a96c; end: 10b63a973; -[SCNMessagingLocalMessageContent allowsTranscription] */

undefined1 FUN_10b63a96c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63a974; end: 10b63a97b; -[SCNMessagingLocalMessageContent setAllowsTranscription:] */

void FUN_10b63a974(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63a97c; end: 10b63a983; -[SCNMessagingLocalMessageContent quotedMessageId] */

undefined8 FUN_10b63a97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b63a984; end: 10b63a9a3; -[SCNMessagingLocalMessageContent setQuotedMessageId:] */

void FUN_10b63a984(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63a9a4; end: 10b63a9ab; -[SCNMessagingLocalMessageContent feedDisplayInfo] */

undefined8 FUN_10b63a9a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b63a9ac; end: 10b63a9b3; -[SCNMessagingLocalMessageContent setFeedDisplayInfo:] */

void FUN_10b63a9ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a9b4; end: 10b63a9bb; -[SCNMessagingLocalMessageContent botMention] */

undefined1 FUN_10b63a9b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b63a9bc; end: 10b63a9c3; -[SCNMessagingLocalMessageContent setBotMention:] */

void FUN_10b63a9bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b63a9c4; end: 10b63a9cb; -[SCNMessagingLocalMessageContent messageTypeMetadata] */

undefined8 FUN_10b63a9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b63a9cc; end: 10b63a9eb; -[SCNMessagingLocalMessageContent setMessageTypeMetadata:] */

void FUN_10b63a9cc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63a9ec; end: 10b63a9f3; -[SCNMessagingLocalMessageContent remoteMediaReferences] */

undefined8 FUN_10b63a9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b63a9f4; end: 10b63a9fb; -[SCNMessagingLocalMessageContent setRemoteMediaReferences:] */

void FUN_10b63a9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a9fc; end: 10b63aa03; -[SCNMessagingLocalMessageContent bundleMetadata] */

undefined8 FUN_10b63a9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b63aa04; end: 10b63aa23; -[SCNMessagingLocalMessageContent setBundleMetadata:] */

void FUN_10b63aa04(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63aa24; end: 10b63aa2b; -[SCNMessagingLocalMessageContent externalContentMetadata] */

undefined8 FUN_10b63aa24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b63aa2c; end: 10b63aa4b; -[SCNMessagingLocalMessageContent setExternalContentMetadata:] */

void FUN_10b63aa2c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x68) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63aa4c; end: 10b63aa53; -[SCNMessagingLocalMessageContent messageBehaviorHint] */

undefined8 FUN_10b63aa4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b63aa54; end: 10b63aa73; -[SCNMessagingLocalMessageContent setMessageBehaviorHint:] */

void FUN_10b63aa54(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x70) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63aa74; end: 10b63aa7b; -[SCNMessagingLocalMessageContent snapModeInfo] */

undefined8 FUN_10b63aa74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b63aa7c; end: 10b63aa9b; -[SCNMessagingLocalMessageContent setSnapModeInfo:] */

void FUN_10b63aa7c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63ab30();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63aa9c; end: 10b63aaa3; -[SCNMessagingLocalMessageContent localPlatformData] */

undefined8 FUN_10b63aa9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b63aaa4; end: 10b63aaab; -[SCNMessagingLocalMessageContent setLocalPlatformData:] */

void FUN_10b63aaa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63aaac; end: 10b63ab2f; -[SCNMessagingLocalMessageContent .cxx_destruct] */

void FUN_10b63aaac(long param_1)

{
  func_0x00010b63ab40(param_1 + 0x80);
  func_0x00010b63ab40(param_1 + 0x78);
  func_0x00010b63ab40(param_1 + 0x70);
  func_0x00010b63ab40(param_1 + 0x68);
  func_0x00010b63ab40(param_1 + 0x60);
  func_0x00010b63ab40(param_1 + 0x58);
  func_0x00010b63ab40(param_1 + 0x50);
  func_0x00010b63ab40(param_1 + 0x48);
  func_0x00010b63ab40(param_1 + 0x40);
  func_0x00010b63ab40(param_1 + 0x38);
  func_0x00010b63ab40(param_1 + 0x28);
  func_0x00010b63ab40(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63ab30; end: 10b63ab5f;  */

void FUN_10b63ab30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63ab60; end: 10b63ac83; -[SCNMessagingLocalMessageContentLite initWithContent:contentType:savePolicy:incidentalAttachments:remoteMediaReferences:] */

undefined1 *
FUN_10b63ab60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112707000;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_10b63ad18(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_10b63ad18(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_10b63ad18(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63ac84; end: 10b63ac8b; -[SCNMessagingLocalMessageContentLite initWithContent:contentType:savePolicy:incidentalAttachments:] */

void FUN_10b63ac84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c002c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithContent_contentType_save_1125de4d8);
  return;
}



/* Entry: 10b63ac8c; end: 10b63ac93; -[SCNMessagingLocalMessageContentLite content] */

undefined8 FUN_10b63ac8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63ac94; end: 10b63ac9b; -[SCNMessagingLocalMessageContentLite setContent:] */

void FUN_10b63ac94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63ac9c; end: 10b63aca3; -[SCNMessagingLocalMessageContentLite contentType] */

undefined8 FUN_10b63ac9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63aca4; end: 10b63acab; -[SCNMessagingLocalMessageContentLite setContentType:] */

void FUN_10b63aca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63acac; end: 10b63acb3; -[SCNMessagingLocalMessageContentLite savePolicy] */

undefined8 FUN_10b63acac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63acb4; end: 10b63acbb; -[SCNMessagingLocalMessageContentLite setSavePolicy:] */

void FUN_10b63acb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63acbc; end: 10b63acc3; -[SCNMessagingLocalMessageContentLite incidentalAttachments] */

undefined8 FUN_10b63acbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63acc4; end: 10b63accb; -[SCNMessagingLocalMessageContentLite setIncidentalAttachments:] */

void FUN_10b63acc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63accc; end: 10b63acd3; -[SCNMessagingLocalMessageContentLite remoteMediaReferences] */

undefined8 FUN_10b63accc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63acd4; end: 10b63acdb; -[SCNMessagingLocalMessageContentLite setRemoteMediaReferences:] */

void FUN_10b63acd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63acdc; end: 10b63ad17; -[SCNMessagingLocalMessageContentLite .cxx_destruct] */

void FUN_10b63acdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63ad18; end: 10b63ad1f;  */

void FUN_10b63ad18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b63ad20; end: 10b63ad67; -[SCNMessagingMassSnapDestination initWithType:] */

void FUN_10b63ad20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b63ad68; end: 10b63ad6f; -[SCNMessagingMassSnapDestination type] */

undefined8 FUN_10b63ad68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63ad70; end: 10b63ad77; -[SCNMessagingMassSnapDestination setType:] */

void FUN_10b63ad70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63ad78; end: 10b63ae0f; -[SCNMessagingMassSnapMessageMetadata initWithMassSnapId:type:] */

undefined1 *
FUN_10b63ad78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63ae10; end: 10b63ae17; -[SCNMessagingMassSnapMessageMetadata massSnapId] */

undefined8 FUN_10b63ae10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63ae18; end: 10b63ae47; -[SCNMessagingMassSnapMessageMetadata setMassSnapId:] */

void FUN_10b63ae18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63ae48; end: 10b63ae4f; -[SCNMessagingMassSnapMessageMetadata type] */

undefined8 FUN_10b63ae48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63ae50; end: 10b63ae57; -[SCNMessagingMassSnapMessageMetadata setType:] */

void FUN_10b63ae50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63ae58; end: 10b63ae63; -[SCNMessagingMassSnapMessageMetadata .cxx_destruct] */

void FUN_10b63ae58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63ae64; end: 10b63aedf; -[SCNMessagingMaybeSyncFeedMetadata initWithUserInCommunities:] */

undefined1 * FUN_10b63ae64(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b63af20();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10b63aee0; end: 10b63aee7; -[SCNMessagingMaybeSyncFeedMetadata init] */

void FUN_10b63aee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUserInCommunities__1125f4b08,0);
  return;
}



/* Entry: 10b63aee8; end: 10b63aeef; -[SCNMessagingMaybeSyncFeedMetadata userInCommunities] */

undefined8 FUN_10b63aee8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63aef0; end: 10b63af13; -[SCNMessagingMaybeSyncFeedMetadata setUserInCommunities:] */

void FUN_10b63aef0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b63af20();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63af14; end: 10b63af2f; -[SCNMessagingMaybeSyncFeedMetadata .cxx_destruct] */

void FUN_10b63af14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63af30; end: 10b63b00b; -[SCNMessagingMediaEncryptionInfo initWithKey:iv:] */

undefined1 *
FUN_10b63af30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707020;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63b00c; end: 10b63b013; -[SCNMessagingMediaEncryptionInfo key] */

undefined8 FUN_10b63b00c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63b014; end: 10b63b01b; -[SCNMessagingMediaEncryptionInfo setKey:] */

void FUN_10b63b014(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b01c; end: 10b63b023; -[SCNMessagingMediaEncryptionInfo iv] */

undefined8 FUN_10b63b01c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63b024; end: 10b63b02b; -[SCNMessagingMediaEncryptionInfo setIv:] */

void FUN_10b63b024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b02c; end: 10b63b05b; -[SCNMessagingMediaEncryptionInfo .cxx_destruct] */

void FUN_10b63b02c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b05c; end: 10b63b0ff; -[SCNMessagingMediaEncryptionInfoList initWithMediaEncryption:] */

undefined1 * FUN_10b63b05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707028;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63b100; end: 10b63b107; -[SCNMessagingMediaEncryptionInfoList mediaEncryption] */

undefined8 FUN_10b63b100(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63b108; end: 10b63b10f; -[SCNMessagingMediaEncryptionInfoList setMediaEncryption:] */

void FUN_10b63b108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b110; end: 10b63b11b; -[SCNMessagingMediaEncryptionInfoList .cxx_destruct] */

void FUN_10b63b110(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63b11c; end: 10b63b1c7; -[SCNMessagingMediaPrefetchError initWithErrorCode:errorDomain:] */

undefined1 *
FUN_10b63b11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63b1c8; end: 10b63b1cf; -[SCNMessagingMediaPrefetchError errorCode] */

undefined8 FUN_10b63b1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63b1d0; end: 10b63b1d7; -[SCNMessagingMediaPrefetchError setErrorCode:] */

void FUN_10b63b1d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63b1d8; end: 10b63b1df; -[SCNMessagingMediaPrefetchError errorDomain] */

undefined8 FUN_10b63b1d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63b1e0; end: 10b63b1e7; -[SCNMessagingMediaPrefetchError setErrorDomain:] */

void FUN_10b63b1e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63b1e8; end: 10b63b1f3; -[SCNMessagingMediaPrefetchError .cxx_destruct] */

void FUN_10b63b1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


