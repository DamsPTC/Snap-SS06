/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bc31ec; end: 108bc3227; -[SCCContactAddressBookEntryStoringFactoryConfig .cxx_destruct] */

void FUN_108bc31ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc3228; end: 108bc329b; -[SCCContactUserStoringFactoryConfig initWithCallbackTrigger:] */

undefined1 * FUN_108bc3228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdb28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc329c; end: 108bc32a3; -[SCCContactUserStoringFactoryConfig callbackTrigger] */

undefined8 FUN_108bc329c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc32a4; end: 108bc32af; -[SCCContactUserStoringFactoryConfig .cxx_destruct] */

void FUN_108bc32a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc32b0; end: 108bc335b; -[SCComposerPeopleBridgeContactServices initWithContactAddressBookEntryStoreFactory:contactUserStoreFactory:] */

undefined1 *
FUN_108bc32b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdb30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc335c; end: 108bc3363; -[SCComposerPeopleBridgeContactServices contactAddressBookEntryStoreFactory] */

undefined8 FUN_108bc335c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc3364; end: 108bc336b; -[SCComposerPeopleBridgeContactServices contactUserStoreFactory] */

undefined8 FUN_108bc3364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc336c; end: 108bc339b; -[SCComposerPeopleBridgeContactServices .cxx_destruct] */

void FUN_108bc336c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc339c; end: 108bc33a3; -[SCComposerPeopleBridgeFriendServices friendStoreFactory] */

undefined8 FUN_108bc339c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc33a4; end: 108bc33ab; -[SCComposerPeopleBridgeFriendServices friendActionStoreFactory] */

undefined8 FUN_108bc33a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc33ac; end: 108bc33b3; -[SCComposerPeopleBridgeFriendServices incomingFriendStoreFactory] */

undefined8 FUN_108bc33ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc33b4; end: 108bc33bb; -[SCComposerPeopleBridgeFriendServices suggestedFriendStoreFactory] */

undefined8 FUN_108bc33b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bc33bc; end: 108bc33c3; -[SCComposerPeopleBridgeFriendServices blockedUserStore] */

undefined8 FUN_108bc33bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bc33c4; end: 108bc33cb; -[SCComposerPeopleBridgeFriendServices friendscoreProvider] */

undefined8 FUN_108bc33c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bc33cc; end: 108bc33d3; -[SCComposerPeopleBridgeFriendServices recentFriendStore] */

undefined8 FUN_108bc33cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108bc33d4; end: 108bc33db; -[SCComposerPeopleBridgeFriendServices recentlyActiveFriendStore] */

undefined8 FUN_108bc33d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108bc33dc; end: 108bc3453; -[SCComposerPeopleBridgeFriendServices .cxx_destruct] */

void FUN_108bc33dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc3454; end: 108bc349b; -[SCCFriendStoringFactoryConfig initWithPlacement:] */

void FUN_108bc3454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdb40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108bc349c; end: 108bc34a3; -[SCCFriendStoringFactoryConfig placement] */

undefined8 FUN_108bc349c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc34a4; end: 108bc350b; -[SCCSuggestedFriendStoringFactoryConfig initWithPageType:shouldIncludeActiveStoryInfo:shouldEnableSuggestionSelections:enableHideFeedback:] */

void FUN_108bc34a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fdb48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
  }
  return;
}



/* Entry: 108bc350c; end: 108bc352f; -[SCCSuggestedFriendStoringFactoryConfig copyWithZone:] */

undefined8 FUN_108bc350c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc3530; end: 108bc3597; -[SCCSuggestedFriendStoringFactoryConfig hash] */

ulong * FUN_108bc3530(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(uint *)(param_1 + 0xc);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(int *)((long)puVar1 + 0xc) != *(int *)((long)param_3 + 0xc) ||
           ((char)puVar1[1] != (char)param_3[1])) ||
          (*(char *)((long)puVar1 + 9) != *(char *)((long)param_3 + 9))))) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 10) == *(char *)((long)param_3 + 10));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108bc3598; end: 108bc364f; -[SCCSuggestedFriendStoringFactoryConfig isEqual:] */

