/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10044c2d0; end: 10044c357; -[PINOperationQueue locked_nextOperationByPriority] */

void FUN_10044c2d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x000107c43638();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x90);
      func_0x000107c43638();
      func_0x000107c61180();
      if (lVar1 == 0) goto LAB_10044c334;
    }
  }
  func_0x000107c4b990(param_1,param_2,lVar1);
LAB_10044c334:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10044c358; end: 10044c4f7;  */

/* WARNING: Possible PIC construction at 0x00010044c3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044c468) */
/* WARNING: Removing unreachable block (ram,0x00010044c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010044c4dc) */
/* WARNING: Removing unreachable block (ram,0x00010044c498) */
/* WARNING: Removing unreachable block (ram,0x00010044c3c4) */
/* WARNING: Removing unreachable block (ram,0x00010044c404) */
/* WARNING: Removing unreachable block (ram,0x00010044c40c) */
/* WARNING: Removing unreachable block (ram,0x00010044c410) */
/* WARNING: Removing unreachable block (ram,0x00010044c420) */
/* WARNING: Removing unreachable block (ram,0x00010044c428) */
/* WARNING: Removing unreachable block (ram,0x00010044c444) */
/* WARNING: Removing unreachable block (ram,0x00010044c460) */
/* WARNING: Removing unreachable block (ram,0x00010044c4e8) */
/* WARNING: Removing unreachable block (ram,0x00010044c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010044c518) */
/* WARNING: Removing unreachable block (ram,0x00010044c538) */
/* WARNING: Removing unreachable block (ram,0x00010044c540) */

void FUN_10044c358(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c3eae4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c41214(uVar2);
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10044c4f8; end: 10044c563;  */

void FUN_10044c4f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c4b940(lVar1);
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5d278(lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x000107c5d048(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10044c564; end: 10044c56f; -[PINDiskCache unlock] */

void FUN_10044c564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_unlockWithCondition__11267ddc8,1);
  return;
}



/* Entry: 10044c570; end: 10044c57f; -[PINDiskCache trimDiskToSizeByDate:] */

void FUN_10044c570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__trimDiskToSize_evictPolicy_reas_1125919b8,param_3,PTR_PTR_1133e0f78,3);
  return;
}



/* Entry: 10044c580; end: 10044c743; -[PINDiskCache _trimDiskToSize:evictPolicy:reason:] */

long FUN_10044c580(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c4b940(param_1);
  if (param_3 < *(ulong *)(param_1 + 0x88)) {
    unaff_x21 = param_4;
    (**(code **)(param_4 + 0x10))
              (param_4,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
               *(undefined8 *)(param_1 + 0xb8));
    func_0x000107c61180();
    func_0x000107c61174();
    lVar2 = unaff_x21;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(unaff_x21);
        }
        func_0x000107c5d278(param_1);
        func_0x000107c4ff14(param_1);
        func_0x000107c4b940(param_1);
        if (*(ulong *)(param_1 + 0x88) <= param_3) goto LAB_10044c6a8;
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = unaff_x21;
      func_0x000107c4080c();
    }
LAB_10044c6a8:
    func_0x000107c61170(unaff_x21);
    func_0x000107c61170(unaff_x21);
  }
  func_0x000107c5d278(param_1);
  lVar2 = param_4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(unaff_x21);
  func_0x000107c61170(param_4);
  func_0x000107c60bd8();
  return *(long *)(lVar2 + 0x20);
}



/* Entry: 10044c744; end: 10044c74b; -[PINOperation completions] */

undefined8 FUN_10044c744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10044c74c; end: 10044c79f; -[PINOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010044c764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010044c77c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044c768) */
/* WARNING: Removing unreachable block (ram,0x00010044c780) */

void FUN_10044c74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10044c7a0; end: 10044c7a7;  */

void FUN_10044c7a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 10044c7a8; end: 10044c7af; -[SCCache kindName] */

undefined8 FUN_10044c7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10044c7b0; end: 10044c83f; -[SCStoriesCallbackArray initWithPerformer:] */

undefined1 * FUN_10044c7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc350;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044c840; end: 10044c8ff; -[SCStoriesMediaDownloader initWithPerformer:requestManager:] */

