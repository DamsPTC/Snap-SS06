/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afc629c; end: 10afc631f; +[SCFriendsFeedChatMessage activeChatWithActionPerformer:isReceivedUnreadChat:isChatMention:unreadChatCount:] */

void FUN_10afc629c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
  puVar2[0x19] = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6320; end: 10afc637b; +[SCFriendsFeedChatMessage conversationSuggestionWithIsReceivedUnreadChat:] */

void FUN_10afc6320(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  puVar2[0x5a] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc637c; end: 10afc63ef; +[SCFriendsFeedChatMessage giftWithActionPerformer:isReceivedUnreadChat:] */

void FUN_10afc637c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
  puVar2[0x58] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc63f0; end: 10afc644b; +[SCFriendsFeedChatMessage groupNameChangeWithIsReceivedUnreadChat:] */

void FUN_10afc63f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  puVar2[0x31] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc644c; end: 10afc6497; +[SCFriendsFeedChatMessage inMyContacts] */

void FUN_10afc644c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6498; end: 10afc64f3; +[SCFriendsFeedChatMessage joinedFromContactsWithIsReceivedUnreadChat:] */

void FUN_10afc6498(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  puVar2[0x59] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc64f4; end: 10afc6577; +[SCFriendsFeedChatMessage participantChangeWithActionPerformer:isReceivedUnreadChat:groupUpdateType:] */

void FUN_10afc64f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
  puVar2[0x40] = param_4;
  *(undefined8 *)(puVar2 + 0x48) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6578; end: 10afc65fb; +[SCFriendsFeedChatMessage pollCreatedWithActionPerformer:isReceivedUnreadChat:unreadChatCount:] */

void FUN_10afc6578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_release(uVar3);
  puVar2[0x80] = param_4;
  *(undefined8 *)(puVar2 + 0x88) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc65fc; end: 10afc667f; +[SCFriendsFeedChatMessage pollVoteWithActionPerformer:isReceivedUnreadChat:unreadChatCount:] */

void FUN_10afc65fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xe;
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  _objc_release(uVar3);
  puVar2[0x98] = param_4;
  *(undefined8 *)(puVar2 + 0xa0) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6680; end: 10afc66db; +[SCFriendsFeedChatMessage remixedChatWallpaperWithIsReceivedUnreadChat:] */

void FUN_10afc6680(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
  puVar2[0x69] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc66dc; end: 10afc6727; +[SCFriendsFeedChatMessage savedStory] */

void FUN_10afc66dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6728; end: 10afc6783; +[SCFriendsFeedChatMessage streakRestoreWithStreakCount:] */

void FUN_10afc6728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  *(undefined8 *)(puVar2 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6784; end: 10afc67df; +[SCFriendsFeedChatMessage updateChatWallpaperWithIsReceivedUnreadChat:] */

void FUN_10afc6784(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  puVar2[0x68] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc67e0; end: 10afc6853; +[SCFriendsFeedChatMessage updateStreakStatusWithIsReceivedUnreadChat:streakStatusUpdateType:] */

void FUN_10afc67e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
  puVar2[0x6a] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc6854; end: 10afc68c7; +[SCFriendsFeedChatMessage voiceNoteWithActionPerformer:isReceivedUnreadChat:] */

void FUN_10afc6854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7880;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
  puVar2[0x30] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc68c8; end: 10afc68eb; -[SCFriendsFeedChatMessage copyWithZone:] */

undefined8 FUN_10afc68c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc68ec; end: 10afc6a23; -[SCFriendsFeedChatMessage hash] */

void FUN_10afc68ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_e8 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_e0 = (ulong)*(byte *)(param_1 + 0x19);
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_d0 = *(undefined8 *)(param_1 + 0x28);
  lStack_d8 = -lVar4;
  if (-1 < lVar4) {
    lStack_d8 = lVar4;
  }
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uStack_c8 = (ulong)*(byte *)(param_1 + 0x30);
  uStack_c0 = (ulong)*(byte *)(param_1 + 0x31);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_b0 = (ulong)*(byte *)(param_1 + 0x40);
  lVar4 = *(long *)(param_1 + 0x48);
  uStack_a0 = *(undefined8 *)(param_1 + 0x50);
  lStack_a8 = -lVar4;
  if (-1 < lVar4) {
    lStack_a8 = lVar4;
  }
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uStack_98 = (ulong)*(byte *)(param_1 + 0x58);
  uStack_90 = (ulong)*(byte *)(param_1 + 0x59);
  uStack_88 = (ulong)*(byte *)(param_1 + 0x5a);
  lVar4 = *(long *)(param_1 + 0x60);
  lStack_80 = -lVar4;
  if (-1 < lVar4) {
    lStack_80 = lVar4;
  }
  uStack_78 = (ulong)*(byte *)(param_1 + 0x68);
  uStack_70 = (ulong)*(byte *)(param_1 + 0x69);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x6a);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0x80);
  lVar4 = *(long *)(param_1 + 0x88);
  uStack_40 = *(undefined8 *)(param_1 + 0x90);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x98);
  lVar4 = *(long *)(param_1 + 0xa0);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar3 = &uStack_f8;
  func_0x000107c3191c(puVar3,0x1a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_128 = PTR_PTR_112703978;
  puStack_130 = puVar3;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc6a24; end: 10afc6a67; -[SCFriendsFeedChatMessage internalInit] */

void FUN_10afc6a24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc6a68; end: 10afc6cb7; -[SCFriendsFeedChatMessage isEqual:] */

long FUN_10afc6a68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc6c90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc6c9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
             (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
            (*(char *)(param_1 + 0x19) == *(char *)(param_3 + 0x19))) &&
           ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
            (*(char *)(param_1 + 0x30) == *(char *)(param_3 + 0x30))))))) &&
         (*(char *)(param_1 + 0x31) == *(char *)(param_3 + 0x31))) &&
        (((*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
         ((*(char *)(param_1 + 0x58) == *(char *)(param_3 + 0x58) &&
          (((*(char *)(param_1 + 0x59) == *(char *)(param_3 + 0x59) &&
            (*(char *)(param_1 + 0x5a) == *(char *)(param_3 + 0x5a))) &&
           (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))))) &&
       (((*(char *)(param_1 + 0x68) == *(char *)(param_3 + 0x68) &&
         (*(char *)(param_1 + 0x69) == *(char *)(param_3 + 0x69))) &&
        ((*(char *)(param_1 + 0x6a) == *(char *)(param_3 + 0x6a) &&
         (((*(char *)(param_1 + 0x80) == *(char *)(param_3 + 0x80) &&
           (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) &&
          ((*(char *)(param_1 + 0x98) == *(char *)(param_3 + 0x98) &&
           (*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0))))))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x50);
            if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x70);
              if ((lVar3 == *(long *)(param_3 + 0x70)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x78);
                if ((lVar3 == *(long *)(param_3 + 0x78)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x90);
                  if (lVar3 != *(long *)(param_3 + 0x90)) {
                    func_0x00010c071ae0();
                    goto LAB_10afc6c9c;
                  }
                  goto LAB_10afc6c90;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afc6c9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc6cb8; end: 10afc6fd7; -[SCFriendsFeedChatMessage matchActiveChat:voiceNote:groupNameChange:participantChange:gift:joinedFromContacts:conversationSuggestion:inMyContacts:streakRestore:savedStory:updateChatWallpaper:remixedChatWallpaper:updateStreakStatus:pollCreated:pollVote:] */

void FUN_10afc6cb8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16,
                  long param_17)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))
                (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x19),*(undefined8 *)(param_1 + 0x20));
    }
    break;
  case 1:
    if (param_4 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined1 *)(param_1 + 0x30);
    pcVar5 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
    goto code_r0x00010afc6ec4;
  case 2:
    if (param_5 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x31);
    pcVar5 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    goto code_r0x00010afc6f28;
  case 3:
    if (param_6 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined1 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    pcVar5 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    goto code_r0x00010afc6efc;
  case 4:
    if (param_7 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined1 *)(param_1 + 0x58);
    pcVar5 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
code_r0x00010afc6ec4:
    (*pcVar5)(lVar1,uVar3,uVar2);
    break;
  case 5:
    if (param_8 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x59);
    pcVar5 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    goto code_r0x00010afc6f28;
  case 6:
    if (param_9 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x5a);
    pcVar5 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    goto code_r0x00010afc6f28;
  case 7:
    if (param_10 == 0) break;
    pcVar5 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    goto code_r0x00010afc6ea4;
  case 8:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))(param_11,*(undefined8 *)(param_1 + 0x60));
    }
    break;
  case 9:
    if (param_12 == 0) break;
    pcVar5 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
