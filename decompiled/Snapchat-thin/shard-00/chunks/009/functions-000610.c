/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bad33c; end: 100bad363; -[SCFriendsFeedDataCoordinator consumableConversationIdsObservable] */

void FUN_100bad33c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bad364; end: 100bad42f; -[SCLensDataFetcherUIState initWithPerformer:] */

undefined1 * FUN_100bad364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705a40;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bad430; end: 100bad4ab; -[SCLensDataFetcherFactory _fetcherStrategyFactoryWithUIState:] */

void FUN_100bad430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfa40;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c45de8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bad4ac; end: 100bad5d7; -[SCFriendsFeedDataCoordinator _subscribeToPinnedConversationUpdates] */

void FUN_100bad4ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4e764();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4da8c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100bad5d8; end: 100bad617;  */

void FUN_100bad5d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c12c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bad618; end: 100bad91b; -[SCPinnedConversationsServiceProvider _pinnedConversationDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bad618(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar1 = param_1 + _DAT_112724d18;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c40688();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112724d1c;
  func_0x000107c61148();
  lVar15 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar3 = lVar15;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar1);
  lVar15 = (long)_DAT_112724d20;
  lVar1 = param_1 + lVar15;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c43a84();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112724d24;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112724d28;
  func_0x000107c61148(lVar1);
  lVar6 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar15 = param_1 + lVar15;
  func_0x000107c61148(lVar15);
  lVar7 = lVar15;
  func_0x000107c4d490();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  puVar8 = PTR_PTR_1126ba100;
  func_0x000107c610f4();
  lVar1 = param_1 + _DAT_112724d2c;
  func_0x000107c61148(lVar1);
  lVar15 = lVar1;
  func_0x000107c5cf7c();
  func_0x000107c61180();
  lVar9 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c459f0(puVar8,param_2,lVar5,lVar2,lVar4,lVar7,lVar6,lVar9,lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar1);
  puVar13 = PTR_PTR_1126aeec0;
  puVar11 = PTR_PTR_1126ae960;
  puVar10 = PTR_PTR_1126b2990;
  func_0x000107c4e750(PTR_PTR_1126b2990);
  func_0x000107c61180();
  func_0x000107c4074c(puVar11,param_2,puVar10);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1054ed9f4;
  puStack_70 = &UNK_110841f20;
  func_0x000107c61174(puVar8);
  puStack_68 = puVar8;
  func_0x000107c3e2d4(puVar13,param_2,puVar11,puVar12,0,&puStack_88);
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112724d30);
  *(undefined **)(param_1 + _DAT_112724d30) = puVar13;
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puStack_68);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100bad91c; end: 100badaeb; -[SCLensDataFetchingStrategyFactory initWithCircumstanceEngine:featureSettingsService:downloadTracker:cacheClearTracker:networkConnectivityMonitor:lensUserProvider:lensDataFetcherUIState:redownloadLogger:lensDataConfig:] */

undefined1 *
FUN_100bad91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1127059d0;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_11;
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



/* Entry: 100badaec; end: 100badbbb; -[SCLensDataFetcherFactory _lensDataFetcherWithStrategyFactory:lensDataFetcherUIState:acfEnabled:] */

void FUN_100badaec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfa38;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c48acc();
  func_0x000107c61170(param_3);
  puVar2 = PTR_PTR_1126ddd38;
  func_0x000107c610f4(PTR_PTR_1126ddd38);
  func_0x000107c4916c();
  func_0x000107c61170(param_4);
  func_0x000107c3d67c(puVar2,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100badbbc; end: 100baddb3; -[SCPinnedConversationDataProvider initWithBlizzardLogger:conversationIdResolver:friendsFeedEntryStore:nativeSessionManagerFuture:performerProvider:translator:userId:] */

undefined1 *
FUN_100badbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126e8bc0;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar4;
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



/* Entry: 100baddb4; end: 100bade27; -[SCLensDataFetchingImmediateLoadingQueueFactory initWithStrategyFactory:] */

undefined1 * FUN_100baddb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127059c8;
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



/* Entry: 100bade28; end: 100bae29f; -[SCLensDataFetcher initWithUrlDataFetcher:operationsFactory:lensDataFetcherUIState:performer:visibleLensesPerformer:lensDataFetcherLoadingQueueFactory:lensIconRepository:fetchTypeProvider:lensDataConfig:acfEnabled:] */

undefined8 *
FUN_100bade28(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_98 = PTR_PTR_112705a30;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(puVar1[4]);
    puVar3 = PTR_PTR_1126dfa98;
    func_0x000107c61160();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dfaa0;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dfaa8;
    func_0x000107c61160();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c5e0ec();
    func_0x000107c61180();
    uVar5 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x000107c61170(uVar5);
    uVar2 = param_8;
    func_0x000107c4afdc();
    func_0x000107c61180();
    uVar5 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar5);
    uVar2 = param_8;
    func_0x000107c4b1c8();
    func_0x000107c61180();
    uVar5 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar5);
    uVar2 = param_8;
    func_0x000107c4adf4();
    func_0x000107c61180();
    uVar5 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar5);
    uVar2 = param_8;
    func_0x000107c42c90();
    func_0x000107c61180();
    uVar5 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    uVar2 = param_11;
    func_0x000107c4b174();
    *(char *)(puVar1 + 10) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0x51) = param_12;
    uStack_88 = puVar1[0xd];
    uStack_70 = puVar1[0x10];
    uStack_90 = puVar1[0x11];
    uStack_78 = puVar1[0xf];
    uStack_80 = puVar1[0xe];
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar3);
    puVar3 = PTR_PTR_1126b24d0;
    func_0x000107c5a9bc(PTR_PTR_1126b24d0);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c3d758();
    func_0x000107c61170(puVar3);
    func_0x000107c3ca14(puVar1);
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
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  func_0x000107c60e78();
  param_3 = param_3 + 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_3,puVar4);
  return param_3;
}



