/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059bdeac; end: 1059bdf5b; -[SCSelectionRecipientServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059bdeac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272cec8);
  _objc_destroyWeak(param_1 + _DAT_11272cedc);
  _objc_destroyWeak(param_1 + _DAT_11272ced8);
  _objc_destroyWeak(param_1 + _DAT_11272cec4);
  _objc_destroyWeak(param_1 + _DAT_11272ced4);
  _objc_destroyWeak(param_1 + _DAT_11272ced0);
  _objc_destroyWeak(param_1 + _DAT_11272cec0);
  _objc_destroyWeak(param_1 + _DAT_11272ceb8);
  _objc_destroyWeak(param_1 + _DAT_11272cebc);
  _objc_destroyWeak(param_1 + _DAT_11272ceb4);
  _objc_destroyWeak(param_1 + _DAT_11272ceb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272cecc);
  return;
}



/* Entry: 1059bdf5c; end: 1059be5e7; -[SCSelectionRecipientObservableRepositoryImpl initWithSnapchatterObservableRepository:selectionGroupObservableRepository:contactNonSnapchattersObservableRepository:lastInteractionDataService:currentUserId:storiesDataCoordinator:mapPersonLocationsProvider:circumstanceEngine:customStoriesDataFetcher:recentsRankingServiceFactory:recentsConfiguration:performer:suppressInactiveViewerRecentSorter:recentPredicate:recentPredicateIncludingSelfAndTeamSnapchat:recentSorter:recentCutter:recipientMerger:recipientStoriesAppender:recipientLocationAppender:recipientFilter:searchSorter:suppressFollowingAccountsPredicate:contactRecipientAppender:sendToExperimentConfiguration:boostExpiringStreaksSorter:rankByLastSnapSendTimestampEnabled:applyRankingBySendToSurfaceEnabled:rankByLastContentShareTimestampEnabled:] */

undefined8 *
FUN_1059bdf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined4 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  puStack_70 = PTR_PTR_1126eb308;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    uVar2 = param_15;
    _objc_retainBlock();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    uVar2 = param_16;
    _objc_retainBlock();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_17;
    _objc_retainBlock();
    uVar4 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_18;
    _objc_retainBlock();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_19;
    _objc_retainBlock();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_20;
    _objc_retainBlock();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_21;
    _objc_retainBlock();
    uVar4 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_22;
    _objc_retainBlock();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_23;
    _objc_retainBlock();
    uVar4 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_24;
    _objc_retainBlock();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_25;
    _objc_retainBlock();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_26;
    _objc_retainBlock();
    uVar4 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_28;
    _objc_retainBlock();
    uVar4 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[8];
    puVar1[8] = param_27;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1c) = (undefined1)param_29;
    *(undefined1 *)((long)puVar1 + 0xe1) = param_29._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe2) = param_29._2_1_;
    _objc_retain(param_14);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_14;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0a80;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    func_0x00010c184700(puVar1[0x1e]);
    func_0x00010c1cafa0(puVar1[0x1e]);
    uVar4 = puVar1[8];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c11fa20();
    puVar1[0x1f] = uVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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



/* Entry: 1059be5e8; end: 1059be627;  */

void FUN_1059be5e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be471a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059be628; end: 1059be8fb; -[SCSelectionRecipientObservableRepositoryImpl recentSelectionRecipientsObservableWithQueue:selectionRecipientSource:includeContactNonSnapchatters:includeSelectableContacts:includeSelfAndTeamSnapchat:includeStoriesWithSnapchatter:includeLocationWithSnapchatter:includeNonBidirectionalFriends:sendToLogger:contextualSignals:] */

void FUN_1059be628(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  _objc_retain();
  _objc_retain(in_stack_00000010);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  if (param_4 < 3) {
    ppuVar8 = (undefined **)(&PTR_PTR_1108cb6e8)[param_4];
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daf6b8;
  }
  _objc_retain(param_3);
  FUN_1059c1750(uVar7,ppuVar8,1);
  lVar3 = 0x70;
  if (param_7 == 0) {
    lVar3 = 0x68;
  }
  uVar7 = *(undefined8 *)(param_1 + lVar3);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_retainBlock();
  lVar3 = param_1;
  func_0x00010bf008a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010bf58220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_retain(uVar1);
    _objc_retain(uVar7);
    lVar5 = lVar3;
    func_0x00010c0b8600(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c08f420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be85de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be9e3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(uVar2);
  lVar5 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1059be8fc; end: 1059be99b;  */

void FUN_1059be8fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059be99c;
  puStack_48 = &UNK_1108cb178;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x0001006372a4(param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059be99c; end: 1059be9ff;  */

long FUN_1059be99c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 1059bea00; end: 1059beacb;  */

void FUN_1059bea00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0a88;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c11fc40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010c122f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cd00(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059beacc; end: 1059bed8b; -[SCSelectionRecipientObservableRepositoryImpl _selectionRecipientsRankingWithObservable:recentsRankingService:selectionRecipientSource:contextualSignals:sendToLogger:] */

void FUN_1059beacc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [8];
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bf65f60(0x3f747ae147ae147b);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar8);
  if (param_5 < 3) {
    ppuVar7 = (undefined **)(&PTR_PTR_1108cb6e8)[param_5];
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110daf6b8;
  }
  lVar1 = param_1;
  func_0x00010be1d860();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1059bed8c;
  puStack_b0 = &UNK_1108cb268;
  uStack_a8 = uVar8;
  ppuStack_a0 = ppuVar7;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_7);
  uStack_90 = param_7;
  lStack_88 = param_1;
  _objc_retain(param_6);
  ppuVar7 = &puStack_c8;
  uStack_80 = param_6;
  _objc_retainBlock(ppuVar7);
  uVar2 = param_3;
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_d0,param_1);
  _objc_copyWeak(auStack_e0,auStack_d0);
  uVar3 = uVar2;
  uStack_d8 = param_5;
  func_0x00010bfb2660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar1;
      func_0x00010c11fc40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7520(param_7);
      _objc_release(lVar4);
      func_0x00010c2519e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1059becd4;
    }
  }
  _objc_retain(uVar3);
