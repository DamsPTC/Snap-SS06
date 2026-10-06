/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10041e870; end: 10041e8bb; +[SCObservable create:] */

void FUN_10041e870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fc8;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47bc0();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10041e8bc; end: 10041e967; -[SCObservableCreate initWithObserverBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10041e8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e580;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967bc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127967bc) = uVar4;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127967c0) = puVar2;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041e968; end: 10041ea4f; -[SCObservableCreate subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041e968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e580;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_subscribe__112675970,param_3);
  func_0x000107c61180();
  func_0x000107c3d7b4(*(undefined8 *)(param_1 + _DAT_1127967c0));
  lVar2 = *(long *)(param_1 + _DAT_1127967bc);
  if (lVar2 == 0) {
    func_0x000107c61174(plVar1);
    puVar3 = (undefined *)plVar1;
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126e2ea8;
    func_0x000107c610f4(PTR_PTR_1126e2ea8);
    func_0x000107c486f4();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(plVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10041ea50; end: 10041eaab; -[SCObservable subscribe:] */

void FUN_10041ea50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2fe0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47b64();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10041eaac; end: 10041eab7;  */

void FUN_10041eaac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deferredFriendsFeedUpdateEvents_11255bfc8,
             param_2);
  return;
}



/* Entry: 10041eab8; end: 10041ec1f; -[SCFriendsFeedEntryStore _deferredFriendsFeedUpdateEventsForObserver:] */

