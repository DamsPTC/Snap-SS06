/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006ceab4; end: 1006ced6b;  */

void FUN_1006ceab4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100213984();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8510;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1006ced6c; end: 1006cee4f; -[SCUploadMediaDataManagerServiceProvider provide] */

void FUN_1006ced6c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bc598;
  func_0x000107c610f4(PTR_PTR_1126bc598);
  func_0x000107c45a44();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006cee50; end: 1006cee67;  */

void FUN_1006cee50(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1006cee68; end: 1006ceed3;  */

void FUN_1006cee68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1006ceed4(param_2);
  func_0x000107c61180();
  func_0x000107c4dc68(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1006ceed4; end: 1006cef8b;  */

void FUN_1006ceed4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x428);
  func_0x000107c61180();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x428) {
    lVar3 = lVar4;
    FUN_1006cef8c(lVar4);
    func_0x000107c61180();
    func_0x000107c3d798(puVar2,param_2,lVar3);
    func_0x0001006d00bc();
  }
  func_0x000107c40794(puVar2);
  FUN_1006d2314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006cef8c; end: 1006cf723;  */

void FUN_1006cef8c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  int *piVar29;
  int *piVar30;
  
  puVar5 = PTR_PTR_1126da928;
  func_0x000107c610f4();
  lVar6 = param_1;
  FUN_1006a7d84();
  func_0x000107c61180();
  lVar7 = param_1 + 0x18;
  FUN_1006a7df8();
  func_0x000107c61180();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5);
  func_0x000107c61180();
  lVar10 = *(long *)(param_1 + 0x40);
  for (lVar9 = *(long *)(param_1 + 0x38); lVar9 != lVar10; lVar9 = lVar9 + 0x20) {
    FUN_1006cf724(lVar9);
    func_0x000107c61180();
    func_0x0001006cf83c();
    func_0x0001006cf84c();
  }
  func_0x000107c40794();
  func_0x0001006cf854();
  lVar9 = param_1 + 0x50;
  FUN_1006cf85c();
  func_0x000107c61180();
  iVar2 = *(int *)(param_1 + 0x70);
  lVar10 = param_1 + 0x78;
  FUN_1006a8ef0();
  func_0x000107c61180();
  iVar3 = *(int *)(param_1 + 0x88);
  lVar11 = param_1 + 0x90;
  FUN_1006a8ef0();
  func_0x000107c61180();
  lVar12 = param_1 + 0xa0;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar13 = param_1 + 0xb8;
  FUN_10060ab28();
  func_0x000107c61180();
  uVar25 = *(undefined8 *)(param_1 + 0xd0);
  iVar4 = *(int *)(param_1 + 0xd8);
  lVar14 = param_1 + 0xe0;
  FUN_10060ab28();
  func_0x000107c61180();
  uVar24 = *(undefined8 *)(param_1 + 0xf8);
  lVar15 = param_1 + 0x100;
  FUN_1001011ec();
  func_0x000107c61180();
  uVar1 = *(undefined1 *)(param_1 + 0x110);
  lVar16 = param_1 + 0x118;
  FUN_1001011ec();
  func_0x000107c61180();
  lVar17 = param_1 + 0x128;
  FUN_1001011ec();
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    FUN_1006d1198();
    func_0x000107c61180();
  }
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208)) / 0x18);
  func_0x000107c61180();
  lVar28 = *(long *)(param_1 + 0x210);
  for (lVar26 = *(long *)(param_1 + 0x208); lVar26 != lVar28; lVar26 = lVar26 + 0x18) {
    func_0x00010862f224(lVar26);
    func_0x000107c61180();
    func_0x0001006cf83c();
    func_0x0001006cf84c();
  }
  func_0x000107c40794();
  func_0x0001006cf854();
  lVar26 = param_1 + 0x220;
  FUN_1006a8e24();
  func_0x000107c61180();
  lVar28 = param_1 + 0x268;
  FUN_1006a7e58();
  func_0x000107c61180();
  FUN_1001011ec();
  func_0x000107c61180();
  FUN_1001011ec();
  func_0x000107c61180();
  lVar19 = param_1 + 0x2a0;
  FUN_1006a8018();
  func_0x000107c61180();
  FUN_1006cf90c();
  func_0x000107c61180();
  lVar20 = param_1 + 0x2c8;
  FUN_1001011ec();
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        *(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 2);
    func_0x000107c61180();
    piVar30 = *(int **)(param_1 + 0x2e0);
    for (piVar29 = *(int **)(param_1 + 0x2d8); piVar29 != piVar30; piVar29 = piVar29 + 1) {
      puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*piVar29);
      func_0x000107c61180();
      func_0x000107c3d798(puVar21,param_2,puVar27);
      func_0x0001006cf84c();
    }
    puVar27 = puVar21;
    func_0x000107c40794();
    func_0x000107c61170(puVar21);
  }
  else {
    puVar27 = (undefined *)0x0;
  }
  FUN_1006a9128();
  func_0x000107c61180();
  lVar22 = param_1 + 0x3d8;
  FUN_1006a9308();
  func_0x000107c61180();
  lVar23 = param_1 + 0x3f8;
  FUN_1001011ec();
  func_0x000107c61180();
  param_1 = param_1 + 0x408;
  FUN_1006a8a34();
  func_0x000107c61180();
  func_0x000107c461ac(puVar5,param_2,lVar6,lVar7,puVar8,lVar9,(long)iVar2,lVar10,(long)iVar3,lVar11,
                      lVar12,lVar13,uVar25,(long)iVar4,lVar14,uVar24,lVar15,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x0001006cf84c();
  func_0x000107c61170(puVar27);
  func_0x000107c61170(lVar20);
  func_0x0001006cf854();
  func_0x000107c61170(lVar19);
  func_0x0001006d00a4();
  func_0x0001006d00ac();
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(puVar18);
  func_0x0001006d00b4();
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1006cf724; end: 1006cf797;  */

void FUN_1006cf724(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dab40;
  func_0x000107c610f4(PTR_PTR_1126dab40);
  lVar2 = param_1;
  FUN_1006a7d84(param_1);
  func_0x000107c61180();
  func_0x000107c47db4(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x18),
                      *(undefined4 *)(param_1 + 0x1c));
  FUN_1006cf834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006cf798; end: 1006cf833; -[SCNMessagingParticipant initWithParticipantId:color:colorOption:] */

undefined1 *
FUN_1006cf798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1127070d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006cf834; end: 1006cf85b;  */

void FUN_1006cf834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006cf85c; end: 1006cf897;  */

void FUN_1006cf85c(void)

{
  func_0x000107c610f4(PTR_PTR_1126da988);
  func_0x000107c485b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006cf898; end: 1006cf90b; -[SCNMessagingConversationRetentionPolicy initWithSendReadMessage:sendReleaseMessages:unreadRetentionTimeSeconds:readRetentionTimeSeconds:infiniteMode:] */

void FUN_1006cf898(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112706ea8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  return;
}



/* Entry: 1006cf90c; end: 1006cf93b;  */

void FUN_1006cf90c(void)

{
  func_0x000107c610f4(PTR_PTR_1126da978);
  func_0x000107c492ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006cf93c; end: 1006cf983; -[SCNMessagingConversationMetadataFormat initWithUserListMessageMetadata:] */

void FUN_1006cf93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706e98;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1006cf984; end: 1006cffd3; -[SCNMessagingConversation initWithConversationId:title:participants:retentionPolicy:conversationType:chatNotificationPreference:gameNotificationPreference:callingNotificationPreference:blockedParticipantExceptions:nonFriendUserParticipantExceptions:joinedTimestampMs:sourcePage:lastSenderUserIds:latestReceivedReactionSeenId:createdTimestampMs:isFriendLinkPending:pinnedTimestampMs:customNotificationSoundId:chatWallpaper:lockedState:kickedParticipants:streakMetadata:conversationSubType:snapPostOpenViewingPolicy:pendingDecryptionCount:initialMutualFriendCount:streakReminderEnabled:categoryType:categoryId:isEligibleForInfiniteRetention:isEligibleForSevenDayRetention:metadataFormat:customRingtoneSoundId:availableRetentionModes:conversationSubTypeMetadata:conversationInvitationMetadata:backoffTimeMs:activityData:isPreservedForLegalHold:canCreatePoll:groupStoryConsentStatus:groupStoryMayExist:] */

undefined8 *
FUN_1006cf984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32,
             undefined8 param_33,undefined4 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined4 param_43,undefined4 param_44,
             undefined8 param_45,undefined1 param_46)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  FUN_1006cffd4();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  FUN_1006d008c();
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_15);
  func_0x0001006d0094();
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174();
  puStack_70 = PTR_PTR_112706e58;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001006d0094();
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x0001006d009c(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x0001006d009c(uVar3);
    func_0x0001006d0094();
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    puVar1[6] = param_7;
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    puVar1[8] = param_9;
    FUN_1006cffd4();
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x0001006d009c(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x0001006d009c(uVar3);
    puVar1[0xc] = param_13;
    puVar1[0xd] = param_14;
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x0001006d009c(uVar3);
    puVar1[0xf] = param_16;
    func_0x0001006d0094();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_18;
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    func_0x000107c61170(uVar2);
    func_0x0001006d0094();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    func_0x000107c61170(uVar2);
    func_0x0001006d0094();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    func_0x000107c61170(uVar2);
    puVar1[0x14] = param_23;
    uVar2 = param_24;
    func_0x000107c40794();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    func_0x0001006d009c(uVar3);
    FUN_1006cffd4();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    func_0x000107c61170(uVar2);
    FUN_1006cffd4();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    func_0x000107c61170(uVar2);
    puVar1[0x18] = param_27;
    FUN_1006d008c();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    func_0x000107c61170(uVar2);
    FUN_1006d008c();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_29;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_30;
    puVar1[0x1b] = param_32;
    func_0x0001006d0094();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_33;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_34;
    *(undefined1 *)((long)puVar1 + 0xb) = param_34._1_1_;
    func_0x0001006d0094();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_36;
    func_0x000107c61170(uVar2);
    func_0x0001006d0094();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_37;
    func_0x000107c61170(uVar2);
    uVar2 = param_38;
    func_0x000107c40794();
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = uVar2;
    func_0x0001006d009c(uVar3);
    func_0x0001006d0094();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_39;
    func_0x000107c61170(uVar2);
    func_0x0001006d0094();
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_40;
    func_0x000107c61170(uVar2);
    func_0x0001006d0094();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_42;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_43;
    *(undefined1 *)((long)puVar1 + 0xd) = param_43._1_1_;
    puVar1[0x24] = param_45;
    *(undefined1 *)((long)puVar1 + 0xe) = param_46;
  }
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006cffd4; end: 1006cffdb;  */

void FUN_1006cffd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1006cffdc; end: 1006d004f; -[SCUploadMediaDataManagerServices initWithBoltUploaderLazy:] */

undefined1 * FUN_1006cffdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702098;
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



/* Entry: 1006d0050; end: 1006d008b;  */

void FUN_1006d0050(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006d008c; end: 1006d00cb;  */

void FUN_1006d008c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1006d00cc; end: 1006d011f;  */

void FUN_1006d00cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d0120; end: 1006d10e7;  */

void FUN_1006d0120(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_10023d128();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar29 = uVar2;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x28) = uVar29;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uVar18;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0xb0) = uVar21;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  puVar20 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar20;
  puVar20 = PTR_PTR_1126a8508;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar20;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar28 = 0xd000000000000010;
  uVar21 = uVar28;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc7150);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar20);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar28);
  func_0x000107c61174();
  func_0x000107c61174(puVar20);
  uVar21 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc8a00);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar20);
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc8a30);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efc8a50);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc88c0);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000015;
  uVar21 = uVar28;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef384a0);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar20);
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(puVar20);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar31 = 0xd000000000000016;
  uVar21 = uVar31;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar21 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc8a80);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  uVar30 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc8ab0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar28);
  func_0x000107c61174();
  func_0x000107c61174(uVar30);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar31);
  uVar21 = *(undefined8 *)(param_2 + 0xb0);
  func_0x000107c61174(uVar30);
  func_0x000107c61174(uVar21);
  uVar29 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1d180);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar29);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar23);
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar24);
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c8a0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc6540);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar27);
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2ba00);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar21);
  lVar32 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar30);
  func_0x000107c61174();
  uVar21 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc8ad0);
  func_0x000107c5a49c(uVar30);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(uVar21);
  func_0x000107c3e740(uVar30);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar32 != 0) {
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    *(long *)(param_2 + 0xe8) = lVar32;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006d10e8);
  (*pcVar1)();
}