LAB_1059becd4:
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uVar2);
  _objc_release(ppuVar7);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(lVar1);
  _objc_release(uVar8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1059bed8c; end: 1059bee8b;  */

void FUN_1059bed8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  FUN_1059c18c4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1);
  puVar1 = PTR_PTR_1126ae6b8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(*(undefined8 *)(param_1 + 0x48));
  _objc_retain(param_2);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059bee8c; end: 1059befe7;  */

void FUN_1059bee8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(*(undefined8 *)(param_1 + 0x40));
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010c11f600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059befe8; end: 1059bf0f3;  */

void FUN_1059befe8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b60f8;
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c11fc40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7520(uVar4);
    _objc_release(lVar1);
    func_0x00010bea27a0(*(undefined8 *)(param_1 + 0x28));
    puVar3 = PTR_PTR_1126b60f8;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0f2b40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059bf0f4; end: 1059bf123;  */

void FUN_1059bf0f4(long param_1)

{
  FUN_1059c1a38(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1059bf124; end: 1059bf367;  */

void FUN_1059bf124(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1059bf368;
  uStack_60 = 0x1059bf378;
  uStack_58 = 0;
  uVar1 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0800();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae6b8;
  if (puStack_78[5] == 0) {
    uVar1 = param_2;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c0a88;
    _objc_alloc(PTR_PTR_1126c0a88);
    uVar1 = param_2;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd00(puVar3);
    _objc_release(uVar1);
    puVar4 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained();
    if (puVar4 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = puVar4;
      func_0x00010c08f420(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010be85de0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1059bf368; end: 1059bf37f;  */

void FUN_1059bf368(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059bf380; end: 1059bf3b7;  */

void FUN_1059bf380(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059bf3b8; end: 1059bf3bb;  */

void FUN_1059bf3b8(void)

{
  return;
}



/* Entry: 1059bf3bc; end: 1059bf3cb; -[SCSelectionRecipientObservableRepositoryImpl _rankingResultObservableFromRecipientsObservable:] */

void FUN_1059bf3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_1108cb338);
  return;
}



/* Entry: 1059bf3cc; end: 1059bf41b;  */

void FUN_1059bf3cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c0a88;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c03cd00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059bf41c; end: 1059bf60b; -[SCSelectionRecipientObservableRepositoryImpl legacyRecentSelectionRecipientsRankingWithObservable:selectionRecipientSource:] */

void FUN_1059bf41c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(param_1 + 200);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar9);
  _objc_retainBlock();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined1 *)(param_1 + 0xe0);
  uVar2 = *(undefined2 *)(param_1 + 0xe1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1059bf60c;
  puStack_88 = &UNK_1108cb068;
  uStack_80 = uVar8;
  _objc_retain(uVar8);
  uVar4 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar9;
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar3;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1059bf618;
  puStack_c0 = &UNK_1108cb358;
  uVar6 = uVar4;
  uStack_b8 = uVar10;
  uStack_b0 = param_4;
  uStack_a8 = uVar1;
  uStack_a7 = uVar2;
  func_0x00010bf41860(uVar4,param_2,uVar5,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retainBlock();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1059bf634;
  puStack_e8 = &UNK_1108cb068;
  uVar4 = uVar6;
  uStack_e0 = uVar7;
  func_0x00010c0b8600(uVar6,param_2,&puStack_100);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uStack_80);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059bf60c; end: 1059bf63f;  */

void FUN_1059bf60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059bf614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1059bf640; end: 1059bf803; -[SCSelectionRecipientObservableRepositoryImpl suggestedRecipientsObservableWithQueue:selectedRecipientIds:] */

void FUN_1059bf640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000106c891a8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retainBlock();
  _objc_initWeak(auStack_58,param_1);
  lVar3 = param_1;
  func_0x00010bf008a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15360(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  lVar4 = lVar3;
  func_0x00010bf41860(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1059bf804; end: 1059bf93f;  */

void FUN_1059bf804(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  func_0x0001006372a4(param_2,*(undefined8 *)(param_1 + 0x28));
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _objc_retain(param_2);
    lVar7 = param_2;
  }
  else {
    puVar2 = param_3;
    func_0x000106c8966c(param_3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (**(code **)(puVar2 + 0x10))(puVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    puVar6 = puVar4;
    if (puVar5 < (undefined *)0xa) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_release(puVar4);
    }
    lVar7 = lVar1;
    func_0x00010be5fac0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1059bf940; end: 1059bfa73; -[SCSelectionRecipientObservableRepositoryImpl selectionRecipientObservableForRecipientIds:queue:includeContactNonSnapchatters:includeSelectableContacts:maintainOrder:] */

void FUN_1059bf940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_4);
  _objc_retainBlock();
  func_0x00010bf008a0(param_1,param_2,param_4,param_5,param_6,1,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1059bfa74;
  puStack_70 = &UNK_1108cb3e8;
  uStack_68 = param_3;
  uStack_60 = uVar2;
  uStack_58 = param_7;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  lVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_68);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059bfa74; end: 1059bfb47;  */

void FUN_1059bfa74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    _objc_retain(lVar1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    _objc_alloc();
    func_0x00010bff4000();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1059bfb48;
    puStack_40 = &UNK_1108cb3b8;
    puStack_38 = puVar2;
    func_0x00010c246ca0(lVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1059bfb48; end: 1059bfc43;  */

undefined * FUN_1059bfb48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x000106c870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0(uVar5);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = param_3;
  func_0x000106c870c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfecde0(uVar4);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1059bfc44; end: 1059bfd77; -[SCSelectionRecipientObservableRepositoryImpl searchSelectionRecipientsObservableForQuery:queue:includeContactNonSnapchatters:includeSelectableContacts:includeSelfAndTeamSnapchat:includeNonBidirectionalFriends:] */

void FUN_1059bfc44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_4);
  _objc_retainBlock();
  func_0x00010bf008a0(param_1,param_2,param_4,param_5,param_6,param_7,0,0,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059bfd78;
  puStack_68 = &UNK_1108cb418;
  uStack_60 = param_3;
  uStack_58 = uVar2;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  lVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059bfd78; end: 1059bfd87;  */

void FUN_1059bfd78(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001059bfd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1059bfd88; end: 1059bfecb; -[SCSelectionRecipientObservableRepositoryImpl allRankingSubjectsObservableWithQueue:additionalFeatureKeys:includeContactNonSnapchatters:includeSelectableContacts:contextualSignals:] */

void FUN_1059bfd88(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf58220(lVar1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf008a0(param_1,param_2,param_3,param_5,param_6,1,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1059bfecc;
    puStack_58 = &UNK_1108cb448;
    lStack_50 = lVar1;
    _objc_retain(param_4);
    puVar2 = param_1;
    uStack_48 = param_4;
    func_0x00010c2656e0(param_1,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_48);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059bfecc; end: 1059c0043;  */

void FUN_1059bfecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059c0044; end: 1059c004f;  */

void FUN_1059c0044(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 1059c0050; end: 1059c049b; -[SCSelectionRecipientObservableRepositoryImpl allSelectionRecipientsObservableWithQueue:includeContactNonSnapchatters:includeSelectableContacts:includeSelfAndTeamSnapchat:includeStoriesWithSnapchatter:includeLocationWithSnapchatter:includeNonBidirectionalFriends:countObservableEmissions:] */

void FUN_1059c0050(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined1 param_5
                  ,undefined1 param_6,int param_7,int param_8,undefined1 param_9)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uVar14 = *(undefined8 *)(param_1 + 0xe8);
  _objc_retain(uVar14);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0ee960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c1225a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1059c049c;
  puStack_98 = &UNK_1108cb478;
  uStack_90 = uVar14;
  _objc_retain(uVar1);
  uStack_7e = param_9;
  uVar9 = uVar6;
  uStack_88 = uVar1;
  uStack_7f = param_6;
  func_0x00010bf41860(uVar6,param_2,uVar8,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (param_4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    _objc_retainBlock();
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar12);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf49e40();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1059c0590;
    puStack_d8 = &UNK_1108cb4a8;
    uStack_d0 = uVar12;
    uStack_c8 = uVar14;
    uStack_c0 = uVar5;
    uStack_b8 = param_5;
    _objc_retain(uVar5);
    uVar8 = uVar9;
    func_0x00010bf41860(uVar9,param_2,uVar6,&puStack_f0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uStack_c0);
    _objc_release(uVar12);
    _objc_release(uVar5);
    uVar9 = uVar8;
  }
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_7 != 0) {
    lVar10 = param_1;
    func_0x00010bee6d20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x1059c06ac;
    puStack_110 = &UNK_1108cb4d8;
    uStack_108 = uVar14;
    _objc_retain(uVar2);
    uVar6 = uVar9;
    uStack_100 = uVar2;
    func_0x00010bf41860(uVar9,param_2,lVar11,&puStack_128);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uStack_100);
    _objc_release(lVar11);
    uVar9 = uVar6;
  }
  if (param_8 != 0) {
    func_0x00010be4f620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = 0xc2000000;
    uStack_158 = 0x1059c0798;
    puStack_150 = &UNK_1108cb508;
    puStack_168 = puVar13;
    uStack_148 = uVar14;
    _objc_retain(uVar3);
    uStack_138 = uVar3;
    _objc_retain(uVar4);
    uVar6 = uVar9;
    uStack_140 = uVar4;
    func_0x00010bf41860(uVar9,param_2,param_1,&puStack_168);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128900(0);
    _objc_release(uVar6);
    _objc_release(uStack_140);
    _objc_release(uStack_138);
    _objc_release(param_1);
    uVar9 = uVar8;
  }
  _objc_release(uStack_88);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 1059c049c; end: 1059c089b;  */

void FUN_1059c049c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1059c1bac(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e13598,1
                 );
  }
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))
            (lVar2,param_2,param_3,*(undefined1 *)(param_1 + 0x31),*(undefined1 *)(param_1 + 0x32));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1059c089c; end: 1059c08db; -[SCSelectionRecipientObservableRepositoryImpl rankedRecipientsObservableForContextualSignals:] */

void FUN_1059c089c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1225c0(param_1,param_2,0,2,1,1,1,0,0x100);
  return;
}



/* Entry: 1059c08dc; end: 1059c0923; -[SCSelectionRecipientObservableRepositoryImpl _lastTurnInteractionStateObservable] */

void FUN_1059c08dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08a5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059c0924; end: 1059c09cb; -[SCSelectionRecipientObservableRepositoryImpl _userIdToStoriesSummaryInfoObservableWithQueue:] */

void FUN_1059c0924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c25b4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059c09cc; end: 1059c0a1b;  */

void FUN_1059c09cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010050471c();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c0a1c; end: 1059c0a23;  */

void FUN_1059c0a1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 1059c0a24; end: 1059c0a4b;  */

void FUN_1059c0a24(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059c0a4c; end: 1059c0aff; -[SCSelectionRecipientObservableRepositoryImpl _locationIsAvailableObservableStartingWithDummyValue] */

void FUN_1059c0a4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1059c0b00; end: 1059c0b0b;  */

undefined * FUN_1059c0b00(void)

{
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1059c0b0c; end: 1059c0c23; -[SCSelectionRecipientObservableRepositoryImpl _fetchUserIdsInTheirPrivateStoryContextWithQueue:] */

void FUN_1059c0b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_initWeak(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059c0c24; end: 1059c0d47;  */

void FUN_1059c0c24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    func_0x00010bf625a0(uVar3);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059c0d48; end: 1059c0e6b;  */

void FUN_1059c0d48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bf97ce0(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1059c0e6c; end: 1059c11f7; -[SCSelectionRecipientObservableRepositoryImpl _mergeSortWithRecentlyAddedRecipients:inTheirPrivateRecipients:] */

void FUN_1059c0e6c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar9 = param_3;
  func_0x00010bf529e0();
  if (uVar9 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar3 = param_4;
      func_0x00010bf529e0();
      if (uVar3 <= uVar9) break;
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010be9e3a0(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = puVar2;
      func_0x00010bf4b900(puVar2,param_2,uVar4);
      if ((((ulong)puVar5 & 1) == 0) && (uVar8 < 5)) {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        func_0x00010befa120(puVar2,param_2,uVar4);
        uVar8 = uVar8 + 1;
      }
      uVar3 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010be9e3a0(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar5 = puVar2;
      func_0x00010bf4b900(puVar2,param_2,uVar6);
      if ((((ulong)puVar5 & 1) == 0) && (uVar10 < 5)) {
        uVar3 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        func_0x00010befa120(puVar2,param_2,uVar6);
        uVar10 = uVar10 + 1;
      }
      uVar9 = uVar9 + 1;
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar9 < uVar3);
  }
  uVar7 = param_3;
  func_0x00010bf529e0();
  uVar3 = uVar9;
  if (uVar9 < uVar7) {
    do {
      if (4 < uVar8) break;
      uVar7 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010be9e3a0(param_1,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar5 = puVar2;
      func_0x00010bf4b900(puVar2,param_2,uVar4);
      if (((ulong)puVar5 & 1) == 0) {
        uVar7 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar7);
        _objc_release(uVar7);
        func_0x00010befa120(puVar2,param_2,uVar4);
        uVar8 = uVar8 + 1;
      }
      uVar3 = uVar3 + 1;
      _objc_release(uVar4);
      uVar7 = param_3;
      func_0x00010bf529e0();
    } while (uVar3 < uVar7);
  }
  uVar8 = param_4;
  func_0x00010bf529e0();
  if (uVar9 < uVar8) {
    do {
      if (4 < uVar10) break;
      uVar8 = param_4;
      func_0x00010c0dfd40(param_4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010be9e3a0(param_1,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar5 = puVar2;
      func_0x00010bf4b900(puVar2,param_2,uVar4);
      if (((ulong)puVar5 & 1) == 0) {
        uVar8 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar8);
        _objc_release(uVar8);
        func_0x00010befa120(puVar2,param_2,uVar4);
        uVar10 = uVar10 + 1;
      }
      uVar9 = uVar9 + 1;
      _objc_release(uVar4);
      uVar8 = param_4;
      func_0x00010bf529e0();
    } while (uVar9 < uVar8);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c11f8; end: 1059c12e3; -[SCSelectionRecipientObservableRepositoryImpl _selectionRecipientUserId:] */

void FUN_1059c11f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1059bf368;
  uStack_30 = 0x1059bf378;
  uStack_28 = 0;
  func_0x00010c0c0060(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c12e4; end: 1059c1323;  */

void FUN_1059c12e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059c1324; end: 1059c132b;  */

void FUN_1059c1324(void)

{
  return;
}



/* Entry: 1059c132c; end: 1059c13cb; -[SCSelectionRecipientObservableRepositoryImpl _getCachedRankingForContextualSignals:] */

void FUN_1059c132c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11fd20();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar1 & 0xfffffffb) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    uVar1 = param_3;
    func_0x00010c11fd20(param_3);
    func_0x00010c0df760(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059c13cc; end: 1059c1567; -[SCSelectionRecipientObservableRepositoryImpl _setCachedRanking:forContextualSignals:] */

void FUN_1059c13cc(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c11fd20();
  if ((uVar1 & 0xfffffffb) == 0) {
    puVar2 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      _objc_retain(param_3);
      puVar2 = param_3;
      func_0x00010c122f00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf529e0();
      puVar6 = *(undefined **)(param_1 + 0xf8);
      _objc_release(puVar2);
      puVar2 = param_3;
      if (puVar6 < puVar3) {
        puVar2 = PTR_PTR_1126c0a88;
        _objc_alloc(PTR_PTR_1126c0a88);
        puVar3 = param_3;
        func_0x00010c11fc40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_3;
        func_0x00010c122f00(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03cd00(puVar2,param_2,puVar3,puVar4);
        _objc_release(param_3);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar5 = *(undefined8 *)(param_1 + 0xf0);
      uVar1 = param_4;
      func_0x00010c11fd20(param_4);
      func_0x00010c0df760(puVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar5,param_2,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059c1568; end: 1059c16db; -[SCSelectionRecipientObservableRepositoryImpl .cxx_destruct] */

void FUN_1059c1568(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1059c16dc; end: 1059c174f; -[SCGrapheneSelectionRecipientMetric2 init] */

undefined1 * FUN_1059c16dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb310;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1059c1750; end: 1059c18c3;  */

void FUN_1059c1750(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f31a1ad;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108cb700;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb700,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f31a1ad;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_1108cb750;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb750,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f31a1ad;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_1108cb7a0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb7a0,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f31a1ad;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb7f0,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  if (lRam00000001136c1968 != -1) {
    func_0x00010002a2fc(0x1136c1968,&PTR___NSConcreteGlobalBlock_1108cb880);
  }
  if (puVar2 < (undefined *)0x8) {
    uVar7 = *(undefined8 *)(&PTR_DAT_1108cbae0)[(long)puVar2];
    _objc_retain(uVar7);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1059c18c4; end: 1059c1a37;  */

void FUN_1059c18c4(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f31a1ad;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108cb750;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb750,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f31a1ad;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_1108cb7a0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb7a0,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f31a1ad;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108cb7f0,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  if (lRam00000001136c1968 != -1) {
    func_0x00010002a2fc(0x1136c1968,&PTR___NSConcreteGlobalBlock_1108cb880);
  }
  if (puVar1 < (undefined *)0x8) {
    uVar7 = *(undefined8 *)(&PTR_DAT_1108cbae0)[(long)puVar1];
    _objc_retain(uVar7);
  }
  else {
    uVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1059c1a38; end: 1059c1bab;  */

void FUN_1059c1a38(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f31a1ad;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108cb7a0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108cb7a0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f31a1ad;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108cb7f0,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  if (lRam00000001136c1968 != -1) {
    func_0x00010002a2fc(0x1136c1968,&PTR___NSConcreteGlobalBlock_1108cb880);
  }
  if (puVar2 < (undefined *)0x8) {
    uVar5 = *(undefined8 *)(&PTR_DAT_1108cbae0)[(long)puVar2];
    _objc_retain(uVar5);
  }
  else {
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1059c1bac; end: 1059c1d1f;  */

void FUN_1059c1bac(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f31a1ad;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108cb7f0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  if (lRam00000001136c1968 != -1) {
    func_0x00010002a2fc(0x1136c1968,&PTR___NSConcreteGlobalBlock_1108cb880);
  }
  if (puVar1 < (undefined *)0x8) {
    uVar2 = *(undefined8 *)(&PTR_DAT_1108cbae0)[(long)puVar1];
    _objc_retain(uVar2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059c1d20; end: 1059c1e33;  */

void FUN_1059c1d20(ulong param_1)

{
  undefined8 uVar1;
  
  if (lRam00000001136c1968 != -1) {
    func_0x00010002a2fc(0x1136c1968,&PTR___NSConcreteGlobalBlock_1108cb880);
  }
  if (param_1 < 8) {
    uVar1 = *(undefined8 *)(&PTR_DAT_1108cbae0)[param_1];
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c1e34; end: 1059c20fb; -[SCSnapchattersDisplayMetadataCoordinator initWithDocObjectConext:snapchatterObservableRepository:linguisticType:bilingualThreshold:] */

undefined8 *
FUN_1059c1e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126eb318;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 3) = param_5;
    puVar1[4] = param_6;
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f31a21f;
    _dispatch_queue_create(&UNK_10f31a21f,uVar2);
    uVar6 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0a90;
    _objc_alloc();
    func_0x00010c00dac0();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c0a98;
    _objc_alloc();
    func_0x00010c00dd00();
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1059c2104;
    puStack_88 = &UNK_1108cb980;
    _objc_retain();
    puStack_80 = puVar4;
    uStack_78 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar4);
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_a8,puVar1);
    uVar5 = puVar1[2];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0ee960();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_a8);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puStack_80);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059c20fc; end: 1059c2103;  */

void FUN_1059c20fc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c0aa8);
  if (param_2 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_2);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c2104; end: 1059c2327;  */

void FUN_1059c2104(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf85d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfed2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  uStack_58 = 0x1059c21f4;
  puStack_50 = &UNK_1108cb960;
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1059c2328; end: 1059c232f;  */

void FUN_1059c2328(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1059c2330; end: 1059c2357;  */

void FUN_1059c2330(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059c2358; end: 1059c2417;  */

void FUN_1059c2358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_2);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059c37e8;
  puStack_40 = &UNK_1108cba50;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_2;
  func_0x00010bd869d0(param_2,&PTR___NSConcreteGlobalBlock_1108cba30,&puStack_58);
  _objc_release(param_2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059c2418; end: 1059c245f;  */

void FUN_1059c2418(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059c2460; end: 1059c2467; -[SCSnapchattersDisplayMetadataCoordinator warmUp] */

void FUN_1059c2460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf184d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_beginObservation_1125a3ad8);
  return;
}



/* Entry: 1059c2468; end: 1059c2687; -[SCSnapchattersDisplayMetadataCoordinator displayMetadataMapForSnapchatters:] */

void FUN_1059c2468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010bf184c0(*(undefined8 *)(param_1 + 0x38));
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(lVar11 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        if (lVar5 != 0) {
          lVar6 = *(long *)(param_1 + 0x38);
          func_0x00010c292520();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (lVar5 != 0) {
            func_0x00010c1d0640(puVar3);
          }
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    if (*(int *)(param_1 + 0x18) == 2) {
      _objc_retain(puVar3);
      puVar10 = puVar3;
    }
    else {
      puVar7 = *(undefined **)(param_1 + 0x40);
      func_0x00010bfed280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfed460();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      FUN_1059c2358();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_3 + 0x48),PTR_s_target_112678178);
  return;
}



/* Entry: 1059c2688; end: 1059c268f; -[SCSnapchattersDisplayMetadataCoordinator displayMetadataMapObservable] */

void FUN_1059c2688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_target_112678178);
  return;
}



/* Entry: 1059c2690; end: 1059c27c7; -[SCSnapchattersDisplayMetadataCoordinator alphabeticalIndexes] */

void FUN_1059c2690(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bfed280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfed460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar4 = 1;
    FUN_1059c1d20(1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    if (iVar1 != 2) {
      puVar6 = *(undefined **)(param_1 + 0x38);
      func_0x00010bf85ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar7;
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        puVar8 = puVar7;
        FUN_1059c27c8(puVar7,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_release(puVar7);
    }
    _objc_release(uVar4);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1059c27c8; end: 1059c2e2f;  */

void FUN_1059c27c8(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(ulong *)((long)puVar15 * 8);
      func_0x00010c151c00(uVar11);
      uVar11 = uVar11 & 0xffffffff;
      FUN_1059c3908(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar4);
      }
      puVar4 = puVar2;
      func_0x00010c0e00e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar4);
      _objc_release(uVar11);
      puVar15 = puVar15 + 1;
    } while (puVar3 != puVar15);
    puVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c21e8;
  puVar15 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  func_0x00010bf529e0();
  _objc_release(puVar15);
  _objc_retain(puVar2);
  puVar15 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar15 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      ppuVar14 = *(undefined ***)((long)puVar10 * 8);
      puVar13 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010bf529e0();
      _objc_release(puVar13);
      if (param_2 < puVar5) {
        func_0x00010befa120(puVar4);
      }
      if (puVar3 < puVar5) {
        _objc_retain(ppuVar14);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar14;
        puVar3 = puVar5;
      }
      puVar10 = puVar10 + 1;
    } while (puVar15 != puVar10);
    puVar15 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar3 = puVar4;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010befa120(puVar4);
  }
  _objc_retain(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar15 != 0) {
    uVar6 = 1;
    FUN_1059c1d20(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(uVar6);
  }
  puVar15 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar15 != 0) {
    uVar6 = 3;
    FUN_1059c1d20(3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(uVar6);
  }
  puVar15 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar15 != 0) {
    uVar6 = 4;
    FUN_1059c1d20(4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(uVar6);
  }
  puVar15 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar15 != 0) {
    uVar6 = 5;
    FUN_1059c1d20(5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(uVar6);
  }
  puVar15 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar15 != 0) {
    uVar6 = 6;
    FUN_1059c1d20(6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(uVar6);
  }
  puVar15 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar15 != 0) {
    uVar6 = 7;
    FUN_1059c1d20(7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(uVar6);
  }
  _objc_retain(puVar3);
  puVar10 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010bf529e0(puVar3);
  func_0x00010c0ecd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar15 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar15 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      uVar7 = *(undefined8 *)((long)puVar13 * 8);
      func_0x00010c25ce60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c25ce60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      func_0x00010befa120(puVar10);
      _objc_release(uVar6);
      puVar13 = puVar13 + 1;
    } while (puVar15 != puVar13);
    puVar15 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar15 = puVar10;
  func_0x00010bf09f00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar15;
  func_0x00010c0d3c80();
  puVar5 = puVar13;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  puVar13 = puVar5;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar12);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(puVar13);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfed280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c099520();
  _objc_release(uVar7);
  puVar2 = puVar13;
  if ((int)uVar6 == *(int *)(param_1 + 0x18)) {
    puVar15 = param_1;
    func_0x00010be38ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010050471c(puVar13,&PTR___NSConcreteGlobalBlock_1108cb9b0,
                        &PTR___NSConcreteGlobalBlock_1108cb9d0);
    _objc_release(puVar13);
    puVar15 = puVar2;
    FUN_1059c3050(puVar2,*(undefined4 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    uVar6 = 1;
    FUN_1059c1d20(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecd40(puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = puVar15;
    if (*(int *)(param_1 + 0x18) != 2) {
      puVar4 = puVar3;
      FUN_1059c27c8(puVar3,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
    }
    puVar15 = PTR_PTR_1126c0aa0;
    _objc_alloc(PTR_PTR_1126c0aa0);
    puVar10 = puVar4;
    func_0x00010bf09f00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055c00(puVar15);
    _objc_release(puVar10);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    uVar8 = *(ulong *)(param_1 + 0x40);
    func_0x00010bfed280();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010c071ae0();
    _objc_release(uVar8);
    if ((uVar11 & 1) != 0) goto LAB_1059c3020;
  }
  func_0x00010bee6280(param_1);
LAB_1059c3020:
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1059c2e30; end: 1059c303f; -[SCSnapchattersDisplayMetadataCoordinator _onNextSnapchatters:] */

void FUN_1059c2e30(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfed280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c099520();
  _objc_release(uVar2);
  uVar2 = param_3;
  if ((int)uVar3 == *(int *)(param_1 + 0x18)) {
    puVar4 = param_1;
    func_0x00010be38ee0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108cb9b0,
                        &PTR___NSConcreteGlobalBlock_1108cb9d0);
    _objc_release(param_3);
    uVar3 = uVar2;
    FUN_1059c3050(uVar2,*(undefined4 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    uVar3 = 1;
    FUN_1059c1d20(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecd40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = puVar4;
    if (*(int *)(param_1 + 0x18) != 2) {
      puVar5 = puVar1;
      FUN_1059c27c8(puVar1,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126c0aa0;
    _objc_alloc(PTR_PTR_1126c0aa0);
    puVar6 = puVar5;
    func_0x00010bf09f00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055c00(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    uVar7 = *(ulong *)(param_1 + 0x40);
    func_0x00010bfed280();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c071ae0();
    _objc_release(uVar7);
    if ((uVar8 & 1) != 0) goto LAB_1059c3020;
  }
  func_0x00010bee6280(param_1);
LAB_1059c3020:
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059c3040; end: 1059c304f;  */

void FUN_1059c3040(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1059c3050; end: 1059c319b;  */

void FUN_1059c3050(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1059c3950;
  uStack_40 = 0x1059c3960;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  puStack_38 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1059c3968;
  puStack_88 = &UNK_1108cba80;
  puStack_70 = &uStack_60;
  uStack_80 = uVar2;
  uStack_78 = param_1;
  uStack_68 = param_2;
  _objc_retain(param_1);
  _objc_retain(uVar2);
  _dispatch_apply(uVar3,0,&puStack_a0);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059c319c; end: 1059c330f; -[SCSnapchattersDisplayMetadataCoordinator _indexScriptWithSnapchatters:displayMetadatasToUpsert:overwrite:] */

void FUN_1059c319c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be04840(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befa160(param_4);
  _objc_release(lVar2);
  puVar3 = *(undefined **)(param_1 + 0x40);
  func_0x00010bfed280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c099520();
  puVar5 = puVar3;
  if ((int)puVar4 != 2) {
    func_0x00010befa160(puVar1);
    lVar2 = param_4;
    func_0x00010bf529e0();
    if (((param_5 & 1) != 0) || (lVar2 != 0)) {
      puVar4 = puVar1;
      FUN_1059c27c8(puVar1,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c0aa0;
      _objc_alloc(PTR_PTR_1126c0aa0);
      puVar6 = puVar4;
      func_0x00010bf09f00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055c00(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
  }
  _objc_retain(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1059c3310; end: 1059c356b; -[SCSnapchattersDisplayMetadataCoordinator _displayMetadatasToUpsertForSnapchatters:existingDisplayMetadatas:] */

void FUN_1059c3310(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  puVar8 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar3 = uVar13;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c08fa60();
        _objc_release(uVar3);
        if (uVar4 != 0) {
          lVar12 = *(long *)(param_1 + 0x38);
          uVar3 = uVar13;
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf85ce0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar3 = uVar13;
          func_0x00010901d7c4();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
LAB_1059c348c:
            func_0x00010c2923e0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar1);
            _objc_release(uVar13);
          }
          else {
            lVar5 = lVar12;
            func_0x00010c0d5140(lVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(lVar5);
            if ((uVar4 & 1) == 0) goto LAB_1059c348c;
            func_0x00010befa120(param_4);
          }
          _objc_release(uVar3);
          _objc_release(lVar12);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar7 = &uStack_130;
      puVar8 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar6 = puVar1;
  FUN_1059c3050(puVar1,*(undefined4 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  uVar10 = *(undefined8 *)(param_3 + 8);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  func_0x00010c0f8500(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1059c356c; end: 1059c3627; -[SCSnapchattersDisplayMetadataCoordinator _upsertWithDisplayMetadatas:indexScript:] */

void FUN_1059c356c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1059c3628;
  puStack_48 = &UNK_110864a38;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059c3628; end: 1059c374b;  */

void FUN_1059c3628(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
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
      FUN_1059c500c(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1059c5094(param_2);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x48,0);
  _objc_storeStrong(param_2 + 0x40,0);
  _objc_storeStrong(param_2 + 0x38,0);
  _objc_storeStrong(param_2 + 0x30,0);
  _objc_storeStrong(param_2 + 0x28,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 1059c374c; end: 1059c37b7; -[SCSnapchattersDisplayMetadataCoordinator .cxx_destruct] */

void FUN_1059c374c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059c37b8; end: 1059c37bf;  */

void FUN_1059c37b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localizedStandardCompare__1126053e0);
  return;
}



/* Entry: 1059c37c0; end: 1059c37e7;  */

void FUN_1059c37c0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059c37e8; end: 1059c3907;  */

void FUN_1059c37e8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  _objc_retain(param_2);
  iVar5 = (int)*(undefined8 *)(param_1 + 0x20);
  puVar1 = param_2;
  func_0x00010c246f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if (iVar5 == 0) {
    puVar1 = PTR_PTR_1126c0aa8;
    _objc_alloc(PTR_PTR_1126c0aa8);
    puVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010c0d5140(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010c1499e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c151c00(param_2);
    func_0x00010c05b660(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059c3908; end: 1059c394f;  */

void FUN_1059c3908(ulong param_1,undefined8 param_2)

{
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 < 3) {
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059c3950; end: 1059c3967;  */

void FUN_1059c3950(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1059c3968; end: 1059c3ca3;  */

void FUN_1059c3968(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  if (*(int *)(param_1 + 0x38) == 2) {
    _objc_retain();
    lVar10 = 1;
  }
  else {
    lVar10 = lVar3;
    func_0x00010b803fd8();
    iVar1 = *(int *)(param_1 + 0x38);
    _objc_retain(lVar3);
    if (iVar1 != 2) {
      func_0x00010c0d3c80(lVar3);
      lVar8 = lVar10;
      FUN_1059c3908();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c2827c0();
      _objc_release(lVar8);
      if (lVar9 == 1) {
        _CFStringTransform(lVar7,0,*(undefined8 *)PTR__kCFStringTransformToLatin_11034ac08,0);
      }
      if (iVar1 == 0) {
        _CFStringTransform(lVar7,0,*(undefined8 *)
                                    PTR__kCFStringTransformStripCombiningMarks_11034ac00,0);
      }
      goto LAB_1059c39f8;
    }
  }
  _objc_retain(lVar3);
LAB_1059c39f8:
  _objc_release(lVar3);
  _objc_retain(lVar7);
  _objc_retain(lVar7);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1059c3950;
  uStack_60 = 0x1059c3960;
  uStack_58 = 0;
  func_0x00010c08fa60(lVar7);
  func_0x00010bf98040(lVar7);
  ppuVar4 = (undefined **)puStack_78[5];
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(lVar7);
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  FUN_1059c1d20(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  ppuVar12 = ppuVar4;
  func_0x00010c08fa60();
  if ((ppuVar12 == (undefined **)0x0) ||
     (puVar6 = puVar5, func_0x00010bf4b900(), ppuVar12 = ppuVar4, ((ulong)puVar6 & 1) == 0)) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dbf518;
    _objc_retain(&PTR____CFConstantStringClassReference_110dbf518);
    _objc_release(ppuVar4);
  }
  _objc_release(puVar5);
  _objc_release(lVar7);
  puVar5 = PTR_PTR_1126c0aa8;
  _objc_alloc(PTR_PTR_1126c0aa8);
  func_0x00010c05b660();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  _objc_retain(uVar11);
  _objc_sync_enter(uVar11);
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  _objc_sync_exit(uVar11);
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(ppuVar12);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1059c3ca4; end: 1059c3d7b;  */

void FUN_1059c3ca4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *in_x6;
  long lVar5;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf01c80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  lVar5 = lVar3;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    *in_x6 = 1;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1059c3d7c; end: 1059c3f47; -[SCSnapchattersDisplayMetadataFetchedResultObserver initWithDocObjectContext:fetchBlock:] */

undefined8 * FUN_1059c3d7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR_PTR_1126eb320;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0ab0;
    _objc_alloc();
    uVar4 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e14898;
    ppuStack_60 = &PTR___NSConcreteGlobalBlock_1108cbb50;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00dda0();
    uVar6 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = *(undefined8 **)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0001059c3f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar1[2])(puVar1,*(undefined8 *)(param_3 + 0x20));
  return puVar1;
}



/* Entry: 1059c3f48; end: 1059c3f57;  */

void FUN_1059c3f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059c3f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1059c3f58; end: 1059c3fc3; -[SCSnapchattersDisplayMetadataFetchedResultObserver displayMetadataFetchedResult] */

void FUN_1059c3f58(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c24f780(*(undefined8 *)(param_1 + 8));
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bfab8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0ab8;
  _objc_opt_class(PTR_PTR_1126c0ab8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c3fc4; end: 1059c4043; -[SCSnapchattersDisplayMetadataFetchedResultObserver displayMetadataWithUserId:] */

void FUN_1059c3fc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c292520(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059c4044; end: 1059c404b; -[SCSnapchattersDisplayMetadataFetchedResultObserver beginObservation] */

void FUN_1059c4044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservationIfNecessary_112671808);
  return;
}



/* Entry: 1059c404c; end: 1059c40bf; -[SCSnapchattersDisplayMetadataFetchedResultObserver userIdToDisplayMetadataMap] */

void FUN_1059c404c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c24f780(*(undefined8 *)(param_1 + 8));
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c297320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059c40c0; end: 1059c40cb; -[SCSnapchattersDisplayMetadataFetchedResultObserver .cxx_destruct] */

void FUN_1059c40c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059c40cc; end: 1059c40f3;  */

void FUN_1059c40cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108cbb70,
                      &PTR___NSConcreteGlobalBlock_1108cbb90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059c40f4; end: 1059c40fb;  */

void FUN_1059c40f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1059c40fc; end: 1059c4123;  */

void FUN_1059c40fc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059c4124; end: 1059c4293; -[SCSortableSnapchatterServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059c4124(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1059c4294;
  puStack_68 = &UNK_1108cbbb0;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272cf98);
  *(undefined **)(param_1 + _DAT_11272cf98) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0ad0;
  _objc_alloc(PTR_PTR_1126c0ad0);
  func_0x00010c04a400();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059c4294; end: 1059c4383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059c4294(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11272cf90;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11272cf94;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2445a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c0ac0;
    _objc_alloc(PTR_PTR_1126c0ac0);
    func_0x00010c00d800();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059c4384; end: 1059c441f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059c4384(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_11272cf94;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2445a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c0ac8;
    _objc_alloc(PTR_PTR_1126c0ac8);
    func_0x00010c049ea0();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059c4420; end: 1059c4473; -[SCSortableSnapchatterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059c4420(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272cf94);
  _objc_destroyWeak(param_1 + _DAT_11272cf90);
  _objc_destroyWeak(param_1 + _DAT_11272cf9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272cf98,0);
  return;
}



/* Entry: 1059c4474; end: 1059c4517; -[SCSortableSnapchatterObservableRepositoryImpl initWithSnapchattersDisplayMetadataCoordinator:snapchatterObservableRepository:] */

undefined1 *
FUN_1059c4474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb328;
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



/* Entry: 1059c4518; end: 1059c45eb; -[SCSortableSnapchatterObservableRepositoryImpl outgoingSnapchatterObservableWithQueue:] */

void FUN_1059c4518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0ee960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf85cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar3,&PTR___NSConcreteGlobalBlock_1108cbc30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059c45ec; end: 1059c47bf;  */

void FUN_1059c45ec(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar7 = *(long *)((long)puVar8 * 8);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        lVar4 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126c0ad8;
          _objc_alloc(PTR_PTR_1126c0ad8);
          func_0x00010c048d80();
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar7);
      puVar8 = puVar8 + 1;
    } while (puVar3 != puVar8);
    puVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x00010c0ee960();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


