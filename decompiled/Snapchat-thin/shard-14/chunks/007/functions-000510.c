/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6360ac; end: 10b6360b3; -[SCNMessagingConversation isFriendLinkPending] */

undefined1 FUN_10b6360ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6360b4; end: 10b6360bb; -[SCNMessagingConversation setIsFriendLinkPending:] */

void FUN_10b6360b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6360bc; end: 10b6360c3; -[SCNMessagingConversation pinnedTimestampMs] */

undefined8 FUN_10b6360bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b6360c4; end: 10b6360e3; -[SCNMessagingConversation setPinnedTimestampMs:] */

void FUN_10b6360c4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6360e4; end: 10b6360eb; -[SCNMessagingConversation customNotificationSoundId] */

undefined8 FUN_10b6360e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b6360ec; end: 10b63610b; -[SCNMessagingConversation setCustomNotificationSoundId:] */

void FUN_10b6360ec(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63610c; end: 10b636113; -[SCNMessagingConversation chatWallpaper] */

undefined8 FUN_10b63610c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b636114; end: 10b636133; -[SCNMessagingConversation setChatWallpaper:] */

void FUN_10b636114(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636134; end: 10b63613b; -[SCNMessagingConversation lockedState] */

undefined8 FUN_10b636134(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b63613c; end: 10b636143; -[SCNMessagingConversation setLockedState:] */

void FUN_10b63613c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10b636144; end: 10b63614b; -[SCNMessagingConversation kickedParticipants] */

undefined8 FUN_10b636144(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b63614c; end: 10b636153; -[SCNMessagingConversation setKickedParticipants:] */

void FUN_10b63614c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b636154; end: 10b63615b; -[SCNMessagingConversation streakMetadata] */

undefined8 FUN_10b636154(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b63615c; end: 10b63617b; -[SCNMessagingConversation setStreakMetadata:] */

void FUN_10b63615c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63617c; end: 10b636183; -[SCNMessagingConversation conversationSubType] */

undefined8 FUN_10b63617c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b636184; end: 10b6361a3; -[SCNMessagingConversation setConversationSubType:] */

void FUN_10b636184(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6361a4; end: 10b6361ab; -[SCNMessagingConversation snapPostOpenViewingPolicy] */

undefined8 FUN_10b6361a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b6361ac; end: 10b6361b3; -[SCNMessagingConversation setSnapPostOpenViewingPolicy:] */

void FUN_10b6361ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 10b6361b4; end: 10b6361bb; -[SCNMessagingConversation pendingDecryptionCount] */

undefined8 FUN_10b6361b4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b6361bc; end: 10b6361db; -[SCNMessagingConversation setPendingDecryptionCount:] */

void FUN_10b6361bc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 200) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6361dc; end: 10b6361e3; -[SCNMessagingConversation initialMutualFriendCount] */

undefined8 FUN_10b6361dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10b6361e4; end: 10b636203; -[SCNMessagingConversation setInitialMutualFriendCount:] */

void FUN_10b6361e4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xd0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636204; end: 10b63620b; -[SCNMessagingConversation streakReminderEnabled] */

undefined1 FUN_10b636204(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b63620c; end: 10b636213; -[SCNMessagingConversation setStreakReminderEnabled:] */

void FUN_10b63620c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b636214; end: 10b63621b; -[SCNMessagingConversation categoryType] */

undefined8 FUN_10b636214(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10b63621c; end: 10b636223; -[SCNMessagingConversation setCategoryType:] */

void FUN_10b63621c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  return;
}



/* Entry: 10b636224; end: 10b63622b; -[SCNMessagingConversation categoryId] */

undefined8 FUN_10b636224(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b63622c; end: 10b63624b; -[SCNMessagingConversation setCategoryId:] */

void FUN_10b63622c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63624c; end: 10b636253; -[SCNMessagingConversation isEligibleForInfiniteRetention] */

undefined1 FUN_10b63624c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b636254; end: 10b63625b; -[SCNMessagingConversation setIsEligibleForInfiniteRetention:] */

void FUN_10b636254(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b63625c; end: 10b636263; -[SCNMessagingConversation isEligibleForSevenDayRetention] */

undefined1 FUN_10b63625c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b636264; end: 10b63626b; -[SCNMessagingConversation setIsEligibleForSevenDayRetention:] */

void FUN_10b636264(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10b63626c; end: 10b636273; -[SCNMessagingConversation metadataFormat] */

undefined8 FUN_10b63626c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b636274; end: 10b636293; -[SCNMessagingConversation setMetadataFormat:] */

void FUN_10b636274(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636294; end: 10b63629b; -[SCNMessagingConversation customRingtoneSoundId] */

undefined8 FUN_10b636294(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b63629c; end: 10b6362bb; -[SCNMessagingConversation setCustomRingtoneSoundId:] */

void FUN_10b63629c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6362bc; end: 10b6362c3; -[SCNMessagingConversation availableRetentionModes] */

undefined8 FUN_10b6362bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10b6362c4; end: 10b6362cb; -[SCNMessagingConversation setAvailableRetentionModes:] */

void FUN_10b6362c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6362cc; end: 10b6362d3; -[SCNMessagingConversation conversationSubTypeMetadata] */

undefined8 FUN_10b6362cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10b6362d4; end: 10b6362f3; -[SCNMessagingConversation setConversationSubTypeMetadata:] */

void FUN_10b6362d4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x20 + 0x100) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6362f4; end: 10b6362fb; -[SCNMessagingConversation conversationInvitationMetadata] */

undefined8 FUN_10b6362f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10b6362fc; end: 10b63631b; -[SCNMessagingConversation setConversationInvitationMetadata:] */

void FUN_10b6362fc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x20 + 0x108) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63631c; end: 10b636323; -[SCNMessagingConversation backoffTimeMs] */

undefined8 FUN_10b63631c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10b636324; end: 10b636343; -[SCNMessagingConversation setBackoffTimeMs:] */

void FUN_10b636324(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x110) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636344; end: 10b63634b; -[SCNMessagingConversation activityData] */

undefined8 FUN_10b636344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10b63634c; end: 10b63636b; -[SCNMessagingConversation setActivityData:] */

void FUN_10b63634c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b6363ac();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63636c; end: 10b636373; -[SCNMessagingConversation isPreservedForLegalHold] */

undefined1 FUN_10b63636c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b636374; end: 10b63637b; -[SCNMessagingConversation setIsPreservedForLegalHold:] */

void FUN_10b636374(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b63637c; end: 10b636383; -[SCNMessagingConversation canCreatePoll] */

undefined1 FUN_10b63637c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b636384; end: 10b63638b; -[SCNMessagingConversation setCanCreatePoll:] */

void FUN_10b636384(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10b63638c; end: 10b636393; -[SCNMessagingConversation groupStoryConsentStatus] */

undefined8 FUN_10b63638c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10b636394; end: 10b63639b; -[SCNMessagingConversation setGroupStoryConsentStatus:] */

void FUN_10b636394(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 10b63639c; end: 10b6363a3; -[SCNMessagingConversation groupStoryMayExist] */

undefined1 FUN_10b63639c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b6363a4; end: 10b6363c3; -[SCNMessagingConversation setGroupStoryMayExist:] */

void FUN_10b6363a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xe) = param_3;
  return;
}



/* Entry: 10b6363c4; end: 10b6364ab; -[SCNMessagingConversationHighlights initWithSummary:messages:createdAtMs:expiresAtMs:] */

undefined1 *
FUN_10b6363c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112706e60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6364ac; end: 10b6364bf; -[SCNMessagingConversationHighlights initWithMessages:createdAtMs:expiresAtMs:] */

void FUN_10b6364ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSummary_messages_created_1125f17e0,0,param_3,param_4,param_5);
  return;
}



/* Entry: 10b6364c0; end: 10b6364c7; -[SCNMessagingConversationHighlights summary] */

undefined8 FUN_10b6364c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6364c8; end: 10b6364f7; -[SCNMessagingConversationHighlights setSummary:] */

void FUN_10b6364c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b6364f8; end: 10b6364ff; -[SCNMessagingConversationHighlights messages] */

undefined8 FUN_10b6364f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b636500; end: 10b636507; -[SCNMessagingConversationHighlights setMessages:] */

void FUN_10b636500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b636508; end: 10b63650f; -[SCNMessagingConversationHighlights createdAtMs] */

undefined8 FUN_10b636508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b636510; end: 10b636517; -[SCNMessagingConversationHighlights setCreatedAtMs:] */

void FUN_10b636510(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b636518; end: 10b63651f; -[SCNMessagingConversationHighlights expiresAtMs] */

undefined8 FUN_10b636518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b636520; end: 10b636527; -[SCNMessagingConversationHighlights setExpiresAtMs:] */

void FUN_10b636520(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b636528; end: 10b636557; -[SCNMessagingConversationHighlights .cxx_destruct] */

void FUN_10b636528(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b636558; end: 10b6365d3; -[SCNMessagingConversationInvitationMetadata initWithInviter:] */

undefined1 * FUN_10b636558(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b63660c();
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



/* Entry: 10b6365d4; end: 10b6365db; -[SCNMessagingConversationInvitationMetadata inviter] */

undefined8 FUN_10b6365d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6365dc; end: 10b6365ff; -[SCNMessagingConversationInvitationMetadata setInviter:] */

void FUN_10b6365dc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b63660c();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636600; end: 10b63661b; -[SCNMessagingConversationInvitationMetadata .cxx_destruct] */

void FUN_10b636600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63661c; end: 10b636663; -[SCNMessagingConversationItem initWithState:] */

void FUN_10b63661c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b636664; end: 10b63666b; -[SCNMessagingConversationItem state] */

undefined8 FUN_10b636664(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63666c; end: 10b636673; -[SCNMessagingConversationItem setState:] */

void FUN_10b63666c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b636674; end: 10b63673b; -[SCNMessagingConversationMessageGroupMetricsData initWithRecipientCount:retentionPolicy:communityId:] */

undefined1 *
FUN_10b636674(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706e78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
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



/* Entry: 10b63673c; end: 10b636743; -[SCNMessagingConversationMessageGroupMetricsData initWithRecipientCount:retentionPolicy:] */

void FUN_10b63673c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRecipientCount_retention_1125ecf10,param_3,param_4,0);
  return;
}



/* Entry: 10b636744; end: 10b63674b; -[SCNMessagingConversationMessageGroupMetricsData recipientCount] */

undefined4 FUN_10b636744(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b63674c; end: 10b636753; -[SCNMessagingConversationMessageGroupMetricsData setRecipientCount:] */

void FUN_10b63674c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b636754; end: 10b63675b; -[SCNMessagingConversationMessageGroupMetricsData retentionPolicy] */

undefined8 FUN_10b636754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63675c; end: 10b63677f; -[SCNMessagingConversationMessageGroupMetricsData setRetentionPolicy:] */

void FUN_10b63675c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6367dc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636780; end: 10b636787; -[SCNMessagingConversationMessageGroupMetricsData communityId] */

undefined8 FUN_10b636780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b636788; end: 10b6367ab; -[SCNMessagingConversationMessageGroupMetricsData setCommunityId:] */

void FUN_10b636788(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6367dc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6367ac; end: 10b6367db; -[SCNMessagingConversationMessageGroupMetricsData .cxx_destruct] */

void FUN_10b6367ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6367dc; end: 10b6367eb;  */

void FUN_10b6367dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6367ec; end: 10b636937; -[SCNMessagingConversationMessageMetricsData initWithAnalyticsMessageId:conversationId:type:oneToOneMetricsData:groupMetricsData:] */

undefined1 *
FUN_10b6367ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112706e80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b636938; end: 10b636943; -[SCNMessagingConversationMessageMetricsData initWithAnalyticsMessageId:conversationId:type:] */

void FUN_10b636938(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff2d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAnalyticsMessageId_conve_1125da510);
  return;
}



/* Entry: 10b636944; end: 10b63694b; -[SCNMessagingConversationMessageMetricsData analyticsMessageId] */

undefined8 FUN_10b636944(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63694c; end: 10b636953; -[SCNMessagingConversationMessageMetricsData setAnalyticsMessageId:] */

void FUN_10b63694c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b636954; end: 10b63695b; -[SCNMessagingConversationMessageMetricsData conversationId] */

undefined8 FUN_10b636954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63695c; end: 10b63697b; -[SCNMessagingConversationMessageMetricsData setConversationId:] */

void FUN_10b63695c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b636a18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63697c; end: 10b636983; -[SCNMessagingConversationMessageMetricsData type] */

undefined8 FUN_10b63697c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b636984; end: 10b63698b; -[SCNMessagingConversationMessageMetricsData setType:] */

void FUN_10b636984(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63698c; end: 10b636993; -[SCNMessagingConversationMessageMetricsData oneToOneMetricsData] */

undefined8 FUN_10b63698c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b636994; end: 10b6369b3; -[SCNMessagingConversationMessageMetricsData setOneToOneMetricsData:] */

void FUN_10b636994(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b636a18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6369b4; end: 10b6369bb; -[SCNMessagingConversationMessageMetricsData groupMetricsData] */

undefined8 FUN_10b6369b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6369bc; end: 10b6369db; -[SCNMessagingConversationMessageMetricsData setGroupMetricsData:] */

void FUN_10b6369bc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b636a18();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6369dc; end: 10b636a17; -[SCNMessagingConversationMessageMetricsData .cxx_destruct] */

void FUN_10b6369dc(long param_1)

{
  func_0x00010b636a30(param_1 + 0x28);
  func_0x00010b636a30(param_1 + 0x20);
  func_0x00010b636a30(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b636a18; end: 10b636a37;  */

void FUN_10b636a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b636a38; end: 10b636aff; -[SCNMessagingConversationMessageOneToOneMetricsData initWithRetentionPolicy:recipientId:snapPostOpenViewingPolicy:] */

undefined1 *
FUN_10b636a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706e88;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b636b00; end: 10b636b07; -[SCNMessagingConversationMessageOneToOneMetricsData retentionPolicy] */

undefined8 FUN_10b636b00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b636b08; end: 10b636b2b; -[SCNMessagingConversationMessageOneToOneMetricsData setRetentionPolicy:] */

void FUN_10b636b08(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b636b98();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636b2c; end: 10b636b33; -[SCNMessagingConversationMessageOneToOneMetricsData recipientId] */

undefined8 FUN_10b636b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