void FUN_10041eab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x5c);
  puVar1 = PTR_PTR_1126ba488;
  func_0x000107c610f4(PTR_PTR_1126ba488);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c3dbc0(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c3dbc0(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c40794();
  uVar5 = uVar4;
  FUN_10011df08();
  func_0x000107c61180();
  func_0x000107c490f8(puVar1,param_2,uVar2,uVar3,0,0,3,uVar4,uVar5,*(undefined1 *)(param_1 + 0x59));
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c4d664(param_3,param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4c280(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110894d30);
  func_0x000107c61180();
  uVar5 = uVar2;
  func_0x000107c5c310();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c611f0(param_1 + 0x5c);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10041ec20; end: 10041eda3; -[SCFriendsFeedUpdateEvent initWithUpdatedFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateType:fetchContexts:trackingIdentifier:isSuccessfulSync:] */

undefined1 *
FUN_10041ec20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

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
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_112703b58;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_10;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041eda4; end: 10041edff; -[SCObservable map:] */

void FUN_10041eda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ef0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d80();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10041ee00; end: 10041ee8f; -[SCMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10041ee00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e4a8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127966b8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10041ee90; end: 10041ef2f; -[SCMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041ee90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2ee8;
  func_0x000107c610f4(PTR_PTR_1126e2ee8);
  func_0x000107c47b68();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10041ef30; end: 10041eff7; -[SCMappedObserver initWithObservable:observer:mapper:] */

undefined1 *
FUN_10041ef30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270e4b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041eff8; end: 10041f013; -[SCMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041eff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966b8,0);
  return;
}



/* Entry: 10041f014; end: 10041f0d7; -[SCDisposableSink initWithSink:subscription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10041f014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e568;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112796794;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112796798;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11279679c) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041f0d8; end: 10041f147;  */

/* WARNING: Possible PIC construction at 0x00010041f11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010041f130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010041f120) */
/* WARNING: Removing unreachable block (ram,0x00010041f134) */

void FUN_10041f0d8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c5d6e4(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10041f148; end: 10041f187; -[SCObservableCreate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010041f16c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010041f170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041f148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127967c0,0);
  return;
}



/* Entry: 10041f188; end: 10041f18f; -[SCFriendsFeedUpdateEvent updatedFeedEntries] */

undefined8 FUN_10041f188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10041f190; end: 10041f253; -[SCGroupsDataUpdater _processArroyoGroupFeedMetadataForUpdatedFeedEntries:] */

void FUN_10041f190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3c180(param_1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10041f254; end: 10041f6eb; -[SCGroupsDataUpdater _processArroyoGroupFeedMetadataForFeedEntries:completion:] */

void FUN_10041f254(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  double dVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar2 = *(undefined **)(param_1 + 0x30);
  func_0x000107c3db40();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  dVar17 = 0.0;
  func_0x000107c61174(param_3);
  lVar4 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      func_0x000107c61170(param_3);
      puVar16 = puVar3;
      func_0x000107c40808();
      if (puVar16 == (undefined *)0x0) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,0);
        }
      }
      else {
        uVar13 = *(undefined8 *)(param_1 + 0x30);
        puVar16 = puVar3;
        func_0x000107c40794();
        func_0x000107c61174(param_4);
        func_0x000107c61174(puVar3);
        func_0x000107c4f6fc(uVar13);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(param_4);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return;
      }
      func_0x000107c60e78();
      param_3 = param_3 + 0x20;
      func_0x000107c61148(param_3);
      lVar4 = param_3;
      func_0x000107c3b8d8();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      puVar14 = *(undefined **)(lVar15 * 8);
      puVar16 = puVar14;
      func_0x000107c406e8();
      if (puVar16 != (undefined *)0x0) {
        puVar16 = puVar14;
        func_0x000107c40674(puVar14);
        func_0x000107c61180();
        puVar5 = puVar16;
        func_0x000107c5cb4c();
        func_0x000107c61180();
        func_0x000107c61170(puVar16);
        puVar6 = *(undefined **)(param_1 + 0x70);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        puVar16 = puVar14;
        func_0x000107c42104();
        func_0x000107c61180();
        func_0x000107c4a9c4(puVar14);
        puVar7 = puVar16;
        func_0x00010551713c(puVar16,puVar14,puVar6);
        func_0x000107c61180();
        func_0x000107c61170(puVar16);
        func_0x000107c61174(puVar6);
        func_0x000107c61174(puVar7);
        puVar14 = puVar7;
        puVar16 = puVar6;
        if (puVar6 == puVar7) {
LAB_10041f588:
          func_0x000107c61170(puVar14);
LAB_10041f598:
          func_0x000107c61170(puVar16);
        }
        else {
          if (puVar7 == (undefined *)0x0) {
            func_0x000107c61170();
LAB_10041f410:
            func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x70));
            puVar16 = puVar2;
            func_0x000107c4d9e8();
            func_0x000107c61180();
            puVar14 = PTR_PTR_1126ba2b8;
            func_0x000107c61158(PTR_PTR_1126ba2b8);
            puVar8 = puVar16;
            func_0x000107c6115c(puVar16,puVar14);
            puVar14 = puVar16;
            if (((ulong)puVar8 & 1) == 0) {
              puVar14 = (undefined *)0x0;
            }
            func_0x000107c61174(puVar14);
            func_0x000107c61170(puVar16);
            if (puVar14 != (undefined *)0x0) {
              puVar14 = PTR_PTR_1126ba2e8;
              func_0x000107c444f8();
              func_0x000107c61180();
              puVar8 = puVar7;
              func_0x000107c4aa00(puVar7);
              func_0x000107c61180();
              puVar9 = puVar14;
              func_0x000107c5e620();
              func_0x000107c61180();
              func_0x000107c61170(puVar14);
              func_0x000107c61170(puVar8);
              puVar8 = puVar7;
              func_0x000107c4aa44();
              func_0x000107c61180();
              puVar10 = puVar7;
              func_0x000107c4aa00(puVar7);
              func_0x000107c61180();
              func_0x000107c5c9e4();
              puVar11 = puVar8;
              func_0x000105509404(puVar8,(long)dVar17);
              func_0x000107c61180();
              puVar14 = puVar9;
              func_0x000107c5e624();
              func_0x000107c61180();
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar8);
              puVar8 = puVar14;
              func_0x000107c3ecc8(puVar14);
              func_0x000107c61180();
              func_0x000107c56bd8(puVar3);
              func_0x000107c61170(puVar8);
              goto LAB_10041f588;
            }
            puVar16 = (undefined *)0x0;
            goto LAB_10041f598;
          }
          func_0x000107c49cec();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar6);
          if (((ulong)puVar16 & 1) == 0) goto LAB_10041f410;
        }
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
      }
      lVar15 = lVar15 + 1;
    } while (lVar4 != lVar15);
    lVar4 = param_3;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10041f6ec; end: 10041f72b;  */

void FUN_10041f6ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b8d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10041f72c; end: 10041f7db; -[SCGroupServicesEntryPoint _groupsUpdateNotificationPresenter] */

