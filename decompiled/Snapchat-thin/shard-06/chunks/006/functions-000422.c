/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bfab30; end: 104bfabcb;  */

undefined8 FUN_104bfab30(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815e10 & 1) == 0) {
    iVar4 = 0x13815e10;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bfabcc();
      lStack_20 = lRam0000000113815e18;
      if (lRam0000000113815e18 != 0) {
        piVar1 = (int *)(lRam0000000113815e18 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815e00,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815e10);
    }
  }
  return 0x113815e00;
}



/* Entry: 104bfabcc; end: 104bfac1f;  */

void FUN_104bfabcc(void)

{
  int iVar1;
  
  if ((bRam0000000113815e20 & 1) == 0) {
    iVar1 = 0x13815e20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815e18,"_djinni_interface_MessagingClientUpdatesListener");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815e20);
      return;
    }
  }
  return;
}



/* Entry: 104bfac20; end: 104bfad3b;  */

/* WARNING: Possible PIC construction at 0x0001052817f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001052817f8) */
/* WARNING: Removing unreachable block (ram,0x00010528183c) */
/* WARNING: Removing unreachable block (ram,0x000105281878) */
/* WARNING: Removing unreachable block (ram,0x000105281930) */
/* WARNING: Removing unreachable block (ram,0x000105281934) */
/* WARNING: Removing unreachable block (ram,0x000105281960) */
/* WARNING: Removing unreachable block (ram,0x000105281964) */
/* WARNING: Removing unreachable block (ram,0x000105281980) */
/* WARNING: Removing unreachable block (ram,0x000105281984) */
/* WARNING: Removing unreachable block (ram,0x0001052819b8) */
/* WARNING: Removing unreachable block (ram,0x0001052819a0) */
/* WARNING: Removing unreachable block (ram,0x0001052819c4) */
/* WARNING: Removing unreachable block (ram,0x0001052819ec) */
/* WARNING: Removing unreachable block (ram,0x0001052819fc) */
/* WARNING: Removing unreachable block (ram,0x000105281a08) */
/* WARNING: Removing unreachable block (ram,0x000105281a40) */
/* WARNING: Removing unreachable block (ram,0x000105281a78) */
/* WARNING: Removing unreachable block (ram,0x000105281a68) */
/* WARNING: Removing unreachable block (ram,0x000105281a80) */
/* WARNING: Removing unreachable block (ram,0x000105281aa8) */
/* WARNING: Removing unreachable block (ram,0x000105281aac) */
/* WARNING: Removing unreachable block (ram,0x000105281ac8) */
/* WARNING: Removing unreachable block (ram,0x000105281acc) */
/* WARNING: Removing unreachable block (ram,0x000105281b44) */
/* WARNING: Removing unreachable block (ram,0x000105281b48) */
/* WARNING: Removing unreachable block (ram,0x000105281bc8) */
/* WARNING: Removing unreachable block (ram,0x000105281b64) */
/* WARNING: Removing unreachable block (ram,0x000105281b8c) */
/* WARNING: Removing unreachable block (ram,0x000105281bd8) */
/* WARNING: Removing unreachable block (ram,0x000105281be0) */
/* WARNING: Removing unreachable block (ram,0x000105281c14) */
/* WARNING: Removing unreachable block (ram,0x000105281c18) */
/* WARNING: Removing unreachable block (ram,0x000105281c90) */
/* WARNING: Removing unreachable block (ram,0x000105281ca4) */
/* WARNING: Removing unreachable block (ram,0x000105281ce4) */
/* WARNING: Removing unreachable block (ram,0x000105281cf4) */
/* WARNING: Removing unreachable block (ram,0x000105281d04) */
/* WARNING: Removing unreachable block (ram,0x000105281d44) */
/* WARNING: Removing unreachable block (ram,0x000105281cc8) */
/* WARNING: Removing unreachable block (ram,0x000105281ba0) */
/* WARNING: Removing unreachable block (ram,0x000105281a14) */
/* WARNING: Removing unreachable block (ram,0x00010528184c) */

undefined1 *
FUN_104bfac20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar6;
  undefined1 auStack_940 [8];
  undefined1 auStack_938 [8];
  undefined1 auStack_930 [8];
  undefined1 auStack_928 [8];
  undefined1 auStack_920 [8];
  undefined1 auStack_918 [8];
  undefined1 auStack_910 [8];
  undefined1 auStack_908 [8];
  undefined1 auStack_900 [8];
  undefined1 auStack_8f8 [8];
  undefined1 auStack_8f0 [8];
  undefined1 auStack_8e8 [8];
  undefined1 auStack_8e0 [8];
  undefined1 auStack_8d8 [8];
  undefined1 auStack_8d0 [8];
  undefined1 auStack_8c8 [8];
  undefined1 auStack_8c0 [8];
  undefined1 auStack_8b8 [8];
  undefined1 auStack_8b0 [8];
  undefined1 auStack_8a8 [8];
  undefined1 auStack_8a0 [8];
  undefined1 auStack_898 [8];
  undefined1 auStack_890 [8];
  undefined1 auStack_888 [8];
  undefined1 auStack_880 [8];
  undefined1 auStack_878 [8];
  undefined1 auStack_870 [8];
  undefined1 auStack_868 [8];
  undefined1 auStack_860 [8];
  undefined1 auStack_858 [8];
  undefined1 auStack_850 [8];
  undefined1 auStack_848 [8];
  undefined1 auStack_840 [8];
  undefined1 auStack_838 [8];
  undefined1 auStack_830 [8];
  undefined1 auStack_828 [8];
  undefined1 auStack_820 [8];
  undefined1 auStack_818 [8];
  undefined1 auStack_810 [8];
  undefined1 auStack_808 [8];
  undefined1 auStack_800 [8];
  undefined1 auStack_7f8 [8];
  undefined1 auStack_7f0 [8];
  undefined1 auStack_7e8 [24];
  undefined1 auStack_7d0 [24];
  undefined1 auStack_7b8 [24];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [24];
  undefined1 auStack_740 [24];
  undefined1 auStack_728 [24];
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined8 uStack_3f8;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  func_0x000104bfaf78();
  uStack_48 = extraout_x8;
  FUN_104bfad3c(auStack_88,param_2);
  func_0x00010529dd1c(auStack_78,param_3);
  FUN_104be6c64(auStack_68,param_4);
  FUN_104be6d04(auStack_58,param_5);
  FUN_104be6a78(auStack_98,param_1 + 8,0,auStack_88,4);
  func_0x000104bfafa8();
  lVar6 = 0x30;
  do {
    puVar4 = auStack_88 + lVar6;
    func_0x00010b9a8d98();
    lVar6 = lVar6 + -0x10;
    bVar1 = lVar6 == -0x10;
  } while (!bVar1);
  func_0x000104bfaf5c(uStack_48);
  if (bVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = auStack_58;
  lVar6 = -0x40;
  do {
    func_0x00010b9a8d98();
    puVar4 = puVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0);
  func_0x000104bfafb0();
  uVar2 = puVar4[0x428] == '\x01';
  if ((bool)uVar2) {
    uStack_3f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam00000001136b9740 & 1) == 0) {
      iVar3 = 0x136b9740;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x0001003a83dc(auStack_7f0,"_djinni_record_Conversation");
        pcVar5 = "conversationId";
        func_0x0001003a83dc(auStack_7f8,"conversationId");
        func_0x00010529dde0();
        func_0x0001003b1b50(auStack_7e8,auStack_7f8,pcVar5);
        pcVar5 = "title";
        func_0x0001003a83dc(auStack_800,"title");
        FUN_104bf1120();
        func_0x0001003b1b50(auStack_7d0,auStack_800,pcVar5);
        func_0x0001003a83dc(auStack_808,"participants");
        if ((bRam00000001136b9748 & 1) == 0) goto code_r0x000105282628;
        goto code_r0x000105281e38;
      }
    }
    while (func_0x000105282e50(uStack_3f8), !(bool)uVar2) {
      ___stack_chk_fail();
code_r0x000105282628:
      iVar3 = 0x136b9748;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x000105295dc0();
        func_0x00010b990868(0x1136b97a0);
        ___cxa_guard_release(0x1136b9748);
      }
