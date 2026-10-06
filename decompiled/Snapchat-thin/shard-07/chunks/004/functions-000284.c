/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105521d28; end: 105521d2f; -[SCArroyoStoryDataUpdateAnnouncer removeListener:] */

void FUN_105521d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105521d30; end: 105521d37; -[SCArroyoStoryDataUpdateAnnouncer onStorySendUpdated:storyDestinations:content:state:] */

void FUN_105521d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onStorySendUpdated_storyDestinat_1126174e8);
  return;
}



/* Entry: 105521d38; end: 105521d3f; -[SCArroyoStoryDataUpdateAnnouncer onStorySendComplete:content:completedStoryDestinations:] */

void FUN_105521d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onStorySendComplete_content_comp_1126174e0);
  return;
}



/* Entry: 105521d40; end: 105521d4b; -[SCArroyoStoryDataUpdateAnnouncer .cxx_destruct] */

void FUN_105521d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105521d4c; end: 105521daf; -[SCNotificationCenterUpdateAnnouncer init] */

undefined1 * FUN_105521d4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8d60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ba470;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105521db0; end: 105521db7; -[SCNotificationCenterUpdateAnnouncer addListener:] */

void FUN_105521db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105521db8; end: 105521dbf; -[SCNotificationCenterUpdateAnnouncer removeListener:] */

void FUN_105521db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105521dc0; end: 105521dc7; -[SCNotificationCenterUpdateAnnouncer onBadgeUpdated:] */

void FUN_105521dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onBadgeUpdated__1126164b0);
  return;
}



/* Entry: 105521dc8; end: 105521dcb; -[SCNotificationCenterUpdateAnnouncer onNotificationsUpdated:] */

void FUN_105521dc8(void)

{
  return;
}



/* Entry: 105521dcc; end: 105521dcf; -[SCNotificationCenterUpdateAnnouncer onNotificationsReset:] */

void FUN_105521dcc(void)

{
  return;
}



/* Entry: 105521dd0; end: 105521dd3; -[SCNotificationCenterUpdateAnnouncer onNotificationRemoved:] */

void FUN_105521dd0(void)

{
  return;
}



/* Entry: 105521dd4; end: 105521ddf; -[SCNotificationCenterUpdateAnnouncer .cxx_destruct] */