/* Entry: 100bae2a0; end: 100bae2ab; -[SCLensDataFetcherUIState setDelegate:] */

void FUN_100bae2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 100bae2ac; end: 100bae323; -[SCFriendsFeedBadgeProvider initWithBadgeObservable:] */

undefined1 * FUN_100bae2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e48b8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bae324; end: 100bae32b; -[SCNavigationItemBadgeProviderScope plugInRegistry] */

undefined8 FUN_100bae324(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bae32c; end: 100bae333; +[SCAttributedConvoTask pinnedConversations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bae32c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1f0) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bae334; end: 100bae387; -[SCPinnedConversationDataProvider pinnedTimestampsByFeedId] */

void FUN_100bae334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bae388; end: 100bae50f; -[SCFriendsFeedDataCoordinator _startInitialLoad] */

void FUN_100bae388(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c426dc();
  func_0x000107c61170(uVar1);
  if ((int)uVar5 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x1c8);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c44798();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    if ((uVar4 & 1) == 0) {
      func_0x000107c61144(auStack_38,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_40,auStack_38);
      func_0x000107c4e55c(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
    }
  }
  func_0x000107c4124c(*(undefined8 *)(param_1 + 0x1b8));
  func_0x000107c3ca0c(param_1);
  func_0x000107c3ca08(param_1);
  func_0x000107c3c9d8(param_1);
  func_0x000107c3ca04(param_1);
  func_0x000107c5baec(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c5baec(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 100bae510; end: 100bae527; -[SCMessagingExperimentServiceImpl enableWipeFeedDocObjectsCleanup] */

void FUN_100bae510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8e78,0,0);
  return;
}



/* Entry: 100bae528; end: 100bae58b; -[SCPreferences hasClearedFeedDb] */

void FUN_100bae528(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110e52658);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bae58c; end: 100bae5bb; -[SCPageLoadMetricManagerImpl dataLoadStart:] */

void FUN_100bae58c(undefined8 param_1)

{
  func_0x000107c3c0a0();
  func_0x000107c61180();
  func_0x000107c41248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bae5bc; end: 100bae65f; -[SCPageLoadMetric dataLoadStart] */

void FUN_100bae5bc(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_2;
  func_0x000107c3cd8c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c6071c();
  func_0x000107c3e774(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c611ec(param_2 + 0x3c);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d954(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(param_2 + 8),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110e4c358);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 100bae660; end: 100bae777; -[SCPageLoadMetric _validDataLoad] */

bool FUN_100bae660(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  double dVar6;
  
  func_0x000107c611ec(param_2 + 0x3c);
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c358);
  func_0x000107c61180();
  if (lVar1 == 0) {
    bVar5 = false;
  }
  else {
    lVar2 = *(long *)(param_2 + 8);
    func_0x000107c4d9e8(lVar2,param_3,&PTR____CFConstantStringClassReference_110e4c378);
    func_0x000107c61180();
    if (lVar2 == 0) {
      bVar5 = false;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c378);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar6 = param_1;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c358);
      func_0x000107c61180();
      func_0x000107c4223c();
      bVar5 = dVar6 < param_1;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c611f0(param_2 + 0x3c);
  return bVar5;
}



/* Entry: 100bae778; end: 100bae79f; -[SCPageLoadTrace beginDataLoad] */

void FUN_100bae778(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3e7fc(param_1,param_2,2);
  *(long *)(param_1 + 0x38) = lVar1;
  return;
}



/* Entry: 100bae7a0; end: 100bae8ef; -[SCFriendsFeedDataCoordinator _subscribeToStoriesSummaries] */

void FUN_100bae7a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5c074(uVar1);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100bae8f0; end: 100bae8f7; -[SCStoriesDataCoordinator storySummariesObservableWithObservationQueue:] */

void FUN_100bae8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_storySummariesObservableWithObse_112674760);
  return;
}



/* Entry: 100bae8f8; end: 100bae9e3; -[SCStoriesSummariesObserver storySummariesObservableWithObservationQueue:] */

void FUN_100bae8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bae9e4; end: 100baea2b;  */

void FUN_100bae9e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c938();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100baea2c; end: 100baea9f; -[SCStoriesSummariesObserver _storySummariesObservableWithObservationQueue:] */

void FUN_100baea2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  FUN_10093c798(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c4da10();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100baeaa0; end: 100baeb8f; -[SCFriendsFeedDataCoordinator _subscribeToPresenceUpdates] */

void FUN_100baeaa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c3d180(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100baeb90; end: 100baeb9b; -[SCFriendsFeedPresenceInfoDataProvider activePresenceInfoObservableWithPerformer:] */

void FUN_100baeb90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_observeOnPerformer_preferSynchro_112615dc8,
             param_3,1);
  return;
}



/* Entry: 100baeb9c; end: 100baecc3; -[SCFriendsFeedDataCoordinator _subscribeToEligibilityUpdates] */

void FUN_100baeb9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42478();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100baecc4; end: 100baed03;  */

void FUN_100baecc4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b59c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100baed04; end: 100baef2b; -[SCChatEligibilityServiceProvider _eligibilityProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100baed04(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126be860;
  func_0x000107c610f4(PTR_PTR_1126be860);
  lVar2 = param_1;
  FUN_100bb04a4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5da30();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112729e40;
    func_0x000107c61148();
  }
  lVar4 = lVar12;
  func_0x000107c5b4cc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112729e34;
    func_0x000107c61148();
  }
  lVar5 = lVar13;
  func_0x000107c5da68();
  func_0x000107c61180();
  lVar6 = param_1;
  FUN_100bb04a4();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c4f3e4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112729e38;
    func_0x000107c61148();
  }
  lVar8 = lVar14;
  func_0x000107c5b17c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112729e44;
    func_0x000107c61148(lVar15);
  }
  lVar9 = lVar15;
  func_0x000107c5bf3c(lVar15);
  func_0x000107c61180();
  lVar10 = 0;
  if (param_1 != 0) {
    lVar10 = param_1 + _DAT_112729e48;
    func_0x000107c61148();
  }
  lVar11 = lVar10;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c487bc(puVar1,param_2,lVar3,lVar4,lVar5,lVar7,lVar8,lVar9,lVar11);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100baef2c; end: 100baf013;  */

