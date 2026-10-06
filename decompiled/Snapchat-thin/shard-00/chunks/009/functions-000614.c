/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bc4c54; end: 100bc4c57;  */

void FUN_100bc4c54(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  lVar3 = 0x112d5b0a0;
  puVar4 = (ulong *)0x112d5b228;
  plVar5 = (long *)&UNK_10d9223b0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0), lVar3 != 0)) {
    puVar4 = (ulong *)0x112d36e60;
    plVar5 = (long *)&UNK_10d901170;
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100bc4c58; end: 100bc4c5b; -[_TtC17LensFetchExternal18BitmojiIconFetcher lensAssetDownloadObservable] */

void FUN_100bc4c58(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc4c5c; end: 100bc4c63; -[SCNMessagingFeedEntry notificationSettings] */

undefined8 FUN_100bc4c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100bc4c64; end: 100bc4ce7;  */

uint FUN_100bc4c64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c3f8dc(param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_100bc4cf0();
  func_0x000107c61170(uVar1);
  uVar1 = param_1;
  func_0x000107c3f018(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar1;
  FUN_100bc4cf0(uVar1);
  func_0x000107c61170(uVar1);
  return ((uint)uVar2 | (uint)uVar3) & 1;
}



/* Entry: 100bc4ce8; end: 100bc4cef; -[SCNMessagingNotificationSettings chatNotificationPreference] */

undefined8 FUN_100bc4ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc4cf0; end: 100bc4db3;  */

bool FUN_100bc4cf0(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_2;
  func_0x000107c5c808(param_2);
  func_0x000107c4d968(puVar3,param_3,lVar2);
  func_0x000107c61180();
  func_0x000107c4223c();
  param_1 = param_1 / 1000.0;
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41360(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  FUN_100bc4dbc();
  if (param_1 <= 0.0) {
    lVar2 = param_2;
    func_0x000107c415ec(param_2);
    bVar1 = lVar2 == 1;
  }
  else {
    bVar1 = true;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  return bVar1;
}



/* Entry: 100bc4db4; end: 100bc4dbb; -[SCNMessagingEnhancedNotificationPreference temporaryMuteExpirationDeadlineMillis] */

undefined8 FUN_100bc4db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc4dbc; end: 100bc4e23;  */

undefined8 FUN_100bc4dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c61174();
  func_0x000107c41324(puVar1);
  func_0x000107c61180();
  func_0x000107c5c9ec(param_2,param_3,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100bc4e24; end: 100bc4e2b; -[SCNMessagingEnhancedNotificationPreference defaultNotificationPreference] */

undefined8 FUN_100bc4e24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc4e2c; end: 100bc4e33; -[SCNMessagingNotificationSettings callingNotificationPreference] */

undefined8 FUN_100bc4e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bc4e34; end: 100bc4e3b; -[SCNMessagingInteractionInfo hasMessagesToReplay] */

undefined1 FUN_100bc4e34(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bc4e3c; end: 100bc4e43; -[SCNMessagingInteractionInfo numMessagesToSave] */

undefined4 FUN_100bc4e3c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 100bc4e44; end: 100bc4e4b; -[SCNMessagingInteractionInfo messages] */

undefined8 FUN_100bc4e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc4e4c; end: 100bc4e53; -[SCNMessagingInteractionInfo mayHaveSaveableSentSnap] */

undefined1 FUN_100bc4e4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100bc4e54; end: 100bc4e5b; -[SCNMessagingFeedEntry conversationSubTypeMetadata] */

undefined8 FUN_100bc4e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 100bc4e5c; end: 100bc5123; -[SCFriendsFeedActiveMessageData initWithConversationId:messageState:conversationType:isConversationDoNotDisturbEnabled:isSentByUser:isConversationPending:isConversationLocked:lastInteractionTimestamp:displayTimestamp:hasMessagesToReplay:hasMessagesToReplayAgain:numMessagesToSave:messageContent:messages:mayHaveSaveableSentSnap:isConversationSuggestion:isStreakRestore:expiredStreakMetadata:conversationSubtypeMetadata:quotedMessageType:snapModeState:conversationInvitationMetadata:] */

undefined8 *
FUN_100bc4e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  puStack_70 = PTR_PTR_112703a38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[5] = param_5;
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9;
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xd) = param_13._1_1_;
    *(undefined4 *)((long)puVar1 + 0x14) = param_14;
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 0xf) = param_17._1_1_;
    *(undefined1 *)(puVar1 + 2) = param_17._2_1_;
    uVar2 = param_19;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_20;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xc] = param_21;
    uVar2 = param_22;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_23;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bc5124; end: 100bc5147;  */

void FUN_100bc5124(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100bc5148; end: 100bc540f;  */

void FUN_100bc5148(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x20;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_a8 [72];
  
  lVar22 = *unaff_x20;
  lVar1 = *(long *)(lVar22 + 0x18);
  if (*(long *)(lVar22 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar10 = 0x112f143e0;
  FUN_1000285a8(0x112f143e0,&UNK_10db495b8);
  lVar11 = lVar22;
  func_0x000107c60490(lVar22,lVar1,param_2,uVar10);
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_100bc53dc:
    func_0x000107c61574(lVar22);
    *unaff_x20 = lVar11;
    return;
  }
  puVar20 = (ulong *)(lVar22 + 0x40);
  uVar16 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
    uVar21 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar21 = uVar21 & *puVar20;
  lVar1 = lVar11 + 0x40;
  lVar14 = 0;
  do {
    if (uVar21 == 0) {
      do {
        lVar19 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100bc540c);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar21 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
            if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
              *puVar20 = -1L << (uVar21 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar20,uVar21 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar22 + 0x10) = 0;
          }
          goto LAB_100bc53dc;
        }
        uVar21 = puVar20[lVar19];
        lVar14 = lVar14 + 1;
      } while (uVar21 == 0);
      uVar13 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar21 = uVar21 - 1 & uVar21;
    }
    else {
      uVar13 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar21 = uVar21 - 1 & uVar21;
      lVar19 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar22 + 0x30) + uVar13 * 0x10);
    uVar10 = *puVar2;
    uVar5 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar13 * 0x20);
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    uVar4 = puVar2[2];
    uVar7 = puVar2[3];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61174(uVar7);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar11 + 0x28));
    puVar12 = auStack_a8;
    func_0x000107c5fb58(puVar12,uVar10,uVar5);
    func_0x000107c606a8();
    uVar18 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar12 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar17 >> 6;
    uVar13 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar8 = false;
      uVar13 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar15 + 1;
        if ((uVar17 == uVar13) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100bc5410);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar17 != uVar13) {
          uVar15 = uVar17;
        }
        bVar8 = (bool)(uVar17 == uVar13 | bVar8);
        uVar17 = *(ulong *)(lVar1 + uVar15 * 8);
      } while (uVar17 == 0xffffffffffffffff);
      uVar17 = ~uVar17;
      uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar15 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar17 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar15) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar15);
    puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar13 * 0x10);
    *puVar2 = uVar10;
    puVar2[1] = uVar5;
    puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar13 * 0x20);
    *puVar2 = uVar3;
    puVar2[1] = uVar6;
    puVar2[2] = uVar4;
    puVar2[3] = uVar7;
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    lVar14 = lVar19;
  } while( true );
}