code_r0x000105281e38:
      func_0x0001003b1b50(auStack_7b8,auStack_808,0x1136b97a0);
      pcVar5 = "retentionPolicy";
      func_0x0001003a83dc(auStack_810,"retentionPolicy");
      func_0x0001052838c8();
      func_0x0001003b1b50(auStack_7a0,auStack_810,pcVar5);
      pcVar5 = "conversationType";
      func_0x0001003a83dc(auStack_818,"conversationType");
      FUN_104bef548();
      func_0x0001003b1b50(auStack_788,auStack_818,pcVar5);
      pcVar5 = "chatNotificationPreference";
      func_0x0001003a83dc(auStack_820,"chatNotificationPreference");
      func_0x000105285014();
      func_0x0001003b1b50(auStack_770,auStack_820,pcVar5);
      pcVar5 = "gameNotificationPreference";
      func_0x0001003a83dc(auStack_828,"gameNotificationPreference");
      FUN_104bef6ac();
      func_0x0001003b1b50(auStack_758,auStack_828,pcVar5);
      pcVar5 = "callingNotificationPreference";
      func_0x0001003a83dc(auStack_830,"callingNotificationPreference");
      func_0x000105285014();
      func_0x0001003b1b50(auStack_740,auStack_830,pcVar5);
      pcVar5 = "blockedParticipantExceptions";
      func_0x0001003a83dc(auStack_838,"blockedParticipantExceptions");
      FUN_104bef3dc();
      func_0x0001003b1b50(auStack_728,auStack_838,pcVar5);
      pcVar5 = "nonFriendUserParticipantExceptions";
      func_0x0001003a83dc(auStack_840,"nonFriendUserParticipantExceptions");
      FUN_104bef3dc();
      func_0x0001003b1b50(auStack_710,auStack_840,pcVar5);
      pcVar5 = "joinedTimestampMs";
      func_0x0001003a83dc(auStack_848,"joinedTimestampMs");
      FUN_104bef5f8();
      func_0x0001003b1b50(auStack_6f8,auStack_848,pcVar5);
      pcVar5 = "sourcePage";
      func_0x0001003a83dc(auStack_850,"sourcePage");
      FUN_104bef5a0();
      func_0x0001003b1b50(auStack_6e0,auStack_850,pcVar5);
      pcVar5 = "lastSenderUserIds";
      func_0x0001003a83dc(auStack_858,"lastSenderUserIds");
      FUN_104bef3dc();
      func_0x0001003b1b50(auStack_6c8,auStack_858,pcVar5);
      pcVar5 = "latestReceivedReactionSeenId";
      func_0x0001003a83dc(auStack_860,"latestReceivedReactionSeenId");
      FUN_104bef5f8();
      func_0x0001003b1b50(auStack_6b0,auStack_860,pcVar5);
      pcVar5 = "createdTimestampMs";
      func_0x0001003a83dc(auStack_868,"createdTimestampMs");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_698,auStack_868,pcVar5);
      pcVar5 = "isFriendLinkPending";
      func_0x0001003a83dc(auStack_870,"isFriendLinkPending");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_680,auStack_870,pcVar5);
      pcVar5 = "pinnedTimestampMs";
      func_0x0001003a83dc(auStack_878,"pinnedTimestampMs");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_668,auStack_878,pcVar5);
      pcVar5 = "customNotificationSoundId";
      func_0x0001003a83dc(auStack_880,"customNotificationSoundId");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_650,auStack_880,pcVar5);
      func_0x0001003a83dc(auStack_888,"chatWallpaper");
      if ((bRam00000001136b9750 & 1) == 0) {
        iVar3 = 0x136b9750;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x000105280e58();
          func_0x00010b990784(0x1136b97b0);
          ___cxa_guard_release(0x1136b9750);
        }
      }
      func_0x0001003b1b50(auStack_638,auStack_888,0x1136b97b0);
      func_0x0001003a83dc(auStack_890,"lockedState");
      if ((bRam00000001136b9758 & 1) == 0) {
        iVar3 = 0x136b9758;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010b990e20(0x1136b97c0);
          ___cxa_guard_release(0x1136b9758);
        }
      }
      func_0x0001003b1b50(auStack_620,auStack_890,0x1136b97c0);
      func_0x0001003a83dc(auStack_898,"kickedParticipants");
      if ((bRam00000001136b9760 & 1) == 0) {
        iVar3 = 0x136b9760;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010528bdec();
          func_0x00010b990868(0x1136b97d0);
          ___cxa_guard_release(0x1136b9760);
        }
      }
      func_0x0001003b1b50(auStack_608,auStack_898,0x1136b97d0);
      pcVar5 = "streakMetadata";
      func_0x0001003a83dc(auStack_8a0,"streakMetadata");
      func_0x000105282944();
      func_0x0001003b1b50(auStack_5f0,auStack_8a0,pcVar5);
      pcVar5 = "conversationSubType";
      func_0x0001003a83dc(auStack_8a8,"conversationSubType");
      func_0x0001052829a0();
      func_0x0001003b1b50(auStack_5d8,auStack_8a8,pcVar5);
      func_0x0001003a83dc(auStack_8b0,"snapPostOpenViewingPolicy");
      if ((bRam00000001136b9768 & 1) == 0) {
        iVar3 = 0x136b9768;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010b990e20(0x1136b97e0);
          ___cxa_guard_release(0x1136b9768);
        }
      }
      func_0x0001003b1b50(auStack_5c0,auStack_8b0,0x1136b97e0);
      pcVar5 = "pendingDecryptionCount";
      func_0x0001003a83dc(auStack_8b8,"pendingDecryptionCount");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_5a8,auStack_8b8,pcVar5);
      pcVar5 = "initialMutualFriendCount";
      func_0x0001003a83dc(auStack_8c0,"initialMutualFriendCount");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_590,auStack_8c0,pcVar5);
      pcVar5 = "streakReminderEnabled";
      func_0x0001003a83dc(auStack_8c8,"streakReminderEnabled");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_578,auStack_8c8,pcVar5);
      pcVar5 = "categoryType";
      func_0x0001003a83dc(auStack_8d0,"categoryType");
      FUN_104bf8944();
      func_0x0001003b1b50(auStack_560,auStack_8d0,pcVar5);
      pcVar5 = "categoryId";
      func_0x0001003a83dc(auStack_8d8,"categoryId");
      FUN_104bf117c();
      func_0x0001003b1b50(auStack_548,auStack_8d8,pcVar5);
      pcVar5 = "isEligibleForInfiniteRetention";
      func_0x0001003a83dc(auStack_8e0,"isEligibleForInfiniteRetention");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_530,auStack_8e0,pcVar5);
      pcVar5 = "isEligibleForSevenDayRetention";
      func_0x0001003a83dc(auStack_8e8,"isEligibleForSevenDayRetention");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_518,auStack_8e8,pcVar5);
      pcVar5 = "metadataFormat";
      func_0x0001003a83dc(auStack_8f0,"metadataFormat");
      func_0x000105283654();
      func_0x0001003b1b50(auStack_500,auStack_8f0,pcVar5);
      pcVar5 = "customRingtoneSoundId";
      func_0x0001003a83dc(auStack_8f8,"customRingtoneSoundId");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_4e8,auStack_8f8,pcVar5);
      func_0x0001003a83dc(auStack_900,"availableRetentionModes");
      if ((bRam00000001136b9770 & 1) == 0) {
        iVar3 = 0x136b9770;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          if ((bRam00000001136b9778 & 1) == 0) {
            iVar3 = 0x136b9778;
            ___cxa_guard_acquire();
            if (iVar3 != 0) {
              if ((bRam00000001136b9780 & 1) == 0) {
                iVar3 = 0x136b9780;
                ___cxa_guard_acquire();
                if (iVar3 != 0) {
                  func_0x00010b990e20(0x1136b9810);
                  ___cxa_guard_release(0x1136b9780);
                }
              }
              func_0x00010b990868(0x1136b9810);
              ___cxa_guard_release(0x1136b9778);
            }
          }
          func_0x00010b990784(0x1136b9800);
          ___cxa_guard_release(0x1136b9770);
        }
      }
      func_0x0001003b1b50(auStack_4d0,auStack_900,0x1136b97f0);
      pcVar5 = "conversationSubTypeMetadata";
      func_0x0001003a83dc(auStack_908,"conversationSubTypeMetadata");
      func_0x0001052829fc();
      func_0x0001003b1b50(auStack_4b8,auStack_908,pcVar5);
      pcVar5 = "conversationInvitationMetadata";
      func_0x0001003a83dc(auStack_910,"conversationInvitationMetadata");
      func_0x000105282a58();
      func_0x0001003b1b50(auStack_4a0,auStack_910,pcVar5);
      pcVar5 = "backoffTimeMs";
      func_0x0001003a83dc(auStack_918,"backoffTimeMs");
      FUN_104bef438();
      func_0x0001003b1b50(auStack_488,auStack_918,pcVar5);
      pcVar5 = "activityData";
      func_0x0001003a83dc(auStack_920,"activityData");
      func_0x000105282ab4();
      func_0x0001003b1b50(auStack_470,auStack_920,pcVar5);
      pcVar5 = "isPreservedForLegalHold";
      func_0x0001003a83dc(auStack_928,"isPreservedForLegalHold");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_458,auStack_928,pcVar5);
      pcVar5 = "canCreatePoll";
      func_0x0001003a83dc(auStack_930,"canCreatePoll");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_440,auStack_930,pcVar5);
      func_0x0001003a83dc(auStack_938,"groupStoryConsentStatus");
      if ((bRam00000001136b9788 & 1) == 0) {
        iVar3 = 0x136b9788;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010b990e20(0x1136b9820);
          ___cxa_guard_release(0x1136b9788);
        }
      }
      func_0x0001003b1b50(auStack_428,auStack_938,0x1136b9820);
      pcVar5 = "groupStoryMayExist";
      func_0x0001003a83dc(auStack_940,"groupStoryMayExist");
      FUN_104bef4f0();
      func_0x0001003b1b50(auStack_410,auStack_940,pcVar5);
      FUN_104bdbd44(0x1136b9790,auStack_7f0,0,auStack_7e8,0x2a);
      lVar6 = 0x3d8;
      do {
        func_0x0001003b1c5c(auStack_7e8 + lVar6);
        lVar6 = lVar6 + -0x18;
        uVar2 = lVar6 == -0x18;
      } while (!(bool)uVar2);
      func_0x0001003a8c94(auStack_940);
      func_0x0001003a8c94(auStack_938);
      func_0x0001003a8c94(auStack_930);
      func_0x0001003a8c94(auStack_928);
      func_0x0001003a8c94(auStack_920);
      func_0x0001003a8c94(auStack_918);
      func_0x0001003a8c94(auStack_910);
      func_0x0001003a8c94(auStack_908);
      func_0x0001003a8c94(auStack_900);
      func_0x0001003a8c94(auStack_8f8);
      func_0x0001003a8c94(auStack_8f0);
      func_0x0001003a8c94(auStack_8e8);
      func_0x0001003a8c94(auStack_8e0);
      func_0x0001003a8c94(auStack_8d8);
      func_0x0001003a8c94(auStack_8d0);
      func_0x0001003a8c94(auStack_8c8);
      func_0x0001003a8c94(auStack_8c0);
      func_0x0001003a8c94(auStack_8b8);
      func_0x0001003a8c94(auStack_8b0);
      func_0x0001003a8c94(auStack_8a8);
      func_0x0001003a8c94(auStack_8a0);
      func_0x0001003a8c94(auStack_898);
      func_0x0001003a8c94(auStack_890);
      func_0x0001003a8c94(auStack_888);
      func_0x0001003a8c94(auStack_880);
      func_0x0001003a8c94(auStack_878);
      func_0x0001003a8c94(auStack_870);
      func_0x0001003a8c94(auStack_868);
      func_0x0001003a8c94(auStack_860);
      func_0x0001003a8c94(auStack_858);
      func_0x0001003a8c94(auStack_850);
      func_0x0001003a8c94(auStack_848);
      func_0x0001003a8c94(auStack_840);
      func_0x0001003a8c94(auStack_838);
      func_0x0001003a8c94(auStack_830);
      func_0x0001003a8c94(auStack_828);
      func_0x0001003a8c94(auStack_820);
      func_0x0001003a8c94(auStack_818);
      func_0x0001003a8c94(auStack_810);
      func_0x0001003a8c94(auStack_808);
      func_0x0001003a8c94(auStack_800);
      func_0x0001003a8c94(auStack_7f8);
      func_0x0001003a8c94(auStack_7f0);
      ___cxa_guard_release(0x1136b9740);
    }
    return (undefined1 *)0x1136b9790;
  }
  *(undefined2 *)(extraout_x8_00 + 1) = 1;
  *extraout_x8_00 = 0;
  return puVar4;
}



/* Entry: 104bfad3c; end: 104bfad5b;  */

/* WARNING: Possible PIC construction at 0x0001052817f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001052817f8) */
/* WARNING: Removing unreachable block (ram,0x00010528183c) */
/* WARNING: Removing unreachable block (ram,0x000105281878) */
/* WARNING: Removing unreachable block (ram,0x000105281930) */
/* WARNING: Removing unreachable block (ram,0x000105281934) */
/* WARNING: Removing unreachable block (ram,0x000105281960) */
/* WARNING: Removing unreachable block (ram,0x000105281964) */
/* WARNING: Removing unreachable block (ram,0x000105281980) */
/* WARNING: Removing unreachable block (ram,0x000105281984) */
/* WARNING: Removing unreachable block (ram,0x0001052819b8) */
/* WARNING: Removing unreachable block (ram,0x0001052819a0) */
/* WARNING: Removing unreachable block (ram,0x0001052819c4) */
/* WARNING: Removing unreachable block (ram,0x0001052819ec) */
/* WARNING: Removing unreachable block (ram,0x0001052819fc) */
/* WARNING: Removing unreachable block (ram,0x000105281a08) */
/* WARNING: Removing unreachable block (ram,0x000105281a40) */
/* WARNING: Removing unreachable block (ram,0x000105281a78) */
/* WARNING: Removing unreachable block (ram,0x000105281a68) */
/* WARNING: Removing unreachable block (ram,0x000105281a80) */
/* WARNING: Removing unreachable block (ram,0x000105281aa8) */
/* WARNING: Removing unreachable block (ram,0x000105281aac) */
/* WARNING: Removing unreachable block (ram,0x000105281ac8) */
/* WARNING: Removing unreachable block (ram,0x000105281acc) */
/* WARNING: Removing unreachable block (ram,0x000105281b44) */
/* WARNING: Removing unreachable block (ram,0x000105281b48) */
/* WARNING: Removing unreachable block (ram,0x000105281bc8) */
/* WARNING: Removing unreachable block (ram,0x000105281b64) */
/* WARNING: Removing unreachable block (ram,0x000105281b8c) */
/* WARNING: Removing unreachable block (ram,0x000105281bd8) */
/* WARNING: Removing unreachable block (ram,0x000105281be0) */
/* WARNING: Removing unreachable block (ram,0x000105281c14) */
/* WARNING: Removing unreachable block (ram,0x000105281c18) */
/* WARNING: Removing unreachable block (ram,0x000105281c90) */
/* WARNING: Removing unreachable block (ram,0x000105281ca4) */
/* WARNING: Removing unreachable block (ram,0x000105281ce4) */
/* WARNING: Removing unreachable block (ram,0x000105281cf4) */
/* WARNING: Removing unreachable block (ram,0x000105281d04) */
/* WARNING: Removing unreachable block (ram,0x000105281d44) */
/* WARNING: Removing unreachable block (ram,0x000105281cc8) */
/* WARNING: Removing unreachable block (ram,0x000105281ba0) */
/* WARNING: Removing unreachable block (ram,0x000105281a14) */
/* WARNING: Removing unreachable block (ram,0x00010528184c) */