undefined1 *
FUN_10044c840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fa6d0;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044c900; end: 10044c98f; -[SCStoriesThumbnailCoordinator updateWithMediaProvider:] */

void FUN_10044c900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10044d8a8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10044c990; end: 10044cc4f; -[SCStoriesServices initWithStoriesDataCoordinator:storiesMediaCoordinator:storiesThumbnailCoordinator:messagingStoryPlaybackOrderDecider:snapViewerDataCoordinator:friendStoriesSyncer:customStoriesDataMutator:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesOnboardingManager:storiesRankingCoordinator:storiesCachedPropertiesCoordinator:] */

undefined8 *
FUN_10044c990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  puStack_68 = PTR_PTR_112706920;
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
  }
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



/* Entry: 10044cc50; end: 10044cd4b;  */

void FUN_10044cc50(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10044cd4c; end: 10044cd53;  */

void FUN_10044cd4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044cd54; end: 10044cda7;  */

void FUN_10044cd54(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xf8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044cda8; end: 10044cdaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044cda8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = &lStack_50;
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10021b614();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_113041e48) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_113041e50) = uStack_40;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 10044cdb0; end: 10044ce3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044cdb0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10021b614();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113041e48) = uStack_38;
  *(undefined8 *)(lVar1 + _DAT_113041e50) = uStack_40;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar2;
  return;
}



/* Entry: 10044ce3c; end: 10044ce73;  */

void FUN_10044ce3c(undefined8 param_1)

{
  if (lRam0000000112dc3e70 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e64fb94);
  return;
}



/* Entry: 10044ce74; end: 10044d1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044ce74(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar1 = 0;
  FUN_10044ce3c();
  func_0x000107c613fc();
  uVar2 = 0;
  FUN_10044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  uVar3 = 0;
  FUN_10006a340();
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  uVar2 = uVar3;
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  FUN_1000285a8(0x112dc3808,&UNK_10d980f20);
  func_0x000107c613fc();
  uVar2 = 1;
  FUN_10008747c();
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10044d428();
  *(undefined **)(lVar1 + 0x78) = puVar4;
  uVar2 = uVar3;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar1 + 0x80) = uVar2;
  lVar6 = _DAT_112dc3df0;
  lVar5 = 0x112dc3810;
  FUN_1000285a8(0x112dc3810,&UNK_10d981500);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar1 + lVar6,1,1,lVar5);
  lVar5 = _DAT_112dc3dc0;
  uVar2 = uVar3;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar1 + lVar5) = uVar2;
  *(undefined **)(lVar1 + _DAT_112dc3e00) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar5 = _DAT_112dc3dd0;
  uVar2 = uVar3;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar1 + lVar5) = uVar2;
  lVar5 = _DAT_112dc3da8;
  lVar6 = 0;
  FUN_10044d5c8();
  func_0x000107c613fc();
  FUN_1003d8468();
  *(undefined **)(lVar6 + 0x10) = puVar7;
  *(undefined1 *)(lVar6 + 0x18) = 0;
  uVar2 = uVar3;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(long *)(lVar1 + lVar5) = lVar6;
  *(undefined8 *)(lVar1 + _DAT_112dc3e08) = 0;
  lVar5 = _DAT_112dc3e10;
  uVar2 = uVar3;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar1 + lVar5) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_112dc3e18) = 0;
  lVar5 = _DAT_112dc3da0;
  uVar2 = uVar3;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar1 + lVar5) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_112dc3e20) = 0;
  *(undefined8 *)(lVar1 + _DAT_112dc3e28) = 0;
  *(undefined8 *)(lVar1 + _DAT_112dc3e30) = 0;
  *(undefined1 *)(lVar1 + _DAT_112dc3e40) = 0;
  lVar5 = _DAT_112dc3e38;
  func_0x000107c613fc(uVar3,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(lVar1 + lVar5) = uVar3;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  *(undefined8 *)(lVar1 + 0x30) = param_8;
  *(undefined8 *)(lVar1 + 0x38) = param_9;
  *(undefined8 *)(lVar1 + 0x40) = param_10;
  FUN_1000285a8(0x112dc3a78,&UNK_10d9810e0);
  puVar7 = &UNK_1103fdce0;
  func_0x000107c613fc(&UNK_1103fdce0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_5;
  *(undefined8 *)(puVar7 + 0x18) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  puVar4 = &UNK_1017150a4;
  FUN_1000823a8(&UNK_1017150a4,puVar7);
  *(undefined **)(lVar1 + 0x48) = puVar4;
  *param_1 = lVar1;
  return;
}



/* Entry: 10044d1e8; end: 10044d1f3;  */