/* Entry: 100bc5410; end: 100bc541f;  */

undefined1  [16] FUN_100bc5410(void)

{
  return ZEXT816(0x1105cc960);
}



/* Entry: 100bc5420; end: 100bc5427; -[SCNMessagingSnapItem state] */

undefined8 FUN_100bc5420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc5428; end: 100bc542f; -[SCNMessagingFeedItem call] */

undefined8 FUN_100bc5428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bc5430; end: 100bc5437; -[SCNMessagingFeedEntryDisplayInfo viewed] */

undefined1 FUN_100bc5430(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bc5438; end: 100bc543f; -[SCNMessagingInteractionInfo tapActionState] */

undefined8 FUN_100bc5438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bc5440; end: 100bc5447; -[SCNMessagingSnapItem comboSnapItemInfo] */

undefined8 FUN_100bc5440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bc5448; end: 100bc544f; -[SCNMessagingComboSnapItem unreadChatCount] */

undefined8 FUN_100bc5448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc5450; end: 100bc5457; -[SCNMessagingSnapItem unviewedSnapCount] */

undefined8 FUN_100bc5450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bc5458; end: 100bc54bf; -[SCFriendsFeedComboSnapItemInfo initWithHasNewChat:hasMultipleNewSnaps:hasMultipleNewChats:unreadChatCount:] */

void FUN_100bc5458(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112703980;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
  }
  return;
}