long FUN_104bfad3c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_8a0 [8];
  undefined1 auStack_898 [8];
  undefined1 auStack_890 [8];
  undefined1 auStack_888 [8];
  undefined1 auStack_880 [8];
  undefined1 auStack_878 [8];
  undefined1 auStack_870 [8];
  undefined1 auStack_868 [8];
  undefined1 auStack_860 [8];
  undefined1 auStack_858 [8];
  undefined1 auStack_850 [8];
  undefined1 auStack_848 [8];
  undefined1 auStack_840 [8];
  undefined1 auStack_838 [8];
  undefined1 auStack_830 [8];
  undefined1 auStack_828 [8];
  undefined1 auStack_820 [8];
  undefined1 auStack_818 [8];
  undefined1 auStack_810 [8];
  undefined1 auStack_808 [8];
  undefined1 auStack_800 [8];
  undefined1 auStack_7f8 [8];
  undefined1 auStack_7f0 [8];
  undefined1 auStack_7e8 [8];
  undefined1 auStack_7e0 [8];
  undefined1 auStack_7d8 [8];
  undefined1 auStack_7d0 [8];
  undefined1 auStack_7c8 [8];
  undefined1 auStack_7c0 [8];
  undefined1 auStack_7b8 [8];
  undefined1 auStack_7b0 [8];
  undefined1 auStack_7a8 [8];
  undefined1 auStack_7a0 [8];
  undefined1 auStack_798 [8];
  undefined1 auStack_790 [8];
  undefined1 auStack_788 [8];
  undefined1 auStack_780 [8];
  undefined1 auStack_778 [8];
  undefined1 auStack_770 [8];
  undefined1 auStack_768 [8];
  undefined1 auStack_760 [8];
  undefined1 auStack_758 [8];
  undefined1 auStack_750 [8];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  
  uVar1 = *(char *)(param_2 + 0x428) == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_358 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9740 & 1) == 0) {
    iVar2 = 0x136b9740;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_750,"_djinni_record_Conversation");
      pcVar3 = "conversationId";
      func_0x0001003a83dc(auStack_758,"conversationId");
      func_0x00010529dde0();
      func_0x0001003b1b50(auStack_748,auStack_758,pcVar3);
      pcVar3 = "title";
      func_0x0001003a83dc(auStack_760,"title");
      FUN_104bf1120();
      func_0x0001003b1b50(auStack_730,auStack_760,pcVar3);
      func_0x0001003a83dc(auStack_768,"participants");
      if ((bRam00000001136b9748 & 1) == 0) goto code_r0x000105282628;
      goto code_r0x000105281e38;
    }
  }
  while (func_0x000105282e50(uStack_358), !(bool)uVar1) {
    ___stack_chk_fail();
code_r0x000105282628:
    iVar2 = 0x136b9748;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000105295dc0();
      func_0x00010b990868(0x1136b97a0);
      ___cxa_guard_release(0x1136b9748);
    }
code_r0x000105281e38:
    func_0x0001003b1b50(auStack_718,auStack_768,0x1136b97a0);
    pcVar3 = "retentionPolicy";
    func_0x0001003a83dc(auStack_770,"retentionPolicy");
    func_0x0001052838c8();
    func_0x0001003b1b50(auStack_700,auStack_770,pcVar3);
    pcVar3 = "conversationType";
    func_0x0001003a83dc(auStack_778,"conversationType");
    FUN_104bef548();
    func_0x0001003b1b50(auStack_6e8,auStack_778,pcVar3);
    pcVar3 = "chatNotificationPreference";
    func_0x0001003a83dc(auStack_780,"chatNotificationPreference");
    func_0x000105285014();
    func_0x0001003b1b50(auStack_6d0,auStack_780,pcVar3);
    pcVar3 = "gameNotificationPreference";
    func_0x0001003a83dc(auStack_788,"gameNotificationPreference");
    FUN_104bef6ac();
    func_0x0001003b1b50(auStack_6b8,auStack_788,pcVar3);
    pcVar3 = "callingNotificationPreference";
    func_0x0001003a83dc(auStack_790,"callingNotificationPreference");
    func_0x000105285014();
    func_0x0001003b1b50(auStack_6a0,auStack_790,pcVar3);
    pcVar3 = "blockedParticipantExceptions";
    func_0x0001003a83dc(auStack_798,"blockedParticipantExceptions");
    FUN_104bef3dc();
    func_0x0001003b1b50(auStack_688,auStack_798,pcVar3);
    pcVar3 = "nonFriendUserParticipantExceptions";
    func_0x0001003a83dc(auStack_7a0,"nonFriendUserParticipantExceptions");
    FUN_104bef3dc();
    func_0x0001003b1b50(auStack_670,auStack_7a0,pcVar3);
    pcVar3 = "joinedTimestampMs";
    func_0x0001003a83dc(auStack_7a8,"joinedTimestampMs");
    FUN_104bef5f8();
    func_0x0001003b1b50(auStack_658,auStack_7a8,pcVar3);
    pcVar3 = "sourcePage";
    func_0x0001003a83dc(auStack_7b0,"sourcePage");
    FUN_104bef5a0();
    func_0x0001003b1b50(auStack_640,auStack_7b0,pcVar3);
    pcVar3 = "lastSenderUserIds";
    func_0x0001003a83dc(auStack_7b8,"lastSenderUserIds");
    FUN_104bef3dc();
    func_0x0001003b1b50(auStack_628,auStack_7b8,pcVar3);
    pcVar3 = "latestReceivedReactionSeenId";
    func_0x0001003a83dc(auStack_7c0,"latestReceivedReactionSeenId");
    FUN_104bef5f8();
    func_0x0001003b1b50(auStack_610,auStack_7c0,pcVar3);
    pcVar3 = "createdTimestampMs";
    func_0x0001003a83dc(auStack_7c8,"createdTimestampMs");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_5f8,auStack_7c8,pcVar3);
    pcVar3 = "isFriendLinkPending";
    func_0x0001003a83dc(auStack_7d0,"isFriendLinkPending");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_5e0,auStack_7d0,pcVar3);
    pcVar3 = "pinnedTimestampMs";
    func_0x0001003a83dc(auStack_7d8,"pinnedTimestampMs");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_5c8,auStack_7d8,pcVar3);
    pcVar3 = "customNotificationSoundId";
    func_0x0001003a83dc(auStack_7e0,"customNotificationSoundId");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_5b0,auStack_7e0,pcVar3);
    func_0x0001003a83dc(auStack_7e8,"chatWallpaper");
    if ((bRam00000001136b9750 & 1) == 0) {
      iVar2 = 0x136b9750;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000105280e58();
        func_0x00010b990784(0x1136b97b0);
        ___cxa_guard_release(0x1136b9750);
      }
    }
    func_0x0001003b1b50(auStack_598,auStack_7e8,0x1136b97b0);
    func_0x0001003a83dc(auStack_7f0,"lockedState");
    if ((bRam00000001136b9758 & 1) == 0) {
      iVar2 = 0x136b9758;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b97c0);
        ___cxa_guard_release(0x1136b9758);
      }
    }
    func_0x0001003b1b50(auStack_580,auStack_7f0,0x1136b97c0);
    func_0x0001003a83dc(auStack_7f8,"kickedParticipants");
    if ((bRam00000001136b9760 & 1) == 0) {
      iVar2 = 0x136b9760;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010528bdec();
        func_0x00010b990868(0x1136b97d0);
        ___cxa_guard_release(0x1136b9760);
      }
    }
    func_0x0001003b1b50(auStack_568,auStack_7f8,0x1136b97d0);
    pcVar3 = "streakMetadata";
    func_0x0001003a83dc(auStack_800,"streakMetadata");
    func_0x000105282944();
    func_0x0001003b1b50(auStack_550,auStack_800,pcVar3);
    pcVar3 = "conversationSubType";
    func_0x0001003a83dc(auStack_808,"conversationSubType");
    func_0x0001052829a0();
    func_0x0001003b1b50(auStack_538,auStack_808,pcVar3);
    func_0x0001003a83dc(auStack_810,"snapPostOpenViewingPolicy");
    if ((bRam00000001136b9768 & 1) == 0) {
      iVar2 = 0x136b9768;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b97e0);
        ___cxa_guard_release(0x1136b9768);
      }
    }
    func_0x0001003b1b50(auStack_520,auStack_810,0x1136b97e0);
    pcVar3 = "pendingDecryptionCount";
    func_0x0001003a83dc(auStack_818,"pendingDecryptionCount");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_508,auStack_818,pcVar3);
    pcVar3 = "initialMutualFriendCount";
    func_0x0001003a83dc(auStack_820,"initialMutualFriendCount");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_4f0,auStack_820,pcVar3);
    pcVar3 = "streakReminderEnabled";
    func_0x0001003a83dc(auStack_828,"streakReminderEnabled");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_4d8,auStack_828,pcVar3);
    pcVar3 = "categoryType";
    func_0x0001003a83dc(auStack_830,"categoryType");
    FUN_104bf8944();
    func_0x0001003b1b50(auStack_4c0,auStack_830,pcVar3);
    pcVar3 = "categoryId";
    func_0x0001003a83dc(auStack_838,"categoryId");
    FUN_104bf117c();
    func_0x0001003b1b50(auStack_4a8,auStack_838,pcVar3);
    pcVar3 = "isEligibleForInfiniteRetention";
    func_0x0001003a83dc(auStack_840,"isEligibleForInfiniteRetention");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_490,auStack_840,pcVar3);
    pcVar3 = "isEligibleForSevenDayRetention";
    func_0x0001003a83dc(auStack_848,"isEligibleForSevenDayRetention");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_478,auStack_848,pcVar3);
    pcVar3 = "metadataFormat";
    func_0x0001003a83dc(auStack_850,"metadataFormat");
    func_0x000105283654();
    func_0x0001003b1b50(auStack_460,auStack_850,pcVar3);
    pcVar3 = "customRingtoneSoundId";
    func_0x0001003a83dc(auStack_858,"customRingtoneSoundId");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_448,auStack_858,pcVar3);
    func_0x0001003a83dc(auStack_860,"availableRetentionModes");
    if ((bRam00000001136b9770 & 1) == 0) {
      iVar2 = 0x136b9770;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        if ((bRam00000001136b9778 & 1) == 0) {
          iVar2 = 0x136b9778;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            if ((bRam00000001136b9780 & 1) == 0) {
              iVar2 = 0x136b9780;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x00010b990e20(0x1136b9810);
                ___cxa_guard_release(0x1136b9780);
              }
            }
            func_0x00010b990868(0x1136b9810);
            ___cxa_guard_release(0x1136b9778);
          }
        }
        func_0x00010b990784(0x1136b9800);
        ___cxa_guard_release(0x1136b9770);
      }
    }
    func_0x0001003b1b50(auStack_430,auStack_860,0x1136b97f0);
    pcVar3 = "conversationSubTypeMetadata";
    func_0x0001003a83dc(auStack_868,"conversationSubTypeMetadata");
    func_0x0001052829fc();
    func_0x0001003b1b50(auStack_418,auStack_868,pcVar3);
    pcVar3 = "conversationInvitationMetadata";
    func_0x0001003a83dc(auStack_870,"conversationInvitationMetadata");
    func_0x000105282a58();
    func_0x0001003b1b50(auStack_400,auStack_870,pcVar3);
    pcVar3 = "backoffTimeMs";
    func_0x0001003a83dc(auStack_878,"backoffTimeMs");
    FUN_104bef438();
    func_0x0001003b1b50(auStack_3e8,auStack_878,pcVar3);
    pcVar3 = "activityData";
    func_0x0001003a83dc(auStack_880,"activityData");
    func_0x000105282ab4();
    func_0x0001003b1b50(auStack_3d0,auStack_880,pcVar3);
    pcVar3 = "isPreservedForLegalHold";
    func_0x0001003a83dc(auStack_888,"isPreservedForLegalHold");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_3b8,auStack_888,pcVar3);
    pcVar3 = "canCreatePoll";
    func_0x0001003a83dc(auStack_890,"canCreatePoll");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_3a0,auStack_890,pcVar3);
    func_0x0001003a83dc(auStack_898,"groupStoryConsentStatus");
    if ((bRam00000001136b9788 & 1) == 0) {
      iVar2 = 0x136b9788;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b9820);
        ___cxa_guard_release(0x1136b9788);
      }
    }
    func_0x0001003b1b50(auStack_388,auStack_898,0x1136b9820);
    pcVar3 = "groupStoryMayExist";
    func_0x0001003a83dc(auStack_8a0,"groupStoryMayExist");
    FUN_104bef4f0();
    func_0x0001003b1b50(auStack_370,auStack_8a0,pcVar3);
    FUN_104bdbd44(0x1136b9790,auStack_750,0,auStack_748,0x2a);
    lVar4 = 0x3d8;
    do {
      func_0x0001003b1c5c(auStack_748 + lVar4);
      lVar4 = lVar4 + -0x18;
      uVar1 = lVar4 == -0x18;
    } while (!(bool)uVar1);
    func_0x0001003a8c94(auStack_8a0);
    func_0x0001003a8c94(auStack_898);
    func_0x0001003a8c94(auStack_890);
    func_0x0001003a8c94(auStack_888);
    func_0x0001003a8c94(auStack_880);
    func_0x0001003a8c94(auStack_878);
    func_0x0001003a8c94(auStack_870);
    func_0x0001003a8c94(auStack_868);
    func_0x0001003a8c94(auStack_860);
    func_0x0001003a8c94(auStack_858);
    func_0x0001003a8c94(auStack_850);
    func_0x0001003a8c94(auStack_848);
    func_0x0001003a8c94(auStack_840);
    func_0x0001003a8c94(auStack_838);
    func_0x0001003a8c94(auStack_830);
    func_0x0001003a8c94(auStack_828);
    func_0x0001003a8c94(auStack_820);
    func_0x0001003a8c94(auStack_818);
    func_0x0001003a8c94(auStack_810);
    func_0x0001003a8c94(auStack_808);
    func_0x0001003a8c94(auStack_800);
    func_0x0001003a8c94(auStack_7f8);
    func_0x0001003a8c94(auStack_7f0);
    func_0x0001003a8c94(auStack_7e8);
    func_0x0001003a8c94(auStack_7e0);
    func_0x0001003a8c94(auStack_7d8);
    func_0x0001003a8c94(auStack_7d0);
    func_0x0001003a8c94(auStack_7c8);
    func_0x0001003a8c94(auStack_7c0);
    func_0x0001003a8c94(auStack_7b8);
    func_0x0001003a8c94(auStack_7b0);
    func_0x0001003a8c94(auStack_7a8);
    func_0x0001003a8c94(auStack_7a0);
    func_0x0001003a8c94(auStack_798);
    func_0x0001003a8c94(auStack_790);
    func_0x0001003a8c94(auStack_788);
    func_0x0001003a8c94(auStack_780);
    func_0x0001003a8c94(auStack_778);
    func_0x0001003a8c94(auStack_770);
    func_0x0001003a8c94(auStack_768);
    func_0x0001003a8c94(auStack_760);
    func_0x0001003a8c94(auStack_758);
    func_0x0001003a8c94(auStack_750);
    ___cxa_guard_release(0x1136b9740);
  }
  return 0x1136b9790;
}