void FUN_10041f72c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010041ade8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d6ec();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126ba408;
  func_0x000107c610f4(PTR_PTR_1126ba408);
  FUN_10041f7e4(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c490fc(puVar3,param_2,uVar2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10041f7dc; end: 10041f7e3; -[SCNativeMessagingServices updatedGroupsObservable] */

undefined8 FUN_10041f7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10041f7e4; end: 10041f807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041f7e4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112725118);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041f808; end: 10041f8c7; -[SCGroupsUpdateNotificationPresenter initWithUpdatedGroupsObservable:notificationPool:] */

undefined1 *
FUN_10041f808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8cf0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041f8c8; end: 10041fa47; -[SCGroupsUpdateNotificationPresenter subscribeToUpdatedGroupsObservable] */

void FUN_10041f8c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10060ac3c;
  puStack_78 = &UNK_110894700;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c43494(uVar4);
  func_0x000107c61180();
  uVar1 = uVar4;
  FUN_100078e94();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c4da88(uVar4);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10041fa48; end: 10041fa4f; -[SCNativeMessagingServices groupsReadySignal] */

undefined8 FUN_10041fa48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10041fa50; end: 10041fd2b; -[SCFuture valueWithCompletion:performer:preferSynchronous:] */

/* WARNING: Possible PIC construction at 0x00010041faa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010041fb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010041fb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010041fc9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010041fc54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010041fca0) */
/* WARNING: Removing unreachable block (ram,0x00010041fb74) */
/* WARNING: Removing unreachable block (ram,0x00010041fb64) */
/* WARNING: Removing unreachable block (ram,0x00010041faa8) */
/* WARNING: Removing unreachable block (ram,0x00010041faf4) */
/* WARNING: Removing unreachable block (ram,0x00010041fb80) */
/* WARNING: Removing unreachable block (ram,0x00010041fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010041fbac) */
/* WARNING: Removing unreachable block (ram,0x00010041fbc0) */
/* WARNING: Removing unreachable block (ram,0x00010041fbd0) */
/* WARNING: Removing unreachable block (ram,0x00010041fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010041fbd8) */
/* WARNING: Removing unreachable block (ram,0x00010041fccc) */
/* WARNING: Removing unreachable block (ram,0x00010041fcd0) */
/* WARNING: Removing unreachable block (ram,0x00010041fbe0) */
/* WARNING: Removing unreachable block (ram,0x00010041fbf8) */
/* WARNING: Removing unreachable block (ram,0x00010041fc24) */
/* WARNING: Removing unreachable block (ram,0x00010041fc2c) */
/* WARNING: Removing unreachable block (ram,0x00010041fb00) */
/* WARNING: Removing unreachable block (ram,0x00010041fab8) */
/* WARNING: Removing unreachable block (ram,0x00010041fae0) */
/* WARNING: Removing unreachable block (ram,0x00010041fac0) */
/* WARNING: Removing unreachable block (ram,0x00010041fb20) */
/* WARNING: Removing unreachable block (ram,0x00010041fac8) */
/* WARNING: Removing unreachable block (ram,0x00010041faec) */
/* WARNING: Removing unreachable block (ram,0x00010041fb28) */
/* WARNING: Removing unreachable block (ram,0x00010041fc58) */
/* WARNING: Removing unreachable block (ram,0x00010041fc50) */
/* WARNING: Removing unreachable block (ram,0x00010041fc68) */
/* WARNING: Removing unreachable block (ram,0x00010041fc6c) */
/* WARNING: Removing unreachable block (ram,0x00010041fc84) */
/* WARNING: Removing unreachable block (ram,0x00010041fc8c) */

void FUN_10041fa50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_3 != 0) {
    func_0x000107c40794(param_3);
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10041fd2c; end: 10041fefb; -[SCGroupServices initWithGroupsDataTracker:groupsDataFetcher:groupsDataMutator:groupsDataCreator:groupSnapchatterRepository:groupLinkHandler:topGroupsDataFetcher:groupsCustomColorsFetcher:groupDisplayNameFormatter:] */

undefined1 *
FUN_10041fd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112706d68;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    func_0x000107c61170(uVar2);
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
  return (undefined1 *)puVar1;
}



/* Entry: 10041fefc; end: 10041ff8f;  */

