/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009763d0; end: 10097650b; -[SCSnapchattersFetchRequestCoordinator _scheduleZombieHealingTask] */

void FUN_1009763d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126bd748;
  func_0x000107c4e114(PTR_PTR_1126bd748);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e2d0(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10097650c; end: 100976513; +[SCAttributedFriendingTask outgoingFriendZombieHeal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097650c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0x11;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100976514; end: 10097654b; +[SCSnapTaskWrapper attachedBlockingSync:priority:asyncSpanNameSuffix:operation:] */

void FUN_100976514(void)

{
  FUN_1003e3550();
  return;
}



/* Entry: 10097654c; end: 10097654f;  */

void FUN_10097654c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100976550; end: 1009766a3; -[SCSnapchattersUpdateRequestCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:currentDateProvider:grapheneLogger:circumstanceEngine:] */

undefined1 *
FUN_100976550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126fdbf0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009766a4; end: 10097693b; -[SCSnapchattersSuggestRequestCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:suggestService:suggestedSnapchatterFetcher:currentDateProvider:preferences:grapheneLogger:pinnedUserIds:] */

undefined8 *
FUN_1009766a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126fdbe8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    uVar2 = puVar1[2];
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(param_11);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(param_11);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10097693c; end: 1009769af; -[SCGrapheneContactsUploadMetric2 init] */

undefined1 * FUN_10097693c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdd48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1009769b0; end: 100976a23; -[SCFriendingContactsGrapheneLogger initWithContactsUploadMetrics:] */

undefined1 * FUN_1009769b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdc98;
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



/* Entry: 100976a24; end: 100976d0b; -[SCSnapchattersContactRequestCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:contactService:currentDateProvider:permissionInfoProvider:configsProvider:grapheneLogger:phoneNumberProvider:userPreferences:circumstanceEngine:friendingContactsGrapheneLogger:friendingPhoneContactBookStoreService:] */

undefined8 *
FUN_100976a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  puStack_68 = PTR_PTR_1126fdbb8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100976d0c; end: 100976e23;  */

/* WARNING: Possible PIC construction at 0x000100976d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100976e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100976e04) */
/* WARNING: Removing unreachable block (ram,0x000100976df4) */
/* WARNING: Removing unreachable block (ram,0x000100976de4) */
/* WARNING: Removing unreachable block (ram,0x000100976dd4) */
/* WARNING: Removing unreachable block (ram,0x000100976dc4) */
/* WARNING: Removing unreachable block (ram,0x000100976db4) */
/* WARNING: Removing unreachable block (ram,0x000100976da4) */
/* WARNING: Removing unreachable block (ram,0x000100976d94) */
/* WARNING: Removing unreachable block (ram,0x000100976d84) */
/* WARNING: Removing unreachable block (ram,0x000100976d74) */
/* WARNING: Removing unreachable block (ram,0x000100976d64) */
/* WARNING: Removing unreachable block (ram,0x000100976d54) */
/* WARNING: Removing unreachable block (ram,0x000100976d44) */
/* WARNING: Removing unreachable block (ram,0x000100976d34) */
/* WARNING: Removing unreachable block (ram,0x000100976d24) */
/* WARNING: Removing unreachable block (ram,0x000100976e14) */

void FUN_100976d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x118));
  return;
}



/* Entry: 100976e24; end: 100976e33; -[_TtC16AtlasServicesAPI15SCAtlasServices atlasFriendDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100976e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130227a8));
  return;
}



/* Entry: 100976e34; end: 100976e3b; -[SCSnapchattersDataCoordinator attachAtlasFriendsDataProvider:] */

void FUN_100976e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_attachAtlasFriendsDataProvider__1125a0b08);
  return;
}



/* Entry: 100976e3c; end: 100976e3f; -[SCSnapchattersFetchRequestCoordinator attachAtlasFriendsDataProvider:] */