/* Entry: 104bfad5c; end: 104bfadd7;  */

long FUN_104bfad5c(long param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined8 uStack_28;
  
  func_0x000104bfaf78();
  if ((param_2 >> 0x20 & 1) == 0) {
    uStack_38 = 0;
    uStack_30 = 1;
  }
  else {
    uStack_38 = CONCAT44(uStack_38._4_4_,(int)param_2);
    uStack_30 = 4;
  }
  uStack_2f = 0;
  param_1 = param_1 + 8;
  uVar1 = 1;
  uStack_28 = extraout_x8;
  FUN_104be6a78(auStack_48,param_1,1,&uStack_38,1);
  func_0x000104bfafa8();
  func_0x000104bfaf88();
  func_0x000104bfaf5c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bfaf88();
    func_0x000104bfafb0();
    func_0x000104bfaf78();
    uStack_78 = extraout_x8_00;
    func_0x00010529dd1c(auStack_88,uVar1);
    param_1 = param_1 + 8;
    FUN_104be6a78(auStack_98,param_1,2,auStack_88,1);
    func_0x000104bfafa8();
    func_0x000104bfaf88();
    func_0x000104bfaf5c(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000104bfaf88();
      func_0x000104bfafb0();
      func_0x000104bfaf9c();
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 104bfadd8; end: 104bfae4b;  */

long FUN_104bfadd8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x000104bfaf78();
  uStack_28 = extraout_x8;
  func_0x00010529dd1c(auStack_38,param_2);
  param_1 = param_1 + 8;
  FUN_104be6a78(auStack_48,param_1,2,auStack_38,1);
  func_0x000104bfafa8();
  func_0x000104bfaf88();
  func_0x000104bfaf5c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104bfaf88();
  func_0x000104bfafb0();
  func_0x000104bfaf9c();
  return param_1;
}



/* Entry: 104bfae4c; end: 104bfae87;  */

void FUN_104bfae4c(void)

{
  func_0x000104bfaf9c();
  return;
}



/* Entry: 104bfae88; end: 104bfae93;  */

undefined8 * FUN_104bfae88(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  FUN_104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  FUN_104be7db4(param_1 + 2);
  FUN_104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 104bfae94; end: 104bfaeaf;  */

void FUN_104bfae94(long param_1)

{
  func_0x0001006b7234();
  *(undefined1 *)(param_1 + 0x428) = 1;
  return;
}



/* Entry: 104bfaeb0; end: 104bfaeb3;  */

void FUN_104bfaeb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104bfaeb4; end: 104bfaecf;  */

void FUN_104bfaeb4(long param_1)

{
  FUN_104bfaed0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 104bfaed0; end: 104bfaeff;  */

void FUN_104bfaed0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001006b7210();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104bfaf00; end: 104bfaf5b;  */

undefined8 FUN_104bfaf00(void)

{
  int iVar1;
  
  if ((bRam00000001130a8530 & 1) == 0) {
    iVar1 = 0x130a8530;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000105281d50();
      func_0x00010b990784(0x1130a8520);
      ___cxa_guard_release(0x1130a8530);
    }
  }
  return 0x1130a8520;
}



/* Entry: 104bfaf5c; end: 104bfafb7;  */

void FUN_104bfaf5c(void)

{
  return;
}



/* Entry: 104bfafb8; end: 104bfb0e3;  */

undefined1 * FUN_104bfafb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *pcVar3;
  int extraout_w10;
  int extraout_w11;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bfc008();
  uStack_38 = extraout_x8;
  FUN_104bfb0e4();
  func_0x0001003b2110(auStack_58,0x113815e50);
  pcStack_70 = FUN_104bfb1d4;
  uStack_60 = param_2[1];
  uStack_68 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000104bfc018();
    } while (extraout_w10 != 0);
  }
  FUN_104bfb144(auStack_48,&pcStack_70);
  FUN_104bdb9bc(auStack_50,auStack_58,auStack_48,1);
  func_0x00010b9a8d98(auStack_48);
  func_0x000104bf8338(&uStack_68);
  func_0x0001003b1f60(auStack_58);
  FUN_104bfb720(&pcStack_70,auStack_50,param_2);
  pcVar3 = pcStack_70;
  if ((pcStack_70 != (code *)0x0) && (*(long *)(pcStack_70 + 0x10) != 0)) {
    do {
      func_0x000104bfc050();
      pcVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *param_1 = pcVar3;
  FUN_104bfbfc0(&pcStack_70);
  puVar2 = auStack_50;
  FUN_104bdbf78(puVar2);
  func_0x000104bfbff4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_104bdbf78(auStack_50);
    func_0x000104bfc074();
    if ((bRam0000000113815e58 & 1) == 0) {
      iVar1 = 0x13815e58;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_104bfb9a4();
        FUN_104bfb9f8(0x113815e48,0x113815e78);
        ___cxa_guard_release(0x113815e58);
      }
    }
    return (undefined1 *)0x113815e48;
  }
  return puVar2;
}



/* Entry: 104bfb0e4; end: 104bfb143;  */

undefined8 FUN_104bfb0e4(void)

{
  int iVar1;
  
  if ((bRam0000000113815e58 & 1) == 0) {
    iVar1 = 0x13815e58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bfb9a4();
      FUN_104bfb9f8(0x113815e48,0x113815e78);
      ___cxa_guard_release(0x113815e58);
    }
  }
  return 0x113815e48;
}



/* Entry: 104bfb144; end: 104bfb1d3;  */

void FUN_104bfb144(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  long lStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_104bfbb28(&lStack_30,&uStack_50);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_28 = lStack_30;
  func_0x00010b9a8ef8(param_1,&lStack_28);
  FUN_104bda388(&lStack_28);
  FUN_104bda3d0(&lStack_30);
  func_0x000104bf8338((ulong)&uStack_50 | 8);
  return;
}



/* Entry: 104bfb1d4; end: 104bfb71f;  */

void FUN_104bfb1d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar13;
  int extraout_w11;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_b8 [24];
  long *plStack_a0;
  undefined8 uStack_98;
  uint uStack_8c;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar6 = param_3;
  func_0x00010b9abfa4(param_3,0);
  lVar10 = param_3;
  func_0x00010b9abfa4(param_3,1);
  lVar7 = param_3;
  func_0x00010b9abfa4(param_3,2);
  func_0x00010b9abfa4(param_3,3);
  plVar14 = (long *)*param_2;
  func_0x00010b9a9518(lVar6);
  func_0x00010529dcb8(auStack_b8,lVar10);
  func_0x00010b9a9588(lVar7);
  if (*(byte *)(param_3 + 8) < 2) {
    plStack_d0 = (long *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    goto LAB_104bfb670;
  }
  func_0x00010b9a9810(&plStack_78,param_3);
  if (plStack_78 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    plVar15 = plStack_78;
    ___dynamic_cast(plStack_78,&PTR_DAT_110d7f038,&PTR_DAT_1107e9198,0);
  }
  func_0x000104bfc06c();
  if (plVar15 != (long *)0x0) {
    puStack_c8 = (undefined8 *)plVar15[6];
    plStack_d0 = (long *)plVar15[5];
    if (plVar15[6] != 0) {
      do {
        func_0x000104bfc018();
      } while (extraout_w10 != 0);
    }
    goto LAB_104bfb670;
  }
  func_0x00010b9a9810(&plStack_80,param_3);
  lStack_88 = plStack_80[4];
  if (lStack_88 != 0) {
    plVar15 = (long *)(lStack_88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_8c = *(uint *)(plStack_80 + 3);
  lVar10 = 0x11328ad18;
  FUN_104be7ae4(0x11328ad18,&uStack_8c);
  if (lVar10 == 0) {
LAB_104bfb3ac:
    puVar8 = (undefined8 *)0x60;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_1107e91c0;
    plVar15 = puVar8 + 3;
    if (plStack_80 == (long *)0x0) {
      plStack_a0 = (long *)0x0;
LAB_104bfb41c:
      *plVar15 = (long)&PTR_DAT_1107e9210;
    }
    else {
      plStack_a0 = plStack_80;
      if (plStack_80[2] == 0) goto LAB_104bfb41c;
      do {
        func_0x000104bfc050();
      } while (extraout_w11 != 0);
      lVar10 = plStack_80[2];
      *plVar15 = extraout_x8 + 0x10;
      if (lVar10 != 0) {
        do {
          func_0x000104bfc018();
        } while (extraout_w10_01 != 0);
      }
    }
    puVar1 = puVar8 + 4;
    plStack_78 = plStack_80;
    FUN_104bec750(puVar1,&plStack_78);
    func_0x000104bfc06c();
    *plVar15 = (long)&PTR_DAT_110874280;
    *puVar1 = &PTR_DAT_1108742b0;
    FUN_104be7e54(&plStack_a0);
    uVar5 = uStack_8c;
    plVar18 = plRam000000011328ad20;
    plVar19 = (long *)(ulong)uStack_8c;
    plVar16 = plStack_80;
    if (plRam000000011328ad20 != (long *)0x0) {
      uVar9 = (long)plRam000000011328ad20 - 1;
      uVar17 = (uint)plRam000000011328ad20;
      if (((ulong)plRam000000011328ad20 & uVar9) == 0) {
        plVar16 = (long *)(ulong)(uVar17 - 1 & uStack_8c);
      }
      else {
        plVar16 = plVar19;
        if (plRam000000011328ad20 <= plVar19) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uStack_8c / uVar17;
          }
          plVar16 = (long *)(ulong)(uStack_8c - uVar4 * uVar17);
        }
      }
      plVar11 = *(long **)(lRam000000011328ad18 + (long)plVar16 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_104bfb4f8;
            plVar13 = (long *)plVar11[1];
            if (plVar13 != plVar19) break;
            if (*(uint *)(plVar11 + 2) == uStack_8c) goto LAB_104bfb640;
          }
          if (((ulong)plRam000000011328ad20 & uVar9) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar9);
          }
          else if (plRam000000011328ad20 <= plVar13) {
            uVar12 = 0;
            if (plRam000000011328ad20 != (long *)0x0) {
              uVar12 = (ulong)plVar13 / (ulong)plRam000000011328ad20;
            }
            plVar13 = (long *)((long)plVar13 - uVar12 * (long)plRam000000011328ad20);
          }
        } while (plVar13 == plVar16);
      }
    }