bool FUN_108bc3598(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108bc3650; end: 108bc3657; -[SCCSuggestedFriendStoringFactoryConfig pageType] */

undefined4 FUN_108bc3650(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108bc3658; end: 108bc365f; -[SCCSuggestedFriendStoringFactoryConfig shouldIncludeActiveStoryInfo] */

undefined1 FUN_108bc3658(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bc3660; end: 108bc3667; -[SCCSuggestedFriendStoringFactoryConfig shouldEnableSuggestionSelections] */

undefined1 FUN_108bc3660(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bc3668; end: 108bc366f; -[SCCSuggestedFriendStoringFactoryConfig enableHideFeedback] */

undefined1 FUN_108bc3668(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108bc3670; end: 108bc36bf; -[SCCIncomingFriendStoringFactoryConfig initWithShouldIncludeActiveStoryInfo:shouldRankIncomingFriends:] */

void FUN_108bc3670(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdb50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 108bc36c0; end: 108bc36c7; -[SCCIncomingFriendStoringFactoryConfig shouldIncludeActiveStoryInfo] */

undefined1 FUN_108bc36c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bc36c8; end: 108bc36cf; -[SCCIncomingFriendStoringFactoryConfig shouldRankIncomingFriends] */

undefined1 FUN_108bc36c8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bc36d0; end: 108bc3773; -[SCComposerPeopleBridgeUserInfoServices initWithCurrentUserStore:userInfoProvider:] */

undefined1 *
FUN_108bc36d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdb58;
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



/* Entry: 108bc3774; end: 108bc377b; -[SCComposerPeopleBridgeUserInfoServices currentUserStore] */

undefined8 FUN_108bc3774(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc377c; end: 108bc3783; -[SCComposerPeopleBridgeUserInfoServices userInfoProvider] */

undefined8 FUN_108bc377c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc3784; end: 108bc37b3; -[SCComposerPeopleBridgeUserInfoServices .cxx_destruct] */

void FUN_108bc3784(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc37b4; end: 108bc37bf; -[SCLegacyContactStoreServices .cxx_destruct] */

void FUN_108bc37b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc37c0; end: 108bc37cb; -[SCFriendingContactSyncServices .cxx_destruct] */

void FUN_108bc37c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc37cc; end: 108bc383f; -[SCFriendingInviteContactsServices initWithContactsInviter:] */

undefined1 * FUN_108bc37cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdb70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc3840; end: 108bc3847; -[SCFriendingInviteContactsServices contactsInviter] */

undefined8 FUN_108bc3840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc3848; end: 108bc3853; -[SCFriendingInviteContactsServices .cxx_destruct] */

void FUN_108bc3848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc3854; end: 108bc385b; -[SCFetchFriendsResponseServices friendsResponseResultObservable] */

undefined8 FUN_108bc3854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc385c; end: 108bc388b; -[SCFetchFriendsResponseServices .cxx_destruct] */

void FUN_108bc385c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc388c; end: 108bc3893; -[SCSnapchattersRecentlyActiveRecordServices recentlyActiveRecordRepository] */

undefined8 FUN_108bc388c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc3894; end: 108bc38c3; -[SCSnapchattersRecentlyActiveRecordServices setRecentlyActiveRecordRepository:] */

void FUN_108bc3894(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108bc38c4; end: 108bc38cf; -[SCSnapchattersRecentlyActiveRecordServices .cxx_destruct] */

void FUN_108bc38c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc38d0; end: 108bc397b; -[SCSnapchattersRecentlyActiveRecord initWithUserId:isRecentlyActive:lastUpdatedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108bc38d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fdb88;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112778b28);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112778b28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112778b2c) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112778b30) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc397c; end: 108bc399f; -[SCSnapchattersRecentlyActiveRecord copyWithZone:] */

undefined8 FUN_108bc397c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc39a0; end: 108bc3a43; -[SCSnapchattersRecentlyActiveRecord hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108bc39a0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112778b28);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112778b2c);
  uVar5 = ~*(ulong *)(param_1 + _DAT_112778b30) + *(ulong *)(param_1 + _DAT_112778b30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108bc3b08:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bc3b14;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(char *)((long)puVar3 + (long)_DAT_112778b2c) == param_3[_DAT_112778b2c])) {
      dVar8 = ABS(*(double *)((long)puVar3 + (long)_DAT_112778b30) -
                  *(double *)(param_3 + _DAT_112778b30));
      dVar7 = ABS(*(double *)((long)puVar3 + (long)_DAT_112778b30) +
                  *(double *)(param_3 + _DAT_112778b30)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112778b28);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_112778b28)) {
          func_0x00010c071ae0();
          goto LAB_108bc3b14;
        }
        goto LAB_108bc3b08;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108bc3b14:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108bc3a44; end: 108bc3b2f; -[SCSnapchattersRecentlyActiveRecord isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108bc3a44(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc3b08:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc3b14;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (*(char *)(param_1 + (long)_DAT_112778b2c) == *(char *)(param_3 + (long)_DAT_112778b2c))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112778b30);
      dVar6 = *(double *)(param_3 + (long)_DAT_112778b30);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112778b28);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112778b28)) {
          func_0x00010c071ae0();
          goto LAB_108bc3b14;
        }
        goto LAB_108bc3b08;
      }
    }
    lVar4 = 0;
  }