void FUN_10044d1e8(void)

{
  long unaff_x20;
  
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10044d1f4; end: 10044d227;  */

void FUN_10044d1f4(void)

{
  long unaff_x20;
  
  FUN_10044ce74(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10044d228; end: 10044d287;  */

void FUN_10044d228(long param_1)

{
  long lVar1;
  
  if (lRam0000000112dc3e80 == 0) {
    lVar1 = 0x112dc3810;
    FUN_10002969c(0x112dc3810,&UNK_10d981500);
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112dc3e80 = param_1;
    }
  }
  return;
}



/* Entry: 10044d288; end: 10044d36b;  */

void FUN_10044d288(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR___sBoWV_11034d678 + 0x40;
  puStack_e0 = &UNK_10d9814e8;
  puStack_d8 = PTR___sBi64_WV_11034d670 + 0x40;
  puVar2 = PTR___sBbWV_11034d660 + 0x40;
  lVar3 = 0x13f;
  puStack_128 = puVar1;
  puStack_120 = puVar1;
  puStack_118 = puVar1;
  puStack_110 = puVar1;
  puStack_108 = puVar1;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  puStack_f0 = puVar1;
  puStack_e8 = puVar1;
  puStack_d0 = puVar1;
  puStack_c8 = puVar1;
  puStack_c0 = puVar2;
  puStack_b8 = puVar1;
  FUN_10044d228();
  if (param_2 < 0x40) {
    lStack_b0 = *(long *)(lVar3 + -8) + 0x40;
    puStack_88 = &UNK_10d9814e8;
    puStack_78 = &UNK_10d9814e8;
    puStack_68 = &UNK_10d9814e8;
    puStack_60 = &UNK_10d9814e8;
    puStack_58 = &UNK_10d9814e8;
    puStack_50 = &UNK_10d981508;
    puStack_a8 = puVar1;
    puStack_a0 = puVar2;
    puStack_98 = puVar1;
    puStack_90 = puVar1;
    puStack_80 = puVar1;
    puStack_70 = puVar1;
    puStack_48 = puVar1;
    func_0x000107c61630(param_1,0x100,0x1d,&puStack_128,param_1 + 0x50);
  }
  return;
}



/* Entry: 10044d36c; end: 10044d3b3;  */

void FUN_10044d36c(void)

{
  func_0x000107c61168(&PTR_PTR_112fef690);
  return;
}



/* Entry: 10044d3b4; end: 10044d427; -[SCGrapheneCreatorSubscriptionsMetric2 init] */

undefined1 * FUN_10044d3b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f97b0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10044d428; end: 10044d5b7;  */

undefined * FUN_10044d428(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112dc3830;
  FUN_1000285a8(0x112dc3830,&UNK_10d980f50);
  lVar12 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    FUN_1000285a8(0x112dc3838,&UNK_10d9816d0);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar12 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000101705610(param_1,puVar9,0x112dc3830,&UNK_10d980f50);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10044d5b4);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar11 = *(long *)(puVar6 + 0x38);
      lVar12 = 0x112dc3840;
      FUN_1000285a8(0x112dc3840,&UNK_10d980f60);
      func_0x000101705658((long)puVar9 + (long)iVar4,
                          lVar11 + *(long *)(*(long *)(lVar12 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10044d5b8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 10044d5b8; end: 10044d5c7;  */

undefined1  [16] FUN_10044d5b8(void)

{
  return ZEXT816(0x11072f1d0);
}



/* Entry: 10044d5c8; end: 10044d66b;  */

void FUN_10044d5c8(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3888);
  return;
}



/* Entry: 10044d66c; end: 10044d67b;  */

void FUN_10044d66c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = lVar1;
  FUN_10044d67c();
  func_0x000107c613fc();
  if (lRam0000000112dc3998 != -1) {
    func_0x000107c61568(0x112dc3998,FUN_10044d850);
  }
  uVar6 = uRam0000000112dc39a0;
  func_0x000107c5fadc(uRam0000000112dc39a0,uRam0000000112dc39a8);
  puVar7 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar5 + 0x28) = puVar7;
  *(undefined1 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  FUN_1000285a8(0x112dc3a78,&UNK_10d9810e0);
  puVar7 = &UNK_1103fd4e8;
  func_0x000107c613fc(&UNK_1103fd4e8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar4;
  *(undefined8 *)(puVar7 + 0x18) = uVar9;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  puVar8 = &UNK_1017073bc;
  FUN_1000823a8(&UNK_1017073bc,puVar7);
  *(undefined **)(lVar5 + 0x18) = puVar8;
  FUN_1000285a8(0x112d498c8,&UNK_10d942730);
  puVar7 = &UNK_1103fd510;
  func_0x000107c613fc(&UNK_1103fd510,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(long *)(puVar7 + 0x18) = lVar1;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(lVar1);
  puVar8 = &UNK_1017073f4;
  FUN_1000823a8(&UNK_1017073f4,puVar7);
  *(undefined **)(lVar5 + 0x20) = puVar8;
  *param_1 = lVar5;
  return;
}



/* Entry: 10044d67c; end: 10044d69b;  */

void FUN_10044d67c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc39f8);
  return;
}



/* Entry: 10044d69c; end: 10044d827;  */

void FUN_10044d69c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_2;
  FUN_10044d67c();
  func_0x000107c613fc();
  if (lRam0000000112dc3998 != -1) {
    func_0x000107c61568(0x112dc3998,FUN_10044d850);
  }
  uVar2 = uRam0000000112dc39a0;
  func_0x000107c5fadc(uRam0000000112dc39a0,uRam0000000112dc39a8);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar2);
  *(undefined **)(lVar1 + 0x28) = puVar3;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  FUN_1000285a8(0x112dc3a78,&UNK_10d9810e0);
  puVar3 = &UNK_1103fd4e8;
  func_0x000107c613fc(&UNK_1103fd4e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  puVar4 = &UNK_1017073bc;
  FUN_1000823a8(&UNK_1017073bc,puVar3);
  *(undefined **)(lVar1 + 0x18) = puVar4;
  FUN_1000285a8(0x112d498c8,&UNK_10d942730);
  puVar3 = &UNK_1103fd510;
  func_0x000107c613fc(&UNK_1103fd510,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(long *)(puVar3 + 0x18) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  puVar4 = &UNK_1017073f4;
  FUN_1000823a8(&UNK_1017073f4,puVar3);
  *(undefined **)(lVar1 + 0x20) = puVar4;
  *param_1 = lVar1;
  return;
}



/* Entry: 10044d828; end: 10044d84f;  */

void FUN_10044d828(void)

{
  long unaff_x20;
  
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10044d850; end: 10044d8a7;  */

void FUN_10044d850(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  func_0x00010044d838();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lRam0000000112dc39a0 = lVar2;
    uRam0000000112dc39a8 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10044d8a8);
  (*pcVar1)();
}



/* Entry: 10044d8a8; end: 10044d8b3;  */

void FUN_10044d8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c5050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_setMediaProvider__11264ee38,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10044d8b4; end: 10044d8c7; -[SCMyStoriesMediaThumbnailGenerator setMediaProvider:] */

void FUN_10044d8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10044d8c8; end: 10044d99f;  */

void FUN_10044d8c8(long param_1)

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
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d67e0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10044d9a0; end: 10044d9f7; -[SCStoriesCachedPropertiesCoordinator _loadMetaInfoFromDisk] */

/* WARNING: Possible PIC construction at 0x00010044d9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044d9e8) */

void FUN_10044d9a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_10044d8c8();
  func_0x000107c61180();
  FUN_10050471c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10044d9f8; end: 10044da67;  */

void FUN_10044d9f8(void)

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



/* Entry: 10044da68; end: 10044dd57; -[SCStoriesPlaybackServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044da68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10691d804;
  puStack_90 = &UNK_11094a870;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_10691d844;
  puStack_b8 = &UNK_11094a870;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_10691d884;
  puStack_e8 = &UNK_11094a8a0;
  func_0x000107c6111c(auStack_d8,auStack_80);
  puStack_e0 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puStack_128 = puVar5;
  uStack_120 = 0xc2000000;
  puStack_118 = &UNK_10691d8cc;
  puStack_110 = &UNK_11094a8d0;
  puVar4 = PTR_PTR_1126ae720;
  puStack_108 = puVar3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_130,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126cf108;
  func_0x000107c610f4(PTR_PTR_1126cf108);
  func_0x000107c47898();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112753bcc));
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_130);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 10044dd58; end: 10044dfb7; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices initWithMyStoriesPlaybackDataProvider:friendStoriesPlaybackDataProvider:friendStoriesNonFriendStoriesCombinedPlaybackDataProvider:remoteStoriesDataProvider:remoteStoriesDataProviderFactory:singleSnapStoriesDataProvider:] */

undefined8
FUN_10044dd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  uVar2 = param_3;
  func_0x00010044de48(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return uVar2;
}



/* Entry: 10044dfb8; end: 10044dfcf;  */

void FUN_10044dfb8(long param_1,long param_2)

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



/* Entry: 10044dfd0; end: 10044e07b;  */

void FUN_10044dfd0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10044e07c; end: 10044e083;  */

void FUN_10044e07c(undefined8 *param_1)

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



/* Entry: 10044e084; end: 10044e0d7;  */

void FUN_10044e084(undefined8 *param_1)

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



/* Entry: 10044e0d8; end: 10044e0e3;  */

void FUN_10044e0d8(undefined8 *param_1)

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
  FUN_10009e528();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10044e1b4(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044e0e4; end: 10044e1b3;  */

void FUN_10044e0e4(undefined8 *param_1)

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
  FUN_10009e528();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10044e1b4(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044e1b4; end: 10044e463;  */

void FUN_10044e1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = PTR_PTR_1126a7208;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef851f0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10044e464);
  (*pcVar1)();
}



/* Entry: 10044e464; end: 10044e563; -[SCLegacyPermissionRequestEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e464(long param_1)

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
  puVar2 = PTR_PTR_1126d5070;
  func_0x000107c610f4(PTR_PTR_1126d5070);
  func_0x000107c47e50();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112765168));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10044e564; end: 10044e5ff; -[SCLegacyPermissionRequestServices initWithPermissionRequestManager:] */

undefined1 * FUN_10044e564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702ad8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044e600; end: 10044e63b;  */

void FUN_10044e600(void)

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



/* Entry: 10044e63c; end: 10044e643;  */

void FUN_10044e63c(undefined8 *param_1)

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



/* Entry: 10044e644; end: 10044e697;  */

void FUN_10044e644(undefined8 *param_1)

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



/* Entry: 10044e698; end: 10044e6a3;  */

void FUN_10044e698(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100343608();
  func_0x000107c613fc();
  FUN_10044e758(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044e6a4; end: 10044e74f;  */

void FUN_10044e6a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100343608();
  func_0x000107c613fc();
  FUN_10044e758(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = param_2;
  return;
}



/* Entry: 10044e750; end: 10044e757;  */

void FUN_10044e750(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10044e758; end: 10044e9ff;  */

void FUN_10044e758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  FUN_1000285a8(0x112f34c90,&UNK_10db7cf38);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c6157c(param_4);
  FUN_1003b3b80();
  puVar1 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126aca78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055850);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
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
  func_0x000107c61574(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 10044ea00; end: 10044ea1f;  */

void FUN_10044ea00(void)

{
  func_0x000107c61168(&PTR_PTR_1128b1118);
  return;
}



/* Entry: 10044ea20; end: 10044ea6b; -[SCStoriesFeatureNavigationServiceProvider provide] */

void FUN_10044ea20(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c3b298();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126cf0f8;
  func_0x000107c610f4(PTR_PTR_1126cf0f8);
  func_0x000107c4685c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10044ea6c; end: 10044eb23; -[SCStoriesFeatureNavigationServiceProvider _createLazyStoriesFeatureNavigationRouter] */

void FUN_10044ea6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10044eb24; end: 10044eb7b; -[_TtC34SCStoriesFeatureNavigationServices34SCStoriesFeatureNavigationServices initWithFeatureNavigationRouter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044eb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb9ab0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10044eb7c; end: 10044ebb7;  */

void FUN_10044eb7c(void)

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



/* Entry: 10044ebb8; end: 10044ebbf;  */

void FUN_10044ebb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044ebc0; end: 10044ec13;  */

void FUN_10044ebc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044ec14; end: 10044ec27;  */

void FUN_10044ec14(long *param_1)

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
  long lVar13;
  long unaff_x20;
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
  FUN_1002c67a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
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
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a8e98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar3);
  uVar11 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f009e50);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
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
    *(long *)(lVar2 + 0x50) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10044f100);
  (*pcVar1)();
}



/* Entry: 10044ec28; end: 10044f0ff;  */

void FUN_10044ec28(long *param_1,long param_2)

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
  FUN_1002c67a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
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
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8e98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar2);
  uVar10 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f009e50);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
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
    *(long *)(param_2 + 0x50) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10044f100);
  (*pcVar1)();
}



