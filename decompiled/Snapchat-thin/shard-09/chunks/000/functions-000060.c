/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068f6f50; end: 1068f6f57; -[SCChatConversationViewModelV3 snapshot] */

undefined8 FUN_1068f6f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1068f6f58; end: 1068f6f5f; -[SCChatConversationViewModelV3 loggingInfo] */

undefined8 FUN_1068f6f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1068f6f60; end: 1068f6f67; -[SCChatConversationViewModelV3 reactionMetadata] */

undefined8 FUN_1068f6f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1068f6f68; end: 1068f6f6f; -[SCChatConversationViewModelV3 currentUserSnapchatter] */

undefined8 FUN_1068f6f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1068f6f70; end: 1068f6f77; -[SCChatConversationViewModelV3 recipientSnapchatter] */

undefined8 FUN_1068f6f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 1068f6f78; end: 1068f6f7f; -[SCChatConversationViewModelV3 latestReceivedReactionSeenId] */

undefined8 FUN_1068f6f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1068f6f80; end: 1068f6f87; -[SCChatConversationViewModelV3 isNonFriendConversation] */

undefined1 FUN_1068f6f80(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



/* Entry: 1068f6f88; end: 1068f6f8f; -[SCChatConversationViewModelV3 conversationSubtype] */

undefined8 FUN_1068f6f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 1068f6f90; end: 1068f6f97; -[SCChatConversationViewModelV3 isEligibleForAnchorAboveInputBar] */

undefined1 FUN_1068f6f90(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa2);
}



/* Entry: 1068f6f98; end: 1068f6f9f; -[SCChatConversationViewModelV3 hasMessageFromCurrentUser] */

undefined1 FUN_1068f6f98(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa3);
}



/* Entry: 1068f6fa0; end: 1068f6fa7; -[SCChatConversationViewModelV3 hasMerlinMentionResponse] */

undefined1 FUN_1068f6fa0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa4);
}



/* Entry: 1068f6fa8; end: 1068f6faf; -[SCChatConversationViewModelV3 isLockedConversation] */

undefined1 FUN_1068f6fa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa5);
}



/* Entry: 1068f6fb0; end: 1068f6fb7; -[SCChatConversationViewModelV3 isAckedLockedConversation] */

undefined1 FUN_1068f6fb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa6);
}



/* Entry: 1068f6fb8; end: 1068f6fbf; -[SCChatConversationViewModelV3 hasChatWallpaper] */

undefined1 FUN_1068f6fb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa7);
}



/* Entry: 1068f6fc0; end: 1068f6fc7; -[SCChatConversationViewModelV3 expiredStreakMetadata] */

undefined8 FUN_1068f6fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1068f6fc8; end: 1068f6fcf; -[SCChatConversationViewModelV3 convoCreatedAtMs] */

undefined8 FUN_1068f6fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1068f6fd0; end: 1068f6fd7; -[SCChatConversationViewModelV3 initialMutualFriendCount] */

undefined8 FUN_1068f6fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1068f6fd8; end: 1068f6fdf; -[SCChatConversationViewModelV3 lastCommitedMessageId] */

undefined8 FUN_1068f6fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 1068f6fe0; end: 1068f6fe7; -[SCChatConversationViewModelV3 hasUnreadMessages] */

undefined1 FUN_1068f6fe0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 1068f6fe8; end: 1068f6fef; -[SCChatConversationViewModelV3 hasUnreadUnopenedMessages] */

undefined1 FUN_1068f6fe8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



/* Entry: 1068f6ff0; end: 1068f6ff7; -[SCChatConversationViewModelV3 feedViewedReadUpToMessageId] */

undefined8 FUN_1068f6ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1068f6ff8; end: 1068f6fff; -[SCChatConversationViewModelV3 isInitialLoad] */

undefined1 FUN_1068f6ff8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xaa);
}



/* Entry: 1068f7000; end: 1068f7143; -[SCChatConversationViewModelV3 .cxx_destruct] */