/* WARNING: Possible PIC construction at 0x000100baef9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100baefbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100baefe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100baeff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100baefec) */
/* WARNING: Removing unreachable block (ram,0x000100baefc0) */
/* WARNING: Removing unreachable block (ram,0x000100baefa0) */
/* WARNING: Removing unreachable block (ram,0x000100baeffc) */

void FUN_100baef2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x108);
    func_0x000107c61148();
    func_0x000107c3ecf8();
    func_0x000107c61180();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    func_0x000107c61174(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100baf014; end: 100baf0d3; -[_TtC35SCNavigationItemBadgePluginRegistry39SCNavigationItemBadgePluginSaberService buildSaberPluginsWithViewTypeToNavigationItemMap:] */

void FUN_100baf014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_1002ed07c(0);
  uVar2 = 0x112f31228;
  FUN_1000285a8(0x112f31228,&UNK_10db77058);
  uVar3 = uVar2;
  FUN_100120cb0();
  func_0x000107c5f9e8(param_3,uVar1,uVar2,uVar3);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_100baf0d4(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  uVar2 = 0x112f31258;
  FUN_1000285a8(0x112f31258,&UNK_10db770c8);
  uVar1 = uVar3;
  func_0x000107c5fc48(uVar3,uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100baf0d4; end: 100baf383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100baf0d4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar10 = 0;
  uVar1 = param_1 & 0xffffffffffffff8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_1;
  }
  do {
    while( true ) {
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,*(undefined1 *)(lVar10 + 0x112f31220));
      FUN_10008a7c8(&puStack_68,&puStack_70);
      puVar2 = puStack_68;
      if (puStack_68 != (undefined *)0x0) break;
LAB_100baf134:
      lVar10 = lVar10 + 1;
      if (lVar10 == 2) {
        return puVar8;
      }
    }
    FUN_100083b20(&puStack_70);
    func_0x000107c61574(puVar2);
    puVar2 = puStack_70;
    if (puStack_70 == (undefined *)0x0) goto LAB_100baf134;
    puStack_78 = PTR_DAT_1126a2658;
    uVar9 = 1;
    puVar7 = puStack_70;
    func_0x000107c61494(puStack_70,1,&puStack_78);
    if (puVar7 != (undefined *)0x0) {
      puVar6 = puVar2;
      func_0x000107c615f0();
      func_0x000107c4d51c();
      puVar12 = puVar2;
      if (puVar6 < (undefined *)0x4) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ed0();
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            func_0x000107c61434(param_1);
            puVar5 = puVar6;
            FUN_100121450();
            if ((uVar9 & 1) != 0) {
              puStack_68 = *(undefined **)(*(long *)(param_1 + 0x38) + (long)puVar5 * 8);
              func_0x000107c615f0();
              func_0x000107c6142c(param_1);
              goto LAB_100baf270;
            }
            func_0x000107c6142c(param_1);
          }
        }
        else {
          puVar5 = puVar6;
          func_0x000107c6043c(puVar6,uVar1);
          if (puVar5 != (undefined *)0x0) {
            uVar4 = 0x112f31228;
            puStack_70 = puVar5;
            FUN_1000285a8(0x112f31228,&UNK_10db77058);
            func_0x000107c6147c(&puStack_68,&puStack_70,PTR___syXlN_11034f1a0 + 8,uVar4,7);
LAB_100baf270:
            puVar5 = puStack_68;
            func_0x000107c61170(puVar6);
            if (puVar5 != (undefined *)0x0) {
              func_0x000107c41c84(puVar7);
              func_0x000107c615e8(puVar2);
              puVar12 = puVar5;
            }
            goto LAB_100baf2b4;
          }
        }
        puStack_68 = (undefined *)0x0;
        func_0x000107c61170(puVar6);
      }