/* Entry: 10044f100; end: 10044f1ff; -[SCNetworkImageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044f100(long param_1)

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
  puVar2 = PTR_PTR_1126bdfd0;
  func_0x000107c610f4(PTR_PTR_1126bdfd0);
  func_0x000107c46de8();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272954c));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10044f200; end: 10044f273; -[SCNetworkImageServices initWithImageDownloader:] */

undefined1 * FUN_10044f200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ffe80;
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



/* Entry: 10044f274; end: 10044f2c7;  */

void FUN_10044f274(void)

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



/* Entry: 10044f2c8; end: 10044f2cf;  */

void FUN_10044f2c8(undefined8 *param_1)

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



/* Entry: 10044f2d0; end: 10044f323;  */

void FUN_10044f2d0(undefined8 *param_1)

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



/* Entry: 10044f324; end: 10044f32f;  */

void FUN_10044f324(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1003311bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126ac970;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1186f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10044f330; end: 10044f5e3;  */

void FUN_10044f330(long *param_1,long param_2)

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
  FUN_1003311bc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac970;
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
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1186f0);
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



/* Entry: 10044f5e4; end: 10044f5eb;  */

void FUN_10044f5e4(undefined8 *param_1)

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



/* Entry: 10044f5ec; end: 10044f63f;  */

