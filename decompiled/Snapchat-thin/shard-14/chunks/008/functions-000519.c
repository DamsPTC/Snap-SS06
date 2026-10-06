/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b63d538; end: 10b63d53f; -[SCNMessagingPollMetadata setNumOptions:] */

void FUN_10b63d538(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63d540; end: 10b63d547; -[SCNMessagingPollMetadata timeRemainingMs] */

undefined8 FUN_10b63d540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63d548; end: 10b63d56b; -[SCNMessagingPollMetadata setTimeRemainingMs:] */

void FUN_10b63d548(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d5c8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d56c; end: 10b63d573; -[SCNMessagingPollMetadata typeMetadata] */

undefined8 FUN_10b63d56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63d574; end: 10b63d597; -[SCNMessagingPollMetadata setTypeMetadata:] */

void FUN_10b63d574(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d5c8();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d598; end: 10b63d5c7; -[SCNMessagingPollMetadata .cxx_destruct] */

void FUN_10b63d598(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b63d5c8; end: 10b63d5d7;  */

void FUN_10b63d5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63d5d8; end: 10b63d697; -[SCNMessagingPollTypeMetadata initWithAnonymous:open:] */

undefined1 *
FUN_10b63d5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707108;
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



/* Entry: 10b63d698; end: 10b63d6a3; -[SCNMessagingPollTypeMetadata init] */

void FUN_10b63d698(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAnonymous_open__1125da640,0,0);
  return;
}



/* Entry: 10b63d6a4; end: 10b63d6ab; -[SCNMessagingPollTypeMetadata anonymous] */

undefined8 FUN_10b63d6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63d6ac; end: 10b63d6cf; -[SCNMessagingPollTypeMetadata setAnonymous:] */

void FUN_10b63d6ac(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d72c();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d6d0; end: 10b63d6d7; -[SCNMessagingPollTypeMetadata open] */

undefined8 FUN_10b63d6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63d6d8; end: 10b63d6fb; -[SCNMessagingPollTypeMetadata setOpen:] */

void FUN_10b63d6d8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63d72c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d6fc; end: 10b63d72b; -[SCNMessagingPollTypeMetadata .cxx_destruct] */

void FUN_10b63d6fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63d72c; end: 10b63d73b;  */

void FUN_10b63d72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63d73c; end: 10b63d7e7; -[SCNMessagingPollVoteList initWithVotes:didUserVote:] */

undefined1 *
FUN_10b63d73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63d7e8; end: 10b63d7ef; -[SCNMessagingPollVoteList votes] */

undefined8 FUN_10b63d7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63d7f0; end: 10b63d7f7; -[SCNMessagingPollVoteList setVotes:] */

void FUN_10b63d7f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63d7f8; end: 10b63d7ff; -[SCNMessagingPollVoteList didUserVote] */

undefined1 FUN_10b63d7f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63d800; end: 10b63d807; -[SCNMessagingPollVoteList setDidUserVote:] */

void FUN_10b63d800(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63d808; end: 10b63d813; -[SCNMessagingPollVoteList .cxx_destruct] */

void FUN_10b63d808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63d814; end: 10b63d81b; -[SCNMessagingPrefetchFeedUpdateMetadata init] */

void FUN_10b63d814(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c027a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithLoginPaginationComplete__1125e7868,0)
  ;
  return;
}



/* Entry: 10b63d81c; end: 10b63d83f; -[SCNMessagingPrefetchFeedUpdateMetadata setLoginPaginationComplete:] */

void FUN_10b63d81c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000107c39ee8();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63d840; end: 10b63d88f; -[SCNMessagingPrefetchRequest initWithStrategy:messagesPerConversation:] */

void FUN_10b63d840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707120;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b63d890; end: 10b63d897; -[SCNMessagingPrefetchRequest strategy] */

undefined8 FUN_10b63d890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63d898; end: 10b63d89f; -[SCNMessagingPrefetchRequest setStrategy:] */

void FUN_10b63d898(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b63d8a0; end: 10b63d8a7; -[SCNMessagingPrefetchRequest messagesPerConversation] */

undefined4 FUN_10b63d8a0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b63d8a8; end: 10b63d8af; -[SCNMessagingPrefetchRequest setMessagesPerConversation:] */

void FUN_10b63d8a8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63d8b0; end: 10b63da2b; -[SCNMessagingPublicGroup initWithGroupId:groupTitle:metadata:activityData:categories:] */

undefined1 *
FUN_10b63d8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_112707128;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63da2c; end: 10b63da37; -[SCNMessagingPublicGroup initWithGroupId:groupTitle:metadata:categories:] */

void FUN_10b63da2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGroupId_groupTitle_metad_1125e3d58);
  return;
}



/* Entry: 10b63da38; end: 10b63da3f; -[SCNMessagingPublicGroup groupId] */

undefined8 FUN_10b63da38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63da40; end: 10b63da5f; -[SCNMessagingPublicGroup setGroupId:] */

void FUN_10b63da40(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63db14();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63da60; end: 10b63da67; -[SCNMessagingPublicGroup groupTitle] */

undefined8 FUN_10b63da60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63da68; end: 10b63da6f; -[SCNMessagingPublicGroup setGroupTitle:] */

void FUN_10b63da68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63da70; end: 10b63da77; -[SCNMessagingPublicGroup metadata] */

undefined8 FUN_10b63da70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63da78; end: 10b63da97; -[SCNMessagingPublicGroup setMetadata:] */

void FUN_10b63da78(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63db14();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63da98; end: 10b63da9f; -[SCNMessagingPublicGroup activityData] */

undefined8 FUN_10b63da98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63daa0; end: 10b63dabf; -[SCNMessagingPublicGroup setActivityData:] */

void FUN_10b63daa0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63db14();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63dac0; end: 10b63dac7; -[SCNMessagingPublicGroup categories] */

undefined8 FUN_10b63dac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63dac8; end: 10b63dacf; -[SCNMessagingPublicGroup setCategories:] */

void FUN_10b63dac8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63dad0; end: 10b63db13; -[SCNMessagingPublicGroup .cxx_destruct] */

void FUN_10b63dad0(long param_1)

{
  func_0x00010b63db24(param_1 + 0x28);
  func_0x00010b63db24(param_1 + 0x20);
  func_0x00010b63db24(param_1 + 0x18);
  func_0x00010b63db24(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63db14; end: 10b63db33;  */

void FUN_10b63db14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63db34; end: 10b63dc77; -[SCNMessagingPublicGroupConversationMetadata initWithTopicId:totalParticipantCount:thumbnailURL:isCurrentUserMember:bannerEligibility:isLive:enterConvHint:] */

undefined1 *
FUN_10b63db34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112707130;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63dc78; end: 10b63dc97; -[SCNMessagingPublicGroupConversationMetadata initWithTopicId:totalParticipantCount:thumbnailURL:isCurrentUserMember:bannerEligibility:isLive:] */

void FUN_10b63dc78(void)

{
  func_0x00010c054460();
  return;
}



/* Entry: 10b63dc98; end: 10b63dc9f; -[SCNMessagingPublicGroupConversationMetadata topicId] */

undefined8 FUN_10b63dc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63dca0; end: 10b63dca7; -[SCNMessagingPublicGroupConversationMetadata setTopicId:] */

void FUN_10b63dca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63dca8; end: 10b63dcaf; -[SCNMessagingPublicGroupConversationMetadata totalParticipantCount] */

undefined4 FUN_10b63dca8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b63dcb0; end: 10b63dcb7; -[SCNMessagingPublicGroupConversationMetadata setTotalParticipantCount:] */

void FUN_10b63dcb0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b63dcb8; end: 10b63dcbf; -[SCNMessagingPublicGroupConversationMetadata thumbnailURL] */

undefined8 FUN_10b63dcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63dcc0; end: 10b63dcc7; -[SCNMessagingPublicGroupConversationMetadata setThumbnailURL:] */

void FUN_10b63dcc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63dcc8; end: 10b63dccf; -[SCNMessagingPublicGroupConversationMetadata isCurrentUserMember] */

undefined1 FUN_10b63dcc8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63dcd0; end: 10b63dcd7; -[SCNMessagingPublicGroupConversationMetadata setIsCurrentUserMember:] */

void FUN_10b63dcd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63dcd8; end: 10b63dcdf; -[SCNMessagingPublicGroupConversationMetadata bannerEligibility] */

undefined8 FUN_10b63dcd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63dce0; end: 10b63dce7; -[SCNMessagingPublicGroupConversationMetadata setBannerEligibility:] */

void FUN_10b63dce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b63dce8; end: 10b63dcef; -[SCNMessagingPublicGroupConversationMetadata isLive] */

undefined1 FUN_10b63dce8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b63dcf0; end: 10b63dcf7; -[SCNMessagingPublicGroupConversationMetadata setIsLive:] */

void FUN_10b63dcf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b63dcf8; end: 10b63dcff; -[SCNMessagingPublicGroupConversationMetadata enterConvHint] */

undefined8 FUN_10b63dcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63dd00; end: 10b63dd2f; -[SCNMessagingPublicGroupConversationMetadata setEnterConvHint:] */

void FUN_10b63dd00(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b63dd30; end: 10b63dd6b; -[SCNMessagingPublicGroupConversationMetadata .cxx_destruct] */

void FUN_10b63dd30(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63dd6c; end: 10b63de27; -[SCNMessagingPublicGroupMessageMetadata initWithSenderDisplayName:senderType:isHidden:] */

undefined1 *
FUN_10b63dd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112707138;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63de28; end: 10b63de37; -[SCNMessagingPublicGroupMessageMetadata initWithSenderType:isHidden:] */

void FUN_10b63de28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c044690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSenderDisplayName_sender_1125eeba0,0,param_3,param_4);
  return;
}



/* Entry: 10b63de38; end: 10b63de3f; -[SCNMessagingPublicGroupMessageMetadata senderDisplayName] */

undefined8 FUN_10b63de38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63de40; end: 10b63de47; -[SCNMessagingPublicGroupMessageMetadata setSenderDisplayName:] */

void FUN_10b63de40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63de48; end: 10b63de4f; -[SCNMessagingPublicGroupMessageMetadata senderType] */

undefined8 FUN_10b63de48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63de50; end: 10b63de57; -[SCNMessagingPublicGroupMessageMetadata setSenderType:] */

void FUN_10b63de50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63de58; end: 10b63de5f; -[SCNMessagingPublicGroupMessageMetadata isHidden] */

undefined1 FUN_10b63de58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63de60; end: 10b63de67; -[SCNMessagingPublicGroupMessageMetadata setIsHidden:] */

void FUN_10b63de60(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63de68; end: 10b63de73; -[SCNMessagingPublicGroupMessageMetadata .cxx_destruct] */

void FUN_10b63de68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63de74; end: 10b63df0b; -[SCNMessagingQuotedMessage initWithStatus:content:] */

undefined1 *
FUN_10b63de74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707140;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63df0c; end: 10b63df13; -[SCNMessagingQuotedMessage initWithStatus:] */

void FUN_10b63df0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithStatus_content__1125f0a80,param_3,0);
  return;
}



/* Entry: 10b63df14; end: 10b63df1b; -[SCNMessagingQuotedMessage status] */

undefined8 FUN_10b63df14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b63df1c; end: 10b63df23; -[SCNMessagingQuotedMessage setStatus:] */

void FUN_10b63df1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63df24; end: 10b63df2b; -[SCNMessagingQuotedMessage content] */

undefined8 FUN_10b63df24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63df2c; end: 10b63df5b; -[SCNMessagingQuotedMessage setContent:] */

void FUN_10b63df2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63df5c; end: 10b63df67; -[SCNMessagingQuotedMessage .cxx_destruct] */

void FUN_10b63df5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b63df68; end: 10b63e333; -[SCNMessagingQuotedMessageContent initWithContent:contentType:remoteMediaReferences:localMediaReferences:thumbnailIndexLists:conversationId:messageId:orderKey:senderId:isSaved:createdAt:analyticsMessageId:openedBy:messageTypeMetadata:snapPostOpenViewingState:snapModeInfo:publicGroupMessageMetadata:massSnapMessageMetadata:pollMetadata:] */

undefined8 *
FUN_10b63df68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  func_0x00010b63e63c();
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_112707148;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00010b63e634(uVar3);
    puVar1[3] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00010b63e634(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x00010b63e634(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x00010b63e634(uVar3);
    func_0x00010b63e63c();
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    func_0x00010b63e63c();
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_12;
    puVar1[0xb] = param_14;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x00010b63e634(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x00010b63e634(uVar3);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    func_0x00010b63e63c();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b63e334; end: 10b63e397; -[SCNMessagingQuotedMessageContent initWithContent:contentType:thumbnailIndexLists:conversationId:messageId:orderKey:senderId:isSaved:createdAt:openedBy:] */

void FUN_10b63e334(void)

{
  func_0x00010c002c20();
  return;
}



/* Entry: 10b63e398; end: 10b63e39f; -[SCNMessagingQuotedMessageContent content] */

undefined8 FUN_10b63e398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63e3a0; end: 10b63e3a7; -[SCNMessagingQuotedMessageContent setContent:] */

void FUN_10b63e3a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63e3a8; end: 10b63e3af; -[SCNMessagingQuotedMessageContent contentType] */

undefined8 FUN_10b63e3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b63e3b0; end: 10b63e3b7; -[SCNMessagingQuotedMessageContent setContentType:] */

void FUN_10b63e3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b63e3b8; end: 10b63e3bf; -[SCNMessagingQuotedMessageContent remoteMediaReferences] */

undefined8 FUN_10b63e3b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b63e3c0; end: 10b63e3c7; -[SCNMessagingQuotedMessageContent setRemoteMediaReferences:] */

void FUN_10b63e3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63e3c8; end: 10b63e3cf; -[SCNMessagingQuotedMessageContent localMediaReferences] */

undefined8 FUN_10b63e3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b63e3d0; end: 10b63e3d7; -[SCNMessagingQuotedMessageContent setLocalMediaReferences:] */

void FUN_10b63e3d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63e3d8; end: 10b63e3df; -[SCNMessagingQuotedMessageContent thumbnailIndexLists] */

undefined8 FUN_10b63e3d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b63e3e0; end: 10b63e3e7; -[SCNMessagingQuotedMessageContent setThumbnailIndexLists:] */

void FUN_10b63e3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63e3e8; end: 10b63e3ef; -[SCNMessagingQuotedMessageContent conversationId] */

undefined8 FUN_10b63e3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b63e3f0; end: 10b63e40f; -[SCNMessagingQuotedMessageContent setConversationId:] */

void FUN_10b63e3f0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63e614();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63e410; end: 10b63e417; -[SCNMessagingQuotedMessageContent messageId] */

undefined8 FUN_10b63e410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b63e418; end: 10b63e41f; -[SCNMessagingQuotedMessageContent setMessageId:] */

void FUN_10b63e418(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b63e420; end: 10b63e427; -[SCNMessagingQuotedMessageContent orderKey] */

undefined8 FUN_10b63e420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b63e428; end: 10b63e42f; -[SCNMessagingQuotedMessageContent setOrderKey:] */

void FUN_10b63e428(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b63e430; end: 10b63e437; -[SCNMessagingQuotedMessageContent senderId] */

undefined8 FUN_10b63e430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b63e438; end: 10b63e457; -[SCNMessagingQuotedMessageContent setSenderId:] */

void FUN_10b63e438(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b63e614();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63e458; end: 10b63e45f; -[SCNMessagingQuotedMessageContent isSaved] */

undefined1 FUN_10b63e458(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b63e460; end: 10b63e467; -[SCNMessagingQuotedMessageContent setIsSaved:] */

void FUN_10b63e460(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63e468; end: 10b63e46f; -[SCNMessagingQuotedMessageContent createdAt] */

undefined8 FUN_10b63e468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b63e470; end: 10b63e477; -[SCNMessagingQuotedMessageContent setCreatedAt:] */

void FUN_10b63e470(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b63e478; end: 10b63e47f; -[SCNMessagingQuotedMessageContent analyticsMessageId] */

undefined8 FUN_10b63e478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