LAB_100baf2b4:
      func_0x000107c615e8(puVar12);
    }
    puVar7 = puVar8;
    func_0x000107c61550();
    if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
       (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar6 = puVar8;
        }
        func_0x000107c60480(puVar6);
      }
      puVar7 = (undefined *)0x0;
      FUN_100bb1240(0,puVar6 + 1,1,puVar8);
    }
    uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
    uVar9 = *(ulong *)(uVar11 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_100bb1240(puVar8,uVar9 + 1,1,puVar7);
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
    *(undefined **)(uVar11 + uVar9 * 8 + 0x20) = puVar2;
    bVar3 = lVar10 == 1;
    lVar10 = lVar10 + 1;
    if (bVar3) {
      return puVar8;
    }
  } while( true );
}



/* Entry: 100baf384; end: 100baf43f;  */

void FUN_100baf384(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_100bb1520();
    pcVar1 = "SCSpotlightBadgePluginProvider";
    uVar2 = 0x1e;
  }
  else {
    FUN_100baf488(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12
                  ,param_13,param_14,param_15);
    pcVar1 = "SCDiscoverFeedBadgePluginProvider";
    uVar2 = 0x21;
    param_16 = param_3;
  }
  FUN_100082720(pcVar1,uVar2,2);
  *param_1 = param_16;
  return;
}



/* Entry: 100baf440; end: 100baf487;  */