void FUN_10044f5ec(undefined8 *param_1)

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



/* Entry: 10044f640; end: 10044f64b;  */

void FUN_10044f640(undefined8 *param_1)

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
  FUN_100094510();
  func_0x000107c613fc();
  FUN_100450d2c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044f64c; end: 10044f6df;  */

void FUN_10044f64c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100094510();
  func_0x000107c613fc();
  FUN_100450d2c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10044f6e0; end: 10044f6e7;  */

void FUN_10044f6e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6fe0;
  func_0x000107c610f8(PTR_PTR_1126a6fe0);
  func_0x000107c459d8();
  func_0x000107c61168(PTR_PTR_1126d0630);
  func_0x000107c497b8();
  uVar2 = 0;
  FUN_10009438c(0);
  func_0x000107c610f8();
  FUN_100450ce0(unaff_x20,uVar2);
  func_0x000107c61170(puVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10044f6e8; end: 10044f76f;  */

void FUN_10044f6e8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6fe0;
  func_0x000107c610f8(PTR_PTR_1126a6fe0);
  func_0x000107c459d8();
  func_0x000107c61168(PTR_PTR_1126d0630);
  func_0x000107c497b8();
  uVar2 = 0;
  FUN_10009438c(0);
  func_0x000107c610f8();
  FUN_100450ce0(param_2,uVar2);
  func_0x000107c61170(puVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10044f770; end: 10044f7e3; -[SCBlizzardNativeLogger initWithBlizzardLogger:] */

undefined1 * FUN_10044f770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4ad8;
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



/* Entry: 10044f7e4; end: 10044f8a7; +[SCNBlizzardNativeBlizzardEventLoggerInstaller installBlizzardLogger:] */

void FUN_10044f7e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_10044f8a8(&uStack_40,param_3);
  }
  func_0x00010044faac();
  FUN_10044fb20(&uStack_40);
  func_0x000100450c54(&uStack_40);
  func_0x00010044faac();
  return;
}