void FUN_1068f7000(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068f7144; end: 1068f743f; -[SCChatActiveConversationData initWithConversation:snapshot:storiesSummary:conversationParticipants:activeMetadata:earlierContentExists:laterContentExists:newMessagesAvailable:conversationHistoryLoadStatus:conversationLoadStatus:animationData:snapchattersData:currentUserSnapchatter:postSnapActionsResults:paginationSinceMessageIdToken:conversationReactionMetadata:campaignAdResponse:] */

undefined8 *
FUN_1068f7144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126f3c20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_9._1_1_;
    puVar1[7] = param_11;
    puVar1[8] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068f7440; end: 1068f7463; -[SCChatActiveConversationData copyWithZone:] */

undefined8 FUN_1068f7440(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068f7464; end: 1068f756b; -[SCChatActiveConversationData hash] */

undefined8 * FUN_1068f7464(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1068f772c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1068f7738;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(char *)((long)puVar3 + 10) == param_3[10])) &&
        ((*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x48);
                if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x50);
                  if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x58);
                    if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x60);
                      if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x68);
                        if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x70);
                          if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            puVar6 = *(undefined1 **)((long)puVar3 + 0x78);
                            if (puVar6 != *(undefined1 **)(param_3 + 0x78)) {
                              func_0x00010c071ae0();
                              goto LAB_1068f7738;
                            }
                            goto LAB_1068f772c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1068f7738:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1068f756c; end: 1068f7753; -[SCChatActiveConversationData isEqual:] */

long FUN_1068f756c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068f772c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068f7738;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x60);
                      if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x68);
                        if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x70);
                          if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x78);
                            if (lVar3 != *(long *)(param_3 + 0x78)) {
                              func_0x00010c071ae0();
                              goto LAB_1068f7738;
                            }
                            goto LAB_1068f772c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1068f7738:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068f7754; end: 1068f775b; -[SCChatActiveConversationData conversation] */

undefined8 FUN_1068f7754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068f775c; end: 1068f7763; -[SCChatActiveConversationData snapshot] */

undefined8 FUN_1068f775c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068f7764; end: 1068f776b; -[SCChatActiveConversationData storiesSummary] */

undefined8 FUN_1068f7764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068f776c; end: 1068f7773; -[SCChatActiveConversationData conversationParticipants] */

undefined8 FUN_1068f776c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1068f7774; end: 1068f777b; -[SCChatActiveConversationData activeMetadata] */

undefined8 FUN_1068f7774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1068f777c; end: 1068f7783; -[SCChatActiveConversationData earlierContentExists] */

undefined1 FUN_1068f777c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1068f7784; end: 1068f778b; -[SCChatActiveConversationData laterContentExists] */

undefined1 FUN_1068f7784(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1068f778c; end: 1068f7793; -[SCChatActiveConversationData newMessagesAvailable] */

undefined1 FUN_1068f778c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1068f7794; end: 1068f779b; -[SCChatActiveConversationData conversationHistoryLoadStatus] */

undefined8 FUN_1068f7794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1068f779c; end: 1068f77a3; -[SCChatActiveConversationData conversationLoadStatus] */

undefined8 FUN_1068f779c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1068f77a4; end: 1068f77ab; -[SCChatActiveConversationData animationData] */

undefined8 FUN_1068f77a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1068f77ac; end: 1068f77b3; -[SCChatActiveConversationData snapchattersData] */

undefined8 FUN_1068f77ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1068f77b4; end: 1068f77bb; -[SCChatActiveConversationData currentUserSnapchatter] */

undefined8 FUN_1068f77b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1068f77bc; end: 1068f77c3; -[SCChatActiveConversationData postSnapActionsResults] */

undefined8 FUN_1068f77bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1068f77c4; end: 1068f77cb; -[SCChatActiveConversationData paginationSinceMessageIdToken] */

undefined8 FUN_1068f77c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1068f77cc; end: 1068f77d3; -[SCChatActiveConversationData conversationReactionMetadata] */

undefined8 FUN_1068f77cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1068f77d4; end: 1068f77db; -[SCChatActiveConversationData campaignAdResponse] */

undefined8 FUN_1068f77d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1068f77dc; end: 1068f7883; -[SCChatActiveConversationData .cxx_destruct] */

void FUN_1068f77dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068f7884; end: 1068f791b; +[SCChatActiveConversationUpdateRequest failureWithChatIdentifier:token:] */

void FUN_1068f7884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cb388;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068f791c; end: 1068f7a0b; +[SCChatActiveConversationUpdateRequest successWithActiveConversationData:chatIdentifier:token:metricsTracker:] */

void FUN_1068f791c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126cb388;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068f7a0c; end: 1068f7a2f; -[SCChatActiveConversationUpdateRequest copyWithZone:] */

undefined8 FUN_1068f7a0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068f7a30; end: 1068f7ad7; -[SCChatActiveConversationUpdateRequest hash] */

void FUN_1068f7a30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f3c28;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f7ad8; end: 1068f7b1b; -[SCChatActiveConversationUpdateRequest internalInit] */

void FUN_1068f7ad8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f3c28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f7b1c; end: 1068f7c33; -[SCChatActiveConversationUpdateRequest isEqual:] */

long FUN_1068f7b1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068f7c0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068f7c18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_1068f7c18;
                }
                goto LAB_1068f7c0c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1068f7c18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068f7c34; end: 1068f7cbf; -[SCChatActiveConversationUpdateRequest matchSuccess:failure:] */