void FUN_105521dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105521de0; end: 105521e8b; -[SCArroyoFetchFeedEntriesCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_105521de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8d68;
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



/* Entry: 105521e8c; end: 105521e9b; -[SCArroyoFetchFeedEntriesCallback onError:] */

void FUN_105521e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105521e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 105521e9c; end: 105521eab; -[SCArroyoFetchFeedEntriesCallback onFetchFeedEntriesComplete:] */

void FUN_105521e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105521ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 105521eac; end: 105521edb; -[SCArroyoFetchFeedEntriesCallback .cxx_destruct] */

void FUN_105521eac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105521edc; end: 105521f87; -[SCArroyoFetchFeedEntriesForUsersCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_105521edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8d70;
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



/* Entry: 105521f88; end: 105521f9f; -[SCArroyoFetchFeedEntriesForUsersCallback onComplete:] */

void FUN_105521f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105521f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105521fa0; end: 105521fb7; -[SCArroyoFetchFeedEntriesForUsersCallback onError:] */

void FUN_105521fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105521fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105521fb8; end: 105521fe7; -[SCArroyoFetchFeedEntriesForUsersCallback .cxx_destruct] */

void FUN_105521fb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105521fe8; end: 105522093; -[SCFetchAndSyncFeedWithConversationIdsCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_105521fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8d78;
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



/* Entry: 105522094; end: 1055220a3; -[SCFetchAndSyncFeedWithConversationIdsCallback onFetchAndSyncFeedComplete:] */

void FUN_105522094(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001055220a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1055220a4; end: 1055220b3; -[SCFetchAndSyncFeedWithConversationIdsCallback onError:] */

void FUN_1055220a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001055220b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1055220b4; end: 1055220e3; -[SCFetchAndSyncFeedWithConversationIdsCallback .cxx_destruct] */

void FUN_1055220b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055220e4; end: 10552218f; -[SCFetchSaveableSentSnapMessageIdCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_1055220e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8d80;
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



/* Entry: 105522190; end: 10552219f; -[SCFetchSaveableSentSnapMessageIdCallback onError:] */

void FUN_105522190(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010552219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1055221a0; end: 1055221ef; -[SCFetchSaveableSentSnapMessageIdCallback onSuccess:] */

void FUN_1055221a0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055221f0; end: 10552221f; -[SCFetchSaveableSentSnapMessageIdCallback .cxx_destruct] */

void FUN_1055221f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105522220; end: 105522277; -[SCCommunityFeedLoadingStatusStream updateLoadingStatus:triggerType:] */

void FUN_105522220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba478;
  _objc_alloc(PTR_PTR_1126ba478);
  func_0x00010c026860();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105522278; end: 10552227f; -[SCCommunityFeedLoadingStatusStream loadingStatus] */

undefined8 FUN_105522278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105522280; end: 1055222af; -[SCCommunityFeedLoadingStatusStream .cxx_destruct] */

void FUN_105522280(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055222b0; end: 1055222d3;  */

void FUN_1055222b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb22b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_fixedQoSPerformerWithLabel_quali_1125ca250,
             &PTR____CFConstantStringClassReference_110de9b38,2,0,0xb,
             &PTR____CFConstantStringClassReference_110de9b78);
  return;
}



/* Entry: 1055222d4; end: 105522307; -[SCFriendsFeedEntryStore dispose] */

void FUN_1055222d4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be051b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispose_11255ee08);
  return;
}



/* Entry: 105522308; end: 105522357; -[SCFriendsFeedEntryStore _dispose] */

void FUN_105522308(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x5c);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x5c);
  return;
}



/* Entry: 105522358; end: 1055223db; -[SCFriendsFeedEntryStore .cxx_destruct] */

void FUN_105522358(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1055223dc; end: 1055223e3; -[SCFriendsFeedLoadingStatusStream loadingStatus] */

undefined8 FUN_1055223dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1055223e4; end: 105522413; -[SCFriendsFeedLoadingStatusStream .cxx_destruct] */

void FUN_1055223e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105522414; end: 105522447; -[SCNativeCommunityFeedManager hasMoreFeedEntries] */

undefined1 FUN_105522414(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  _os_unfair_lock_unlock(param_1 + 0x38);
  return uVar1;
}



/* Entry: 105522448; end: 10552246f; -[SCNativeCommunityFeedManager hasMoreFeedEntriesObservable] */

void FUN_105522448(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105522470; end: 105522543; -[SCNativeCommunityFeedManager maybeSyncFeedLite:userInCommunities:] */

void FUN_105522470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba4b0;
  _objc_alloc(PTR_PTR_1126ba4b0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c3e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3ae0();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105522544; end: 10552254b;  */

void FUN_105522544(void)

{
  return;
}



/* Entry: 10552254c; end: 1055225d7; -[SCNativeCommunityFeedManager exitFeed:] */

void FUN_10552254c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2730;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e42e0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055225d8; end: 1055225df;  */

void FUN_1055225d8(void)

{
  return;
}



/* Entry: 1055225e0; end: 105522687; -[SCNativeCommunityFeedManager enterFeed:] */

void FUN_1055225e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bea6980(param_1,param_2,1);
  func_0x00010c287540(*(undefined8 *)(param_1 + 0x50),param_2,1,9);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4260();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105522688; end: 10552268f;  */

void FUN_105522688(void)

{
  return;
}



/* Entry: 105522690; end: 10552271b; -[SCNativeCommunityFeedManager retryMultiRecipientFeedEntry:] */

void FUN_105522690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2730;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f860();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10552271c; end: 105522723;  */

void FUN_10552271c(void)

{
  return;
}



/* Entry: 105522724; end: 105522883; -[SCNativeCommunityFeedManager cancelSendForConversationIds:] */

void FUN_105522724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105522884;
  puStack_58 = &UNK_110842e18;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c04f4c0(puVar1);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f080();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105522884; end: 105522887;  */

void FUN_105522884(void)

{
  return;
}



/* Entry: 105522888; end: 105522907;  */

void FUN_105522888(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_105528e2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6300();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105522908; end: 105522a77; -[SCNativeCommunityFeedManager fetchSaveableSentSnapMessageIdForConversationId:completion:] */

void FUN_105522908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba4b8;
  _objc_alloc(PTR_PTR_1126ba4b8);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105522a78;
  puStack_68 = &UNK_11085d1a0;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105522a8c;
  puStack_98 = &UNK_110875d40;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_80,&puStack_b0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9ec0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105522a78; end: 105522aa3;  */

void FUN_105522a78(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105522a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105522aa4; end: 105522acb; -[SCNativeCommunityFeedManager updateObservable] */

void FUN_105522aa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105522acc; end: 105522af3; -[SCNativeCommunityFeedManager loadingStatusStreaming] */

void FUN_105522acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105522af4; end: 105522b87; -[SCNativeCommunityFeedManager queryFeedAutoPaginated:] */

void FUN_105522af4(long param_1,undefined8 param_2,ulong param_3)

{
  _os_unfair_lock_lock(param_1 + 0x38);
  if ((((param_3 & 1) != 0) || ((*(byte *)(param_1 + 0x28) & 1) != 0)) &&
     (*(char *)(param_1 + 0x48) != '\x01')) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    _os_unfair_lock_unlock(param_1 + 0x38);
    func_0x00010c287540(*(undefined8 *)(param_1 + 0x50),param_2,1,6);
    func_0x00010be0ecc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 105522b88; end: 105522d53; -[SCNativeCommunityFeedManager didUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:] */

void FUN_105522b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_7;
  func_0x00010c0f2980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bea6980(param_1,param_2,0);
  }
  else {
    lVar1 = param_7;
    func_0x00010c0f2980(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd9280();
    func_0x00010bea69a0(param_1,param_2,0,lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_7;
    func_0x00010c0f2980(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd9280();
    func_0x00010c0df6e0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_7;
  func_0x00010bfa4400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  uVar4 = 6;
  if (lVar2 != 1) {
    uVar4 = 9;
  }
  _objc_release(lVar1);
  func_0x00010c287540(*(undefined8 *)(param_1 + 0x50),param_2,0,uVar4);
  puVar3 = PTR_PTR_1126ba460;
  _objc_alloc(PTR_PTR_1126ba460);
  func_0x00010c059840();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105522d54; end: 105522dd3; -[SCNativeCommunityFeedManager didFeedRequestError:status:] */

void FUN_105522d54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bea6980(param_1);
  lVar2 = param_3;
  func_0x00010c27c360();
  _objc_release(param_3);
  uVar1 = 6;
  if (lVar2 != 1) {
    uVar1 = 9;
  }
  func_0x00010becc8e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c287550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_updateLoadingStatus_triggerType__11267f778,3,
             uVar1);
  return;
}



/* Entry: 105522dd4; end: 105522e13; -[SCNativeCommunityFeedManager _feedManager] */

void FUN_105522dd4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105522e14; end: 105522edb; -[SCNativeCommunityFeedManager _submitNotificationWithPresenter:] */

void FUN_105522e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105522e9c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105522edc; end: 105522edf; -[SCNativeCommunityFeedManager _toastError:updateType:] */

void FUN_105522edc(void)

{
  return;
}



/* Entry: 105522ee0; end: 105522f0f; -[SCNativeCommunityFeedManager _setQueryFeedAutoPaginatedRequestedInFlight:] */

void FUN_105522ee0(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 105522f10; end: 105522f4f; -[SCNativeCommunityFeedManager _setQueryFeedAutoPaginatedRequestedInFlight:hasMoreEntries:] */

void FUN_105522f10(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  _os_unfair_lock_lock(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 105522f50; end: 105522fb7; -[SCNativeCommunityFeedManager .cxx_destruct] */

void FUN_105522f50(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105522fb8; end: 105522fff; -[SCNativeFeedManager _queryFeedParameters] */

void FUN_105522fb8(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105523000; end: 1055230af; -[SCNativeFeedManager _queryFeedParametersForQueryPaginationUpdate:feedEntries:] */

void FUN_105523000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bde8c20(param_1,param_2,param_3,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ba4c0;
  _objc_alloc(PTR_PTR_1126ba4c0);
  uVar2 = param_3;
  func_0x00010c2709c0(param_3);
  uVar3 = param_3;
  func_0x00010bfd9280(param_3);
  _objc_release(param_3);
  func_0x00010c033680(puVar1,param_2,uVar2,param_1,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055230b0; end: 10552314f; -[SCNativeFeedManager _reportNonFatalForQueryIfNecessaryForFeedEntries:hasMoreEntries:] */

void FUN_1055230b0(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (uVar1 < 0x14)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064ea4c4();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x0001064ea53c(uVar2,uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105523150; end: 1055231ab; -[SCNativeFeedManager hasMoreFeedEntries] */

undefined8 FUN_105523150(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfd9340(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1055231ac; end: 1055231d3; -[SCNativeFeedManager hasMoreFeedEntriesObservable] */

void FUN_1055231ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055231d4; end: 1055231d7; -[SCNativeFeedManager queryFeedParameters] */

void FUN_1055231d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__queryFeedParameters_11257ee68);
  return;
}



/* Entry: 1055231d8; end: 1055231ff; -[SCNativeFeedManager feedDataUpdatePublisher] */

void FUN_1055231d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105523200; end: 10552328f; -[SCNativeFeedManager enterFeed:] */

void FUN_105523200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2730;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4260();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105523290; end: 105523297;  */

void FUN_105523290(void)

{
  return;
}



/* Entry: 105523298; end: 105523323; -[SCNativeFeedManager exitFeed:] */

void FUN_105523298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2730;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e42e0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105523324; end: 10552332b;  */

void FUN_105523324(void)

{
  return;
}



/* Entry: 10552332c; end: 1055233b7; -[SCNativeFeedManager retryMultiRecipientFeedEntry:] */

void FUN_10552332c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2730;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04f4c0();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13f860();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055233b8; end: 1055233bf;  */

void FUN_1055233b8(void)

{
  return;
}



/* Entry: 1055233c0; end: 10552351f; -[SCNativeFeedManager cancelSendForConversationIds:] */

void FUN_1055233c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105523520;
  puStack_58 = &UNK_110842e18;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c04f4c0(puVar1);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2f080();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105523520; end: 105523523;  */

void FUN_105523520(void)

{
  return;
}



/* Entry: 105523524; end: 1055235a3;  */

void FUN_105523524(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_105528e2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6300();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055235a4; end: 105523713; -[SCNativeFeedManager fetchSaveableSentSnapMessageIdForConversationId:completion:] */

void FUN_1055235a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba4b8;
  _objc_alloc(PTR_PTR_1126ba4b8);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105523714;
  puStack_68 = &UNK_11085d1a0;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105523728;
  puStack_98 = &UNK_110875d40;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_80,&puStack_b0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9ec0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105523714; end: 10552373f;  */

void FUN_105523714(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105523720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105523740; end: 105523807; -[SCNativeFeedManager _paginateFeedForFetchContext:] */

void FUN_105523740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be85320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2900();
  puVar3 = PTR_PTR_1126b0cd8;
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc35c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d3e0();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105523808; end: 10552392f; -[SCNativeFeedManager paginateFeedForFetchContext:] */

void FUN_105523808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa8);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0xa8);
  if (lVar1 == 0) {
    func_0x00010be6fb00(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c297260(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105523930; end: 105523963;  */

void FUN_105523930(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6fb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105523964; end: 105523997; -[SCNativeFeedManager consecutivePaginationFailures] */

undefined8 FUN_105523964(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _os_unfair_lock_unlock(param_1 + 0x98);
  return uVar1;
}



/* Entry: 105523998; end: 1055239a3; -[SCNativeFeedManager configureForWarmStart] */

void FUN_105523998(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1055239a4; end: 105523b63; -[SCNativeFeedManager fetchAndSyncFeedWithConversationIds:completion:] */

void FUN_1055239a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ba4c8;
  _objc_alloc(PTR_PTR_1126ba4c8);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c04f4c0(puVar1);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110894fa8);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4e20();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105523b64; end: 105523bd7;  */

void FUN_105523b64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be0f800();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105523bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105523bd8; end: 105523bff;  */

void FUN_105523bd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105523be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 105523c00; end: 105523c77; -[SCNativeFeedManager _fetchAndSyncFeedWithConversationIdsSuccessCallbackWithFeedEntries:] */

void FUN_105523c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285bc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105523c78; end: 105523c7b; -[SCNativeFeedManager _toastArroyoError:updateType:] */

void FUN_105523c78(void)

{
  return;
}



/* Entry: 105523c7c; end: 105523d43; -[SCNativeFeedManager _submitNotificationWithPresenter:] */

void FUN_105523c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105523d04;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105523d44; end: 105523e6f; -[SCNativeFeedManager _didQueryFeedUpdateFeedEntries:multiRecipientFeedEntries:updateMetadata:] */

void FUN_105523d44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c0f2980(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd9280();
  func_0x00010be8fdc0(param_1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010086dfc4(param_5,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0f2980(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bede3c0(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285bc0();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010be38340(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105523e70; end: 10552401f; -[SCNativeFeedManager didFeedRequestError:status:] */

void FUN_105523e70(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c27c360();
  lVar1 = param_3;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 < 2) {
    if (lVar4 != 0) {
      if ((lVar4 == 1) && (lVar1 != 0)) {
        func_0x00010bdff0c0(param_1,param_2,lVar1,param_4);
      }
      goto LAB_105523ffc;
    }
    if (lVar1 == 0) goto LAB_105523ffc;
    lVar2 = lVar1;
    func_0x00010c272380(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf02780();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar6 = 9;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf02780(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c067fc0();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126ba4d0;
    _objc_alloc(PTR_PTR_1126ba4d0);
    func_0x00010086e164(lVar6);
    func_0x00010c01bbe0(puVar5,param_2,lVar4,lVar6);
    func_0x00010be00a80(param_1,param_2,lVar1,puVar5,param_4);
    _objc_release(puVar5);
  }
  else {
    if (lVar4 != 3) {
      if ((lVar4 == 2) && (lVar1 != 0)) {
        func_0x00010bdfde40(param_1,param_2,lVar1,param_4);
      }
      goto LAB_105523ffc;
    }
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_105523ffc;
    func_0x00010bf43d60(*(long *)(param_1 + 0xb0),param_2,PTR____kCFBooleanFalse_11034ab60);
    lVar4 = *(long *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  _objc_release(lVar4);
LAB_105523ffc:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105524020; end: 1055240d7; -[SCNativeFeedManager _didFetchFeedRequestError:status:] */

void FUN_105524020(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x80);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar3);
      goto LAB_1055240c4;
    }
    lVar1 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_1055240c4;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar2);
  _CACurrentMediaTime();
  func_0x00010be54d00(param_1,param_2,0,0);
LAB_1055240c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055240d8; end: 10552411f; -[SCNativeFeedManager _didQueryFeedRequestError:status:] */

/* WARNING: Possible PIC construction at 0x000105524108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010552410c) */
/* WARNING: Removing unreachable block (ram,0x00010be38340) */

void FUN_1055240d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 6) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c287550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateLoadingStatus_triggerType__11267f778,uVar1,6);
  return;
}



/* Entry: 105524120; end: 105524343; -[SCNativeFeedManager _didSyncFeedRequestError:fetchContext:status:] */

void FUN_105524120(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010060dccc();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b380();
    _objc_release(uVar2);
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ba490;
    lVar1 = param_6;
    func_0x000107d6c230(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0260(puVar3,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c4c0(uVar2,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b09a0();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba0a8;
    lVar1 = param_6;
    func_0x000107d6c230(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01a0(param_1,puVar3,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5820(uVar2,param_3,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  uVar2 = 2;
  if (param_6 != 6) {
    uVar2 = 3;
  }
  lVar1 = param_5;
  func_0x00010c27c360(param_5);
  func_0x00010c287540(param_2,param_3,uVar2,lVar1);
  func_0x00010becc8c0(param_2,param_3,param_6,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  dVar6 = *(double *)(param_5 + 0x88);
  puVar3 = PTR_PTR_1126b2cb0;
  func_0x00010c0d59c0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105524344; end: 10552443f; -[SCNativeFeedManager _logInitialFetchMetricWithCurrentTime:success:feedEntriesCount:] */

void FUN_105524344(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar5 = *(double *)(param_2 + 0x88);
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010c0d59c0(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1 - dVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105524440; end: 1055245cb; -[SCNativeFeedManager updatePinnedStatusWithPinned:conversationId:completion:] */

void FUN_105524440(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1055245cc;
  puStack_80 = &UNK_11085b7b0;
  _objc_retain(param_4);
  uStack_78 = param_4;
  uStack_68 = (ulong)(param_3 ^ 1);
  _objc_retain(param_5);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1055245e4;
  puStack_b8 = &UNK_110894fc8;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  uStack_a0 = (ulong)(param_3 ^ 1);
  uStack_70 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c04f4c0(puVar3,param_2,&puStack_98,&puStack_d0);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbc40();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  return;
}



/* Entry: 1055245cc; end: 1055245fb;  */

void FUN_1055245cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055245dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}