/* Entry: 10044f8a8; end: 10044f957;  */

void FUN_10044f8a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110960288;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10044f958);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10044fa58(&uStack_50);
  }
  func_0x00010044faa4();
  return;
}



/* Entry: 10044f958; end: 10044fa57;  */

void FUN_10044f958(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109602c8;
  puVar4[3] = &PTR_DAT_110960340;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110960318;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10044fa58(&uStack_50);
  return;
}



/* Entry: 10044fa58; end: 10044fa83;  */

long FUN_10044fa58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10044fa84; end: 10044fab3;  */

void FUN_10044fa84(long param_1)

{
  undefined8 *in_x10;
  undefined8 *in_x12;
  long in_x13;
  
  *in_x10 = *in_x12;
  *in_x12 = **(undefined8 **)(param_1 + in_x13 * 8);
  **(undefined8 **)(param_1 + in_x13 * 8) = in_x12;
  return;
}



/* Entry: 10044fab4; end: 10044fb1f;  */

undefined8 FUN_10044fab4(void)

{
  int iVar1;
  
  if ((bRam000000011383d770 & 1) == 0) {
    iVar1 = 0x1383d770;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10044fb44(0x11383d710);
      func_0x000107c60e4c(0x11383d770);
    }
  }
  return 0x11383d710;
}