void FUN_100976e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ae30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAtlasFriendsDataProvider__1126385a8);
  return;
}



/* Entry: 100976e40; end: 100976e47; -[SCSnapchattersFetchRequestCoordinator setAtlasFriendsDataProvider:] */

void FUN_100976e40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100976e48; end: 100976e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100976e48(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272a7ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100976e6c; end: 100976eef; -[SCFetchFriendsResponseTriggerEntryPoint _triggerFetchFriendsResponseFromScenarioType:] */

/* WARNING: Possible PIC construction at 0x000100976ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100976ecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100976e6c(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272a7f4;
    func_0x000107c61148(param_1);
  }
  func_0x000107c43ae8(param_1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5d074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100976ef0; end: 100976ef7; -[SCFetchFriendsResponseServices friendsResponseService] */

undefined8 FUN_100976ef0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100976ef8; end: 100976f37;  */

void FUN_100976ef8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b250();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100976f38; end: 100977133; -[SCFetchFriendsResponseServiceProvider _createFetchfriendsResponseService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100976f38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2d6f2a);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x17);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126bb6f0;
  func_0x000107c610f4(PTR_PTR_1126bb6f0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272622c;
    func_0x000107c61148();
  }
  lVar3 = lVar8;
  func_0x000107c4078c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112726228;
    func_0x000107c61148(lVar9);
  }
  lVar4 = lVar9;
  func_0x000107c5b4bc(lVar9);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112726230;
    func_0x000107c61148(lVar11);
  }
  lVar6 = lVar11;
  func_0x000107c4ec80(lVar11);
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11272621c);
  param_1 = param_1 + _DAT_112726220;
  func_0x000107c61148();
  lVar7 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c4881c(puVar2,param_2,lVar3,lVar4,puVar5,lVar6,uVar10,puVar1,lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100977134; end: 100977143; -[_TtC33SCInternalSnapchatterServicesImpl29SCInternalSnapchatterServices coordinatedSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100977134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130220c0));
  return;
}



/* Entry: 100977144; end: 1009772eb; -[SCThrottledFriendsResponseFetcher initWithSnapchatterCoordinatedSyncer:dataTracker:timeProvider:preferences:friendsResponseSubject:queuePerformer:circumstanceEngine:] */

undefined1 *
FUN_100977144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126e9280;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009772ec; end: 1009773a3; -[SCThrottledFriendsResponseFetcher tryFetchFriendsResponseFromScenarioType:] */

void FUN_1009772ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1009773a4; end: 1009773f7;  */

void FUN_1009773a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009773f8; end: 100977403;  */

undefined ** FUN_1009773f8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100977404; end: 1009774c3;  */

void FUN_100977404(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b6b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1009774c4; end: 100977563;  */

void FUN_1009774c4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a9730;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101eb0cd4);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977564; end: 10097769b; -[SCThrottledFriendsResponseFetcher _fetchFriendsResponseFromScenarioType:] */

/* WARNING: Possible PIC construction at 0x000100977604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100977678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100977608) */
/* WARNING: Removing unreachable block (ram,0x00010097767c) */

void FUN_100977564(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c3c7e0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c40ef8(5,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10097769c; end: 100977707; -[SCThrottledFriendsResponseFetcher _shouldThrottleFetchFriendsResponseFromScenario:] */

long FUN_10097769c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    return 0;
  }
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c40ef8(uVar1);
    func_0x000107c61180();
    func_0x000107c3c7dc(param_1,param_2,uVar1,3);
    func_0x000107c61170(uVar1);
    return param_1;
  }
  return 1;
}



/* Entry: 100977708; end: 100977763; +[SCFideliusNotificationProcessorEntryPoint attributedTask] */