void FUN_10041fefc(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10041ff90; end: 10041ff97;  */

void FUN_10041ff90(undefined8 *param_1)

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



/* Entry: 10041ff98; end: 10041ffeb;  */

void FUN_10041ff98(undefined8 *param_1)

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



/* Entry: 10041ffec; end: 10041fff7;  */

void FUN_10041ffec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100217b04();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10042027c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10041fff8; end: 1004200c7;  */

void FUN_10041fff8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100217b04();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10042027c(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004200c8; end: 1004200cf;  */

void FUN_1004200c8(long *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  FUN_100211718();
  ppuStack_28 = &PTR_DAT_110405b18;
  uStack_30 = uVar1;
  FUN_100083b20(auStack_48);
  FUN_100083b20(&uStack_50);
  uVar1 = 0;
  FUN_1002128f0(0);
  func_0x000107c610f8();
  puVar2 = auStack_48;
  func_0x0001004201b8(puVar2,uStack_50,uVar1);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 1004200d0; end: 100420143;  */

void FUN_1004200d0(long *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  FUN_100211718();
  ppuStack_28 = &PTR_DAT_110405b18;
  uStack_30 = uVar1;
  FUN_100083b20(auStack_48);
  FUN_100083b20(&uStack_50);
  uVar1 = 0;
  FUN_1002128f0(0);
  func_0x000107c610f8();
  puVar2 = auStack_48;
  func_0x0001004201b8(puVar2,uStack_50,uVar1);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 100420144; end: 10042014b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100420144(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100211718();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc7c50) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10042014c; end: 100420237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042014c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100211718();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dc7c50) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100420238; end: 10042027b;  */

long FUN_100420238(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10042027c; end: 100420523;  */

void FUN_10042027c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7f08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc2fe0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100420524);
  (*pcVar1)();
}



/* Entry: 100420524; end: 100420573; -[SCGroupsStorage allGroups] */

void FUN_100420524(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c40794(uVar1);
  func_0x000107c611f0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100420574; end: 1004205e3;  */

/* WARNING: Possible PIC construction at 0x0001004205b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004205cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004205bc) */
/* WARNING: Removing unreachable block (ram,0x0001004205d0) */

void FUN_100420574(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3dbc0(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1004205e4; end: 10042066b; -[SCGroupsDataUpdater _announceGroupsUpdateChangeForGroups:] */

/* WARNING: Possible PIC construction at 0x00010042064c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100420650) */

void FUN_1004205e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 != 0) {
    func_0x000107c5d704(PTR_PTR_1126ba380,param_2,param_3);
    func_0x000107c61180();
    param_3 = *(long *)(param_1 + 0x40);
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    func_0x000107c41c08();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10042066c; end: 1004206cb; -[SCFriendsFeedUpdateEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100420684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010042069c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004206b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004206a0) */
/* WARNING: Removing unreachable block (ram,0x000100420688) */
/* WARNING: Removing unreachable block (ram,0x0001004206b8) */

void FUN_10042066c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 1004206cc; end: 1004207cb; -[SCBoltOnDemandResourceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004206cc(long param_1)

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
  puVar2 = PTR_PTR_1126b9f68;
  func_0x000107c610f4(PTR_PTR_1126b9f68);
  func_0x000107c466cc();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127249d4));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1004207cc; end: 1004207eb; -[FCNSDecoder decodeBoolForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004207cc(long param_1)

{
  func_0x000107c4d9e8(*(undefined8 *)(param_1 + _DAT_11279628c));
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1004207ec; end: 10042085f; -[SCOnDemandResourceDownloaderServices initWithDownloader:] */

undefined1 * FUN_1004207ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705e80;
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



/* Entry: 100420860; end: 10042089b;  */

void FUN_100420860(void)

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



/* Entry: 10042089c; end: 1004208a3;  */

void FUN_10042089c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004208a4; end: 1004208f7;  */

void FUN_1004208a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004208f8; end: 100420ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1004208f8(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puStack_68;
  
  puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar5 = *puVar7;
  if ((uVar5 & 3) != 0) {
    uVar5 = (uVar5 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar5;
  }
  uVar6 = uVar5 + 4;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar6) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar5 = *puVar7;
    uVar6 = uVar5 + 4;
  }
  iVar1 = *(int *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
  *puVar7 = uVar6;
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x000107c4e060();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
  puStack_68 = puVar3;
  func_0x000107c60780(uVar9);
  func_0x000107c60768(uVar9,&puStack_68,8);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar6 = *puVar7;
    uVar5 = uVar6 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar5) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
    }
    bVar2 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar6);
    *puVar7 = uVar5;
    if ((bVar2 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar2 * 8),
       pcVar8 != (code *)0x0)) {
      lVar4 = param_1;
      (*pcVar8)();
      if (lVar4 != 0) {
        func_0x000107c3d798(puVar3);
      }
    }
    else {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
  }
  return puVar3;
}



/* Entry: 100420ad8; end: 100420ae3;  */

void FUN_100420ad8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002099f8();
  func_0x000107c613fc();
  FUN_100420b78(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100420ae4; end: 100420b77;  */

void FUN_100420ae4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002099f8();
  func_0x000107c613fc();
  FUN_100420b78(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100420b78; end: 100420d53;  */

void FUN_100420b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7e48;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
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
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100420d54; end: 100420d5b;  */

void FUN_100420d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkABValue_112554e08);
  return;
}



/* Entry: 100420d5c; end: 100420f6f; -[SCPureArroyoABTracker _checkABValue] */

/* WARNING: Possible PIC construction at 0x000100420da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100420f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100420f20) */
/* WARNING: Removing unreachable block (ram,0x000100420f10) */
/* WARNING: Removing unreachable block (ram,0x000100420ec4) */
/* WARNING: Removing unreachable block (ram,0x000100420e88) */
/* WARNING: Removing unreachable block (ram,0x000100420e2c) */
/* WARNING: Removing unreachable block (ram,0x000100420de8) */
/* WARNING: Removing unreachable block (ram,0x000100420df0) */
/* WARNING: Removing unreachable block (ram,0x000100420e48) */
/* WARNING: Removing unreachable block (ram,0x000100420dac) */
/* WARNING: Removing unreachable block (ram,0x000100420dfc) */
/* WARNING: Removing unreachable block (ram,0x000100420db8) */
/* WARNING: Removing unreachable block (ram,0x000100420f60) */
/* WARNING: Removing unreachable block (ram,0x000100420e1c) */

void FUN_100420d5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4d9c0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100420f70; end: 1004210cf; -[SCBloopsFeatureInfoServiceProvider provide] */

void FUN_100420f70(undefined8 param_1)

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
  puStack_70 = &UNK_1054b0bf0;
  puStack_68 = &UNK_11088f658;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b98d8;
  func_0x000107c610f4(PTR_PTR_1126b98d8);
  func_0x000107c45a2c();
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



/* Entry: 1004210d0; end: 100421103; -[SCFideliusDeviceGraphDictionary initWithCoder:] */

void FUN_1004210d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf28;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_initWithCoder__1125dd730);
  return;
}