void FUN_100baf440(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100baf384(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 100baf488; end: 100baf9bf;  */

void FUN_100baf488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4cd40,&UNK_10da47090);
  puVar1 = &UNK_1104b6308;
  func_0x000107c613fc(&UNK_1104b6308,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_12;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  FUN_1000823a8(0x100baf5c8,puVar1);
  return;
}



/* Entry: 100baf9c0; end: 100baf9df;  */

void FUN_100baf9c0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100baf9e0; end: 100bafa33;  */

void FUN_100baf9e0(undefined8 *param_1)

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



/* Entry: 100bafa34; end: 100bafa3b;  */

void FUN_100bafa34(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10029a4d4();
  func_0x000107c613fc();
  func_0x000100bafa9c(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100bafa3c; end: 100bafb63;  */

void FUN_100bafa3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10029a4d4();
  func_0x000107c613fc();
  func_0x000100bafa9c(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100bafb64; end: 100bafc47; -[SCDiscoverFeedBadgeLifecycleServiceProvider provide] */

void FUN_100bafb64(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c1060;
  func_0x000107c610f4(PTR_PTR_1126c1060);
  func_0x000107c465b8();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bafc48; end: 100bafc9f; -[_TtC36SCDiscoverFeedBadgeLifecycleServices36SCDiscoverFeedBadgeLifecycleServices initWithDiscoverFeedBadgeLifecycleListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bafc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fe66e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bafca0; end: 100bafcb3;  */

void FUN_100bafca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0eed8,0,0);
  return;
}



/* Entry: 100bafcb4; end: 100bafcff;  */

bool FUN_100bafcb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c4980c(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ec58,0,0);
  func_0x000107c61170(param_1);
  return (int)uVar1 != 0;
}



/* Entry: 100bafd00; end: 100bafd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bafd00(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10037f980();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11306e108) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100bafd68; end: 100bafef7;  */

/* WARNING: Possible PIC construction at 0x000100bafe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bafe78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bafe88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bafe98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bafea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bafeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bafec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bafebc) */
/* WARNING: Removing unreachable block (ram,0x000100bafeac) */
/* WARNING: Removing unreachable block (ram,0x000100bafe9c) */
/* WARNING: Removing unreachable block (ram,0x000100bafe8c) */
/* WARNING: Removing unreachable block (ram,0x000100bafe7c) */
/* WARNING: Removing unreachable block (ram,0x000100bafe6c) */
/* WARNING: Removing unreachable block (ram,0x000100bafecc) */

void FUN_100bafd68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110510c68;
  func_0x000107c613fc(&UNK_110510c68,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  uVar2 = 0x112e9dee0;
  FUN_1000285a8(0x112e9dee0,&UNK_10daad918);
  func_0x000107c613fc();
  puVar3 = &UNK_10248ee8c;
  FUN_1000841f8(&UNK_10248ee8c,puVar1,uVar2);
  FUN_100084214(&UNK_10daad8e0,0x37,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100bafef8; end: 100bafefb;  */

void FUN_100bafef8(void)

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



/* Entry: 100bafefc; end: 100baff3f;  */

void FUN_100bafefc(void)

{
  long unaff_x20;
  
  FUN_100bafd68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 100baff40; end: 100baff43;  */

void FUN_100baff40(void)

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



/* Entry: 100baff44; end: 100baffd7;  */

void FUN_100baff44(void)

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



/* Entry: 100baffd8; end: 100bb04a3; -[SCDiscoverFeedBadgeProvider initWithUserPreferences:grapheneMetricsEmitter:applicationLifecycleEvents:badgeRefactorFix:discoverFeedFriendStoriesDataCoordinator:friendsFeedViewLifecycleListener:discoverFeedBadgeLifecycleListener:currentPageTracker:isDFBadgeOptimizationEnabled:storiesConfigProvider:performerProvider:isThumbnailBadgingEnabled:thumbnailRingScopeServices:thumbnailRingScopeExposer:badgeRanker:] */

undefined8 *
FUN_100baffd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  puStack_80 = PTR_PTR_1126ebcb0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 0xd) = param_15;
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar1[0x12] = 1;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)(puVar1 + 9) = param_11;
    func_0x000107c61174(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f4();
    func_0x000107c49470();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_19;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x000107c49cd8();
    func_0x000107c61170(uVar2);
    if ((int)uVar6 == 0) {
      uVar6 = puVar1[0x10];
      func_0x000107c61174(uVar6);
      uVar2 = puVar1[0x13];
      puVar1[0x13] = uVar6;
      func_0x000107c61170(uVar2);
    }
    else {
      func_0x000107c3c5d0(puVar1);
    }
    uVar2 = param_14;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = uVar6;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c3bff4(puVar1);
    if (*(char *)(puVar1 + 5) == '\x01') {
      func_0x000107c3c6a4(puVar1);
    }
    func_0x000107c61144(auStack_90,puVar1);
    uVar2 = param_10;
    func_0x000107c40fa4(param_10);
    func_0x000107c61180();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_100bb05f8;
    puStack_a0 = &UNK_110872360;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar6 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_105adfce4;
    puStack_c8 = &UNK_1108d4610;
    func_0x000107c61174(param_9);
    uStack_c0 = param_9;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xc];
    func_0x000107c6111c(auStack_e8,auStack_90);
    func_0x000107c4e524(uVar2);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bb04a4; end: 100bb04c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb04a4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112729e3c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb04c8; end: 100bb05e7; -[SCDiscoverFeedBadgeProvider _observeAppLifeCycleEvents:] */

void FUN_100bb04c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c5e370();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bb05e8; end: 100bb05ef; -[SCSnapchatterServices snapchattersFriendSyncRepository] */

undefined8 FUN_100bb05e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100bb05f0; end: 100bb05f7; -[SCUserInfoServices snapContactsPrivacyProvider] */

undefined8 FUN_100bb05f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100bb05f8; end: 100bb063f;  */

/* WARNING: Possible PIC construction at 0x000100bb062c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb0630) */

void FUN_100bb05f8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bb0640; end: 100bb070f; -[SCDiscoverFeedBadgeProvider _didChangeCurrentPageEvent:] */

void FUN_100bb0640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4c730(param_3);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bb0710; end: 100bb0b9f; -[SCChatEligibilityProvider initWithSnapProUserProfileIdProvider:snapchattersFriendSyncRepository:userSessionContext:profilesProvider:userSnapContactsPrivacyProvider:storiesConfigProvider:messagingExperimentService:] */

undefined8 *
FUN_100bb0710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_80 = PTR_PTR_1126ea578;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 9) = 0;
    func_0x000107c61144(auStack_90,puVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar11 = puVar2[5];
    puVar2[5] = puVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c61174(param_3);
    uVar11 = puVar2[1];
    puVar2[1] = param_3;
    func_0x000107c61170(uVar11);
    func_0x000107c61174(param_6);
    uVar11 = puVar2[2];
    puVar2[2] = param_6;
    func_0x000107c61170(uVar11);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1057dd584;
    puStack_a0 = &UNK_1108429c8;
    func_0x000107c61174(param_9);
    uStack_98 = param_9;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar11 = puVar2[3];
    puVar2[3] = puVar3;
    func_0x000107c61170(uVar11);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar11 = puVar2[6];
    puVar2[6] = puVar3;
    func_0x000107c61170(uVar11);
    puVar5 = PTR_PTR_1126be840;
    puVar1 = PTR_PTR_1126aeec0;
    puVar3 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126be848;
    func_0x000107c4ad94(PTR_PTR_1126be848);
    func_0x000107c61180();
    func_0x000107c5bf20(puVar5);
    func_0x000107c61180();
    func_0x000107c40418(puVar3);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae970;
    func_0x000107c5d9b8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_1057dd5e0;
    puStack_c8 = &UNK_110849200;
    func_0x000107c6111c(auStack_c0,auStack_90);
    func_0x000107c3e2d8(puVar1);
    func_0x000107c611b0();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    uVar7 = param_5;
    func_0x000107c49e14();
    if (((uVar7 & 1) == 0) && (uVar7 = param_5, func_0x000107c49e24(), (int)uVar7 == 0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    *(undefined1 *)((long)puVar2 + 0x4d) = uVar10;
    uVar11 = param_4;
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    uVar8 = uVar11;
    func_0x000107c5b474();
    func_0x000107c61180();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_100c558a0;
    puStack_f0 = &UNK_110842a38;
    func_0x000107c6111c(auStack_e8,auStack_90);
    uVar9 = uVar8;
    func_0x000107c5c320(uVar8);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar11);
    uVar11 = param_7;
    func_0x000107c5c734(param_7);
    func_0x000107c61180();
    uVar8 = uVar11;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_110,auStack_90);
    uVar9 = uVar8;
    func_0x000107c5c320(uVar8);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar11);
    func_0x000107c61120(auStack_110);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61170(uStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100bb0ba0; end: 100bb0c4f;  */

void FUN_100bb0ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100bb0c50;
  puStack_48 = &UNK_110846540;
  func_0x000107c6111c(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  FUN_1000d76cc("APPSTORE",&puStack_60);
  func_0x000107c61120(auStack_40);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100bb0c50; end: 100bb0cab;  */

/* WARNING: Possible PIC construction at 0x000100bb0c98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb0c9c) */

void FUN_100bb0c50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148(lVar1);
  puVar2 = PTR_PTR_1126afdd8;
  func_0x000107c441b4(PTR_PTR_1126afdd8,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  func_0x000107c3c54c(lVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100bb0cac; end: 100bb0cdb; -[SCDiscoverFeedBadgeProvider _setCurrentPage:] */

void FUN_100bb0cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bb0cdc; end: 100bb0d5b; -[SCDiscoverFeedBadgeProvider beginSubscribeBadgeUpdate] */

/* WARNING: Possible PIC construction at 0x000100bb0d44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb0d48) */

void FUN_100bb0cdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  puVar1 = PTR_s__discoverBadgeCountChanged__11252c548;
  puVar3 = PTR_PTR_1126c2238;
  func_0x000107c3e638(PTR_PTR_1126c2238);
  func_0x000107c61180();
  func_0x000107c3d7bc(puVar2,param_2,param_1,puVar1,puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100bb0d5c; end: 100bb0e0b; +[SCDiscoverFeedBadgeConsts badgeNotification] */

void FUN_100bb0d5c(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1ce8c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb0e0c; end: 100bb0e13;  */

void FUN_100bb0e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 100bb0e14; end: 100bb0e7b; -[SCSnapchattersDataCoordinator snapchatterFriendSyncStatusObservable] */

void FUN_100bb0e14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bb0e7c; end: 100bb0e83; -[SCDiscoverFeedBadgeProvider navigationItemType] */

undefined8 FUN_100bb0e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 100bb0e84; end: 100bb1067; -[SCUserInfoServicesEntryPoint _snapContactsPrivacyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb0e84(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6f8;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf710;
  ppuStack_80 = ppuVar1;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf728;
  ppuStack_78 = ppuVar2;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_70 = ppuVar3;
  func_0x000107c3e17c();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae750;
  func_0x000107c4d73c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112722ee8);
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c407cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(ppuVar1);
  puVar7 = PTR_PTR_1126b88e0;
  func_0x000107c610f4();
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148();
  lVar8 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar9 = puVar7;
  lVar12 = lVar8;
  func_0x000107c46bcc();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_1);
  lVar10 = lVar13;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  func_0x000107c60e78();
  pcStack_88 = FUN_100bb1068;
  uStack_d0 = uVar6;
  puStack_c8 = puVar5;
  puStack_c0 = puVar4;
  lStack_b8 = lVar8;
  lStack_b0 = lVar13;
  lStack_a8 = param_1;
  puStack_a0 = puVar7;
  puStack_98 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000107c61174(lVar12);
  if (*(char *)(lVar10 + 0x68) == '\x01') {
    func_0x000107c61144(auStack_d8,lVar10);
    func_0x000107c61144(auStack_e0,lVar12);
    puVar7 = PTR_PTR_1126be840;
    puVar5 = PTR_PTR_1126aeec0;
    puVar4 = PTR_PTR_1126ae960;
    puVar9 = PTR_PTR_1126be848;
    func_0x000107c5bf30(PTR_PTR_1126be848);
    func_0x000107c61180();
    func_0x000107c5bf20(puVar7);
    func_0x000107c61180();
    func_0x000107c40418(puVar4);
    func_0x000107c61180();
    puVar11 = PTR_PTR_1126ae970;
    func_0x000107c5d9b8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_f0,auStack_d8);
    func_0x000107c6111c(auStack_e8,auStack_e0);
    func_0x000107c3e2d8(puVar5);
    func_0x000107c611b0();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_e0);
    func_0x000107c61120(auStack_d8);
  }
  func_0x000107c61170(lVar12);
  return;
}



/* Entry: 100bb1068; end: 100bb122f; -[SCDiscoverFeedBadgeProvider didReceiveNavigationItem:] */

void FUN_100bb1068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x000107c61144(auStack_58,param_1);
    func_0x000107c61144(auStack_60,param_3);
    puVar3 = PTR_PTR_1126be840;
    puVar1 = PTR_PTR_1126aeec0;
    puVar4 = PTR_PTR_1126ae960;
    puVar2 = PTR_PTR_1126be848;
    func_0x000107c5bf30(PTR_PTR_1126be848);
    func_0x000107c61180();
    func_0x000107c5bf20(puVar3);
    func_0x000107c61180();
    func_0x000107c40418(puVar4);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c5d9b8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_58);
    func_0x000107c6111c(auStack_68,auStack_60);
    func_0x000107c3e2d8(puVar1);
    func_0x000107c611b0();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61120(auStack_68);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_60);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bb1230; end: 100bb123f; +[SCAttributedStoriesSubtask storiesBadging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb1230(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b100) = 7;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bb1240; end: 100bb1367;  */

ulong FUN_100bb1240(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb1368);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100bb137c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb1364);
      (*pcVar1)();
    }
    FUN_100bb13fc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100bb1368; end: 100bb137b;  */

void FUN_100bb1368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f31260 == (undefined *)0x0 || ((ulong)puRam0000000112f31260 & 1) != 0) {
    puVar1 = &UNK_10e96a9ae;
    func_0x000107c61518(&UNK_10e96a9ae,0x2a,0,0);
    puRam0000000112f31260 = puVar1;
  }
  return;
}



/* Entry: 100bb137c; end: 100bb13fb;  */

undefined * FUN_100bb137c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100bb1368();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100bb13fc; end: 100bb151f;  */

long FUN_100bb13fc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb151c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb1520);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f31258;
        FUN_1000285a8(0x112f31258,&UNK_10db770c8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f31258;
      FUN_1000285a8(0x112f31258,&UNK_10db770c8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100bb1518);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100bb1520; end: 100bb1907;  */

void FUN_100bb1520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4cd40,&UNK_10da47090);
  puVar1 = &UNK_1104b7a28;
  func_0x000107c613fc(&UNK_1104b7a28,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(0x100bb1624,puVar1);
  return;
}