/* Entry: 100bc54c0; end: 100bc54c7; -[SCNMessagingSnapItem hasAudio] */

undefined1 FUN_100bc54c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bc54c8; end: 100bc550f; -[SCFriendsFeedSnapMediaTypeInfo initWithHasSound:] */

void FUN_100bc54c8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703a30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100bc5510; end: 100bc560f;  */

void FUN_100bc5510(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_2);
  puVar3 = (undefined *)0x0;
  if ((param_2 != 0) && (param_5 != 0 || param_4 != 1)) {
    func_0x000107c5bcc0();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (((param_1 - 8U < 4) || (param_1 == 0xf)) ||
       ((param_1 == 1 &&
        ((4 < param_3 - 1U || ((0x1bU >> (ulong)((uint)(param_3 - 1U) & 0x1f) & 1) == 0)))))) {
      lVar1 = param_2;
      func_0x000107c41800(param_2);
      func_0x000107c61180();
      func_0x000107c4cdc4();
      func_0x000107c4d968(puVar2);
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5c1d4();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
    }
    else {
      puVar3 = (undefined *)0x0;
    }
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bc5610; end: 100bc5617; -[SCNMessagingMessage descriptor] */

undefined8 FUN_100bc5610(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc5618; end: 100bc561f; -[SCNMessagingMessageDescriptor messageId] */

undefined8 FUN_100bc5618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc5620; end: 100bc56f3;  */

long FUN_100bc5620(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 100bc56f4; end: 100bc5843;  */

void FUN_100bc56f4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = **(long **)(param_1 + 0x10);
  plVar2 = (long *)(lVar11 + 0xe0);
  FUN_100bc5620(plVar2,*(long **)(param_1 + 0x10) + 2);
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = *(ulong *)(lVar11 + 0xe8);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(lVar11 + 0xe0);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  if (plVar6 == (long *)(lVar11 + 0xf0)) {
LAB_100bc5794:
    if (lVar3 == 0) {
LAB_100bc57c8:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_100bc57d0;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_100bc57c8;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_100bc5794;
LAB_100bc57d0:
    if (lVar3 == 0) goto LAB_100bc5808;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_100bc5808:
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar11 + 0xf8) = *(long *)(lVar11 + 0xf8) + -1;
  func_0x000100575684();
  return;
}



/* Entry: 100bc5844; end: 100bc58ff; -[SCNMessagingMessage media] */

void FUN_100bc5844(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c4051c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c404a8();
  if ((int)uVar2 == 7) {
    uVar2 = uVar1;
    func_0x000107c5b3c0();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c501d4();
    func_0x000107c61170(uVar2);
    if ((int)uVar3 == 0xb) {
      func_0x000107c501ec(param_1);
      func_0x000107c61180();
      uVar2 = param_1;
      goto LAB_100bc58e4;
    }
  }
  func_0x000107c4ca8c(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
LAB_100bc58e4:
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bc5900; end: 100bc59ff; -[SCNMessagingMessage contents] */

void FUN_100bc5900(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x000107c61134(param_1,&UNK_10f45a0eb);
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x000107c4cda8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c40414();
      func_0x000107c61180();
      func_0x000107c61170();
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar3 = lVar2;
        func_0x000107c40414();
        func_0x000107c61180();
        lVar4 = lVar3;
        FUN_100bc5a10();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          func_0x000107c61188(param_1,&UNK_10f45a0eb,lVar4,0x301);
          func_0x000107c61174(lVar4);
        }
        func_0x000107c61170(lVar4);
      }
    }
    func_0x000107c61170(lVar2);
  }
  else {
    func_0x000107c61174(lVar1);
    lVar4 = lVar1;
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 100bc5a00; end: 100bc5a07; -[SCNMessagingMessage messageContent] */

undefined8 FUN_100bc5a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bc5a08; end: 100bc5a0f; -[SCNMessagingMessageContent content] */

undefined8 FUN_100bc5a08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc5a10; end: 100bc5a67;  */

void FUN_100bc5a10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba668;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bc5a68; end: 100bc5af3; +[SCMessagingContents descriptor] */

undefined * FUN_100bc5a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112beaef0,
                        &PTR____CFConstantStringClassReference_110f28638,&PTR_DAT_1132c3540,
                        &PTR_s_text_1132c3558,0x19,0xd0,0x1c);
    func_0x000107c5a8b4();
    puRam0000000113730c78 = puVar1;
  }
  return puRam0000000113730c78;
}