/* Entry: 100421104; end: 100421137; -[SCAccessOrderedDictionary initWithCoder:] */

void FUN_100421104(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf00;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_initWithCoder__1125dd730);
  return;
}



/* Entry: 100421138; end: 100421213; -[SCOrderedDictionary initWithCoder:] */

long FUN_100421138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = param_3;
    func_0x000107c41478(param_3,param_2,&PTR____CFConstantStringClassReference_110e11238);
    func_0x000107c61180();
    func_0x000107c540c0(param_1,param_2,uVar1);
    func_0x000107c61170(uVar1);
    uVar1 = param_3;
    func_0x000107c41478(param_3,param_2,&PTR____CFConstantStringClassReference_110e11258);
    func_0x000107c61180();
    func_0x000107c559c8(param_1,param_2,uVar1);
    func_0x000107c61170(uVar1);
    uVar1 = param_3;
    func_0x000107c41470(param_3,param_2,&PTR____CFConstantStringClassReference_110e0faf8);
    func_0x000107c56360(param_1,param_2,uVar1);
    uVar1 = param_3;
    func_0x000107c41454(param_3,param_2,&PTR____CFConstantStringClassReference_110e11278);
    func_0x000107c61170(param_3);
    func_0x000107c5918c(param_1,param_2,uVar1);
  }
  return param_1;
}



/* Entry: 100421214; end: 100421243; -[SCOrderedDictionary setDict:] */

void FUN_100421214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100421244; end: 100421273; -[SCOrderedDictionary setKeys:] */