void FUN_1068f7c34(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068f7cc0; end: 1068f7d1f; -[SCChatActiveConversationUpdateRequest .cxx_destruct] */

void FUN_1068f7cc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1068f7d20; end: 1068f7df3; -[SCChatActiveRenderingConversationDataRequest initWithConversation:token:metricsTracker:] */

undefined1 *
FUN_1068f7d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3c30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068f7df4; end: 1068f7e17; -[SCChatActiveRenderingConversationDataRequest copyWithZone:] */

undefined8 FUN_1068f7df4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1068f7e18; end: 1068f7e97; -[SCChatActiveRenderingConversationDataRequest hash] */

undefined8 * FUN_1068f7e18(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1068f7f30:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1068f7f3c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1068f7f3c;
          }
          goto LAB_1068f7f30;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1068f7f3c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1068f7e98; end: 1068f7f57; -[SCChatActiveRenderingConversationDataRequest isEqual:] */

long FUN_1068f7e98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1068f7f30:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1068f7f3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1068f7f3c;
          }
          goto LAB_1068f7f30;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1068f7f3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1068f7f58; end: 1068f7f5f; -[SCChatActiveRenderingConversationDataRequest conversation] */

undefined8 FUN_1068f7f58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068f7f60; end: 1068f7f67; -[SCChatActiveRenderingConversationDataRequest token] */

undefined8 FUN_1068f7f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068f7f68; end: 1068f7f6f; -[SCChatActiveRenderingConversationDataRequest metricsTracker] */

undefined8 FUN_1068f7f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068f7f70; end: 1068f7fab; -[SCChatActiveRenderingConversationDataRequest .cxx_destruct] */