LAB_104bfb4f8:
    plVar11 = (long *)0x28;
    __Znwm();
    puStack_70 = (undefined8 *)0x11328ad28;
    uStack_68 = 1;
    *plVar11 = 0;
    plVar11[1] = (long)plVar19;
    *(uint *)(plVar11 + 2) = uVar5;
    plVar11[3] = (long)puVar1;
    plVar11[4] = (long)puVar8;
    plStack_78 = plVar11;
    do {
      func_0x000104bfc018();
    } while (extraout_w10_02 != 0);
    if ((plVar18 == (long *)0x0) ||
       (fRam000000011328ad38 * (float)plVar18 < (float)(lRam000000011328ad30 + 1))) {
      uVar9 = 1;
      if ((long *)0x2 < plVar18) {
        uVar9 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
      }
      uVar9 = uVar9 | (long)plVar18 << 1;
      uVar12 = (ulong)((float)(lRam000000011328ad30 + 1) / fRam000000011328ad38);
      if (uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      FUN_104bed8ac(0x11328ad18,uVar9);
      plVar18 = plRam000000011328ad20;
      if (((ulong)plRam000000011328ad20 & (long)plRam000000011328ad20 - 1U) == 0) {
        plVar16 = (long *)(ulong)((int)plRam000000011328ad20 - 1U & uVar5);
      }
      else {
        plVar16 = plVar19;
        if (plRam000000011328ad20 <= plVar19) {
          uVar9 = 0;
          if (plRam000000011328ad20 != (long *)0x0) {
            uVar9 = (ulong)plVar19 / (ulong)plRam000000011328ad20;
          }
          plVar16 = (long *)((long)plVar19 - uVar9 * (long)plRam000000011328ad20);
        }
      }
    }
    lVar10 = lRam000000011328ad18;
    plVar19 = *(long **)(lRam000000011328ad18 + (long)plVar16 * 8);
    if (plVar19 == (long *)0x0) {
      *plStack_78 = (long)plRam000000011328ad28;
      plRam000000011328ad28 = plStack_78;
      *(undefined8 *)(lVar10 + (long)plVar16 * 8) = 0x11328ad28;
      if (*plStack_78 != 0) {
        plVar16 = *(long **)(*plStack_78 + 8);
        if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
          plVar16 = (long *)((ulong)plVar16 & (long)plVar18 - 1U);
        }
        else if (plVar18 <= plVar16) {
          uVar9 = 0;
          if (plVar18 != (long *)0x0) {
            uVar9 = (ulong)plVar16 / (ulong)plVar18;
          }
          plVar16 = (long *)((long)plVar16 - uVar9 * (long)plVar18);
        }
        *(long **)(lVar10 + (long)plVar16 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar19;
      *plVar19 = (long)plStack_78;
    }
    plStack_78 = (long *)0x0;
    lRam000000011328ad30 = lRam000000011328ad30 + 1;
    FUN_104be7cd0(&plStack_78);
LAB_104bfb640:
    plStack_78 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
    plStack_d0 = plVar15;
    puStack_c8 = puVar8;
    FUN_104bfba70(&plStack_78);
  }
  else {
    FUN_104bec6ac(&plStack_78,lVar10 + 0x18);
    puVar8 = puStack_70;
    if (plStack_78 == (long *)0x0) {
      func_0x000104bec70c(&plStack_78);
      goto LAB_104bfb3ac;
    }
    plVar15 = plStack_78;
    ___dynamic_cast(plStack_78,&PTR_DAT_1107e7dd0,&PTR_DAT_1108742c0,8);
    puStack_c8 = (undefined8 *)0x0;
    if ((plVar15 != (long *)0x0) && (puVar8 != (undefined8 *)0x0)) {
      do {
        func_0x000104bfc018();
        puStack_c8 = puVar8;
      } while (extraout_w10_00 != 0);
    }
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    plStack_d0 = plVar15;
    FUN_104bfba70(&plStack_a0);
    func_0x000104bec70c(&plStack_78);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  FUN_104bdbf78(&lStack_88);
  FUN_104be7e54(&plStack_80);
LAB_104bfb670:
  (**(code **)(*plVar14 + 0x10))(plVar14,lVar6,auStack_b8,lVar7,&plStack_d0);
  FUN_104be5d60(&plStack_d0);
  func_0x000100100fec(auStack_b8);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 104bfb720; end: 104bfb763;  */

void FUN_104bfb720(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x000104bfc008();
  uStack_28 = extraout_x8;
  FUN_104bfbc98(auStack_38);
  *param_1 = auStack_38[0];
  func_0x000104bfbff4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bfc008();
  uStack_78 = extraout_x8_00;
  func_0x00010529af44();
  bVar1 = *(byte *)((param_2 & 0xffffffff) + 0x113815e28);
  *(undefined1 *)((param_2 & 0xffffffff) + 0x113815e28) = 1;
  if ((bVar1 & 1) != 0) goto LAB_104bfb7c0;
  if ((bRam0000000113815e70 & 1) == 0) goto LAB_104bfb7e4;
  while( true ) {
    func_0x000108b80888(0x113815e60,param_2);
LAB_104bfb7c0:
    func_0x000104bfbff4(uStack_78);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bfb7e4:
    iVar2 = 0x13815e70;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bfb9a4();
      pcVar3 = "onSnapInteraction";
      func_0x0001003a83dc(&uStack_d8,"onSnapInteraction");
      func_0x0001003b166c(auStack_f8);
      FUN_104bfbad0();
      puVar4 = auStack_d0;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x00010529dde0();
      puVar5 = auStack_c0;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_104bef5f8();
      puVar4 = auStack_b0;
      func_0x0001003adcc0(puVar4,puVar5);
      func_0x00010529b118();
      func_0x0001003adcc0(auStack_a0,puVar4);
      FUN_104bdbd48(auStack_e8,auStack_f8,auStack_d0,4);
      uStack_90 = uStack_d8;
      uStack_d8 = 0;
      func_0x0001003aef98(auStack_88,auStack_e8);
      FUN_104bdbd44(0x113815e60,0x113815e78,1,&uStack_90,1);
      func_0x0001003b1c5c(&uStack_90);
      func_0x0001003adc18(auStack_e0);
      lVar6 = 0x38;
      do {
        func_0x0001003adc18(auStack_d0 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003adc18(auStack_f0);
      func_0x0001003a8c94(&uStack_d8);
      ___cxa_guard_release(0x113815e70);
    }
  }
  return;
}



/* Entry: 104bfb764; end: 104bfb907;  */

void FUN_104bfb764(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bfc008();
  uStack_38 = extraout_x8;
  func_0x00010529af44();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113815e28);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113815e28) = 1;
  if ((bVar1 & 1) != 0) goto LAB_104bfb7c0;
  if ((bRam0000000113815e70 & 1) == 0) goto LAB_104bfb7e4;
  while( true ) {
    func_0x000108b80888(0x113815e60,param_1);
LAB_104bfb7c0:
    func_0x000104bfbff4(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bfb7e4:
    iVar2 = 0x13815e70;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bfb9a4();
      pcVar3 = "onSnapInteraction";
      func_0x0001003a83dc(&uStack_98,"onSnapInteraction");
      func_0x0001003b166c(auStack_b8);
      FUN_104bfbad0();
      puVar4 = auStack_90;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x00010529dde0();
      puVar5 = auStack_80;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_104bef5f8();
      puVar4 = auStack_70;
      func_0x0001003adcc0(puVar4,puVar5);
      func_0x00010529b118();
      func_0x0001003adcc0(auStack_60,puVar4);
      FUN_104bdbd48(auStack_a8,auStack_b8,auStack_90,4);
      uStack_50 = uStack_98;
      uStack_98 = 0;
      func_0x0001003aef98(auStack_48,auStack_a8);
      FUN_104bdbd44(0x113815e60,0x113815e78,1,&uStack_50,1);
      func_0x0001003b1c5c(&uStack_50);
      func_0x0001003adc18(auStack_a0);
      lVar6 = 0x38;
      do {
        func_0x0001003adc18(auStack_90 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003adc18(auStack_b0);
      func_0x0001003a8c94(&uStack_98);
      ___cxa_guard_release(0x113815e70);
    }
  }
  return;
}



/* Entry: 104bfb908; end: 104bfb9a3;  */

undefined8 FUN_104bfb908(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815e40 & 1) == 0) {
    iVar4 = 0x13815e40;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bfb9a4();
      lStack_20 = lRam0000000113815e78;
      if (lRam0000000113815e78 != 0) {
        piVar1 = (int *)(lRam0000000113815e78 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815e30,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815e40);
    }
  }
  return 0x113815e30;
}



/* Entry: 104bfb9a4; end: 104bfb9f7;  */

void FUN_104bfb9a4(void)

{
  int iVar1;
  
  if ((bRam0000000113815e80 & 1) == 0) {
    iVar1 = 0x13815e80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815e78,"_djinni_interface_SnapManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815e80);
      return;
    }
  }
  return;
}



/* Entry: 104bfb9f8; end: 104bfba6f;  */

void FUN_104bfb9f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined8 uStack_28;
  
  FUN_104bfb764(0);
  FUN_104bfb764(1);
  func_0x00010b9941f8(&uStack_28);
  func_0x00010b993b40(auStack_40,uStack_28,param_2);
  if ((bStack_30 & 1) != 0) {
    func_0x0001003adcc0(param_1,auStack_40);
    func_0x0001003b12dc(auStack_40);
    FUN_104bdc2fc(&uStack_28);
    return;
  }
  FUN_104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bfba6c);
  (*pcVar1)();
}



/* Entry: 104bfba70; end: 104bfba97;  */

long FUN_104bfba70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfba98; end: 104bfba9b;  */

void FUN_104bfba98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e91c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfba9c; end: 104bfbaaf;  */

void FUN_104bfba9c(void)

{
  func_0x000104bfbac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfbab0; end: 104bfbacf;  */

void FUN_104bfbab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfc084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bfbad0; end: 104bfbb27;  */

undefined8 FUN_104bfbad0(void)

{
  int iVar1;
  
  if ((bRam00000001130a8548 & 1) == 0) {
    iVar1 = 0x130a8548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130a8538);
      ___cxa_guard_release(0x1130a8548);
    }
  }
  return 0x1130a8538;
}



/* Entry: 104bfbb28; end: 104bfbbc3;  */