void FUN_100421244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100421274; end: 10042127b; -[SCOrderedDictionary setMaxSize:] */

void FUN_100421274(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10042127c; end: 100421283; -[SCOrderedDictionary setShouldPrune:] */

void FUN_10042127c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100421284; end: 100421337; -[SCFideliusDeviceGraph initWithCoder:] */

undefined1 * FUN_100421284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126eaf20;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c41470(param_3);
    func_0x000107c5a4e0(puVar1);
    uVar2 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    func_0x000107c54f34(puVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100421338; end: 1004213db; -[SCBloopsFeatureInfoService initWithBloopsFeature:withBloopsUserOnboardingStatusProvider:] */

undefined1 *
FUN_100421338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fd840;
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



/* Entry: 1004213dc; end: 10042140f;  */

void FUN_1004213dc(void)

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



/* Entry: 100421410; end: 10042141f; -[SCFideliusDeviceGraph setVersion:] */

void FUN_100421410(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 100421420; end: 100421473;  */

void FUN_100421420(undefined8 *param_1)

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



/* Entry: 100421474; end: 10042233f;  */

void FUN_100421474(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
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
  FUN_100239ff8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x90) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_100;
  *(undefined8 *)(param_2 + 200) = uStack_108;
  *(undefined8 *)(param_2 + 0xd0) = uStack_110;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_110;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174();
  uVar11 = uStack_b0;
  func_0x000107c61174();
  uVar12 = uStack_b8;
  func_0x000107c61174();
  uVar13 = uStack_c0;
  func_0x000107c61174();
  uVar14 = uStack_c8;
  func_0x000107c61174();
  uVar15 = uStack_d0;
  func_0x000107c61174();
  uVar16 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174(uStack_100);
  uVar22 = uStack_108;
  func_0x000107c61174(uStack_108);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x30) = puVar2;
  puVar2 = PTR_PTR_1126bccc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar23 = auStack_70[0];
  func_0x000107c61174();
  uVar24 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6e90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar24 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efcd7c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar24 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efcd7e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar24 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efcd800);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc7070);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef25be0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar24);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efcd820);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6750);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc66c0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar24 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar24 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc6790);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar24);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar26);
  uVar24 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar24);
  func_0x000107c61174(uVar22);
  func_0x000107c61174();
  uVar24 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef20290);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar24);
  func_0x000107c61174();
  uVar24 = 0x112df2028;
  FUN_1000285a8(0x112df2028,&UNK_10d9bfea8);
  func_0x000107c60184();
  uVar25 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efcd840);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c615e8(uVar24);
  func_0x000107c61170(uVar25);
  lVar30 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar24 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efcd870);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(uVar24);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  lVar27 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efcd890);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uVar24);
  lVar28 = *(long *)(param_2 + 0x28);
  func_0x000107c61174(uVar25);
  func_0x000107c61174();
  uVar24 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efcd8b0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(uVar24);
  lVar29 = *(long *)(param_2 + 0x30);
  func_0x000107c61174(uVar25);
  func_0x000107c61174();
  uVar24 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efcd8d0);
  func_0x000107c5a49c(uVar25);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(uVar24);
  func_0x000107c3e740(uVar25);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100422334);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xd8) = lVar30;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100422338);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xe0) = lVar27;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar28 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042233c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xe8) = lVar28;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar29 != 0) {
    func_0x000107c61170(uVar23);
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
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar3);
    *(long *)(param_2 + 0xf0) = lVar29;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100422340);
  (*pcVar1)();
}



/* Entry: 100422340; end: 10042238b;  */

void FUN_100422340(void)

{
  long unaff_x20;
  
  FUN_100421474(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 10042238c; end: 100422393;  */

void FUN_10042238c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100422394; end: 1004223e7;  */

void FUN_100422394(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004223e8; end: 100422bdb;  */

void FUN_1004223e8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  long lVar17;
  long lVar18;
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
  FUN_100235280();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_c0;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar11 = uStack_b0;
  func_0x000107c61174();
  uVar12 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a8320;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc7050);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar2);
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc7070);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f630);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc7090);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = 0x112de4f70;
  FUN_1000285a8(0x112de4f70,&UNK_10d9aefc8);
  func_0x000107c60184();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc70b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(puVar2);
  uVar14 = 0x112de4f78;
  FUN_1000285a8(0x112de4f78,&UNK_10d9aefd0);
  func_0x000107c60184();
  uVar15 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc70d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar15);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar15);
  uVar16 = 0x6f6c6e55736e656c;
  func_0x000107c5fadc(0x6f6c6e55736e656c,0xec00000072656b63);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc70f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar14);
  lVar17 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100422bd8);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x78) = lVar17;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar18 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    *(long *)(param_2 + 0x80) = lVar18;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100422bdc);
  (*pcVar1)();
}