void FUN_1068f7f70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068f7fac; end: 1068f8993; -[SCDiscoverFeedNotificationProcessorsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f7fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined8 uVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  
  puVar1 = PTR_PTR_1126cee10;
  _objc_alloc();
  lVar60 = (long)_DAT_1127534e0;
  lVar2 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = (long)_DAT_1127534e4;
  lVar4 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_1127534e8;
  lVar6 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = (long)_DAT_1127534ec;
  lVar8 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_1127534f0;
  lVar12 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf40000();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_1127534f4;
  lVar15 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_1127534f8;
  lVar17 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = (long)_DAT_1127534fc;
  lVar19 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_112753500;
  lVar21 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar23 = lVar61;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112753504;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112753508;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = (long)_DAT_11275350c;
  lVar28 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_112753510;
  lVar34 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = (long)_DAT_112753514;
  lVar37 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_112753518;
  lVar39 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_11275351c;
  lVar41 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_112753520;
  lVar43 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = (long)_DAT_112753524;
  lVar45 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d1e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar14,lVar16,lVar18,lVar20,
                      lVar22,lVar23,lVar25,lVar27,lVar29,lVar31,lVar33,lVar36,lVar38,lVar40,lVar42,
                      lVar44,lVar46);
  uVar59 = *(undefined8 *)(param_1 + _DAT_112753528);
  *(undefined **)(param_1 + _DAT_112753528) = puVar1;
  _objc_release(uVar59);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar61);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126cee18;
  _objc_alloc();
  lVar60 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar39 = lVar60;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar41 = lVar48;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar43 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar28 = lVar49;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar30 = lVar50;
  func_0x00010bf40000();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar30;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar26 = lVar52;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar34 = lVar51;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + lVar47;
  _objc_loadWeakRetained();
  lVar37 = lVar47;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar24 = lVar4;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar10 = lVar62;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar12 = lVar63;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar15 = lVar53;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar19 = lVar54;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar21 = lVar55;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar61 = lVar56;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar8 = lVar57;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar6 = lVar58;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d000(puVar1,param_2,lVar39,lVar41,lVar43,lVar28,lVar32,lVar26,lVar34,lVar37,lVar24,
                      lVar10,lVar12,lVar17,lVar19,lVar21,lVar61,lVar8,lVar6);
  uVar59 = *(undefined8 *)(param_1 + _DAT_11275352c);
  *(undefined **)(param_1 + _DAT_11275352c) = puVar1;
  _objc_release(uVar59);
  _objc_release(lVar6);
  _objc_release(lVar58);
  _objc_release(lVar8);
  _objc_release(lVar57);
  _objc_release(lVar61);
  _objc_release(lVar56);
  _objc_release(lVar21);
  _objc_release(lVar55);
  _objc_release(lVar19);
  _objc_release(lVar54);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar53);
  _objc_release(lVar12);
  _objc_release(lVar63);
  _objc_release(lVar10);
  _objc_release(lVar62);
  _objc_release(lVar24);
  _objc_release(lVar4);
  _objc_release(lVar37);
  _objc_release(lVar47);
  _objc_release(lVar34);
  _objc_release(lVar51);
  _objc_release(lVar26);
  _objc_release(lVar52);
  _objc_release(lVar32);
  _objc_release(lVar30);
  _objc_release(lVar50);
  _objc_release(lVar28);
  _objc_release(lVar49);
  _objc_release(lVar43);
  _objc_release(lVar2);
  _objc_release(lVar41);
  _objc_release(lVar48);
  _objc_release(lVar39);
  _objc_release(lVar60);
  lVar2 = param_1;
  FUN_1068f8994();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  FUN_1068f8994(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068f8994; end: 1068f89b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f8994(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112753530);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f89b8; end: 1068f8abb; -[SCDiscoverFeedNotificationProcessorsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f89b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_112753530;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  puStack_48 = PTR_PTR_1126f3c38;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f8abc; end: 1068f8c2b; -[SCDiscoverFeedNotificationProcessorsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f8abc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753524);
  _objc_destroyWeak(param_1 + _DAT_11275351c);
  _objc_destroyWeak(param_1 + _DAT_112753520);
  _objc_destroyWeak(param_1 + _DAT_112753518);
  _objc_destroyWeak(param_1 + _DAT_112753514);
  _objc_destroyWeak(param_1 + _DAT_112753510);
  _objc_destroyWeak(param_1 + _DAT_1127534e4);
  _objc_destroyWeak(param_1 + _DAT_1127534f0);
  _objc_destroyWeak(param_1 + _DAT_1127534f4);
  _objc_destroyWeak(param_1 + _DAT_1127534fc);
  _objc_destroyWeak(param_1 + _DAT_1127534f8);
  _objc_destroyWeak(param_1 + _DAT_1127534ec);
  _objc_destroyWeak(param_1 + _DAT_1127534e8);
  _objc_destroyWeak(param_1 + _DAT_112753530);
  _objc_destroyWeak(param_1 + _DAT_1127534e0);
  _objc_destroyWeak(param_1 + _DAT_112753500);
  _objc_destroyWeak(param_1 + _DAT_112753504);
  _objc_destroyWeak(param_1 + _DAT_11275350c);
  _objc_destroyWeak(param_1 + _DAT_112753508);
  _objc_destroyWeak(param_1 + _DAT_112753534);
  _objc_storeStrong(param_1 + _DAT_112753528,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275352c,0);
  return;
}



/* Entry: 1068f8c2c; end: 1068f912f; -[SCDiscoverFeedOperaServiceProvider _publisherPagePropertiesManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f8c2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  lVar1 = param_1 + _DAT_112753538;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126cee28;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11275353c;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112753540;
  lVar5 = lVar19;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112753544;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112753574;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar27;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_1068f9130(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf0b0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_1068f9130(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0478e0(puVar3,param_2,lVar4,lVar6,lVar9,lVar28,lVar11,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar15 = PTR_PTR_1126cee30;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112753548;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c23fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11275354c;
  _objc_loadWeakRetained();
  lVar13 = lVar7;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753550;
  _objc_loadWeakRetained();
  lVar14 = lVar4;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112753554;
  _objc_loadWeakRetained();
  lVar16 = lVar5;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112753558;
  _objc_loadWeakRetained();
  lVar17 = lVar6;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275355c;
  _objc_loadWeakRetained();
  lVar18 = lVar8;
  func_0x00010bfe9f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112753560;
  lVar9 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar21 = lVar9;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar22 = lVar27;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar23 = lVar28;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112753564;
  _objc_loadWeakRetained();
  lVar24 = lVar10;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112753568;
  _objc_loadWeakRetained();
  lVar25 = lVar11;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275356c;
  _objc_loadWeakRetained();
  lVar26 = param_1;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e4e0(puVar15,param_2,lVar2,puVar3,lVar12,lVar13,lVar14,lVar16,FUN_106903a98,lVar17,
                      lVar18,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,lVar26);
  _objc_release(lVar26);
  _objc_release(param_1);
  _objc_release(lVar25);
  _objc_release(lVar11);
  _objc_release(lVar24);
  _objc_release(lVar10);
  _objc_release(lVar23);
  _objc_release(lVar28);
  _objc_release(lVar22);
  _objc_release(lVar27);
  _objc_release(lVar21);
  _objc_release(lVar9);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1068f9130; end: 1068f9153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f9130(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112753578);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068f9154; end: 1068f92c7; -[SCDiscoverFeedOperaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f9154(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275356c);
  _objc_destroyWeak(param_1 + _DAT_112753568);
  _objc_destroyWeak(param_1 + _DAT_112753564);
  _objc_destroyWeak(param_1 + _DAT_112753560);
  _objc_destroyWeak(param_1 + _DAT_112753544);
  _objc_destroyWeak(param_1 + _DAT_11275355c);
  _objc_destroyWeak(param_1 + _DAT_112753578);
  _objc_destroyWeak(param_1 + _DAT_112753554);
  _objc_destroyWeak(param_1 + _DAT_112753550);
  _objc_destroyWeak(param_1 + _DAT_11275354c);
  _objc_destroyWeak(param_1 + _DAT_112753548);
  _objc_destroyWeak(param_1 + _DAT_112753574);
  _objc_destroyWeak(param_1 + _DAT_11275353c);
  _objc_destroyWeak(param_1 + _DAT_112753540);
  _objc_destroyWeak(param_1 + _DAT_112753538);
  _objc_destroyWeak(param_1 + _DAT_112753570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753558);
  return;
}



/* Entry: 1068f92c8; end: 1068f94db; -[SCDiscoverFeedQueryServiceProvider _createPrefetchHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f92c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1 + _DAT_11275357c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112753580;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar5 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1 + _DAT_112753584;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126cee40;
  _objc_alloc(PTR_PTR_1126cee40);
  func_0x00010c00cc80();
  func_0x00010befa120(puVar1,param_2,puVar7);
  lVar2 = param_1 + _DAT_112753588;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010bfb8c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar8 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar8);
  }
  puVar9 = PTR_PTR_1126cee48;
  _objc_alloc(PTR_PTR_1126cee48);
  puVar10 = puVar1;
  func_0x00010bf51e00(puVar1);
  param_1 = param_1 + _DAT_11275358c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c108640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0385a0(puVar9,param_2,puVar10,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1068f94dc; end: 1068f9d87; -[SCDiscoverFeedQueryServiceProvider _createDiscoverFeedQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f94dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  
  lVar1 = param_1 + _DAT_112753590;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753594;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753598;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar61 = (long)_DAT_11275359c;
  lVar1 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar58 = (long)_DAT_1127535a0;
  lVar1 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar58 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar7 = lVar58;
  func_0x00010c08d4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar58);
  lVar1 = param_1 + _DAT_1127535a4;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127535a8;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127535ac;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127535b0;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar58 = (long)_DAT_112753580;
  lVar1 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar58 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar13 = lVar58;
  func_0x00010c283040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar58);
  lVar1 = param_1 + _DAT_1127535b4;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127535b8;
  _objc_loadWeakRetained();
  lVar15 = lVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar16 = PTR_PTR_1126b1170;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127535bc;
  _objc_loadWeakRetained(lVar1);
  lVar58 = lVar1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar16,param_2,lVar58);
  _objc_release(lVar58);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127535c0;
  _objc_loadWeakRetained();
  lVar17 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127535c4;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753584;
  _objc_loadWeakRetained();
  lVar19 = lVar1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar20 = PTR_PTR_1126cee50;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127535c8;
  _objc_loadWeakRetained();
  lVar21 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_1127535cc;
  _objc_loadWeakRetained();
  lVar22 = lVar58;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_1127535d0;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_1127535d4;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_11275357c;
  lVar28 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar32 = lVar57;
  func_0x00010c08d420();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = (long)_DAT_1127535d8;
  lVar33 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = (long)_DAT_1127535dc;
  lVar35 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar37 = lVar59;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_1127535e0;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar40 = lVar61;
  func_0x00010bf82700();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_1127535e4;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_1127535e8;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_1127535ec;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c265c40();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_1127535f0;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_1127535f4;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_1127535f8;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c24b680();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar53 = lVar60;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + _DAT_1127535fc;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753600;
  _objc_loadWeakRetained();
  lVar56 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e560(puVar20,param_2,lVar2,lVar21,lVar3,lVar22,lVar4,lVar25,lVar27,lVar29,lVar31,
                      lVar32,lVar5,lVar8,lVar7,lVar34,lVar9,lVar6,lVar10,lVar11,lVar12,lVar36,lVar14
                      ,lVar37,lVar39,lVar40,lVar42,lVar15,puVar16,lVar44,lVar19,lVar17,lVar18,lVar13
                      ,lVar46,lVar48,lVar50,lVar52,lVar53,lVar55,lVar56);
  _objc_release(lVar56);
  _objc_release(param_1);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar60);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar61);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar59);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar57);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar58);
  _objc_release(lVar21);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1068f9d88; end: 1068f9ff7; -[SCDiscoverFeedQueryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068f9d88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127535fc);
  _objc_destroyWeak(param_1 + _DAT_1127535f4);
  _objc_destroyWeak(param_1 + _DAT_1127535f8);
  _objc_destroyWeak(param_1 + _DAT_1127535ec);
  _objc_destroyWeak(param_1 + _DAT_1127535f0);
  _objc_destroyWeak(param_1 + _DAT_112753600);
  _objc_destroyWeak(param_1 + _DAT_1127535c4);
  _objc_destroyWeak(param_1 + _DAT_1127535c0);
  _objc_destroyWeak(param_1 + _DAT_112753584);
  _objc_destroyWeak(param_1 + _DAT_1127535e8);
  _objc_destroyWeak(param_1 + _DAT_1127535bc);
  _objc_destroyWeak(param_1 + _DAT_112753624);
  _objc_destroyWeak(param_1 + _DAT_112753620);
  _objc_destroyWeak(param_1 + _DAT_112753610);
  _objc_destroyWeak(param_1 + _DAT_11275360c);
  _objc_destroyWeak(param_1 + _DAT_112753618);
  _objc_destroyWeak(param_1 + _DAT_112753614);
  _objc_destroyWeak(param_1 + _DAT_11275358c);
  _objc_destroyWeak(param_1 + _DAT_112753604);
  _objc_destroyWeak(param_1 + _DAT_112753608);
  _objc_destroyWeak(param_1 + _DAT_1127535e0);
  _objc_destroyWeak(param_1 + _DAT_1127535d8);
  _objc_destroyWeak(param_1 + _DAT_1127535b8);
  _objc_destroyWeak(param_1 + _DAT_1127535dc);
  _objc_destroyWeak(param_1 + _DAT_1127535b0);
  _objc_destroyWeak(param_1 + _DAT_1127535a8);
  _objc_destroyWeak(param_1 + _DAT_1127535a4);
  _objc_destroyWeak(param_1 + _DAT_1127535e4);
  _objc_destroyWeak(param_1 + _DAT_1127535d4);
  _objc_destroyWeak(param_1 + _DAT_1127535c8);
  _objc_destroyWeak(param_1 + _DAT_112753588);
  _objc_destroyWeak(param_1 + _DAT_112753580);
  _objc_destroyWeak(param_1 + _DAT_1127535d0);
  _objc_destroyWeak(param_1 + _DAT_112753598);
  _objc_destroyWeak(param_1 + _DAT_11275359c);
  _objc_destroyWeak(param_1 + _DAT_112753594);
  _objc_destroyWeak(param_1 + _DAT_1127535a0);
  _objc_destroyWeak(param_1 + _DAT_1127535b4);
  _objc_destroyWeak(param_1 + _DAT_11275361c);
  _objc_destroyWeak(param_1 + _DAT_11275357c);
  _objc_destroyWeak(param_1 + _DAT_1127535ac);
  _objc_destroyWeak(param_1 + _DAT_1127535cc);
  _objc_destroyWeak(param_1 + _DAT_112753590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753628);
  return;
}



/* Entry: 1068f9ff8; end: 1068fa013;  */

void FUN_1068f9ff8(void)

{
  _objc_opt_new(PTR_PTR_1126c2170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068fa014; end: 1068fa5a7; -[SCDiscoverFeedStoriesServiceProvider _createFriendStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068fa014(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cee68;
  _objc_alloc();
  lVar3 = param_1;
  FUN_1068fa618();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_1068fa618();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_1068fa618();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0001068fa63c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x0001068fa63c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11275363c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar32;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112753640;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar33;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_112753644;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar34;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar35 = 0;
  }
  else {
    lVar35 = param_1 + _DAT_112753638;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar35;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x0001068fa63c();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfb8d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_1 + _DAT_112753630;
    _objc_loadWeakRetained();
  }
  lVar19 = lVar36;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  FUN_1068fa618();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x0001068fa660();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x0001068fa660();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = param_1 + _DAT_11275364c;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar37;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = param_1 + _DAT_112753648;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar38;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_112753654;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar39;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = 0;
  if (param_1 != 0) {
    lVar30 = param_1 + _DAT_11275365c;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar30;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049940();
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar39);
  _objc_release(lVar28);
  _objc_release(lVar38);
  _objc_release(lVar27);
  _objc_release(lVar37);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar36);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar35);
  _objc_release(lVar15);
  _objc_release(lVar34);
  _objc_release(lVar14);
  _objc_release(lVar33);
  _objc_release(lVar13);
  _objc_release(lVar32);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068fa5a8; end: 1068fa617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068fa5a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112753658;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c260aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1068fa618; end: 1068fa683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068fa618(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112753634);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068fa684; end: 1068fa73f; -[SCDiscoverFeedStoriesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068fa684(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275365c);
  _objc_destroyWeak(param_1 + _DAT_112753658);
  _objc_destroyWeak(param_1 + _DAT_112753654);
  _objc_destroyWeak(param_1 + _DAT_112753650);
  _objc_destroyWeak(param_1 + _DAT_11275364c);
  _objc_destroyWeak(param_1 + _DAT_112753648);
  _objc_destroyWeak(param_1 + _DAT_112753644);
  _objc_destroyWeak(param_1 + _DAT_112753640);
  _objc_destroyWeak(param_1 + _DAT_11275363c);
  _objc_destroyWeak(param_1 + _DAT_112753638);
  _objc_destroyWeak(param_1 + _DAT_112753634);
  _objc_destroyWeak(param_1 + _DAT_112753630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275362c);
  return;
}



/* Entry: 1068fa740; end: 1068faccb; -[SCDiscoverFeedFriendStoriesDataCoordinator initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:snapchattersDataTracker:storiesDataCoordinator:customStoriesDataFetcher:friendStorySettingMutator:grapheneMetricsEmitter:circumstanceEngine:userSegmentsProvider:friendStoriesSyncer:currentUserId:blockedSnapchatterFetcher:creatorSettingsFetcher:creatorSettingsTracker:storiesConfigProvider:appLifecycleManager:appStartExperimentReader:creatorSubscriptionsInfoProvider:plusFeatureGating:] */

undefined8 *
FUN_1068fa740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f3c40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cee70;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    uVar2 = puVar1[0x11];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_release(param_10);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068faccc; end: 1068facfb;  */

void FUN_1068faccc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010806093c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1068facfc; end: 1068fadd3; -[SCDiscoverFeedFriendStoriesDataCoordinator fetchRankedFriendStoriesWithCompletion:] */

void FUN_1068facfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fadd4; end: 1068fae27;  */

void FUN_1068fadd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be13600(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068fae28; end: 1068faf27; -[SCDiscoverFeedFriendStoriesDataCoordinator fetchFriendStoriesWithIds:completion:] */

void FUN_1068fae28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068faf28; end: 1068faf7b;  */

void FUN_1068faf28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be11560(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068faf7c; end: 1068fb107; -[SCDiscoverFeedFriendStoriesDataCoordinator fetchUncachedFriendStoryWithUserId:completion:] */

void FUN_1068faf7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_58;
  _objc_copyWeak(auStack_60);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c25b4c0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar6);
  lVar3 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    lVar5 = *(long *)(param_3 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,0);
    }
  }
  else {
    puVar4 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined1 *)0x0) {
      func_0x00010be98100(lVar3);
    }
    else {
      func_0x00010be29be0(lVar3);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1068fb108; end: 1068fb1af;  */

void FUN_1068fb108(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    lVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010be98100(lVar1);
    }
    else {
      func_0x00010be29be0(lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fb1b0; end: 1068fb2af; -[SCDiscoverFeedFriendStoriesDataCoordinator fetchStoriesSummaryInfoForUnviewedAndUnmutedStories:completion:] */

void FUN_1068fb1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_4);
  uStack_40 = param_3;
  func_0x00010c11f8c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1068fb2b0; end: 1068fb34b;  */

void FUN_1068fb2b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010be97e40(lVar1);
    }
    else {
      func_0x00010be14820(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fb34c; end: 1068fb353; -[SCDiscoverFeedFriendStoriesDataCoordinator addListener:] */

void FUN_1068fb34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1068fb354; end: 1068fb35b; -[SCDiscoverFeedFriendStoriesDataCoordinator removeListener:] */

void FUN_1068fb354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1068fb35c; end: 1068fb3a3; -[SCDiscoverFeedFriendStoriesDataCoordinator observeFriendStoriesFetching] */

void FUN_1068fb35c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068fb3a4; end: 1068fb3eb; -[SCDiscoverFeedFriendStoriesDataCoordinator observeFriendStoriesPredictedSessionDepth] */

void FUN_1068fb3a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068fb3ec; end: 1068fb477; -[SCDiscoverFeedFriendStoriesDataCoordinator _handleFetchedSummaryInfo:completion:] */

void FUN_1068fb3ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if ((lVar1 == 1) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 3)) {
    func_0x00010be1e260(param_1,param_2,param_3,param_4);
  }
  else {
    func_0x00010be98100(param_1,param_2,0,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068fb478; end: 1068fb5e3; -[SCDiscoverFeedFriendStoriesDataCoordinator _getCreatorSubscriptionsAndHandleFetchedSummaryInfo:completion:] */

void FUN_1068fb478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa0b80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be29c00(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfc4340(uVar2);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fb5e4; end: 1068fb637;  */

void FUN_1068fb5e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068fb638; end: 1068fb6a7; -[SCDiscoverFeedFriendStoriesDataCoordinator _useVectorStarBadge] */

undefined8 FUN_1068fb638(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf71a40(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1068fb6a8; end: 1068fb94f; -[SCDiscoverFeedFriendStoriesDataCoordinator _handleFetchedSummaryInfo:creatorSubscriptions:completion:] */

void FUN_1068fb6a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bee6980();
  _objc_initWeak(auStack_58,param_1);
  lVar2 = param_3;
  func_0x00010c259580();
  if (lVar2 == 0x20) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1068fb950;
    puStack_88 = &UNK_1109494a0;
    puVar5 = auStack_68;
    _objc_copyWeak(puVar5,auStack_58);
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_3);
    lStack_80 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    uStack_60 = (char)lVar1;
    func_0x00010bf62500(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    uVar3 = uStack_70;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_b0;
    _objc_copyWeak(puVar5,auStack_58);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_a8 = (char)lVar1;
    func_0x00010c2448c0(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    uVar3 = param_5;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fb950; end: 1068fba3b;  */

void FUN_1068fb950(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_1068fba3c(uVar2,0,param_2,uVar6,uVar3,*(undefined8 *)(param_1 + 0x28),
                  *(undefined1 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be98100(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fba3c; end: 1068fbf07;  */

void FUN_1068fba3c(double param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uStack_90;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07fc80();
  if (((uVar2 & 1) == 0) && (param_4 != 0)) {
    func_0x00010c078420();
  }
  _objc_release(uVar1);
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_7);
  lVar3 = param_2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cee80;
    _objc_alloc();
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_3;
      func_0x000108f47298(param_3);
    }
    func_0x000108f47180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05acc0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    if (param_3 != 0) {
      func_0x000100bf119c();
    }
    puVar15 = PTR_PTR_1126cee88;
    _objc_alloc();
    func_0x00010c259580();
    uVar9 = param_5;
    func_0x00010c0d1140();
    func_0x000109021670();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1180(param_5);
    if (param_1 == 0.0) {
      uStack_90 = 0;
    }
    else {
      uStack_90 = param_5;
      func_0x00010c0d1180();
      func_0x000109021670();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar10 = param_5;
    func_0x00010c0d1120(param_5);
    func_0x000109021670();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010bf9c720();
    func_0x000109021670();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfddf20();
    func_0x00010bfd3da0();
    uVar12 = param_5;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_5;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ddc60();
    func_0x00010c0de440();
    func_0x00010bf4e300();
    func_0x00010bf4e320();
    uVar14 = param_5;
    func_0x00010c0fd5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259d00();
    func_0x00010c04da80();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    if (param_1 != 0.0) {
      _objc_release(uStack_90);
    }
    _objc_release(uVar9);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1068fbf08; end: 1068fbfef;  */

void FUN_1068fbf08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_1068fba3c(uVar2,param_2,0,uVar5,uVar3,*(undefined8 *)(param_1 + 0x28),
                  *(undefined1 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be98100(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fbff0; end: 1068fc037; -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdateSummaryInfo:] */

void FUN_1068fbff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cee78;
  func_0x00010c262940(PTR_PTR_1126cee78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be14840(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068fc038; end: 1068fc07f; -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdateCustomStoriesWithPublicationIds:] */

void FUN_1068fc038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cee78;
  func_0x00010bf62700(PTR_PTR_1126cee78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be14840(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