void FUN_104bfbb28(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000104bfc008();
  uVar1 = 0x40;
  uStack_38 = extraout_x8;
  __Znwm();
  pcStack_68 = FUN_104bfbbc4;
  ppuStack_60 = &PTR_FUN_1107e9230;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  ppcVar3 = &pcStack_68;
  uVar2 = uVar1;
  func_0x00010b9ac22c();
  *param_1 = uVar1;
  func_0x000104bfc030();
  func_0x000104bfbff4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bfc030();
  __ZdlPv(uVar1);
  __Unwind_Resume(uVar2);
  (*ppcVar3[2])(ppcVar3 + 3,uVar2);
  return;
}



/* Entry: 104bfbbc4; end: 104bfbc33;  */

void FUN_104bfbbc4(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 104bfbc34; end: 104bfbc97;  */

void FUN_104bfbc34(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000104bfa5f0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bfbc98; end: 104bfbcbf;  */

void FUN_104bfbc98(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104bfbcc0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104bfbcc0; end: 104bfbd5b;  */

void FUN_104bfbcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x000104bfc008();
  uStack_38 = extraout_x8;
  FUN_104bfbd78(auStack_50,1);
  FUN_104bfbdcc(lStack_40,param_3,param_4);
  lVar2 = lStack_40;
  lStack_40 = 0;
  FUN_104bfbd5c(param_1,lVar2 + 0x18);
  FUN_104bfbfb0(auStack_50);
  func_0x000104bfbff4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_104bfbfb0();
  func_0x000104bfc074();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_104bfbd5c;
    lStack_68 = extraout_x8_00[1];
    puStack_70 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    if (lStack_68 != 0) {
      do {
        func_0x000104bfc050();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(puVar3,&puStack_70);
    func_0x0001003a90c4(&puStack_70);
    return;
  }
  return;
}



/* Entry: 104bfbd5c; end: 104bfbd77;  */

void FUN_104bfbd5c(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x000104bfc050();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(lVar1,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 104bfbd78; end: 104bfbd9f;  */

long FUN_104bfbd78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104bfbda0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104bfbda0; end: 104bfbdcb;  */

undefined8 * FUN_104bfbda0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  FUN_104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e9260;
  FUN_104bfbe30(param_1 + 3);
  return param_1;
}



/* Entry: 104bfbdcc; end: 104bfbe0f;  */

undefined8 * FUN_104bfbdcc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e9260;
  FUN_104bfbe30(param_1 + 3);
  return param_1;
}



/* Entry: 104bfbe10; end: 104bfbe13;  */

void FUN_104bfbe10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfbe14; end: 104bfbe27;  */

void FUN_104bfbe14(void)

{
  FUN_104bfbf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfbe28; end: 104bfbe2f;  */

void FUN_104bfbe28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfc084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bfbe30; end: 104bfbe73;  */

void FUN_104bfbe30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x00010b9ace44();
  *param_1 = &PTR_FUN_1107e92b0;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000104bfc018();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 104bfbe74; end: 104bfbe77;  */

void FUN_104bfbe74(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_1107e92b0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x000104bf8338(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bfbe78; end: 104bfbe8b;  */

void FUN_104bfbe78(void)

{
  FUN_104bfbe9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfbe8c; end: 104bfbe9b;  */

undefined1  [16] FUN_104bfbe8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bfbe9c; end: 104bfbf3b;  */

void FUN_104bfbe9c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_1107e92b0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x000104bf8338(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bfbf3c; end: 104bfbf4b;  */

void FUN_104bfbf3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfbf4c; end: 104bfbfaf;  */

void FUN_104bfbf4c(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x000104bfc050();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bfbfb0; end: 104bfbfbf;  */

void FUN_104bfbfb0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bfbfc0; end: 104bfbfe7;  */

undefined8 * FUN_104bfbfc0(undefined8 *param_1)

{
  FUN_104bfbfe8(*param_1);
  return param_1;
}



/* Entry: 104bfbfe8; end: 104bfc087;  */

void FUN_104bfbfe8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bfc088; end: 104bfc1c3;  */

void FUN_104bfc088(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = param_2;
  FUN_104bfc248(&uStack_40);
  func_0x00010028bb78();
  uStack_50 = param_2[1];
  puStack_58 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_50 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_58 = param_2;
  }
  puStack_48 = puVar4;
  func_0x00010b214970(uStack_40,&puStack_58);
  uStack_90 = param_2[1];
  puStack_98 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_90 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_98 = param_2;
  }
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_a0 = &PTR_FUN_1107e93a8;
  lStack_78 = lStack_38;
  uStack_80 = uStack_40;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_88 = puVar4;
  FUN_104bfc1c4(&uStack_70,&ppuStack_a0);
  FUN_104bfc218(&ppuStack_a0);
  FUN_104bfc354(&uStack_b0);
  param_1[1] = lStack_68;
  *param_1 = uStack_70;
  if (lStack_68 != 0) {
    plVar1 = (long *)(lStack_68 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104bfc4c0(&uStack_70);
  FUN_104bfc354(&uStack_40);
  return;
}



/* Entry: 104bfc1c4; end: 104bfc1e7;  */

void FUN_104bfc1c4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_104bfc37c(&uStack_11,param_1);
  return;
}



/* Entry: 104bfc1e8; end: 104bfc217;  */

void FUN_104bfc1e8(undefined8 param_1,int param_2)

{
  if (plRam0000000113847390 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104bfc210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000113847390 + 0x30))(plRam0000000113847390,param_1,(long)param_2);
    return;
  }
  return;
}



/* Entry: 104bfc218; end: 104bfc247;  */

undefined8 * FUN_104bfc218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e93a8;
  FUN_104bfc354(param_1 + 4);
  return param_1;
}



/* Entry: 104bfc248; end: 104bfc267;  */

void FUN_104bfc248(void)

{
  undefined1 uStack_11;
  
  FUN_104bfc268(&uStack_11);
  return;
}



/* Entry: 104bfc268; end: 104bfc2bf;  */

undefined1 * FUN_104bfc268(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x000104bfc4f0();
  uVar3 = 1;
  FUN_104bfc2c0();
  *puStack_30 = &PTR_FUN_1107e9308;
  puStack_30[1] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[2] = 0;
  func_0x000104bfc508();
  func_0x000104bfc344();
  func_0x000104bfc520();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_104bfc2e8();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 104bfc2c0; end: 104bfc2e7;  */

long FUN_104bfc2c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104bfc2e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104bfc2e8; end: 104bfc313;  */

void FUN_104bfc2e8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  FUN_104bd35f4();
  *param_1 = &PTR_FUN_1107e9308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfc314; end: 104bfc317;  */

void FUN_104bfc314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfc318; end: 104bfc32b;  */

void FUN_104bfc318(void)

{
  func_0x000104bfc334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfc32c; end: 104bfc353;  */

void FUN_104bfc32c(void)

{
  return;
}



/* Entry: 104bfc354; end: 104bfc37b;  */

long FUN_104bfc354(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfc37c; end: 104bfc3e3;  */

long FUN_104bfc37c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x000104bfc4f0();
  FUN_104bfc3e4(auStack_40,1);
  FUN_104bfc43c();
  func_0x000104bfc508();
  func_0x000104bfc4b0();
  func_0x000104bfc520();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  lVar1 = lStack_30;
  ___stack_chk_fail();
  func_0x000104bfc4b0(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_104bfc40c();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 104bfc3e4; end: 104bfc40b;  */

long FUN_104bfc3e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104bfc40c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104bfc40c; end: 104bfc43b;  */

void FUN_104bfc40c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  FUN_104bd35f4();
  *param_1 = &PTR_DAT_1107e9358;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_1107e93a8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[6] = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[8] = *(undefined8 *)(param_2 + 0x28);
  param_1[7] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104bfc43c; end: 104bfc47b;  */

void FUN_104bfc43c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1107e9358;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_1107e93a8;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[6] = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[8] = *(undefined8 *)(param_2 + 0x28);
  param_1[7] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104bfc47c; end: 104bfc48f;  */

void FUN_104bfc47c(void)

{
  func_0x000104bfc4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfc490; end: 104bfc4bf;  */

void FUN_104bfc490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfc498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bfc4c0; end: 104bfc4e7;  */

long FUN_104bfc4c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfc4e8; end: 104bfc543;  */

void FUN_104bfc4e8(void)

{
  return;
}



/* Entry: 104bfc544; end: 104bfc577;  */

void FUN_104bfc544(long param_1)

{
  undefined1 auStack_40 [32];
  
  func_0x00010028bb78();
  func_0x00010b2149b8(*(undefined8 *)(param_1 + 0x20),auStack_40);
  return;
}



/* Entry: 104bfc578; end: 104bfc57b;  */

undefined8 * FUN_104bfc578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e93a8;
  FUN_104bfc354(param_1 + 4);
  return param_1;
}



/* Entry: 104bfc57c; end: 104bfc58f;  */

void FUN_104bfc57c(void)

{
  FUN_104bfc218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfc590; end: 104bfc66b;  */

void FUN_104bfc590(ulong param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  FUN_104bfd6a0();
  bVar2 = *(byte *)((param_1 & 0xffffffff) + 0x1136a3a20);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136a3a20) = 1;
  if ((bVar2 & 1) != 0) {
    return;
  }
  if ((bRam00000001136a3a28 & 1) == 0) {
    iVar6 = 0x136a3a28;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136a3a38 & 1) == 0) {
        iVar6 = 0x136a3a38;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x0001003a83dc(0x1136a3a30,"_djinni_interface_Profiling");
          ___cxa_guard_release(0x1136a3a38);
        }
      }
      FUN_104bdbd44(0x1136a3a40,0x1136a3a30,1,0,0);
      ___cxa_guard_release(0x1136a3a28);
    }
  }
  lVar5 = 0x1136a3a40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  if ((param_1 & 1) == 0) {
    func_0x000107c31000(uStack_48);
    iVar6 = (int)lVar5;
  }
  else {
    uStack_50 = uStack_48;
    func_0x000108b80b74(auStack_40,&uStack_50,0x1136a3a40);
    func_0x000107c30f50();
    lStack_88 = *(long *)(lVar5 + 0x10);
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_80 = 0xff00;
    func_0x000107c30fa8(auStack_78,&lStack_88);
    func_0x000107c31030(auStack_68,auStack_78);
    func_0x000107c27900(auStack_70);
    func_0x000107c278f4(&lStack_88);
    puVar7 = auStack_68;
    func_0x00010b994158(uStack_48,puVar7,auStack_38);
    iVar6 = (int)puVar7;
    func_0x000107c27900(auStack_60);
    func_0x000107c2a668(auStack_40);
  }
  FUN_104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  func_0x00010b9a96d0(&lStack_c8);
  plStack_e0 = *(long **)(lStack_c8 + 0x18);
  if (plStack_e0 != (long *)0x0) {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
  }
  lStack_d0 = *(long *)(lStack_c8 + 0x28);
  lStack_d8 = *(long *)(lStack_c8 + 0x20);
  func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
  func_0x000107c27900(&plStack_e0);
  FUN_104bdb38c(&lStack_c8);
  return;
}



/* Entry: 104bfc66c; end: 104bfcb33;  */

void FUN_104bfc66c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  char *pcVar5;
  char *pcVar6;
  code **ppcVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  int iVar13;
  int extraout_w10;
  int extraout_w10_00;
  long lVar14;
  undefined8 *apuStack_250 [2];
  undefined8 *puStack_240;
  undefined8 uStack_238;
  int iStack_230;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  code *apcStack_158 [2];
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [16];
  undefined **appuStack_128 [3];
  undefined ***pppuStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  code *pcStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  code *apcStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001003a83dc(auStack_140,"_djinni_interface_Profiling_statics");
  pcVar5 = "makeAsyncTrace";
  func_0x0001003a83dc(&pcStack_148,"makeAsyncTrace");
  FUN_104bfd7d8();
  pcVar6 = pcVar5;
  FUN_104bdbd7c();
  func_0x0001003adcc0(auStack_e8,pcVar6);
  FUN_104bdbd48(apcStack_158,pcVar5,auStack_e8,1);
  pcStack_d8 = pcStack_148;
  pcStack_148 = (code *)0x0;
  func_0x0001003aef98(&ppuStack_d0,apcStack_158);
  pcVar5 = "traceCounter";
  func_0x0001003a83dc(&uStack_160,"traceCounter");
  func_0x0001003b166c(auStack_180);
  FUN_104bdbd7c();
  ppcVar7 = &pcStack_78;
  func_0x0001003adcc0(ppcVar7,pcVar5);
  FUN_104bef760();
  func_0x0001003adcc0(apcStack_68,ppcVar7);
  FUN_104bdbd48(auStack_170,auStack_180,&pcStack_78,2);
  uStack_c0 = uStack_160;
  uStack_160 = 0;
  func_0x0001003aef98(auStack_b8,auStack_170);
  pcVar5 = "traceLongCounter";
  func_0x0001003a83dc(&uStack_188,"traceLongCounter");
  func_0x0001003b166c(auStack_1a8);
  FUN_104bdbd7c();
  puVar8 = auStack_108;
  func_0x0001003adcc0(puVar8,pcVar5);
  FUN_104bef5f8();
  func_0x0001003adcc0(auStack_f8,puVar8);
  FUN_104bdbd48(auStack_198,auStack_1a8,auStack_108,2);
  uStack_a8 = uStack_188;
  uStack_188 = 0;
  func_0x0001003aef98(auStack_a0,auStack_198);
  func_0x0001003a83dc(&uStack_1b0,"isInitialized");
  FUN_104bef4f0();
  FUN_104bdbd48(auStack_1c0);
  uStack_90 = uStack_1b0;
  uStack_1b0 = 0;
  func_0x0001003aef98(auStack_88,auStack_1c0);
  FUN_104bdbd44(auStack_138,auStack_140,0,&pcStack_d8,4);
  lVar14 = 0x48;
  do {
    func_0x0001003b1c5c((long)&pcStack_d8 + lVar14);
    lVar14 = lVar14 + -0x18;
  } while (lVar14 != -0x18);
  func_0x000104bfd2c0(auStack_1c0);
  func_0x0001003a8c94(&uStack_1b0);
  func_0x000104bfd2c0(auStack_198);
  lVar14 = 0x18;
  do {
    func_0x0001003adc18(auStack_108 + lVar14);
    lVar14 = lVar14 + -0x10;
  } while (lVar14 != -8);
  func_0x000104bfd2c0(auStack_1a8);
  func_0x0001003a8c94(&uStack_188);
  func_0x000104bfd2c0(auStack_170);
  lVar14 = 0x18;
  do {
    func_0x0001003adc18((long)&pcStack_78 + lVar14);
    lVar14 = lVar14 + -0x10;
  } while (lVar14 != -8);
  func_0x000104bfd2c0(auStack_180);
  func_0x0001003a8c94(&uStack_160);
  func_0x000104bfd2c0(apcStack_158);
  func_0x000104bfd2c0(auStack_e8);
  func_0x0001003a8c94(&pcStack_148);
  func_0x0001003a8c94(auStack_140);
  pppuStack_110 = appuStack_128;
  appuStack_128[0] = &PTR_FUN_1107e93f8;
  func_0x000108b807f0(auStack_108,auStack_138,appuStack_128);
  func_0x0001006393ec(appuStack_128);
  pcVar9 = (code *)auStack_100;
  func_0x0001003b2110(auStack_e8);
  func_0x000104bfd380();
  pcStack_d8 = FUN_104bfd04c;
  ppuStack_d0 = &PTR_FUN_1107e9468;
  pcStack_c8 = FUN_104bfcb34;
  func_0x00010b9ac22c();
  apcStack_158[0] = pcVar9;
  func_0x000104bfd2dc(ppuStack_d0);
  do {
    func_0x000104bfd370();
  } while (extraout_w10 != 0);
  pcStack_78 = pcVar9;
  func_0x00010b9a8ef8(&pcStack_d8,&pcStack_78);
  FUN_104bda388(&pcStack_78);
  FUN_104bda3d0(apcStack_158);
  FUN_104bfcdac(&pcStack_c8,FUN_104bfce94);
  pcVar9 = (code *)auStack_b8;
  FUN_104bfcdac(pcVar9,FUN_104bfceec);
  func_0x000104bfd380();
  pcStack_78 = FUN_104bfd190;
  ppuStack_70 = &PTR_FUN_1107e94a8;
  apcStack_68[0] = FUN_104bfcf44;
  func_0x00010b9ac22c();
  apcStack_158[0] = pcVar9;
  (*(code *)*ppuStack_70)(&ppuStack_70);
  do {
    func_0x000104bfd370();
  } while (extraout_w10_00 != 0);
  pcStack_78 = pcVar9;
  func_0x00010b9a8ef8(&uStack_a8,&pcStack_78);
  FUN_104bda388(&pcStack_78);
  FUN_104bda3d0(apcStack_158);
  FUN_104bdb9bc(apcStack_158,auStack_e8,&pcStack_d8,4);
  func_0x00010b9a8f60(&pcStack_78,apcStack_158);
  lVar14 = *param_1;
  func_0x0001003a83dc(auStack_170,"Profiling");
  func_0x000104bd9bd4(lVar14 + 0x10,auStack_170);
  ppcVar7 = &pcStack_78;
  func_0x00010b9a9020();
  func_0x0001003a8c94(auStack_170);
  func_0x00010b9a8d98(&pcStack_78);
  FUN_104bdbf78(apcStack_158);
  lVar14 = 0x30;
  do {
    func_0x00010b9a8d98((long)&pcStack_d8 + lVar14);
    iVar13 = (int)ppcVar7;
    lVar14 = lVar14 + -0x10;
    uVar4 = lVar14 == -0x10;
  } while (!(bool)uVar4);
  func_0x0001003b1f60(auStack_e8);
  puVar8 = auStack_100;
  func_0x0001003adc18();
  func_0x000104bfd2c0(auStack_138);
  func_0x000104bfd3e0(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  if (iVar13 == 0) {
    func_0x000104bfd330();
  }
  else {
    (*(code *)*ppuStack_70)(&ppuStack_70);
    __ZdlPv(&pcStack_d8);
  }
  FUN_104bd46a0(puVar8);
  func_0x000104bfd2c8();
  FUN_104bdbf60(&puStack_218);
  FUN_104bfc088(apuStack_250,&puStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_218);
  func_0x000108b80734(apuStack_250[0],&UNK_10dd60b99);
  if (apuStack_250[0] == (undefined8 *)0x0) {
    func_0x000104bfd2b0();
    goto LAB_104bfcd50;
  }
  puVar10 = apuStack_250[0];
  ___dynamic_cast(apuStack_250[0],&PTR_DAT_1107e93d8,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
  if (puVar10 != (undefined8 *)0x0) {
    puStack_218 = (undefined8 *)puVar10[1];
    if ((puStack_218 != (undefined8 *)0x0) && (puStack_218[2] != 0)) {
      plVar1 = (long *)(puStack_218[2] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104bfd394();
    FUN_104be7e54(&puStack_218);
    goto LAB_104bfcd50;
  }
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puStack_218 = apuStack_250[0];
  lVar14 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&puStack_218);
  if (lVar14 == 0) {
    iVar13 = 1;
LAB_104bfcc84:
    FUN_104bfd3f4(&puStack_220,apuStack_250);
    if (lVar14 == 0) {
      FUN_104bf822c(&puStack_240,puStack_220);
      puVar10 = (undefined8 *)0x30;
      iStack_230 = iVar13;
      __Znwm();
      uStack_210 = 0x11328ad50;
      uStack_208 = 1;
      puVar10[2] = apuStack_250[0];
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[4] = uStack_238;
      puVar10[3] = puStack_240;
      puStack_240 = (undefined8 *)0x0;
      uStack_238 = 0;
      *(int *)(puVar10 + 5) = iVar13;
      uVar11 = 0x11328ad58;
      puStack_218 = puVar10;
      FUN_104bf7ea8();
      puVar10[1] = uVar11;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)puVar10 & 1) != 0) {
        puStack_218 = (undefined8 *)0x0;
      }
      FUN_104bdc220(&puStack_218);
      ppuVar12 = &puStack_240;
    }
    else {
      FUN_104bf822c(&puStack_218,puStack_220);
      uStack_208 = CONCAT44(uStack_208._4_4_,iVar13);
      func_0x000104bf7db8(lVar14 + 0x18,&puStack_218);
      ppuVar12 = &puStack_218;
    }
    func_0x000104bdc2a0(ppuVar12);
    func_0x000104bfd394();
    ppuVar12 = &puStack_220;
  }
  else {
    iVar13 = *(int *)(lVar14 + 0x28);
    FUN_104bf7d80(&puStack_218,lVar14 + 0x18);
    if (puStack_218 == (undefined8 *)0x0) {
      iVar13 = iVar13 + 1;
      FUN_104be7e54(&puStack_218);
      goto LAB_104bfcc84;
    }
    if (puStack_218[2] != 0) {
      plVar1 = (long *)(puStack_218[2] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_240 = puStack_218;
    func_0x000104bfd394();
    FUN_104be7e54(&puStack_240);
    ppuVar12 = &puStack_218;
  }
  FUN_104be7e54(ppuVar12);
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
LAB_104bfcd50:
  FUN_104bfcf68(apuStack_250);
  return;
}



/* Entry: 104bfcb34; end: 104bfcdab;  */

void FUN_104bfcb34(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 *apuStack_90 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000104bfd2c8();
  FUN_104bdbf60(&puStack_58);
  FUN_104bfc088(apuStack_90,&puStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_58);
  func_0x000108b80734(apuStack_90[0],&UNK_10dd60b99);
  if (apuStack_90[0] == (undefined8 *)0x0) {
    func_0x000104bfd2b0();
    goto LAB_104bfcd50;
  }
  puVar5 = apuStack_90[0];
  ___dynamic_cast(apuStack_90[0],&PTR_DAT_1107e93d8,&PTR_DAT_1107e7dd0,0xfffffffffffffffe);
  if (puVar5 != (undefined8 *)0x0) {
    puStack_58 = (undefined8 *)puVar5[1];
    if ((puStack_58 != (undefined8 *)0x0) && (puStack_58[2] != 0)) {
      plVar1 = (long *)(puStack_58[2] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104bfd394();
    FUN_104be7e54(&puStack_58);
    goto LAB_104bfcd50;
  }
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puStack_58 = apuStack_90[0];
  lVar4 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&puStack_58);
  if (lVar4 == 0) {
    iVar8 = 1;
LAB_104bfcc84:
    FUN_104bfd3f4(&puStack_60,apuStack_90);
    if (lVar4 == 0) {
      FUN_104bf822c(&puStack_80,puStack_60);
      puVar5 = (undefined8 *)0x30;
      iStack_70 = iVar8;
      __Znwm();
      uStack_50 = 0x11328ad50;
      uStack_48 = 1;
      puVar5[2] = apuStack_90[0];
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = uStack_78;
      puVar5[3] = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      *(int *)(puVar5 + 5) = iVar8;
      uVar6 = 0x11328ad58;
      puStack_58 = puVar5;
      FUN_104bf7ea8();
      puVar5[1] = uVar6;
      func_0x000104bf7e44(0x11328ad40);
      if (((ulong)puVar5 & 1) != 0) {
        puStack_58 = (undefined8 *)0x0;
      }
      FUN_104bdc220(&puStack_58);
      ppuVar7 = &puStack_80;
    }
    else {
      FUN_104bf822c(&puStack_58,puStack_60);
      uStack_48 = CONCAT44(uStack_48._4_4_,iVar8);
      func_0x000104bf7db8(lVar4 + 0x18,&puStack_58);
      ppuVar7 = &puStack_58;
    }
    func_0x000104bdc2a0(ppuVar7);
    func_0x000104bfd394();
    ppuVar7 = &puStack_60;
  }
  else {
    iVar8 = *(int *)(lVar4 + 0x28);
    FUN_104bf7d80(&puStack_58,lVar4 + 0x18);
    if (puStack_58 == (undefined8 *)0x0) {
      iVar8 = iVar8 + 1;
      FUN_104be7e54(&puStack_58);
      goto LAB_104bfcc84;
    }
    if (puStack_58[2] != 0) {
      plVar1 = (long *)(puStack_58[2] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_80 = puStack_58;
    func_0x000104bfd394();
    FUN_104be7e54(&puStack_80);
    ppuVar7 = &puStack_58;
  }
  FUN_104be7e54(ppuVar7);
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
LAB_104bfcd50:
  FUN_104bfcf68(apuStack_90);
  return;
}



/* Entry: 104bfcdac; end: 104bfce93;  */

void FUN_104bfcdac(code *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  code *pcVar1;
  code **ppcVar2;
  undefined1 *puVar3;
  int iVar4;
  int extraout_w10;
  undefined1 auStack_b8 [24];
  code **ppcStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  ppcVar2 = &pcStack_70;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_1;
  func_0x000104bfd380();
  pcStack_68 = FUN_104bfd118;
  ppuStack_60 = &PTR_FUN_1107e9488;
  uStack_58 = param_2;
  func_0x00010b9ac22c();
  pcStack_70 = pcVar1;
  func_0x000104bfd2dc(ppuStack_60);
  do {
    func_0x000104bfd370();
  } while (extraout_w10 != 0);
  iVar4 = (int)&pcStack_68;
  pcStack_68 = pcVar1;
  func_0x00010b9a8ef8(param_1);
  FUN_104bda388(&pcStack_68);
  FUN_104bda3d0();
  func_0x000104bfd3e0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume(ppcVar2);
  }
  else {
    func_0x000104bfd2dc(ppuStack_60);
    __ZdlPv(pcVar1);
  }
  puVar3 = (undefined1 *)ppcVar2;
  FUN_104bd46a0(ppcVar2);
  pcStack_78 = FUN_104bfce94;
  ppcStack_a0 = &pcStack_68;
  uStack_98 = param_2;
  puStack_90 = (undefined1 *)ppcVar2;
  pcStack_88 = pcVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000104bfd2c8();
  func_0x000104bfd2fc();
  func_0x000104bfd350();
  func_0x00010b9a9518(puVar3);
  FUN_104bfc1e8(auStack_b8,puVar3);
  func_0x000104bfd2d4();
  *(short *)(pcVar1 + 8) = (short)&pcStack_68;
  *(undefined8 *)pcVar1 = 0;
  return;
}



/* Entry: 104bfce94; end: 104bfceeb;  */

void FUN_104bfce94(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined2 unaff_w22;
  undefined1 auStack_48 [24];
  
  func_0x000104bfd2c8();
  func_0x000104bfd2fc();
  func_0x000104bfd350();
  func_0x00010b9a9518(param_1);
  FUN_104bfc1e8(auStack_48,param_1);
  func_0x000104bfd2d4();
  *(undefined2 *)(unaff_x19 + 1) = unaff_w22;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bfceec; end: 104bfcf43;  */

void FUN_104bfceec(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined2 unaff_w22;
  undefined1 auStack_48 [24];
  
  func_0x000104bfd2c8();
  func_0x000104bfd2fc();
  func_0x000104bfd350();
  func_0x00010b9a9588(param_1);
  func_0x000104bfc1f0(auStack_48,param_1);
  func_0x000104bfd2d4();
  *(undefined2 *)(unaff_x19 + 1) = unaff_w22;
  *unaff_x19 = 0;
  return;
}



/* Entry: 104bfcf44; end: 104bfcf67;  */

void FUN_104bfcf44(long param_1)

{
  bool bVar1;
  
  bVar1 = lRam0000000113847390 != 0;
  *(undefined2 *)(param_1 + 8) = 7;
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 104bfcf68; end: 104bfcf93;  */

long FUN_104bfcf68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfcf94; end: 104bfcf9b;  */

void FUN_104bfcf94(void)

{
  return;
}



/* Entry: 104bfcf9c; end: 104bfcfbf;  */

void FUN_104bfcf9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107e93f8;
  return;
}



/* Entry: 104bfcfc0; end: 104bfcfe7;  */

void FUN_104bfcfc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1107e93f8;
  return;
}



/* Entry: 104bfcfe8; end: 104bfd003;  */

/* WARNING: Removing unreachable block (ram,0x000108b8095c) */

void FUN_104bfcfe8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined1 in_ZR;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  FUN_104bfc590(0);
  FUN_104bfd6a0();
  bVar4 = bRam00000001136a3a21;
  bRam00000001136a3a21 = 1;
  if ((bVar4 & 1) != 0) {
    return;
  }
  if ((bRam00000001136a3a28 & 1) == 0) {
    iVar6 = 0x136a3a28;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136a3a38 & 1) == 0) {
        iVar6 = 0x136a3a38;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          func_0x0001003a83dc(0x1136a3a30,"_djinni_interface_Profiling");
          ___cxa_guard_release(0x1136a3a38);
        }
      }
      FUN_104bdbd44(0x1136a3a40,0x1136a3a30,1,0,0);
      ___cxa_guard_release(0x1136a3a28);
    }
  }
  lVar5 = 0x1136a3a40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9941f8(&uStack_48);
  uStack_50 = uStack_48;
  func_0x000108b80b74(auStack_40,&uStack_50,0x1136a3a40);
  func_0x000107c30f50();
  lStack_88 = *(long *)(lVar5 + 0x10);
  if (lStack_88 != 0) {
    piVar1 = (int *)(lStack_88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_80 = 0xff00;
  func_0x000107c30fa8(auStack_78,&lStack_88);
  func_0x000107c31030(auStack_68,auStack_78);
  func_0x000107c27900(auStack_70);
  func_0x000107c278f4(&lStack_88);
  puVar7 = auStack_68;
  func_0x00010b994158(uStack_48,puVar7,auStack_38);
  iVar6 = (int)puVar7;
  func_0x000107c27900(auStack_60);
  func_0x000107c2a668(auStack_40);
  FUN_104bdc2fc(&uStack_48);
  func_0x000108b80b80(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0();
    func_0x00010b9a96d0(&lStack_c8);
    plStack_e0 = *(long **)(lStack_c8 + 0x18);
    if (plStack_e0 != (long *)0x0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
    }
    lStack_d0 = *(long *)(lStack_c8 + 0x28);
    lStack_d8 = *(long *)(lStack_c8 + 0x20);
    func_0x000107c27d7c(extraout_x8,lStack_d8,lStack_d8 + lStack_d0);
    func_0x000107c27900(&plStack_e0);
    FUN_104bdb38c(&lStack_c8);
    return;
  }
  return;
}



/* Entry: 104bfd004; end: 104bfd03f;  */

long FUN_104bfd004(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1107e9458);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104bfd040; end: 104bfd04b;  */

undefined ** FUN_104bfd040(void)

{
  return &PTR_DAT_1107e9458;
}



/* Entry: 104bfd04c; end: 104bfd0fb;  */

void FUN_104bfd04c(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104bfd0fc; end: 104bfd117;  */

void FUN_104bfd0fc(void)

{
  return;
}



/* Entry: 104bfd118; end: 104bfd173;  */

void FUN_104bfd118(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104bfd174; end: 104bfd18f;  */

void FUN_104bfd174(void)

{
  return;
}



/* Entry: 104bfd190; end: 104bfd1eb;  */

void FUN_104bfd190(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 104bfd1ec; end: 104bfd25b;  */

void FUN_104bfd1ec(undefined8 param_1)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001003a8364();
  func_0x000104bfd2e8();
  uStack_38 = 0;
  uStack_40 = param_1;
  func_0x000104bfd3b4();
  func_0x000104bfd320();
  func_0x000104bfd360();
  func_0x000104bfd2d4();
  func_0x000104bfd3cc();
  func_0x000104bfd39c();
  func_0x000104bfd3a8();
  FUN_104bda93c(auStack_58);
  func_0x0001003a8c94(auStack_60);
  func_0x000104bfd2b0();
  func_0x0001003a8c94(&uStack_40);
  return;
}



/* Entry: 104bfd25c; end: 104bfd283;  */

void FUN_104bfd25c(undefined8 param_1,long param_2)

{
  func_0x000104bfd388(*(undefined8 *)(param_2 + 0x18));
  func_0x000104bfd2b0();
  return;
}



/* Entry: 104bfd284; end: 104bfd3f3;  */

void FUN_104bfd284(void)

{
  return;
}



/* Entry: 104bfd3f4; end: 104bfd533;  */

undefined1 * FUN_104bfd3f4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000104bfde3c();
  uStack_38 = extraout_x8;
  FUN_104bfd534();
  func_0x0001003b2110(auStack_58,0x113815eb0);
  lStack_70 = 0x104bfd624;
  uStack_60 = param_2[1];
  uStack_68 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104bfd594(auStack_48,&lStack_70);
  FUN_104bdb9bc(auStack_50,auStack_58,auStack_48,1);
  func_0x00010b9a8d98(auStack_48);
  FUN_104bfcf68(&uStack_68);
  func_0x0001003b1f60(auStack_58);
  func_0x000104bfd65c(&lStack_70,auStack_50,param_2);
  if ((lStack_70 != 0) && (*(long *)(lStack_70 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_70 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_70;
  FUN_104bfddf4(&lStack_70);
  puVar5 = auStack_50;
  FUN_104bdbf78(puVar5);
  func_0x000104bfde28(uStack_38);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  FUN_104bdbf78(auStack_50);
  __Unwind_Resume(puVar5);
  if ((bRam0000000113815eb8 & 1) == 0) {
    iVar4 = 0x13815eb8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bfd874();
      FUN_104bfd8c8(0x113815ea8,0x113815ed8);
      ___cxa_guard_release(0x113815eb8);
    }
  }
  return (undefined1 *)0x113815ea8;
}



/* Entry: 104bfd534; end: 104bfd593;  */

undefined8 FUN_104bfd534(void)

{
  int iVar1;
  
  if ((bRam0000000113815eb8 & 1) == 0) {
    iVar1 = 0x13815eb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_104bfd874();
      FUN_104bfd8c8(0x113815ea8,0x113815ed8);
      ___cxa_guard_release(0x113815eb8);
    }
  }
  return 0x113815ea8;
}



/* Entry: 104bfd594; end: 104bfd623;  */

void FUN_104bfd594(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  long lStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_104bfd940(&lStack_30,&uStack_50);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_28 = lStack_30;
  func_0x00010b9a8ef8(param_1,&lStack_28);
  FUN_104bda388(&lStack_28);
  FUN_104bda3d0(&lStack_30);
  FUN_104bfcf68((ulong)&uStack_50 | 8);
  return;
}



/* Entry: 104bfd624; end: 104bfd69f;  */

void FUN_104bfd624(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)(*(long *)*param_2 + 0x10))();
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 104bfd6a0; end: 104bfd7d7;  */

void FUN_104bfd6a0(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x000104bfde3c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113815e88);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113815e88) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_104bfd6f0;
  if ((bRam0000000113815ed0 & 1) == 0) goto LAB_104bfd710;
  while( true ) {
    func_0x000108b80888(0x113815ec0);
LAB_104bfd6f0:
    func_0x000104bfde28(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_104bfd710:
    iVar2 = 0x13815ed0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_104bfd874();
      func_0x0001003a83dc(&uStack_48,"end");
      func_0x0001003b166c(auStack_68);
      FUN_104bdbd48(auStack_58,auStack_68,0,0);
      uStack_40 = uStack_48;
      uStack_48 = 0;
      func_0x0001003aef98(auStack_38,auStack_58);
      FUN_104bdbd44(0x113815ec0,0x113815ed8,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_50);
      func_0x0001003adc18(auStack_60);
      func_0x0001003a8c94(&uStack_48);
      ___cxa_guard_release(0x113815ed0);
    }
  }
  return;
}