/* Entry: 100422bdc; end: 100422c17;  */

void FUN_100422bdc(void)

{
  long unaff_x20;
  
  FUN_1004223e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 100422c18; end: 100422c1f;  */

void FUN_100422c18(undefined8 *param_1)

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



/* Entry: 100422c20; end: 100422c73;  */

void FUN_100422c20(undefined8 *param_1)

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



/* Entry: 100422c74; end: 100422c83;  */

void FUN_100422c74(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
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
  FUN_10022fee0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8370;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c615f0(uStack_90);
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
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6c50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c615f0(uStack_90);
  func_0x000107c61174();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uStack_90);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_90);
  *(undefined **)(lVar1 + 0x40) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 100422c84; end: 100423047;  */

void FUN_100422c84(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
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
  FUN_10022fee0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8370;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c615f0(uStack_90);
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
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6c50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c615f0(uStack_90);
  func_0x000107c61174();
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3db20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uStack_90);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uStack_90);
  *(undefined **)(param_2 + 0x40) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 100423048; end: 100423077; -[SCFideliusDeviceGraph setGraph:] */

void FUN_100423048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100423078; end: 10042333f; -[SCUnlockablesNetworkServiceProvider provide] */

void FUN_100423078(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126bbec0;
  func_0x000107c610f4(PTR_PTR_1126bbec0);
  func_0x000107c490b0();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100423340; end: 100423553; -[SCFideliusDeviceGraphManager _validateDeviceGraph:source:] */

undefined8 FUN_100423340(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    func_0x000107c4bbcc();
  }
  else {
    puVar1 = PTR_PTR_1126c0478;
    func_0x000107c61158(PTR_PTR_1126c0478);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,puVar1);
    uVar4 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c4448c(param_3);
      func_0x000107c61180();
      func_0x000107c4c890();
    }
    else {
      uVar2 = param_3;
      func_0x000107c5dd14();
      if (uVar2 == 9) {
        uVar2 = param_3;
        func_0x000107c4448c();
        func_0x000107c61180();
        func_0x000107c61170();
        if (uVar2 == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c5c734(uVar5);
          func_0x000107c61180();
          func_0x000107c4448c(param_3);
          func_0x000107c61180();
          func_0x000107c4c890();
        }
        else {
          uVar2 = param_3;
          func_0x000107c4448c();
          func_0x000107c61180();
          uVar3 = uVar2;
          func_0x000107c5dbe0();
          func_0x000107c61170(uVar2);
          if ((uVar3 & 1) != 0) {
            uVar5 = 1;
            goto LAB_10042352c;
          }
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c5c734(uVar5);
          func_0x000107c61180();
          func_0x000107c4448c(param_3);
          func_0x000107c61180();
          func_0x000107c4c890();
        }
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c5c734(uVar5);
        func_0x000107c61180();
        func_0x000107c4448c(param_3);
        func_0x000107c61180();
        func_0x000107c4c890();
      }
    }
    func_0x000107c4bbcc(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(uVar5);
  uVar5 = 0;
LAB_10042352c:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return uVar5;
}



/* Entry: 100423554; end: 10042355b; -[SCFideliusDeviceGraph version] */

undefined8 FUN_100423554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10042355c; end: 100423563; -[SCFideliusDeviceGraph graph] */

undefined8 FUN_10042355c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100423564; end: 1004235e7; -[SCOrderedDictionary validate] */

bool FUN_100423564(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c4a910();
  func_0x000107c61180();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_1;
    func_0x000107c41984();
    func_0x000107c61180();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      func_0x000107c4c890(param_1);
      bVar1 = param_1 != 0;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar2);
  return bVar1;
}



/* Entry: 1004235e8; end: 1004235ef; -[SCOrderedDictionary keys] */

undefined8 FUN_1004235e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004235f0; end: 1004235f7; -[SCOrderedDictionary dict] */