code_r0x00010afc6ea4:
    (*pcVar5)(lVar1);
    break;
  case 10:
    if (param_13 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x68);
    pcVar5 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    goto code_r0x00010afc6f28;
  case 0xb:
    if (param_14 == 0) break;
    uVar2 = *(undefined1 *)(param_1 + 0x69);
    pcVar5 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
code_r0x00010afc6f28:
    (*pcVar5)(lVar1,uVar2);
    break;
  case 0xc:
    if (param_15 != 0) {
      (**(code **)(param_15 + 0x10))
                (param_15,*(undefined1 *)(param_1 + 0x6a),*(undefined8 *)(param_1 + 0x70));
    }
    break;
  case 0xd:
    if (param_16 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar2 = *(undefined1 *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    lVar1 = param_16;
    goto code_r0x00010afc6ef8;
  case 0xe:
    if (param_17 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = *(undefined1 *)(param_1 + 0x98);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    lVar1 = param_17;
code_r0x00010afc6ef8:
    pcVar5 = *(code **)(lVar1 + 0x10);
code_r0x00010afc6efc:
    (*pcVar5)(lVar1,uVar3,uVar2,uVar4);
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afc6fd8; end: 10afc7043; -[SCFriendsFeedChatMessage .cxx_destruct] */

void FUN_10afc6fd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc7044; end: 10afc70b3; -[SCFriendsFeedComboSnapItemInfo hash] */

ulong * FUN_10afc7044(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_28 = (ulong)*(byte *)(param_1 + 10);
  lVar3 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((((char)puVar1[1] != (char)param_3[1] ||
           (*(char *)((long)puVar1 + 9) != *(char *)((long)param_3 + 9))) ||
          (*(char *)((long)puVar1 + 10) != *(char *)((long)param_3 + 10))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(puVar1[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afc70b4; end: 10afc716b; -[SCFriendsFeedComboSnapItemInfo isEqual:] */

bool FUN_10afc70b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afc716c; end: 10afc7173; -[SCFriendsFeedComboSnapItemInfo hasNewChat] */

undefined1 FUN_10afc716c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc7174; end: 10afc717b; -[SCFriendsFeedComboSnapItemInfo hasMultipleNewSnaps] */

undefined1 FUN_10afc7174(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afc717c; end: 10afc7183; -[SCFriendsFeedComboSnapItemInfo hasMultipleNewChats] */

undefined1 FUN_10afc717c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afc7184; end: 10afc718b; -[SCFriendsFeedComboSnapItemInfo unreadChatCount] */

undefined8 FUN_10afc7184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc718c; end: 10afc71af; -[SCFriendsFeedItem copyWithZone:] */

undefined8 FUN_10afc718c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc71b0; end: 10afc7253; -[SCFriendsFeedItem hash] */

undefined8 * FUN_10afc71b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined8 *)puVar3[3];
}



/* Entry: 10afc7254; end: 10afc725b; -[SCFriendsFeedItem entity] */

undefined8 FUN_10afc7254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc725c; end: 10afc7263; -[SCFriendsFeedItem story] */

undefined8 FUN_10afc725c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc7264; end: 10afc72cf; +[SCFriendsFeedItemStory publicUserStoryWithPublicUserStory:] */

void FUN_10afc7264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb170;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc72d0; end: 10afc733b; +[SCFriendsFeedItemStory spotlightStoryWithSpotlightStory:] */

void FUN_10afc72d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cb170;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc733c; end: 10afc73bf; -[SCFriendsFeedItemStory hash] */

void FUN_10afc733c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = puVar3[1];
  if (lVar4 == 2) {
    if (param_5 == 0) goto LAB_10afc7448;
    lVar5 = 0x20;
    lVar4 = param_5;
  }
  else if (lVar4 == 1) {
    if (param_4 == 0) goto LAB_10afc7448;
    lVar5 = 0x18;
    lVar4 = param_4;
  }
  else {
    if ((lVar4 != 0) || (param_3 == 0)) goto LAB_10afc7448;
    lVar5 = 0x10;
    lVar4 = param_3;
  }
  (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)((long)puVar3 + lVar5));
LAB_10afc7448:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afc73c0; end: 10afc746b; -[SCFriendsFeedItemStory matchStory:publicUserStory:spotlightStory:] */

void FUN_10afc73c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10afc7448;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10afc7448;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10afc7448;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10afc7448:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afc746c; end: 10afc748f; -[SCFriendsFeedItemStream copyWithZone:] */

undefined8 FUN_10afc746c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc7490; end: 10afc753f; -[SCFriendsFeedItemStream hash] */

undefined8 * FUN_10afc7490(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
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
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afc7638:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afc7644;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10afc7644;
                  }
                  goto LAB_10afc7638;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afc7644:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afc7540; end: 10afc765f; -[SCFriendsFeedItemStream isEqual:] */

long FUN_10afc7540(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc7638:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc7644;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10afc7644;
                  }
                  goto LAB_10afc7638;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afc7644:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc7660; end: 10afc7667; -[SCFriendsFeedItemStream friendsFeedItems] */

undefined8 FUN_10afc7660(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc7668; end: 10afc766f; -[SCFriendsFeedItemStream quickAddSnapchatters] */

undefined8 FUN_10afc7668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc7670; end: 10afc7677; -[SCFriendsFeedItemStream incomingSnapchatters] */

undefined8 FUN_10afc7670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc7678; end: 10afc767f; -[SCFriendsFeedItemStream contactSnapchatters] */

undefined8 FUN_10afc7678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc7680; end: 10afc7687; -[SCFriendsFeedItemStream contactNonSnapchatters] */

undefined8 FUN_10afc7680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afc7688; end: 10afc768f; -[SCFriendsFeedItemStream fetchContexts] */

undefined8 FUN_10afc7688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afc7690; end: 10afc7697; -[SCFriendsFeedItemStream trackingIdentifier] */

undefined8 FUN_10afc7690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afc7698; end: 10afc771f; -[SCFriendsFeedMediaSaveMessage initWithActionPerformer:isReceivedUnread:] */

undefined1 *
FUN_10afc7698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127039a0;
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



/* Entry: 10afc7720; end: 10afc7743; -[SCFriendsFeedMediaSaveMessage copyWithZone:] */

undefined8 FUN_10afc7720(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc7744; end: 10afc77af; -[SCFriendsFeedMediaSaveMessage hash] */

undefined8 * FUN_10afc7744(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc7834;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10afc7834;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afc7834;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10afc7834:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afc77b0; end: 10afc784f; -[SCFriendsFeedMediaSaveMessage isEqual:] */

long FUN_10afc77b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc7834;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afc7834;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afc7834;
    }
  }
  lVar3 = 1;
LAB_10afc7834:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc7850; end: 10afc7857; -[SCFriendsFeedMediaSaveMessage actionPerformer] */

undefined8 FUN_10afc7850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc7858; end: 10afc785f; -[SCFriendsFeedMediaSaveMessage isReceivedUnread] */

undefined1 FUN_10afc7858(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc7860; end: 10afc786b; -[SCFriendsFeedMediaSaveMessage .cxx_destruct] */

void FUN_10afc7860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc786c; end: 10afc78d7; +[SCFriendsFeedMessageContent callWithCallContent:] */

void FUN_10afc786c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc78d8; end: 10afc7943; +[SCFriendsFeedMessageContent chatWithChat:] */

void FUN_10afc78d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7944; end: 10afc79af; +[SCFriendsFeedMessageContent mediaSaveWithMediaSave:] */

void FUN_10afc7944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc79b0; end: 10afc7a1b; +[SCFriendsFeedMessageContent multiRecipientWithMultiRecipientContent:] */

void FUN_10afc79b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7a1c; end: 10afc7a87; +[SCFriendsFeedMessageContent reactionWithReaction:] */

void FUN_10afc7a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7a88; end: 10afc7af3; +[SCFriendsFeedMessageContent replyWithReply:] */

void FUN_10afc7a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7af4; end: 10afc7b5f; +[SCFriendsFeedMessageContent screenshotWithScreenshot:] */

void FUN_10afc7af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7828;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7b60; end: 10afc7c1f; -[SCFriendsFeedMessageContent hash] */

undefined8 * FUN_10afc7b60(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afc7d40:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afc7d4c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
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
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10afc7d4c;
                    }
                    goto LAB_10afc7d40;
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
LAB_10afc7d4c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afc7c20; end: 10afc7d67; -[SCFriendsFeedMessageContent isEqual:] */

long FUN_10afc7c20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc7d40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc7d4c;
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
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10afc7d4c;
                    }
                    goto LAB_10afc7d40;
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
LAB_10afc7d4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc7d68; end: 10afc7ddf; -[SCFriendsFeedMessageContent .cxx_destruct] */

void FUN_10afc7d68(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10afc7de0; end: 10afc7e27; -[SCFriendsFeedMultiRecipientContent initWithSendingState:] */

void FUN_10afc7de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127039b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10afc7e28; end: 10afc7e4b; -[SCFriendsFeedMultiRecipientContent copyWithZone:] */

undefined8 FUN_10afc7e28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc7e4c; end: 10afc7e5b; -[SCFriendsFeedMultiRecipientContent hash] */

long FUN_10afc7e4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10afc7e5c; end: 10afc7ee3; -[SCFriendsFeedMultiRecipientContent isEqual:] */

bool FUN_10afc7e5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afc7ee4; end: 10afc7eeb; -[SCFriendsFeedMultiRecipientContent sendingState] */

undefined8 FUN_10afc7ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc7eec; end: 10afc7f4f; +[SCFriendsFeedPresenceContent callWithActiveCallContent:] */

void FUN_10afc7eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d77e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7f50; end: 10afc7fbb; +[SCFriendsFeedPresenceContent gamingWithGamingContent:] */

void FUN_10afc7f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d77e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc7fbc; end: 10afc8027; +[SCFriendsFeedPresenceContent presentWithPresentContent:] */

void FUN_10afc7fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d77e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc8028; end: 10afc8093; +[SCFriendsFeedPresenceContent typingWithTypingContent:] */

void FUN_10afc8028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d77e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc8094; end: 10afc80b7; -[SCFriendsFeedPresenceContent copyWithZone:] */

undefined8 FUN_10afc8094(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc80b8; end: 10afc8147; -[SCFriendsFeedPresenceContent hash] */

void FUN_10afc80b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1127039b8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc8148; end: 10afc818b; -[SCFriendsFeedPresenceContent internalInit] */

void FUN_10afc8148(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127039b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc818c; end: 10afc8273; -[SCFriendsFeedPresenceContent isEqual:] */

long FUN_10afc818c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc824c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc8258;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afc8258;
            }
            goto LAB_10afc824c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afc8258:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc8274; end: 10afc835b; -[SCFriendsFeedPresenceContent matchCall:typing:gaming:present:] */

void FUN_10afc8274(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10afc832c;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10afc832c;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10afc832c;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_10afc832c;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10afc832c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afc835c; end: 10afc83a3; -[SCFriendsFeedPresenceContent .cxx_destruct] */

void FUN_10afc835c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc83a4; end: 10afc844f; +[SCFriendsFeedReactionContent reactionWithIsSnap:isReceivedUnread:reactedBy:reactedTo:] */

void FUN_10afc83a4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d7830;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  puVar2[0x11] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc8450; end: 10afc84bb; +[SCFriendsFeedReactionContent removedWithActionPerformer:] */

void FUN_10afc8450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7830;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc84bc; end: 10afc84df; -[SCFriendsFeedReactionContent copyWithZone:] */

undefined8 FUN_10afc84bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc84e0; end: 10afc8573; -[SCFriendsFeedReactionContent hash] */

void FUN_10afc84e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x11);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1127039c0;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc8574; end: 10afc85b7; -[SCFriendsFeedReactionContent internalInit] */

void FUN_10afc8574(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127039c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc85b8; end: 10afc86a7; -[SCFriendsFeedReactionContent isEqual:] */

long FUN_10afc85b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc8680:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc868c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
        (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10afc868c;
          }
          goto LAB_10afc8680;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afc868c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc86a8; end: 10afc8737; -[SCFriendsFeedReactionContent matchReaction:removed:] */

void FUN_10afc86a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11),
               *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afc8738; end: 10afc8773; -[SCFriendsFeedReactionContent .cxx_destruct] */

void FUN_10afc8738(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afc8774; end: 10afc887b; +[SCFriendsFeedConversationSubtypeMetadata campaignWithAdResponseBytes:isUserInputDisabled:feedInsertionIndex:adSyncAttemptId:chatHeadline:isBot:] */

void FUN_10afc8774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d7838;
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
  puVar2[0x18] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar2[0x38] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc887c; end: 10afc8947; -[SCFriendsFeedConversationSubtypeMetadata hash] */

undefined8 * FUN_10afc887c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afc8a98:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc8aa4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[1] == param_3[1] && (*(char *)(puVar3 + 3) == *(char *)(param_3 + 3))) &&
         (*(char *)(puVar3 + 7) == *(char *)(param_3 + 7))) &&
        (*(char *)(puVar3 + 9) == *(char *)(param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[8];
              if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[10];
                if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[0xb];
                  if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[0xc];
                    if (puVar6 != (undefined8 *)param_3[0xc]) {
                      func_0x00010c071ae0();
                      goto LAB_10afc8aa4;
                    }
                    goto LAB_10afc8a98;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afc8aa4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afc8948; end: 10afc8abf; -[SCFriendsFeedConversationSubtypeMetadata isEqual:] */

long FUN_10afc8948(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc8a98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc8aa4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))) &&
        (*(char *)(param_1 + 0x48) == *(char *)(param_3 + 0x48))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if (lVar3 != *(long *)(param_3 + 0x60)) {
                      func_0x00010c071ae0();
                      goto LAB_10afc8aa4;
                    }
                    goto LAB_10afc8a98;
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
LAB_10afc8aa4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc8ac0; end: 10afc8b37; -[SCFriendsFeedConversationSubtypeMetadata .cxx_destruct] */

void FUN_10afc8ac0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc8b38; end: 10afc8bfb; -[SCFriendsFeedReplyContent initWithIsReceivedUnread:replyMessageSenderId:quotedMessageSenderId:isReplyToStory:] */

undefined1 *
FUN_10afc8b38(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127039d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc8bfc; end: 10afc8c1f; -[SCFriendsFeedReplyContent copyWithZone:] */

undefined8 FUN_10afc8bfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc8c20; end: 10afc8c9f; -[SCFriendsFeedReplyContent hash] */

ulong * FUN_10afc8c20(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afc8d40:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10afc8d4c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((char)puVar3[1] == (char)param_3[1] &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      uVar5 = puVar3[2];
      if ((uVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        puVar6 = (ulong *)puVar3[3];
        if (puVar6 != (ulong *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10afc8d4c;
        }
        goto LAB_10afc8d40;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10afc8d4c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afc8ca0; end: 10afc8d67; -[SCFriendsFeedReplyContent isEqual:] */

long FUN_10afc8ca0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc8d40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc8d4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10afc8d4c;
        }
        goto LAB_10afc8d40;
      }
    }
    lVar3 = 0;
  }
LAB_10afc8d4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc8d68; end: 10afc8d6f; -[SCFriendsFeedReplyContent isReceivedUnread] */

undefined1 FUN_10afc8d68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc8d70; end: 10afc8d77; -[SCFriendsFeedReplyContent replyMessageSenderId] */

undefined8 FUN_10afc8d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc8d78; end: 10afc8d7f; -[SCFriendsFeedReplyContent quotedMessageSenderId] */

undefined8 FUN_10afc8d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc8d80; end: 10afc8d87; -[SCFriendsFeedReplyContent isReplyToStory] */

undefined1 FUN_10afc8d80(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afc8d88; end: 10afc8db7; -[SCFriendsFeedReplyContent .cxx_destruct] */

void FUN_10afc8d88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc8db8; end: 10afc8e47; -[SCFriendsFeedScreenshotMessage initWithActionPerformer:isReceivedUnread:isScreenRecording:] */

undefined1 *
FUN_10afc8db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127039d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc8e48; end: 10afc8e6b; -[SCFriendsFeedScreenshotMessage copyWithZone:] */

undefined8 FUN_10afc8e48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