void FUN_100977708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bd0b0;
  func_0x000107c433a4(PTR_PTR_1126bd0b0);
  func_0x000107c61180();
  func_0x000107c515c0(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100977764; end: 100977777; +[SCAttributedSafetyTask fideliusNotificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100977764(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bb60) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100977778; end: 1009777a3;  */

void FUN_100977778(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 1009777a4; end: 1009777ab;  */

void FUN_1009777a4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8868;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab5758);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009777ac; end: 10097784f;  */

void FUN_1009777ac(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8868;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab5758,param_2,&UNK_101ab575c,param_2,&UNK_101ab5784,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977850; end: 1009778b3; +[SCFreeDiskSpaceEntryPoint attributedTask] */

void FUN_100977850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bed28;
  func_0x000107c5bc84(PTR_PTR_1126bed28,param_2,&PTR____CFConstantStringClassReference_110e962d8);
  func_0x000107c61180();
  func_0x000107c5bc6c(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1009778b4; end: 100977947; +[SCAttributedStartupTask startupCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009778b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309bdb0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bdc0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100977948; end: 10097797f; +[SCAttributedTask startup:] */

void FUN_100977948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1000ac11c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100977980; end: 10097798b;  */

undefined ** FUN_100977980(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10097798c; end: 1009779b7;  */

void FUN_10097798c(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 1009779b8; end: 1009779bf;  */

void FUN_1009779b8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8870;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab6844);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009779c0; end: 100977b2f;  */

void FUN_1009779c0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8870;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab6844,param_2,&UNK_101ab6848,param_2,&UNK_101ab6870,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977b30; end: 100977b8b; +[SCFriendNotificationProcessorEntryPoint attributedTask] */

void FUN_100977b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bd748;
  func_0x000107c4524c(PTR_PTR_1126bd748);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100977b8c; end: 100977b9f; +[SCAttributedFriendingTask inAppNonSDNNotificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100977b8c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0x13;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100977ba0; end: 100977bcb;  */

void FUN_100977ba0(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 100977bcc; end: 100977bd3;  */

void FUN_100977bcc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8878;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab6bf0);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977bd4; end: 100977c77;  */

void FUN_100977bd4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8878;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab6bf0,param_2,&UNK_101ab6bf4,param_2,&UNK_101ab6c1c,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977c78; end: 100977cd3; +[SCFriendRequestsReportEntryPoint attributedTask] */

void FUN_100977c78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126bd748;
  func_0x000107c439d4(PTR_PTR_1126bd748);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100977cd4; end: 100977d03; +[SCAttributedFriendingTask friendRequestsReport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100977cd4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0x14;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100977d04; end: 100977d43;  */

void FUN_100977d04(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100977ce8();
  FUN_100082720("SCFriendStorySettingServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100977d44; end: 100977d4b;  */

void FUN_100977d44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f06a94);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977d4c; end: 100977dcf;  */

void FUN_100977d4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f06a94,param_2,&UNK_101f06a98,param_2,&UNK_101f06ac0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977dd0; end: 100977ddb;  */

undefined ** FUN_100977dd0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100977ddc; end: 100977e67;  */

void FUN_100977ddc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100977e68,param_1);
  return;
}



/* Entry: 100977e68; end: 100977e6f;  */

void FUN_100977e68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ce0d30);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977e70; end: 100977ef3;  */

void FUN_100977e70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ce0d30,param_2,FUN_100977ef4,param_2,&UNK_101ce0d34,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100977ef4; end: 100977f1b;  */

void FUN_100977ef4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100977f1c; end: 1009789e3;  */

void FUN_100977f1c(long *param_1,long param_2)

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
  undefined8 uVar20;
  undefined8 uVar21;
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
  FUN_10029b24c();
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
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  puVar1 = PTR_PTR_1126a90e8;
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
  func_0x000107c61174(uStack_d8);
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar20 = 0x53656761726f7473;
  func_0x000107c5fadc(0x53656761726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar20);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc46d0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef220f0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar21);
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef22110);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar21);
  uVar20 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efc46a0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f00aec0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
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
  *param_1 = param_2;
  return;
}



/* Entry: 1009789e4; end: 100978a27;  */

void FUN_1009789e4(void)

{
  long unaff_x20;
  
  FUN_100977f1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 100978a28; end: 100978a2f;  */

void FUN_100978a28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100978a30; end: 100978a83;  */

void FUN_100978a30(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100978a84; end: 100979093;  */

void FUN_100978a84(long *param_1,long param_2)

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
  undefined *puVar13;
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
  FUN_10020ee3c();
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
  puVar1 = PTR_PTR_1126a8180;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc4680);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efc46a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  puVar13 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x60) = puVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 100979094; end: 1009790c7;  */

void FUN_100979094(void)

{
  long unaff_x20;
  
  FUN_100978a84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1009790c8; end: 1009790cf;  */

void FUN_1009790c8(undefined8 *param_1)

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



/* Entry: 1009790d0; end: 100979123;  */

void FUN_1009790d0(undefined8 *param_1)

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



/* Entry: 100979124; end: 10097912b;  */

void FUN_100979124(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001b7c40();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100979210(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100979294();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1009792bc();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10097912c; end: 10097920f;  */

void FUN_10097912c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001b7c40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100979210(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100979294();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1009792bc();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100979210; end: 10097928b;  */

void FUN_100979210(undefined8 param_1)

{
  if (lRam0000000112df5850 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66d988);
  return;
}



/* Entry: 10097928c; end: 100979293;  */

void FUN_10097928c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 100979294; end: 1009792bb;  */

void FUN_100979294(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1009792bc; end: 10097939f;  */

void FUN_1009792bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110439010;
  func_0x000107c613fc(&UNK_110439010,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  puStack_40 = &UNK_101a9fbdc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101a9fbe4;
  puStack_48 = &UNK_110439028;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  FUN_1001ccb10(0);
  func_0x000107c610f8();
  FUN_1009793d8(puVar1);
  return;
}



/* Entry: 1009793a0; end: 1009793c3;  */

void FUN_1009793a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009793c4; end: 1009793d7;  */

void FUN_1009793c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1009793d8; end: 100979423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009793d8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113047eb8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100979424; end: 10097944f;  */

void FUN_100979424(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100979450; end: 1009794ab; +[SCSnapchattersFetchDataRequest fetchFriendsWithSource:triggerType:] */

void FUN_100979450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb6f8;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1009794ac; end: 1009794ef; -[SCSnapchattersFetchDataRequest internalInit] */

void FUN_1009794ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1127073f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009794f0; end: 1009795d3; -[SCFriendingContactSyncServiceProvider provide] */

void FUN_1009794f0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bb3b8;
  func_0x000107c610f4(PTR_PTR_1126bb3b8);
  func_0x000107c46048();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1009795d4; end: 100979647; -[SCFriendingContactSyncServices initWithContactSyncer:] */

undefined1 * FUN_1009795d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fdb68;
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



/* Entry: 100979648; end: 1009796b3;  */

void FUN_100979648(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009796b4; end: 1009796bb;  */

void FUN_1009796b4(undefined8 *param_1)

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



/* Entry: 1009796bc; end: 10097970f;  */

void FUN_1009796bc(undefined8 *param_1)

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



/* Entry: 100979710; end: 10097971f;  */

void FUN_100979710(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1001f64e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_10097b778(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_10097b7fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_10097b84c();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 100979720; end: 1009798ff;  */

void FUN_100979720(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_1001f64e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_10097b778(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10097b7fc();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10097b84c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 100979900; end: 100979907;  */

void FUN_100979900(undefined8 *param_1)

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



/* Entry: 100979908; end: 10097995b;  */

void FUN_100979908(undefined8 *param_1)

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



/* Entry: 10097995c; end: 100979963;  */

void FUN_10097995c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1000978c4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10097aa40(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10097aabc();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10097aae4();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100979964; end: 100979a47;  */

void FUN_100979964(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1000978c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10097aa40(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10097aabc();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10097aae4();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100979a48; end: 100979a4f;  */

void FUN_100979a48(undefined8 *param_1)

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



/* Entry: 100979a50; end: 100979aa3;  */

void FUN_100979a50(undefined8 *param_1)

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



/* Entry: 100979aa4; end: 100979aab;  */

void FUN_100979aa4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000928e4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100979b44();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100979c3c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100979aac; end: 100979b43;  */

void FUN_100979aac(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000928e4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100979b44();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100979c3c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100979b44; end: 100979baf;  */

void FUN_100979b44(undefined8 param_1)

{
  if (lRam0000000112da4008 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63ca48);
  return;
}



/* Entry: 100979bb0; end: 100979c3b;  */

long FUN_100979bb0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126a7220;
    func_0x000107c61168();
    func_0x000107c5a9f0();
    func_0x000107c61180();
    lVar3 = 0;
    FUN_10097a9d4();
    func_0x000107c613fc();
    *(undefined **)(lVar3 + 0x10) = puVar2;
    lVar1 = *param_1;
    *param_1 = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(lVar1);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar3;
}



/* Entry: 100979c3c; end: 100979c93;  */

undefined8 * FUN_100979c3c(void)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  puVar1 = &uStack_28;
  FUN_100979bb0(puVar1);
  FUN_100095cc4(0);
  func_0x000107c610f8();
  FUN_10097a9f4(puVar1);
  func_0x000107c61574(uStack_28);
  return puVar1;
}



/* Entry: 100979c94; end: 100979d33; +[GIDSignIn sharedInstance] */

void FUN_100979c94(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x100979d08;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam00000001136a1d28 != -1) {
    FUN_10002a2fc(0x1136a1d28,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1d30);
  return;
}



/* Entry: 100979d34; end: 100979d87; -[GIDSignIn initPrivate] */

undefined8 FUN_100979d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae430;
  func_0x000107c610f4(PTR_PTR_1126ae430);
  func_0x000107c46ff4();
  func_0x000107c47080(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100979d88; end: 100979daf; -[GTMKeychainStore initWithItemName:] */

void FUN_100979d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_100979db0();
  return;
}



/* Entry: 100979db0; end: 100979e7f;  */

undefined8 FUN_100979db0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
     (puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
     puVar3 = PTR___swiftEmptySetSingleton_11034f1d8, puVar2 != (undefined *)0x0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104a4c434();
  }
  lVar1 = 0;
  FUN_100979e80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0x687475414f;
  *(undefined8 *)(lVar1 + 0x18) = 0xe500000000000000;
  *(undefined **)(lVar1 + 0x20) = puVar3;
  func_0x000107c61150();
  func_0x000107c61170(param_1);
  func_0x000107c61574(lVar1);
  return unaff_x20;
}



/* Entry: 100979e80; end: 100979e9f;  */

void FUN_100979e80(void)

{
  func_0x000107c61168(&PTR_PTR_1130a5488);
  return;
}



/* Entry: 100979ea0; end: 100979f8b; -[GTMKeychainStore initWithItemName:keychainHelper:] */

undefined8
FUN_100979ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c61150();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_100979f8c(0);
  uVar3 = uVar2;
  FUN_10097a008();
  uVar4 = uVar1;
  func_0x000107c5fe10(uVar1,uVar2,uVar3);
  func_0x000107c61170(uVar1);
  uVar1 = uVar4;
  func_0x000107c5fe08(uVar4,uVar2,uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61150(param_1,PTR_s_initWithItemName_keychainAttribu_112525660,param_3,uVar1,param_4
                     );
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_4);
  return param_1;
}



/* Entry: 100979f8c; end: 100979fab;  */

void FUN_100979f8c(void)

{
  func_0x000107c61168(&PTR_PTR_1129ecfb8);
  return;
}