/* Entry: 100bb1908; end: 100bb190f;  */

void FUN_100bb1908(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x130);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb1910; end: 100bb1963;  */

void FUN_100bb1910(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x130);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb1964; end: 100bb2f2b;  */

void FUN_100bb1964(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_1003679b4();
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
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  *(undefined8 *)(param_2 + 0xd0) = uStack_130;
  *(undefined8 *)(param_2 + 0xd8) = uStack_138;
  *(undefined8 *)(param_2 + 0xe0) = uStack_140;
  *(undefined8 *)(param_2 + 0xe8) = uStack_148;
  *(undefined8 *)(param_2 + 0xf0) = uStack_150;
  *(undefined8 *)(param_2 + 0xf8) = uStack_158;
  *(undefined8 *)(param_2 + 0x100) = uStack_160;
  *(undefined8 *)(param_2 + 0x108) = uStack_168;
  *(undefined8 *)(param_2 + 0x110) = uStack_170;
  *(undefined8 *)(param_2 + 0x118) = uStack_178;
  *(undefined8 *)(param_2 + 0x120) = uStack_180;
  *(undefined8 *)(param_2 + 0x128) = uStack_188;
  puVar13 = PTR_PTR_1126aca68;
  func_0x000107c610f8();
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar17 = uStack_80;
  func_0x000107c61174();
  uVar18 = uStack_88;
  func_0x000107c61174();
  uVar19 = uStack_90;
  func_0x000107c61174();
  uVar20 = uStack_98;
  func_0x000107c61174();
  uVar1 = uStack_a0;
  func_0x000107c61174();
  uVar2 = uStack_a8;
  func_0x000107c61174();
  uVar3 = uStack_b0;
  func_0x000107c61174();
  uVar4 = uStack_b8;
  func_0x000107c61174();
  uVar5 = uStack_c0;
  func_0x000107c61174();
  uVar6 = uStack_c8;
  func_0x000107c61174();
  uVar7 = uStack_d0;
  func_0x000107c61174();
  uVar8 = uStack_d8;
  func_0x000107c61174();
  uVar9 = uStack_e0;
  func_0x000107c61174();
  uVar10 = uStack_e8;
  func_0x000107c61174();
  uVar11 = uStack_f0;
  func_0x000107c61174();
  uVar12 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000010;
  uVar15 = uVar40;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f11a000);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar40);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0520c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar39);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar39);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f11a020);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar39);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar39);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar39);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0a41b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a3f20);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0x7672655373757472;
  func_0x000107c5fadc(0x7672655373757472,0xec00000073656369);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar39);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052240);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar39 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar39);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f01ad00);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar39);
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0a40d0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0a3ef0);
  func_0x000107c5a49c(uVar39);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar15);
  uVar39 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar15 = uVar39;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  *(undefined8 *)(param_2 + 0x130) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 100bb2f2c; end: 100bb2f97;  */

