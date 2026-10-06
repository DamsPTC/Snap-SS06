/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6393b8; end: 10b6393bf; -[SCNMessagingFriendLinkData isContact] */

undefined1 FUN_10b6393b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6393c0; end: 10b6393c7; -[SCNMessagingFriendLinkData setIsContact:] */

void FUN_10b6393c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6393c8; end: 10b63955b; -[SCNMessagingGroup initWithGroupId:name:participants:lastInteractionTimestampMs:pinnedTimestampMs:type:publicGroupMetadata:] */

undefined1 *
FUN_10b6393c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112706f90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63955c; end: 10b63958f; -[SCNMessagingGroup initWithGroupId:participants:lastInteractionTimestampMs:type:] */

void FUN_10b63955c(void)

{
  func_0x00010c018ee0();
  return;
}



/* Entry: 10b639590; end: 10b639597; -[SCNMessagingGroup groupId] */

undefined8 FUN_10b639590(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b639598; end: 10b6395b7; -[SCNMessagingGroup setGroupId:] */

void FUN_10b639598(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63968c();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6395b8; end: 10b6395bf; -[SCNMessagingGroup name] */

undefined8 FUN_10b6395b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6395c0; end: 10b6395c7; -[SCNMessagingGroup setName:] */

void FUN_10b6395c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6395c8; end: 10b6395cf; -[SCNMessagingGroup participants] */

undefined8 FUN_10b6395c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6395d0; end: 10b6395d7; -[SCNMessagingGroup setParticipants:] */

void FUN_10b6395d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6395d8; end: 10b6395df; -[SCNMessagingGroup lastInteractionTimestampMs] */

undefined8 FUN_10b6395d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6395e0; end: 10b6395e7; -[SCNMessagingGroup setLastInteractionTimestampMs:] */

void FUN_10b6395e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b6395e8; end: 10b6395ef; -[SCNMessagingGroup pinnedTimestampMs] */

undefined8 FUN_10b6395e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6395f0; end: 10b63960f; -[SCNMessagingGroup setPinnedTimestampMs:] */

void FUN_10b6395f0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63968c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639610; end: 10b639617; -[SCNMessagingGroup type] */

undefined8 FUN_10b639610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b639618; end: 10b63961f; -[SCNMessagingGroup setType:] */

void FUN_10b639618(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b639620; end: 10b639627; -[SCNMessagingGroup publicGroupMetadata] */

undefined8 FUN_10b639620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b639628; end: 10b639647; -[SCNMessagingGroup setPublicGroupMetadata:] */

void FUN_10b639628(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63968c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639648; end: 10b63968b; -[SCNMessagingGroup .cxx_destruct] */

void FUN_10b639648(long param_1)

{
  func_0x00010b63969c(param_1 + 0x38);
  func_0x00010b63969c(param_1 + 0x28);
  func_0x00010b63969c(param_1 + 0x18);
  func_0x00010b63969c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63968c; end: 10b6396ab;  */

void FUN_10b63968c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b6396ac; end: 10b639743; -[SCNMessagingGroupMemberAction initWithUserId:groupMemberStateChange:] */

undefined1 *
FUN_10b6396ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706f98;
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



/* Entry: 10b639744; end: 10b63974b; -[SCNMessagingGroupMemberAction userId] */

undefined8 FUN_10b639744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63974c; end: 10b63977b; -[SCNMessagingGroupMemberAction setUserId:] */

void FUN_10b63974c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63977c; end: 10b639783; -[SCNMessagingGroupMemberAction groupMemberStateChange] */

undefined8 FUN_10b63977c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b639784; end: 10b63978b; -[SCNMessagingGroupMemberAction setGroupMemberStateChange:] */

void FUN_10b639784(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63978c; end: 10b639797; -[SCNMessagingGroupMemberAction .cxx_destruct] */

void FUN_10b63978c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b639798; end: 10b63985f; -[SCNMessagingGroupMetadata initWithConversationMetadata:creatorUUID:lastUpdatedTimestamp:] */

undefined1 *
FUN_10b639798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706fa0;
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



/* Entry: 10b639860; end: 10b639867; -[SCNMessagingGroupMetadata conversationMetadata] */

undefined8 FUN_10b639860(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b639868; end: 10b63988b; -[SCNMessagingGroupMetadata setConversationMetadata:] */

void FUN_10b639868(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6398f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63988c; end: 10b639893; -[SCNMessagingGroupMetadata creatorUUID] */

undefined8 FUN_10b63988c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b639894; end: 10b6398b7; -[SCNMessagingGroupMetadata setCreatorUUID:] */

void FUN_10b639894(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b6398f8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6398b8; end: 10b6398bf; -[SCNMessagingGroupMetadata lastUpdatedTimestamp] */

undefined8 FUN_10b6398b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6398c0; end: 10b6398c7; -[SCNMessagingGroupMetadata setLastUpdatedTimestamp:] */

void FUN_10b6398c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b6398c8; end: 10b6398f7; -[SCNMessagingGroupMetadata .cxx_destruct] */

void FUN_10b6398c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6398f8; end: 10b639907;  */

void FUN_10b6398f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b639908; end: 10b6399b3; -[SCNMessagingGroupParticipantStringInfo initWithParticipants:numAdditionalParticipants:] */

undefined1 *
FUN_10b639908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706fa8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6399b4; end: 10b6399bb; -[SCNMessagingGroupParticipantStringInfo participants] */

undefined8 FUN_10b6399b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6399bc; end: 10b6399c3; -[SCNMessagingGroupParticipantStringInfo setParticipants:] */

void FUN_10b6399bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6399c4; end: 10b6399cb; -[SCNMessagingGroupParticipantStringInfo numAdditionalParticipants] */

undefined4 FUN_10b6399c4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6399cc; end: 10b6399d3; -[SCNMessagingGroupParticipantStringInfo setNumAdditionalParticipants:] */

void FUN_10b6399cc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6399d4; end: 10b6399df; -[SCNMessagingGroupParticipantStringInfo .cxx_destruct] */

void FUN_10b6399d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6399e0; end: 10b639af3; -[SCNMessagingGroupRecipient initWithDisplayName:participantInfo:topGroupRank:feedType:] */

undefined1 *
FUN_10b6399e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112706fb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b639af4; end: 10b639b07; -[SCNMessagingGroupRecipient initWithParticipantInfo:feedType:] */

void FUN_10b639af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDisplayName_participantI_1125e0ed8,0,param_3,0,param_4);
  return;
}



/* Entry: 10b639b08; end: 10b639b0f; -[SCNMessagingGroupRecipient displayName] */

undefined8 FUN_10b639b08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b639b10; end: 10b639b17; -[SCNMessagingGroupRecipient setDisplayName:] */

void FUN_10b639b10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b639b18; end: 10b639b1f; -[SCNMessagingGroupRecipient participantInfo] */

undefined8 FUN_10b639b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b639b20; end: 10b639b43; -[SCNMessagingGroupRecipient setParticipantInfo:] */

void FUN_10b639b20(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639bbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639b44; end: 10b639b4b; -[SCNMessagingGroupRecipient topGroupRank] */

undefined8 FUN_10b639b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b639b4c; end: 10b639b6f; -[SCNMessagingGroupRecipient setTopGroupRank:] */

void FUN_10b639b4c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639bbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639b70; end: 10b639b77; -[SCNMessagingGroupRecipient feedType] */

undefined8 FUN_10b639b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b639b78; end: 10b639b7f; -[SCNMessagingGroupRecipient setFeedType:] */

void FUN_10b639b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b639b80; end: 10b639bbb; -[SCNMessagingGroupRecipient .cxx_destruct] */

void FUN_10b639b80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b639bbc; end: 10b639bcb;  */

void FUN_10b639bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b639bcc; end: 10b639d47; -[SCNMessagingGroupUpdate initWithGroupId:name:participants:groupUpdateInfo:publicGroupMetadata:] */

undefined1 *
FUN_10b639bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112706fb8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b639d48; end: 10b639d5b; -[SCNMessagingGroupUpdate initWithGroupId:participants:] */

void FUN_10b639d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithGroupId_name_participant_1125e3d90,param_3,0,param_4,0,0);
  return;
}



/* Entry: 10b639d5c; end: 10b639d63; -[SCNMessagingGroupUpdate groupId] */

undefined8 FUN_10b639d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b639d64; end: 10b639d83; -[SCNMessagingGroupUpdate setGroupId:] */

void FUN_10b639d64(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639e38();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639d84; end: 10b639d8b; -[SCNMessagingGroupUpdate name] */

undefined8 FUN_10b639d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b639d8c; end: 10b639d93; -[SCNMessagingGroupUpdate setName:] */

void FUN_10b639d8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b639d94; end: 10b639d9b; -[SCNMessagingGroupUpdate participants] */

undefined8 FUN_10b639d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b639d9c; end: 10b639da3; -[SCNMessagingGroupUpdate setParticipants:] */

void FUN_10b639d9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b639da4; end: 10b639dab; -[SCNMessagingGroupUpdate groupUpdateInfo] */

undefined8 FUN_10b639da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b639dac; end: 10b639dcb; -[SCNMessagingGroupUpdate setGroupUpdateInfo:] */

void FUN_10b639dac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639e38();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639dcc; end: 10b639dd3; -[SCNMessagingGroupUpdate publicGroupMetadata] */

undefined8 FUN_10b639dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b639dd4; end: 10b639df3; -[SCNMessagingGroupUpdate setPublicGroupMetadata:] */

void FUN_10b639dd4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b639e38();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b639df4; end: 10b639e37; -[SCNMessagingGroupUpdate .cxx_destruct] */

void FUN_10b639df4(long param_1)

{
  func_0x00010b639e48(param_1 + 0x28);
  func_0x00010b639e48(param_1 + 0x20);
  func_0x00010b639e48(param_1 + 0x18);
  func_0x00010b639e48(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b639e38; end: 10b639e57;  */

void FUN_10b639e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b639e58; end: 10b639efb; -[SCNMessagingGroupUpdateInfo initWithGroupMemberActions:] */

undefined1 * FUN_10b639e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706fc0;
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



/* Entry: 10b639efc; end: 10b639f03; -[SCNMessagingGroupUpdateInfo groupMemberActions] */

undefined8 FUN_10b639efc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b639f04; end: 10b639f0b; -[SCNMessagingGroupUpdateInfo setGroupMemberActions:] */

void FUN_10b639f04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b639f0c; end: 10b639f17; -[SCNMessagingGroupUpdateInfo .cxx_destruct] */

void FUN_10b639f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b639f18; end: 10b639fbb; -[SCNMessagingHighlightsSummaryInfo initWithText:] */

undefined1 * FUN_10b639f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706fc8;
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



/* Entry: 10b639fbc; end: 10b639fc3; -[SCNMessagingHighlightsSummaryInfo text] */

undefined8 FUN_10b639fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b639fc4; end: 10b639fcb; -[SCNMessagingHighlightsSummaryInfo setText:] */

void FUN_10b639fc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b639fcc; end: 10b639fd7; -[SCNMessagingHighlightsSummaryInfo .cxx_destruct] */

void FUN_10b639fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b639fd8; end: 10b63a00b; -[SCNMessagingInteractionInfo initWithConversationDataState:tapActionState:longPressActionState:hasMessagesToReplay:numMessagesToSave:hasMessagesToRetry:hasMessagesToCancel:mayHaveSaveableSentSnap:messagesReplayableState:] */

void FUN_10b639fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined1 uStack0000000000000001;
  
  uStack0000000000000001 = param_9;
                    /* WARNING: Could not recover jumptable at 0x00010c02b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithMessages_conversationDat_1125e8830,0,param_3,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 10b63a00c; end: 10b63a013; -[SCNMessagingInteractionInfo setMessages:] */

void FUN_10b63a00c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a014; end: 10b63a01b; -[SCNMessagingInteractionInfo conversationDataState] */

undefined8 FUN_10b63a014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63a01c; end: 10b63a023; -[SCNMessagingInteractionInfo setConversationDataState:] */

void FUN_10b63a01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63a024; end: 10b63a02b; -[SCNMessagingInteractionInfo setTapActionState:] */

void FUN_10b63a024(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b63a02c; end: 10b63a033; -[SCNMessagingInteractionInfo longPressActionState] */

undefined8 FUN_10b63a02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63a034; end: 10b63a03b; -[SCNMessagingInteractionInfo setLongPressActionState:] */

void FUN_10b63a034(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b63a03c; end: 10b63a043; -[SCNMessagingInteractionInfo setHasMessagesToReplay:] */

void FUN_10b63a03c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63a044; end: 10b63a04b; -[SCNMessagingInteractionInfo setNumMessagesToSave:] */

void FUN_10b63a044(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b63a04c; end: 10b63a053; -[SCNMessagingInteractionInfo hasMessagesToRetry] */

undefined1 FUN_10b63a04c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b63a054; end: 10b63a05b; -[SCNMessagingInteractionInfo setHasMessagesToRetry:] */

void FUN_10b63a054(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b63a05c; end: 10b63a063; -[SCNMessagingInteractionInfo hasMessagesToCancel] */

undefined1 FUN_10b63a05c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b63a064; end: 10b63a06b; -[SCNMessagingInteractionInfo setHasMessagesToCancel:] */

void FUN_10b63a064(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b63a06c; end: 10b63a073; -[SCNMessagingInteractionInfo setMayHaveSaveableSentSnap:] */

void FUN_10b63a06c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10b63a074; end: 10b63a07b; -[SCNMessagingInteractionInfo messagesReplayableState] */

undefined8 FUN_10b63a074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63a07c; end: 10b63a083; -[SCNMessagingInteractionInfo setMessagesReplayableState:] */

void FUN_10b63a07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b63a084; end: 10b63a08f; -[SCNMessagingInteractionInfo .cxx_destruct] */

void FUN_10b63a084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63a090; end: 10b63a16b; -[SCNMessagingInviteDestinations initWithSnapchatters:phoneNumbers:] */

undefined1 *
FUN_10b63a090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706fd8;
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



/* Entry: 10b63a16c; end: 10b63a173; -[SCNMessagingInviteDestinations snapchatters] */

undefined8 FUN_10b63a16c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63a174; end: 10b63a17b; -[SCNMessagingInviteDestinations setSnapchatters:] */

void FUN_10b63a174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a17c; end: 10b63a183; -[SCNMessagingInviteDestinations phoneNumbers] */

undefined8 FUN_10b63a17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63a184; end: 10b63a18b; -[SCNMessagingInviteDestinations setPhoneNumbers:] */

void FUN_10b63a184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63a18c; end: 10b63a1bb; -[SCNMessagingInviteDestinations .cxx_destruct] */

void FUN_10b63a18c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63a1bc; end: 10b63a2ff; -[SCNMessagingJoinGroupConversationMetadata initWithTitle:participants:createdTimestampMs:communityId:] */

undefined1 *
FUN_10b63a1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706fe0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63a300; end: 10b63a313; -[SCNMessagingJoinGroupConversationMetadata init] */

void FUN_10b63a300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0532b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTitle_participants_creat_1125f26b0,0,0,0,0);
  return;
}