/* Entry: 1006d10e8; end: 1006d113b;  */

void FUN_1006d10e8(void)

{
  long unaff_x20;
  
  FUN_1006d0120(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 1006d113c; end: 1006d1143;  */

void FUN_1006d113c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d1144; end: 1006d1197;  */

void FUN_1006d1144(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x90);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d1198; end: 1006d1307;  */

void FUN_1006d1198(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_PTR_1126da8e8;
  func_0x000107c610f4(PTR_PTR_1126da8e8);
  lVar3 = param_1;
  FUN_1006d1308(param_1);
  func_0x000107c61180();
  lVar4 = param_1 + 0x20;
  func_0x0001006d1338(lVar4);
  func_0x000107c61180();
  lVar5 = param_1 + 0x40;
  FUN_1006a7df8(lVar5);
  func_0x000107c61180();
  lVar6 = param_1 + 0x60;
  func_0x0001006d1368(lVar6);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  lVar7 = param_1 + 0xa0;
  FUN_1006a7d84(lVar7);
  func_0x000107c61180();
  uVar1 = *(undefined1 *)(param_1 + 0xb8);
  FUN_1006d1398();
  func_0x000107c61180();
  func_0x000107c460dc(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,uVar8,lVar7,uVar1);
  FUN_1006d2208();
  func_0x000107c61170(lVar7);
  func_0x0001006d2210();
  func_0x0001006d2218();
  func_0x0001006d2220();
  func_0x0001006d2228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006d1308; end: 1006d1397;  */

void FUN_1006d1308(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000100101220();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006d1398; end: 1006d13c7;  */

void FUN_1006d1398(void)

{
  func_0x000107c610f4(PTR_PTR_1126da8f0);
  func_0x000107c49570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006d13c8; end: 1006d1d77;  */

void FUN_1006d13c8(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_10022e054();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  puVar1 = PTR_PTR_1126a84e8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar16 = uStack_e8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc88c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef384a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc64f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc88e0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc8900);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc6540);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc8930);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efc8950);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61174();
  uVar18 = uVar19;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  *(undefined8 *)(param_2 + 0x90) = uVar18;
  *param_1 = param_2;
  return;
}



/* Entry: 1006d1d78; end: 1006d1dbb;  */

void FUN_1006d1d78(void)

{
  long unaff_x20;
  
  FUN_1006d13c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1006d1dbc; end: 1006d1dc3;  */

void FUN_1006d1dbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d1dc4; end: 1006d1e17;  */

void FUN_1006d1dc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d1e18; end: 1006d1e1f;  */

void FUN_1006d1e18(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001d17a8();
  func_0x000107c613fc();
  FUN_1006d1e94(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d1e20; end: 1006d1e93;  */

void FUN_1006d1e20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001d17a8();
  func_0x000107c613fc();
  FUN_1006d1e94(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1006d1e94; end: 1006d1ffb;  */

void FUN_1006d1e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a84a0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1006d1ffc; end: 1006d2043; -[SCNMessagingChatWallpaperBlizzardMetadata initWithWallpaperSource:] */

void FUN_1006d1ffc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706e20;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1006d2044; end: 1006d2207; -[SCNMessagingChatWallpaper initWithContentObject:localMediaReference:mediaReferenceId:encryptionInfo:lastUpdatedTimestampMs:initiatingUserId:isInAppReportable:blizzardMetadata:] */

undefined1 *
FUN_1006d2044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112706e18;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006d2208; end: 1006d222f;  */

void FUN_1006d2208(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006d2230; end: 1006d2313; -[SCMPAudioProcessingServiceProvider provide] */

void FUN_1006d2230(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bf518;
  func_0x000107c610f4(PTR_PTR_1126bf518);
  func_0x000107c45840();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006d2314; end: 1006d231b;  */

void FUN_1006d2314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006d231c; end: 1006d2333; -[SCArroyoListConversationsCallback onListLocalConversationsComplete:] */

void FUN_1006d231c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006d232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1006d2334; end: 1006d2393;  */

/* WARNING: Possible PIC construction at 0x0001006d237c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006d2380) */

void FUN_1006d2334(long param_1,undefined8 param_2)

{
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110894340);
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3c0ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1006d2394; end: 1006d23b3;  */

bool FUN_1006d2394(undefined8 param_1,long param_2)

{
  func_0x000107c406e8(param_2);
  return param_2 == 1;
}



/* Entry: 1006d23b4; end: 1006d23bb; -[SCNMessagingConversation conversationType] */

undefined8 FUN_1006d23b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1006d23bc; end: 1006d2473; -[SCGroupsDataUpdater _performFetchLocalAndRemoteSnapchattersForConversations:completion:] */

void FUN_1006d23bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1006dba00;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1006d2474; end: 1006d255f; -[SCNMessagingConversation .cxx_destruct] */

void FUN_1006d2474(long param_1)

{
  FUN_1006d2560(param_1 + 0x118);
  FUN_1006d2560(param_1 + 0x110);
  FUN_1006d2560(param_1 + 0x108);
  FUN_1006d2560(param_1 + 0x100);
  FUN_1006d2560(param_1 + 0xf8);
  FUN_1006d2560(param_1 + 0xf0);
  FUN_1006d2560(param_1 + 0xe8);
  FUN_1006d2560(param_1 + 0xe0);
  FUN_1006d2560(param_1 + 0xd0);
  FUN_1006d2560(param_1 + 200);
  FUN_1006d2560(param_1 + 0xb8);
  FUN_1006d2560(param_1 + 0xb0);
  FUN_1006d2560(param_1 + 0xa8);
  FUN_1006d2560(param_1 + 0x98);
  FUN_1006d2560(param_1 + 0x90);
  FUN_1006d2560(param_1 + 0x88);
  FUN_1006d2560(param_1 + 0x80);
  FUN_1006d2560(param_1 + 0x70);
  FUN_1006d2560(param_1 + 0x58);
  FUN_1006d2560(param_1 + 0x50);
  FUN_1006d2560(param_1 + 0x48);
  FUN_1006d2560(param_1 + 0x38);
  FUN_1006d2560(param_1 + 0x28);
  FUN_1006d2560(param_1 + 0x20);
  FUN_1006d2560(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1006d2560; end: 1006d2567;  */

void FUN_1006d2560(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1006d2568; end: 1006d2573; -[SCNMessagingParticipant .cxx_destruct] */

void FUN_1006d2568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1006d2574; end: 1006d2633; -[SCNMessagingConversationSubTypeMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001006d258c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006d2590) */

void FUN_1006d2574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1006d2634; end: 1006d29eb;  */

undefined8 * FUN_1006d2634(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_110ce0030;
  *(undefined2 *)((long)param_1 + 0xc) = 0x101;
  func_0x0001006d25b0(param_1 + 2);
  param_1[9] = &PTR_DAT_110cd4978;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xf) = 0;
  return param_1;
}



/* Entry: 1006d29ec; end: 1006d2a53;  */

long ** FUN_1006d29ec(long param_1,long **param_2,ulong param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong unaff_x23;
  long **pplVar10;
  undefined8 unaff_x24;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  ulong uStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long *aplStack_c8 [4];
  long **pplStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  pplVar10 = param_2;
  FUN_10016447c();
  if ((int)pplVar10 != 0) {
    func_0x000107c60e5c();
    *(int *)pplVar10 = 0xd;
    *(undefined4 *)(param_1 + 0x2c) = 0xfffffffb;
    return pplVar10;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  plStack_a0 = (long *)0xaaaaaaaaaaaaaaaa;
  pplVar10 = aplStack_c8;
  FUN_10012dd4c(aplStack_c8,&UNK_10f7454a9,&UNK_10f74542c,0x1d0);
  pplVar5 = &plStack_a0;
  uVar6 = 0;
  uVar7 = 0;
  FUN_10012defc(pplVar5,aplStack_c8,0,0);
  if ((bRam000000011336f9a8 & 0x19) != 0) {
    pplVar5 = (long **)&UNK_10f74523a;
    pplStack_a8 = pplVar10;
    func_0x000107c35cb0(&UNK_10f74523a,&pplStack_a8);
  }
  uVar9 = (uint)param_3;
  uVar1 = (int)(uVar9 << 0x1e) >> 0x1f & 0xa00;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((param_3 & 8) != 0) {
    uVar1 = 0x600;
  }
  if ((param_3 & 0x10) != 0) {
    uVar1 = 0x400;
  }
  if (uVar1 == 0 && (param_3 & 5) == 0) {
    func_0x000107c60e5c();
    *(undefined4 *)pplVar5 = 0x66;
LAB_1001649a0:
    uVar8 = 0xffffffff;
    pplVar5 = pplVar10;
LAB_1001649a4:
    *(undefined4 *)(param_1 + 0x2c) = uVar8;
  }
  else {
    uVar3 = 2;
    if (((uVar9 ^ 0xffffffff) & 0x60) != 0) {
      uVar3 = uVar9 >> 6 & 1;
    }
    uVar2 = uVar1 | uVar3;
    if ((param_3 & 0x10000) != 0) {
      uVar2 = uVar1 | uVar3 | 0x20004;
    }
    uVar1 = uVar2;
    if ((param_3 & 0x80) != 0) {
      uVar1 = uVar2 | 9;
    }
    uVar3 = uVar2 | 10;
    if (((uVar9 ^ 0xffffffff) & 0xa0) != 0) {
      uVar3 = uVar1;
    }
    unaff_x23 = (ulong)uVar3;
    do {
      pplVar10 = (long **)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        pplVar10 = param_2;
      }
      uStack_d0 = 0x180;
      func_0x000107c611c4(pplVar10,unaff_x23);
      iVar4 = (int)pplVar10;
      pplVar5 = pplVar10;
    } while ((iVar4 == -1) && (func_0x000107c60e5c(), *(int *)pplVar5 == 4));
    if (((uVar9 >> 2 & 1) != 0) && (iVar4 < 0)) {
      do {
        pplVar5 = (long **)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          pplVar5 = param_2;
        }
        uStack_d0 = 0x180;
        func_0x000107c611c4(pplVar5,uVar3 | 0x200);
        if ((int)pplVar5 != -1) {
          pplVar10 = pplVar5;
          if (-1 < (int)pplVar5) {
            *(undefined1 *)(param_1 + 0x30) = 1;
            if ((param_3 & 10) == 0) goto LAB_1001648d0;
            goto LAB_1001648c8;
          }
          break;
        }
        func_0x000107c60e5c();
      } while (*(int *)pplVar5 == 4);
LAB_100164960:
      unaff_x24 = 0x180;
      func_0x000107c60e5c();
      uVar1 = *(int *)pplVar5 - 1;
      if ((0x1d < uVar1) || ((0x2ad99813U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
        func_0x000100220d50(&UNK_10f745488);
        goto LAB_1001649a0;
      }
      uVar8 = *(undefined4 *)(&UNK_10e574918 + (ulong)uVar1 * 4);
      pplVar5 = pplVar10;
      goto LAB_1001649a4;
    }
    if (iVar4 < 0) goto LAB_100164960;
    pplVar5 = pplVar10;
    if ((param_3 & 10) != 0) {
LAB_1001648c8:
      *(undefined1 *)(param_1 + 0x30) = 1;
      pplVar5 = pplVar10;
    }
LAB_1001648d0:
    unaff_x24 = 0x180;
    if ((uVar9 >> 0xd & 1) != 0) {
      pplVar10 = (long **)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        pplVar10 = param_2;
      }
      func_0x000107c616a4(pplVar10);
    }
    *(byte *)(param_1 + 0x31) = (byte)(uVar9 >> 10) & 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar1 = *(uint *)(param_1 + 8);
    pplVar10 = (long **)(ulong)uVar1;
    if (uVar1 != 0xffffffff) {
      if (uVar1 == (uint)pplVar5) goto LAB_100164a28;
      func_0x000107c60f10();
      if ((((int)pplVar10 != 0) &&
          ((((int)pplVar10 != -1 || (func_0x000107c60e5c(), *(int *)pplVar10 != 4)) &&
           (func_0x000107c60e5c(), *(int *)pplVar10 == 9)))) &&
         (func_0x000107c2ca5c(aplStack_c8,&UNK_10f74421b,0x2b), aplStack_c8[0] != (long *)0x0)) {
        (**(code **)(*aplStack_c8[0] + 8))();
      }
    }
    *(uint *)(param_1 + 8) = (uint)pplVar5;
  }
  pplVar10 = &plStack_a0;
  func_0x0001001331dc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pplVar10;
  }
  func_0x000107c60e78();
LAB_100164a28:
  func_0x000107c60ebc();
  pcStack_d8 = FUN_100164a2c;
  uStack_110 = unaff_x24;
  uStack_108 = unaff_x23;
  pplStack_100 = pplVar5;
  pplStack_f8 = param_2;
  uStack_f0 = param_3;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_6);
  pplVar10 = (long **)pplVar10[3];
  FUN_10015144c();
  FUN_1000fbed0();
  (*(code *)(*pplVar10)[5])(pplVar10,uVar6,uVar7,param_5,auStack_128,param_7);
  FUN_1000e30f4(auStack_128);
  func_0x00010015cacc();
  return pplVar10;
}



/* Entry: 1006d2a54; end: 1006d2ac7; -[SCAudioProcessingServices initWithAudioProcessingSessionFactory:] */

undefined1 * FUN_1006d2a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701fc8;
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



/* Entry: 1006d2ac8; end: 1006d2af3;  */

void FUN_1006d2ac8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006d2af4; end: 1006d2afb;  */

void FUN_1006d2af4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d2afc; end: 1006d2b4f;  */

void FUN_1006d2afc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d2b50; end: 1006d2b57;  */

void FUN_1006d2b50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d46b4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x0001006d2bc0();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d2b58; end: 1006d2cf7;  */

void FUN_1006d2b58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d46b4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x0001006d2bc0();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d2cf8; end: 1006d2dff; -[SCVideoTrackingServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001006d2dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006d2dd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006d2dc8) */
/* WARNING: Removing unreachable block (ram,0x0001006d2dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006d2cf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108a8488);
  func_0x000107c61180();
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108a84c8);
  func_0x000107c61180();
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108a8508);
  func_0x000107c61180();
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108a8548);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126bcfb0;
  func_0x000107c610f4(PTR_PTR_1126bcfb0);
  func_0x000107c494cc();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112727a70);
  }
  func_0x000107c42c20(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1006d2e00; end: 1006d2efb; -[SCVideoTrackingServices initWithVideoTrackerFactory:targetTrajectoryFactory:targetTrajectoryManagerFactory:imageProcessingFactory:] */

undefined1 *
FUN_1006d2e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270a578;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006d2efc; end: 1006d302b;  */

void FUN_1006d2efc(void)

{
  return;
}



/* Entry: 1006d302c; end: 1006d3033;  */

void FUN_1006d302c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d3034; end: 1006d3087;  */

void FUN_1006d3034(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d3088; end: 1006d3097;  */

void FUN_1006d3088(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020fd1c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a84e0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006d3098; end: 1006d33db;  */

void FUN_1006d3098(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10020fd1c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a84e0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1006d33dc; end: 1006d34bf; -[SCMediaTranscodingLoggingServiceProvider provide] */

void FUN_1006d33dc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bc418;
  func_0x000107c610f4(PTR_PTR_1126bc418);
  func_0x000107c476b8();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006d34c0; end: 1006d3533; -[SCMediaTranscodingLoggingServices initWithMediaTranscodingLogger:] */

undefined1 * FUN_1006d34c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702160;
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



/* Entry: 1006d3534; end: 1006d3577;  */

void FUN_1006d3534(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006d3578; end: 1006d357f;  */

void FUN_1006d3578(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d3580; end: 1006d35d3;  */

void FUN_1006d3580(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d35d4; end: 1006d35db;  */

void FUN_1006d35d4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d18c0();
  func_0x000107c613fc();
  func_0x0001006d363c(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006d35dc; end: 1006d3703;  */

void FUN_1006d35dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d18c0();
  func_0x000107c613fc();
  func_0x0001006d363c(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1006d3704; end: 1006d375f; -[SCMTParameterServiceProvider provide] */

void FUN_1006d3704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11089fb90);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bc3f8;
  func_0x000107c610f4(PTR_PTR_1126bc3f8);
  func_0x000107c47d58();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006d3760; end: 1006d37d3; -[SCVideoTranscodingParameterProviderServices initWithParameterProviderLazy:] */

undefined1 * FUN_1006d3760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127021a8;
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



/* Entry: 1006d37d4; end: 1006d3947;  */

void FUN_1006d37d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d3948; end: 1006d3997;  */

long FUN_1006d3948(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 1006d3998; end: 1006d39f3; -[SCSpectaclesImageProcessServiceProvider provide] */

void FUN_1006d3998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110a16428);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d8ae8;
  func_0x000107c610f4(PTR_PTR_1126d8ae8);
  func_0x000107c46e08();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006d39f4; end: 1006d3a67; -[SCSpectaclesImageProcessServices initWithImageProcessCommandFactory:] */

undefined1 * FUN_1006d39f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702a48;
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



/* Entry: 1006d3a68; end: 1006d3aa7;  */

void FUN_1006d3a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e376c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da21598;
  func_0x000107c61520(&UNK_10da21598,&UNK_110494ee8);
  puRam0000000112e376c0 = puVar1;
  return;
}



/* Entry: 1006d3aa8; end: 1006d3aaf;  */

void FUN_1006d3aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d3ab0; end: 1006d3b03;  */

void FUN_1006d3ab0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d3b04; end: 1006d3b13;  */

void FUN_1006d3b04(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020fa38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a84b0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006d3b14; end: 1006d3e57;  */

void FUN_1006d3b14(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10020fa38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a84b0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1006d3e58; end: 1006d3f23;  */

void FUN_1006d3e58(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    lVar2 = param_1 + 0x70;
    func_0x000107c2cfc4();
    if (lVar2 < 0) {
      iVar1 = 0x5000000;
    }
    else if (param_2 == 0) {
      func_0x000107c2d8fc();
      iVar1 = (int)lVar2;
    }
    else {
      lVar2 = lVar2 + *(int *)(*(long *)(param_1 + 0x88) + 0xc);
      func_0x000107c2d8fc(lVar2,*(undefined4 *)(param_1 + 8));
      iVar1 = param_2 * 0xe4e;
      if ((int)lVar2 <= param_2 * 0xe4e) {
        iVar1 = (int)lVar2;
      }
    }
    *(int *)(param_1 + 0x144) = iVar1;
    return;
  }
  return;
}



/* Entry: 1006d3f24; end: 1006d4197; -[SCMPGlobalQueueServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006d3f24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bf4d0;
  lVar2 = param_1 + _DAT_11272ad2c;
  func_0x000107c61148(lVar2);
  lVar5 = lVar2;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c52d78(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126bf4d0;
  lVar2 = param_1 + _DAT_11272ad30;
  func_0x000107c61148(lVar2);
  lVar5 = lVar2;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c54f3c(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126bf4d0;
  lVar5 = (long)_DAT_11272ad34;
  lVar2 = param_1 + lVar5;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c3ebd4();
  func_0x000107c544ec(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126bf4d0;
  lVar5 = param_1 + lVar5;
  func_0x000107c61148(lVar5);
  lVar2 = lVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c3ebd4();
  func_0x000107c54150(puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  puVar4 = PTR_PTR_1126bf4d0;
  param_1 = param_1 + _DAT_11272ad38;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c52848(puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126bf538;
  func_0x000107c610f4(PTR_PTR_1126bf538);
  func_0x000107c46e0c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1006d4198; end: 1006d41a7; +[SCImageProcessGlobalQueue setBlizzardLogger:] */

void FUN_1006d4198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(0x1137308a0,param_3);
  return;
}



/* Entry: 1006d41a8; end: 1006d41b7; +[SCImageProcessGlobalQueue setGrapheneRegistry:] */

void FUN_1006d41a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(0x1137308a8,param_3);
  return;
}



/* Entry: 1006d41b8; end: 1006d41c3; +[SCImageProcessGlobalQueue setEnableReportGLErrors:] */

void FUN_1006d41b8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam0000000113730888 = param_3;
  return;
}



/* Entry: 1006d41c4; end: 1006d41cf; +[SCImageProcessGlobalQueue setDisableCATransactionFlush:] */

void FUN_1006d41c4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam0000000113730889 = param_3;
  return;
}



/* Entry: 1006d41d0; end: 1006d421b; -[SCNMessagingChatWallpaper .cxx_destruct] */

void FUN_1006d41d0(long param_1)

{
  FUN_1006d421c(param_1 + 0x40);
  FUN_1006d421c(param_1 + 0x38);
  FUN_1006d421c(param_1 + 0x28);
  FUN_1006d421c(param_1 + 0x20);
  FUN_1006d421c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1006d421c; end: 1006d4223;  */

void FUN_1006d421c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1006d4224; end: 1006d4247; +[SCImageProcessGlobalQueue setApplicationLifecycleEvent:] */

void FUN_1006d4224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(0x113730880,param_3);
  return;
}



/* Entry: 1006d4248; end: 1006d4273;  */

void FUN_1006d4248(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_10065adc4();
  while (param_1 != unaff_x19) {
    FUN_1006d4274();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006d4274; end: 1006d427b;  */

long FUN_1006d4274(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + -0x20;
  func_0x000100100fd4(&lStack_28);
  return param_1 + -0x20;
}



/* Entry: 1006d427c; end: 1006d42ef; -[SCImageProcessGlobalQueueServices initWithImageProcessQueue:] */

undefined1 * FUN_1006d427c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a5c0;
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



/* Entry: 1006d42f0; end: 1006d4303;  */

void FUN_1006d42f0(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  unaff_x19[1] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*unaff_x19);
  return;
}



/* Entry: 1006d4304; end: 1006d4397;  */

long FUN_1006d4304(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e0e8;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1006d4398; end: 1006d43db;  */

void FUN_1006d4398(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006d43dc; end: 1006d440b; -[SCArroyoListConversationsCallback .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001006d43f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006d43f8) */

void FUN_1006d43dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1006d440c; end: 1006d4413;  */

void FUN_1006d440c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d4414; end: 1006d4467;  */

void FUN_1006d4414(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006d4468; end: 1006d4477;  */

void FUN_1006d4468(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10021a310();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar8 = PTR_PTR_1126a86d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efcd750);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efcd770);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar2 + 0x40) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006d482c);
  (*pcVar1)();
}



/* Entry: 1006d4478; end: 1006d482b;  */

void FUN_1006d4478(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_10021a310();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a86d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efcd750);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efcd770);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006d482c);
  (*pcVar1)();
}