void FUN_100bb2f2c(void)

{
  long unaff_x20;
  
  FUN_100bb1964(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128));
  return;
}



/* Entry: 100bb2f98; end: 100bb2f9f;  */

void FUN_100bb2f98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x170);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb2fa0; end: 100bb2ff3;  */

void FUN_100bb2fa0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x170);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb2ff4; end: 100bb4a9b;  */

void FUN_100bb2ff4(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar16;
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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  FUN_100083b20(&uStack_1b0);
  FUN_100083b20(&uStack_1b8);
  FUN_100083b20(&uStack_1c0);
  FUN_100083b20(&uStack_1c8);
  FUN_100366ee0();
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
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  *(undefined8 *)(param_2 + 0xd0) = uStack_130;
  *(undefined8 *)(param_2 + 0xd8) = uStack_138;
  *(undefined8 *)(param_2 + 0xe0) = uStack_140;
  *(undefined8 *)(param_2 + 0xe8) = uStack_148;
  *(undefined8 *)(param_2 + 0xf0) = uStack_150;
  *(undefined8 *)(param_2 + 0xf8) = uStack_158;
  *(undefined8 *)(param_2 + 0x100) = uStack_160;
  *(undefined8 *)(param_2 + 0x108) = uStack_168;
  *(undefined8 *)(param_2 + 0x110) = uStack_170;
  *(undefined8 *)(param_2 + 0x118) = uStack_178;
  *(undefined8 *)(param_2 + 0x120) = uStack_180;
  *(undefined8 *)(param_2 + 0x128) = uStack_188;
  *(undefined8 *)(param_2 + 0x130) = uStack_190;
  *(undefined8 *)(param_2 + 0x138) = uStack_198;
  *(undefined8 *)(param_2 + 0x140) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x148) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x150) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x158) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x160) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x168) = uStack_1c8;
  puVar16 = PTR_PTR_1126aca20;
  func_0x000107c610f8();
  uVar19 = uStack_78;
  func_0x000107c61174();
  uVar20 = uStack_80;
  func_0x000107c61174();
  uVar21 = uStack_88;
  func_0x000107c61174();
  uVar22 = uStack_90;
  func_0x000107c61174();
  uVar23 = uStack_98;
  func_0x000107c61174();
  uVar24 = uStack_a0;
  func_0x000107c61174();
  uVar1 = uStack_a8;
  func_0x000107c61174();
  uVar2 = uStack_b0;
  func_0x000107c61174();
  uVar3 = uStack_b8;
  func_0x000107c61174();
  uVar4 = uStack_c0;
  func_0x000107c61174();
  uVar5 = uStack_c8;
  func_0x000107c61174();
  uVar6 = uStack_d0;
  func_0x000107c61174();
  uVar7 = uStack_d8;
  func_0x000107c61174();
  uVar8 = uStack_e0;
  func_0x000107c61174();
  uVar9 = uStack_e8;
  func_0x000107c61174();
  uVar10 = uStack_f0;
  func_0x000107c61174();
  uVar11 = uStack_f8;
  func_0x000107c61174();
  uVar12 = uStack_100;
  func_0x000107c61174();
  uVar13 = uStack_108;
  func_0x000107c61174();
  uVar14 = uStack_110;
  func_0x000107c61174();
  uVar15 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  uVar39 = uStack_190;
  func_0x000107c61174();
  uVar40 = uStack_198;
  func_0x000107c61174();
  uVar41 = uStack_1a0;
  func_0x000107c61174();
  uVar42 = uStack_1a8;
  func_0x000107c61174();
  uVar43 = uStack_1b0;
  func_0x000107c61174();
  uVar44 = uStack_1b8;
  func_0x000107c61174();
  uVar45 = uStack_1c0;
  func_0x000107c61174();
  uVar46 = uStack_1c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar16;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000010;
  uVar18 = uVar48;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000012;
  uVar18 = uVar49;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f11a000);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar48);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a3fb0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar47);
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0520c0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar47);
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = uVar49;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f11a020);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f11a040);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar47 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = uVar49;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar49);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3fd0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00a720);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f11a060);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0x7265536775626564;
  func_0x000107c5fadc(0x7265536775626564,0xed00007365636976);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f09edb0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar47 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar47 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0x7672655373757472;
  func_0x000107c5fadc(0x7672655373757472,0xec00000073656369);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar47);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052240);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar18);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f11a080);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar47);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar47 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  uVar47 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar18 = uVar47;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  *(undefined8 *)(param_2 + 0x170) = uVar18;
  *param_1 = param_2;
  return;
}