/* Entry: 100bc5af4; end: 100bc5d07; -[SCLensDataFetchingMediator _subscribeOnNotifier:] */

void FUN_100bc5af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_68,param_1);
  uVar1 = param_3;
  func_0x000107c4b07c(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_100078e94();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4da88(uVar1);
  func_0x000107c61180();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_10b0da818;
  puStack_78 = &UNK_110cb9338;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c4b1b8(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_100078e94();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c4da88(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bc5d08; end: 100bc5d13; -[_TtC34AdaptiveLensFetchingImplementation26CompositeLensFetchNotifier lensDownloadObservable] */

void FUN_100bc5d08(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100bc5d48();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc5d14; end: 100bc5d47;  */

void FUN_100bc5d14(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b794a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100bc5d48; end: 100bc5ed7;  */

undefined * FUN_100bc5d48(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    FUN_100bc5d14(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc5ed8);
      (*pcVar2)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar9;
        func_0x0001019c2294(uVar9,uVar7);
      }
      uVar3 = uVar10;
      func_0x000107c4b07c();
      func_0x000107c61180();
      func_0x000107c615e8(uVar10);
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        FUN_100bc5d14(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar1 + uVar10 * 8 + 0x20) = uVar3;
    } while (uVar8 != uVar9);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar5 = 0x112d5b0a0;
  FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar6 = puVar1;
  func_0x000107c5fc48(puVar1,uVar5);
  func_0x000107c6142c(puVar1);
  func_0x000107c4cd50(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 100bc5ed8; end: 100bc5edb;  */

void FUN_100bc5ed8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  lVar3 = 0x112d5b0a0;
  puVar4 = (ulong *)0x112d5b228;
  plVar5 = (long *)&UNK_10d9223b0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0), lVar3 != 0)) {
    puVar4 = (ulong *)0x112d36e60;
    plVar5 = (long *)&UNK_10d901170;
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100bc5edc; end: 100bc5f13; -[_TtC34AdaptiveLensFetchingImplementation24LensFetchResultProcessor lensDownloadObservable] */

void FUN_100bc5edc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1004575f0();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc5f14; end: 100bc5f17; -[_TtC17LensFetchExternal18BitmojiIconFetcher lensDownloadObservable] */

void FUN_100bc5f14(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc5f18; end: 100bc5f6f;  */

/* WARNING: Possible PIC construction at 0x000100bc5f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bc5f60) */

void FUN_100bc5f18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c4d2d4(param_2);
  func_0x000107c3d7a0();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bc5f70; end: 100bc5f7b; -[_TtC34AdaptiveLensFetchingImplementation26CompositeLensFetchNotifier lensIconDownloadObservable] */

void FUN_100bc5f70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100bc5fb0();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc5f7c; end: 100bc5faf;  */

void FUN_100bc5f7c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b794a0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100bc5fb0; end: 100bc613f;  */

undefined * FUN_100bc5fb0(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    FUN_100bc5f7c(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bc6140);
      (*pcVar2)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar9;
        func_0x0001019c2294(uVar9,uVar7);
      }
      uVar3 = uVar10;
      func_0x000107c4b1b8();
      func_0x000107c61180();
      func_0x000107c615e8(uVar10);
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        FUN_100bc5f7c(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar1 + uVar10 * 8 + 0x20) = uVar3;
    } while (uVar8 != uVar9);
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar5 = 0x112d5b0a0;
  FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar6 = puVar1;
  func_0x000107c5fc48(puVar1,uVar5);
  func_0x000107c6142c(puVar1);
  func_0x000107c4cd50(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 100bc6140; end: 100bc6143;  */

void FUN_100bc6140(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  lVar3 = 0x112d5b0a0;
  puVar4 = (ulong *)0x112d5b228;
  plVar5 = (long *)&UNK_10d9223b0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(0x112d5b0a0,&UNK_10d97aac0), lVar3 != 0)) {
    puVar4 = (ulong *)0x112d36e60;
    plVar5 = (long *)&UNK_10d901170;
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100bc6144; end: 100bc61c3; -[_TtC17LensFetchExternal18BitmojiIconFetcher lensIconDownloadObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc6144(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc61c4; end: 100bc61df; -[SCSnapDocOperaPageResolverEntryPoint _snapDocOperaPageResolverInstance] */

void FUN_100bc61c4(void)

{
  func_0x000107c610fc(PTR_PTR_1126bfe18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc61e0; end: 100bc63b3; -[SCSnapDocOperaPageResolverImpl init] */

undefined1 * FUN_100bc61e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eacd8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe20;
    func_0x000107c61160(PTR_PTR_1126bfe20);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe28;
    func_0x000107c61160(PTR_PTR_1126bfe28);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe30;
    func_0x000107c61160(PTR_PTR_1126bfe30);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe38;
    func_0x000107c61160(PTR_PTR_1126bfe38);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe40;
    func_0x000107c61160(PTR_PTR_1126bfe40);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe48;
    func_0x000107c61160(PTR_PTR_1126bfe48);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe50;
    func_0x000107c61160(PTR_PTR_1126bfe50);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe58;
    func_0x000107c61160(PTR_PTR_1126bfe58);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    puVar2 = PTR_PTR_1126bfe60;
    func_0x000107c61160(PTR_PTR_1126bfe60);
    func_0x000107c3d798(uVar3);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100bc63b4; end: 100bc649b; -[SCLensDataProviderListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc63b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_11307d100;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_11307d108) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_11307d0e0;
  uVar2 = 0x11307cf30;
  FUN_1000285a8(0x11307cf30,&UNK_10dd056b0);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  lVar1 = _DAT_11307d0f0;
  uVar2 = 0x11307cf38;
  FUN_1000285a8(0x11307cf38,&UNK_10dd056b8);
  func_0x000107c613fc();
  func_0x000107c5f1f0();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  func_0x000100bc65e4();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bc649c; end: 100bc6593; -[SCSnapDocOperaPageResolverImpl registerResolvers:] */

void FUN_100bc649c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      func_0x000107c3d798(*(undefined8 *)(param_1 + 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  func_0x000107c60e78();
  if (lRam000000011307cf40 != 0) {
    return;
  }
  puVar3 = &UNK_110775eb8;
  func_0x000107c614d4();
  if (puVar3 != (undefined *)0x0) {
    return;
  }
  lRam000000011307cf40 = param_3;
  return;
}



/* Entry: 100bc6594; end: 100bc6603;  */

void FUN_100bc6594(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam000000011307cf40 != 0) {
    return;
  }
  puVar1 = &UNK_110775eb8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam000000011307cf40 = param_1;
  return;
}



/* Entry: 100bc6604; end: 100bc661b; -[SCLensBackendPrefetchFiltersFactory passivePrefetchFilter] */

void FUN_100bc6604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ddd30,PTR_s__backendPrefetchFilterWithAdditi_1125521e8,3,
             &PTR___NSConcreteGlobalBlock_110cb8630);
  return;
}



/* Entry: 100bc661c; end: 100bc67a7; +[SCLensBackendPrefetchFiltersFactory _backendPrefetchFilterWithAdditionalLensNumber:filterBlock:] */

void FUN_100bc661c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126df980;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10b0bcf4c;
  puStack_68 = &UNK_110cb8670;
  func_0x000107c61174(param_4);
  lStack_60 = param_4;
  func_0x000107c4ec5c(puVar2,param_2,&puStack_80);
  func_0x000107c61180();
  func_0x000107c47fd0(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  if (param_3 < 1) {
    func_0x000107c61174(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar3 = PTR_PTR_1126df970;
    func_0x000107c610f4();
    func_0x000107c47620();
    puVar2 = PTR_PTR_1126df988;
    func_0x000107c610f4(PTR_PTR_1126df988);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar3;
    puStack_50 = puVar1;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
    func_0x000107c61180();
    func_0x000107c4694c(puVar2,param_2,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lStack_60);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_4 + 0x28));
  return;
}



/* Entry: 100bc67a8; end: 100bc67ab;  */

void FUN_100bc67a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bc67ac; end: 100bc681f; -[SCPredicateLensFilter initWithPredicate:] */

undefined1 * FUN_100bc67ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705a90;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc6820; end: 100bc6867; -[SCMaxLimitLensFilter initWithMaxLimit:] */

void FUN_100bc6820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705a88;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100bc6868; end: 100bc689b;  */

void FUN_100bc6868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bc689c; end: 100bc690f; -[SCLensCompoundFilter initWithFilters:] */

undefined1 * FUN_100bc689c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705a78;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc6910; end: 100bc6927; -[SCLensBackendPrefetchFiltersFactory activePrefetchFilter] */

void FUN_100bc6910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd2130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ddd30,PTR_s__backendPrefetchFilterWithAdditi_1125521e8,3,
             &PTR___NSConcreteGlobalBlock_110cb8650);
  return;
}



/* Entry: 100bc6928; end: 100bc692f; -[SCLensBackendPrefetchFiltersFactory authPrefetchFilter] */

void FUN_100bc6928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf108b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_authPrefetchFilter_1125a1bd0);
  return;
}



/* Entry: 100bc6930; end: 100bc693f; -[SCLensAuthPrefetchFiltersFactory authPrefetchFilter] */

void FUN_100bc6930(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__lensSelectionFilterForConfigNam_112570890,
             &PTR____CFConstantStringClassReference_110f5dc18);
  return;
}



/* Entry: 100bc6940; end: 100bc69a7; -[SCLensAuthPrefetchFiltersFactory _lensSelectionFilterForConfigName:] */

void FUN_100bc6940(long param_1)

{
  undefined *puVar1;
  
  func_0x000107c3bcec();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar1 = PTR_PTR_1126df970;
    func_0x000107c610f4(PTR_PTR_1126df970);
    func_0x000107c47620();
  }
  else {
    puVar1 = PTR_PTR_1126df968;
    func_0x000107c610f4(PTR_PTR_1126df968);
    func_0x000107c473f4();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bc69a8; end: 100bc6a5b; -[SCLensAuthPrefetchFiltersFactory _lensSelectionForConfigName:] */

void FUN_100bc69a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4f558();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126df978;
    func_0x000107c610f4(PTR_PTR_1126df978);
    func_0x000107c4636c();
    func_0x000107c61174(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bc6a5c; end: 100bc6bbf; -[SCSnapDocServiceProvider provide] */

void FUN_100bc6a5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10697a778;
  puStack_68 = &UNK_11094e6f0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126cf520;
  func_0x000107c610f4(PTR_PTR_1126cf520);
  func_0x000107c48764();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bc6bc0; end: 100bc6c37; -[_TtC17SCSnapDocServices17SCSnapDocServices initWithSnapDocConfigurer:snapDocOperaParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc6bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_112ff5de0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff5de8) = param_4;
  lVar2 = param_1;
  FUN_100332168();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100bc6c38; end: 100bc6cb3;  */

void FUN_100bc6c38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bc6cb4; end: 100bc6d1b; +[SCLensSelection descriptor] */

void FUN_100bc6cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c770d0,
                        &PTR____CFConstantStringClassReference_110f63978,&PTR_DAT_1133b7588,
                        &PTR_DAT_1133b75a0,1,0x10,0x1c);
    puRam00000001137f7240 = puVar1;
  }
  return;
}