LAB_108bc3b14:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108bc3b30; end: 108bc3b3f; -[SCSnapchattersRecentlyActiveRecord userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108bc3b30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778b28);
}



/* Entry: 108bc3b40; end: 108bc3b4f; -[SCSnapchattersRecentlyActiveRecord isRecentlyActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108bc3b40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112778b2c);
}



/* Entry: 108bc3b50; end: 108bc3b5f; -[SCSnapchattersRecentlyActiveRecord lastUpdatedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108bc3b50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778b30);
}



/* Entry: 108bc3b60; end: 108bc3b73; -[SCSnapchattersRecentlyActiveRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108bc3b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112778b28,0);
  return;
}



/* Entry: 108bc3b74; end: 108bc3c0b;  */

long FUN_108bc3b74(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 8) = lVar1;
  lVar1 = param_3;
  func_0x00010c07be00();
  *(char *)(param_2 + 0x10) = (char)lVar1;
  func_0x00010c08a800(param_3);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  _objc_release(param_3);
  return param_2;
}



/* Entry: 108bc3c0c; end: 108bc3c53;  */

void FUN_108bc3c0c(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126bb4b8);
    func_0x00010c05b520(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc3c54; end: 108bc3cab; -[SCUserSearchabilityServices initWithSearchabilityService:] */

long FUN_108bc3c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108bc3cac; end: 108bc3cb3; -[SCUserSearchabilityServices searchabilityService] */

undefined8 FUN_108bc3cac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc3cb4; end: 108bc3cbf; -[SCUserSearchabilityServices .cxx_destruct] */

void FUN_108bc3cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc3cc0; end: 108bc3d63; -[SCAddFriendsInviteServices initWithInviteFriendDeepLinkCoordinator:inviteFriendStateTracking:] */

undefined1 *
FUN_108bc3cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdb90;
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



/* Entry: 108bc3d64; end: 108bc3d6b; -[SCAddFriendsInviteServices inviteFriendDeepLinkCoordinator] */

undefined8 FUN_108bc3d64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc3d6c; end: 108bc3d73; -[SCAddFriendsInviteServices inviteFriendStateTracking] */

undefined8 FUN_108bc3d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc3d74; end: 108bc3da3; -[SCAddFriendsInviteServices .cxx_destruct] */

void FUN_108bc3d74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc3da4; end: 108bc3daf; -[SCContactSyncCTAQualificationServices .cxx_destruct] */

void FUN_108bc3da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc3db0; end: 108bc3e57; -[SCFriendFetchInFlightGroup initWithFetchRequest:forceFullSync:] */

undefined1 *
FUN_108bc3db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdba0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc3e58; end: 108bc3f87; -[SCFriendFetchInFlightGroup drainWithSuccess:error:] */

long FUN_108bc3e58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    lVar4 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3,param_4);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_4;
  }
  ___stack_chk_fail();
  return *(long *)(param_4 + 0x10);
}



/* Entry: 108bc3f88; end: 108bc3f8f; -[SCFriendFetchInFlightGroup fetchRequest] */

undefined8 FUN_108bc3f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc3f90; end: 108bc3f97; -[SCFriendFetchInFlightGroup forceFullSync] */