/* Entry: 100bb4a9c; end: 100bb4b1f;  */

void FUN_100bb4a9c(void)

{
  long unaff_x20;
  
  FUN_100bb2ff4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168));
  return;
}



/* Entry: 100bb4b20; end: 100bb4b27;  */

void FUN_100bb4b20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb4b28; end: 100bb4b7b;  */

void FUN_100bb4b28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb4b7c; end: 100bb4bbf;  */

void FUN_100bb4b7c(void)

{
  long unaff_x20;
  
  FUN_100bb4bc0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100bb4bc0; end: 100bb55ff;  */

void FUN_100bb4bc0(long *param_1,long param_2)

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
  FUN_100366adc();
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
  puVar1 = PTR_PTR_1126aca18;
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
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  uVar17 = uStack_f0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar18 = auStack_70[0];
  func_0x000107c61174();
  uVar19 = 0x65706f635376616e;
  func_0x000107c5fadc(0x65706f635376616e,0xe800000000000000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  uVar20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar19 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  uVar21 = 0xd000000000000010;
  uVar19 = uVar21;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar19);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f119fe0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar19);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar19 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  uVar19 = uVar21;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
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
  *(undefined8 *)(param_2 + 0x98) = uVar19;
  *param_1 = param_2;
  return;
}



/* Entry: 100bb5600; end: 100bb5607;  */

void FUN_100bb5600(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb5608; end: 100bb565b;  */

void FUN_100bb5608(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb565c; end: 100bb5d9f;  */

void FUN_100bb565c(long *param_1,long param_2)

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
  FUN_1003320dc();
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
  puVar1 = PTR_PTR_1126aca60;
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
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f11a0c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
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
  *(undefined8 *)(param_2 + 0x70) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 100bb5da0; end: 100bb5ddb;  */

void FUN_100bb5da0(void)

{
  long unaff_x20;
  
  FUN_100bb565c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 100bb5ddc; end: 100bb5de3;  */

void FUN_100bb5ddc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb5de4; end: 100bb5e37;  */

void FUN_100bb5de4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb5e38; end: 100bb5e43;  */

void FUN_100bb5e38(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b26ec();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100bb5fd8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb5e44; end: 100bb5ef3;  */

void FUN_100bb5e44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b26ec();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100bb5fd8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bb5ef4; end: 100bb5efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb5ef4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b0698();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff0770) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100bb5efc; end: 100bb5f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bb5efc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002b0698();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff0770) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100bb5f68; end: 100bb5fd3;  */

void FUN_100bb5f68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112df8800,&UNK_10d9c8d38);
  func_0x000107c613fc();
  uVar1 = 0x100bb6870;
  FUN_1000841f8(0x100bb6870,0);
  FUN_100084214("SCDefaultSnapDocPageResolverPluginRegistryServiceProvider",0x39,2);
  *param_1 = uVar1;
  return;
}