/* Entry: 10044fb20; end: 10044fb43;  */

void FUN_10044fb20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10044fab4();
  func_0x000107c60d88(lVar1 + 0x20);
  func_0x000100450c7c(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x20);
  return;
}



/* Entry: 10044fb44; end: 10044fc1b;  */

undefined8 * FUN_10044fb44(undefined8 *param_1)

{
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0x32aaaba7;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  FUN_10002b838(auStack_58,&UNK_10f770c3f);
  FUN_10044fc54(auStack_40,auStack_58,0x15,4,0);
  FUN_100450bb4(param_1 + 2,auStack_40);
  FUN_100450be4(auStack_40);
  func_0x000107c60ca0(auStack_58);
  return param_1;
}



/* Entry: 10044fc1c; end: 10044fc53;  */

void FUN_10044fc1c(int *param_1)

{
  int iVar1;
  long lVar2;
  int extraout_w8;
  int extraout_w8_00;
  undefined1 auStack_38 [24];
  
  switch((ulong)param_1 & 0xffffffff) {
  case 0:
    func_0x000107c3a544(param_1,&UNK_10f82fc0f);
    func_0x000107c31448();
    iVar1 = *param_1;
    if ((*(byte *)(param_1 + 2) & 0 < iVar1) == 0) {
      iVar1 = 2;
    }
    func_0x00010bcce650(auStack_38,iVar1);
    func_0x000107c3a530();
    break;
  case 1:
    FUN_10028b8c8(param_1,&UNK_10f82fc04);
    FUN_10028b93c();
    iVar1 = param_1[3];
    if ((*(byte *)(param_1 + 5) & 0 < iVar1) == 0) {
      iVar1 = 2;
    }
    FUN_10028b9bc(auStack_38,iVar1);
    func_0x00010028bc60();
    break;
  case 2:
    FUN_10028b8c8(param_1,&UNK_10f82fbf1);
    FUN_10028b93c();
    func_0x000107c60db8();
    FUN_10044fd58();
    iVar1 = param_1[6];
    if ((*(byte *)(param_1 + 8) & 0 < iVar1) == 0) {
      iVar1 = extraout_w8_00;
    }
    FUN_10046e4ec(auStack_38,iVar1);
    func_0x00010028bc60();
    break;
  default:
    if ((bRam0000000113847190 & 1) == 0) {
      lVar2 = 0x113847190;
      func_0x000107c60e48();
      if ((int)lVar2 != 0) {
        FUN_10028b8c8();
        FUN_10028b93c();
        func_0x000107c60db8();
        FUN_10044fd58();
        iVar1 = *(int *)(lVar2 + 0x24);
        if ((*(byte *)(lVar2 + 0x2c) & 0 < iVar1) == 0) {
          iVar1 = extraout_w8;
        }
        FUN_10044fd6c(auStack_38,iVar1);
        FUN_10044ff14();
        func_0x00010028bc60();
        lRam0000000113847188 = lVar2;
        func_0x000107c60e4c(0x113847190);
      }
    }
    break;
  case 5:
    func_0x000107c3a544(param_1,&UNK_10f82fc1b);
    func_0x000107c31448();
    iVar1 = param_1[0xc];
    if ((*(byte *)(param_1 + 0xe) & 0 < iVar1) == 0) {
      iVar1 = 1;
    }
    func_0x00010bcce730(auStack_38,iVar1);
    func_0x000107c3a530();
  }
  return;
}