undefined1 FUN_108bc3f90(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bc3f98; end: 108bc3f9f; -[SCFriendFetchInFlightGroup setForceFullSync:] */

void FUN_108bc3f98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108bc3fa0; end: 108bc3fa7; -[SCFriendFetchInFlightGroup waiters] */

undefined8 FUN_108bc3fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc3fa8; end: 108bc3fd7; -[SCFriendFetchInFlightGroup .cxx_destruct] */

void FUN_108bc3fa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc3fd8; end: 108bc40b3; -[SCNonSnapchattersDataCoordinator initWithDocObjectContext:] */

undefined1 * FUN_108bc3fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdba8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc40b4; end: 108bc41e3; -[SCNonSnapchattersDataCoordinator updateLastShareTimestamp:completionQueue:completionHandler:] */

void FUN_108bc40b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bc41e4;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000107c2a728(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc41e4; end: 108bc421b;  */

void FUN_108bc41e4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010beda5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc421c; end: 108bc434b; -[SCNonSnapchattersDataCoordinator updateLastDestinationSelected:completionQueue:completionHandler:] */

void FUN_108bc421c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bc434c;
  puStack_70 = &UNK_110857fd0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000107c2a728(uVar1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc434c; end: 108bc4383;  */

void FUN_108bc434c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010beda340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc4384; end: 108bc4423; -[SCNonSnapchattersDataCoordinator _updateLastShareTimestamp:completionQueue:completionHandler:] */

void FUN_108bc4384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bc4424;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc4424; end: 108bc459b;  */

void FUN_108bc4424(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = param_2;
        func_0x000108c12ef0(param_2,*(undefined8 *)(lStack_128 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *(long *)(param_1 + 0x20);
        func_0x00010c296f60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0 && lVar4 != 0) {
          func_0x00010c26f320(lVar4);
          func_0x000108c1331c(param_2,lVar3);
        }
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar6 = *(undefined8 *)(param_2 + 8);
  _objc_retain(puVar5);
  func_0x00010c0f8500(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 108bc459c; end: 108bc463b; -[SCNonSnapchattersDataCoordinator _updateLastDestinationSelected:completionQueue:completionHandler:] */

void FUN_108bc459c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bc463c;
  puStack_40 = &UNK_11085adb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,param_5);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc463c; end: 108bc47ab;  */

void FUN_108bc463c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = param_2;
      func_0x000108c12ef0(param_2,*(undefined8 *)(lVar8 * 8));
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c296f60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c067ec0();
        func_0x000108c13284(param_2,lVar4,uVar6);
        _objc_release(uVar5);
      }
      _objc_release(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 108bc47ac; end: 108bc47db; -[SCNonSnapchattersDataCoordinator .cxx_destruct] */

void FUN_108bc47ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc47dc; end: 108bc48db; -[SCSnapchattersBlockedUsersReconciler initWithDocObjectContext:circumstanceEngine:friendSyncGrapheneLogger:] */

undefined1 *
FUN_108bc47dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fdbb0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc48dc; end: 108bc49bf; -[SCSnapchattersBlockedUsersReconciler reconcileServedBlockedUserIdsPage:] */

void FUN_108bc48dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108bc49c0; end: 108bc49f3;  */

void FUN_108bc49c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde27c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc49f4; end: 108bc4bd7; -[SCSnapchattersBlockedUsersReconciler _compareServedBlockedUserIds:] */

void FUN_108bc49f4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010be66520(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010be4f480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    func_0x00010be57dc0(param_1);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x000107c2a774();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c272ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    puVar6 = puVar1;
    func_0x00010bf529e0();
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_70,auStack_58);
    uStack_68 = uVar8;
    uStack_60 = puVar2 < puVar6;
    _objc_retain(uVar5);
    func_0x00010c0f7fc0(uVar7);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc4bd8; end: 108bc4c13;  */

void FUN_108bc4bd8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8f560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc4c14; end: 108bc4ca7; -[SCSnapchattersBlockedUsersReconciler _reportComparisonWithMissingLocalBlock:changeCountAtCompare:tokenAtCompare:] */

void FUN_108bc4c14(long param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x28) == param_4) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec1d8;
    if (param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eec1b8;
    }
    func_0x00010be57dc0(param_1,param_2,ppuVar1,0);
    if (param_3 != 0) {
      func_0x00010be34ec0(param_1,param_2,param_5);
    }
  }
  else {
    func_0x00010be57dc0(param_1,param_2,&PTR____CFConstantStringClassReference_110eec1f8,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108bc4ca8; end: 108bc4e73; -[SCSnapchattersBlockedUsersReconciler _healMissingLocalBlockWithTokenAtCompare:] */

void FUN_108bc4ca8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf1f440();
  if (((uVar1 & 1) == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    func_0x00010be54900(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uStack_78 = 0;
    uStack_68 = 0x2020000000;
    uStack_60 = 0;
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_70 = &uStack_78;
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108bc4e74;
    puStack_90 = &UNK_110947df8;
    puStack_80 = &uStack_78;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lStack_88 = param_3;
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_58);
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lStack_88);
    __Block_object_dispose(&uStack_78,8);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108bc4e74; end: 108bc4eab;  */

void FUN_108bc4e74(long param_1,undefined8 param_2)

{
  func_0x000108c10dac(param_2,*(undefined8 *)(param_1 + 0x20));
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 108bc4eac; end: 108bc4ef7;  */

void FUN_108bc4eac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc4ef8; end: 108bc4f23; -[SCSnapchattersBlockedUsersReconciler _completeHealWithCleared:committed:] */

void FUN_108bc4ef8(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eec258;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eec298;
  }
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daeeb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be54910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logHealOutcome__112572be0,ppuVar1);
  return;
}



/* Entry: 108bc4f24; end: 108bc4f7b; -[SCSnapchattersBlockedUsersReconciler _logHealOutcome:] */

void FUN_108bc4f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1220();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bc4f7c; end: 108bc51bf; -[SCSnapchattersBlockedUsersReconciler _locallyBlockedSubsetOfServedIds:] */

void FUN_108bc4f7c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar13;
  long lVar14;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_3);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    unaff_x22 = 0;
    do {
      func_0x00010bf529e0();
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c25e980(param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = lVar3;
      func_0x000108c0f4d0(lVar3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar3);
      unaff_x24 = unaff_x23;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (unaff_x24 != 0) {
        _objc_release(unaff_x23);
        puVar12 = (undefined *)0x0;
        goto LAB_108bc5170;
      }
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(unaff_x23);
      lVar3 = unaff_x23;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar13 = *plStack_120;
        do {
          lVar14 = 0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(unaff_x23);
            }
            lVar4 = *(long *)(lStack_128 + lVar14 * 8);
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c08fa60();
            if (lVar5 != 0) {
              func_0x00010befa120(puVar1);
            }
            _objc_release(lVar4);
            lVar14 = lVar14 + 1;
          } while (lVar3 != lVar14);
          lVar3 = unaff_x23;
          func_0x00010bf52a60();
          unaff_x24 = 0;
        } while (lVar3 != 0);
      }
      _objc_release(unaff_x23);
      _objc_release(unaff_x23);
      unaff_x22 = unaff_x22 + 500;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (unaff_x22 < uVar2);
  }
  _objc_retain(puVar1);
  puVar12 = puVar1;
LAB_108bc5170:
  _objc_release(puVar1);
  uVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108bc51c0;
  if (*(long *)(uVar2 + 0x30) == 0) {
    lStack_170 = unaff_x24;
    lStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    puStack_158 = puVar1;
    puStack_150 = puVar12;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_178,uVar2);
    uVar6 = *(undefined8 *)(uVar2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(uVar2 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000107c2a750();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(uVar2 + 0x20);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_178);
    uVar10 = uVar6;
    func_0x00010c0e0a80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(uVar2 + 0x30);
    *(undefined8 *)(uVar2 + 0x30) = uVar10;
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  return;
}



/* Entry: 108bc51c0; end: 108bc530f; -[SCSnapchattersBlockedUsersReconciler _observeLocalBlockedSetIfNeeded] */

void FUN_108bc51c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c2a750();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar5 = uVar1;
    func_0x00010c0e0a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 108bc5310; end: 108bc5337;  */

void FUN_108bc5310(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108bc5338; end: 108bc53a7; -[SCSnapchattersBlockedUsersReconciler _logResult:error:] */

void FUN_108bc5338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1240();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bc53a8; end: 108bc53fb; -[SCSnapchattersBlockedUsersReconciler .cxx_destruct] */

void FUN_108bc53a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc53fc; end: 108bc552b; -[SCSnapchattersContactRequestCoordinator fetchContactsWithContactRequest:completionQueue:completionHandler:] */

void FUN_108bc53fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc552c; end: 108bc5563;  */

void FUN_108bc552c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be108c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc5564; end: 108bc5663; -[SCSnapchattersContactRequestCoordinator deleteAllContactsWithCompletionQueue:completionHandler:] */

void FUN_108bc5564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bc5664; end: 108bc5697;  */

void FUN_108bc5664(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bc5698; end: 108bc585f; -[SCSnapchattersContactRequestCoordinator _fetchContactsWithContactRequest:completionQueue:completionHandler:] */

void FUN_108bc5698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf0a6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdc40();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c06f320();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      _CACurrentMediaTime();
      puVar4 = *(undefined **)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bfa9300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b84a8;
      func_0x00010c0fb040(PTR_PTR_1126b84a8,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a3d20(*(undefined8 *)(param_1 + 0x60));
      _CACurrentMediaTime();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a6560();
      _objc_release(uVar5);
      puVar6 = puVar4;
      if (puVar7 != (undefined *)0x0) {
        puVar6 = puVar7;
      }
      goto LAB_108bc57f4;
    }
  }
  puVar4 = (undefined *)0x0;
  puVar7 = (undefined *)0x0;
  puVar6 = (undefined *)0x0;
LAB_108bc57f4:
  func_0x00010bf529e0(puVar6);
  func_0x00010be53440(param_1,param_2,puVar6);
  func_0x00010be108a0(param_1,param_2,param_3,puVar4,puVar7,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