/* Entry: 100bc6d1c; end: 100bc6dff; -[SCDiscoverFeedOperaServiceProvider provide] */

void FUN_100bc6d1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cee20;
  func_0x000107c610f4(PTR_PTR_1126cee20);
  func_0x000107c481dc();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bc6e00; end: 100bc6e73; -[SCDiscoverFeedOperaServices initWithPublisherPagePropertiesManager:] */

undefined1 * FUN_100bc6e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f7318;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc6e74; end: 100bc6f17;  */

void FUN_100bc6e74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bc6f18; end: 100bc6f1f;  */

void FUN_100bc6f18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x100);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bc6f20; end: 100bc6f73;  */

void FUN_100bc6f20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x100);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bc6f74; end: 100bc6fef; +[SCLensSelection_Query descriptor] */

undefined * FUN_100bc6f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c77170,
                        &PTR____CFConstantStringClassReference_110f639b8,&PTR_DAT_1133b7588,
                        &PTR_DAT_1133b75c0,4,0x20,0x1c);
    func_0x000107c5a88c();
    puRam00000001137f7250 = puVar1;
  }
  return puRam00000001137f7250;
}



/* Entry: 100bc6ff0; end: 100bc6ff7;  */

void FUN_100bc6ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bc6ff8; end: 100bc704b;  */