/* Entry: 10044fc54; end: 10044fc97;  */

void FUN_10044fc54(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_5;
  uStack_24 = param_3;
  FUN_10044fc1c(param_4);
  FUN_100450648(param_1,param_2,&uStack_24,param_4,&uStack_28);
  return;
}



/* Entry: 10044fc98; end: 10044fd57;  */

long FUN_10044fc98(void)

{
  int iVar1;
  long lVar2;
  int extraout_w8;
  undefined1 auStack_38 [24];
  
  if ((bRam0000000113847190 & 1) == 0) {
    lVar2 = 0x113847190;
    func_0x000107c60e48();
    if ((int)lVar2 != 0) {
      FUN_10028b8c8();
      FUN_10028b93c();
      func_0x000107c60db8();
      FUN_10044fd58();
      iVar1 = *(int *)(lVar2 + 0x24);
      if ((*(byte *)(lVar2 + 0x2c) & 0 < iVar1) == 0) {
        iVar1 = extraout_w8;
      }
      FUN_10044fd6c(auStack_38,iVar1);
      FUN_10044ff14();
      func_0x00010028bc60();
      lRam0000000113847188 = lVar2;
      func_0x000107c60e4c(0x113847190);
    }
  }
  return lRam0000000113847188;
}



/* Entry: 10044fd58; end: 10044fd6b;  */

void FUN_10044fd58(void)

{
  return;
}



/* Entry: 10044fd6c; end: 10044fdf3;  */

undefined8 FUN_10044fd6c(void)

{
  int iVar1;
  undefined8 unaff_x20;
  
  if ((bRam0000000113404428 & 1) == 0) {
    iVar1 = 0x13404428;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10028ba44();
      func_0x00010028ba4c();
      FUN_10028ba78();
      uRam0000000113404420 = unaff_x20;
      func_0x000107c60e4c(0x113404428);
    }
  }
  return uRam0000000113404420;
}



/* Entry: 10044fdf4; end: 10044fe1f;  */

long FUN_10044fdf4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10044fdf4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10044fe20; end: 10044fe4b;  */

long FUN_10044fe20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10044fdf4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10044fe4c; end: 10044feeb;  */

void FUN_10044fe4c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 1;
  FUN_10044fe20(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110d9a4a0;
  uVar4 = *param_3;
  puStack_30[3] = &PTR_DAT_110d9a3e0;
  puStack_30[4] = uVar4;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_100450030(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_10044feec;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10044fe4c(&uStack_51,puVar2,uVar3);
  return;
}



/* Entry: 10044feec; end: 10044ff13;  */

void FUN_10044feec(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10044fe4c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10044ff14; end: 10045002f;  */

undefined8 FUN_10044ff14(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10044feec(&uStack_38,&uStack_28,&uStack_50);
  FUN_100450040(&uStack_50);
  uStack_60 = uStack_38;
  lStack_58 = lStack_30;
  if (lStack_30 == 0) {
    lStack_68 = 0;
  }
  else {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_68 = lStack_30;
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
  }
  lStack_78 = lStack_48;
  uStack_80 = uStack_50;
  if (lStack_48 != 0) {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_100450464(&uStack_60,auStack_70,&uStack_80);
  FUN_100450518(&uStack_80);
  func_0x00010045053c(auStack_70);
  func_0x00010045053c(&uStack_60);
  uVar4 = uStack_28;
  FUN_100450518(&uStack_50);
  FUN_10045056c(&uStack_38);
  return uVar4;
}



/* Entry: 100450030; end: 10045003f;  */

void FUN_100450030(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