undefined8 FUN_1004235f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004235f8; end: 1004235ff; -[SCOrderedDictionary maxSize] */

undefined8 FUN_1004235f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100423600; end: 100423723; -[SCUnlockablesNetworkServices initWithUnlockableRemotePinner:unlockableRemoteFetcher:unlockManager:unlockableRemover:unlockableNetworkManagerProvider:] */

undefined1 *
FUN_100423600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112705868;
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
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100423724; end: 10042376f;  */

void FUN_100423724(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100423770; end: 100423777;  */

void FUN_100423770(undefined8 *param_1)

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



/* Entry: 100423778; end: 1004237cb;  */

void FUN_100423778(undefined8 *param_1)

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



/* Entry: 1004237cc; end: 1004237db;  */

void FUN_1004237cc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
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
  FUN_100235024();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a82d8;
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
  func_0x000107c61174();
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6cd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6680);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc6cf0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004237dc; end: 100423b17;  */

void FUN_1004237dc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
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
  FUN_100235024();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a82d8;
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
  func_0x000107c61174();
  uVar7 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6cd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc6680);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc6cf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 100423b18; end: 100423b1f;  */

void FUN_100423b18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x110);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100423b20; end: 100423b73;  */

void FUN_100423b20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x110);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100423b74; end: 100423b7b;  */

void FUN_100423b74(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100423b7c; end: 100423bcf;  */

void FUN_100423b7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100423bd0; end: 100423be3;  */

void FUN_100423bd0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100230dd4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uStack_88;
  *(undefined8 *)(lVar2 + 0x48) = uStack_90;
  *(undefined8 *)(lVar2 + 0x50) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174();
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126de4a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6ab0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar14 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc7190);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efc71c0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100424158);
    (*pcVar1)();
  }
  *(long *)(lVar2 + 0x58) = lVar14;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(lVar2 + 0x60) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10042415c);
  (*pcVar1)();
}



/* Entry: 100423be4; end: 10042415b;  */

void FUN_100423be4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
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
  FUN_100230dd4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126de4a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar13 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc7190);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efc71c0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100424158);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x58) = lVar13;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(param_2 + 0x60) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10042415c);
  (*pcVar1)();
}



/* Entry: 10042415c; end: 100424513; -[SCUnlockableDataStoreServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042415c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112784978;
    func_0x000107c61148();
  }
  lVar1 = lVar9;
  func_0x000107c4b518();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112784980;
    func_0x000107c61148(lVar9);
  }
  lVar2 = lVar9;
  func_0x000107c5db24(lVar9);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112784984;
    func_0x000107c61148(lVar10);
  }
  lVar3 = lVar10;
  func_0x000107c4ec80(lVar10);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c3cb2c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar9);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11278497c;
    func_0x000107c61148();
  }
  lVar2 = lVar9;
  func_0x000107c5d2c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61144(auStack_78,param_1);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar1);
  func_0x000107c3e504();
  func_0x000107c61180();
  lVar9 = param_1;
  func_0x000107c3cb34(param_1);
  func_0x000107c61180();
  lVar10 = param_1;
  func_0x000107c3cb38(param_1);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126de4b0;
  func_0x000107c610f4(PTR_PTR_1126de4b0);
  func_0x000107c49098();
  if (param_1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + _DAT_11278498c);
  }
  func_0x000107c61174(uVar11);
  func_0x000107c42c20(uVar11);
  func_0x000107c61170(uVar11);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar5);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126de4b8;
  func_0x000107c610f4(PTR_PTR_1126de4b8);
  func_0x000107c47418();
  uVar11 = 0;
  if (param_1 != 0) {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112784990);
  }
  func_0x000107c61174(uVar11);
  func_0x000107c42c20(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100424514; end: 1004245bb; -[SCFideliusDeviceGraphManager _updateKeysLimit:] */

/* WARNING: Possible PIC construction at 0x00010042455c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010042458c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100424560) */
/* WARNING: Removing unreachable block (ram,0x000100424568) */
/* WARNING: Removing unreachable block (ram,0x000100424590) */
/* WARNING: Removing unreachable block (ram,0x0001004245a4) */

void FUN_100424514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4448c(param_3);
  func_0x000107c61180();
  func_0x000107c4c890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