void FUN_100bc6ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bc704c; end: 100bc705f;  */

void FUN_100bc704c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10032d6d0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126ac9f8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bc7060; end: 100bc74d7;  */

void FUN_100bc7060(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10032d6d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126ac9f8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100bc74d8; end: 100bc75cf;  */

undefined * FUN_100bc74d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f7230 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f63938,
                        &UNK_10e5d1ad4,&UNK_10e5d1af4,3,&UNK_10b5e1c58,0);
    do {
      if (puRam00000001137f7230 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f7230;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f7230,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f7230 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f7230;
}



/* Entry: 100bc75d0; end: 100bc762b; -[SCDiscoverFeedFriendsSectionLegacyServiceProvider provide] */

void FUN_100bc75d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ced80;
  func_0x000107c610f4(PTR_PTR_1126ced80);
  func_0x000107c3b524(param_1);
  func_0x000107c61180();
  func_0x000107c46a48(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bc762c; end: 100bc7677; -[SCLensSelectionFilter initWithLensSelection:] */

long FUN_100bc762c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 100bc7678; end: 100bc788f; -[SCDiscoverFeedFriendsSectionLegacyServiceProvider _discoverFeedPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc7678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126ced88;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_1127532bc;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c41f70();
  func_0x000107c61180();
  lVar12 = param_1 + _DAT_1127532c0;
  func_0x000107c61148(lVar12);
  lVar4 = lVar12;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c46a44(puVar1,param_2,lVar3,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar5 = PTR_PTR_1126ced90;
  func_0x000107c610f4();
  lVar12 = (long)_DAT_1127532c4;
  lVar2 = param_1 + lVar12;
  func_0x000107c61148();
  lVar6 = lVar2;
  func_0x000107c5bf44();
  func_0x000107c61180();
  lVar12 = param_1 + lVar12;
  func_0x000107c61148();
  lVar7 = lVar12;
  func_0x000107c5bf64();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_1127532c8;
  func_0x000107c61148(lVar3);
  lVar8 = lVar3;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_1127532cc;
  func_0x000107c61148(lVar4);
  lVar10 = lVar4;
  func_0x000107c4d598();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_1127532d0;
  func_0x000107c61148(param_1);
  lVar11 = param_1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  func_0x000107c48a4c(puVar5,param_2,lVar6,lVar7,puVar1,lVar9,lVar10,lVar11);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bc7890; end: 100bc789f; -[_TtC29SCDiscoverFeedStoriesServices29SCDiscoverFeedStoriesServices discoverFeedFriendStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc7890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e240));
  return;
}



/* Entry: 100bc78a0; end: 100bc7943; -[SCFriendStoriesPrefetchDecider initWithFriendStoriesDataCoordinator:plusFeatureGating:] */

undefined1 *
FUN_100bc78a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f9270;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc7944; end: 100bc7b2b; -[SCDocFriendStoriesPrefetcher initWithStoriesDataCoordinator:storiesMediaCoordinator:prefetchDecider:currentUserId:networkConnectivityMonitor:storiesConfigProvider:] */

undefined1 *
FUN_100bc7944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126f3dd0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c436a8();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar4);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    uVar2 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126c2320;
    func_0x000107c4ed08(PTR_PTR_1126c2320);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3ebc0();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    if ((int)uVar4 != 0) {
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c3d740();
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc7b2c; end: 100bc7bdf; -[_TtC35SCLensRemovalServicesImplementation18LensRemovalManager removedLensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bc7b2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112de8460);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1104298a8;
  func_0x000107c613fc(&UNK_1104298a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar1);
  FUN_10090569c(FUN_100bc7f10,puVar1,uVar2);
  func_0x000107c61578(puVar1,2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112de8450);
  func_0x000107c6117c(uVar2);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100bc7be0; end: 100bc7bfb; +[SCStoriesFetchingConfigKeys prefetchFriendStoriesMediaInRankedUpdated] */

void FUN_100bc7be0(void)

{
  if (lRam0000000113596068 != -1) {
    func_0x000107c61568(0x113596068,0x100bc7c40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380d068);
  return;
}



/* Entry: 100bc7bfc; end: 100bc7c8f;  */

void FUN_100bc7bfc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 100bc7c90; end: 100bc7cf3; -[SCStoriesConfigProviderImplementation boolForKey:] */

undefined8 FUN_100bc7c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c3ebc0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 100bc7cf4; end: 100bc7d4f; -[SCStoriesCOFProvider boolForKey:] */

uint FUN_100bc7cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_100bc7d50(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100bc7d50; end: 100bc7f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100bc7d50(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11302e940);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302e940))[1];
  func_0x000107c5eea0(puVar7);
  uVar5 = uVar6;
  FUN_1004434a4(uVar6,uVar1);
  uVar3 = (uint)uVar5;
  bVar2 = (uVar3 & 0xff) == 2;
  if (bVar2) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112e40258);
    uVar5 = uVar6;
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar5);
    FUN_10006c804();
    puStack_68 = PTR___sSbN_11034dd40;
    auStack_80[0] = (undefined1)uVar3;
    func_0x000107c61428(unaff_x20 + _DAT_112e40240,auStack_98,0x21,0);
    func_0x000107c61434(uVar1);
    FUN_100102934(auStack_80,uVar6,uVar1);
    func_0x000107c614a8(auStack_98);
    FUN_100070bfc();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e40260);
  func_0x000107c614f0(uVar6);
  FUN_1004435b0(bVar2,0,puVar7,uVar6);
  (**(code **)(lVar8 + 8))(puVar7,lVar4);
  return uVar3 & 1;
}



/* Entry: 100bc7f10; end: 100bc7f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc7f10(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c614f0(*(undefined8 *)(lVar1 + _DAT_112de8460));
    FUN_100bc7fa4();
    if ((*(byte *)(lVar1 + _DAT_112de8468) & 1) == 0) {
      *(undefined1 *)(lVar1 + _DAT_112de8468) = 1;
      FUN_100bc7fb0();
      FUN_100bcb8fc();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100bc7f18; end: 100bc7fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc7f18(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c614f0(*(undefined8 *)(param_1 + _DAT_112de8460));
    FUN_100bc7fa4();
    if ((*(byte *)(param_1 + _DAT_112de8468) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112de8468) = 1;
      FUN_100bc7fb0();
      FUN_100bcb8fc();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100bc7fa4; end: 100bc7faf;  */

void FUN_100bc7fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


